#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IMG_SET_GET__FP12RS_STACKDATAi
// Address: 0x26e9d0 - 0x26ea68
void ps2__IMG_SET_GET__FP12RS_STACKDATAi_0x26e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IMG_SET_GET__FP12RS_STACKDATAi_0x26e9d0");
#endif

    switch (ctx->pc) {
        case 0x26e9f0u: goto label_26e9f0;
        case 0x26ea00u: goto label_26ea00;
        case 0x26ea10u: goto label_26ea10;
        case 0x26ea20u: goto label_26ea20;
        case 0x26ea2cu: goto label_26ea2c;
        case 0x26ea4cu: goto label_26ea4c;
        default: break;
    }

    ctx->pc = 0x26e9d0u;

    // 0x26e9d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26e9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26e9d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26e9d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26e9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26e9dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26e9e0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x26e9e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26e9e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e9e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26E9E8u;
    SET_GPR_U32(ctx, 31, 0x26E9F0u);
    ctx->pc = 0x26E9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E9E8u;
            // 0x26e9ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E9F0u; }
        if (ctx->pc != 0x26E9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E9F0u; }
        if (ctx->pc != 0x26E9F0u) { return; }
    }
    ctx->pc = 0x26E9F0u;
label_26e9f0:
    // 0x26e9f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9f8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26E9F8u;
    SET_GPR_U32(ctx, 31, 0x26EA00u);
    ctx->pc = 0x26E9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E9F8u;
            // 0x26e9fc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA00u; }
        if (ctx->pc != 0x26EA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA00u; }
        if (ctx->pc != 0x26EA00u) { return; }
    }
    ctx->pc = 0x26EA00u;
label_26ea00:
    // 0x26ea00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ea00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ea04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea08: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EA08u;
    SET_GPR_U32(ctx, 31, 0x26EA10u);
    ctx->pc = 0x26EA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA08u;
            // 0x26ea0c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA10u; }
        if (ctx->pc != 0x26EA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA10u; }
        if (ctx->pc != 0x26EA10u) { return; }
    }
    ctx->pc = 0x26EA10u;
label_26ea10:
    // 0x26ea10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ea14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea18: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EA18u;
    SET_GPR_U32(ctx, 31, 0x26EA20u);
    ctx->pc = 0x26EA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA18u;
            // 0x26ea1c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA20u; }
        if (ctx->pc != 0x26EA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA20u; }
        if (ctx->pc != 0x26EA20u) { return; }
    }
    ctx->pc = 0x26EA20u;
label_26ea20:
    // 0x26ea20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea24: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EA24u;
    SET_GPR_U32(ctx, 31, 0x26EA2Cu);
    ctx->pc = 0x26EA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA24u;
            // 0x26ea28: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA2Cu; }
        if (ctx->pc != 0x26EA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA2Cu; }
        if (ctx->pc != 0x26EA2Cu) { return; }
    }
    ctx->pc = 0x26EA2Cu;
label_26ea2c:
    // 0x26ea2c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x26ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x26ea30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ea30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26ea34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea38: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26ea38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea3c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x26ea3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea40: 0x2484ea80  addiu       $a0, $a0, -0x1580
    ctx->pc = 0x26ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
    // 0x26ea44: 0xc0a41c4  jal         func_290710
    ctx->pc = 0x26EA44u;
    SET_GPR_U32(ctx, 31, 0x26EA4Cu);
    ctx->pc = 0x26EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA44u;
            // 0x26ea48: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290710u;
    if (runtime->hasFunction(0x290710u)) {
        auto targetFn = runtime->lookupFunction(0x290710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA4Cu; }
        if (ctx->pc != 0x26EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGet__18CEventSpriteMotherFiiiii_0x290710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA4Cu; }
        if (ctx->pc != 0x26EA4Cu) { return; }
    }
    ctx->pc = 0x26EA4Cu;
label_26ea4c:
    // 0x26ea4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26ea4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ea50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26ea50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ea54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ea54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ea58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ea58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ea5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ea5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ea60: 0x3e00008  jr          $ra
    ctx->pc = 0x26EA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA60u;
            // 0x26ea64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EA68u;
}
