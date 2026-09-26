#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NowUseNeedItemCheck__FP16CUserDataManager
// Address: 0x22ba80 - 0x22bd74
void NowUseNeedItemCheck__FP16CUserDataManager_0x22ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowUseNeedItemCheck__FP16CUserDataManager_0x22ba80");
#endif

    switch (ctx->pc) {
        case 0x22bac0u: goto label_22bac0;
        case 0x22bae4u: goto label_22bae4;
        case 0x22baf4u: goto label_22baf4;
        case 0x22bb04u: goto label_22bb04;
        case 0x22bb2cu: goto label_22bb2c;
        case 0x22bb5cu: goto label_22bb5c;
        case 0x22bb64u: goto label_22bb64;
        case 0x22bbbcu: goto label_22bbbc;
        case 0x22bc48u: goto label_22bc48;
        case 0x22bc74u: goto label_22bc74;
        case 0x22bcc8u: goto label_22bcc8;
        case 0x22bd00u: goto label_22bd00;
        default: break;
    }

    ctx->pc = 0x22ba80u;

    // 0x22ba80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22ba84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22ba88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22ba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22ba8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22ba90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22ba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22ba94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22ba94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22ba9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22baa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22baa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22baa4: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BAA4u;
    {
        const bool branch_taken_0x22baa4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAA4u;
            // 0x22baa8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22baa4) {
            ctx->pc = 0x22BAB4u;
            goto label_22bab4;
        }
    }
    ctx->pc = 0x22BAACu;
    // 0x22baac: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x22BAACu;
    {
        const bool branch_taken_0x22baac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAACu;
            // 0x22bab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22baac) {
            ctx->pc = 0x22BD4Cu;
            goto label_22bd4c;
        }
    }
    ctx->pc = 0x22BAB4u;
label_22bab4:
    // 0x22bab4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22bab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bab8: 0xc06421c  jal         func_190870
    ctx->pc = 0x22BAB8u;
    SET_GPR_U32(ctx, 31, 0x22BAC0u);
    ctx->pc = 0x22BABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAB8u;
            // 0x22babc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAC0u; }
        if (ctx->pc != 0x22BAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAC0u; }
        if (ctx->pc != 0x22BAC0u) { return; }
    }
    ctx->pc = 0x22BAC0u;
label_22bac0:
    // 0x22bac0: 0x94422f9c  lhu         $v0, 0x2F9C($v0)
    ctx->pc = 0x22bac0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12188)));
    // 0x22bac4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22bac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22bac8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BAC8u;
    {
        const bool branch_taken_0x22bac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAC8u;
            // 0x22bacc: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bac8) {
            ctx->pc = 0x22BAD4u;
            goto label_22bad4;
        }
    }
    ctx->pc = 0x22BAD0u;
    // 0x22bad0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22bad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22bad4:
    // 0x22bad4: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x22bad4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x22bad8: 0x84334d96  lh          $s3, 0x4D96($at)
    ctx->pc = 0x22bad8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x22badc: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x22BADCu;
    SET_GPR_U32(ctx, 31, 0x22BAE4u);
    ctx->pc = 0x22BAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BADCu;
            // 0x22bae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAE4u; }
        if (ctx->pc != 0x22BAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAE4u; }
        if (ctx->pc != 0x22BAE4u) { return; }
    }
    ctx->pc = 0x22BAE4u;
label_22bae4:
    // 0x22bae4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22bae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bae8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22bae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22baec: 0xc066d24  jal         func_19B490
    ctx->pc = 0x22BAECu;
    SET_GPR_U32(ctx, 31, 0x22BAF4u);
    ctx->pc = 0x22BAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAECu;
            // 0x22baf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAF4u; }
        if (ctx->pc != 0x22BAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BAF4u; }
        if (ctx->pc != 0x22BAF4u) { return; }
    }
    ctx->pc = 0x22BAF4u;
label_22baf4:
    // 0x22baf4: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x22baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x22baf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22baf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bafc: 0xc066d24  jal         func_19B490
    ctx->pc = 0x22BAFCu;
    SET_GPR_U32(ctx, 31, 0x22BB04u);
    ctx->pc = 0x22BB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BAFCu;
            // 0x22bb00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB04u; }
        if (ctx->pc != 0x22BB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB04u; }
        if (ctx->pc != 0x22BB04u) { return; }
    }
    ctx->pc = 0x22BB04u;
