/* A layout for the Dactyl Manuform 5x6_5 Keyboard */

// TODO make a shared layout for cantor and dactyl
//      - transform dactyl keymap to a cantor's
//        - make a text transform program
//        - which removes keys not presented on cantor
//          - from the comment
//          - from the code
//        - which is covered by tests
// TODO cleanup readme
//      nix flake run
//      guide for initial flash for left and right
// TODO generate clean schemes from layer definitions.
//      Now they are good, but manual and prone to be outdated.

#include QMK_KEYBOARD_H

/* Cyrillic input via unicode. */
// unicode {{{
/// FIXME fold

// @see https://docs.qmk.fm/features/unicode#input-modes
// FIXME it's not default for some reason
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX

/**
 * ``` python
 * russian_alphabet = "абвгдеёжзийклмнопрстуфхцчшщъыьэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ"
 * hexes = [hex(ord(i)) for i in russian_alphabet]
 * names = ["A", "B", "V", "G", "D", "YE", "YO", "ZH", "Z", "I", "Y", "K", "L", "M", "N", "O", "P", "R", "S", "T", "U", "F", "KH", "TS", "CH", "SH", "SHCH", "HS", "bl", "LS", "E", "YU", "YA"]
 * xs = [*zip(russian_alphabet, hexes, [*map(lambda x: f"CL_{x}", names), *map(lambda x: f"CU_{x}", names)])]
 * [f"#define {alias} UC({code})" for (_, code, alias) in xs]
 * ```
 */
#define CL_A	UC(0x430)
#define CL_B	UC(0x431)
#define CL_V	UC(0x432)
#define CL_G	UC(0x433)
#define CL_D	UC(0x434)
#define CL_YE	UC(0x435)
#define CL_YO	UC(0x451)
#define CL_ZH	UC(0x436)
#define CL_Z	UC(0x437)
#define CL_I	UC(0x438)
#define CL_Y	UC(0x439)
#define CL_K	UC(0x43a)
#define CL_L	UC(0x43b)
#define CL_M	UC(0x43c)
#define CL_N	UC(0x43d)
#define CL_O	UC(0x43e)
#define CL_P	UC(0x43f)
#define CL_R	UC(0x440)
#define CL_S	UC(0x441)
#define CL_T	UC(0x442)
#define CL_U	UC(0x443)
#define CL_F	UC(0x444)
#define CL_KH	UC(0x445)
#define CL_TS	UC(0x446)
#define CL_CH	UC(0x447)
#define CL_SH	UC(0x448)
#define CL_SHCH	UC(0x449)
#define CL_HS	UC(0x44a)
#define CL_bl	UC(0x44b)
#define CL_LS	UC(0x44c)
#define CL_E	UC(0x44d)
#define CL_YU	UC(0x44e)
#define CL_YA	UC(0x44f)
#define CU_A	UC(0x410)
#define CU_B	UC(0x411)
#define CU_V	UC(0x412)
#define CU_G	UC(0x413)
#define CU_D	UC(0x414)
#define CU_YE	UC(0x415)
#define CU_YO	UC(0x401)
#define CU_ZH	UC(0x416)
#define CU_Z	UC(0x417)
#define CU_I	UC(0x418)
#define CU_Y	UC(0x419)
#define CU_K	UC(0x41a)
#define CU_L	UC(0x41b)
#define CU_M	UC(0x41c)
#define CU_N	UC(0x41d)
#define CU_O	UC(0x41e)
#define CU_P	UC(0x41f)
#define CU_R	UC(0x420)
#define CU_S	UC(0x421)
#define CU_T	UC(0x422)
#define CU_U	UC(0x423)
#define CU_F	UC(0x424)
#define CU_KH	UC(0x425)
#define CU_TS	UC(0x426)
#define CU_CH	UC(0x427)
#define CU_SH	UC(0x428)
#define CU_SHCH	UC(0x429)
#define CU_HS	UC(0x42a)
#define CU_bl	UC(0x42b)
#define CU_LS	UC(0x42c)
#define CU_E	UC(0x42d)
#define CU_YU	UC(0x42e)
#define CU_YA	UC(0x430)
// }}} unicode

