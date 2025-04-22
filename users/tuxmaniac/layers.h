#pragma once

#define LAYER_BASE \
KC_Q,           KC_W,           KC_E,              KC_R,              KC_T,               KC_Y,            KC_U,             KC_I,            KC_O,          KC_P,            \
CKC_A,          CKC_S,          CKC_D,             CKC_F,             KC_G,               KC_H,            CKC_J,            CKC_K,           CKC_L,         CKC_TILDE,       \
KC_Z,           CKC_X,          KC_C,              KC_V,              KC_B,               KC_N,            KC_M,             U_AMPS,          CKC_LBKT,      U_RBKT,          \
U_NP,           U_NP,           CKC_ESC,           CKC_SPC,           CKC_TAB,            CKC_ENT,         CKC_BSPC,         CKC_DEL,         U_NP,          U_NP

#define LAYER_NAV \
TD(U_TD_BOOT),  TD(U_TD_U_ELT), TD(U_TD_U_FCT),    TD(U_TD_U_BASE),   TD(U_TD_U_STF),     U_RDO,           U_PST,            U_CPY,           U_CUT,         U_UND,           \
KC_LGUI,        KC_LALT,        KC_LCTL,           KC_LSFT,           U_NA,               KC_LEFT,         KC_DOWN,          KC_UP,           KC_RGHT,       CW_TOGG,         \
U_NA,           KC_ALGR,        TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,               KC_HOME,         KC_PGDN,          KC_PGUP,         KC_END,        KC_INS,          \
U_NP,           U_NP,           U_NA,              U_NA,              U_NA,               KC_ENT,          KC_BSPC,          KC_DEL,          U_NP,          U_NP

#define LAYER_SRV \
TD(U_TD_BOOT),  TD(U_TD_U_ELT), TD(U_TD_U_FCT),    TD(U_TD_U_BASE),   TD(U_TD_U_STF),     U_SCRSHOT,       U_LASSO,          U_NU,            U_NU,          U_SEARCH,        \
KC_LGUI,        KC_LALT,        KC_LCTL,           KC_LSFT,           U_NA,               U_NU,            U_NU,             U_NU,            U_NU,          U_NU,            \
U_NA,           KC_ALGR,        TD(U_TD_U_SYM),    TD(U_TD_U_SRV),    U_NA,               U_NU,            U_NU,             U_NU,            U_NU,          U_NU,            \
U_NP,           U_NP,           U_NA,              U_NA,              U_NA,               KC_CAPS,         U_NU,             U_NU,            U_NP,          U_NP

#define LAYER_MEDIA \
TD(U_TD_BOOT),  TD(U_TD_U_ELT), TD(U_TD_U_FCT),    TD(U_TD_U_BASE),   TD(U_TD_U_STF),     U_NU,            U_NU,             KC_BRID,         KC_BRIU,       U_LOCK,          \
KC_LGUI,        KC_LALT,        KC_LCTL,           KC_LSFT,           U_NA,               U_NU,            KC_MPRV,          KC_VOLD,         KC_VOLU,       KC_MNXT,         \
U_NA,           KC_ALGR,        TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,               U_PTB,           U_NU,             U_NU,            U_NTB,         U_NU,            \
U_NP,           U_NP,           U_NA,              U_NA,              U_NA,               KC_MSTP,         KC_MPLY,          KC_MUTE,         U_NP,          U_NP