label_22bb04:
    // 0x22bb04: 0x27b6008c  addiu       $s6, $sp, 0x8C
    ctx->pc = 0x22bb04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x22bb08: 0x32430004  andi        $v1, $s2, 0x4
    ctx->pc = 0x22bb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x22bb0c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x22BB0Cu;
    {
        const bool branch_taken_0x22bb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB0Cu;
            // 0x22bb10: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb0c) {
            ctx->pc = 0x22BB78u;
            goto label_22bb78;
        }
    }
    ctx->pc = 0x22BB14u;
    // 0x22bb14: 0x26b44660  addiu       $s4, $s5, 0x4660
    ctx->pc = 0x22bb14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 18016));
    // 0x22bb18: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x22BB18u;
    {
        const bool branch_taken_0x22bb18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB18u;
            // 0x22bb1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb18) {
            ctx->pc = 0x22BB54u;
            goto label_22bb54;
        }
    }
    ctx->pc = 0x22BB20u;
    // 0x22bb20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22bb20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22bb24: 0xc066a0c  jal         func_19A830
    ctx->pc = 0x22BB24u;
    SET_GPR_U32(ctx, 31, 0x22BB2Cu);
    ctx->pc = 0x22BB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB24u;
            // 0x22bb28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A830u;
    if (runtime->hasFunction(0x19A830u)) {
        auto targetFn = runtime->lookupFunction(0x19A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB2Cu; }
        if (ctx->pc != 0x22BB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__9ROBO_DATAFf_0x19a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB2Cu; }
        if (ctx->pc != 0x22BB2Cu) { return; }
    }
    ctx->pc = 0x22BB2Cu;
label_22bb2c:
    // 0x22bb2c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22bb30: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22bb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22bb34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bb38: 0x0  nop
    ctx->pc = 0x22bb38u;
    // NOP
    // 0x22bb3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bb40: 0x0  nop
    ctx->pc = 0x22bb40u;
    // NOP
    // 0x22bb44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22BB44u;
    {
        const bool branch_taken_0x22bb44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bb44) {
            ctx->pc = 0x22BB50u;
            goto label_22bb50;
        }
    }
    ctx->pc = 0x22BB4Cu;
    // 0x22bb4c: 0x36100080  ori         $s0, $s0, 0x80
    ctx->pc = 0x22bb4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)128);
label_22bb50:
    // 0x22bb50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22bb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22bb54:
    // 0x22bb54: 0xc06717c  jal         func_19C5F0
    ctx->pc = 0x22BB54u;
    SET_GPR_U32(ctx, 31, 0x22BB5Cu);
    ctx->pc = 0x19C5F0u;
    if (runtime->hasFunction(0x19C5F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB5Cu; }
        if (ctx->pc != 0x22BB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRobotCore__16CUserDataManagerFv_0x19c5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB5Cu; }
        if (ctx->pc != 0x22BB5Cu) { return; }
    }
    ctx->pc = 0x22BB5Cu;
label_22bb5c:
    // 0x22bb5c: 0xc066a00  jal         func_19A800
    ctx->pc = 0x22BB5Cu;
    SET_GPR_U32(ctx, 31, 0x22BB64u);
    ctx->pc = 0x22BB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB5Cu;
            // 0x22bb60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A800u;
    if (runtime->hasFunction(0x19A800u)) {
        auto targetFn = runtime->lookupFunction(0x19A800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB64u; }
        if (ctx->pc != 0x22BB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShiledKitLimmit__Fi_0x19a800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BB64u; }
        if (ctx->pc != 0x22BB64u) { return; }
    }
    ctx->pc = 0x22BB64u;
