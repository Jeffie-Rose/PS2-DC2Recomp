#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEnableHaveItemNum__Fv
// Address: 0x23f000 - 0x23f34c
void CheckEnableHaveItemNum__Fv_0x23f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEnableHaveItemNum__Fv_0x23f000");
#endif

    switch (ctx->pc) {
        case 0x23f03cu: goto label_23f03c;
        case 0x23f050u: goto label_23f050;
        case 0x23f060u: goto label_23f060;
        case 0x23f06cu: goto label_23f06c;
        case 0x23f078u: goto label_23f078;
        case 0x23f088u: goto label_23f088;
        case 0x23f09cu: goto label_23f09c;
        case 0x23f0b8u: goto label_23f0b8;
        case 0x23f0c4u: goto label_23f0c4;
        case 0x23f0d4u: goto label_23f0d4;
        case 0x23f11cu: goto label_23f11c;
        case 0x23f128u: goto label_23f128;
        case 0x23f134u: goto label_23f134;
        case 0x23f150u: goto label_23f150;
        case 0x23f16cu: goto label_23f16c;
        case 0x23f178u: goto label_23f178;
        case 0x23f184u: goto label_23f184;
        case 0x23f1e0u: goto label_23f1e0;
        case 0x23f1ecu: goto label_23f1ec;
        case 0x23f244u: goto label_23f244;
        case 0x23f25cu: goto label_23f25c;
        case 0x23f2a4u: goto label_23f2a4;
        case 0x23f2b8u: goto label_23f2b8;
        case 0x23f2c4u: goto label_23f2c4;
        default: break;
    }

    ctx->pc = 0x23f000u;

    // 0x23f000: 0x27bdf350  addiu       $sp, $sp, -0xCB0
    ctx->pc = 0x23f000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964048));
    // 0x23f004: 0x3c0201e7  lui         $v0, 0x1E7
    ctx->pc = 0x23f004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)487 << 16));
    // 0x23f008: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x23f008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x23f00c: 0x24429570  addiu       $v0, $v0, -0x6A90
    ctx->pc = 0x23f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
    // 0x23f010: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x23f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x23f014: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23f014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x23f018: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23f01c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23f020: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23f020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23f024: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23f028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23f028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23f02c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23f030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f034: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x23F034u;
    SET_GPR_U32(ctx, 31, 0x23F03Cu);
    ctx->pc = 0x23F038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F034u;
            // 0x23f038: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F03Cu; }
        if (ctx->pc != 0x23F03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F03Cu; }
        if (ctx->pc != 0x23F03Cu) { return; }
    }
    ctx->pc = 0x23F03Cu;
label_23f03c:
    // 0x23f03c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x23f03cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f040: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x23f040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23f044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f048: 0xc049c86  jal         func_127218
    ctx->pc = 0x23F048u;
    SET_GPR_U32(ctx, 31, 0x23F050u);
    ctx->pc = 0x23F04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F048u;
            // 0x23f04c: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F050u; }
        if (ctx->pc != 0x23F050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F050u; }
        if (ctx->pc != 0x23F050u) { return; }
    }
    ctx->pc = 0x23F050u;
label_23f050:
    // 0x23f050: 0x27a408b0  addiu       $a0, $sp, 0x8B0
    ctx->pc = 0x23f050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
    // 0x23f054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f058: 0xc049c86  jal         func_127218
    ctx->pc = 0x23F058u;
    SET_GPR_U32(ctx, 31, 0x23F060u);
    ctx->pc = 0x23F05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F058u;
            // 0x23f05c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F060u; }
        if (ctx->pc != 0x23F060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F060u; }
        if (ctx->pc != 0x23F060u) { return; }
    }
    ctx->pc = 0x23F060u;
label_23f060:
    // 0x23f060: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x23f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f064: 0xc066d14  jal         func_19B450
    ctx->pc = 0x23F064u;
    SET_GPR_U32(ctx, 31, 0x23F06Cu);
    ctx->pc = 0x23F068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F064u;
            // 0x23f068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F06Cu; }
        if (ctx->pc != 0x23F06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F06Cu; }
        if (ctx->pc != 0x23F06Cu) { return; }
    }
    ctx->pc = 0x23F06Cu;
