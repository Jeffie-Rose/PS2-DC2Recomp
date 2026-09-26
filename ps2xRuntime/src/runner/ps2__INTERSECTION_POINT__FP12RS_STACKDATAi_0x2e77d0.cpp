#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _INTERSECTION_POINT__FP12RS_STACKDATAi
// Address: 0x2e77d0 - 0x2e7b68
void ps2__INTERSECTION_POINT__FP12RS_STACKDATAi_0x2e77d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__INTERSECTION_POINT__FP12RS_STACKDATAi_0x2e77d0");
#endif

    switch (ctx->pc) {
        case 0x2e785cu: goto label_2e785c;
        case 0x2e786cu: goto label_2e786c;
        case 0x2e7878u: goto label_2e7878;
        case 0x2e7888u: goto label_2e7888;
        case 0x2e78f0u: goto label_2e78f0;
        case 0x2e790cu: goto label_2e790c;
        case 0x2e7934u: goto label_2e7934;
        case 0x2e795cu: goto label_2e795c;
        case 0x2e7970u: goto label_2e7970;
        case 0x2e797cu: goto label_2e797c;
        case 0x2e7994u: goto label_2e7994;
        case 0x2e79dcu: goto label_2e79dc;
        case 0x2e79f8u: goto label_2e79f8;
        case 0x2e7a10u: goto label_2e7a10;
        case 0x2e7a28u: goto label_2e7a28;
        case 0x2e7a38u: goto label_2e7a38;
        case 0x2e7a48u: goto label_2e7a48;
        case 0x2e7a58u: goto label_2e7a58;
        case 0x2e7a74u: goto label_2e7a74;
        case 0x2e7a88u: goto label_2e7a88;
        case 0x2e7aa0u: goto label_2e7aa0;
        case 0x2e7ab0u: goto label_2e7ab0;
        case 0x2e7ac0u: goto label_2e7ac0;
        case 0x2e7ad0u: goto label_2e7ad0;
        case 0x2e7ae0u: goto label_2e7ae0;
        case 0x2e7af0u: goto label_2e7af0;
        case 0x2e7b00u: goto label_2e7b00;
        case 0x2e7b1cu: goto label_2e7b1c;
        case 0x2e7b30u: goto label_2e7b30;
        default: break;
    }

    ctx->pc = 0x2e77d0u;

    // 0x2e77d0: 0x27bdd720  addiu       $sp, $sp, -0x28E0
    ctx->pc = 0x2e77d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956832));
    // 0x2e77d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e77d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e77d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e77dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e77dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e77e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e77e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e77e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e77e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e77e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e77e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e77ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e77f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e77f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e77f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e77f8: 0x12620015  beq         $s3, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E77F8u;
    {
        const bool branch_taken_0x2e77f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E77FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E77F8u;
            // 0x2e77fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77f8) {
            ctx->pc = 0x2E7850u;
            goto label_2e7850;
        }
    }
    ctx->pc = 0x2E7800u;
    // 0x2e7800: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e7800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e7804: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E7804u;
    {
        const bool branch_taken_0x2e7804 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7804u;
            // 0x2e7808: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7804) {
            ctx->pc = 0x2E7854u;
            goto label_2e7854;
        }
    }
    ctx->pc = 0x2E780Cu;
    // 0x2e780c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e7810: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E7810u;
    {
        const bool branch_taken_0x2e7810 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7810u;
            // 0x2e7814: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7810) {
            ctx->pc = 0x2E7850u;
            goto label_2e7850;
        }
    }
    ctx->pc = 0x2E7818u;
    // 0x2e7818: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E7818u;
    {
        const bool branch_taken_0x2e7818 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7818u;
            // 0x2e781c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7818) {
            ctx->pc = 0x2E7850u;
            goto label_2e7850;
        }
    }
    ctx->pc = 0x2E7820u;
    // 0x2e7820: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7820u;
    {
        const bool branch_taken_0x2e7820 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7820u;
            // 0x2e7824: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7820) {
            ctx->pc = 0x2E7850u;
            goto label_2e7850;
        }
    }
    ctx->pc = 0x2E7828u;
    // 0x2e7828: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7828u;
    {
        const bool branch_taken_0x2e7828 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E782Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7828u;
            // 0x2e782c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7828) {
            ctx->pc = 0x2E7850u;
            goto label_2e7850;
        }
    }
    ctx->pc = 0x2E7830u;
    // 0x2e7830: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7830u;
    {
        const bool branch_taken_0x2e7830 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7830u;
            // 0x2e7834: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7830) {
            ctx->pc = 0x2E7850u;
            goto label_2e7850;
        }
    }
    ctx->pc = 0x2E7838u;
    // 0x2e7838: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7838u;
    {
        const bool branch_taken_0x2e7838 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7838u;
            // 0x2e783c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7838) {
            ctx->pc = 0x2E7850u;
            goto label_2e7850;
        }
    }
    ctx->pc = 0x2E7840u;
    // 0x2e7840: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7840u;
    {
        const bool branch_taken_0x2e7840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E7844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7840u;
            // 0x2e7844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7840) {
            ctx->pc = 0x2E7850u;
            goto label_2e7850;
        }
    }
    ctx->pc = 0x2E7848u;
    // 0x2e7848: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2E7848u;
    {
        const bool branch_taken_0x2e7848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E784Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7848u;
            // 0x2e784c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7848) {
            ctx->pc = 0x2E7B48u;
            goto label_2e7b48;
        }
    }
    ctx->pc = 0x2E7850u;