label_22bb64:
    // 0x22bb64: 0x968301e8  lhu         $v1, 0x1E8($s4)
    ctx->pc = 0x22bb64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 488)));
    // 0x22bb68: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x22bb68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22bb6c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BB6Cu;
    {
        const bool branch_taken_0x22bb6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB6Cu;
            // 0x22bb70: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb6c) {
            ctx->pc = 0x22BB78u;
            goto label_22bb78;
        }
    }
    ctx->pc = 0x22BB74u;
    // 0x22bb74: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x22bb74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_22bb78:
    // 0x22bb78: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BB78u;
    {
        const bool branch_taken_0x22bb78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB78u;
            // 0x22bb7c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb78) {
            ctx->pc = 0x22BB90u;
            goto label_22bb90;
        }
    }
    ctx->pc = 0x22BB80u;
    // 0x22bb80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bb84: 0x1662004a  bne         $s3, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x22BB84u;
    {
        const bool branch_taken_0x22bb84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x22BB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB84u;
            // 0x22bb88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb84) {
            ctx->pc = 0x22BCB0u;
            goto label_22bcb0;
        }
    }
    ctx->pc = 0x22BB8Cu;
    // 0x22bb8c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x22bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22bb90:
    // 0x22bb90: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x22bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x22bb94: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x22BB94u;
    {
        const bool branch_taken_0x22bb94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BB94u;
            // 0x22bb98: 0x8c540088  lw          $s4, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb94) {
            ctx->pc = 0x22BBB4u;
            goto label_22bbb4;
        }
    }
    ctx->pc = 0x22BB9Cu;
    // 0x22bb9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bba0: 0x16620027  bne         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x22BBA0u;
    {
        const bool branch_taken_0x22bba0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x22BBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BBA0u;
            // 0x22bba4: 0x26840170  addiu       $a0, $s4, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bba0) {
            ctx->pc = 0x22BC40u;
            goto label_22bc40;
        }
    }
    ctx->pc = 0x22BBA8u;
    // 0x22bba8: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x22bba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x22bbac: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x22BBACu;
    {
        const bool branch_taken_0x22bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bbac) {
            ctx->pc = 0x22BC3Cu;
            goto label_22bc3c;
        }
    }
    ctx->pc = 0x22BBB4u;
label_22bbb4:
    // 0x22bbb4: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x22BBB4u;
    SET_GPR_U32(ctx, 31, 0x22BBBCu);
    ctx->pc = 0x22BBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BBB4u;
            // 0x22bbb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BBBCu; }
        if (ctx->pc != 0x22BBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BBBCu; }
        if (ctx->pc != 0x22BBBCu) { return; }
    }
    ctx->pc = 0x22BBBCu;
label_22bbbc:
    // 0x22bbbc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22bbc0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22bbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22bbc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bbc8: 0x0  nop
    ctx->pc = 0x22bbc8u;
    // NOP
    // 0x22bbcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bbd0: 0x0  nop
    ctx->pc = 0x22bbd0u;
    // NOP
    // 0x22bbd4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22BBD4u;
    {
        const bool branch_taken_0x22bbd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bbd4) {
            ctx->pc = 0x22BBE0u;
            goto label_22bbe0;
        }
    }
    ctx->pc = 0x22BBDCu;
    // 0x22bbdc: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x22bbdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_22bbe0:
    // 0x22bbe0: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x22bbe0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x22bbe4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22bbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22bbe8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BBE8u;
    {
        const bool branch_taken_0x22bbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BBE8u;
            // 0x22bbec: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbe8) {
            ctx->pc = 0x22BBF4u;
            goto label_22bbf4;
        }
    }
    ctx->pc = 0x22BBF0u;
    // 0x22bbf0: 0x36100100  ori         $s0, $s0, 0x100
    ctx->pc = 0x22bbf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
label_22bbf4:
    // 0x22bbf4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BBF4u;
    {
        const bool branch_taken_0x22bbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BBF4u;
            // 0x22bbf8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbf4) {
            ctx->pc = 0x22BC00u;
            goto label_22bc00;
        }
    }
    ctx->pc = 0x22BBFCu;
    // 0x22bbfc: 0x36100200  ori         $s0, $s0, 0x200
    ctx->pc = 0x22bbfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)512);
label_22bc00:
    // 0x22bc00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BC00u;
    {
        const bool branch_taken_0x22bc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC00u;
            // 0x22bc04: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc00) {
            ctx->pc = 0x22BC0Cu;
            goto label_22bc0c;
        }
    }
    ctx->pc = 0x22BC08u;
    // 0x22bc08: 0x36100400  ori         $s0, $s0, 0x400
    ctx->pc = 0x22bc08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1024);
label_22bc0c:
    // 0x22bc0c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BC0Cu;
    {
        const bool branch_taken_0x22bc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC0Cu;
            // 0x22bc10: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc0c) {
            ctx->pc = 0x22BC18u;
            goto label_22bc18;
        }
    }
    ctx->pc = 0x22BC14u;
    // 0x22bc14: 0x36100800  ori         $s0, $s0, 0x800
    ctx->pc = 0x22bc14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2048);
label_22bc18:
    // 0x22bc18: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BC18u;
    {
        const bool branch_taken_0x22bc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC18u;
            // 0x22bc1c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc18) {
            ctx->pc = 0x22BC24u;
            goto label_22bc24;
        }
    }
    ctx->pc = 0x22BC20u;
    // 0x22bc20: 0x36101000  ori         $s0, $s0, 0x1000
    ctx->pc = 0x22bc20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4096);
