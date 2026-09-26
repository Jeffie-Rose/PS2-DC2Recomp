#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMove__13CMenuMoveItemFv
// Address: 0x21e500 - 0x21e670
void CheckMove__13CMenuMoveItemFv_0x21e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMove__13CMenuMoveItemFv_0x21e500");
#endif

    switch (ctx->pc) {
        case 0x21e540u: goto label_21e540;
        case 0x21e560u: goto label_21e560;
        case 0x21e58cu: goto label_21e58c;
        case 0x21e5b0u: goto label_21e5b0;
        case 0x21e5bcu: goto label_21e5bc;
        case 0x21e5ccu: goto label_21e5cc;
        case 0x21e5f4u: goto label_21e5f4;
        default: break;
    }

    ctx->pc = 0x21e500u;

    // 0x21e500: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21e504: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21e508: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21e50c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21e510: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x21e510u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e514: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21e514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21e518: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21e51c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e528: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x21e528u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e52c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x21E52Cu;
    {
        const bool branch_taken_0x21e52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E52Cu;
            // 0x21e530: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e52c) {
            ctx->pc = 0x21E634u;
            goto label_21e634;
        }
    }
    ctx->pc = 0x21E534u;
    // 0x21e534: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21e534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e538: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21e538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e53c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21e53cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e540:
    // 0x21e540: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x21e540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x21e544: 0x2452000c  addiu       $s2, $v0, 0xC
    ctx->pc = 0x21e544u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x21e548: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x21e548u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21e54c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x21E54Cu;
    {
        const bool branch_taken_0x21e54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E54Cu;
            // 0x21e550: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e54c) {
            ctx->pc = 0x21E61Cu;
            goto label_21e61c;
        }
    }
    ctx->pc = 0x21E554u;
    // 0x21e554: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x21e554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21e558: 0xc08a224  jal         func_228890
    ctx->pc = 0x21E558u;
    SET_GPR_U32(ctx, 31, 0x21E560u);
    ctx->pc = 0x21E55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E558u;
            // 0x21e55c: 0x24550004  addiu       $s5, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228890u;
    if (runtime->hasFunction(0x228890u)) {
        auto targetFn = runtime->lookupFunction(0x228890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E560u; }
        if (ctx->pc != 0x21E560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMoveEnd__16CMenuPosDataFormFv_0x228890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E560u; }
        if (ctx->pc != 0x21E560u) { return; }
    }
    ctx->pc = 0x21E560u;
label_21e560:
    // 0x21e560: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21E560u;
    {
        const bool branch_taken_0x21e560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e560) {
            ctx->pc = 0x21E5D4u;
            goto label_21e5d4;
        }
    }
    ctx->pc = 0x21E568u;
    // 0x21e568: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x21e568u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x21e56c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E56Cu;
    {
        const bool branch_taken_0x21e56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E56Cu;
            // 0x21e570: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e56c) {
            ctx->pc = 0x21E57Cu;
            goto label_21e57c;
        }
    }
    ctx->pc = 0x21E574u;
    // 0x21e574: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E574u;
    {
        const bool branch_taken_0x21e574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e574) {
            ctx->pc = 0x21E594u;
            goto label_21e594;
        }
    }
    ctx->pc = 0x21E57Cu;
label_21e57c:
    // 0x21e57c: 0x0  nop
    ctx->pc = 0x21e57cu;
    // NOP
    // 0x21e580: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x21e580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21e584: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x21E584u;
    SET_GPR_U32(ctx, 31, 0x21E58Cu);
    ctx->pc = 0x21E588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E584u;
            // 0x21e588: 0x26450008  addiu       $a1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E58Cu; }
        if (ctx->pc != 0x21E58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E58Cu; }
        if (ctx->pc != 0x21E58Cu) { return; }
    }
    ctx->pc = 0x21E58Cu;
label_21e58c:
    // 0x21e58c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21E58Cu;
    {
        const bool branch_taken_0x21e58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e58c) {
            ctx->pc = 0x21E5B0u;
            goto label_21e5b0;
        }
    }
    ctx->pc = 0x21E594u;
label_21e594:
    // 0x21e594: 0x0  nop
    ctx->pc = 0x21e594u;
    // NOP
    // 0x21e598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e59c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E59Cu;
    {
        const bool branch_taken_0x21e59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e59c) {
            ctx->pc = 0x21E5B0u;
            goto label_21e5b0;
        }
    }
    ctx->pc = 0x21E5A4u;
    // 0x21e5a4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x21e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21e5a8: 0xc0667d0  jal         func_199F40
    ctx->pc = 0x21E5A8u;
    SET_GPR_U32(ctx, 31, 0x21E5B0u);
    ctx->pc = 0x21E5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E5A8u;
            // 0x21e5ac: 0x26450008  addiu       $a1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199F40u;
    if (runtime->hasFunction(0x199F40u)) {
        auto targetFn = runtime->lookupFunction(0x199F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5B0u; }
        if (ctx->pc != 0x21E5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataItem__13CGameDataUsedFP13CGameDataUsed_0x199f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5B0u; }
        if (ctx->pc != 0x21E5B0u) { return; }
    }
    ctx->pc = 0x21E5B0u;