label_2e7850:
    // 0x2e7850: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e7854:
    // 0x2e7854: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7854u;
    SET_GPR_U32(ctx, 31, 0x2E785Cu);
    ctx->pc = 0x2E7858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7854u;
            // 0x2e7858: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E785Cu; }
        if (ctx->pc != 0x2E785Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E785Cu; }
        if (ctx->pc != 0x2E785Cu) { return; }
    }
    ctx->pc = 0x2E785Cu;
label_2e785c:
    // 0x2e785c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e785cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7860: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e7860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e7864: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E7864u;
    SET_GPR_U32(ctx, 31, 0x2E786Cu);
    ctx->pc = 0x2E7868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7864u;
            // 0x2e7868: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E786Cu; }
        if (ctx->pc != 0x2E786Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E786Cu; }
        if (ctx->pc != 0x2E786Cu) { return; }
    }
    ctx->pc = 0x2E786Cu;
label_2e786c:
    // 0x2e786c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e7870: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E7870u;
    SET_GPR_U32(ctx, 31, 0x2E7878u);
    ctx->pc = 0x2E7874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7870u;
            // 0x2e7874: 0x26850018  addiu       $a1, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7878u; }
        if (ctx->pc != 0x2E7878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7878u; }
        if (ctx->pc != 0x2E7878u) { return; }
    }
    ctx->pc = 0x2E7878u;
label_2e7878:
    // 0x2e7878: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e7878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e787c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2e787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e7880: 0xc04c018  jal         func_130060
    ctx->pc = 0x2E7880u;
    SET_GPR_U32(ctx, 31, 0x2E7888u);
    ctx->pc = 0x2E7884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7880u;
            // 0x2e7884: 0x26940030  addiu       $s4, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7888u; }
        if (ctx->pc != 0x2E7888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7888u; }
        if (ctx->pc != 0x2E7888u) { return; }
    }
    ctx->pc = 0x2E7888u;
