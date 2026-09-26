#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnalyzeStera__FP9CEditDataP8CEditMap
// Address: 0x3173d0 - 0x317600
void AnalyzeStera__FP9CEditDataP8CEditMap_0x3173d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnalyzeStera__FP9CEditDataP8CEditMap_0x3173d0");
#endif

    switch (ctx->pc) {
        case 0x3173f4u: goto label_3173f4;
        case 0x31745cu: goto label_31745c;
        case 0x317464u: goto label_317464;
        case 0x317488u: goto label_317488;
        case 0x3174c8u: goto label_3174c8;
        case 0x3174e8u: goto label_3174e8;
        case 0x3174fcu: goto label_3174fc;
        case 0x317524u: goto label_317524;
        case 0x31752cu: goto label_31752c;
        case 0x317538u: goto label_317538;
        case 0x31754cu: goto label_31754c;
        case 0x317554u: goto label_317554;
        case 0x317560u: goto label_317560;
        case 0x31757cu: goto label_31757c;
        case 0x3175a0u: goto label_3175a0;
        case 0x3175b8u: goto label_3175b8;
        case 0x3175ecu: goto label_3175ec;
        default: break;
    }

    ctx->pc = 0x3173d0u;

    // 0x3173d0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x3173d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x3173d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3173d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3173d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3173d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3173dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3173dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3173e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3173e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3173e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3173e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3173e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3173e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3173ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3173ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3173f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3173f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3173f4:
    // 0x3173f4: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x3173f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x3173f8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3173f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3173fc: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x3173fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x317400: 0x24470130  addiu       $a3, $v0, 0x130
    ctx->pc = 0x317400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x317404: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x317404u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x317408: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x317408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x31740c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x31740cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x317410: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x317410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x317414: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x317414u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x317418: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x317418u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x31741c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x31741cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x317420: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x317420u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x317424: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x317424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x317428: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x317428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x31742c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x31742cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x317430: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x317430u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x317434: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x317434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x317438: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x317438u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x31743c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x31743cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x317440: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x317440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x317444: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x317444u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x317448: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x317448u;
    {
        const bool branch_taken_0x317448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317448u;
            // 0x31744c: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317448) {
            ctx->pc = 0x3173F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3173f4;
        }
    }
    ctx->pc = 0x317450u;
    // 0x317450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317454: 0xc0bbc2c  jal         func_2EF0B0
    ctx->pc = 0x317454u;
    SET_GPR_U32(ctx, 31, 0x31745Cu);
    ctx->pc = 0x317458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317454u;
            // 0x317458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF0B0u;
    if (runtime->hasFunction(0x2EF0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31745Cu; }
        if (ctx->pc != 0x31745Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GroundBalance__8CEditMapFi_0x2ef0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31745Cu; }
        if (ctx->pc != 0x31745Cu) { return; }
    }
    ctx->pc = 0x31745Cu;
label_31745c:
    // 0x31745c: 0xc0bbd20  jal         func_2EF480
    ctx->pc = 0x31745Cu;
    SET_GPR_U32(ctx, 31, 0x317464u);
    ctx->pc = 0x317460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31745Cu;
            // 0x317460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF480u;
    if (runtime->hasFunction(0x2EF480u)) {
        auto targetFn = runtime->lookupFunction(0x2EF480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317464u; }
        if (ctx->pc != 0x317464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BalanceCheck__8CEditMapFv_0x2ef480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317464u; }
        if (ctx->pc != 0x317464u) { return; }
    }
    ctx->pc = 0x317464u;
label_317464:
    // 0x317464: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x317464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x317468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31746c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31746cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x317470: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x317470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x317474: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x317474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x317478: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31747c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x317480: 0xc0c5b10  jal         func_316C40
    ctx->pc = 0x317480u;
    SET_GPR_U32(ctx, 31, 0x317488u);
    ctx->pc = 0x317484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317480u;
            // 0x317484: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316C40u;
    if (runtime->hasFunction(0x316C40u)) {
        auto targetFn = runtime->lookupFunction(0x316C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317488u; }
        if (ctx->pc != 0x317488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTreeNum__FP8CEditMap_0x316c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317488u; }
        if (ctx->pc != 0x317488u) { return; }
    }
    ctx->pc = 0x317488u;
