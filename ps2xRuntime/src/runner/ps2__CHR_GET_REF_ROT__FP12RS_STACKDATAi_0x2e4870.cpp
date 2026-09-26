#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_GET_REF_ROT__FP12RS_STACKDATAi
// Address: 0x2e4870 - 0x2e49c0
void ps2__CHR_GET_REF_ROT__FP12RS_STACKDATAi_0x2e4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_GET_REF_ROT__FP12RS_STACKDATAi_0x2e4870");
#endif

    switch (ctx->pc) {
        case 0x2e4870u: goto label_2e4870;
        case 0x2e4874u: goto label_2e4874;
        case 0x2e4878u: goto label_2e4878;
        case 0x2e487cu: goto label_2e487c;
        case 0x2e4880u: goto label_2e4880;
        case 0x2e4884u: goto label_2e4884;
        case 0x2e4888u: goto label_2e4888;
        case 0x2e488cu: goto label_2e488c;
        case 0x2e4890u: goto label_2e4890;
        case 0x2e4894u: goto label_2e4894;
        case 0x2e4898u: goto label_2e4898;
        case 0x2e489cu: goto label_2e489c;
        case 0x2e48a0u: goto label_2e48a0;
        case 0x2e48a4u: goto label_2e48a4;
        case 0x2e48a8u: goto label_2e48a8;
        case 0x2e48acu: goto label_2e48ac;
        case 0x2e48b0u: goto label_2e48b0;
        case 0x2e48b4u: goto label_2e48b4;
        case 0x2e48b8u: goto label_2e48b8;
        case 0x2e48bcu: goto label_2e48bc;
        case 0x2e48c0u: goto label_2e48c0;
        case 0x2e48c4u: goto label_2e48c4;
        case 0x2e48c8u: goto label_2e48c8;
        case 0x2e48ccu: goto label_2e48cc;
        case 0x2e48d0u: goto label_2e48d0;
        case 0x2e48d4u: goto label_2e48d4;
        case 0x2e48d8u: goto label_2e48d8;
        case 0x2e48dcu: goto label_2e48dc;
        case 0x2e48e0u: goto label_2e48e0;
        case 0x2e48e4u: goto label_2e48e4;
        case 0x2e48e8u: goto label_2e48e8;
        case 0x2e48ecu: goto label_2e48ec;
        case 0x2e48f0u: goto label_2e48f0;
        case 0x2e48f4u: goto label_2e48f4;
        case 0x2e48f8u: goto label_2e48f8;
        case 0x2e48fcu: goto label_2e48fc;
        case 0x2e4900u: goto label_2e4900;
        case 0x2e4904u: goto label_2e4904;
        case 0x2e4908u: goto label_2e4908;
        case 0x2e490cu: goto label_2e490c;
        case 0x2e4910u: goto label_2e4910;
        case 0x2e4914u: goto label_2e4914;
        case 0x2e4918u: goto label_2e4918;
        case 0x2e491cu: goto label_2e491c;
        case 0x2e4920u: goto label_2e4920;
        case 0x2e4924u: goto label_2e4924;
        case 0x2e4928u: goto label_2e4928;
        case 0x2e492cu: goto label_2e492c;
        case 0x2e4930u: goto label_2e4930;
        case 0x2e4934u: goto label_2e4934;
        case 0x2e4938u: goto label_2e4938;
        case 0x2e493cu: goto label_2e493c;
        case 0x2e4940u: goto label_2e4940;
        case 0x2e4944u: goto label_2e4944;
        case 0x2e4948u: goto label_2e4948;
        case 0x2e494cu: goto label_2e494c;
        case 0x2e4950u: goto label_2e4950;
        case 0x2e4954u: goto label_2e4954;
        case 0x2e4958u: goto label_2e4958;
        case 0x2e495cu: goto label_2e495c;
        case 0x2e4960u: goto label_2e4960;
        case 0x2e4964u: goto label_2e4964;
        case 0x2e4968u: goto label_2e4968;
        case 0x2e496cu: goto label_2e496c;
        case 0x2e4970u: goto label_2e4970;
        case 0x2e4974u: goto label_2e4974;
        case 0x2e4978u: goto label_2e4978;
        case 0x2e497cu: goto label_2e497c;
        case 0x2e4980u: goto label_2e4980;
        case 0x2e4984u: goto label_2e4984;
        case 0x2e4988u: goto label_2e4988;
        case 0x2e498cu: goto label_2e498c;
        case 0x2e4990u: goto label_2e4990;
        case 0x2e4994u: goto label_2e4994;
        case 0x2e4998u: goto label_2e4998;
        case 0x2e499cu: goto label_2e499c;
        case 0x2e49a0u: goto label_2e49a0;
        case 0x2e49a4u: goto label_2e49a4;
        case 0x2e49a8u: goto label_2e49a8;
        case 0x2e49acu: goto label_2e49ac;
        case 0x2e49b0u: goto label_2e49b0;
        case 0x2e49b4u: goto label_2e49b4;
        case 0x2e49b8u: goto label_2e49b8;
        case 0x2e49bcu: goto label_2e49bc;
        default: break;
    }

    ctx->pc = 0x2e4870u;

