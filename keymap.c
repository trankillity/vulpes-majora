#include QMK_KEYBOARD_H

#include "config.h"
// #include "g/keymap_combo.h"
// #include "casemodes.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    // _GAME,
    _NUMB,
    _NAVI,
    _SYST
};

#define C_SELA      C(KC_A)
#define C_UNDO      C(KC_Z)
#define C_CUT       C(KC_X)
#define C_COPY      C(KC_C)
#define C_PAST      C(KC_V)
#define C_REDO      C(KC_Y)

#define C_TABI      KC_TAB
#define C_TABD      S(KC_TAB)
#define C_STBI      FP_SUPER_TAB
#define C_STBD      S(FP_SUPER_TAB)
#define C_DSKT      G(KC_TAB)
#define C_ACCL      FP_ACCEL_TOG
#define C_CENT      C(KC_ENTER)
#define C_SCRL      LT(0,KC_S)
#define C_ZOOM      LT(0,KC_Z)
#define C_MTOG      TG(_MOUS)

// Data Grip Shortcuts
#define D_FMTC      C(A(KC_L))
#define D_EXPS      C(KC_W)
#define D_COLS      A(S(KC_INS))
#define D_NEWF      A(KC_INS)

#define OSM_SFT     OSM(MOD_LSFT)
#define OSM_CTL     OSM(MOD_LCTL)
#define OSM_ALT     OSM(MOD_LALT)
#define OSM_GUI     OSM(MOD_LGUI)
#define OSL_NUM     OSL(_NUMB)
#define OSL_NAV     OSL(_NAVI)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* 
 *  Key layout visual aid
 *
 * ,-----------------------------------------.                                          ,-----------------------------------------.
 * |  ESC |   Q  |   W  |   E  |   R  |   T  |                                          |   Y  |   U  |   I  |   O  |   P  |BckSpc|
 * |------+------+------+------+------+------|                                          |------+------+------+------+------+------|
 * |  TAB |   A  |   S  |   D  |   F  |   G  |                                          |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|                                          |------+------+------+------+------+------|
 * |  SFT |   Z  |   X  |   C  |   V  |   B  |                                          |   N  |   M  |   ,  |   .  |   /  | SFT  |
 * `-----------------------------------------'                                          `-----------------------------------------'
 *                          ,--------------------.      ,--------------------.      ,--------------------.
 *                          |   \  | Enter| LOWER|      | RAISE| Space| Del  |      | RAISE| Space| Del  |
 *                          `--------------------'      `--------------------'      `--------------------'
 *          ,------.        ,--------------------.                                  ,--------------------.        ,------.
 *          |Vol Up|        |Mouse1|Mouse3|Mouse2|                                  |Vol Up| Mute |Vol Dn|        |Vol Up|
 *   ,------+------+------. `--------------------'                                  `--------------------' ,------+------+------.
 *   | Prev | Play | Next |   3 way thumb rocker                                      3 way thumb rocker   | Prev | Play | Next |  5 way switch
 *   `------+------+------'                                                                                `------+------+------'
 *          |Vol Dn|                                                                                              |Vol Dn|
 *          `------'                                                                                              `------'
 */

/* Blank Layer */
// [_LAYER] = LAYOUT_vulpes_majora(
//   _______,    _______,    _______,    _______,    _______,    _______,                                            _______,    _______,    _______,    _______,    _______,    _______,
//   _______,    _______,    _______,    _______,    _______,    _______,                                            _______,    _______,    _______,    _______,    _______,    _______,
//   _______,    _______,    _______,    _______,    _______,    _______,                                            _______,    _______,    _______,    _______,    _______,    _______,
//                                       _______,    _______,    _______,      _______,    _______,    _______,      _______,    _______,    _______,    
//               _______,                _______,    _______,    _______,                                            _______,    _______,    _______,                _______,
//   _______,    _______,    _______,                                                                                                                    _______,    _______,    _______,    
//               _______,                                                                                                                                            _______
// ),

[_BASE] = LAYOUT_vulpes_majora(
  KC_ESC,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,                                               KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    KC_BSLS,
  C_TABI,     KC_A,       KC_R,       KC_S,       KC_T,       KC_G,                                               KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       C_TABD,
  OSM_CTL,    KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,                                               KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    C_CENT,
                                      OSL_NUM,    OSM_SFT,    KC_BSPC,      KC_MS_BTN3, KC_MS_BTN1, KC_MS_BTN2,   KC_ENTER,   KC_SPC,     OSL_NAV,
              KC_VOLU,                KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2,                                         KC_VOLD,    KC_MUTE,    KC_VOLU,                KC_VOLU,
  KC_MPRV,    KC_MPLY,    KC_MNXT,                                                                                                                    KC_MPRV,    KC_MPLY,    KC_MNXT,
              KC_VOLD,                                                                                                                                            KC_VOLD
),

