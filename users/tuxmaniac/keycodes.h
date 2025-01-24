#pragma once

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

// universal layout specific

#define U_EXCL      KC_1                   // !
#define U_AT        KC_2                   // @
#define U_HASH      KC_3                   // #
#define U_DOLLAR    KC_4                   // $
#define U_PERCENT   KC_5                   // %
#define U_CARET     KC_6                   // ^
#define U_AMPS      KC_COMM                // &
#define U_AMPSF     RALT(KC_COMM)          // forced &
#define U_STAR      KC_8                   // *
#define U_LPAR      KC_9                   // (
#define U_RPAR      KC_0                   // )
#define U_QUESTION  KC_7                   // ?
#define U_TILDE     KC_SCLN                // ~
#define U_LBKT      KC_DOT                 // [
#define U_RBKT      KC_SLSH                // ]
#define U_SLASH     KC_BSLS                // /
#define U_BSLH      RALT(KC_BSLS)          // backslash
#define U_PIPE      LSFT(KC_BSLS)          // |
#define U_DPIPE     LSFT(RALT(KC_BSLS))    // ¦
#define U_COMMA     KC_LBRC                // ,
#define U_DOT       KC_RBRC                // .
#define U_GRAVE     RALT(KC_GRV)           // `
#define U_SQT       KC_GRV                 // '
#define U_DQT       LSFT(KC_GRV)           // "
#define U_COLON     LSFT(KC_RBRC)          // :
#define U_SEMI      LSFT(KC_LBRC)          // ;
#define U_PLUS      LSFT(KC_EQL)           // +

#define U_0         LSFT(KC_0)             // 0
#define U_1         LSFT(KC_1)             // 1
#define U_2         LSFT(KC_2)             // 2
#define U_3         LSFT(KC_3)             // 3
#define U_4         LSFT(KC_4)             // 4
#define U_5         LSFT(KC_5)             // 5
#define U_6         LSFT(KC_6)             // 6
#define U_7         LSFT(KC_7)             // 7
#define U_8         LSFT(KC_8)             // 8
#define U_9         LSFT(KC_9)             // 9
