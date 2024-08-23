#pragma once

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

// universal layout specific

#define U_DPIPE LSFT(RALT(KC_BSLS)) // ¦

// OS specific clipboard and other

#if defined (CLIPBOARD_FUN)
  #define U_RDO KC_AGIN
  #define U_PST KC_PSTE
  #define U_CPY KC_COPY
  #define U_CUT KC_CUT
  #define U_UND KC_UNDO
  #define U_PTB LSFT(LCTL(KC_TAB))
  #define U_NTB LCTL(KC_TAB)
  #define U_LOCK LGUI(KC_L)
#elif defined (CLIPBOARD_MAC)
  #define U_RDO SCMD(KC_Z)
  #define U_PST LCMD(KC_V)
  #define U_CPY LCMD(KC_C)
  #define U_CUT LCMD(KC_X)
  #define U_UND LCMD(KC_Z)
  #define U_PTB LSG(KC_LBRC)
  #define U_NTB LSG(KC_RBRC)
  #define U_LOCK LCTL(LGUI(KC_Q))
#elif defined (CLIPBOARD_WIN)
  #define U_RDO C(KC_Y)
  #define U_PST C(KC_V)
  #define U_CPY C(KC_C)
  #define U_CUT C(KC_X)
  #define U_UND C(KC_Z)
  #define U_PTB LSFT(LCTL(KC_TAB))
  #define U_NTB LCTL(KC_TAB)
  #define U_LOCK LGUI(KC_L)
#else
  #define U_RDO KC_AGIN
  #define U_PST S(KC_INS)
  #define U_CPY C(KC_INS)
  #define U_CUT S(KC_DEL)
  #define U_UND KC_UNDO
  #define U_PTB LSFT(LCTL(KC_TAB))
  #define U_NTB LCTL(KC_TAB)
  #define U_LOCK LGUI(KC_L)
#endif