label_23f06c:
    // 0x23f06c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23f06cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f070: 0xc068644  jal         func_1A1910
    ctx->pc = 0x23F070u;
    SET_GPR_U32(ctx, 31, 0x23F078u);
    ctx->pc = 0x23F074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F070u;
            // 0x23f074: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F078u; }
        if (ctx->pc != 0x23F078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F078u; }
        if (ctx->pc != 0x23F078u) { return; }
    }
    ctx->pc = 0x23F078u;
label_23f078:
    // 0x23f078: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23f078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f07c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x23f07cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23f080: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x23F080u;
    {
        const bool branch_taken_0x23f080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F080u;
            // 0x23f084: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f080) {
            ctx->pc = 0x23F110u;
            goto label_23f110;
        }
    }
    ctx->pc = 0x23F088u;
label_23f088:
    // 0x23f088: 0x86710002  lh          $s1, 0x2($s3)
    ctx->pc = 0x23f088u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x23f08c: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x23F08Cu;
    {
        const bool branch_taken_0x23f08c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x23F090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F08Cu;
            // 0x23f090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f08c) {
            ctx->pc = 0x23F100u;
            goto label_23f100;
        }
    }
    ctx->pc = 0x23F094u;
    // 0x23f094: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23F094u;
    SET_GPR_U32(ctx, 31, 0x23F09Cu);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F09Cu; }
        if (ctx->pc != 0x23F09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F09Cu; }
        if (ctx->pc != 0x23F09Cu) { return; }
    }
    ctx->pc = 0x23F09Cu;
label_23f09c:
    // 0x23f09c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x23f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23f0a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0a4: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x23f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x23f0a8: 0x8ca300b0  lw          $v1, 0xB0($a1)
    ctx->pc = 0x23f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x23f0ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f0b0: 0xc066618  jal         func_199860
    ctx->pc = 0x23F0B0u;
    SET_GPR_U32(ctx, 31, 0x23F0B8u);
    ctx->pc = 0x23F0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0B0u;
            // 0x23f0b4: 0xaca200b0  sw          $v0, 0xB0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199860u;
    if (runtime->hasFunction(0x199860u)) {
        auto targetFn = runtime->lookupFunction(0x199860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F0B8u; }
        if (ctx->pc != 0x23F0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNum__13CGameDataUsedFv_0x199860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F0B8u; }
        if (ctx->pc != 0x23F0B8u) { return; }
    }
    ctx->pc = 0x23F0B8u;
label_23f0b8:
    // 0x23f0b8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23f0b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f0bc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x23F0BCu;
    {
        const bool branch_taken_0x23f0bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0BCu;
            // 0x23f0c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0bc) {
            ctx->pc = 0x23F100u;
            goto label_23f100;
        }
    }
    ctx->pc = 0x23F0C4u;
label_23f0c4:
    // 0x23f0c4: 0x0  nop
    ctx->pc = 0x23f0c4u;
    // NOP
    // 0x23f0c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0cc: 0xc066648  jal         func_199920
    ctx->pc = 0x23F0CCu;
    SET_GPR_U32(ctx, 31, 0x23F0D4u);
    ctx->pc = 0x23F0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F0CCu;
            // 0x23f0d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199920u;
    if (runtime->hasFunction(0x199920u)) {
        auto targetFn = runtime->lookupFunction(0x199920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F0D4u; }
        if (ctx->pc != 0x23F0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNo__13CGameDataUsedFi_0x199920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F0D4u; }
        if (ctx->pc != 0x23F0D4u) { return; }
    }
    ctx->pc = 0x23F0D4u;
label_23f0d4:
    // 0x23f0d4: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F0D4u;
    {
        const bool branch_taken_0x23f0d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23f0d4) {
            ctx->pc = 0x23F0F0u;
            goto label_23f0f0;
        }
    }
    ctx->pc = 0x23F0DCu;
    // 0x23f0dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f0e0: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x23f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x23f0e4: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x23f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x23f0e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f0ec: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x23f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_23f0f0:
    // 0x23f0f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23f0f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23f0f4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x23f0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23f0f8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x23F0F8u;
    {
        const bool branch_taken_0x23f0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f0f8) {
            ctx->pc = 0x23F0C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f0c4;
        }
    }
    ctx->pc = 0x23F100u;
label_23f100:
    // 0x23f100: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23f100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23f104: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x23f104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23f108: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x23F108u;
    {
        const bool branch_taken_0x23f108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F108u;
            // 0x23f10c: 0x2673006c  addiu       $s3, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f108) {
            ctx->pc = 0x23F088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f088;
        }
    }
    ctx->pc = 0x23F110u;
