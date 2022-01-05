// Copyright 2022 Mads Kiilerich (@kiilerix)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define ___ KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT(\
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D,  \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B,      k1C,  \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B,            \
    k30, k31,      k32,      k33,      k34,      k35,      k36, k37, k38   \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, ___, k1C, }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, ___, ___, }, \
    { k30, k31, ___, k32, ___, k33, ___, k34, ___, k35, ___, k36, k37, k38  }, \
}
