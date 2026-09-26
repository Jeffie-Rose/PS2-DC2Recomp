#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcFukidashiXY__6ClsMesFPi
// Address: 0x152470 - 0x152840
void CalcFukidashiXY__6ClsMesFPi_0x152470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcFukidashiXY__6ClsMesFPi_0x152470");
#endif

    switch (ctx->pc) {
        case 0x1524e0u: goto label_1524e0;
        case 0x152514u: goto label_152514;
        case 0x152520u: goto label_152520;
        case 0x152540u: goto label_152540;
        case 0x152568u: goto label_152568;
        case 0x1525b8u: goto label_1525b8;
        case 0x1525c4u: goto label_1525c4;
        case 0x1525fcu: goto label_1525fc;
        case 0x15261cu: goto label_15261c;
        case 0x15267cu: goto label_15267c;
        case 0x152688u: goto label_152688;
        default: break;
    }

    ctx->pc = 0x152470u;

    // 0x152470: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x152470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x152474: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x152474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x152478: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x152478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15247c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x15247cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x152480: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x152480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x152484: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x152484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x152488: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x152488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15248c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15248cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x152490: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x152490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x152494: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x152494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x152498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15249c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1524a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1524a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1524a4: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x1524a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x1524a8: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x1524a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x1524ac: 0x284100a1  slti        $at, $v0, 0xA1
    ctx->pc = 0x1524acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)161) ? 1 : 0);
    // 0x1524b0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1524B0u;
    {
        const bool branch_taken_0x1524b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1524B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1524B0u;
            // 0x1524b4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524b0) {
            ctx->pc = 0x1524BCu;
            goto label_1524bc;
        }
    }
    ctx->pc = 0x1524B8u;
    // 0x1524b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1524b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1524bc:
    // 0x1524bc: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1524bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1524c0: 0x8c420148  lw          $v0, 0x148($v0)
    ctx->pc = 0x1524c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x1524c4: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x1524c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1524c8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1524C8u;
    {
        const bool branch_taken_0x1524c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1524CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1524C8u;
            // 0x1524cc: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524c8) {
            ctx->pc = 0x1524D4u;
            goto label_1524d4;
        }
    }
    ctx->pc = 0x1524D0u;
    // 0x1524d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1524d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1524d4:
    // 0x1524d4: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1524d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1524d8: 0xc0548d4  jal         func_152350
    ctx->pc = 0x1524D8u;
    SET_GPR_U32(ctx, 31, 0x1524E0u);
    ctx->pc = 0x1524DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1524D8u;
            // 0x1524dc: 0x27a80110  addiu       $t0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152350u;
    if (runtime->hasFunction(0x152350u)) {
        auto targetFn = runtime->lookupFunction(0x152350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1524E0u; }
        if (ctx->pc != 0x1524E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcAutoPosSetData__FiiiiP4RECT_0x152350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1524E0u; }
        if (ctx->pc != 0x1524E0u) { return; }
    }
    ctx->pc = 0x1524E0u;
label_1524e0:
    // 0x1524e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1524e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1524e4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1524e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1524e8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1524e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1524ec: 0x8e1e0004  lw          $fp, 0x4($s0)
    ctx->pc = 0x1524ecu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1524f0: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1524f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1524f4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1524f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x1524f8: 0x8c63014c  lw          $v1, 0x14C($v1)
    ctx->pc = 0x1524f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x1524fc: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x1524fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x152500: 0x14600079  bnez        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x152500u;
    {
        const bool branch_taken_0x152500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152500u;
            // 0x152504: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152500) {
            ctx->pc = 0x1526E8u;
            goto label_1526e8;
        }
    }
    ctx->pc = 0x152508u;
    // 0x152508: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x152508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x15250c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15250cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152510: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x152510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_152514:
    // 0x152514: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x152514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152518: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x152518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15251c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15251cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152520:
    // 0x152520: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x152520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x152524: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152528: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x152528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15252c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x152530: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x152530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x152534: 0x24570110  addiu       $s7, $v0, 0x110
    ctx->pc = 0x152534u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x152538: 0xc054434  jal         func_1510D0
    ctx->pc = 0x152538u;
    SET_GPR_U32(ctx, 31, 0x152540u);
    ctx->pc = 0x15253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152538u;
            // 0x15253c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1510D0u;
    if (runtime->hasFunction(0x1510D0u)) {
        auto targetFn = runtime->lookupFunction(0x1510D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152540u; }
        if (ctx->pc != 0x152540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPosInOutForRect__FP4RECTii_0x1510d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152540u; }
        if (ctx->pc != 0x152540u) { return; }
    }
    ctx->pc = 0x152540u;