label_23f110:
    // 0x23f110: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x23f110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f114: 0xc066d24  jal         func_19B490
    ctx->pc = 0x23F114u;
    SET_GPR_U32(ctx, 31, 0x23F11Cu);
    ctx->pc = 0x23F118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F114u;
            // 0x23f118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F11Cu; }
        if (ctx->pc != 0x23F11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F11Cu; }
        if (ctx->pc != 0x23F11Cu) { return; }
    }
    ctx->pc = 0x23F11Cu;
label_23f11c:
    // 0x23f11c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x23f11cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f120: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23f120u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f124: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x23f124u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f128:
    // 0x23f128: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x23f128u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x23f12c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23f12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f130: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23f130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f134:
    // 0x23f134: 0x0  nop
    ctx->pc = 0x23f134u;
    // NOP
    // 0x23f138: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x23f138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x23f13c: 0x8454002e  lh          $s4, 0x2E($v0)
    ctx->pc = 0x23f13cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x23f140: 0x1a80001b  blez        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x23F140u;
    {
        const bool branch_taken_0x23f140 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x23F144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F140u;
            // 0x23f144: 0x2453002c  addiu       $s3, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f140) {
            ctx->pc = 0x23F1B0u;
            goto label_23f1b0;
        }
    }
    ctx->pc = 0x23F148u;
    // 0x23f148: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23F148u;
    SET_GPR_U32(ctx, 31, 0x23F150u);
    ctx->pc = 0x23F14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F148u;
            // 0x23f14c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F150u; }
        if (ctx->pc != 0x23F150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F150u; }
        if (ctx->pc != 0x23F150u) { return; }
    }
    ctx->pc = 0x23F150u;
label_23f150:
    // 0x23f150: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x23f150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x23f154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f158: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x23f158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x23f15c: 0x8ca300b0  lw          $v1, 0xB0($a1)
    ctx->pc = 0x23f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x23f160: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23f160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f164: 0xc066618  jal         func_199860
    ctx->pc = 0x23F164u;
    SET_GPR_U32(ctx, 31, 0x23F16Cu);
    ctx->pc = 0x23F168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F164u;
            // 0x23f168: 0xaca200b0  sw          $v0, 0xB0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199860u;
    if (runtime->hasFunction(0x199860u)) {
        auto targetFn = runtime->lookupFunction(0x199860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F16Cu; }
        if (ctx->pc != 0x23F16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNum__13CGameDataUsedFv_0x199860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F16Cu; }
        if (ctx->pc != 0x23F16Cu) { return; }
    }
    ctx->pc = 0x23F16Cu;
label_23f16c:
    // 0x23f16c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23f16cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f170: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x23F170u;
    {
        const bool branch_taken_0x23f170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F170u;
            // 0x23f174: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f170) {
            ctx->pc = 0x23F1B0u;
            goto label_23f1b0;
        }
    }
    ctx->pc = 0x23F178u;
label_23f178:
    // 0x23f178: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f17c: 0xc066648  jal         func_199920
    ctx->pc = 0x23F17Cu;
    SET_GPR_U32(ctx, 31, 0x23F184u);
    ctx->pc = 0x23F180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F17Cu;
            // 0x23f180: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199920u;
    if (runtime->hasFunction(0x199920u)) {
        auto targetFn = runtime->lookupFunction(0x199920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F184u; }
        if (ctx->pc != 0x23F184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNo__13CGameDataUsedFi_0x199920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F184u; }
        if (ctx->pc != 0x23F184u) { return; }
    }
    ctx->pc = 0x23F184u;
label_23f184:
    // 0x23f184: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F184u;
    {
        const bool branch_taken_0x23f184 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23f184) {
            ctx->pc = 0x23F1A0u;
            goto label_23f1a0;
        }
    }
    ctx->pc = 0x23F18Cu;
    // 0x23f18c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23f190: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x23f190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x23f194: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x23f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x23f198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f19c: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x23f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_23f1a0:
    // 0x23f1a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x23f1a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x23f1a4: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x23f1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23f1a8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x23F1A8u;
    {
        const bool branch_taken_0x23f1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f1a8) {
            ctx->pc = 0x23F178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f178;
        }
    }
    ctx->pc = 0x23F1B0u;