// [_GAME] = LAYOUT_vulpes_majora(
//   KC_ESC,     _______,    KC_Q,       KC_W,       KC_E,       KC_R,                                               KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    KC_BSLS,
//   C_TABI,     _______,    KC_A,       KC_S,       KC_D,       KC_F,                                               KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       C_TABD,
//   OSM_CTL,    _______,    KC_Z,       KC_X,       KC_C,       KC_D,                                               KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    C_CENT,
//                                       OSL_NUM,    OSM_SFT,    KC_BSPC,      KC_MS_BTN3, KC_MS_BTN1, KC_MS_BTN2,   KC_ENTER,   KC_SPC,     OSL_NAV,
//               KC_VOLU,                KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2,                                         KC_VOLD,    KC_MUTE,    KC_VOLU,                KC_VOLU,
//   KC_MPRV,    KC_MPLY,    KC_MNXT,                                                                                                                    KC_MPRV,    KC_MPLY,    KC_MNXT,
//               KC_VOLD,                                                                                                                                            KC_VOLD
// ),

[_NUMB] = LAYOUT_vulpes_majora(
  KC_F6,      KC_F5,      KC_F4,      KC_F3,      KC_F2,      KC_F1,                                              KC_EQL,     KC_7,       KC_8,       KC_9,       KC_DOT,     KC_COMM,
  C_TABI,     OSM_GUI,    OSM_ALT,    OSM_CTL,    OSM_SFT,    _______,                                            KC_PPLS,    KC_4,       KC_5,       KC_6,       KC_PAST,    KC_GRV,
  KC_F12,     KC_F11,     KC_F10,     KC_F9,      KC_F8,      KC_F7,                                              KC_MINS,    KC_1,       KC_2,       KC_3,       KC_SLSH,    KC_UNDS,
                                      _______,    _______,    _______,      _______,    _______,    _______,      _______,    _______,    KC_0,
              _______,                _______,    _______,    _______,                                            _______,    _______,    _______,                _______,
  _______,    _______,    _______,                                                                                                                    _______,    _______,    _______,    
              _______,                                                                                                                                            _______
),

[_NAVI] = LAYOUT_vulpes_majora(
  KC_NO,      KC_INS,     KC_HOME,    KC_UP,      KC_END,     KC_PGUP,                                            KC_ESC,     C_STBI,     C_STBD,     C_DSKT,     _______,    TO(_SYST),
  C_TABI,     C_SELA,     KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_PGDN,                                            KC_VOLU,    OSM_SFT,    OSM_CTL,    OSM_ALT,    OSM_GUI,    C_TABD,
  KC_NO,      C_UNDO,     C_CUT,      C_COPY,     C_PAST,     C_REDO,                                             KC_VOLD,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MSTP,    KC_MUTE,
                                      _______,    _______,    KC_DEL,       _______,    _______,    _______,      _______,    _______,    _______,    
              _______,                _______,    _______,    _______,                                            _______,    _______,    _______,                _______,
  _______,    _______,    _______,                                                                                                                    _______,    _______,    _______,    
              _______,                                                                                                                                            _______
),

[_SYST] = LAYOUT_vulpes_majora(
  _______,    RGB_TOG,    RGB_RMOD,   RGB_MOD,    _______,    TO(_BASE),                                          _______,    _______,    _______,    _______,    _______,    TO(_BASE),
  _______,    RGB_SPI,    RGB_HUI,    RGB_SAI,    RGB_VAI,    _______,                                          _______,    _______,    _______,    _______,    _______,    _______,
  _______,    RGB_SPD,    RGB_HUD,    RGB_SAD,    RGB_VAD,    _______,                                            _______,    _______,    _______,    _______,    QK_BOOT,    _______,
                                      _______,    _______,    _______,      _______,    _______,    _______,      _______,    _______,    _______,    
              _______,                _______,    _______,    _______,                                            _______,    _______,    _______,                _______,
  _______,    _______,    _______,                                                                                                                    _______,    _______,    _______,    
              _______,                                                                                                                                            _______
),

// [_COMB] = LAYOUT_vulpes_majora(
//   KC_1,       KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,                                               KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    KC_4,
//   KC_2,       KC_A,       KC_R,       KC_S,       KC_T,       KC_G,                                               KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_5,
//   KC_3,       KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,                                               KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_6,
//                                       _______,    _______,    _______,      _______,    _______,    _______,      _______,    _______,    _______,    
//               _______,                _______,    _______,    _______,                                            _______,    _______,    _______,                _______,
//   _______,    _______,    _______,                                                                                                                    _______,    _______,    _______,    
//               _______,                                                                                                                                            _______
// ),

};

// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _NAVI, _NUMB, _SYST);
// }

const key_override_t comma_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, KC_SCLN);
const key_override_t fstop_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_COLON);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &comma_override,
    &fstop_override,
    NULL // Null terminate the array of overrides!
};