label_152540:
    // 0x152540: 0x2dd1821  addu        $v1, $s6, $sp
    ctx->pc = 0x152540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x152544: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x152544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x152548: 0x247501a0  addiu       $s5, $v1, 0x1A0
    ctx->pc = 0x152548u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x15254c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x15254cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x152550: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x152550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x152554: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152554u;
    {
        const bool branch_taken_0x152554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152554u;
            // 0x152558: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152554) {
            ctx->pc = 0x15256Cu;
            goto label_15256c;
        }
    }
    ctx->pc = 0x15255Cu;
    // 0x15255c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15255cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152560: 0xc054434  jal         func_1510D0
    ctx->pc = 0x152560u;
    SET_GPR_U32(ctx, 31, 0x152568u);
    ctx->pc = 0x152564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152560u;
            // 0x152564: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1510D0u;
    if (runtime->hasFunction(0x1510D0u)) {
        auto targetFn = runtime->lookupFunction(0x1510D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152568u; }
        if (ctx->pc != 0x152568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPosInOutForRect__FP4RECTii_0x1510d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152568u; }
        if (ctx->pc != 0x152568u) { return; }
    }
    ctx->pc = 0x152568u;
label_152568:
    // 0x152568: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x152568u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_15256c:
    // 0x15256c: 0x0  nop
    ctx->pc = 0x15256cu;
    // NOP
    // 0x152570: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x152570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x152574: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x152574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x152578: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x152578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x15257c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x15257Cu;
    {
        const bool branch_taken_0x15257c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15257Cu;
            // 0x152580: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15257c) {
            ctx->pc = 0x152520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152520;
        }
    }
    ctx->pc = 0x152584u;
    // 0x152584: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x152584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x152588: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x152588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15258c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x15258cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x152590: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x152590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x152598: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x152598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x15259c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x15259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1525a0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1525a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1525a4: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1525A4u;
    {
        const bool branch_taken_0x1525a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1525A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525A4u;
            // 0x1525a8: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525a4) {
            ctx->pc = 0x152514u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152514;
        }
    }
    ctx->pc = 0x1525ACu;
    // 0x1525ac: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1525acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x1525b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1525b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525b4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1525b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1525b8:
    // 0x1525b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1525b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1525bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1525c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1525c4:
    // 0x1525c4: 0x0  nop
    ctx->pc = 0x1525c4u;
    // NOP
    // 0x1525c8: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x1525c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x1525cc: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1525ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1525d0: 0x8c6201a0  lw          $v0, 0x1A0($v1)
    ctx->pc = 0x1525d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1525d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1525D4u;
    {
        const bool branch_taken_0x1525d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1525D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525D4u;
            // 0x1525d8: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525d4) {
            ctx->pc = 0x1525E0u;
            goto label_1525e0;
        }
    }
    ctx->pc = 0x1525DCu;
    // 0x1525dc: 0xac6201d0  sw          $v0, 0x1D0($v1)
    ctx->pc = 0x1525dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 2));
label_1525e0:
    // 0x1525e0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1525e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1525e4: 0x2fd1021  addu        $v0, $s7, $sp
    ctx->pc = 0x1525e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
    // 0x1525e8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1525e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1525ec: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1525ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1525f0: 0x24550110  addiu       $s5, $v0, 0x110
    ctx->pc = 0x1525f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1525f4: 0xc054450  jal         func_151140
    ctx->pc = 0x1525F4u;
    SET_GPR_U32(ctx, 31, 0x1525FCu);
    ctx->pc = 0x1525F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1525F4u;
            // 0x1525f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151140u;
    if (runtime->hasFunction(0x151140u)) {
        auto targetFn = runtime->lookupFunction(0x151140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1525FCu; }
        if (ctx->pc != 0x1525FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDisPosToRect__FP4RECTii_0x151140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1525FCu; }
        if (ctx->pc != 0x1525FCu) { return; }
    }
    ctx->pc = 0x1525FCu;
label_1525fc:
    // 0x1525fc: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x1525fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x152600: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x152600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152604: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x152604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x152608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15260c: 0x245501d0  addiu       $s5, $v0, 0x1D0
    ctx->pc = 0x15260cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x152610: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x152610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152614: 0xc054450  jal         func_151140
    ctx->pc = 0x152614u;
    SET_GPR_U32(ctx, 31, 0x15261Cu);
    ctx->pc = 0x152618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152614u;
            // 0x152618: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x151140u;
    if (runtime->hasFunction(0x151140u)) {
        auto targetFn = runtime->lookupFunction(0x151140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15261Cu; }
        if (ctx->pc != 0x15261Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDisPosToRect__FP4RECTii_0x151140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15261Cu; }
        if (ctx->pc != 0x15261Cu) { return; }
    }
    ctx->pc = 0x15261Cu;
