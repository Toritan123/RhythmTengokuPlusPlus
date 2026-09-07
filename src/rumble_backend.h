#pragma once

#include "global.h"

extern void rumble_backend_init(void);
extern void rumble_backend_update(void);
extern void rumble_backend_set_state(u32 enabled);
extern void rumble_backend_serial_isr(void);
extern u32 rumble_backend_gbp_handshake_ok(void); // rumble-test probe
