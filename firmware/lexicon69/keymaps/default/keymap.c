/* Copyright 2024 Ewen Cluney
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include "aliases.c"

enum custom_keycodes {
  Q_QUITE = SAFE_RANGE,
  W_WITH,
  E_HE,
  R_ARE,
  T_THE,
  Y_WHY,
  U_YOU,
  I_IN,
  O_OR,
  P_PLAY,
  A_AND,
  S_SAID,
  D_DONT,
  F_FROM,
  G_GET,
  H_HOW,
  J_JUST,
  K_KNOW,
  L_WILL,
  Z_ZERO,
  X_SHE,
  C_CAN,
  V_VERY,
  B_BUT,
  N_NOT,
  M_MORE,
  TAB_THIS,
  CAPS_THAT,
  DOT_COM,
  W_ONE,
  W_TWO,
  W_THREE,
  W_FOUR,
  W_FIVE,
  W_SIX,
  W_SEVEN,
  W_EIGHT,
  W_NINE,
  W_TEN,
  ESC_ING,
  SHIFT_2,
  ENTER_2,
  UP_2,
  DOWN_2,
  LEFT_2,
  RIGHT_2,
  SCL_TION
};

enum unicode_names {
    U_BANG,
    U_EMDASH,
    U_ENDASH,
    U_OPENQ,
    U_CLOSEQ,
    U_ELLIPSIS,
    U_ACCENT_E,
    U_UP_E,
    U_BULLET,
    U_DAGGER,
    U_COPYRT,
    U_DEGREE,
    U_MANICULE,
    U_SECTION,
    U_FLEURON,
    U_ASTERISM,
    U_D_DAGGER,
    U_BOLUS,
    U_MULTIP,
    U_YEN,
    U_POUND,
    U_CENT,
    U_ENYE,
    U_C_ENYE,
    U_NUMERO,
    U_PILCROW,
    U_HALF,
    U_QUARTER,
    U_THREEQ,
    U_ROOT,
    U_EURO,
    U_NOTEQUAL,
    U_PLUSMIN,
    U_TM,
    U_RTM,
    U_LOZ,
    U_SMIL,
    U_SMLE,
    U_TRICOL,
    U_STAR,
    U_STR,
    U_FEM,
    U_MASC,
    U_BOX,
    U_BOXX,
    U_HEART,
    U_OP_SQ,
    U_CL_SQ,
    U_BLOM,
    U_OPTION,
    U_TRONGL,
    U_TRONG2,
    U_CIRC,
    U_CIRC2,
    U_FROWN,
    U_4STAR,
    U_4STAR2
};

const uint32_t PROGMEM unicode_map[] = {
    [U_BANG]  = 0x203D,  // ‽
    [U_EMDASH] = 0x2014, // —
    [U_ENDASH] = 0x2013, // –
    [U_OPENQ] = 0x201C, // “
    [U_CLOSEQ] = 0x201D, // ”
    [U_OP_SQ] = 0x2018, // ‘
    [U_CL_SQ] = 0x2019, // ’
    [U_ELLIPSIS] = 0x2026, // …
    [U_ACCENT_E] = 0x00E9, // é
    [U_BULLET] = 0x2022, // •
    [U_DAGGER] = 0x2020, // †
    [U_COPYRT] = 0x00A9, // ©
    [U_DEGREE] = 0x00B0, // °
    [U_MANICULE] = 0x261E, // ☞
    [U_SECTION] = 0x00A7, // §
    [U_FLEURON] = 0x2767, // ❧
    [U_ASTERISM] = 0x2042, // ⁂
    [U_D_DAGGER] = 0x2021, // ‡
    [U_BOLUS] = 0x00F7, // ÷
    [U_MULTIP] = 0x00D7, // ×
    [U_YEN] = 0x00A5, // ¥
    [U_POUND] = 0x00A3, // £
    [U_CENT] = 0x00A2, // ¢
    [U_ENYE] = 0x00F1, // ñ
    [U_C_ENYE] = 0x00D1, // Ñ
    [U_NUMERO] = 0x2116, // №
    [U_PILCROW] = 0x00B6, // ¶
    [U_HALF] = 0x00BD, // ½
    [U_QUARTER] = 0x00BC, // ¼
    [U_THREEQ] = 0x00BE, // ¾
    [U_ROOT] = 0x221A, // √
    [U_EURO] = 0x20AC, // €
    [U_NOTEQUAL] = 0x2260, // ≠
    [U_PLUSMIN] = 0x00B1, // ±
    [U_TM] = 0x2122, // ™
    [U_RTM] = 0x00AE, // ®
    [U_LOZ] = 0x25CA, // ◊
    [U_SMIL] = 0x263A, // ☺
    [U_SMLE] = 0x263B, // ☻
    [U_TRICOL] = 0x205D, // ⁝
    [U_STAR] = 0x2605, // ★
    [U_STR] = 0x2606, // ☆
    [U_FEM] = 0x2640, // ♀
    [U_MASC] = 0x2642, // ♂
    [U_BOX] = 0x25A1, // □
    [U_BOXX] = 0x25A0, // ■
    [U_HEART] = 0x2665, // ♥
    [U_UP_E] = 0x00C9, // É
    [U_BLOM] = 0x2318, // ⌘
    [U_OPTION] = 0x2325, // ⌥
    [U_TRONGL] = 0x25B2, // ▲
    [U_TRONG2] = 0x25B3, // △
    [U_CIRC] = 0x25CF, // ● 
    [U_CIRC2] = 0x25CB, // ○
    [U_FROWN] = 0x2639, // ☹
    [U_4STAR] = 0x2726, // ✦
    [U_4STAR2] = 0x2727 // ✧
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, W_FN,    KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    W_NORM,  W_H1,    W_H2,    KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGDN,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUES,                   KC_LSFT, KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,          LT(3, KC_SPC),    LT(1, KC_SPC),      LT(2, KC_SPC),  KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [1] = LAYOUT(
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,     KC_TRNS,
        UC_NEXT, KC_PGUP, KC_UP,   KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, W_BOLD,  W_ITAL,  W_UNRL,     KC_TRNS,
        W_UNDO,  KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,    KC_INS,
        KC_TRNS, KC_HOME, KC_TRNS, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,    C(KC_UP),
        KC_TRNS, QK_BOOT, KC_TRNS,          KC_TRNS,          KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, C(KC_LEFT), C(KC_DOWN), C(KC_RIGHT)
    ),
    [2] = LAYOUT(
        ESC_ING,   W_ONE,   W_TWO,   W_THREE, W_FOUR,  W_FIVE,  W_SIX,   W_SEVEN, W_EIGHT, W_NINE,  W_TEN,    UC(U_ENDASH), KC_EQL,     KC_DEL,    KC_TRNS,
        TAB_THIS,  Q_QUITE, W_WITH,  E_HE,    R_ARE,   T_THE,   Y_WHY,   U_YOU,   I_IN,    O_OR,    P_PLAY,   W_BOLD,       W_ITAL,     W_UNRL,    KC_HOME,
        CAPS_THAT, A_AND,   S_SAID,  D_DONT,  F_FROM,  G_GET,   H_HOW,   J_JUST,  K_KNOW,  L_WILL,  SCL_TION, UC(U_CLOSEQ), ENTER_2,               KC_END,
        KC_TRNS,            Z_ZERO,  X_SHE,   C_CAN,   V_VERY,  B_BUT,   N_NOT,   M_MORE,  KC_TRNS, DOT_COM,  KC_SLSH,                  KC_TRNS,   UP_2,
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,                     KC_TRNS, KC_TRNS,  KC_TRNS,      KC_TRNS,    LEFT_2,    DOWN_2,  RIGHT_2
    ),
    [3] = LAYOUT(
        UP(U_BLOM, U_OPTION), UC(U_MANICULE), UC(U_COPYRT),  UC(U_NUMERO),   UC(U_SECTION), UC(U_DEGREE),   UC(U_FLEURON), UC(U_ASTERISM), UC(U_BULLET), KC_LBRC,      KC_RBRC, UC(U_EMDASH), UC(U_PLUSMIN), KC_DEL, W_CUT,
        KC_BSLS, UC(U_BOLUS),    UC(U_MULTIP),  UP(U_ACCENT_E, U_UP_E), UC(U_POUND),   UP(U_TM, U_RTM),       UC(U_YEN),     UC(U_EURO),     UP(U_DAGGER, U_D_DAGGER), UP(U_4STAR, U_4STAR2), UC(U_PILCROW), W_BOLD,      W_ITAL,     W_UNRL,    W_COPY,
        UP(U_OP_SQ, U_CL_SQ), UC(U_HALF),     UC(U_QUARTER), UC(U_THREEQ),   UC(U_LOZ),     UC(U_NOTEQUAL), UC(U_HEART),   UC(U_ROOT),     UP(U_SMIL, U_SMLE),   UC(U_FROWN),     UC(U_TRICOL),   UC(U_OPENQ),          KC_TRNS,  W_PSTE,
        KC_TRNS, UP(U_STAR, U_STR),    UP(U_CIRC, U_CIRC2),      UC(U_CENT),    UC(U_FEM),      UC(U_MASC),    UP(U_ENYE, U_C_ENYE),     UP(U_TRONGL, U_TRONG2),    UP(U_BOXX, U_BOX),     UC(U_ELLIPSIS), UC(U_BANG),                   KC_TRNS, KC_PGUP,
        KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                    KC_HOME, KC_PGDN, KC_END
    )
};

#define CHECK_IF_SHIFTED   (keyboard_report->mods & (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)))

void send_shifted_string(bool is_shifted, const char * lowercase, const char * uppercase) {
	if (is_shifted) {
		SEND_STRING(uppercase);
	} else {
		SEND_STRING(lowercase);
	}
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case Q_QUITE:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "quite", "Quite");
      } else {
      }
      break;
    case W_WITH:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "with", "With");
      } else {
      }
      break;
    case E_HE:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "he", "He");
      } else {
      }
      break;
    case R_ARE:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "are", "Are");
      } else {
      }
      break;
    case T_THE:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "the", "The");
      } else {
      }
      break;
    case U_YOU:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "you", "You");
      } else {
      }
      break;
    case Y_WHY:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "why", "Why");
      } else {
      }
      break;
    case I_IN:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "in", "In");
      } else {
      }
      break;
    case O_OR:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "or", "Or");
      } else {
      }
      break;
    case P_PLAY:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "play", "Play");
      } else {
      }
      break;
    case A_AND:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "and", "And");
      } else {
      }
      break;
    case S_SAID:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "said", "Said");
      } else {
      }
      break;
    case D_DONT:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "don't", "Don't");
      } else {
      }
      break;
    case F_FROM:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "from", "From");
      } else {
      }
      break;
    case G_GET:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "get", "Get");
      } else {
      }
      break;
    case H_HOW:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "how", "How");
      } else {
      }
      break;
    case J_JUST:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "just", "Just");
      } else {
      }
      break;
    case K_KNOW:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "know", "Know");
      } else {
      }
      break;
    case L_WILL:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "will", "Will");
      } else {
      }
      break;
    case Z_ZERO:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "zero", "Zero");
      } else {
      }
      break;
    case X_SHE:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "she", "She");
      } else {
      }
      break;
    case C_CAN:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "can", "Can");
      } else {
      }
      break;
    case V_VERY:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "very", "Very");
      } else {
      }
      break;
    case B_BUT:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "but", "But");
      } else {
      }
      break;
    case N_NOT:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "not", "Not");
      } else {
      }
      break;
    case M_MORE:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "more", "More");
      } else {
      }
      break;
    case TAB_THIS:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "this", "This");
      } else {
      }
      break;
    case CAPS_THAT:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "that", "That");
      } else {
      }
      break;
    case W_ONE:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "one", "One");
      } else {
      }
      break;
    case W_TWO:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "two", "Two");
      } else {
      }
      break;
    case W_THREE:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "three", "Three");
      } else {
      }
      break;
    case W_FOUR:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "four", "Four");
      } else {
      }
      break;
    case W_FIVE:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "five", "Five");
      } else {
      }
      break;
    case W_SIX:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "six", "Six");
      } else {
      }
      break;
    case W_SEVEN:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "seven", "Seven");
      } else {
      }
      break;
    case W_EIGHT:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "eight", "Eight");
      } else {
      }
      break;
    case W_NINE:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "nine", "Nine");
      } else {
      }
      break;
    case W_TEN:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "ten", "Ten");
      } else {
      }
      break;
    case DOT_COM:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, ".com", "A\b.net");
      } else {
      }
      break;
    case ESC_ING:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "ing", "A\bed");
      } else {
      }
      break;
    case SHIFT_2:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "shift", "How did you do this?");
      } else {
      }
      break;
    case ENTER_2:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "enter", "Enter");
      } else {
      }
      break;
    case UP_2:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "up", "Up");
      } else {
      }
      break;
    case DOWN_2:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "down", "Down");
      } else {
      }
      break;
    case LEFT_2:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "left", "Left");
      } else {
      }
      break;
    case RIGHT_2:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "right", "Right");
      } else {
      }
      break;
    case SCL_TION:
      if (record->event.pressed) {
        send_shifted_string(CHECK_IF_SHIFTED, "tion", "A\bness");
      } else {
      }
      break;
  }
  return true;
}
