#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,      KC_W,   KC_F,    KC_P,     KC_B,         KC_J,     KC_L,    KC_U,    KC_Y,    KC_BSPC,
        KC_A,      KC_R,   KC_S,    KC_T,     KC_G,         KC_M,     KC_N,    KC_E,    KC_I,    KC_O,
        KC_Z,      KC_X,   KC_C,    KC_D,     KC_V,         KC_K,     KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                                    KC_LSFT,  KC_SPACE,     KC_LGUI,  LCTL_T(KC_ENTER)
    ),
    [1] = LAYOUT(
        KC_F1,     KC_F2,  KC_F3,   KC_F4,    KC_F5,        KC_NO,    KC_KP_7, KC_KP_8, KC_KP_9, KC_NO,
        KC_F6,     KC_F7,  KC_F8,   KC_F9,    KC_F10,       KC_NO,    KC_KP_4, KC_KP_5, KC_KP_6, KC_NO,
        KC_NO,     KC_NO,  KC_NO,   KC_F11,   KC_F12,       KC_KP_0,  KC_KP_1, KC_KP_2, KC_KP_3, KC_NO,
                                    KC_TRNS,  KC_TRNS,      KC_TRNS,  KC_TRNS
    ),
    // [2] = LAYOUT(
    //     KC_1,      KC_2,   KC_3,    KC_4,     KC_5,         KC_6,     KC_KP_7, KC_KP_8, KC_KP_9, KC_0,
    //     KC_NO,     KC_NO,  KC_NO,   KC_NO,    KC_NO,        KC_M,     KC_KP_4, KC_KP_5, KC_KP_6, KC_NO,
    //     KC_NO,     KC_NO,  KC_NO,   KC_NO,    KC_NO,        KC_KP_0,  KC_KP_1, KC_KP_2, KC_KP_3, KC_NO,
    //                                 KC_LSFT,  TO(0),        KC_RALT,  TO(2)
    // ),
    // [1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_WH_U, KC_BTN2, KC_TRNS, KC_TRNS, KC_BTN2, KC_NO, KC_BTN1, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_L, KC_WH_D, KC_WH_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    // [2] = LAYOUT(KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_LGUI, KC_NO, LCTL(KC_LALT), LCA(KC_LSFT), KC_TRNS, KC_HOME, KC_PGDN, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    // [3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_PIPE, KC_QUOT, KC_TRNS, KC_CIRC, KC_ASTR, KC_AMPR, KC_NO, KC_TRNS, KC_HASH, KC_TILD, KC_SLSH, KC_DQUO, KC_DLR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_BSLS, KC_GRV, KC_TRNS, RGB_RMOD, KC_TRNS, KC_TRNS, RGB_MOD),
    // [4] = LAYOUT(KC_TRNS, KC_COLN, KC_LT, KC_GT, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_AT, KC_TRNS, KC_NO, KC_EQL, KC_PLUS, KC_PERC, KC_TRNS, KC_EXLM, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS, KC_VOLU),
    // [5] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_NO, LCTL(KC_LALT), KC_TRNS, KC_TRNS, KC_TRNS, KC_F4, KC_F5, KC_F6, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    // [6] = LAYOUT(KC_PSLS, KC_7, KC_8, KC_9, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_1, KC_2, KC_3, KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_PAST, KC_4, KC_5, KC_6, KC_PEQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    // [7] = LAYOUT(KC_TRNS, KC_TRNS, KC_COLN, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_PERC, KC_SLSH, KC_ENT, KC_TRNS, DF(1), KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EXLM, KC_TRNS, DF(0), KC_TRNS, RALT_T(KC_COMM), RCTL_T(KC_DOT), RESET, KC_TRNS, KC_TAB, KC_NO, KC_TRNS)
};

enum combos {
  QA_COMBO,
  WR_COMBO,
  FS_COMBO,
  PT_COMBO,
  BG_COMBO,
  JM_COMBO,
  LN_COMBO,
  UE_COMBO,
  YI_COMBO,
  BO_COMBO,

  AZ_COMBO,
  RX_COMBO,
  SC_COMBO,
  TD_COMBO,
  GV_COMBO,
  MK_COMBO,
  NH_COMBO,
  EC_COMBO,
  IP_COMBO,
  OS_COMBO,

  FP_COMBO,
  ST_COMBO,
  CD_COMBO,

  PB_COMBO,
  TG_COMBO,
  DV_COMBO,

  JL_COMBO,
  MN_COMBO,
  KH_COMBO,

  LU_COMBO,
  NE_COMBO,
  HC_COMBO,

  THUMBL_COMBO,
  THUMBR_COMBO,
};

const uint16_t PROGMEM     qa_combo[] = {KC_Q,    KC_A,             COMBO_END};
const uint16_t PROGMEM     wr_combo[] = {KC_W,    KC_R,             COMBO_END};
const uint16_t PROGMEM     fs_combo[] = {KC_F,    KC_S,             COMBO_END};
const uint16_t PROGMEM     pt_combo[] = {KC_P,    KC_T,             COMBO_END};
const uint16_t PROGMEM     bg_combo[] = {KC_B,    KC_G,             COMBO_END};
const uint16_t PROGMEM     jm_combo[] = {KC_J,    KC_M,             COMBO_END};
const uint16_t PROGMEM     ln_combo[] = {KC_L,    KC_N,             COMBO_END};
const uint16_t PROGMEM     ue_combo[] = {KC_U,    KC_E,             COMBO_END};
const uint16_t PROGMEM     yi_combo[] = {KC_Y,    KC_I,             COMBO_END};
const uint16_t PROGMEM     bo_combo[] = {KC_BSPC, KC_O,             COMBO_END};

