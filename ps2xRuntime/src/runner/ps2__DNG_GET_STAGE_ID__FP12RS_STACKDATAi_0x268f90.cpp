#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_GET_STAGE_ID__FP12RS_STACKDATAi
// Address: 0x268f90 - 0x268fec
void ps2__DNG_GET_STAGE_ID__FP12RS_STACKDATAi_0x268f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_GET_STAGE_ID__FP12RS_STACKDATAi_0x268f90");
#endif

    switch (ctx->pc) {
        case 0x268fa4u: goto label_268fa4;
        case 0x268fd8u: goto label_268fd8;
        default: break;
    }

    ctx->pc = 0x268f90u;

    // 0x268f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x268f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x268f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x268f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268f9c: 0xc064220  jal         func_190880
    ctx->pc = 0x268F9Cu;
    SET_GPR_U32(ctx, 31, 0x268FA4u);
    ctx->pc = 0x268FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268F9Cu;
            // 0x268fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268FA4u; }
        if (ctx->pc != 0x268FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268FA4u; }
        if (ctx->pc != 0x268FA4u) { return; }
    }
    ctx->pc = 0x268FA4u;
label_268fa4:
    // 0x268fa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268FA4u;
    {
        const bool branch_taken_0x268fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268FA4u;
            // 0x268fa8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fa4) {
            ctx->pc = 0x268FB4u;
            goto label_268fb4;
        }
    }
    ctx->pc = 0x268FACu;
    // 0x268fac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x268FACu;
    {
        const bool branch_taken_0x268fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268FACu;
            // 0x268fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fac) {
            ctx->pc = 0x268FDCu;
            goto label_268fdc;
        }
    }
    ctx->pc = 0x268FB4u;
label_268fb4:
    // 0x268fb4: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x268fb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x268fb8: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x268fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x268fbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268FBCu;
    {
        const bool branch_taken_0x268fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268fbc) {
            ctx->pc = 0x268FCCu;
            goto label_268fcc;
        }
    }
    ctx->pc = 0x268FC4u;
    // 0x268fc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x268FC4u;
    {
        const bool branch_taken_0x268fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268FC4u;
            // 0x268fc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fc4) {
            ctx->pc = 0x268FDCu;
            goto label_268fdc;
        }
    }
    ctx->pc = 0x268FCCu;
label_268fcc:
    // 0x268fcc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x268fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268fd0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x268FD0u;
    SET_GPR_U32(ctx, 31, 0x268FD8u);
    ctx->pc = 0x268FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268FD0u;
            // 0x268fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268FD8u; }
        if (ctx->pc != 0x268FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268FD8u; }
        if (ctx->pc != 0x268FD8u) { return; }
    }
    ctx->pc = 0x268FD8u;
label_268fd8:
    // 0x268fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268fdc:
    // 0x268fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x268FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268FE4u;
            // 0x268fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268FECu;
}