/* Home-row mods */

// Home-row mods (Boo).
//
#define GUI_A LGUI_T(KC_A)
#define ALT_O LALT_T(KC_O)
#define LT3_E LT(L_NUM_NAV, KC_E)
#define CTL_S LCTL_T(KC_S)
//
#define CTL_N RCTL_T(KC_N)
#define LT3_T LT(L_NUM_NAV, KC_T)
#define ALT_R LALT_T(KC_R)
#define GUI_I RGUI_T(KC_I)

// Home-row mods (qwerty).
//
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define LT3_D LT(L_NUM_NAV, KC_D)
#define CTL_F LCTL_T(KC_F)
//
#define CTL_J RCTL_T(KC_J)
#define LT3_K LT(L_NUM_NAV, KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

// Home-row mods (ycuken).
// Only numbers and navigation are useful. One can also use them in combination with mods.
// But mods are not to be used with letters, since it would need to momentarily activate the boo layout.
#define GUI__F LGUI_T(CL_F)
#define ALT_bl LALT_T(CL_bl)
#define LT3__V LT(L_NUM_NAV, CL_V)
#define CTL__A LCTL_T(CL_A)
//
#define CTL__O RCTL_T(CL_O)
#define LT3__L LT(L_NUM_NAV, CL_L)
#define ALT__D LALT_T(CL_D)
#define GUI_ZH RGUI_T(CL_ZH)

/* Key aliases */

#define __ KC_TRNS
#define XX KC_NO
#define OSM_SFT OSM(MOD_LSFT)

/* Layer names */
enum my_layer_names {
  L_BOO,
  L_QWERTY,
  L_CYRILLIC_LOWER,
  L_CYRILLIC_UPPER,
  L_SYMBOLS,
  L_NUM_NAV,
  L_FKEYS_SYSTEM,
  L_MOUSE,
  L_RGB,
};

#define TG_QWER TG(L_QWERTY)
#define TG_CYLO TG(L_CYRILLIC_LOWER)
#define MO_CYUP MO(L_CYRILLIC_UPPER)
#define OSL_SYM OSL(L_SYMBOLS)
#define MO_SYS  MO(L_FKEYS_SYSTEM)
#define MO_RGB  MO(L_RGB)
#define OSL_MOUSE OSL(L_MOUSE)

/* Combos */

#define COMBO_ONLY_FROM_LAYER 0

const uint16_t PROGMEM esc_combo[]   = {OSM_SFT, KC_SPACE, COMBO_END};
const uint16_t PROGMEM mouse_combo[] = {OSL_SYM, KC_SPACE, COMBO_END};

combo_t key_combos[] = {
  COMBO(esc_combo, KC_ESC),
  COMBO(mouse_combo, OSL_MOUSE),
};

