/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdbool.h>

#include "drivers/resource.h"
#include "io/serial.h"

/*
 * common functions related to serial port implementation
 */

// owner of Tx pin (+1 for Rx)
resourceOwner_e serialOwnerTxRx(serialPortIdentifier_e identifier);
// index for given owner
int serialOwnerIndex(serialPortIdentifier_e identifier);

typedef enum { serialPullNone = 0, serialPullDown = 1, serialPullUp = 2 } serialPullMode_t;
serialPullMode_t serialOptions_pull(portOptions_e options);
bool serialOptions_pushPull(portOptions_e options);