const uint16_t PROGMEM     az_combo[] = {KC_A,    KC_Z,             COMBO_END};
const uint16_t PROGMEM     rx_combo[] = {KC_R,    KC_X,             COMBO_END};
const uint16_t PROGMEM     sc_combo[] = {KC_S,    KC_C,             COMBO_END};
const uint16_t PROGMEM     td_combo[] = {KC_T,    KC_D,             COMBO_END};
const uint16_t PROGMEM     gv_combo[] = {KC_G,    KC_V,             COMBO_END};
const uint16_t PROGMEM     mk_combo[] = {KC_M,    KC_K,             COMBO_END};
const uint16_t PROGMEM     nh_combo[] = {KC_N,    KC_H,             COMBO_END};
const uint16_t PROGMEM     ec_combo[] = {KC_E,    KC_COMM,          COMBO_END};
const uint16_t PROGMEM     ip_combo[] = {KC_I,    KC_DOT,           COMBO_END};
const uint16_t PROGMEM     os_combo[] = {KC_O,    KC_SLSH,          COMBO_END};

const uint16_t PROGMEM     fp_combo[] = {KC_F,    KC_P,             COMBO_END};
const uint16_t PROGMEM     st_combo[] = {KC_S,    KC_T,             COMBO_END};
const uint16_t PROGMEM     cd_combo[] = {KC_C,    KC_D,             COMBO_END};

const uint16_t PROGMEM     pb_combo[] = {KC_P,    KC_B,             COMBO_END};
const uint16_t PROGMEM     tg_combo[] = {KC_T,    KC_G,             COMBO_END};
const uint16_t PROGMEM     dv_combo[] = {KC_D,    KC_V,             COMBO_END};

const uint16_t PROGMEM     jl_combo[] = {KC_J,    KC_L,             COMBO_END};
const uint16_t PROGMEM     mn_combo[] = {KC_M,    KC_N,             COMBO_END};
const uint16_t PROGMEM     kh_combo[] = {KC_K,    KC_H,             COMBO_END};

const uint16_t PROGMEM     lu_combo[] = {KC_L,    KC_U,             COMBO_END};
const uint16_t PROGMEM     ne_combo[] = {KC_N,    KC_E,             COMBO_END};
const uint16_t PROGMEM     hc_combo[] = {KC_H,    KC_COMM,          COMBO_END};

const uint16_t PROGMEM thumbl_combo[] = {KC_LSFT, KC_SPACE,         COMBO_END};
const uint16_t PROGMEM thumbr_combo[] = {KC_LGUI, LCTL_T(KC_ENTER), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [QA_COMBO] = COMBO(qa_combo, KC_1),
    [WR_COMBO] = COMBO(wr_combo, KC_2),
    [FS_COMBO] = COMBO(fs_combo, KC_3),
    [PT_COMBO] = COMBO(pt_combo, KC_4),
    [BG_COMBO] = COMBO(bg_combo, KC_5),
    [JM_COMBO] = COMBO(jm_combo, KC_6),
    [LN_COMBO] = COMBO(ln_combo, KC_7),
    [UE_COMBO] = COMBO(ue_combo, KC_8),
    [YI_COMBO] = COMBO(yi_combo, KC_9),
    [BO_COMBO] = COMBO(bo_combo, KC_0),

    [AZ_COMBO] = COMBO(az_combo, KC_ESC),
    [RX_COMBO] = COMBO(rx_combo, KC_TAB),
    [SC_COMBO] = COMBO(sc_combo, KC_GRV),
    [TD_COMBO] = COMBO(td_combo, KC_SCLN),
    [GV_COMBO] = COMBO(gv_combo, KC_QUOT),
    [MK_COMBO] = COMBO(mk_combo, KC_LEFT),
    [NH_COMBO] = COMBO(nh_combo, KC_DOWN),
    [EC_COMBO] = COMBO(ec_combo, KC_UP),
    [IP_COMBO] = COMBO(ip_combo, KC_RIGHT),
    [OS_COMBO] = COMBO(os_combo, KC_BSLS),

    [FP_COMBO] = COMBO(fp_combo, KC_NO),
    [ST_COMBO] = COMBO(st_combo, KC_NO),
    [CD_COMBO] = COMBO(cd_combo, KC_NO),

    [PB_COMBO] = COMBO(pb_combo, KC_NO),
    [TG_COMBO] = COMBO(tg_combo, KC_NO),
    [DV_COMBO] = COMBO(dv_combo, KC_NO),

    [JL_COMBO] = COMBO(jl_combo, KC_MINS),
    [MN_COMBO] = COMBO(mn_combo, KC_NO),
    [KH_COMBO] = COMBO(kh_combo, KC_LBRC),

    [LU_COMBO] = COMBO(lu_combo, KC_EQL),
    [NE_COMBO] = COMBO(ne_combo, KC_NO),
    [HC_COMBO] = COMBO(hc_combo, KC_RBRC),

    [THUMBL_COMBO] = COMBO(thumbl_combo, KC_LALT),
    [THUMBR_COMBO] = COMBO(thumbr_combo, MO(1)),
};

/* 
Q W F P B   J L U Y ←
A R S T G   M N E I O
Z X C D V   K H , . ;
      ↑ ␣     
*/