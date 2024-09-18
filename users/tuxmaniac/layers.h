#pragma once

#define LAYER_BASE \
KC_Q,           KC_W,         KC_E,              KC_R,            KC_T,               KC_Y,            KC_U,             KC_I,            KC_O,          KC_P,            \
LGUI_T(KC_A),   LALT_T(KC_S), LCTL_T(KC_D),      LSFT_T(KC_F),    KC_G,               KC_H,            LSFT_T(KC_J),     LCTL_T(KC_K),    LALT_T(KC_L),  LGUI_T(KC_SCLN), \
KC_Z,           ALGR_T(KC_X), KC_C,              KC_V,            KC_B,               KC_N,            KC_M,             KC_COMM,         ALGR_T(KC_DOT),KC_SLSH,         \
U_NP,           U_NP,         LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),LT(U_MOUSE,KC_TAB), LT(U_SYM,KC_ENT),LT(U_NUM,KC_BSPC),LT(U_FUN,KC_DEL),U_NP,          U_NP

#define LAYER_NAV \
TD(U_TD_BOOT),  U_NA,         TD(U_TD_U_STF),    TD(U_TD_U_BASE), TD(U_TD_U_GAME),    U_RDO,           U_PST,            U_CPY,           U_CUT,         U_UND,           \
KC_LGUI,        KC_LALT,      KC_LCTL,           KC_LSFT,         U_NA,               CW_TOGG,         KC_LEFT,          KC_DOWN,         KC_UP,         KC_RGHT,         \
U_NA,           KC_ALGR,      TD(U_TD_U_NUM),    TD(U_TD_U_NAV),  U_NA,               KC_INS,          KC_HOME,          KC_PGDN,         KC_PGUP,       KC_END,          \
U_NP,           U_NP,         U_NA,              U_NA,            U_NA,               KC_ENT,          KC_BSPC,          KC_CAPS,          U_NP,          U_NP

#define LAYER_MOUSE \
TD(U_TD_BOOT),  U_NA,         TD(U_TD_U_STF),    TD(U_TD_U_BASE), TD(U_TD_U_GAME),    U_RDO,           U_PST,            U_CPY,           U_CUT,         U_UND,           \
KC_LGUI,        KC_LALT,      KC_LCTL,           KC_LSFT,         U_NA,               U_NU,            KC_MS_L,          KC_MS_D,         KC_MS_U,       KC_MS_R,         \
U_NA,           KC_ALGR,      TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),U_NA,               U_NU,            KC_WH_L,          KC_WH_D,         KC_WH_U,       KC_WH_R,         \
U_NP,           U_NP,         U_NA,              U_NA,            U_NA,               KC_BTN2,         KC_BTN1,          KC_BTN3,         U_NP,          U_NP

#define LAYER_MEDIA \
TD(U_TD_BOOT),  U_NA,         TD(U_TD_U_STF),    TD(U_TD_U_BASE), TD(U_TD_U_GAME),    UG_TOGG,         UG_NEXT,          UG_VALU,         UG_HUEU,       U_LOCK,          \
KC_LGUI,        KC_LALT,      KC_LCTL,           KC_LSFT,         U_NA,               U_NU,            KC_MPRV,          KC_VOLD,         KC_VOLU,       KC_MNXT,         \
U_NA,           KC_ALGR,      TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),U_NA,               U_NU,            U_PTB,            U_NU,            U_NU,          U_NTB,           \
U_NP,           U_NP,         U_NA,              U_NA,            U_NA,               KC_MSTP,         KC_MPLY,          KC_MUTE,         U_NP,          U_NP