/* The keymap */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_BOO] = LAYOUT_split_3x6_3(/* BOO LAYOUT
       QWE '   ,   u   c   v                        q   f   d   l   y   /
       --- a   o   e   s   g                        b   n   t   r   i   -
       rst :   x   .   w   z                        p   h   m   k   j   rst
                       SYS sft SYM              ret spc ---
       */
       TG_QWER, KC_QUOT, KC_COMM,    KC_U,   KC_C,  KC_V,     KC_Q,  KC_F,  KC_D,  KC_L,  KC_Y,   KC_SLASH,
       TG_CYLO,   GUI_A,   ALT_O,   LT3_E,  CTL_S,  KC_G,     KC_B,  CTL_N, LT3_T, ALT_R, GUI_I,  KC_MINUS,
       QK_BOOT, KC_SCLN,    KC_X,  KC_DOT,   KC_W,  KC_Z,     KC_P,  KC_H,  KC_M,  KC_K,  KC_J,   QK_BOOT,
                             MO_SYS , OSM_SFT , OSL_SYM ,     KC_ENTER , KC_SPC,  __                     ),

  [L_QWERTY] = LAYOUT_split_3x6_3(
       TG_QWER,    KC_Q,    KC_W,    KC_E,   KC_R,  KC_T,     KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,     KC_LBRC,
       KC_GRV ,     __ ,   ALT_S,   LT3_D,  CTL_F,   __ ,     KC_H,  CTL_J, LT3_K,   ALT_L,  GUI_SCLN, KC_QUOTE,
           __ ,    KC_Z,     __ ,    KC_C,   KC_V,  KC_B,     KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH,   __ ,

                         __     ,         __  ,    __  ,       __  ,    __  ,    __                      ),

  [L_CYRILLIC_LOWER] = LAYOUT_split_3x6_3(/*
        __ __  __  __  __  __                       __  __  __  __  __  __
        __ __  __  __  __  __                       __  __  __  __  __  __
        __ __  __  __  __  __                       __  __  __  __  __  __
               __  __      __  ___ ___     ___ ___  ___     __  __
                               ___ ___     ___ ___
       */
     CL_YO,   CL_Y ,     CL_TS,     CL_U,   CL_K ,  CL_YE,    CL_N ,   CL_G ,    CL_SH,    CL_SHCH, CL_Z ,   CL_KH,
   TG_CYLO,  GUI__F,    ALT_bl,   LT3__V, CTL__A ,  CL_P ,    CL_R ,   CL_O ,    CL_L ,    CL_D ,   CL_ZH,   CL_E ,
   UC_LINX,   CL_YA,     CL_CH,     CL_S,   CL_M ,  CL_I ,    CL_T ,   CL_LS,    CL_B ,    CL_YU,   KC_DOT,  CL_HS,

                         __     ,     MO_CYUP ,    __  ,       __  ,    __  ,    __                      ),

  [L_CYRILLIC_UPPER] = LAYOUT_split_3x6_3(/*
        __ __  __  __  __  __                       __  __  __  __  __  __
        __ __  __  __  __  __                       __  __  __  __  __  __
        __ __  __  __  __  __                       __  __  __  __  __  __
               __  __      __  ___ ___     ___ ___  ___     __  __
                               ___ ___     ___ ___
       */
     CU_YO,   CU_Y ,     CU_TS,    CU_U ,   CU_K ,  CU_YE,    CU_N ,   CU_G ,    CU_SH,    CU_SHCH, CU_Z ,   CU_KH,
        __,   CU_F ,     CU_bl,    CU_V ,   CU_A ,  CU_P ,    CU_R ,   CU_O ,    CU_L ,    CU_D ,   CU_ZH,   CU_E ,
        __,   CU_YA,     CU_CH,    CU_S ,   CU_M ,  CU_I ,    CU_T ,   CU_LS,    CU_B ,    CU_YU,      __,   CU_HS,

                         __     ,          __ ,    __  ,       __  ,    __  ,    __                      ),

  [L_SYMBOLS] = LAYOUT_split_3x6_3(/*
        __  __  __  .   {   __                       __  }   __  __  __  __
        __  `   /   (   [   del                      bs  ]   )   \   :   __
        __  __  __  <   +   __                       __  =   >   |   __  __
                __  __      sft ___ ___     ___ ___  ___     __  __
                                ___ ___     ___ ___
       */
        XX,      XX,        XX,   KC_DOT, KC_LCBR,      XX,       XX,      KC_RCBR,  XX,       KC_PIPE, XX,      XX,
        XX,  KC_GRV,  KC_SLASH,  KC_LPRN, KC_LBRC,  KC_DEL,       KC_BSPC, KC_RBRC,  KC_RPRN,  KC_BSLS, KC_COLN, XX,
        XX,      XX,        XX,  KC_LABK, KC_PLUS,      XX,       XX,       KC_EQL,  KC_RABK,  XX,      XX,      XX,

                         __     ,     KC_LSFT ,    __  ,       __  ,    __  ,    __                      ),

  [L_NUM_NAV] = LAYOUT_split_3x6_3(/*  TODO update the left preview
        __  __  7   8   9   scr                      __  }   __  __  __  __
        __  0   4   5   6   del                      bs  ]   )   \   :   __
        __  0   1   2   3   __                       __  =   >   __  __  __
                __  __      sft ___ ___     ___ ___  ___     __  __
                                ___ ___     ___ ___
       */
        XX,      XX,      KC_7,     KC_8,    KC_9, KC_PSCR,       KC_HOME, KC_PGUP,  KC_UP,    KC_PGDN, KC_END,  XX,
        XX,    KC_0,      KC_4,     KC_5,    KC_6,  KC_DEL,       KC_BSPC, KC_LEFT,  KC_ENTER, KC_RGHT, XX,      XX,
        XX,    KC_0,      KC_1,     KC_2,    KC_3,      XX,       XX,      KC_TAB,   KC_DOWN,  XX,      XX,      XX,

                         __     ,     KC_LSFT ,    __  ,       __  ,    __  ,    __                      ),

  [L_FKEYS_SYSTEM] = LAYOUT_split_3x6_3(/*
        __ F11  F7  F8  F9  __                       __  br↑ vl↑ __  __  __
        __ F11  F4  F5  F6  __                       __  __  mut __  __  __
        __ F10  F1  F2  F3  __                       __  br↓ vl↓ __  __  __
                __  __      sft ___ ___     ___ ___  ___     __  __
                                ___ ___     ___ ___
       */
        XX,  KC_F12,     KC_F7,    KC_F8,   KC_F9,     XX,       XX, KC_BRIU,  KC_VOLU,       XX,      XX,      XX,
        XX,  KC_F11,     KC_F4,    KC_F5,   KC_F6,     XX,       XX,      XX,  KC_MUTE,       XX,      XX,      XX,
        XX,  KC_F10,     KC_F1,    KC_F2,   KC_F3,     XX,       XX, KC_BRID,  KC_VOLD,       XX,      XX,      XX,

                         __     ,     KC_LSFT ,    __  ,       __  ,    __  ,    __                      ),

  [L_MOUSE] = LAYOUT_split_3x6_3(/*
        __ __  __  __  __  __                       __  w↑  ↑  b2  __  __
        __ __  alt b1  ctl __                       __  <-  b1 ->  b3  __
        __ __  __  __  __  __                       __  w↓  ↓  __  __  __
               __  __      sft ___ ___     ___ ___  ___       __  __
                               ___ ___     ___ ___
       */
        XX,      XX,        XX,       XX,      XX,     XX,       XX, KC_WH_U,  KC_MS_U,  KC_WH_D,      XX,      XX,
        XX,      XX,   KC_LALT,  KC_BTN1, KC_LCTL,     XX,       XX, KC_MS_L,  KC_BTN1,  KC_MS_R, KC_BTN3,      XX,
        XX,      XX,        XX,       XX,      XX,     XX,       XX, KC_BTN2,  KC_MS_D,       XX,      XX,      XX,

                         __     ,     KC_LSFT ,    __  ,       __  ,    __  ,    __                      ),

  [L_RGB] = LAYOUT_split_3x6_3(/*
        __  __  hu↑ br↑ mod __                       __  __  __  __  __  __
        __  __  sa↓ tog sa↑ __                       __  __  __  __  __  __
        __  __  hu↓ br↓ m_p __                       __  __  __  __  __  __
                __  __      sft ___ ___     ___ ___  ___     __  __
                                ___ ___     ___ ___
       */
        XX,      XX,   RGB_HUI,  RGB_VAI, RGB_MOD,     XX,       XX,      XX,       XX,       XX,      XX,      XX,
        XX,      XX,   RGB_SAD,  RGB_TOG, RGB_SAI,     XX,       XX,      XX,       XX,       XX,      XX,      XX,
        XX,      XX,   RGB_HUD,  RGB_VAD, RGB_M_P,     XX,       XX,      XX,       XX,       XX,      XX,      XX,

                         __     ,     KC_LSFT ,    __  ,       __  ,    __  ,    __                      ),
 };