label_2e4870:
    // 0x2e4870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e4870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2e4874:
    // 0x2e4874: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e4874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e4878:
    // 0x2e4878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e4878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e487c:
    // 0x2e487c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e4880:
    // 0x2e4880: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e4880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e4884:
    // 0x2e4884: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e4884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e4888:
    // 0x2e4888: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e4888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e488c:
    // 0x2e488c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e488cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e4890:
    // 0x2e4890: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_2e4894:
    if (ctx->pc == 0x2E4894u) {
        ctx->pc = 0x2E4894u;
            // 0x2e4894: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2E4898u;
        goto label_2e4898;
    }
    ctx->pc = 0x2E4890u;
    {
        const bool branch_taken_0x2e4890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4890u;
            // 0x2e4894: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4890) {
            ctx->pc = 0x2E48ACu;
            goto label_2e48ac;
        }
    }
    ctx->pc = 0x2E4898u;
label_2e4898:
    // 0x2e4898: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e4898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e489c:
    // 0x2e489c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2e48a0:
    if (ctx->pc == 0x2E48A0u) {
        ctx->pc = 0x2E48A0u;
            // 0x2e48a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E48A4u;
        goto label_2e48a4;
    }
    ctx->pc = 0x2E489Cu;
    {
        const bool branch_taken_0x2e489c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E48A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E489Cu;
            // 0x2e48a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e489c) {
            ctx->pc = 0x2E48ACu;
            goto label_2e48ac;
        }
    }
    ctx->pc = 0x2E48A4u;
label_2e48a4:
    // 0x2e48a4: 0x10000040  b           . + 4 + (0x40 << 2)
label_2e48a8:
    if (ctx->pc == 0x2E48A8u) {
        ctx->pc = 0x2E48A8u;
            // 0x2e48a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2E48ACu;
        goto label_2e48ac;
    }
    ctx->pc = 0x2E48A4u;
    {
        const bool branch_taken_0x2e48a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48A4u;
            // 0x2e48a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48a4) {
            ctx->pc = 0x2E49A8u;
            goto label_2e49a8;
        }
    }
    ctx->pc = 0x2E48ACu;
label_2e48ac:
    // 0x2e48ac: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e48acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e48b0:
    // 0x2e48b0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e48b4:
    // 0x2e48b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e48b8:
    if (ctx->pc == 0x2E48B8u) {
        ctx->pc = 0x2E48B8u;
            // 0x2e48b8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2E48BCu;
        goto label_2e48bc;
    }
    ctx->pc = 0x2E48B4u;
    {
        const bool branch_taken_0x2e48b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E48B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48B4u;
            // 0x2e48b8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48b4) {
            ctx->pc = 0x2E48C4u;
            goto label_2e48c4;
        }
    }
    ctx->pc = 0x2E48BCu;
label_2e48bc:
    // 0x2e48bc: 0x10000039  b           . + 4 + (0x39 << 2)
label_2e48c0:
    if (ctx->pc == 0x2E48C0u) {
        ctx->pc = 0x2E48C0u;
            // 0x2e48c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E48C4u;
        goto label_2e48c4;
    }
    ctx->pc = 0x2E48BCu;
    {
        const bool branch_taken_0x2e48bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48BCu;
            // 0x2e48c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48bc) {
            ctx->pc = 0x2E49A4u;
            goto label_2e49a4;
        }
    }
    ctx->pc = 0x2E48C4u;