#define LAYER_NUM \
U_LPAR,         U_7,            U_8,               U_9,               U_RPAR,             U_NA,            TD(U_TD_U_BASE),  U_NA,            U_NA,          TD(U_TD_BOOT),   \
U_STAR,         U_4,            U_5,               U_6,               KC_EQL,             KC_BSPC,         KC_LSFT,          KC_LCTL,         KC_LALT,       KC_LGUI,         \
U_SLASH,        U_1,            U_2,               U_3,               U_PLUS,             U_NA,            TD(U_TD_U_NUM),   TD(U_TD_U_NAV),  KC_ALGR,       U_NA,            \
U_NP,           U_NP,           U_DOT,             U_0,               KC_MINS,            KC_ENT,          U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_SYM \
U_GRAVE,        U_SQT,          U_DQT,             U_COLON,           U_SEMI,             U_NA,            TD(U_TD_U_BASE),  U_NA,            U_NA,          TD(U_TD_BOOT),   \
U_PIPE,         U_CARET,        U_PERCENT,         U_DOLLAR,          U_DPIPE,            U_NA,            KC_LSFT,          KC_LCTL,         KC_LALT,       KC_LGUI,         \
U_BSLH,         U_EXCL,         U_AT,              U_HASH,            U_QUESTION,         U_NA,            TD(U_TD_U_SYM),   TD(U_TD_U_SRV),  KC_ALGR,       U_NA,            \
U_NP,           U_NP,           U_DOT,             U_COMMA,           KC_UNDS,            U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_FUN \
KC_F12,         KC_F7,          KC_F8,             KC_F9,             KC_PSCR,            U_NA,            TD(U_TD_U_BASE),  U_NA,            U_NA,          TD(U_TD_BOOT),   \
KC_F11,         KC_F4,          KC_F5,             KC_F6,             KC_SCRL,            U_NA,            KC_LSFT,          KC_LCTL,         KC_LALT,       KC_LGUI,         \
KC_F10,         KC_F1,          KC_F2,             KC_F3,             KC_PAUS,            U_NA,            TD(U_TD_U_FUN),   TD(U_TD_U_MEDIA),KC_ALGR,       U_NA,            \
U_NP,           U_NP,           KC_APP,            KC_SPC,            KC_TAB,             U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_FCT \
KC_ENT,         KC_Q,           KC_W,              KC_E,              KC_R,               U_NA,            U_NA,             KC_UP,           U_NA,          U_NA,            \
KC_LSFT,        KC_A,           KC_S,              KC_D,              KC_F,               U_NA,            KC_LEFT,          KC_DOWN,         KC_RGHT,       U_NA,            \
KC_LALT,        KC_Z,           KC_C,              KC_M,              KC_G,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_NP,           U_NP,           LT(U_FCT2,KC_ESC), KC_LCTL,           KC_SPC,             U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_FCT2 \
KC_V,           KC_MINS,        LSFT(KC_UP),       LSFT(KC_EQL),      KC_T,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
KC_H,           LSFT(KC_LEFT),  LSFT(KC_DOWN),     LSFT(KC_RGHT),     LCTL(RALT(KC_RBRC)),U_NA,            U_NA,             U_NA,            U_NA,          TD(U_TD_U_BASE), \
U_FUND,         U_FCUT,         U_FCPY,            U_FPST,            U_FRDO,             U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_NP,           U_NP,           U_NA,              U_NA,              U_NA,               U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_STF \
KC_LALT,        KC_Q,           KC_W,              KC_E,              KC_R,               U_NA,            U_NA,             KC_UP,           U_NA,          U_NA,            \
KC_TAB,         KC_A,           KC_S,              KC_D,              KC_F,               U_NA,            KC_LEFT,          KC_DOWN,         KC_RGHT,       U_NA,            \
KC_LSFT,        KC_X,           KC_C,              KC_M,              KC_V,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_NP,           U_NP,           LT(U_STF2,KC_ESC), KC_SPC,            KC_LCTL,            U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_STF2 \
KC_1,           KC_2,           KC_3,              KC_4,              KC_5,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
KC_6,           KC_7,           KC_8,              KC_9,              KC_0,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
TD(U_TD_U_BASE),KC_B,           KC_G,              KC_O,              KC_N,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_NP,           U_NP,           U_NA,              KC_H,              KC_P,               U_NA,            U_NA,             U_NA,            U_NP,          U_NP

#define LAYER_ELT \
KC_TAB,         KC_Q,           KC_W,              KC_E,              KC_R,               KC_F1,           KC_F2,            KC_F3,           KC_F4,         KC_F5,           \
KC_LSFT,        KC_A,           KC_S,              KC_D,              KC_F,               KC_F6,           KC_F7,            KC_F8,           KC_F9,         KC_F10,          \
KC_LALT,        KC_Z,           KC_X,              KC_C,              KC_V,               KC_F11,          KC_F12,           KC_EQL,          KC_P,          TD(U_TD_U_BASE), \
U_NP,           U_NP,           LT(U_ELT2,KC_ESC), KC_LCTL,           KC_SPC,             KC_ENT,          KC_BSPC,          KC_DEL,          U_NP,          U_NP

#define LAYER_ELT2 \
KC_PGUP,        KC_R,           KC_UP,             KC_Y,              KC_T,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
KC_PGDN,        KC_LEFT,        KC_DOWN,           KC_RGHT,           KC_H,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
KC_HOME,        KC_J,           KC_N,              KC_U,              KC_L,               U_NA,            U_NA,             U_NA,            U_NA,          U_NA,            \
U_NP,           U_NP,           U_NA,              KC_BSPC,           KC_ENT,             U_NA,            U_NA,             U_NA,            U_NP,          U_NP
