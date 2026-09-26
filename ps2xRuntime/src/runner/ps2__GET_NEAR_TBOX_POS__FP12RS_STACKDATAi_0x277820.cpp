#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_NEAR_TBOX_POS__FP12RS_STACKDATAi
// Address: 0x277820 - 0x2779bc
void ps2__GET_NEAR_TBOX_POS__FP12RS_STACKDATAi_0x277820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_NEAR_TBOX_POS__FP12RS_STACKDATAi_0x277820");
#endif

    switch (ctx->pc) {
        case 0x277820u: goto label_277820;
        case 0x277824u: goto label_277824;
        case 0x277828u: goto label_277828;
        case 0x27782cu: goto label_27782c;
        case 0x277830u: goto label_277830;
        case 0x277834u: goto label_277834;
        case 0x277838u: goto label_277838;
        case 0x27783cu: goto label_27783c;
        case 0x277840u: goto label_277840;
        case 0x277844u: goto label_277844;
        case 0x277848u: goto label_277848;
        case 0x27784cu: goto label_27784c;
        case 0x277850u: goto label_277850;
        case 0x277854u: goto label_277854;
        case 0x277858u: goto label_277858;
        case 0x27785cu: goto label_27785c;
        case 0x277860u: goto label_277860;
        case 0x277864u: goto label_277864;
        case 0x277868u: goto label_277868;
        case 0x27786cu: goto label_27786c;
        case 0x277870u: goto label_277870;
        case 0x277874u: goto label_277874;
        case 0x277878u: goto label_277878;
        case 0x27787cu: goto label_27787c;
        case 0x277880u: goto label_277880;
        case 0x277884u: goto label_277884;
        case 0x277888u: goto label_277888;
        case 0x27788cu: goto label_27788c;
        case 0x277890u: goto label_277890;
        case 0x277894u: goto label_277894;
        case 0x277898u: goto label_277898;
        case 0x27789cu: goto label_27789c;
        case 0x2778a0u: goto label_2778a0;
        case 0x2778a4u: goto label_2778a4;
        case 0x2778a8u: goto label_2778a8;
        case 0x2778acu: goto label_2778ac;
        case 0x2778b0u: goto label_2778b0;
        case 0x2778b4u: goto label_2778b4;
        case 0x2778b8u: goto label_2778b8;
        case 0x2778bcu: goto label_2778bc;
        case 0x2778c0u: goto label_2778c0;
        case 0x2778c4u: goto label_2778c4;
        case 0x2778c8u: goto label_2778c8;
        case 0x2778ccu: goto label_2778cc;
        case 0x2778d0u: goto label_2778d0;
        case 0x2778d4u: goto label_2778d4;
        case 0x2778d8u: goto label_2778d8;
        case 0x2778dcu: goto label_2778dc;
        case 0x2778e0u: goto label_2778e0;
        case 0x2778e4u: goto label_2778e4;
        case 0x2778e8u: goto label_2778e8;
        case 0x2778ecu: goto label_2778ec;
        case 0x2778f0u: goto label_2778f0;
        case 0x2778f4u: goto label_2778f4;
        case 0x2778f8u: goto label_2778f8;
        case 0x2778fcu: goto label_2778fc;
        case 0x277900u: goto label_277900;
        case 0x277904u: goto label_277904;
        case 0x277908u: goto label_277908;
        case 0x27790cu: goto label_27790c;
        case 0x277910u: goto label_277910;
        case 0x277914u: goto label_277914;
        case 0x277918u: goto label_277918;
        case 0x27791cu: goto label_27791c;
        case 0x277920u: goto label_277920;
        case 0x277924u: goto label_277924;
        case 0x277928u: goto label_277928;
        case 0x27792cu: goto label_27792c;
        case 0x277930u: goto label_277930;
        case 0x277934u: goto label_277934;
        case 0x277938u: goto label_277938;
        case 0x27793cu: goto label_27793c;
        case 0x277940u: goto label_277940;
        case 0x277944u: goto label_277944;
        case 0x277948u: goto label_277948;
        case 0x27794cu: goto label_27794c;
        case 0x277950u: goto label_277950;
        case 0x277954u: goto label_277954;
        case 0x277958u: goto label_277958;
        case 0x27795cu: goto label_27795c;
        case 0x277960u: goto label_277960;
        case 0x277964u: goto label_277964;
        case 0x277968u: goto label_277968;
        case 0x27796cu: goto label_27796c;
        case 0x277970u: goto label_277970;
        case 0x277974u: goto label_277974;
        case 0x277978u: goto label_277978;
        case 0x27797cu: goto label_27797c;
        case 0x277980u: goto label_277980;
        case 0x277984u: goto label_277984;
        case 0x277988u: goto label_277988;
        case 0x27798cu: goto label_27798c;
        case 0x277990u: goto label_277990;
        case 0x277994u: goto label_277994;
        case 0x277998u: goto label_277998;
        case 0x27799cu: goto label_27799c;
        case 0x2779a0u: goto label_2779a0;
        case 0x2779a4u: goto label_2779a4;
        case 0x2779a8u: goto label_2779a8;
        case 0x2779acu: goto label_2779ac;
        case 0x2779b0u: goto label_2779b0;
        case 0x2779b4u: goto label_2779b4;
        case 0x2779b8u: goto label_2779b8;
        default: break;
    }

    ctx->pc = 0x277820u;