label_2e48c4:
    // 0x2e48c4: 0xc0b8cbc  jal         func_2E32F0
label_2e48c8:
    if (ctx->pc == 0x2E48C8u) {
        ctx->pc = 0x2E48C8u;
            // 0x2e48c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E48CCu;
        goto label_2e48cc;
    }
    ctx->pc = 0x2E48C4u;
    SET_GPR_U32(ctx, 31, 0x2E48CCu);
    ctx->pc = 0x2E48C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48C4u;
            // 0x2e48c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E48CCu; }
        if (ctx->pc != 0x2E48CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E48CCu; }
        if (ctx->pc != 0x2E48CCu) { return; }
    }
    ctx->pc = 0x2E48CCu;
label_2e48cc:
    // 0x2e48cc: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e48d0:
    // 0x2e48d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2e48d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2e48d4:
    // 0x2e48d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e48d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e48d8:
    // 0x2e48d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e48d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e48dc:
    // 0x2e48dc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e48dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e48e0:
    // 0x2e48e0: 0x320f809  jalr        $t9
label_2e48e4:
    if (ctx->pc == 0x2E48E4u) {
        ctx->pc = 0x2E48E4u;
            // 0x2e48e4: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x2E48E8u;
        goto label_2e48e8;
    }
    ctx->pc = 0x2E48E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E48E8u);
        ctx->pc = 0x2E48E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48E0u;
            // 0x2e48e4: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E48E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E48E8u; }
            if (ctx->pc != 0x2E48E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E48E8u;
label_2e48e8:
    // 0x2e48e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e48ec:
    // 0x2e48ec: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e48ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2e48f0:
    // 0x2e48f0: 0xc041c3e  jal         func_1070F8
label_2e48f4:
    if (ctx->pc == 0x2E48F4u) {
        ctx->pc = 0x2E48F4u;
            // 0x2e48f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E48F8u;
        goto label_2e48f8;
    }
    ctx->pc = 0x2E48F0u;
    SET_GPR_U32(ctx, 31, 0x2E48F8u);
    ctx->pc = 0x2E48F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48F0u;
            // 0x2e48f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E48F8u; }
        if (ctx->pc != 0x2E48F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E48F8u; }
        if (ctx->pc != 0x2E48F8u) { return; }
    }
    ctx->pc = 0x2E48F8u;
label_2e48f8:
    // 0x2e48f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e48f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e48fc:
    // 0x2e48fc: 0xc041be0  jal         func_106F80
label_2e4900:
    if (ctx->pc == 0x2E4900u) {
        ctx->pc = 0x2E4900u;
            // 0x2e4900: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4904u;
        goto label_2e4904;
    }
    ctx->pc = 0x2E48FCu;
    SET_GPR_U32(ctx, 31, 0x2E4904u);
    ctx->pc = 0x2E4900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E48FCu;
            // 0x2e4900: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4904u; }
        if (ctx->pc != 0x2E4904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4904u; }
        if (ctx->pc != 0x2E4904u) { return; }
    }
    ctx->pc = 0x2E4904u;
label_2e4904:
    // 0x2e4904: 0x27b20058  addiu       $s2, $sp, 0x58
    ctx->pc = 0x2e4904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_2e4908:
    // 0x2e4908: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x2e4908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2e490c:
    // 0x2e490c: 0xc047c76  jal         func_11F1D8
label_2e4910:
    if (ctx->pc == 0x2E4910u) {
        ctx->pc = 0x2E4910u;
            // 0x2e4910: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2E4914u;
        goto label_2e4914;
    }
    ctx->pc = 0x2E490Cu;
    SET_GPR_U32(ctx, 31, 0x2E4914u);
    ctx->pc = 0x2E4910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E490Cu;
            // 0x2e4910: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4914u; }
        if (ctx->pc != 0x2E4914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4914u; }
        if (ctx->pc != 0x2E4914u) { return; }
    }
    ctx->pc = 0x2E4914u;
label_2e4914:
    // 0x2e4914: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e4914u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e4918:
    // 0x2e4918: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2e4918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e491c:
    // 0x2e491c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2e491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e4920:
    // 0x2e4920: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2e4920u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2e4924:
    // 0x2e4924: 0xc047cc0  jal         func_11F300
