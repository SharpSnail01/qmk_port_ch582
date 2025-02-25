// Copyright 2022 Huckies <https://github.com/Huckies>
// Copyright 2023 alin elena <https://github.com/alinelena> <https://gitlab.com/drFaustroll>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VENDOR_ID  0xBABA
#define PRODUCT_ID 0x6071

#define DEVICE_VER   0x0001
#define MANUFACTURER "Alin Elena"
#define PRODUCT      "mlego/m8 rev1"

#define MATRIX_ROWS 4
#define MATRIX_COLS 2

#define DIODE_DIRECTION  COL2ROW
#define BOOTMAGIC_ROW    0
#define BOOTMAGIC_COLUMN 0
// #define PERMISSIVE_HOLD
#define HOLD_ON_OTHER_KEY_PRESS

#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP FALSE

#ifdef ENCODER_ENABLE
#define ENCODERS_PAD_A \
    {                  \
        A10            \
    }
#define ENCODERS_PAD_B \
    {                  \
        A11            \
    }
#define ENCODER_RESOLUTION 4
#endif

#define SPI_CS_PIN   A12
#define SPI_SCK_PIN  A13
#define SPI_MOSI_PIN A14
#define SPI_MISO_PIN A15
#define SPI_DIVISOR  32
#define SPI_MODE     3
#define SPI_LSBFIRST false

#define LED_CAPS_LOCK_PIN A8

#define DEBUG_MATRIX_SCAN_RATE
// 0x0001, 0x0002, 0x0004, 0x0008, 0x0010, 0x0020, 0x0040, 0x0080, 0x0100, 0x0200, 0x0400, 0x0800, 0x1000, 0x2000, 0x4000, 0x8000
//  1QA     1QB     1QC     1QD     1QE     1QF     1QG     1QH     2QA     2QB     2QC     2QD     2QE     2QF     2QG     2QH

//              C0      C1
//              1QA     2QA
// #define COLS { 0x0001, 0x0100}
// the test revision had a mistake and all cols are on one register
#define COLS           \
    {                  \
        0x0008, 0x0004 \
    }
#define ROWS       \
    {              \
        3, 2, 1, 0 \
    }

#define DEBOUNCE 5
