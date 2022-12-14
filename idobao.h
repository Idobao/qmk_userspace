// Copyright 2022 IDOBAO (@idobao)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "quantum.h"

#ifdef VIA_PROTOCOL_VERSION
    #undef VIA_PROTOCOL_VERSION
    #pragma message "NOTE: ** VIA_PROTOCOL_VERSION set to 9 **"
#endif
#define VIA_PROTOCOL_VERSION 0x0009