label_2e4928:
    if (ctx->pc == 0x2E4928u) {
        ctx->pc = 0x2E4928u;
            // 0x2e4928: 0x46010b1c  madd.s      $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->pc = 0x2E492Cu;
        goto label_2e492c;
    }
    ctx->pc = 0x2E4924u;
    SET_GPR_U32(ctx, 31, 0x2E492Cu);
    ctx->pc = 0x2E4928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4924u;
            // 0x2e4928: 0x46010b1c  madd.s      $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E492Cu; }
        if (ctx->pc != 0x2E492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E492Cu; }
        if (ctx->pc != 0x2E492Cu) { return; }
    }
    ctx->pc = 0x2E492Cu;
label_2e492c:
    // 0x2e492c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x2e492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e4930:
    // 0x2e4930: 0xc047c76  jal         func_11F1D8
label_2e4934:
    if (ctx->pc == 0x2E4934u) {
        ctx->pc = 0x2E4934u;
            // 0x2e4934: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2E4938u;
        goto label_2e4938;
    }
    ctx->pc = 0x2E4930u;
    SET_GPR_U32(ctx, 31, 0x2E4938u);
    ctx->pc = 0x2E4934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4930u;
            // 0x2e4934: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4938u; }
        if (ctx->pc != 0x2E4938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4938u; }
        if (ctx->pc != 0x2E4938u) { return; }
    }
    ctx->pc = 0x2E4938u;
label_2e4938:
    // 0x2e4938: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e4938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e493c:
    // 0x2e493c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_2e4940:
    if (ctx->pc == 0x2E4940u) {
        ctx->pc = 0x2E4940u;
            // 0x2e4940: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x2E4944u;
        goto label_2e4944;
    }
    ctx->pc = 0x2E493Cu;
    {
        const bool branch_taken_0x2e493c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E493Cu;
            // 0x2e4940: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e493c) {
            ctx->pc = 0x2E4968u;
            goto label_2e4968;
        }
    }
    ctx->pc = 0x2E4944u;
label_2e4944:
    // 0x2e4944: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e4944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e4948:
    // 0x2e4948: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2e494c:
    if (ctx->pc == 0x2E494Cu) {
        ctx->pc = 0x2E494Cu;
            // 0x2e494c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4950u;
        goto label_2e4950;
    }
    ctx->pc = 0x2E4948u;
    {
        const bool branch_taken_0x2e4948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4948u;
            // 0x2e494c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4948) {
            ctx->pc = 0x2E4958u;
            goto label_2e4958;
        }
    }
    ctx->pc = 0x2E4950u;
label_2e4950:
    // 0x2e4950: 0x10000011  b           . + 4 + (0x11 << 2)
label_2e4954:
    if (ctx->pc == 0x2E4954u) {
        ctx->pc = 0x2E4954u;
            // 0x2e4954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4958u;
        goto label_2e4958;
    }
    ctx->pc = 0x2E4950u;
    {
        const bool branch_taken_0x2e4950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4950u;
            // 0x2e4954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4950) {
            ctx->pc = 0x2E4998u;
            goto label_2e4998;
        }
    }
    ctx->pc = 0x2E4958u;
label_2e4958:
    // 0x2e4958: 0xc0b8cdc  jal         func_2E3370
label_2e495c:
    if (ctx->pc == 0x2E495Cu) {
        ctx->pc = 0x2E495Cu;
            // 0x2e495c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2E4960u;
        goto label_2e4960;
    }
    ctx->pc = 0x2E4958u;
    SET_GPR_U32(ctx, 31, 0x2E4960u);
    ctx->pc = 0x2E495Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4958u;
            // 0x2e495c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4960u; }
        if (ctx->pc != 0x2E4960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4960u; }
        if (ctx->pc != 0x2E4960u) { return; }
    }
    ctx->pc = 0x2E4960u;
label_2e4960:
    // 0x2e4960: 0x10000010  b           . + 4 + (0x10 << 2)