label_15261c:
    // 0x15261c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x15261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152620: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x152620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152624: 0x0  nop
    ctx->pc = 0x152624u;
    // NOP
    // 0x152628: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x152628u;
    {
        const bool branch_taken_0x152628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152628) {
            ctx->pc = 0x152634u;
            goto label_152634;
        }
    }
    ctx->pc = 0x152630u;
    // 0x152630: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x152630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_152634:
    // 0x152634: 0x0  nop
    ctx->pc = 0x152634u;
    // NOP
    // 0x152638: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x152638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15263c: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x15263cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x152640: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x152640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x152644: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x152644u;
    {
        const bool branch_taken_0x152644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152644u;
            // 0x152648: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152644) {
            ctx->pc = 0x1525C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1525c4;
        }
    }
    ctx->pc = 0x15264Cu;
    // 0x15264c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x15264cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x152650: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x152650u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x152654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x152654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x152658: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x152658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x15265c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x15265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x152660: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x152660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x152664: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x152664u;
    {
        const bool branch_taken_0x152664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152664u;
            // 0x152668: 0x26f70030  addiu       $s7, $s7, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152664) {
            ctx->pc = 0x1525B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1525b8;
        }
    }
    ctx->pc = 0x15266Cu;
    // 0x15266c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15266cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152670: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152678: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x152678u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_15267c:
    // 0x15267c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15267cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152684: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x152684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_152688:
    // 0x152688: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x152688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15268c: 0xc46201d0  lwc1        $f2, 0x1D0($v1)
    ctx->pc = 0x15268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152690: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x152690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152694: 0x0  nop
    ctx->pc = 0x152694u;
    // NOP
    // 0x152698: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x152698u;
    {
        const bool branch_taken_0x152698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152698) {
            ctx->pc = 0x1526BCu;
            goto label_1526bc;
        }
    }
    ctx->pc = 0x1526A0u;
    // 0x1526a0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1526a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1526a4: 0x0  nop
    ctx->pc = 0x1526a4u;
    // NOP
    // 0x1526a8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1526A8u;
    {
        const bool branch_taken_0x1526a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1526a8) {
            ctx->pc = 0x1526BCu;
            goto label_1526bc;
        }
    }
    ctx->pc = 0x1526B0u;
    // 0x1526b0: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x1526b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x1526b4: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x1526b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
    // 0x1526b8: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x1526b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
label_1526bc:
    // 0x1526bc: 0x0  nop
    ctx->pc = 0x1526bcu;
    // NOP
    // 0x1526c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1526c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1526c4: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x1526c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1526c8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1526C8u;
    {
        const bool branch_taken_0x1526c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1526CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1526C8u;
            // 0x1526cc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526c8) {
            ctx->pc = 0x152688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_152688;
        }
    }
    ctx->pc = 0x1526D0u;
    // 0x1526d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1526d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1526d4: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x1526d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1526d8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1526D8u;
    {
        const bool branch_taken_0x1526d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1526DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1526D8u;
            // 0x1526dc: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526d8) {
            ctx->pc = 0x15267Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15267c;
        }
    }
    ctx->pc = 0x1526E0u;
    // 0x1526e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1526E0u;
    {
        const bool branch_taken_0x1526e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1526E0u;
            // 0x1526e4: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526e0) {
            ctx->pc = 0x152720u;
            goto label_152720;
        }
    }
    ctx->pc = 0x1526E8u;
