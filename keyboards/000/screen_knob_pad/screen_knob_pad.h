/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define LAYOUT( \
	k00, k01, 	   k03, k04, \
    k10, k11, k12, k13, k14  \
) { \
	{ k00, k01, KC_NO, k03, k04 }, \
	{ k10, k11, k12,   k13, k14 }  \
}
