#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckStr__FPc
// Address: 0x31b8e0 - 0x31b938
void CheckStr__FPc_0x31b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckStr__FPc_0x31b8e0");
#endif

    switch (ctx->pc) {
        case 0x31b900u: goto label_31b900;
        default: break;
    }

    ctx->pc = 0x31b8e0u;

    // 0x31b8e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B8E0u;
    {
        const bool branch_taken_0x31b8e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B8E0u;
            // 0x31b8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b8e0) {
            ctx->pc = 0x31B8F8u;
            goto label_31b8f8;
        }
    }
    ctx->pc = 0x31B8E8u;
    // 0x31b8e8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x31b8e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b8ec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31B8ECu;
    {
        const bool branch_taken_0x31b8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b8ec) {
            ctx->pc = 0x31B920u;
            goto label_31b920;
        }
    }
    ctx->pc = 0x31B8F4u;
    // 0x31b8f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31b8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b8f8:
    // 0x31b8f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31B8F8u;
    {
        const bool branch_taken_0x31b8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b8f8) {
            ctx->pc = 0x31B930u;
            goto label_31b930;
        }
    }
    ctx->pc = 0x31B900u;
label_31b900:
    // 0x31b900: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x31b900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x31b904: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x31b904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x31b908: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x31b908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x31b90c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B90Cu;
    {
        const bool branch_taken_0x31b90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B90Cu;
            // 0x31b910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b90c) {
            ctx->pc = 0x31B91Cu;
            goto label_31b91c;
        }
    }
    ctx->pc = 0x31B914u;
    // 0x31b914: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31B914u;
    {
        const bool branch_taken_0x31b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b914) {
            ctx->pc = 0x31B930u;
            goto label_31b930;
        }
    }
    ctx->pc = 0x31B91Cu;
label_31b91c:
    // 0x31b91c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31b920:
    // 0x31b920: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x31b920u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b924: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31B924u;
    {
        const bool branch_taken_0x31b924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b924) {
            ctx->pc = 0x31B900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31b900;
        }
    }
    ctx->pc = 0x31B92Cu;
    // 0x31b92c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31b930:
    // 0x31b930: 0x3e00008  jr          $ra
    ctx->pc = 0x31B930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31B938u;
}
