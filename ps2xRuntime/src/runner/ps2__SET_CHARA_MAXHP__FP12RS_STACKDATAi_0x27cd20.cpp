#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_MAXHP__FP12RS_STACKDATAi
// Address: 0x27cd20 - 0x27cdb0
void ps2__SET_CHARA_MAXHP__FP12RS_STACKDATAi_0x27cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_MAXHP__FP12RS_STACKDATAi_0x27cd20");
#endif

    switch (ctx->pc) {
        case 0x27cd38u: goto label_27cd38;
        case 0x27cd44u: goto label_27cd44;
        case 0x27cd4cu: goto label_27cd4c;
        case 0x27cd7cu: goto label_27cd7c;
        case 0x27cd98u: goto label_27cd98;
        default: break;
    }

    ctx->pc = 0x27cd20u;

    // 0x27cd20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27cd24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27cd28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27cd2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27cd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27cd30: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CD30u;
    SET_GPR_U32(ctx, 31, 0x27CD38u);
    ctx->pc = 0x27CD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD30u;
            // 0x27cd34: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD38u; }
        if (ctx->pc != 0x27CD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD38u; }
        if (ctx->pc != 0x27CD38u) { return; }
    }
    ctx->pc = 0x27CD38u;
label_27cd38:
    // 0x27cd38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd3c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CD3Cu;
    SET_GPR_U32(ctx, 31, 0x27CD44u);
    ctx->pc = 0x27CD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD3Cu;
            // 0x27cd40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD44u; }
        if (ctx->pc != 0x27CD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD44u; }
        if (ctx->pc != 0x27CD44u) { return; }
    }
    ctx->pc = 0x27CD44u;
label_27cd44:
    // 0x27cd44: 0xc064220  jal         func_190880
    ctx->pc = 0x27CD44u;
    SET_GPR_U32(ctx, 31, 0x27CD4Cu);
    ctx->pc = 0x27CD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD44u;
            // 0x27cd48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD4Cu; }
        if (ctx->pc != 0x27CD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD4Cu; }
        if (ctx->pc != 0x27CD4Cu) { return; }
    }
    ctx->pc = 0x27CD4Cu;
label_27cd4c:
    // 0x27cd4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CD4Cu;
    {
        const bool branch_taken_0x27cd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD4Cu;
            // 0x27cd50: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd4c) {
            ctx->pc = 0x27CD5Cu;
            goto label_27cd5c;
        }
    }
    ctx->pc = 0x27CD54u;
    // 0x27cd54: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27CD54u;
    {
        const bool branch_taken_0x27cd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD54u;
            // 0x27cd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd54) {
            ctx->pc = 0x27CD9Cu;
            goto label_27cd9c;
        }
    }
    ctx->pc = 0x27CD5Cu;
label_27cd5c:
    // 0x27cd5c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x27cd5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x27cd60: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x27cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27cd64: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CD64u;
    {
        const bool branch_taken_0x27cd64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD64u;
            // 0x27cd68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd64) {
            ctx->pc = 0x27CD74u;
            goto label_27cd74;
        }
    }
    ctx->pc = 0x27CD6Cu;
    // 0x27cd6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27CD6Cu;
    {
        const bool branch_taken_0x27cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD6Cu;
            // 0x27cd70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd6c) {
            ctx->pc = 0x27CD9Cu;
            goto label_27cd9c;
        }
    }
    ctx->pc = 0x27CD74u;
label_27cd74:
    // 0x27cd74: 0xc066d24  jal         func_19B490
    ctx->pc = 0x27CD74u;
    SET_GPR_U32(ctx, 31, 0x27CD7Cu);
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD7Cu; }
        if (ctx->pc != 0x27CD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD7Cu; }
        if (ctx->pc != 0x27CD7Cu) { return; }
    }
    ctx->pc = 0x27CD7Cu;
label_27cd7c:
    // 0x27cd7c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x27cd7cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27cd80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27cd84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x27cd84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27cd88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cd8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27cd8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27cd90: 0xc065b40  jal         func_196D00
    ctx->pc = 0x27CD90u;
    SET_GPR_U32(ctx, 31, 0x27CD98u);
    ctx->pc = 0x27CD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD90u;
            // 0x27cd94: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD98u; }
        if (ctx->pc != 0x27CD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD98u; }
        if (ctx->pc != 0x27CD98u) { return; }
    }
    ctx->pc = 0x27CD98u;
label_27cd98:
    // 0x27cd98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cd9c:
    // 0x27cd9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27cd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27cda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27cda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27cda4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27cda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cda8: 0x3e00008  jr          $ra
    ctx->pc = 0x27CDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDA8u;
            // 0x27cdac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27CDB0u;
}