label_22bc24:
    // 0x22bc24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BC24u;
    {
        const bool branch_taken_0x22bc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC24u;
            // 0x22bc28: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc24) {
            ctx->pc = 0x22BC30u;
            goto label_22bc30;
        }
    }
    ctx->pc = 0x22BC2Cu;
    // 0x22bc2c: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x22bc2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
label_22bc30:
    // 0x22bc30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BC30u;
    {
        const bool branch_taken_0x22bc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bc30) {
            ctx->pc = 0x22BC3Cu;
            goto label_22bc3c;
        }
    }
    ctx->pc = 0x22BC38u;
    // 0x22bc38: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x22bc38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
label_22bc3c:
    // 0x22bc3c: 0x26840170  addiu       $a0, $s4, 0x170
    ctx->pc = 0x22bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
label_22bc40:
    // 0x22bc40: 0xc066030  jal         func_1980C0
    ctx->pc = 0x22BC40u;
    SET_GPR_U32(ctx, 31, 0x22BC48u);
    ctx->pc = 0x22BC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC40u;
            // 0x22bc44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1980C0u;
    if (runtime->hasFunction(0x1980C0u)) {
        auto targetFn = runtime->lookupFunction(0x1980C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC48u; }
        if (ctx->pc != 0x22BC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWHp__13CGameDataUsedFPi_0x1980c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC48u; }
        if (ctx->pc != 0x22BC48u) { return; }
    }
    ctx->pc = 0x22BC48u;
label_22bc48:
    // 0x22bc48: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22bc4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22bc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22bc50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bc54: 0x0  nop
    ctx->pc = 0x22bc54u;
    // NOP
    // 0x22bc58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bc58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bc5c: 0x0  nop
    ctx->pc = 0x22bc5cu;
    // NOP
    // 0x22bc60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22BC60u;
    {
        const bool branch_taken_0x22bc60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC60u;
            // 0x22bc64: 0x268401dc  addiu       $a0, $s4, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc60) {
            ctx->pc = 0x22BC6Cu;
            goto label_22bc6c;
        }
    }
    ctx->pc = 0x22BC68u;
    // 0x22bc68: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x22bc68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_22bc6c:
    // 0x22bc6c: 0xc066030  jal         func_1980C0
    ctx->pc = 0x22BC6Cu;
    SET_GPR_U32(ctx, 31, 0x22BC74u);
    ctx->pc = 0x22BC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC6Cu;
            // 0x22bc70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1980C0u;
    if (runtime->hasFunction(0x1980C0u)) {
        auto targetFn = runtime->lookupFunction(0x1980C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC74u; }
        if (ctx->pc != 0x22BC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWHp__13CGameDataUsedFPi_0x1980c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BC74u; }
        if (ctx->pc != 0x22BC74u) { return; }
    }
    ctx->pc = 0x22BC74u;
label_22bc74:
    // 0x22bc74: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22bc78: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22bc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22bc7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bc80: 0x0  nop
    ctx->pc = 0x22bc80u;
    // NOP
    // 0x22bc84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bc84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bc88: 0x0  nop
    ctx->pc = 0x22bc88u;
    // NOP
    // 0x22bc8c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x22BC8Cu;
    {
        const bool branch_taken_0x22bc8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC8Cu;
            // 0x22bc90: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc8c) {
            ctx->pc = 0x22BD28u;
            goto label_22bd28;
        }
    }
    ctx->pc = 0x22BC94u;
    // 0x22bc94: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BC94u;
    {
        const bool branch_taken_0x22bc94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BC94u;
            // 0x22bc98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc94) {
            ctx->pc = 0x22BCA0u;
            goto label_22bca0;
        }
    }
    ctx->pc = 0x22BC9Cu;
    // 0x22bc9c: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x22bc9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_22bca0:
    // 0x22bca0: 0x16620020  bne         $s3, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x22BCA0u;
    {
        const bool branch_taken_0x22bca0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x22bca0) {
            ctx->pc = 0x22BD24u;
            goto label_22bd24;
        }
    }
    ctx->pc = 0x22BCA8u;
    // 0x22bca8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22BCA8u;
    {
        const bool branch_taken_0x22bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BCA8u;
            // 0x22bcac: 0x36100008  ori         $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bca8) {
            ctx->pc = 0x22BD24u;
            goto label_22bd24;
        }
    }
    ctx->pc = 0x22BCB0u;