label_23f1b0:
    // 0x23f1b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23f1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23f1b4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x23f1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23f1b8: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x23F1B8u;
    {
        const bool branch_taken_0x23f1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1B8u;
            // 0x23f1bc: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1b8) {
            ctx->pc = 0x23F134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f134;
        }
    }
    ctx->pc = 0x23F1C0u;
    // 0x23f1c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x23f1c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x23f1c4: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x23f1c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23f1c8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x23F1C8u;
    {
        const bool branch_taken_0x23f1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1C8u;
            // 0x23f1cc: 0x26d6038c  addiu       $s6, $s6, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1c8) {
            ctx->pc = 0x23F128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f128;
        }
    }
    ctx->pc = 0x23F1D0u;
    // 0x23f1d0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x23f1d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f1d4: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x23f1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23f1d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23F1D8u;
    {
        const bool branch_taken_0x23f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1D8u;
            // 0x23f1dc: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1d8) {
            ctx->pc = 0x23F224u;
            goto label_23f224;
        }
    }
    ctx->pc = 0x23F1E0u;
label_23f1e0:
    // 0x23f1e0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x23f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23f1e4: 0xc0655dc  jal         func_195770
    ctx->pc = 0x23F1E4u;
    SET_GPR_U32(ctx, 31, 0x23F1ECu);
    ctx->pc = 0x23F1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1E4u;
            // 0x23f1e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F1ECu; }
        if (ctx->pc != 0x23F1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F1ECu; }
        if (ctx->pc != 0x23F1ECu) { return; }
    }
    ctx->pc = 0x23F1ECu;
label_23f1ec:
    // 0x23f1ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23F1ECu;
    {
        const bool branch_taken_0x23f1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f1ec) {
            ctx->pc = 0x23F214u;
            goto label_23f214;
        }
    }
    ctx->pc = 0x23F1F4u;
    // 0x23f1f4: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x23f1f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x23f1f8: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x23f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x23f1fc: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x23f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x23f200: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x23f200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23f204: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F204u;
    {
        const bool branch_taken_0x23f204 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F204u;
            // 0x23f208: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f204) {
            ctx->pc = 0x23F214u;
            goto label_23f214;
        }
    }
    ctx->pc = 0x23F20Cu;
    // 0x23f20c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x23f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x23f210: 0xa44308b0  sh          $v1, 0x8B0($v0)
    ctx->pc = 0x23f210u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2224), (uint16_t)GPR_U32(ctx, 3));
label_23f214:
    // 0x23f214: 0x0  nop
    ctx->pc = 0x23f214u;
    // NOP
    // 0x23f218: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x23f218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x23f21c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x23f21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x23f220: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23f220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23f224:
    // 0x23f224: 0x0  nop
    ctx->pc = 0x23f224u;
    // NOP
    // 0x23f228: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x23f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23f22c: 0x94420020  lhu         $v0, 0x20($v0)
    ctx->pc = 0x23f22cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x23f230: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x23f230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f234: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x23F234u;
    {
        const bool branch_taken_0x23f234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F234u;
            // 0x23f238: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f234) {
            ctx->pc = 0x23F1E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f1e0;
        }
    }
    ctx->pc = 0x23F23Cu;
    // 0x23f23c: 0xc066d14  jal         func_19B450
    ctx->pc = 0x23F23Cu;
    SET_GPR_U32(ctx, 31, 0x23F244u);
    ctx->pc = 0x23F240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F23Cu;
            // 0x23f240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F244u; }
        if (ctx->pc != 0x23F244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F244u; }
        if (ctx->pc != 0x23F244u) { return; }
    }
    ctx->pc = 0x23F244u;
label_23f244:
    // 0x23f244: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x23f244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23f248: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x23F248u;
    {
        const bool branch_taken_0x23f248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F248u;
            // 0x23f24c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f248) {
            ctx->pc = 0x23F298u;
            goto label_23f298;
        }
    }
    ctx->pc = 0x23F250u;
    // 0x23f250: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x23f250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x23f254: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f258: 0x24a5ca90  addiu       $a1, $a1, -0x3570
    ctx->pc = 0x23f258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953616));