label_2e7888:
    // 0x2e7888: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e7888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e788c: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e788cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e7890: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7894: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2e7894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e7898: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2e7898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e789c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2e789cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e78a0: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x2e78a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e78a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e78a8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2e78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2e78ac: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2e78acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e78b0: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2e78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x2e78b4: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x2e78b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e78b8: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x2e78b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2e78bc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e78bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e78c0: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x2e78c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2e78c4: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2e78c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e78c8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2e78c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e78cc: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x2e78ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2e78d0: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x2e78d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2e78d4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2e78d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2e78d8: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x2e78d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2e78dc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e78dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e78e0: 0x46022801  sub.s       $f0, $f5, $f2
    ctx->pc = 0x2e78e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x2e78e4: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e78e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e78e8: 0xc0b1ed4  jal         func_2C7B50
    ctx->pc = 0x2E78E8u;
    SET_GPR_U32(ctx, 31, 0x2E78F0u);
    ctx->pc = 0x2E78ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E78E8u;
            // 0x2e78ec: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E78F0u; }
        if (ctx->pc != 0x2E78F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E78F0u; }
        if (ctx->pc != 0x2E78F0u) { return; }
    }
    ctx->pc = 0x2E78F0u;
label_2e78f0:
    // 0x2e78f0: 0x28430080  slti        $v1, $v0, 0x80
    ctx->pc = 0x2e78f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e78f4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E78F4u;
    {
        const bool branch_taken_0x2e78f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E78F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E78F4u;
            // 0x2e78f8: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78f4) {
            ctx->pc = 0x2E7914u;
            goto label_2e7914;
        }
    }
    ctx->pc = 0x2E78FCu;
    // 0x2e78fc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e78fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2e7900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7904: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2E7904u;
    SET_GPR_U32(ctx, 31, 0x2E790Cu);
    ctx->pc = 0x2E7908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7904u;
            // 0x2e7908: 0x24841320  addiu       $a0, $a0, 0x1320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E790Cu; }
        if (ctx->pc != 0x2E790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E790Cu; }
        if (ctx->pc != 0x2E790Cu) { return; }
    }
    ctx->pc = 0x2E790Cu;
label_2e790c:
    // 0x2e790c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2E790Cu;
    {
        const bool branch_taken_0x2e790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E790Cu;
            // 0x2e7910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e790c) {
            ctx->pc = 0x2E7B44u;
            goto label_2e7b44;
        }
    }
    ctx->pc = 0x2E7914u;
label_2e7914:
    // 0x2e7914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7918: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2e7918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e791c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e791cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e7920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7924: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x2e7924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e7928: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x2e7928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e792c: 0xc053794  jal         func_14DE50
    ctx->pc = 0x2E792Cu;
    SET_GPR_U32(ctx, 31, 0x2E7934u);
    ctx->pc = 0x2E7930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E792Cu;
            // 0x2e7930: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7934u; }
        if (ctx->pc != 0x2E7934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7934u; }
        if (ctx->pc != 0x2E7934u) { return; }
    }
    ctx->pc = 0x2E7934u;
label_2e7934:
    // 0x2e7934: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e7934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7938: 0x620001b  bltz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E7938u;
    {
        const bool branch_taken_0x2e7938 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2E793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7938u;
            // 0x2e793c: 0x2262fff8  addi        $v0, $s3, -0x8 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 19), (int32_t)4294967288, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7938) {
            ctx->pc = 0x2E79A8u;
            goto label_2e79a8;
        }
    }
    ctx->pc = 0x2E7940u;
    // 0x2e7940: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2e7940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e7944: 0x27a428d0  addiu       $a0, $sp, 0x28D0
    ctx->pc = 0x2e7944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
    // 0x2e7948: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e7948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e794c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e794cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e7950: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2e7950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e7954: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2E7954u;
    SET_GPR_U32(ctx, 31, 0x2E795Cu);
    ctx->pc = 0x2E7958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7954u;
            // 0x2e7958: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E795Cu; }
        if (ctx->pc != 0x2E795Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E795Cu; }
        if (ctx->pc != 0x2E795Cu) { return; }
    }
    ctx->pc = 0x2E795Cu;