label_22bcb0:
    // 0x22bcb0: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22BCB0u;
    {
        const bool branch_taken_0x22bcb0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x22BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BCB0u;
            // 0x22bcb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bcb0) {
            ctx->pc = 0x22BCF0u;
            goto label_22bcf0;
        }
    }
    ctx->pc = 0x22BCB8u;
    // 0x22bcb8: 0x26a24660  addiu       $v0, $s5, 0x4660
    ctx->pc = 0x22bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 18016));
    // 0x22bcbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22bcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bcc0: 0xc066030  jal         func_1980C0
    ctx->pc = 0x22BCC0u;
    SET_GPR_U32(ctx, 31, 0x22BCC8u);
    ctx->pc = 0x22BCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BCC0u;
            // 0x22bcc4: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1980C0u;
    if (runtime->hasFunction(0x1980C0u)) {
        auto targetFn = runtime->lookupFunction(0x1980C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BCC8u; }
        if (ctx->pc != 0x22BCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWHp__13CGameDataUsedFPi_0x1980c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BCC8u; }
        if (ctx->pc != 0x22BCC8u) { return; }
    }
    ctx->pc = 0x22BCC8u;
label_22bcc8:
    // 0x22bcc8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22bccc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22bcd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bcd4: 0x0  nop
    ctx->pc = 0x22bcd4u;
    // NOP
    // 0x22bcd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bcd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bcdc: 0x0  nop
    ctx->pc = 0x22bcdcu;
    // NOP
    // 0x22bce0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x22BCE0u;
    {
        const bool branch_taken_0x22bce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bce0) {
            ctx->pc = 0x22BD24u;
            goto label_22bd24;
        }
    }
    ctx->pc = 0x22BCE8u;
    // 0x22bce8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22BCE8u;
    {
        const bool branch_taken_0x22bce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BCE8u;
            // 0x22bcec: 0x36108000  ori         $s0, $s0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bce8) {
            ctx->pc = 0x22BD24u;
            goto label_22bd24;
        }
    }
    ctx->pc = 0x22BCF0u;
label_22bcf0:
    // 0x22bcf0: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22BCF0u;
    {
        const bool branch_taken_0x22bcf0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x22bcf0) {
            ctx->pc = 0x22BD24u;
            goto label_22bd24;
        }
    }
    ctx->pc = 0x22BCF8u;
    // 0x22bcf8: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x22BCF8u;
    SET_GPR_U32(ctx, 31, 0x22BD00u);
    ctx->pc = 0x22BCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BCF8u;
            // 0x22bcfc: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD00u; }
        if (ctx->pc != 0x22BD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD00u; }
        if (ctx->pc != 0x22BD00u) { return; }
    }
    ctx->pc = 0x22BD00u;
label_22bd00:
    // 0x22bd00: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22bd04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22bd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22bd08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22bd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22bd0c: 0x0  nop
    ctx->pc = 0x22bd0cu;
    // NOP
    // 0x22bd10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bd14: 0x0  nop
    ctx->pc = 0x22bd14u;
    // NOP
    // 0x22bd18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22BD18u;
    {
        const bool branch_taken_0x22bd18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bd18) {
            ctx->pc = 0x22BD24u;
            goto label_22bd24;
        }
    }
    ctx->pc = 0x22BD20u;
    // 0x22bd20: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x22bd20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_22bd24:
    // 0x22bd24: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x22bd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_22bd28:
    // 0x22bd28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BD28u;
    {
        const bool branch_taken_0x22bd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD28u;
            // 0x22bd2c: 0x36100030  ori         $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd28) {
            ctx->pc = 0x22BD38u;
            goto label_22bd38;
        }
    }
    ctx->pc = 0x22BD30u;
    // 0x22bd30: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x22bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x22bd34: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x22bd34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_22bd38:
    // 0x22bd38: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BD38u;
    {
        const bool branch_taken_0x22bd38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD38u;
            // 0x22bd3c: 0x36020040  ori         $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd38) {
            ctx->pc = 0x22BD4Cu;
            goto label_22bd4c;
        }
    }
    ctx->pc = 0x22BD40u;
    // 0x22bd40: 0x240290fe  addiu       $v0, $zero, -0x6F02
    ctx->pc = 0x22bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294938878));
    // 0x22bd44: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x22bd44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x22bd48: 0x36020040  ori         $v0, $s0, 0x40
    ctx->pc = 0x22bd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
label_22bd4c:
    // 0x22bd4c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22bd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22bd50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22bd50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22bd54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22bd54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22bd58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22bd58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22bd5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22bd5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22bd60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22bd60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bd64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22bd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bd68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x22BD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD6Cu;
            // 0x22bd70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BD74u;
}