label_23f25c:
    // 0x23f25c: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x23f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x23f260: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x23f260u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f264: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x23f264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x23f268: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F268u;
    {
        const bool branch_taken_0x23f268 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x23f268) {
            ctx->pc = 0x23F288u;
            goto label_23f288;
        }
    }
    ctx->pc = 0x23F270u;
    // 0x23f270: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23f270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23f274: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x23f274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x23f278: 0x846308b0  lh          $v1, 0x8B0($v1)
    ctx->pc = 0x23f278u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2224)));
    // 0x23f27c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F27Cu;
    {
        const bool branch_taken_0x23f27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f27c) {
            ctx->pc = 0x23F288u;
            goto label_23f288;
        }
    }
    ctx->pc = 0x23F284u;
    // 0x23f284: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x23f284u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_23f288:
    // 0x23f288: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23f288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x23f28c: 0xf2182a  slt         $v1, $a3, $s2
    ctx->pc = 0x23f28cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23f290: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x23F290u;
    {
        const bool branch_taken_0x23f290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F290u;
            // 0x23f294: 0x2442006c  addiu       $v0, $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f290) {
            ctx->pc = 0x23F25Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f25c;
        }
    }
    ctx->pc = 0x23F298u;
label_23f298:
    // 0x23f298: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x23f298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f29c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x23F29Cu;
    SET_GPR_U32(ctx, 31, 0x23F2A4u);
    ctx->pc = 0x23F2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F29Cu;
            // 0x23f2a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F2A4u; }
        if (ctx->pc != 0x23F2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F2A4u; }
        if (ctx->pc != 0x23F2A4u) { return; }
    }
    ctx->pc = 0x23F2A4u;
label_23f2a4:
    // 0x23f2a4: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x23f2a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23f2a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23f2acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f2b4: 0x27869590  addiu       $a2, $gp, -0x6A70
    ctx->pc = 0x23f2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940048));
label_23f2b8:
    // 0x23f2b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x23f2b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23f2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f2c0: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x23f2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_23f2c4:
    // 0x23f2c4: 0x0  nop
    ctx->pc = 0x23f2c4u;
    // NOP
    // 0x23f2c8: 0x1654821  addu        $t1, $t3, $a1
    ctx->pc = 0x23f2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x23f2cc: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x23f2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f2d0: 0x1871821  addu        $v1, $t4, $a3
    ctx->pc = 0x23f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x23f2d4: 0x8463002e  lh          $v1, 0x2E($v1)
    ctx->pc = 0x23f2d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x23f2d8: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F2D8u;
    {
        const bool branch_taken_0x23f2d8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x23f2d8) {
            ctx->pc = 0x23F2F8u;
            goto label_23f2f8;
        }
    }
    ctx->pc = 0x23F2E0u;
    // 0x23f2e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23f2e4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x23f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x23f2e8: 0x846308b0  lh          $v1, 0x8B0($v1)
    ctx->pc = 0x23f2e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2224)));
    // 0x23f2ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F2ECu;
    {
        const bool branch_taken_0x23f2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f2ec) {
            ctx->pc = 0x23F2F8u;
            goto label_23f2f8;
        }
    }
    ctx->pc = 0x23F2F4u;
    // 0x23f2f4: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x23f2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
label_23f2f8:
    // 0x23f2f8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x23f2f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x23f2fc: 0x29630003  slti        $v1, $t3, 0x3
    ctx->pc = 0x23f2fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23f300: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x23F300u;
    {
        const bool branch_taken_0x23f300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F300u;
            // 0x23f304: 0x24e7006c  addiu       $a3, $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f300) {
            ctx->pc = 0x23F2C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f2c4;
        }
    }
    ctx->pc = 0x23F308u;
    // 0x23f308: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x23f308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x23f30c: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x23f30cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x23f310: 0x29430002  slti        $v1, $t2, 0x2
    ctx->pc = 0x23f310u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23f314: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x23F314u;
    {
        const bool branch_taken_0x23f314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F314u;
            // 0x23f318: 0x258c038c  addiu       $t4, $t4, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f314) {
            ctx->pc = 0x23F2B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f2b8;
        }
    }
    ctx->pc = 0x23F31Cu;
    // 0x23f31c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23f31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23f320: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x23f320u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f324: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23f324u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f328: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23f328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23f32c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23f32cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f330: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23f330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23f334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23f338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23f33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f344: 0x3e00008  jr          $ra
    ctx->pc = 0x23F344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F344u;
            // 0x23f348: 0x27bd0cb0  addiu       $sp, $sp, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23F34Cu;
}
