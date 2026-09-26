#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CultureAnalyzeParts__8CEditMapFii
// Address: 0x2a9820 - 0x2a9a14
void CultureAnalyzeParts__8CEditMapFii_0x2a9820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CultureAnalyzeParts__8CEditMapFii_0x2a9820");
#endif

    switch (ctx->pc) {
        case 0x2a9854u: goto label_2a9854;
        case 0x2a98c0u: goto label_2a98c0;
        case 0x2a98dcu: goto label_2a98dc;
        case 0x2a98f4u: goto label_2a98f4;
        case 0x2a9908u: goto label_2a9908;
        case 0x2a9918u: goto label_2a9918;
        case 0x2a9944u: goto label_2a9944;
        case 0x2a996cu: goto label_2a996c;
        case 0x2a9980u: goto label_2a9980;
        case 0x2a9990u: goto label_2a9990;
        case 0x2a99d4u: goto label_2a99d4;
        default: break;
    }

    ctx->pc = 0x2a9820u;

    // 0x2a9820: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x2a9820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
    // 0x2a9824: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a9824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a9828: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a9828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a982c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a9830: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a9830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a9834: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a9834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9838: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a983c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a983cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9840: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a9844: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a9844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a984c: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x2A984Cu;
    SET_GPR_U32(ctx, 31, 0x2A9854u);
    ctx->pc = 0x2A9850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A984Cu;
            // 0x2a9850: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9854u; }
        if (ctx->pc != 0x2A9854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9854u; }
        if (ctx->pc != 0x2A9854u) { return; }
    }
    ctx->pc = 0x2A9854u;
label_2a9854:
    // 0x2a9854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9854u;
    {
        const bool branch_taken_0x2a9854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9854) {
            ctx->pc = 0x2A9868u;
            goto label_2a9868;
        }
    }
    ctx->pc = 0x2A985Cu;
    // 0x2a985c: 0x8c440324  lw          $a0, 0x324($v0)
    ctx->pc = 0x2a985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x2a9860: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9860u;
    {
        const bool branch_taken_0x2a9860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9860) {
            ctx->pc = 0x2A9870u;
            goto label_2a9870;
        }
    }
    ctx->pc = 0x2A9868u;
label_2a9868:
    // 0x2a9868: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2A9868u;
    {
        const bool branch_taken_0x2a9868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9868u;
            // 0x2a986c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9868) {
            ctx->pc = 0x2A99ECu;
            goto label_2a99ec;
        }
    }
    ctx->pc = 0x2A9870u;
label_2a9870:
    // 0x2a9870: 0x80430070  lb          $v1, 0x70($v0)
    ctx->pc = 0x2a9870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2a9874: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x2a9874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x2a9878: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2a9878u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a987c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A987Cu;
    {
        const bool branch_taken_0x2a987c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a987c) {
            ctx->pc = 0x2A9890u;
            goto label_2a9890;
        }
    }
    ctx->pc = 0x2A9884u;
    // 0x2a9884: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x2a9884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
    // 0x2a9888: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9888u;
    {
        const bool branch_taken_0x2a9888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9888) {
            ctx->pc = 0x2A9898u;
            goto label_2a9898;
        }
    }
    ctx->pc = 0x2A9890u;
label_2a9890:
    // 0x2a9890: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2A9890u;
    {
        const bool branch_taken_0x2a9890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9890u;
            // 0x2a9894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9890) {
            ctx->pc = 0x2A99ECu;
            goto label_2a99ec;
        }
    }
    ctx->pc = 0x2A9898u;
label_2a9898:
    // 0x2a9898: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2a9898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a989c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a98a0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A98A0u;
    {
        const bool branch_taken_0x2a98a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A98A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98A0u;
            // 0x2a98a4: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98a0) {
            ctx->pc = 0x2A98D0u;
            goto label_2a98d0;
        }
    }
    ctx->pc = 0x2A98A8u;
    // 0x2a98a8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A98A8u;
    {
        const bool branch_taken_0x2a98a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A98ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98A8u;
            // 0x2a98ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98a8) {
            ctx->pc = 0x2A98B8u;
            goto label_2a98b8;
        }
    }
    ctx->pc = 0x2A98B0u;
    // 0x2a98b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A98B0u;
    {
        const bool branch_taken_0x2a98b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A98B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98B0u;
            // 0x2a98b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98b0) {
            ctx->pc = 0x2A98C8u;
            goto label_2a98c8;
        }
    }
    ctx->pc = 0x2A98B8u;
label_2a98b8:
    // 0x2a98b8: 0xc0aa5fc  jal         func_2A97F0
    ctx->pc = 0x2A98B8u;
    SET_GPR_U32(ctx, 31, 0x2A98C0u);
    ctx->pc = 0x2A98BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98B8u;
            // 0x2a98bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A97F0u;
    if (runtime->hasFunction(0x2A97F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A97F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A98C0u; }
        if (ctx->pc != 0x2A98C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCulturePoint__FP10CEditPartsi_0x2a97f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A98C0u; }
        if (ctx->pc != 0x2A98C0u) { return; }
    }
    ctx->pc = 0x2A98C0u;
