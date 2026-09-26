#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_userdata.cpp
// Address: 0x373a20 - 0x373a2c
void ps2___sinit_userdata_cpp_0x373a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_userdata_cpp_0x373a20");
#endif

    ctx->pc = 0x373a20u;

    // 0x373a20: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x373a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x373a24: 0x8067bdc  j           func_19EF70
    ctx->pc = 0x373A24u;
    ctx->pc = 0x373A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373A24u;
            // 0x373a28: 0x2484b130  addiu       $a0, $a0, -0x4ED0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EF70u;
    if (runtime->hasFunction(0x19EF70u)) {
        auto targetFn = runtime->lookupFunction(0x19EF70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__16CBattleCharaInfoFv_0x19ef70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x373A2Cu;
}
