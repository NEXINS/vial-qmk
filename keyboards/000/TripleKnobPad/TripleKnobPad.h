/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define LAYOUT( \
	     K01, K02, K03,      \
	K10, K11, K12, K13, K14  \
) { \
	{ KC_NO, K01, K02, K03, KC_NO }, \
	{ K10,   K11, K12, K13, K14   }  \
}
