#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_OLD_INTERIOR_MAP_NO__FP12RS_STACKDATAi
// Address: 0x26adf0 - 0x26ae24
void ps2__GET_OLD_INTERIOR_MAP_NO__FP12RS_STACKDATAi_0x26adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_OLD_INTERIOR_MAP_NO__FP12RS_STACKDATAi_0x26adf0");
#endif

    switch (ctx->pc) {
        case 0x26ae04u: goto label_26ae04;
        case 0x26ae10u: goto label_26ae10;
        default: break;
    }

    ctx->pc = 0x26adf0u;

    // 0x26adf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26adf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26adf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26adfc: 0xc0b7d64  jal         func_2DF590
    ctx->pc = 0x26ADFCu;
    SET_GPR_U32(ctx, 31, 0x26AE04u);
    ctx->pc = 0x26AE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ADFCu;
            // 0x26ae00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF590u;
    if (runtime->hasFunction(0x2DF590u)) {
        auto targetFn = runtime->lookupFunction(0x2DF590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE04u; }
        if (ctx->pc != 0x26AE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetOldInteriorMapNo__Fv_0x2df590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE04u; }
        if (ctx->pc != 0x26AE04u) { return; }
    }
    ctx->pc = 0x26AE04u;
label_26ae04:
    // 0x26ae04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ae04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae08: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26AE08u;
    SET_GPR_U32(ctx, 31, 0x26AE10u);
    ctx->pc = 0x26AE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE08u;
            // 0x26ae0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE10u; }
        if (ctx->pc != 0x26AE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AE10u; }
        if (ctx->pc != 0x26AE10u) { return; }
    }
    ctx->pc = 0x26AE10u;
label_26ae10:
    // 0x26ae10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ae10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ae14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ae18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ae18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ae1c: 0x3e00008  jr          $ra
    ctx->pc = 0x26AE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AE1Cu;
            // 0x26ae20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AE24u;
}