label_2e4964:
    if (ctx->pc == 0x2E4964u) {
        ctx->pc = 0x2E4964u;
            // 0x2e4964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E4968u;
        goto label_2e4968;
    }
    ctx->pc = 0x2E4960u;
    {
        const bool branch_taken_0x2e4960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4960u;
            // 0x2e4964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4960) {
            ctx->pc = 0x2E49A4u;
            goto label_2e49a4;
        }
    }
    ctx->pc = 0x2E4968u;
label_2e4968:
    // 0x2e4968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e4968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e496c:
    // 0x2e496c: 0xc0b8cdc  jal         func_2E3370
label_2e4970:
    if (ctx->pc == 0x2E4970u) {
        ctx->pc = 0x2E4970u;
            // 0x2e4970: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4974u;
        goto label_2e4974;
    }
    ctx->pc = 0x2E496Cu;
    SET_GPR_U32(ctx, 31, 0x2E4974u);
    ctx->pc = 0x2E4970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E496Cu;
            // 0x2e4970: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4974u; }
        if (ctx->pc != 0x2E4974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4974u; }
        if (ctx->pc != 0x2E4974u) { return; }
    }
    ctx->pc = 0x2E4974u;
label_2e4974:
    // 0x2e4974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e4974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e4978:
    // 0x2e4978: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e4978u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2e497c:
    // 0x2e497c: 0xc0b8cdc  jal         func_2E3370
label_2e4980:
    if (ctx->pc == 0x2E4980u) {
        ctx->pc = 0x2E4980u;
            // 0x2e4980: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4984u;
        goto label_2e4984;
    }
    ctx->pc = 0x2E497Cu;
    SET_GPR_U32(ctx, 31, 0x2E4984u);
    ctx->pc = 0x2E4980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E497Cu;
            // 0x2e4980: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4984u; }
        if (ctx->pc != 0x2E4984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4984u; }
        if (ctx->pc != 0x2E4984u) { return; }
    }
    ctx->pc = 0x2E4984u;
label_2e4984:
    // 0x2e4984: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e4984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e4988:
    // 0x2e4988: 0xc0b8cdc  jal         func_2E3370
label_2e498c:
    if (ctx->pc == 0x2E498Cu) {
        ctx->pc = 0x2E498Cu;
            // 0x2e498c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4990u;
        goto label_2e4990;
    }
    ctx->pc = 0x2E4988u;
    SET_GPR_U32(ctx, 31, 0x2E4990u);
    ctx->pc = 0x2E498Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4988u;
            // 0x2e498c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4990u; }
        if (ctx->pc != 0x2E4990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4990u; }
        if (ctx->pc != 0x2E4990u) { return; }
    }
    ctx->pc = 0x2E4990u;
label_2e4990:
    // 0x2e4990: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e4994:
    if (ctx->pc == 0x2E4994u) {
        ctx->pc = 0x2E4998u;
        goto label_2e4998;
    }
    ctx->pc = 0x2E4990u;
    {
        const bool branch_taken_0x2e4990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4990) {
            ctx->pc = 0x2E49A0u;
            goto label_2e49a0;
        }
    }
    ctx->pc = 0x2E4998u;
label_2e4998:
    // 0x2e4998: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e499c:
    if (ctx->pc == 0x2E499Cu) {
        ctx->pc = 0x2E49A0u;
        goto label_2e49a0;
    }
    ctx->pc = 0x2E4998u;
    {
        const bool branch_taken_0x2e4998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4998) {
            ctx->pc = 0x2E49A4u;
            goto label_2e49a4;
        }
    }
    ctx->pc = 0x2E49A0u;
label_2e49a0:
    // 0x2e49a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e49a4:
    // 0x2e49a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e49a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e49a8:
    // 0x2e49a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e49a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e49ac:
    // 0x2e49ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e49acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e49b0:
    // 0x2e49b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e49b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e49b4:
    // 0x2e49b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e49b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e49b8:
    // 0x2e49b8: 0x3e00008  jr          $ra
label_2e49bc:
    if (ctx->pc == 0x2E49BCu) {
        ctx->pc = 0x2E49BCu;
            // 0x2e49bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2E49C0u;
        goto label_fallthrough_0x2e49b8;
    }
    ctx->pc = 0x2E49B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E49BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E49B8u;
            // 0x2e49bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e49b8:
    ctx->pc = 0x2E49C0u;
}
