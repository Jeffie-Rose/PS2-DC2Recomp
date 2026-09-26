#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_TEX_ANIM__FP12RS_STACKDATAi
// Address: 0x26ba60 - 0x26bb34
void ps2__SET_TEX_ANIM__FP12RS_STACKDATAi_0x26ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_TEX_ANIM__FP12RS_STACKDATAi_0x26ba60");
#endif

    switch (ctx->pc) {
        case 0x26ba88u: goto label_26ba88;
        case 0x26ba98u: goto label_26ba98;
        case 0x26bab0u: goto label_26bab0;
        case 0x26bac0u: goto label_26bac0;
        case 0x26bae4u: goto label_26bae4;
        case 0x26bb00u: goto label_26bb00;
        case 0x26bb10u: goto label_26bb10;
        default: break;
    }

    ctx->pc = 0x26ba60u;

    // 0x26ba60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26ba64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26ba68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26ba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26ba6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26ba70: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x26ba70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26ba74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26ba74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26ba78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26ba78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ba80: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26BA80u;
    SET_GPR_U32(ctx, 31, 0x26BA88u);
    ctx->pc = 0x26BA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA80u;
            // 0x26ba84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA88u; }
        if (ctx->pc != 0x26BA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA88u; }
        if (ctx->pc != 0x26BA88u) { return; }
    }
    ctx->pc = 0x26BA88u;
label_26ba88:
    // 0x26ba88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26ba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ba8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba90: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26BA90u;
    SET_GPR_U32(ctx, 31, 0x26BA98u);
    ctx->pc = 0x26BA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA90u;
            // 0x26ba94: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA98u; }
        if (ctx->pc != 0x26BA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA98u; }
        if (ctx->pc != 0x26BA98u) { return; }
    }
    ctx->pc = 0x26BA98u;
label_26ba98:
    // 0x26ba98: 0x2a610003  slti        $at, $s3, 0x3
    ctx->pc = 0x26ba98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26ba9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ba9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26baa0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BAA0u;
    {
        const bool branch_taken_0x26baa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAA0u;
            // 0x26baa4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26baa0) {
            ctx->pc = 0x26BAB4u;
            goto label_26bab4;
        }
    }
    ctx->pc = 0x26BAA8u;
    // 0x26baa8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26BAA8u;
    SET_GPR_U32(ctx, 31, 0x26BAB0u);
    ctx->pc = 0x26BAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAA8u;
            // 0x26baac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BAB0u; }
        if (ctx->pc != 0x26BAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BAB0u; }
        if (ctx->pc != 0x26BAB0u) { return; }
    }
    ctx->pc = 0x26BAB0u;
label_26bab0:
    // 0x26bab0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26bab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26bab4:
    // 0x26bab4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26bab8: 0xc0a1240  jal         func_284900
    ctx->pc = 0x26BAB8u;
    SET_GPR_U32(ctx, 31, 0x26BAC0u);
    ctx->pc = 0x26BABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAB8u;
            // 0x26babc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BAC0u; }
        if (ctx->pc != 0x26BAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BAC0u; }
        if (ctx->pc != 0x26BAC0u) { return; }
    }
    ctx->pc = 0x26BAC0u;
label_26bac0:
    // 0x26bac0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BAC0u;
    {
        const bool branch_taken_0x26bac0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26BAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAC0u;
            // 0x26bac4: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bac0) {
            ctx->pc = 0x26BAD0u;
            goto label_26bad0;
        }
    }
    ctx->pc = 0x26BAC8u;
    // 0x26bac8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26BAC8u;
    {
        const bool branch_taken_0x26bac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAC8u;
            // 0x26bacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bac8) {
            ctx->pc = 0x26BB14u;
            goto label_26bb14;
        }
    }
    ctx->pc = 0x26BAD0u;
label_26bad0:
    // 0x26bad0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BAD0u;
    {
        const bool branch_taken_0x26bad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAD0u;
            // 0x26bad4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bad0) {
            ctx->pc = 0x26BAECu;
            goto label_26baec;
        }
    }
    ctx->pc = 0x26BAD8u;
    // 0x26bad8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26bad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26badc: 0xc04bbdc  jal         func_12EF70
    ctx->pc = 0x26BADCu;
    SET_GPR_U32(ctx, 31, 0x26BAE4u);
    ctx->pc = 0x26BAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BADCu;
            // 0x26bae0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EF70u;
    if (runtime->hasFunction(0x12EF70u)) {
        auto targetFn = runtime->lookupFunction(0x12EF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BAE4u; }
        if (ctx->pc != 0x26BAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeOn__17mgCTextureManagerFiPc_0x12ef70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BAE4u; }
        if (ctx->pc != 0x26BAE4u) { return; }
    }
    ctx->pc = 0x26BAE4u;
label_26bae4:
    // 0x26bae4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26BAE4u;
    {
        const bool branch_taken_0x26bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAE4u;
            // 0x26bae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bae4) {
            ctx->pc = 0x26BB14u;
            goto label_26bb14;
        }
    }
    ctx->pc = 0x26BAECu;
label_26baec:
    // 0x26baec: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BAECu;
    {
        const bool branch_taken_0x26baec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAECu;
            // 0x26baf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26baec) {
            ctx->pc = 0x26BB08u;
            goto label_26bb08;
        }
    }
    ctx->pc = 0x26BAF4u;
    // 0x26baf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26baf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26baf8: 0xc04bbf8  jal         func_12EFE0
    ctx->pc = 0x26BAF8u;
    SET_GPR_U32(ctx, 31, 0x26BB00u);
    ctx->pc = 0x26BAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BAF8u;
            // 0x26bafc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFE0u;
    if (runtime->hasFunction(0x12EFE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB00u; }
        if (ctx->pc != 0x26BB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeOff__17mgCTextureManagerFiPc_0x12efe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB00u; }
        if (ctx->pc != 0x26BB00u) { return; }
    }
    ctx->pc = 0x26BB00u;
label_26bb00:
    // 0x26bb00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26BB00u;
    {
        const bool branch_taken_0x26bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bb00) {
            ctx->pc = 0x26BB10u;
            goto label_26bb10;
        }
    }
    ctx->pc = 0x26BB08u;
label_26bb08:
    // 0x26bb08: 0xc04bc14  jal         func_12F050
    ctx->pc = 0x26BB08u;
    SET_GPR_U32(ctx, 31, 0x26BB10u);
    ctx->pc = 0x12F050u;
    if (runtime->hasFunction(0x12F050u)) {
        auto targetFn = runtime->lookupFunction(0x12F050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB10u; }
        if (ctx->pc != 0x26BB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeAllOff__17mgCTextureManagerFi_0x12f050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BB10u; }
        if (ctx->pc != 0x26BB10u) { return; }
    }
    ctx->pc = 0x26BB10u;
label_26bb10:
    // 0x26bb10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bb14:
    // 0x26bb14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x26bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26bb18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26bb18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26bb1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26bb1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bb20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26bb20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bb24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26bb24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bb28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x26BB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB2Cu;
            // 0x26bb30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BB34u;
}
