// Copyright 2022 jpwine (@jpwine)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
//#include "via.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_via(
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC,
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
     KC_LCTRL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,   MO(1),
  //|--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
               KC_LALT, KC_LGUI, KC_LSFT,  KC_SPC,    MO(2),  KC_RSFT, KC_RGUI, KC_RALT
           //|-----------------------------------||-----------------------------------'
  ),
  [1] = LAYOUT_via(
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
               _______, _______, _______, _______,  _______, _______, _______, _______
           //|-----------------------------------||-----------------------------------'
  ),
  [2] = LAYOUT_via(
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
               _______, _______, _______, _______,  _______, _______, _______, _______
           //|-----------------------------------||-----------------------------------'
  ),
  [3] = LAYOUT_via(
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------+--------|
               _______, _______, _______, _______,  _______, _______, _______, _______
           //|-----------------------------------||-----------------------------------'
  )
};

