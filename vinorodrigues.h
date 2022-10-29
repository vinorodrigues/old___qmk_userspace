// Copyright 2023 Vino Rodrigues (@vinorodrigues)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "quantum.h"


#ifndef VINORODRIGUES_H
    #define VINORODRIGUES_H

    #ifdef VIA_PROTOCOL_VERSION
        #undef VIA_PROTOCOL_VERSION
        #pragma message "NOTE: ** VIA_PROTOCOL_VERSION set to 9 **"
    #endif  // VIA_PROTOCOL_VERSION
    #define VIA_PROTOCOL_VERSION 0x0009
#endif  // VINORODRIGUES_H