label_2e795c:
    // 0x2e795c: 0x27a428d0  addiu       $a0, $sp, 0x28D0
    ctx->pc = 0x2e795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10448));
    // 0x2e7960: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2e7960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e7964: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e7964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e7968: 0xc04bdd8  jal         func_12F760
    ctx->pc = 0x2E7968u;
    SET_GPR_U32(ctx, 31, 0x2E7970u);
    ctx->pc = 0x2E796Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7968u;
            // 0x2e796c: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F760u;
    if (runtime->hasFunction(0x12F760u)) {
        auto targetFn = runtime->lookupFunction(0x12F760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7970u; }
        if (ctx->pc != 0x2E7970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgReflectionPlane__FPfPfPfPf_0x12f760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7970u; }
        if (ctx->pc != 0x2E7970u) { return; }
    }
    ctx->pc = 0x2E7970u;
label_2e7970:
    // 0x2e7970: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e7970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e7974: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2E7974u;
    SET_GPR_U32(ctx, 31, 0x2E797Cu);
    ctx->pc = 0x2E7978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7974u;
            // 0x2e7978: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E797Cu; }
        if (ctx->pc != 0x2E797Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E797Cu; }
        if (ctx->pc != 0x2E797Cu) { return; }
    }
    ctx->pc = 0x2E797Cu;
label_2e797c:
    // 0x2e797c: 0x86120042  lh          $s2, 0x42($s0)
    ctx->pc = 0x2e797cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x2e7980: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7980u;
    {
        const bool branch_taken_0x2e7980 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7980u;
            // 0x2e7984: 0x86150044  lh          $s5, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7980) {
            ctx->pc = 0x2E79A4u;
            goto label_2e79a4;
        }
    }
    ctx->pc = 0x2E7988u;
    // 0x2e7988: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e7988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e798c: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2E798Cu;
    SET_GPR_U32(ctx, 31, 0x2E7994u);
    ctx->pc = 0x2E7990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E798Cu;
            // 0x2e7990: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7994u; }
        if (ctx->pc != 0x2E7994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7994u; }
        if (ctx->pc != 0x2E7994u) { return; }
    }
    ctx->pc = 0x2E7994u;
label_2e7994:
    // 0x2e7994: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7994u;
    {
        const bool branch_taken_0x2e7994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7994) {
            ctx->pc = 0x2E79A4u;
            goto label_2e79a4;
        }
    }
    ctx->pc = 0x2E799Cu;
    // 0x2e799c: 0x8c5200d4  lw          $s2, 0xD4($v0)
    ctx->pc = 0x2e799cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2e79a0: 0x0  nop
    ctx->pc = 0x2e79a0u;
    // NOP
label_2e79a4:
    // 0x2e79a4: 0x2262fff8  addi        $v0, $s3, -0x8
    ctx->pc = 0x2e79a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 19), (int32_t)4294967288, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_2e79a8:
    // 0x2e79a8: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x2e79a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e79ac: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x2E79ACu;
    {
        const bool branch_taken_0x2e79ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E79B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E79ACu;
            // 0x2e79b0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79ac) {
            ctx->pc = 0x2E7B38u;
            goto label_2e7b38;
        }
    }
    ctx->pc = 0x2E79B4u;
    // 0x2e79b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e79b8: 0x24631360  addiu       $v1, $v1, 0x1360
    ctx->pc = 0x2e79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4960));
    // 0x2e79bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e79c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e79c4: 0x400008  jr          $v0
    ctx->pc = 0x2E79C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E79CCu: goto label_2e79cc;
            case 0x2E7A18u: goto label_2e7a18;
            case 0x2E7A90u: goto label_2e7a90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E79CCu;
label_2e79cc:
    // 0x2e79cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e79ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e79d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79d4: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E79D4u;
    SET_GPR_U32(ctx, 31, 0x2E79DCu);
    ctx->pc = 0x2E79D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E79D4u;
            // 0x2e79d8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E79DCu; }
        if (ctx->pc != 0x2E79DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E79DCu; }
        if (ctx->pc != 0x2E79DCu) { return; }
    }
    ctx->pc = 0x2E79DCu;