label_2a98c0:
    // 0x2a98c0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2A98C0u;
    {
        const bool branch_taken_0x2a98c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A98C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98C0u;
            // 0x2a98c4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98c0) {
            ctx->pc = 0x2A99F0u;
            goto label_2a99f0;
        }
    }
    ctx->pc = 0x2A98C8u;
label_2a98c8:
    // 0x2a98c8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2A98C8u;
    {
        const bool branch_taken_0x2a98c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a98c8) {
            ctx->pc = 0x2A99ECu;
            goto label_2a99ec;
        }
    }
    ctx->pc = 0x2A98D0u;
label_2a98d0:
    // 0x2a98d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a98d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98d4: 0xc0aa5fc  jal         func_2A97F0
    ctx->pc = 0x2A98D4u;
    SET_GPR_U32(ctx, 31, 0x2A98DCu);
    ctx->pc = 0x2A98D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98D4u;
            // 0x2a98d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A97F0u;
    if (runtime->hasFunction(0x2A97F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A97F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A98DCu; }
        if (ctx->pc != 0x2A98DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCulturePoint__FP10CEditPartsi_0x2a97f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A98DCu; }
        if (ctx->pc != 0x2A98DCu) { return; }
    }
    ctx->pc = 0x2A98DCu;
label_2a98dc:
    // 0x2a98dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a98dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a98e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a98e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98e8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a98e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a98ec: 0xc0bba48  jal         func_2EE920
    ctx->pc = 0x2A98ECu;
    SET_GPR_U32(ctx, 31, 0x2A98F4u);
    ctx->pc = 0x2A98F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98ECu;
            // 0x2a98f0: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE920u;
    if (runtime->hasFunction(0x2EE920u)) {
        auto targetFn = runtime->lookupFunction(0x2EE920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A98F4u; }
        if (ctx->pc != 0x2A98F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTerritoryParts__8CEditMapFiPii_0x2ee920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A98F4u; }
        if (ctx->pc != 0x2A98F4u) { return; }
    }
    ctx->pc = 0x2A98F4u;
label_2a98f4:
    // 0x2a98f4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a98f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98f8: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x2a98f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2a98fc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A98FCu;
    {
        const bool branch_taken_0x2a98fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98FCu;
            // 0x2a9900: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98fc) {
            ctx->pc = 0x2A9958u;
            goto label_2a9958;
        }
    }
    ctx->pc = 0x2A9904u;
    // 0x2a9904: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a9904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9908:
    // 0x2a9908: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2a9908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2a990c: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x2a990cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2a9910: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x2A9910u;
    SET_GPR_U32(ctx, 31, 0x2A9918u);
    ctx->pc = 0x2A9914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9910u;
            // 0x2a9914: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9918u; }
        if (ctx->pc != 0x2A9918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9918u; }
        if (ctx->pc != 0x2A9918u) { return; }
    }
    ctx->pc = 0x2A9918u;
label_2a9918:
    // 0x2a9918: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A9918u;
    {
        const bool branch_taken_0x2a9918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9918) {
            ctx->pc = 0x2A9948u;
            goto label_2a9948;
        }
    }
    ctx->pc = 0x2A9920u;
    // 0x2a9920: 0x8c430324  lw          $v1, 0x324($v0)
    ctx->pc = 0x2a9920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x2a9924: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9924u;
    {
        const bool branch_taken_0x2a9924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9924) {
            ctx->pc = 0x2A9948u;
            goto label_2a9948;
        }
    }
    ctx->pc = 0x2A992Cu;
    // 0x2a992c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2a992cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a9930: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9934: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9934u;
    {
        const bool branch_taken_0x2a9934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A9938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9934u;
            // 0x2a9938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9934) {
            ctx->pc = 0x2A9948u;
            goto label_2a9948;
        }
    }
    ctx->pc = 0x2A993Cu;
    // 0x2a993c: 0xc0aa5fc  jal         func_2A97F0
    ctx->pc = 0x2A993Cu;
    SET_GPR_U32(ctx, 31, 0x2A9944u);
    ctx->pc = 0x2A9940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A993Cu;
            // 0x2a9940: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A97F0u;
    if (runtime->hasFunction(0x2A97F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A97F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9944u; }
        if (ctx->pc != 0x2A9944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCulturePoint__FP10CEditPartsi_0x2a97f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9944u; }
        if (ctx->pc != 0x2A9944u) { return; }
    }
    ctx->pc = 0x2A9944u;