#define LAYER_NUM \
KC_9,           LSFT(KC_7),   LSFT(KC_8),        LSFT(KC_9),      KC_0,               U_NA,            TD(U_TD_U_BASE),  U_NA,            U_NA,          TD(U_TD_BOOT),   \
KC_8,           LSFT(KC_4),   LSFT(KC_5),        LSFT(KC_6),      KC_EQL,             KC_BSPC,         KC_LSFT,          KC_LCTL,         KC_LALT,       KC_LGUI,         \
KC_BSLS,        LSFT(KC_1),   LSFT(KC_2),        LSFT(KC_3),      LSFT(KC_EQL),       U_NA,            TD(U_TD_U_NUM),   TD(U_TD_U_NAV),  KC_ALGR,       U_NA,            \
U_NP,           U_NP,         KC_RBRC,           LSFT(KC_0),      KC_MINS,            KC_ENT,          U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_SYM \
RALT(KC_GRV),   KC_GRV,       LSFT(KC_GRV),      LSFT(KC_RBRC),   LSFT(KC_LBRC),      U_NA,            TD(U_TD_U_BASE),  U_NA,            U_NA,          TD(U_TD_BOOT),   \
LSFT(KC_BSLS),  KC_4,         KC_5,              KC_6,            U_DPIPE,            U_NA,            KC_LSFT,          KC_LCTL,         KC_LALT,       KC_LGUI,         \
RALT(KC_BSLS),  KC_1,         KC_2,              KC_3,            KC_7,               U_NA,            TD(U_TD_U_SYM),   TD(U_TD_U_MOUSE),KC_ALGR,       U_NA,            \
U_NP,           U_NP,         KC_RBRC,           KC_LBRC,         KC_UNDS,            U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_FUN \
KC_F12,         KC_F7,        KC_F8,             KC_F9,           KC_PSCR,            U_NA,            TD(U_TD_U_BASE),  U_NA,            U_NA,          TD(U_TD_BOOT),   \
KC_F11,         KC_F4,        KC_F5,             KC_F6,           KC_SCRL,            U_NA,            KC_LSFT,          KC_LCTL,         KC_LALT,       KC_LGUI,         \
KC_F10,         KC_F1,        KC_F2,             KC_F3,           KC_PAUS,            U_NA,            TD(U_TD_U_FUN),   TD(U_TD_U_MEDIA),KC_ALGR,       U_NA,            \
U_NP,           U_NP,         KC_APP,            KC_SPC,          KC_TAB,             U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_GAME \
KC_TAB,         KC_Q,         KC_W,              KC_E,            KC_R,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
KC_LSFT,        KC_A,         KC_S,              KC_D,            KC_F,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
KC_LALT,        KC_Z,         KC_ENT,            KC_M,            KC_G,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_NP,           U_NP,         LT(U_GAME2,KC_ESC),KC_LCTL,         KC_SPC,             U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_GAME2 \
TD(U_TD_U_BASE),KC_MINS,      LSFT(KC_UP),       LSFT(KC_EQL),    KC_T,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_NA,           LSFT(KC_LEFT),LSFT(KC_DOWN),     LSFT(KC_RGHT),   LCTL(RALT(KC_RBRC)),U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_UND,          U_CUT,        U_CPY,             U_PST,           U_RDO,              U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_NP,           U_NP,         U_NA,              U_NA,            U_NA,               U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_STF \
KC_LALT,        KC_Q,         KC_W,              KC_E,            KC_R,               U_NA,            U_NA,             KC_UP,           U_NA,          U_NA,            \
KC_TAB,         KC_A,         KC_S,              KC_D,            KC_F,               U_NA,            KC_LEFT,          KC_DOWN,         KC_RGHT,       U_NA,            \
KC_LSFT,        KC_X,         KC_C,              KC_M,            KC_V,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_NP,           U_NP,         LT(U_STF2,KC_ESC), KC_SPC,          KC_LCTL,            U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_STF2 \
KC_1,           KC_2,         KC_3,              KC_4,            KC_5,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
KC_6,           KC_7,         KC_8,              KC_9,            KC_0,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
TD(U_TD_U_BASE),KC_B,         KC_G,              KC_O,            KC_N,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_NP,           U_NP,         U_NA,              KC_H,            KC_P,               U_NA,            U_NA,             U_NA,            U_NP,          U_NP
