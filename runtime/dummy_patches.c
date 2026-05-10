#include "recomp.h"
#include <stdio.h>

#define STUB_FUNC(addr) \
    void func_##addr(uint8_t* rdram, recomp_context* ctx) { \
        printf("STUB CALLED: func_" #addr "\n"); \
    }

STUB_FUNC(80241F54)
STUB_FUNC(8023CE80)
STUB_FUNC(8023F020)
STUB_FUNC(80238B80)
STUB_FUNC(8024A740)
STUB_FUNC(8023D7F0)
STUB_FUNC(802480E0)
STUB_FUNC(80248160)
STUB_FUNC(80242240)
STUB_FUNC(8023E3A0)
STUB_FUNC(8023E640)

void dummy_patch_init() {}