label_2e79dc:
    // 0x2e79dc: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x2e79dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e79e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E79E0u;
    {
        const bool branch_taken_0x2e79e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E79E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E79E0u;
            // 0x2e79e4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79e0) {
            ctx->pc = 0x2E79FCu;
            goto label_2e79fc;
        }
    }
    ctx->pc = 0x2E79E8u;
    // 0x2e79e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e79e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e79ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79f0: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E79F0u;
    SET_GPR_U32(ctx, 31, 0x2E79F8u);
    ctx->pc = 0x2E79F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E79F0u;
            // 0x2e79f4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E79F8u; }
        if (ctx->pc != 0x2E79F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E79F8u; }
        if (ctx->pc != 0x2E79F8u) { return; }
    }
    ctx->pc = 0x2E79F8u;
label_2e79f8:
    // 0x2e79f8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e79fc:
    // 0x2e79fc: 0x16620051  bne         $s3, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E79FCu;
    {
        const bool branch_taken_0x2e79fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E79FCu;
            // 0x2e7a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e79fc) {
            ctx->pc = 0x2E7B44u;
            goto label_2e7b44;
        }
    }
    ctx->pc = 0x2E7A04u;
    // 0x2e7a04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a08: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E7A08u;
    SET_GPR_U32(ctx, 31, 0x2E7A10u);
    ctx->pc = 0x2E7A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A08u;
            // 0x2e7a0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A10u; }
        if (ctx->pc != 0x2E7A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A10u; }
        if (ctx->pc != 0x2E7A10u) { return; }
    }
    ctx->pc = 0x2E7A10u;
label_2e7a10:
    // 0x2e7a10: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2E7A10u;
    {
        const bool branch_taken_0x2e7a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a10) {
            ctx->pc = 0x2E7B40u;
            goto label_2e7b40;
        }
    }
    ctx->pc = 0x2E7A18u;
label_2e7a18:
    // 0x2e7a18: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x2e7a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a20: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7A20u;
    SET_GPR_U32(ctx, 31, 0x2E7A28u);
    ctx->pc = 0x2E7A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A20u;
            // 0x2e7a24: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A28u; }
        if (ctx->pc != 0x2E7A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A28u; }
        if (ctx->pc != 0x2E7A28u) { return; }
    }
    ctx->pc = 0x2E7A28u;
label_2e7a28:
    // 0x2e7a28: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x2e7a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7a2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a30: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7A30u;
    SET_GPR_U32(ctx, 31, 0x2E7A38u);
    ctx->pc = 0x2E7A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A30u;
            // 0x2e7a34: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A38u; }
        if (ctx->pc != 0x2E7A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A38u; }
        if (ctx->pc != 0x2E7A38u) { return; }
    }
    ctx->pc = 0x2E7A38u;
label_2e7a38:
    // 0x2e7a38: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x2e7a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7a3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a40: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7A40u;
    SET_GPR_U32(ctx, 31, 0x2E7A48u);
    ctx->pc = 0x2E7A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A40u;
            // 0x2e7a44: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A48u; }
        if (ctx->pc != 0x2E7A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A48u; }
        if (ctx->pc != 0x2E7A48u) { return; }
    }
    ctx->pc = 0x2E7A48u;
label_2e7a48:
    // 0x2e7a48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e7a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a50: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E7A50u;
    SET_GPR_U32(ctx, 31, 0x2E7A58u);
    ctx->pc = 0x2E7A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A50u;
            // 0x2e7a54: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A58u; }
        if (ctx->pc != 0x2E7A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A58u; }
        if (ctx->pc != 0x2E7A58u) { return; }
    }
    ctx->pc = 0x2E7A58u;