label_317488:
    // 0x317488: 0x2843000f  slti        $v1, $v0, 0xF
    ctx->pc = 0x317488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x31748c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317490: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x317490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x317494: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x317494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317498: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x317498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31749c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3174a0: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x3174a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x3174a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3174a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3174a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3174a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3174ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3174acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3174b0: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x3174b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x3174b4: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x3174b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x3174b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3174b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3174bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3174bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3174c0: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x3174C0u;
    SET_GPR_U32(ctx, 31, 0x3174C8u);
    ctx->pc = 0x3174C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3174C0u;
            // 0x3174c4: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3174C8u; }
        if (ctx->pc != 0x3174C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3174C8u; }
        if (ctx->pc != 0x3174C8u) { return; }
    }
    ctx->pc = 0x3174C8u;
label_3174c8:
    // 0x3174c8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x3174c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3174cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3174ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3174d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3174d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3174d4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3174d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3174d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3174d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3174dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3174dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3174e0: 0xc0bb998  jal         func_2EE660
    ctx->pc = 0x3174E0u;
    SET_GPR_U32(ctx, 31, 0x3174E8u);
    ctx->pc = 0x3174E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3174E0u;
            // 0x3174e4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3174E8u; }
        if (ctx->pc != 0x3174E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3174E8u; }
        if (ctx->pc != 0x3174E8u) { return; }
    }
    ctx->pc = 0x3174E8u;
label_3174e8:
    // 0x3174e8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3174e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x3174ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3174ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3174f0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3174f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3174f4: 0xc0bb998  jal         func_2EE660
    ctx->pc = 0x3174F4u;
    SET_GPR_U32(ctx, 31, 0x3174FCu);
    ctx->pc = 0x3174F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3174F4u;
            // 0x3174f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3174FCu; }
        if (ctx->pc != 0x3174FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3174FCu; }
        if (ctx->pc != 0x3174FCu) { return; }
    }
    ctx->pc = 0x3174FCu;
label_3174fc:
    // 0x3174fc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3174fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x317500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317504: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x317504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x317508: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x317508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31750c: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x31750cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x317510: 0x28420028  slti        $v0, $v0, 0x28
    ctx->pc = 0x317510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x317514: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x317518: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x317518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31751c: 0xc0bb998  jal         func_2EE660
    ctx->pc = 0x31751Cu;
    SET_GPR_U32(ctx, 31, 0x317524u);
    ctx->pc = 0x317520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31751Cu;
            // 0x317520: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317524u; }
        if (ctx->pc != 0x317524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317524u; }
        if (ctx->pc != 0x317524u) { return; }
    }
    ctx->pc = 0x317524u;
label_317524:
    // 0x317524: 0xc064220  jal         func_190880
    ctx->pc = 0x317524u;
    SET_GPR_U32(ctx, 31, 0x31752Cu);
    ctx->pc = 0x317528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317524u;
            // 0x317528: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31752Cu; }
        if (ctx->pc != 0x31752Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31752Cu; }
        if (ctx->pc != 0x31752Cu) { return; }
    }
    ctx->pc = 0x31752Cu;
label_31752c:
    // 0x31752c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31752cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317530: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x317530u;
    SET_GPR_U32(ctx, 31, 0x317538u);
    ctx->pc = 0x317534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317530u;
            // 0x317534: 0x2405014a  addiu       $a1, $zero, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317538u; }
        if (ctx->pc != 0x317538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317538u; }
        if (ctx->pc != 0x317538u) { return; }
    }
    ctx->pc = 0x317538u;
label_317538:
    // 0x317538: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x317538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x31753c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317540: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x317540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x317544: 0xc0bb998  jal         func_2EE660
    ctx->pc = 0x317544u;
    SET_GPR_U32(ctx, 31, 0x31754Cu);
    ctx->pc = 0x317548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317544u;
            // 0x317548: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31754Cu; }
        if (ctx->pc != 0x31754Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31754Cu; }
        if (ctx->pc != 0x31754Cu) { return; }
    }
    ctx->pc = 0x31754Cu;