label_2a9944:
    // 0x2a9944: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2a9944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a9948:
    // 0x2a9948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a9948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a994c: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x2a994cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2a9950: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A9950u;
    {
        const bool branch_taken_0x2a9950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9950u;
            // 0x2a9954: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9950) {
            ctx->pc = 0x2A9908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9908;
        }
    }
    ctx->pc = 0x2A9958u;
label_2a9958:
    // 0x2a9958: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a9958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a995c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9960: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a9960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a9964: 0xc0bba8c  jal         func_2EEA30
    ctx->pc = 0x2A9964u;
    SET_GPR_U32(ctx, 31, 0x2A996Cu);
    ctx->pc = 0x2A9968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9964u;
            // 0x2a9968: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEA30u;
    if (runtime->hasFunction(0x2EEA30u)) {
        auto targetFn = runtime->lookupFunction(0x2EEA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A996Cu; }
        if (ctx->pc != 0x2A996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChildParts__8CEditMapFiPii_0x2eea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A996Cu; }
        if (ctx->pc != 0x2A996Cu) { return; }
    }
    ctx->pc = 0x2A996Cu;
label_2a996c:
    // 0x2a996c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a996cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9970: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x2a9970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2a9974: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A9974u;
    {
        const bool branch_taken_0x2a9974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9974u;
            // 0x2a9978: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9974) {
            ctx->pc = 0x2A99E8u;
            goto label_2a99e8;
        }
    }
    ctx->pc = 0x2A997Cu;
    // 0x2a997c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a997cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9980:
    // 0x2a9980: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2a9980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2a9984: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x2a9984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2a9988: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x2A9988u;
    SET_GPR_U32(ctx, 31, 0x2A9990u);
    ctx->pc = 0x2A998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9988u;
            // 0x2a998c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9990u; }
        if (ctx->pc != 0x2A9990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9990u; }
        if (ctx->pc != 0x2A9990u) { return; }
    }
    ctx->pc = 0x2A9990u;
label_2a9990:
    // 0x2a9990: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A9990u;
    {
        const bool branch_taken_0x2a9990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9990) {
            ctx->pc = 0x2A99D8u;
            goto label_2a99d8;
        }
    }
    ctx->pc = 0x2A9998u;
    // 0x2a9998: 0x8c430324  lw          $v1, 0x324($v0)
    ctx->pc = 0x2a9998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x2a999c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2A999Cu;
    {
        const bool branch_taken_0x2a999c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a999c) {
            ctx->pc = 0x2A99D8u;
            goto label_2a99d8;
        }
    }
    ctx->pc = 0x2A99A4u;
    // 0x2a99a4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2a99a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a99a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a99ac: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A99ACu;
    {
        const bool branch_taken_0x2a99ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A99B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99ACu;
            // 0x2a99b0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99ac) {
            ctx->pc = 0x2A99C4u;
            goto label_2a99c4;
        }
    }
    ctx->pc = 0x2A99B4u;
    // 0x2a99b4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A99B4u;
    {
        const bool branch_taken_0x2a99b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a99b4) {
            ctx->pc = 0x2A99C4u;
            goto label_2a99c4;
        }
    }
    ctx->pc = 0x2A99BCu;
    // 0x2a99bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A99BCu;
    {
        const bool branch_taken_0x2a99bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a99bc) {
            ctx->pc = 0x2A99D8u;
            goto label_2a99d8;
        }
    }
    ctx->pc = 0x2A99C4u;
label_2a99c4:
    // 0x2a99c4: 0x0  nop
    ctx->pc = 0x2a99c4u;
    // NOP
    // 0x2a99c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a99c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a99cc: 0xc0aa5fc  jal         func_2A97F0
    ctx->pc = 0x2A99CCu;
    SET_GPR_U32(ctx, 31, 0x2A99D4u);
    ctx->pc = 0x2A99D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99CCu;
            // 0x2a99d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A97F0u;
    if (runtime->hasFunction(0x2A97F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A97F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99D4u; }
        if (ctx->pc != 0x2A99D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCulturePoint__FP10CEditPartsi_0x2a97f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99D4u; }
        if (ctx->pc != 0x2A99D4u) { return; }
    }
    ctx->pc = 0x2A99D4u;
label_2a99d4:
    // 0x2a99d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2a99d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a99d8:
    // 0x2a99d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a99d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a99dc: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2a99dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2a99e0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2A99E0u;
    {
        const bool branch_taken_0x2a99e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A99E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99E0u;
            // 0x2a99e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99e0) {
            ctx->pc = 0x2A9980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9980;
        }
    }
    ctx->pc = 0x2A99E8u;
label_2a99e8:
    // 0x2a99e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a99e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a99ec:
    // 0x2a99ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a99ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a99f0:
    // 0x2a99f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a99f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a99f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a99f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a99f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a99f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a99fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a99fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9a00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9a04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9a08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A0Cu;
            // 0x2a9a10: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9A14u;
}