label_21e5b0:
    // 0x21e5b0: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x21e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x21e5b4: 0xc065c30  jal         func_1970C0
    ctx->pc = 0x21E5B4u;
    SET_GPR_U32(ctx, 31, 0x21E5BCu);
    ctx->pc = 0x21E5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E5B4u;
            // 0x21e5b8: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5BCu; }
        if (ctx->pc != 0x21E5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5BCu; }
        if (ctx->pc != 0x21E5BCu) { return; }
    }
    ctx->pc = 0x21E5BCu;
label_21e5bc:
    // 0x21e5bc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x21e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x21e5c0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x21e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21e5c4: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x21E5C4u;
    SET_GPR_U32(ctx, 31, 0x21E5CCu);
    ctx->pc = 0x21E5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E5C4u;
            // 0x21e5c8: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5CCu; }
        if (ctx->pc != 0x21E5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5CCu; }
        if (ctx->pc != 0x21E5CCu) { return; }
    }
    ctx->pc = 0x21E5CCu;
label_21e5cc:
    // 0x21e5cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21E5CCu;
    {
        const bool branch_taken_0x21e5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e5cc) {
            ctx->pc = 0x21E61Cu;
            goto label_21e61c;
        }
    }
    ctx->pc = 0x21E5D4u;
label_21e5d4:
    // 0x21e5d4: 0x0  nop
    ctx->pc = 0x21e5d4u;
    // NOP
    // 0x21e5d8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x21e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21e5dc: 0x27b2008c  addiu       $s2, $sp, 0x8C
    ctx->pc = 0x21e5dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x21e5e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5e4: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x21e5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x21e5e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21e5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e5ec: 0xc08974c  jal         func_225D30
    ctx->pc = 0x21E5ECu;
    SET_GPR_U32(ctx, 31, 0x21E5F4u);
    ctx->pc = 0x21E5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E5ECu;
            // 0x21e5f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5F4u; }
        if (ctx->pc != 0x21E5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E5F4u; }
        if (ctx->pc != 0x21E5F4u) { return; }
    }
    ctx->pc = 0x21E5F4u;
label_21e5f4:
    // 0x21e5f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x21e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21e5f8: 0x2841011f  slti        $at, $v0, 0x11F
    ctx->pc = 0x21e5f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)287) ? 1 : 0);
    // 0x21e5fc: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E5FCu;
    {
        const bool branch_taken_0x21e5fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e5fc) {
            ctx->pc = 0x21E61Cu;
            goto label_21e61c;
        }
    }
    ctx->pc = 0x21E604u;
    // 0x21e604: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21e608: 0x2841012f  slti        $at, $v0, 0x12F
    ctx->pc = 0x21e608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)303) ? 1 : 0);
    // 0x21e60c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E60Cu;
    {
        const bool branch_taken_0x21e60c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e60c) {
            ctx->pc = 0x21E61Cu;
            goto label_21e61c;
        }
    }
    ctx->pc = 0x21E614u;
    // 0x21e614: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x21e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21e618: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x21e618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_21e61c:
    // 0x21e61c: 0x0  nop
    ctx->pc = 0x21e61cu;
    // NOP
    // 0x21e620: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21e620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21e624: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x21e624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21e628: 0x2673007c  addiu       $s3, $s3, 0x7C
    ctx->pc = 0x21e628u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
    // 0x21e62c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x21E62Cu;
    {
        const bool branch_taken_0x21e62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E62Cu;
            // 0x21e630: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e62c) {
            ctx->pc = 0x21E540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21e540;
        }
    }
    ctx->pc = 0x21E634u;
label_21e634:
    // 0x21e634: 0x0  nop
    ctx->pc = 0x21e634u;
    // NOP
    // 0x21e638: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E638u;
    {
        const bool branch_taken_0x21e638 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e638) {
            ctx->pc = 0x21E644u;
            goto label_21e644;
        }
    }
    ctx->pc = 0x21E640u;
    // 0x21e640: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x21e640u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_21e644:
    // 0x21e644: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x21e644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21e648: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21e648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21e64c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21e64cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21e650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21e650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21e654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21e654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e65c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21e65cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21e660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e668: 0x3e00008  jr          $ra
    ctx->pc = 0x21E668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E668u;
            // 0x21e66c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E670u;
}