label_31754c:
    // 0x31754c: 0xc064220  jal         func_190880
    ctx->pc = 0x31754Cu;
    SET_GPR_U32(ctx, 31, 0x317554u);
    ctx->pc = 0x317550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31754Cu;
            // 0x317550: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317554u; }
        if (ctx->pc != 0x317554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317554u; }
        if (ctx->pc != 0x317554u) { return; }
    }
    ctx->pc = 0x317554u;
label_317554:
    // 0x317554: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317558: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x317558u;
    SET_GPR_U32(ctx, 31, 0x317560u);
    ctx->pc = 0x31755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317558u;
            // 0x31755c: 0x24050164  addiu       $a1, $zero, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317560u; }
        if (ctx->pc != 0x317560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317560u; }
        if (ctx->pc != 0x317560u) { return; }
    }
    ctx->pc = 0x317560u;
label_317560:
    // 0x317560: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x317560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x317564: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x317564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31756c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317570: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x317570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x317574: 0xc0bb998  jal         func_2EE660
    ctx->pc = 0x317574u;
    SET_GPR_U32(ctx, 31, 0x31757Cu);
    ctx->pc = 0x317578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317574u;
            // 0x317578: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31757Cu; }
        if (ctx->pc != 0x31757Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31757Cu; }
        if (ctx->pc != 0x31757Cu) { return; }
    }
    ctx->pc = 0x31757Cu;
label_31757c:
    // 0x31757c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x31757cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x317580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317584: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x317584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x317588: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x317588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x31758c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31758cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x317590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x317590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317594: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x317594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x317598: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x317598u;
    SET_GPR_U32(ctx, 31, 0x3175A0u);
    ctx->pc = 0x31759Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317598u;
            // 0x31759c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3175A0u; }
        if (ctx->pc != 0x3175A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3175A0u; }
        if (ctx->pc != 0x3175A0u) { return; }
    }
    ctx->pc = 0x3175A0u;
label_3175a0:
    // 0x3175a0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x3175a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3175a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3175a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3175a8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3175a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x3175ac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3175acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3175b0: 0xc0bb998  jal         func_2EE660
    ctx->pc = 0x3175B0u;
    SET_GPR_U32(ctx, 31, 0x3175B8u);
    ctx->pc = 0x3175B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3175B0u;
            // 0x3175b4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE660u;
    if (runtime->hasFunction(0x2EE660u)) {
        auto targetFn = runtime->lookupFunction(0x2EE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3175B8u; }
        if (ctx->pc != 0x3175B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLiveNPC__8CEditMapFii_0x2ee660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3175B8u; }
        if (ctx->pc != 0x3175B8u) { return; }
    }
    ctx->pc = 0x3175B8u;
label_3175b8:
    // 0x3175b8: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x3175b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x3175bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3175bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3175c0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3175c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3175c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3175c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3175c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3175c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3175cc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3175ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3175d0: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x3175d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3175d4: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x3175d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x3175d8: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x3175d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x3175dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3175dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3175e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3175e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3175e4: 0xc0aa7f4  jal         func_2A9FD0
    ctx->pc = 0x3175E4u;
    SET_GPR_U32(ctx, 31, 0x3175ECu);
    ctx->pc = 0x3175E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3175E4u;
            // 0x3175e8: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FD0u;
    if (runtime->hasFunction(0x2A9FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A9FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3175ECu; }
        if (ctx->pc != 0x3175ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analize__9CEditDataFiPiPi_0x2a9fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3175ECu; }
        if (ctx->pc != 0x3175ECu) { return; }
    }
    ctx->pc = 0x3175ECu;
label_3175ec:
    // 0x3175ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3175ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3175f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3175f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3175f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3175f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3175f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3175F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3175FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3175F8u;
            // 0x3175fc: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x317600u;
}
