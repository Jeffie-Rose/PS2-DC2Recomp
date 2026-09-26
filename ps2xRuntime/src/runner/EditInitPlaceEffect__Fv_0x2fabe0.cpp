#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditInitPlaceEffect__Fv
// Address: 0x2fabe0 - 0x2fac18
void EditInitPlaceEffect__Fv_0x2fabe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditInitPlaceEffect__Fv_0x2fabe0");
#endif

    ctx->pc = 0x2fabe0u;

    // 0x2fabe0: 0x8f839f6c  lw          $v1, -0x6094($gp)
    ctx->pc = 0x2fabe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942572)));
    // 0x2fabe4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fabe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fabe8: 0xac2093e0  sw          $zero, -0x6C20($at)
    ctx->pc = 0x2fabe8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939616), GPR_U32(ctx, 0));
    // 0x2fabec: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fabecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fabf0: 0xaf809f64  sw          $zero, -0x609C($gp)
    ctx->pc = 0x2fabf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942564), GPR_U32(ctx, 0));
    // 0x2fabf4: 0xac2094e0  sw          $zero, -0x6B20($at)
    ctx->pc = 0x2fabf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939872), GPR_U32(ctx, 0));
    // 0x2fabf8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fabf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fabfc: 0xaf809f68  sw          $zero, -0x6098($gp)
    ctx->pc = 0x2fabfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942568), GPR_U32(ctx, 0));
    // 0x2fac00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FAC00u;
    {
        const bool branch_taken_0x2fac00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAC00u;
            // 0x2fac04: 0xac2095e0  sw          $zero, -0x6A20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac00) {
            ctx->pc = 0x2FAC10u;
            goto label_2fac10;
        }
    }
    ctx->pc = 0x2FAC08u;
    // 0x2fac08: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x2fac08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x2fac0c: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x2fac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
label_2fac10:
    // 0x2fac10: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FAC18u;
}