label_1526e8:
    // 0x1526e8: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x1526e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1526ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1526ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1526f0: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x1526f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1526f4: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x1526f4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1526f8: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1526f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x1526fc: 0x34655556  ori         $a1, $v1, 0x5556
    ctx->pc = 0x1526fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x152700: 0x1810  mfhi        $v1
    ctx->pc = 0x152700u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x152704: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x152704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x152708: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x152708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x15270c: 0x0  nop
    ctx->pc = 0x15270cu;
    // NOP
    // 0x152710: 0x1810  mfhi        $v1
    ctx->pc = 0x152710u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x152714: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x152714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152718: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x152718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x15271c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_152720:
    // 0x152720: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x152720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x152724: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x152724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152728: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x152728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15272c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x15272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152730: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x152730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x152734: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x152734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x152738: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x152738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x15273c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x15273cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x152740: 0x8ca40110  lw          $a0, 0x110($a1)
    ctx->pc = 0x152740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x152744: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x152744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x152748: 0xac64013c  sw          $a0, 0x13C($v1)
    ctx->pc = 0x152748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 4));
    // 0x15274c: 0x8ca40114  lw          $a0, 0x114($a1)
    ctx->pc = 0x15274cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x152750: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x152750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x152754: 0xac640140  sw          $a0, 0x140($v1)
    ctx->pc = 0x152754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 4));
    // 0x152758: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x152758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x15275c: 0x8c640144  lw          $a0, 0x144($v1)
    ctx->pc = 0x15275cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x152760: 0x288100a0  slti        $at, $a0, 0xA0
    ctx->pc = 0x152760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)160) ? 1 : 0);
    // 0x152764: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x152764u;
    {
        const bool branch_taken_0x152764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152764u;
            // 0x152768: 0x240300a0  addiu       $v1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152764) {
            ctx->pc = 0x152794u;
            goto label_152794;
        }
    }
    ctx->pc = 0x15276Cu;
    // 0x15276c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15276cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152770: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x152770u;
    {
        const bool branch_taken_0x152770 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152770u;
            // 0x152774: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152770) {
            ctx->pc = 0x152780u;
            goto label_152780;
        }
    }
    ctx->pc = 0x152778u;
    // 0x152778: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x152778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15277c: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x15277cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_152780:
    // 0x152780: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x152780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x152784: 0x8c63013c  lw          $v1, 0x13C($v1)
    ctx->pc = 0x152784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x152788: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x152788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15278c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x15278cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x152790: 0xac64013c  sw          $a0, 0x13C($v1)
    ctx->pc = 0x152790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 4));
label_152794:
    // 0x152794: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x152794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x152798: 0x8c640148  lw          $a0, 0x148($v1)
    ctx->pc = 0x152798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x15279c: 0x28810080  slti        $at, $a0, 0x80
    ctx->pc = 0x15279cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1527a0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1527A0u;
    {
        const bool branch_taken_0x1527a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1527A0u;
            // 0x1527a4: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527a0) {
            ctx->pc = 0x1527D0u;
            goto label_1527d0;
        }
    }
    ctx->pc = 0x1527A8u;
    // 0x1527a8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1527a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1527ac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1527ACu;
    {
        const bool branch_taken_0x1527ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1527B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1527ACu;
            // 0x1527b0: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527ac) {
            ctx->pc = 0x1527BCu;
            goto label_1527bc;
        }
    }
    ctx->pc = 0x1527B4u;
    // 0x1527b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1527b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1527b8: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1527b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_1527bc:
    // 0x1527bc: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1527bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1527c0: 0x8c630140  lw          $v1, 0x140($v1)
    ctx->pc = 0x1527c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x1527c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1527c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1527c8: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1527c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1527cc: 0xac640140  sw          $a0, 0x140($v1)
    ctx->pc = 0x1527ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 4));
label_1527d0:
    // 0x1527d0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1527d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1527d4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1527D4u;
    {
        const bool branch_taken_0x1527d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1527d4) {
            ctx->pc = 0x1527F0u;
            goto label_1527f0;
        }
    }
    ctx->pc = 0x1527DCu;
    // 0x1527dc: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1527dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1527e0: 0x8c63013c  lw          $v1, 0x13C($v1)
    ctx->pc = 0x1527e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x1527e4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1527e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1527e8: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1527e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1527ec: 0xac64013c  sw          $a0, 0x13C($v1)
    ctx->pc = 0x1527ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 4));
label_1527f0:
    // 0x1527f0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1527f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1527f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1527F4u;
    {
        const bool branch_taken_0x1527f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1527f4) {
            ctx->pc = 0x152810u;
            goto label_152810;
        }
    }
    ctx->pc = 0x1527FCu;
    // 0x1527fc: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x1527fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x152800: 0x8c630140  lw          $v1, 0x140($v1)
    ctx->pc = 0x152800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x152804: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x152804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x152808: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x152808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x15280c: 0xac640140  sw          $a0, 0x140($v1)
    ctx->pc = 0x15280cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 4));
label_152810:
    // 0x152810: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x152810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152814: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x152814u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152818: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x152818u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15281c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15281cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152820: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x152820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152824: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x152824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152828: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15282c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15282cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152838: 0x3e00008  jr          $ra
    ctx->pc = 0x152838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15283Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152838u;
            // 0x15283c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152840u;
}