label_2e7a58:
    // 0x2e7a58: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x2e7a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2e7a5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7A5Cu;
    {
        const bool branch_taken_0x2e7a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A5Cu;
            // 0x2e7a60: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a5c) {
            ctx->pc = 0x2E7A78u;
            goto label_2e7a78;
        }
    }
    ctx->pc = 0x2E7A64u;
    // 0x2e7a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e7a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a6c: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E7A6Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A74u);
    ctx->pc = 0x2E7A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A6Cu;
            // 0x2e7a70: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A74u; }
        if (ctx->pc != 0x2E7A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A74u; }
        if (ctx->pc != 0x2E7A74u) { return; }
    }
    ctx->pc = 0x2E7A74u;
label_2e7a74:
    // 0x2e7a74: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e7a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e7a78:
    // 0x2e7a78: 0x16620031  bne         $s3, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2E7A78u;
    {
        const bool branch_taken_0x2e7a78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A78u;
            // 0x2e7a7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7a78) {
            ctx->pc = 0x2E7B40u;
            goto label_2e7b40;
        }
    }
    ctx->pc = 0x2E7A80u;
    // 0x2e7a80: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E7A80u;
    SET_GPR_U32(ctx, 31, 0x2E7A88u);
    ctx->pc = 0x2E7A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A80u;
            // 0x2e7a84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A88u; }
        if (ctx->pc != 0x2E7A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7A88u; }
        if (ctx->pc != 0x2E7A88u) { return; }
    }
    ctx->pc = 0x2E7A88u;
label_2e7a88:
    // 0x2e7a88: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2E7A88u;
    {
        const bool branch_taken_0x2e7a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a88) {
            ctx->pc = 0x2E7B40u;
            goto label_2e7b40;
        }
    }
    ctx->pc = 0x2E7A90u;
label_2e7a90:
    // 0x2e7a90: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x2e7a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7a94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a98: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7A98u;
    SET_GPR_U32(ctx, 31, 0x2E7AA0u);
    ctx->pc = 0x2E7A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7A98u;
            // 0x2e7a9c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AA0u; }
        if (ctx->pc != 0x2E7AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AA0u; }
        if (ctx->pc != 0x2E7AA0u) { return; }
    }
    ctx->pc = 0x2E7AA0u;
label_2e7aa0:
    // 0x2e7aa0: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x2e7aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7aa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7aa8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7AA8u;
    SET_GPR_U32(ctx, 31, 0x2E7AB0u);
    ctx->pc = 0x2E7AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7AA8u;
            // 0x2e7aac: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AB0u; }
        if (ctx->pc != 0x2E7AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AB0u; }
        if (ctx->pc != 0x2E7AB0u) { return; }
    }
    ctx->pc = 0x2E7AB0u;
label_2e7ab0:
    // 0x2e7ab0: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x2e7ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7ab4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ab8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7AB8u;
    SET_GPR_U32(ctx, 31, 0x2E7AC0u);
    ctx->pc = 0x2E7ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7AB8u;
            // 0x2e7abc: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AC0u; }
        if (ctx->pc != 0x2E7AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AC0u; }
        if (ctx->pc != 0x2E7AC0u) { return; }
    }
    ctx->pc = 0x2E7AC0u;
label_2e7ac0:
    // 0x2e7ac0: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x2e7ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7ac4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ac8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7AC8u;
    SET_GPR_U32(ctx, 31, 0x2E7AD0u);
    ctx->pc = 0x2E7ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7AC8u;
            // 0x2e7acc: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AD0u; }
        if (ctx->pc != 0x2E7AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AD0u; }
        if (ctx->pc != 0x2E7AD0u) { return; }
    }
    ctx->pc = 0x2E7AD0u;
