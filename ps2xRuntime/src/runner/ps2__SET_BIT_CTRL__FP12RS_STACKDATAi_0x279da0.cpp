#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BIT_CTRL__FP12RS_STACKDATAi
// Address: 0x279da0 - 0x279e20
void ps2__SET_BIT_CTRL__FP12RS_STACKDATAi_0x279da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BIT_CTRL__FP12RS_STACKDATAi_0x279da0");
#endif

    switch (ctx->pc) {
        case 0x279db8u: goto label_279db8;
        case 0x279dd4u: goto label_279dd4;
        case 0x279de0u: goto label_279de0;
        case 0x279df8u: goto label_279df8;
        case 0x279e08u: goto label_279e08;
        default: break;
    }

    ctx->pc = 0x279da0u;

    // 0x279da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279dac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x279dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279db0: 0xc064220  jal         func_190880
    ctx->pc = 0x279DB0u;
    SET_GPR_U32(ctx, 31, 0x279DB8u);
    ctx->pc = 0x279DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279DB0u;
            // 0x279db4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279DB8u; }
        if (ctx->pc != 0x279DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279DB8u; }
        if (ctx->pc != 0x279DB8u) { return; }
    }
    ctx->pc = 0x279DB8u;
label_279db8:
    // 0x279db8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279DB8u;
    {
        const bool branch_taken_0x279db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279DB8u;
            // 0x279dbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279db8) {
            ctx->pc = 0x279DC8u;
            goto label_279dc8;
        }
    }
    ctx->pc = 0x279DC0u;
    // 0x279dc0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x279DC0u;
    {
        const bool branch_taken_0x279dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279DC0u;
            // 0x279dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dc0) {
            ctx->pc = 0x279E0Cu;
            goto label_279e0c;
        }
    }
    ctx->pc = 0x279DC8u;
label_279dc8:
    // 0x279dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279dcc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279DCCu;
    SET_GPR_U32(ctx, 31, 0x279DD4u);
    ctx->pc = 0x279DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279DCCu;
            // 0x279dd0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279DD4u; }
        if (ctx->pc != 0x279DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279DD4u; }
        if (ctx->pc != 0x279DD4u) { return; }
    }
    ctx->pc = 0x279DD4u;
label_279dd4:
    // 0x279dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279dd8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279DD8u;
    SET_GPR_U32(ctx, 31, 0x279DE0u);
    ctx->pc = 0x279DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279DD8u;
            // 0x279ddc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279DE0u; }
        if (ctx->pc != 0x279DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279DE0u; }
        if (ctx->pc != 0x279DE0u) { return; }
    }
    ctx->pc = 0x279DE0u;
label_279de0:
    // 0x279de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279de4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x279DE4u;
    {
        const bool branch_taken_0x279de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x279DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279DE4u;
            // 0x279de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279de4) {
            ctx->pc = 0x279E00u;
            goto label_279e00;
        }
    }
    ctx->pc = 0x279DECu;
    // 0x279dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279df0: 0xc0bd9e4  jal         func_2F6790
    ctx->pc = 0x279DF0u;
    SET_GPR_U32(ctx, 31, 0x279DF8u);
    ctx->pc = 0x279DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279DF0u;
            // 0x279df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (runtime->hasFunction(0x2F6790u)) {
        auto targetFn = runtime->lookupFunction(0x2F6790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279DF8u; }
        if (ctx->pc != 0x279DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitCtrl__9CSaveDataFi_0x2f6790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279DF8u; }
        if (ctx->pc != 0x279DF8u) { return; }
    }
    ctx->pc = 0x279DF8u;
label_279df8:
    // 0x279df8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279DF8u;
    {
        const bool branch_taken_0x279df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279DF8u;
            // 0x279dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279df8) {
            ctx->pc = 0x279E0Cu;
            goto label_279e0c;
        }
    }
    ctx->pc = 0x279E00u;
label_279e00:
    // 0x279e00: 0xc0bd9f4  jal         func_2F67D0
    ctx->pc = 0x279E00u;
    SET_GPR_U32(ctx, 31, 0x279E08u);
    ctx->pc = 0x279E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E00u;
            // 0x279e04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F67D0u;
    if (runtime->hasFunction(0x2F67D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F67D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E08u; }
        if (ctx->pc != 0x279E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetBitCtrl__9CSaveDataFi_0x2f67d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E08u; }
        if (ctx->pc != 0x279E08u) { return; }
    }
    ctx->pc = 0x279E08u;
label_279e08:
    // 0x279e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279e0c:
    // 0x279e0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279e10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279e18: 0x3e00008  jr          $ra
    ctx->pc = 0x279E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E18u;
            // 0x279e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279E20u;
}