label_277820:
    // 0x277820: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x277820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_277824:
    // 0x277824: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x277824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_277828:
    // 0x277828: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x277828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27782c:
    // 0x27782c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_277830:
    // 0x277830: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x277830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_277834:
    // 0x277834: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x277834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_277838:
    // 0x277838: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x277838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_27783c:
    // 0x27783c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27783cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_277840:
    // 0x277840: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x277840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_277844:
    // 0x277844: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x277844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_277848:
    // 0x277848: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27784c:
    if (ctx->pc == 0x27784Cu) {
        ctx->pc = 0x27784Cu;
            // 0x27784c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277850u;
        goto label_277850;
    }
    ctx->pc = 0x277848u;
    {
        const bool branch_taken_0x277848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27784Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277848u;
            // 0x27784c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277848) {
            ctx->pc = 0x277858u;
            goto label_277858;
        }
    }
    ctx->pc = 0x277850u;
label_277850:
    // 0x277850: 0x10000051  b           . + 4 + (0x51 << 2)
label_277854:
    if (ctx->pc == 0x277854u) {
        ctx->pc = 0x277854u;
            // 0x277854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277858u;
        goto label_277858;
    }
    ctx->pc = 0x277850u;
    {
        const bool branch_taken_0x277850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277850u;
            // 0x277854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277850) {
            ctx->pc = 0x277998u;
            goto label_277998;
        }
    }
    ctx->pc = 0x277858u;
label_277858:
    // 0x277858: 0x8c53007c  lw          $s3, 0x7C($v0)
    ctx->pc = 0x277858u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_27785c:
    // 0x27785c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_277860:
    if (ctx->pc == 0x277860u) {
        ctx->pc = 0x277860u;
            // 0x277860: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x277864u;
        goto label_277864;
    }
    ctx->pc = 0x27785Cu;
    {
        const bool branch_taken_0x27785c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x277860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27785Cu;
            // 0x277860: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27785c) {
            ctx->pc = 0x27786Cu;
            goto label_27786c;
        }
    }
    ctx->pc = 0x277864u;
label_277864:
    // 0x277864: 0x1000004c  b           . + 4 + (0x4C << 2)
label_277868:
    if (ctx->pc == 0x277868u) {
        ctx->pc = 0x277868u;
            // 0x277868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27786Cu;
        goto label_27786c;
    }
    ctx->pc = 0x277864u;
    {
        const bool branch_taken_0x277864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277864u;
            // 0x277868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277864) {
            ctx->pc = 0x277998u;
            goto label_277998;
        }
    }
    ctx->pc = 0x27786Cu;
label_27786c:
    // 0x27786c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27786cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277870:
    // 0x277870: 0xc097e34  jal         func_25F8D0
label_277874:
    if (ctx->pc == 0x277874u) {
        ctx->pc = 0x277874u;
            // 0x277874: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x277878u;
        goto label_277878;
    }
    ctx->pc = 0x277870u;
    SET_GPR_U32(ctx, 31, 0x277878u);
    ctx->pc = 0x277874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277870u;
            // 0x277874: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277878u; }
        if (ctx->pc != 0x277878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277878u; }
        if (ctx->pc != 0x277878u) { return; }
    }
    ctx->pc = 0x277878u;
label_277878:
    // 0x277878: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x277878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_27787c:
    // 0x27787c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x27787cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_277880:
    // 0x277880: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x277880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_277884:
    // 0x277884: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x277884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277888:
    // 0x277888: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x277888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27788c:
    // 0x27788c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27788cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277890:
    // 0x277890: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x277890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_277894:
    // 0x277894: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x277894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_277898:
    // 0x277898: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_27789c:
    if (ctx->pc == 0x27789Cu) {
        ctx->pc = 0x2778A0u;
        goto label_2778a0;
    }
    ctx->pc = 0x277898u;
    {
        const bool branch_taken_0x277898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x277898) {
            ctx->pc = 0x277908u;
            goto label_277908;
        }
    }
    ctx->pc = 0x2778A0u;
label_2778a0:
    // 0x2778a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2778a4:
    if (ctx->pc == 0x2778A4u) {
        ctx->pc = 0x2778A8u;
        goto label_2778a8;
    }
    ctx->pc = 0x2778A0u;
    {
        const bool branch_taken_0x2778a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2778a0) {
            ctx->pc = 0x2778B4u;
            goto label_2778b4;
        }
    }
    ctx->pc = 0x2778A8u;
