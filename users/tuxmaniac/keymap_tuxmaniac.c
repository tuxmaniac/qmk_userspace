#include QMK_KEYBOARD_H

enum my_keycodes {
    U_MISSION_CONTROL = SAFE_RANGE,
    U_LAUNCHPAD,
    U_SEARCH,
    U_UND,
    U_RDO,
    U_CPY,
    U_PST,
    U_CUT,
    U_LOCK,
    U_PTB,
    U_NTB,
    U_SCRSHOT,
    U_LASSO,
    U_FUND,
    U_FRDO,
    U_FCPY,
    U_FPST,
    U_FCUT
};

#include "keycodes.h"
#include "layers.h"
#include "layer_list.h"

enum all_layers {
#define LAYER_X(LAYER, STRING) U_##LAYER,
LAYER_LIST
#undef LAYER_X
};

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)

// double tap guard

enum {
U_TD_BOOT,
#define LAYER_X(LAYER, STRING) U_TD_U_##LAYER,
LAYER_LIST
#undef LAYER_X
};

void u_td_fn_boot(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    reset_keyboard();
  }
}

#define LAYER_X(LAYER, STRING) \
void u_td_fn_U_##LAYER(tap_dance_state_t *state, void *user_data) { \
  if (state->count == 2) { \
    default_layer_set((layer_state_t)1 << U_##LAYER); \
  } \
}
LAYER_LIST
#undef LAYER_X

tap_dance_action_t tap_dance_actions[] = {
    [U_TD_BOOT] = ACTION_TAP_DANCE_FN(u_td_fn_boot),
#define LAYER_X(LAYER, STRING) [U_TD_U_##LAYER] = ACTION_TAP_DANCE_FN(u_td_fn_U_##LAYER),
LAYER_LIST
#undef LAYER_X
};

// keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#define LAYER_X(LAYER, STRING) [U_##LAYER] = U_MACRO_VA_ARGS(LAYOUT_tuxmaniac, LAYER_##LAYER),
LAYER_LIST
#undef LAYER_X
};

#ifdef RGB_MATRIX_ENABLE
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color_all(4, 0, 0);
    } else {
        rgb_matrix_set_color_all(0, 4, 0);
    }

    return false;
}
#endif

// thumb combos

#if defined (KLUDGE_THUMBCOMBOS)
const uint16_t PROGMEM thumbcombos_base_right[] = {LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), COMBO_END};
const uint16_t PROGMEM thumbcombos_base_left[] = {LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_TAB), COMBO_END};
const uint16_t PROGMEM thumbcombos_nav[] = {KC_ENT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM thumbcombos_mouse[] = {KC_BTN2, KC_BTN1, COMBO_END};
const uint16_t PROGMEM thumbcombos_media[] = {KC_MSTP, KC_MPLY, COMBO_END};
const uint16_t PROGMEM thumbcombos_num[] = {KC_0, KC_MINS, COMBO_END};
const uint16_t PROGMEM thumbcombos_sym[] = {KC_RPRN, KC_UNDS, COMBO_END};
const uint16_t PROGMEM thumbcombos_fun[] = {KC_SPC, KC_TAB, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(thumbcombos_base_right, LT(U_FUN, KC_DEL)),
  COMBO(thumbcombos_base_left, LT(U_MEDIA, KC_ESC)),
  COMBO(thumbcombos_nav, KC_CAPS),
  COMBO(thumbcombos_mouse, KC_BTN3),
  COMBO(thumbcombos_media, KC_MUTE),
  COMBO(thumbcombos_num, KC_DOT),
  COMBO(thumbcombos_sym, KC_RBRC),
  COMBO(thumbcombos_fun, KC_APP)
};
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  os_variant_t os = detected_host_os();

  switch (keycode) {

    case U_MISSION_CONTROL:
      if (record->event.pressed) {
          host_consumer_send(0x29F);
      } else {
          host_consumer_send(0);
      }
      return false; /* Skip all further processing of this key */

    case U_LAUNCHPAD:
      if (record->event.pressed) {
          host_consumer_send(0x2A0);
      } else {
          host_consumer_send(0);
      }
      return false; /* Skip all further processing of this key */

    case U_SEARCH:
      switch (os) {
        case OS_IOS:
        case OS_MACOS: /* Spotlight */
          if (record->event.pressed) {
              host_consumer_send(0x221);
          } else {
              host_consumer_send(0);
          }
          break;
        case OS_LINUX: /* Custom keybind SUPER+D */
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(LCMD(KC_D));
          }
          break;
        case OS_WINDOWS: /* Windows search */
          if (record->event.pressed) {
              tap_code16(LCMD(KC_S));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_UND: /* Undo */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LCMD(KC_Z));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(KC_UNDO);
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_RDO: /* Redo */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(SCMD(KC_Z));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(KC_AGIN);
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_PST: /* Paste */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LCMD(KC_V));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(S(KC_INS));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_CPY: /* Copy */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LCMD(KC_C));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(C(KC_INS));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_CUT: /* Cut */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LCMD(KC_X));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(S(KC_DEL));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_LOCK: /* Lock screen */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LCTL(LGUI(KC_Q)));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(LGUI(KC_L));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_PTB: /* Previos tab */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LSG(KC_LBRC));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(LSFT(LCTL(KC_TAB)));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_NTB: /* Next tab */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LSG(KC_RBRC));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(LCTL(KC_TAB));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_SCRSHOT: /* Full screen copy */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LSFT(LCTL(LGUI(KC_3))));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(KC_PSCR);
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_LASSO: /* Lasso screen copy */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LSFT(LCTL(LGUI(KC_4))));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(C(KC_PSCR));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_FUND: /* Undo for factorio */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LCMD(KC_Z));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(C(KC_Z));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_FRDO: /* Redo for factorio */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(SCMD(KC_Z));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(C(KC_Y));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_FPST: /* Paste for factorio */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LCMD(KC_V));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(C(KC_V));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_FCPY: /* Copy for factorio */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LCMD(KC_C));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(C(KC_C));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    case U_FCUT: /* Cut for factorio */
      switch (os) {
        case OS_IOS:
        case OS_MACOS:
          if (record->event.pressed) {
              tap_code16(LCMD(KC_X));
          }
          break;
        case OS_LINUX:
        case OS_WINDOWS:
        case OS_UNSURE:
          if (record->event.pressed) {
              tap_code16(C(KC_X));
          }
          break;
      }
      return false; /* Skip all further processing of this key */

    default:
      return true; /* Process all other keycodes normally */

  }
}