label_2e7ad0:
    // 0x2e7ad0: 0xc7ac00a4  lwc1        $f12, 0xA4($sp)
    ctx->pc = 0x2e7ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7ad4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ad8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7AD8u;
    SET_GPR_U32(ctx, 31, 0x2E7AE0u);
    ctx->pc = 0x2E7ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7AD8u;
            // 0x2e7adc: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AE0u; }
        if (ctx->pc != 0x2E7AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AE0u; }
        if (ctx->pc != 0x2E7AE0u) { return; }
    }
    ctx->pc = 0x2E7AE0u;
label_2e7ae0:
    // 0x2e7ae0: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x2e7ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7ae4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7ae8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7AE8u;
    SET_GPR_U32(ctx, 31, 0x2E7AF0u);
    ctx->pc = 0x2E7AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7AE8u;
            // 0x2e7aec: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AF0u; }
        if (ctx->pc != 0x2E7AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7AF0u; }
        if (ctx->pc != 0x2E7AF0u) { return; }
    }
    ctx->pc = 0x2E7AF0u;
label_2e7af0:
    // 0x2e7af0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7af4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e7af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7af8: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E7AF8u;
    SET_GPR_U32(ctx, 31, 0x2E7B00u);
    ctx->pc = 0x2E7AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7AF8u;
            // 0x2e7afc: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B00u; }
        if (ctx->pc != 0x2E7B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B00u; }
        if (ctx->pc != 0x2E7B00u) { return; }
    }
    ctx->pc = 0x2E7B00u;
label_2e7b00:
    // 0x2e7b00: 0x2a62000f  slti        $v0, $s3, 0xF
    ctx->pc = 0x2e7b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2e7b04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7B04u;
    {
        const bool branch_taken_0x2e7b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B04u;
            // 0x2e7b08: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b04) {
            ctx->pc = 0x2E7B20u;
            goto label_2e7b20;
        }
    }
    ctx->pc = 0x2E7B0Cu;
    // 0x2e7b0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e7b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b10: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e7b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7b14: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E7B14u;
    SET_GPR_U32(ctx, 31, 0x2E7B1Cu);
    ctx->pc = 0x2E7B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B14u;
            // 0x2e7b18: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B1Cu; }
        if (ctx->pc != 0x2E7B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B1Cu; }
        if (ctx->pc != 0x2E7B1Cu) { return; }
    }
    ctx->pc = 0x2E7B1Cu;
label_2e7b1c:
    // 0x2e7b1c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2e7b20:
    // 0x2e7b20: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7B20u;
    {
        const bool branch_taken_0x2e7b20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B20u;
            // 0x2e7b24: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b20) {
            ctx->pc = 0x2E7B40u;
            goto label_2e7b40;
        }
    }
    ctx->pc = 0x2E7B28u;
    // 0x2e7b28: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E7B28u;
    SET_GPR_U32(ctx, 31, 0x2E7B30u);
    ctx->pc = 0x2E7B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B28u;
            // 0x2e7b2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B30u; }
        if (ctx->pc != 0x2E7B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7B30u; }
        if (ctx->pc != 0x2E7B30u) { return; }
    }
    ctx->pc = 0x2E7B30u;
label_2e7b30:
    // 0x2e7b30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7B30u;
    {
        const bool branch_taken_0x2e7b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7b30) {
            ctx->pc = 0x2E7B40u;
            goto label_2e7b40;
        }
    }
    ctx->pc = 0x2E7B38u;
label_2e7b38:
    // 0x2e7b38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7B38u;
    {
        const bool branch_taken_0x2e7b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B38u;
            // 0x2e7b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7b38) {
            ctx->pc = 0x2E7B44u;
            goto label_2e7b44;
        }
    }
    ctx->pc = 0x2E7B40u;
label_2e7b40:
    // 0x2e7b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7b44:
    // 0x2e7b44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e7b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e7b48:
    // 0x2e7b48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e7b48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7b4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e7b4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7b50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7b50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7b54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7b58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7b58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7b5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7B60u;
            // 0x2e7b64: 0x27bd28e0  addiu       $sp, $sp, 0x28E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7B68u;
}