label_2778a8:
    // 0x2778a8: 0x80820054  lb          $v0, 0x54($a0)
    ctx->pc = 0x2778a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
label_2778ac:
    // 0x2778ac: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2778b0:
    if (ctx->pc == 0x2778B0u) {
        ctx->pc = 0x2778B4u;
        goto label_2778b4;
    }
    ctx->pc = 0x2778ACu;
    {
        const bool branch_taken_0x2778ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2778ac) {
            ctx->pc = 0x277908u;
            goto label_277908;
        }
    }
    ctx->pc = 0x2778B4u;
label_2778b4:
    // 0x2778b4: 0x0  nop
    ctx->pc = 0x2778b4u;
    // NOP
label_2778b8:
    // 0x2778b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2778b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2778bc:
    // 0x2778bc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2778bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2778c0:
    // 0x2778c0: 0x320f809  jalr        $t9
label_2778c4:
    if (ctx->pc == 0x2778C4u) {
        ctx->pc = 0x2778C4u;
            // 0x2778c4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2778C8u;
        goto label_2778c8;
    }
    ctx->pc = 0x2778C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2778C8u);
        ctx->pc = 0x2778C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2778C0u;
            // 0x2778c4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2778C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2778C8u; }
            if (ctx->pc != 0x2778C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2778C8u;
label_2778c8:
    // 0x2778c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2778c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2778cc:
    // 0x2778cc: 0xc04c018  jal         func_130060
label_2778d0:
    if (ctx->pc == 0x2778D0u) {
        ctx->pc = 0x2778D0u;
            // 0x2778d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2778D4u;
        goto label_2778d4;
    }
    ctx->pc = 0x2778CCu;
    SET_GPR_U32(ctx, 31, 0x2778D4u);
    ctx->pc = 0x2778D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2778CCu;
            // 0x2778d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2778D4u; }
        if (ctx->pc != 0x2778D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2778D4u; }
        if (ctx->pc != 0x2778D4u) { return; }
    }
    ctx->pc = 0x2778D4u;
label_2778d4:
    // 0x2778d4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2778d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2778d8:
    // 0x2778d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2778d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2778dc:
    // 0x2778dc: 0x0  nop
    ctx->pc = 0x2778dcu;
    // NOP
label_2778e0:
    // 0x2778e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2778e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2778e4:
    // 0x2778e4: 0x0  nop
    ctx->pc = 0x2778e4u;
    // NOP
label_2778e8:
    // 0x2778e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2778ec:
    if (ctx->pc == 0x2778ECu) {
        ctx->pc = 0x2778F0u;
        goto label_2778f0;
    }
    ctx->pc = 0x2778E8u;
    {
        const bool branch_taken_0x2778e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2778e8) {
            ctx->pc = 0x277908u;
            goto label_277908;
        }
    }
    ctx->pc = 0x2778F0u;
label_2778f0:
    // 0x2778f0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2778f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2778f4:
    // 0x2778f4: 0x0  nop
    ctx->pc = 0x2778f4u;
    // NOP
label_2778f8:
    // 0x2778f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2778fc:
    if (ctx->pc == 0x2778FCu) {
        ctx->pc = 0x277900u;
        goto label_277900;
    }
    ctx->pc = 0x2778F8u;
    {
        const bool branch_taken_0x2778f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2778f8) {
            ctx->pc = 0x277908u;
            goto label_277908;
        }
    }
    ctx->pc = 0x277900u;
label_277900:
    // 0x277900: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x277900u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_277904:
    // 0x277904: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x277904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_277908:
    // 0x277908: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x277908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27790c:
    // 0x27790c: 0x2a420018  slti        $v0, $s2, 0x18
    ctx->pc = 0x27790cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)24) ? 1 : 0);
label_277910:
    // 0x277910: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_277914:
    if (ctx->pc == 0x277914u) {
        ctx->pc = 0x277914u;
            // 0x277914: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x277918u;
        goto label_277918;
    }
    ctx->pc = 0x277910u;
    {
        const bool branch_taken_0x277910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277910u;
            // 0x277914: 0x26940070  addiu       $s4, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277910) {
            ctx->pc = 0x277890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_277890;
        }
    }
    ctx->pc = 0x277918u;
label_277918:
    // 0x277918: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x277918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_27791c:
    // 0x27791c: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x27791cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_277920:
    // 0x277920: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x277920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_277924:
    // 0x277924: 0x27b40088  addiu       $s4, $sp, 0x88
    ctx->pc = 0x277924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_277928:
    // 0x277928: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x277928u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_27792c:
    // 0x27792c: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
label_277930:
    if (ctx->pc == 0x277930u) {
        ctx->pc = 0x277930u;
            // 0x277930: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x277934u;
        goto label_277934;
    }
    ctx->pc = 0x27792Cu;
    {
        const bool branch_taken_0x27792c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x277930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27792Cu;
            // 0x277930: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27792c) {
            ctx->pc = 0x277958u;
            goto label_277958;
        }
    }
    ctx->pc = 0x277934u;
label_277934:
    // 0x277934: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x277934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_277938:
    // 0x277938: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x277938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_27793c:
    // 0x27793c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x27793cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_277940:
    // 0x277940: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x277940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_277944:
    // 0x277944: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x277944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_277948:
    // 0x277948: 0x8c590010  lw          $t9, 0x10($v0)
    ctx->pc = 0x277948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_27794c:
    // 0x27794c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x27794cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_277950:
    // 0x277950: 0x320f809  jalr        $t9
label_277954:
    if (ctx->pc == 0x277954u) {
        ctx->pc = 0x277954u;
            // 0x277954: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x277958u;
        goto label_277958;
    }
    ctx->pc = 0x277950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277958u);
        ctx->pc = 0x277954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277950u;
            // 0x277954: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x277958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x277958u; }
            if (ctx->pc != 0x277958u) { return; }
        }
        }
    }
    ctx->pc = 0x277958u;
label_277958:
    // 0x277958: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x277958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27795c:
    // 0x27795c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27795cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277960:
    // 0x277960: 0xc097e54  jal         func_25F950
label_277964:
    if (ctx->pc == 0x277964u) {
        ctx->pc = 0x277964u;
            // 0x277964: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x277968u;
        goto label_277968;
    }
    ctx->pc = 0x277960u;
    SET_GPR_U32(ctx, 31, 0x277968u);
    ctx->pc = 0x277964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277960u;
            // 0x277964: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277968u; }
        if (ctx->pc != 0x277968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277968u; }
        if (ctx->pc != 0x277968u) { return; }
    }
    ctx->pc = 0x277968u;
label_277968:
    // 0x277968: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x277968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27796c:
    // 0x27796c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27796cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277970:
    // 0x277970: 0xc097e54  jal         func_25F950
label_277974:
    if (ctx->pc == 0x277974u) {
        ctx->pc = 0x277974u;
            // 0x277974: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x277978u;
        goto label_277978;
    }
    ctx->pc = 0x277970u;
    SET_GPR_U32(ctx, 31, 0x277978u);
    ctx->pc = 0x277974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277970u;
            // 0x277974: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277978u; }
        if (ctx->pc != 0x277978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277978u; }
        if (ctx->pc != 0x277978u) { return; }
    }
    ctx->pc = 0x277978u;
label_277978:
    // 0x277978: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x277978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27797c:
    // 0x27797c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27797cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277980:
    // 0x277980: 0xc097e54  jal         func_25F950
label_277984:
    if (ctx->pc == 0x277984u) {
        ctx->pc = 0x277984u;
            // 0x277984: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x277988u;
        goto label_277988;
    }
    ctx->pc = 0x277980u;
    SET_GPR_U32(ctx, 31, 0x277988u);
    ctx->pc = 0x277984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277980u;
            // 0x277984: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277988u; }
        if (ctx->pc != 0x277988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277988u; }
        if (ctx->pc != 0x277988u) { return; }
    }
    ctx->pc = 0x277988u;
label_277988:
    // 0x277988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27798c:
    // 0x27798c: 0xc097e4c  jal         func_25F930
label_277990:
    if (ctx->pc == 0x277990u) {
        ctx->pc = 0x277990u;
            // 0x277990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x277994u;
        goto label_277994;
    }
    ctx->pc = 0x27798Cu;
    SET_GPR_U32(ctx, 31, 0x277994u);
    ctx->pc = 0x277990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27798Cu;
            // 0x277990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277994u; }
        if (ctx->pc != 0x277994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277994u; }
        if (ctx->pc != 0x277994u) { return; }
    }
    ctx->pc = 0x277994u;
label_277994:
    // 0x277994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277998:
    // 0x277998: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x277998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_27799c:
    // 0x27799c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2779a0:
    // 0x2779a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2779a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2779a4:
    // 0x2779a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2779a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2779a8:
    // 0x2779a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2779a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2779ac:
    // 0x2779ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2779acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2779b0:
    // 0x2779b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2779b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2779b4:
    // 0x2779b4: 0x3e00008  jr          $ra
label_2779b8:
    if (ctx->pc == 0x2779B8u) {
        ctx->pc = 0x2779B8u;
            // 0x2779b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2779BCu;
        goto label_fallthrough_0x2779b4;
    }
    ctx->pc = 0x2779B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2779B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2779B4u;
            // 0x2779b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2779b4:
    ctx->pc = 0x2779BCu;
}
