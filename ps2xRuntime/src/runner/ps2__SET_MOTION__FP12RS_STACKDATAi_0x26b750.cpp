#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MOTION__FP12RS_STACKDATAi
// Address: 0x26b750 - 0x26b9fc
void ps2__SET_MOTION__FP12RS_STACKDATAi_0x26b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MOTION__FP12RS_STACKDATAi_0x26b750");
#endif

    switch (ctx->pc) {
        case 0x26b750u: goto label_26b750;
        case 0x26b754u: goto label_26b754;
        case 0x26b758u: goto label_26b758;
        case 0x26b75cu: goto label_26b75c;
        case 0x26b760u: goto label_26b760;
        case 0x26b764u: goto label_26b764;
        case 0x26b768u: goto label_26b768;
        case 0x26b76cu: goto label_26b76c;
        case 0x26b770u: goto label_26b770;
        case 0x26b774u: goto label_26b774;
        case 0x26b778u: goto label_26b778;
        case 0x26b77cu: goto label_26b77c;
        case 0x26b780u: goto label_26b780;
        case 0x26b784u: goto label_26b784;
        case 0x26b788u: goto label_26b788;
        case 0x26b78cu: goto label_26b78c;
        case 0x26b790u: goto label_26b790;
        case 0x26b794u: goto label_26b794;
        case 0x26b798u: goto label_26b798;
        case 0x26b79cu: goto label_26b79c;
        case 0x26b7a0u: goto label_26b7a0;
        case 0x26b7a4u: goto label_26b7a4;
        case 0x26b7a8u: goto label_26b7a8;
        case 0x26b7acu: goto label_26b7ac;
        case 0x26b7b0u: goto label_26b7b0;
        case 0x26b7b4u: goto label_26b7b4;
        case 0x26b7b8u: goto label_26b7b8;
        case 0x26b7bcu: goto label_26b7bc;
        case 0x26b7c0u: goto label_26b7c0;
        case 0x26b7c4u: goto label_26b7c4;
        case 0x26b7c8u: goto label_26b7c8;
        case 0x26b7ccu: goto label_26b7cc;
        case 0x26b7d0u: goto label_26b7d0;
        case 0x26b7d4u: goto label_26b7d4;
        case 0x26b7d8u: goto label_26b7d8;
        case 0x26b7dcu: goto label_26b7dc;
        case 0x26b7e0u: goto label_26b7e0;
        case 0x26b7e4u: goto label_26b7e4;
        case 0x26b7e8u: goto label_26b7e8;
        case 0x26b7ecu: goto label_26b7ec;
        case 0x26b7f0u: goto label_26b7f0;
        case 0x26b7f4u: goto label_26b7f4;
        case 0x26b7f8u: goto label_26b7f8;
        case 0x26b7fcu: goto label_26b7fc;
        case 0x26b800u: goto label_26b800;
        case 0x26b804u: goto label_26b804;
        case 0x26b808u: goto label_26b808;
        case 0x26b80cu: goto label_26b80c;
        case 0x26b810u: goto label_26b810;
        case 0x26b814u: goto label_26b814;
        case 0x26b818u: goto label_26b818;
        case 0x26b81cu: goto label_26b81c;
        case 0x26b820u: goto label_26b820;
        case 0x26b824u: goto label_26b824;
        case 0x26b828u: goto label_26b828;
        case 0x26b82cu: goto label_26b82c;
        case 0x26b830u: goto label_26b830;
        case 0x26b834u: goto label_26b834;
        case 0x26b838u: goto label_26b838;
        case 0x26b83cu: goto label_26b83c;
        case 0x26b840u: goto label_26b840;
        case 0x26b844u: goto label_26b844;
        case 0x26b848u: goto label_26b848;
        case 0x26b84cu: goto label_26b84c;
        case 0x26b850u: goto label_26b850;
        case 0x26b854u: goto label_26b854;
        case 0x26b858u: goto label_26b858;
        case 0x26b85cu: goto label_26b85c;
        case 0x26b860u: goto label_26b860;
        case 0x26b864u: goto label_26b864;
        case 0x26b868u: goto label_26b868;
        case 0x26b86cu: goto label_26b86c;
        case 0x26b870u: goto label_26b870;
        case 0x26b874u: goto label_26b874;
        case 0x26b878u: goto label_26b878;
        case 0x26b87cu: goto label_26b87c;
        case 0x26b880u: goto label_26b880;
        case 0x26b884u: goto label_26b884;
        case 0x26b888u: goto label_26b888;
        case 0x26b88cu: goto label_26b88c;
        case 0x26b890u: goto label_26b890;
        case 0x26b894u: goto label_26b894;
        case 0x26b898u: goto label_26b898;
        case 0x26b89cu: goto label_26b89c;
        case 0x26b8a0u: goto label_26b8a0;
        case 0x26b8a4u: goto label_26b8a4;
        case 0x26b8a8u: goto label_26b8a8;
        case 0x26b8acu: goto label_26b8ac;
        case 0x26b8b0u: goto label_26b8b0;
        case 0x26b8b4u: goto label_26b8b4;
        case 0x26b8b8u: goto label_26b8b8;
        case 0x26b8bcu: goto label_26b8bc;
        case 0x26b8c0u: goto label_26b8c0;
        case 0x26b8c4u: goto label_26b8c4;
        case 0x26b8c8u: goto label_26b8c8;
        case 0x26b8ccu: goto label_26b8cc;
        case 0x26b8d0u: goto label_26b8d0;
        case 0x26b8d4u: goto label_26b8d4;
        case 0x26b8d8u: goto label_26b8d8;
        case 0x26b8dcu: goto label_26b8dc;
        case 0x26b8e0u: goto label_26b8e0;
        case 0x26b8e4u: goto label_26b8e4;
        case 0x26b8e8u: goto label_26b8e8;
        case 0x26b8ecu: goto label_26b8ec;
        case 0x26b8f0u: goto label_26b8f0;
        case 0x26b8f4u: goto label_26b8f4;
        case 0x26b8f8u: goto label_26b8f8;
        case 0x26b8fcu: goto label_26b8fc;
        case 0x26b900u: goto label_26b900;
        case 0x26b904u: goto label_26b904;
        case 0x26b908u: goto label_26b908;
        case 0x26b90cu: goto label_26b90c;
        case 0x26b910u: goto label_26b910;
        case 0x26b914u: goto label_26b914;
        case 0x26b918u: goto label_26b918;
        case 0x26b91cu: goto label_26b91c;
        case 0x26b920u: goto label_26b920;
        case 0x26b924u: goto label_26b924;
        case 0x26b928u: goto label_26b928;
        case 0x26b92cu: goto label_26b92c;
        case 0x26b930u: goto label_26b930;
        case 0x26b934u: goto label_26b934;
        case 0x26b938u: goto label_26b938;
        case 0x26b93cu: goto label_26b93c;
        case 0x26b940u: goto label_26b940;
        case 0x26b944u: goto label_26b944;
        case 0x26b948u: goto label_26b948;
        case 0x26b94cu: goto label_26b94c;
        case 0x26b950u: goto label_26b950;
        case 0x26b954u: goto label_26b954;
        case 0x26b958u: goto label_26b958;
        case 0x26b95cu: goto label_26b95c;
        case 0x26b960u: goto label_26b960;
        case 0x26b964u: goto label_26b964;
        case 0x26b968u: goto label_26b968;
        case 0x26b96cu: goto label_26b96c;
        case 0x26b970u: goto label_26b970;
        case 0x26b974u: goto label_26b974;
        case 0x26b978u: goto label_26b978;
        case 0x26b97cu: goto label_26b97c;
        case 0x26b980u: goto label_26b980;
        case 0x26b984u: goto label_26b984;
        case 0x26b988u: goto label_26b988;
        case 0x26b98cu: goto label_26b98c;
        case 0x26b990u: goto label_26b990;
        case 0x26b994u: goto label_26b994;
        case 0x26b998u: goto label_26b998;
        case 0x26b99cu: goto label_26b99c;
        case 0x26b9a0u: goto label_26b9a0;
        case 0x26b9a4u: goto label_26b9a4;
        case 0x26b9a8u: goto label_26b9a8;
        case 0x26b9acu: goto label_26b9ac;
        case 0x26b9b0u: goto label_26b9b0;
        case 0x26b9b4u: goto label_26b9b4;
        case 0x26b9b8u: goto label_26b9b8;
        case 0x26b9bcu: goto label_26b9bc;
        case 0x26b9c0u: goto label_26b9c0;
        case 0x26b9c4u: goto label_26b9c4;
        case 0x26b9c8u: goto label_26b9c8;
        case 0x26b9ccu: goto label_26b9cc;
        case 0x26b9d0u: goto label_26b9d0;
        case 0x26b9d4u: goto label_26b9d4;
        case 0x26b9d8u: goto label_26b9d8;
        case 0x26b9dcu: goto label_26b9dc;
        case 0x26b9e0u: goto label_26b9e0;
        case 0x26b9e4u: goto label_26b9e4;
        case 0x26b9e8u: goto label_26b9e8;
        case 0x26b9ecu: goto label_26b9ec;
        case 0x26b9f0u: goto label_26b9f0;
        case 0x26b9f4u: goto label_26b9f4;
        case 0x26b9f8u: goto label_26b9f8;
        default: break;
    }

    ctx->pc = 0x26b750u;

label_26b750:
    // 0x26b750: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26b754:
    // 0x26b754: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x26b754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_26b758:
    // 0x26b758: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x26b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_26b75c:
    // 0x26b75c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x26b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_26b760:
    // 0x26b760: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26b764:
    // 0x26b764: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26b764u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26b768:
    // 0x26b768: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_26b76c:
    // 0x26b76c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26b76cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26b770:
    // 0x26b770: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26b770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_26b774:
    // 0x26b774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26b774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b778:
    // 0x26b778: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_26b77c:
    // 0x26b77c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_26b780:
    // 0x26b780: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x26b780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26b784:
    // 0x26b784: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x26b784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26b788:
    // 0x26b788: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26b78c:
    // 0x26b78c: 0x12a2004b  beq         $s5, $v0, . + 4 + (0x4B << 2)
label_26b790:
    if (ctx->pc == 0x26B790u) {
        ctx->pc = 0x26B790u;
            // 0x26b790: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B794u;
        goto label_26b794;
    }
    ctx->pc = 0x26B78Cu;
    {
        const bool branch_taken_0x26b78c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B78Cu;
            // 0x26b790: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b78c) {
            ctx->pc = 0x26B8BCu;
            goto label_26b8bc;
        }
    }
    ctx->pc = 0x26B794u;
label_26b794:
    // 0x26b794: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26b798:
    // 0x26b798: 0x12a20048  beq         $s5, $v0, . + 4 + (0x48 << 2)
label_26b79c:
    if (ctx->pc == 0x26B79Cu) {
        ctx->pc = 0x26B79Cu;
            // 0x26b79c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x26B7A0u;
        goto label_26b7a0;
    }
    ctx->pc = 0x26B798u;
    {
        const bool branch_taken_0x26b798 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B798u;
            // 0x26b79c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b798) {
            ctx->pc = 0x26B8BCu;
            goto label_26b8bc;
        }
    }
    ctx->pc = 0x26B7A0u;
label_26b7a0:
    // 0x26b7a0: 0x12a20046  beq         $s5, $v0, . + 4 + (0x46 << 2)
label_26b7a4:
    if (ctx->pc == 0x26B7A4u) {
        ctx->pc = 0x26B7A4u;
            // 0x26b7a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x26B7A8u;
        goto label_26b7a8;
    }
    ctx->pc = 0x26B7A0u;
    {
        const bool branch_taken_0x26b7a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7A0u;
            // 0x26b7a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7a0) {
            ctx->pc = 0x26B8BCu;
            goto label_26b8bc;
        }
    }
    ctx->pc = 0x26B7A8u;
label_26b7a8:
    // 0x26b7a8: 0x12a20044  beq         $s5, $v0, . + 4 + (0x44 << 2)
label_26b7ac:
    if (ctx->pc == 0x26B7ACu) {
        ctx->pc = 0x26B7ACu;
            // 0x26b7ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26B7B0u;
        goto label_26b7b0;
    }
    ctx->pc = 0x26B7A8u;
    {
        const bool branch_taken_0x26b7a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7A8u;
            // 0x26b7ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7a8) {
            ctx->pc = 0x26B8BCu;
            goto label_26b8bc;
        }
    }
    ctx->pc = 0x26B7B0u;
label_26b7b0:
    // 0x26b7b0: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
label_26b7b4:
    if (ctx->pc == 0x26B7B4u) {
        ctx->pc = 0x26B7B8u;
        goto label_26b7b8;
    }
    ctx->pc = 0x26B7B0u;
    {
        const bool branch_taken_0x26b7b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b7b0) {
            ctx->pc = 0x26B7C0u;
            goto label_26b7c0;
        }
    }
    ctx->pc = 0x26B7B8u;
label_26b7b8:
    // 0x26b7b8: 0x10000062  b           . + 4 + (0x62 << 2)
label_26b7bc:
    if (ctx->pc == 0x26B7BCu) {
        ctx->pc = 0x26B7BCu;
            // 0x26b7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B7C0u;
        goto label_26b7c0;
    }
    ctx->pc = 0x26B7B8u;
    {
        const bool branch_taken_0x26b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7B8u;
            // 0x26b7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7b8) {
            ctx->pc = 0x26B944u;
            goto label_26b944;
        }
    }
    ctx->pc = 0x26B7C0u;
label_26b7c0:
    // 0x26b7c0: 0xc097e18  jal         func_25F860
label_26b7c4:
    if (ctx->pc == 0x26B7C4u) {
        ctx->pc = 0x26B7C8u;
        goto label_26b7c8;
    }
    ctx->pc = 0x26B7C0u;
    SET_GPR_U32(ctx, 31, 0x26B7C8u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B7C8u; }
        if (ctx->pc != 0x26B7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B7C8u; }
        if (ctx->pc != 0x26B7C8u) { return; }
    }
    ctx->pc = 0x26B7C8u;
label_26b7c8:
    // 0x26b7c8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26b7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_26b7cc:
    // 0x26b7cc: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26b7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
label_26b7d0:
    // 0x26b7d0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_26b7d4:
    if (ctx->pc == 0x26B7D4u) {
        ctx->pc = 0x26B7D4u;
            // 0x26b7d4: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x26B7D8u;
        goto label_26b7d8;
    }
    ctx->pc = 0x26B7D0u;
    {
        const bool branch_taken_0x26b7d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7D0u;
            // 0x26b7d4: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7d0) {
            ctx->pc = 0x26B7E0u;
            goto label_26b7e0;
        }
    }
    ctx->pc = 0x26B7D8u;
label_26b7d8:
    // 0x26b7d8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_26b7dc:
    if (ctx->pc == 0x26B7DCu) {
        ctx->pc = 0x26B7DCu;
            // 0x26b7dc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B7E0u;
        goto label_26b7e0;
    }
    ctx->pc = 0x26B7D8u;
    {
        const bool branch_taken_0x26b7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7D8u;
            // 0x26b7dc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7d8) {
            ctx->pc = 0x26B844u;
            goto label_26b844;
        }
    }
    ctx->pc = 0x26B7E0u;
label_26b7e0:
    // 0x26b7e0: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
label_26b7e4:
    // 0x26b7e4: 0x1000000c  b           . + 4 + (0xC << 2)
label_26b7e8:
    if (ctx->pc == 0x26B7E8u) {
        ctx->pc = 0x26B7E8u;
            // 0x26b7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B7ECu;
        goto label_26b7ec;
    }
    ctx->pc = 0x26B7E4u;
    {
        const bool branch_taken_0x26b7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7E4u;
            // 0x26b7e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7e4) {
            ctx->pc = 0x26B818u;
            goto label_26b818;
        }
    }
    ctx->pc = 0x26B7ECu;
label_26b7ec:
    // 0x26b7ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_26b7f0:
    // 0x26b7f0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_26b7f4:
    if (ctx->pc == 0x26B7F4u) {
        ctx->pc = 0x26B7F8u;
        goto label_26b7f8;
    }
    ctx->pc = 0x26B7F0u;
    {
        const bool branch_taken_0x26b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b7f0) {
            ctx->pc = 0x26B824u;
            goto label_26b824;
        }
    }
    ctx->pc = 0x26B7F8u;
label_26b7f8:
    // 0x26b7f8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26b7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_26b7fc:
    // 0x26b7fc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_26b800:
    if (ctx->pc == 0x26B800u) {
        ctx->pc = 0x26B804u;
        goto label_26b804;
    }
    ctx->pc = 0x26B7FCu;
    {
        const bool branch_taken_0x26b7fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b7fc) {
            ctx->pc = 0x26B80Cu;
            goto label_26b80c;
        }
    }
    ctx->pc = 0x26B804u;
label_26b804:
    // 0x26b804: 0x10000004  b           . + 4 + (0x4 << 2)
label_26b808:
    if (ctx->pc == 0x26B808u) {
        ctx->pc = 0x26B808u;
            // 0x26b808: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x26B80Cu;
        goto label_26b80c;
    }
    ctx->pc = 0x26B804u;
    {
        const bool branch_taken_0x26b804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B804u;
            // 0x26b808: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b804) {
            ctx->pc = 0x26B818u;
            goto label_26b818;
        }
    }
    ctx->pc = 0x26B80Cu;
label_26b80c:
    // 0x26b80c: 0x0  nop
    ctx->pc = 0x26b80cu;
    // NOP
label_26b810:
    // 0x26b810: 0x1000000c  b           . + 4 + (0xC << 2)
label_26b814:
    if (ctx->pc == 0x26B814u) {
        ctx->pc = 0x26B814u;
            // 0x26b814: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B818u;
        goto label_26b818;
    }
    ctx->pc = 0x26B810u;
    {
        const bool branch_taken_0x26b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B810u;
            // 0x26b814: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b810) {
            ctx->pc = 0x26B844u;
            goto label_26b844;
        }
    }
    ctx->pc = 0x26B818u;
label_26b818:
    // 0x26b818: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26b818u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_26b81c:
    // 0x26b81c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_26b820:
    if (ctx->pc == 0x26B820u) {
        ctx->pc = 0x26B824u;
        goto label_26b824;
    }
    ctx->pc = 0x26B81Cu;
    {
        const bool branch_taken_0x26b81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b81c) {
            ctx->pc = 0x26B7ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b7ec;
        }
    }
    ctx->pc = 0x26B824u;
label_26b824:
    // 0x26b824: 0x0  nop
    ctx->pc = 0x26b824u;
    // NOP
label_26b828:
    // 0x26b828: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_26b82c:
    if (ctx->pc == 0x26B82Cu) {
        ctx->pc = 0x26B82Cu;
            // 0x26b82c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B830u;
        goto label_26b830;
    }
    ctx->pc = 0x26B828u;
    {
        const bool branch_taken_0x26b828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B828u;
            // 0x26b82c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b828) {
            ctx->pc = 0x26B838u;
            goto label_26b838;
        }
    }
    ctx->pc = 0x26B830u;
label_26b830:
    // 0x26b830: 0x10000004  b           . + 4 + (0x4 << 2)
label_26b834:
    if (ctx->pc == 0x26B834u) {
        ctx->pc = 0x26B838u;
        goto label_26b838;
    }
    ctx->pc = 0x26B830u;
    {
        const bool branch_taken_0x26b830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b830) {
            ctx->pc = 0x26B844u;
            goto label_26b844;
        }
    }
    ctx->pc = 0x26B838u;
label_26b838:
    // 0x26b838: 0x8cd50008  lw          $s5, 0x8($a2)
    ctx->pc = 0x26b838u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_26b83c:
    // 0x26b83c: 0x8cd40004  lw          $s4, 0x4($a2)
    ctx->pc = 0x26b83cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_26b840:
    // 0x26b840: 0x0  nop
    ctx->pc = 0x26b840u;
    // NOP
label_26b844:
    // 0x26b844: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_26b848:
    if (ctx->pc == 0x26B848u) {
        ctx->pc = 0x26B848u;
            // 0x26b848: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B84Cu;
        goto label_26b84c;
    }
    ctx->pc = 0x26B844u;
    {
        const bool branch_taken_0x26b844 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B844u;
            // 0x26b848: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b844) {
            ctx->pc = 0x26B854u;
            goto label_26b854;
        }
    }
    ctx->pc = 0x26B84Cu;
label_26b84c:
    // 0x26b84c: 0x10000061  b           . + 4 + (0x61 << 2)
label_26b850:
    if (ctx->pc == 0x26B850u) {
        ctx->pc = 0x26B850u;
            // 0x26b850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B854u;
        goto label_26b854;
    }
    ctx->pc = 0x26B84Cu;
    {
        const bool branch_taken_0x26b84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B84Cu;
            // 0x26b850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b84c) {
            ctx->pc = 0x26B9D4u;
            goto label_26b9d4;
        }
    }
    ctx->pc = 0x26B854u;
label_26b854:
    // 0x26b854: 0xc097f6c  jal         func_25FDB0
label_26b858:
    if (ctx->pc == 0x26B858u) {
        ctx->pc = 0x26B858u;
            // 0x26b858: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B85Cu;
        goto label_26b85c;
    }
    ctx->pc = 0x26B854u;
    SET_GPR_U32(ctx, 31, 0x26B85Cu);
    ctx->pc = 0x26B858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B854u;
            // 0x26b858: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B85Cu; }
        if (ctx->pc != 0x26B85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B85Cu; }
        if (ctx->pc != 0x26B85Cu) { return; }
    }
    ctx->pc = 0x26B85Cu;
label_26b85c:
    // 0x26b85c: 0xc09ac74  jal         func_26B1D0
label_26b860:
    if (ctx->pc == 0x26B860u) {
        ctx->pc = 0x26B860u;
            // 0x26b860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B864u;
        goto label_26b864;
    }
    ctx->pc = 0x26B85Cu;
    SET_GPR_U32(ctx, 31, 0x26B864u);
    ctx->pc = 0x26B860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B85Cu;
            // 0x26b860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B864u; }
        if (ctx->pc != 0x26B864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B864u; }
        if (ctx->pc != 0x26B864u) { return; }
    }
    ctx->pc = 0x26B864u;
label_26b864:
    // 0x26b864: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26b868:
    if (ctx->pc == 0x26B868u) {
        ctx->pc = 0x26B868u;
            // 0x26b868: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B86Cu;
        goto label_26b86c;
    }
    ctx->pc = 0x26B864u;
    {
        const bool branch_taken_0x26b864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B864u;
            // 0x26b868: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b864) {
            ctx->pc = 0x26B874u;
            goto label_26b874;
        }
    }
    ctx->pc = 0x26B86Cu;
label_26b86c:
    // 0x26b86c: 0x10000059  b           . + 4 + (0x59 << 2)
label_26b870:
    if (ctx->pc == 0x26B870u) {
        ctx->pc = 0x26B870u;
            // 0x26b870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B874u;
        goto label_26b874;
    }
    ctx->pc = 0x26B86Cu;
    {
        const bool branch_taken_0x26b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B86Cu;
            // 0x26b870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b86c) {
            ctx->pc = 0x26B9D4u;
            goto label_26b9d4;
        }
    }
    ctx->pc = 0x26B874u;
label_26b874:
    // 0x26b874: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26b874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26b878:
    // 0x26b878: 0xc097f98  jal         func_25FE60
label_26b87c:
    if (ctx->pc == 0x26B87Cu) {
        ctx->pc = 0x26B87Cu;
            // 0x26b87c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B880u;
        goto label_26b880;
    }
    ctx->pc = 0x26B878u;
    SET_GPR_U32(ctx, 31, 0x26B880u);
    ctx->pc = 0x26B87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B878u;
            // 0x26b87c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B880u; }
        if (ctx->pc != 0x26B880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B880u; }
        if (ctx->pc != 0x26B880u) { return; }
    }
    ctx->pc = 0x26B880u;
label_26b880:
    // 0x26b880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26b880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b884:
    // 0x26b884: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x26b884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_26b888:
    // 0x26b888: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_26b88c:
    if (ctx->pc == 0x26B88Cu) {
        ctx->pc = 0x26B88Cu;
            // 0x26b88c: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x26B890u;
        goto label_26b890;
    }
    ctx->pc = 0x26B888u;
    {
        const bool branch_taken_0x26b888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B888u;
            // 0x26b88c: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b888) {
            ctx->pc = 0x26B8A4u;
            goto label_26b8a4;
        }
    }
    ctx->pc = 0x26B890u;
label_26b890:
    // 0x26b890: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26b890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26b894:
    // 0x26b894: 0xc097f6c  jal         func_25FDB0
label_26b898:
    if (ctx->pc == 0x26B898u) {
        ctx->pc = 0x26B898u;
            // 0x26b898: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B89Cu;
        goto label_26b89c;
    }
    ctx->pc = 0x26B894u;
    SET_GPR_U32(ctx, 31, 0x26B89Cu);
    ctx->pc = 0x26B898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B894u;
            // 0x26b898: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B89Cu; }
        if (ctx->pc != 0x26B89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B89Cu; }
        if (ctx->pc != 0x26B89Cu) { return; }
    }
    ctx->pc = 0x26B89Cu;
label_26b89c:
    // 0x26b89c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26b89cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b8a0:
    // 0x26b8a0: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x26b8a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_26b8a4:
    // 0x26b8a4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_26b8a8:
    if (ctx->pc == 0x26B8A8u) {
        ctx->pc = 0x26B8A8u;
            // 0x26b8a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B8ACu;
        goto label_26b8ac;
    }
    ctx->pc = 0x26B8A4u;
    {
        const bool branch_taken_0x26b8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B8A4u;
            // 0x26b8a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8a4) {
            ctx->pc = 0x26B94Cu;
            goto label_26b94c;
        }
    }
    ctx->pc = 0x26B8ACu;
label_26b8ac:
    // 0x26b8ac: 0xc097f84  jal         func_25FE10
label_26b8b0:
    if (ctx->pc == 0x26B8B0u) {
        ctx->pc = 0x26B8B4u;
        goto label_26b8b4;
    }
    ctx->pc = 0x26B8ACu;
    SET_GPR_U32(ctx, 31, 0x26B8B4u);
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B8B4u; }
        if (ctx->pc != 0x26B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B8B4u; }
        if (ctx->pc != 0x26B8B4u) { return; }
    }
    ctx->pc = 0x26B8B4u;
label_26b8b4:
    // 0x26b8b4: 0x10000025  b           . + 4 + (0x25 << 2)
label_26b8b8:
    if (ctx->pc == 0x26B8B8u) {
        ctx->pc = 0x26B8B8u;
            // 0x26b8b8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x26B8BCu;
        goto label_26b8bc;
    }
    ctx->pc = 0x26B8B4u;
    {
        const bool branch_taken_0x26b8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B8B4u;
            // 0x26b8b8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8b4) {
            ctx->pc = 0x26B94Cu;
            goto label_26b94c;
        }
    }
    ctx->pc = 0x26B8BCu;
label_26b8bc:
    // 0x26b8bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26b8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26b8c0:
    // 0x26b8c0: 0xc097e18  jal         func_25F860
label_26b8c4:
    if (ctx->pc == 0x26B8C4u) {
        ctx->pc = 0x26B8C4u;
            // 0x26b8c4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B8C8u;
        goto label_26b8c8;
    }
    ctx->pc = 0x26B8C0u;
    SET_GPR_U32(ctx, 31, 0x26B8C8u);
    ctx->pc = 0x26B8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B8C0u;
            // 0x26b8c4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B8C8u; }
        if (ctx->pc != 0x26B8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B8C8u; }
        if (ctx->pc != 0x26B8C8u) { return; }
    }
    ctx->pc = 0x26B8C8u;
label_26b8c8:
    // 0x26b8c8: 0xc09ac74  jal         func_26B1D0
label_26b8cc:
    if (ctx->pc == 0x26B8CCu) {
        ctx->pc = 0x26B8CCu;
            // 0x26b8cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B8D0u;
        goto label_26b8d0;
    }
    ctx->pc = 0x26B8C8u;
    SET_GPR_U32(ctx, 31, 0x26B8D0u);
    ctx->pc = 0x26B8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B8C8u;
            // 0x26b8cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B8D0u; }
        if (ctx->pc != 0x26B8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B8D0u; }
        if (ctx->pc != 0x26B8D0u) { return; }
    }
    ctx->pc = 0x26B8D0u;
label_26b8d0:
    // 0x26b8d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26b8d4:
    if (ctx->pc == 0x26B8D4u) {
        ctx->pc = 0x26B8D4u;
            // 0x26b8d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B8D8u;
        goto label_26b8d8;
    }
    ctx->pc = 0x26B8D0u;
    {
        const bool branch_taken_0x26b8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B8D0u;
            // 0x26b8d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8d0) {
            ctx->pc = 0x26B8E0u;
            goto label_26b8e0;
        }
    }
    ctx->pc = 0x26B8D8u;
label_26b8d8:
    // 0x26b8d8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_26b8dc:
    if (ctx->pc == 0x26B8DCu) {
        ctx->pc = 0x26B8DCu;
            // 0x26b8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B8E0u;
        goto label_26b8e0;
    }
    ctx->pc = 0x26B8D8u;
    {
        const bool branch_taken_0x26b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B8D8u;
            // 0x26b8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8d8) {
            ctx->pc = 0x26B9D4u;
            goto label_26b9d4;
        }
    }
    ctx->pc = 0x26B8E0u;
label_26b8e0:
    // 0x26b8e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26b8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26b8e4:
    // 0x26b8e4: 0xc097e48  jal         func_25F920
label_26b8e8:
    if (ctx->pc == 0x26B8E8u) {
        ctx->pc = 0x26B8E8u;
            // 0x26b8e8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B8ECu;
        goto label_26b8ec;
    }
    ctx->pc = 0x26B8E4u;
    SET_GPR_U32(ctx, 31, 0x26B8ECu);
    ctx->pc = 0x26B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B8E4u;
            // 0x26b8e8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B8ECu; }
        if (ctx->pc != 0x26B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B8ECu; }
        if (ctx->pc != 0x26B8ECu) { return; }
    }
    ctx->pc = 0x26B8ECu;
label_26b8ec:
    // 0x26b8ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26b8ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b8f0:
    // 0x26b8f0: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x26b8f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_26b8f4:
    // 0x26b8f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_26b8f8:
    if (ctx->pc == 0x26B8F8u) {
        ctx->pc = 0x26B8F8u;
            // 0x26b8f8: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x26B8FCu;
        goto label_26b8fc;
    }
    ctx->pc = 0x26B8F4u;
    {
        const bool branch_taken_0x26b8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B8F4u;
            // 0x26b8f8: 0x2aa20004  slti        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8f4) {
            ctx->pc = 0x26B910u;
            goto label_26b910;
        }
    }
    ctx->pc = 0x26B8FCu;
label_26b8fc:
    // 0x26b8fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26b8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26b900:
    // 0x26b900: 0xc097e18  jal         func_25F860
label_26b904:
    if (ctx->pc == 0x26B904u) {
        ctx->pc = 0x26B904u;
            // 0x26b904: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B908u;
        goto label_26b908;
    }
    ctx->pc = 0x26B900u;
    SET_GPR_U32(ctx, 31, 0x26B908u);
    ctx->pc = 0x26B904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B900u;
            // 0x26b904: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B908u; }
        if (ctx->pc != 0x26B908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B908u; }
        if (ctx->pc != 0x26B908u) { return; }
    }
    ctx->pc = 0x26B908u;
label_26b908:
    // 0x26b908: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26b908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b90c:
    // 0x26b90c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x26b90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_26b910:
    // 0x26b910: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_26b914:
    if (ctx->pc == 0x26B914u) {
        ctx->pc = 0x26B914u;
            // 0x26b914: 0x2aa20005  slti        $v0, $s5, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x26B918u;
        goto label_26b918;
    }
    ctx->pc = 0x26B910u;
    {
        const bool branch_taken_0x26b910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B910u;
            // 0x26b914: 0x2aa20005  slti        $v0, $s5, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b910) {
            ctx->pc = 0x26B92Cu;
            goto label_26b92c;
        }
    }
    ctx->pc = 0x26B918u;
label_26b918:
    // 0x26b918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26b918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26b91c:
    // 0x26b91c: 0xc097e28  jal         func_25F8A0
label_26b920:
    if (ctx->pc == 0x26B920u) {
        ctx->pc = 0x26B920u;
            // 0x26b920: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B924u;
        goto label_26b924;
    }
    ctx->pc = 0x26B91Cu;
    SET_GPR_U32(ctx, 31, 0x26B924u);
    ctx->pc = 0x26B920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B91Cu;
            // 0x26b920: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B924u; }
        if (ctx->pc != 0x26B924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B924u; }
        if (ctx->pc != 0x26B924u) { return; }
    }
    ctx->pc = 0x26B924u;
label_26b924:
    // 0x26b924: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26b924u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26b928:
    // 0x26b928: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x26b928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_26b92c:
    // 0x26b92c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_26b930:
    if (ctx->pc == 0x26B930u) {
        ctx->pc = 0x26B930u;
            // 0x26b930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B934u;
        goto label_26b934;
    }
    ctx->pc = 0x26B92Cu;
    {
        const bool branch_taken_0x26b92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B92Cu;
            // 0x26b930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b92c) {
            ctx->pc = 0x26B94Cu;
            goto label_26b94c;
        }
    }
    ctx->pc = 0x26B934u;
label_26b934:
    // 0x26b934: 0xc097e18  jal         func_25F860
label_26b938:
    if (ctx->pc == 0x26B938u) {
        ctx->pc = 0x26B93Cu;
        goto label_26b93c;
    }
    ctx->pc = 0x26B934u;
    SET_GPR_U32(ctx, 31, 0x26B93Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B93Cu; }
        if (ctx->pc != 0x26B93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B93Cu; }
        if (ctx->pc != 0x26B93Cu) { return; }
    }
    ctx->pc = 0x26B93Cu;
label_26b93c:
    // 0x26b93c: 0x10000003  b           . + 4 + (0x3 << 2)
label_26b940:
    if (ctx->pc == 0x26B940u) {
        ctx->pc = 0x26B940u;
            // 0x26b940: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B944u;
        goto label_26b944;
    }
    ctx->pc = 0x26B93Cu;
    {
        const bool branch_taken_0x26b93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B93Cu;
            // 0x26b940: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b93c) {
            ctx->pc = 0x26B94Cu;
            goto label_26b94c;
        }
    }
    ctx->pc = 0x26B944u;
label_26b944:
    // 0x26b944: 0x10000024  b           . + 4 + (0x24 << 2)
label_26b948:
    if (ctx->pc == 0x26B948u) {
        ctx->pc = 0x26B948u;
            // 0x26b948: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x26B94Cu;
        goto label_26b94c;
    }
    ctx->pc = 0x26B944u;
    {
        const bool branch_taken_0x26b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B944u;
            // 0x26b948: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b944) {
            ctx->pc = 0x26B9D8u;
            goto label_26b9d8;
        }
    }
    ctx->pc = 0x26B94Cu;
label_26b94c:
    // 0x26b94c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_26b950:
    if (ctx->pc == 0x26B950u) {
        ctx->pc = 0x26B954u;
        goto label_26b954;
    }
    ctx->pc = 0x26B94Cu;
    {
        const bool branch_taken_0x26b94c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b94c) {
            ctx->pc = 0x26B964u;
            goto label_26b964;
        }
    }
    ctx->pc = 0x26B954u;
label_26b954:
    // 0x26b954: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26b954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26b958:
    // 0x26b958: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x26b958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_26b95c:
    // 0x26b95c: 0x320f809  jalr        $t9
label_26b960:
    if (ctx->pc == 0x26B960u) {
        ctx->pc = 0x26B960u;
            // 0x26b960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B964u;
        goto label_26b964;
    }
    ctx->pc = 0x26B95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B964u);
        ctx->pc = 0x26B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B95Cu;
            // 0x26b960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B964u; }
            if (ctx->pc != 0x26B964u) { return; }
        }
        }
    }
    ctx->pc = 0x26B964u;
label_26b964:
    // 0x26b964: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26b964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26b968:
    // 0x26b968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26b968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b96c:
    // 0x26b96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b970:
    // 0x26b970: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x26b970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_26b974:
    // 0x26b974: 0x320f809  jalr        $t9
label_26b978:
    if (ctx->pc == 0x26B978u) {
        ctx->pc = 0x26B978u;
            // 0x26b978: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B97Cu;
        goto label_26b97c;
    }
    ctx->pc = 0x26B974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B97Cu);
        ctx->pc = 0x26B978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B974u;
            // 0x26b978: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B97Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B97Cu; }
            if (ctx->pc != 0x26B97Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26B97Cu;
label_26b97c:
    // 0x26b97c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x26b97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
label_26b980:
    // 0x26b980: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_26b984:
    if (ctx->pc == 0x26B984u) {
        ctx->pc = 0x26B984u;
            // 0x26b984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26B988u;
        goto label_26b988;
    }
    ctx->pc = 0x26B980u;
    {
        const bool branch_taken_0x26b980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B980u;
            // 0x26b984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b980) {
            ctx->pc = 0x26B9D4u;
            goto label_26b9d4;
        }
    }
    ctx->pc = 0x26B988u;
label_26b988:
    // 0x26b988: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x26b988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_26b98c:
    // 0x26b98c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26b98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b990:
    // 0x26b990: 0x0  nop
    ctx->pc = 0x26b990u;
    // NOP
label_26b994:
    // 0x26b994: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x26b994u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26b998:
    // 0x26b998: 0x0  nop
    ctx->pc = 0x26b998u;
    // NOP
label_26b99c:
    // 0x26b99c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_26b9a0:
    if (ctx->pc == 0x26B9A0u) {
        ctx->pc = 0x26B9A0u;
            // 0x26b9a0: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x26B9A4u;
        goto label_26b9a4;
    }
    ctx->pc = 0x26B99Cu;
    {
        const bool branch_taken_0x26b99c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B99Cu;
            // 0x26b9a0: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b99c) {
            ctx->pc = 0x26B9D0u;
            goto label_26b9d0;
        }
    }
    ctx->pc = 0x26B9A4u;
label_26b9a4:
    // 0x26b9a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26b9a8:
    if (ctx->pc == 0x26B9A8u) {
        ctx->pc = 0x26B9ACu;
        goto label_26b9ac;
    }
    ctx->pc = 0x26B9A4u;
    {
        const bool branch_taken_0x26b9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b9a4) {
            ctx->pc = 0x26B9D0u;
            goto label_26b9d0;
        }
    }
    ctx->pc = 0x26B9ACu;
label_26b9ac:
    // 0x26b9ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26b9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26b9b0:
    // 0x26b9b0: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x26b9b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_26b9b4:
    // 0x26b9b4: 0x320f809  jalr        $t9
label_26b9b8:
    if (ctx->pc == 0x26B9B8u) {
        ctx->pc = 0x26B9B8u;
            // 0x26b9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B9BCu;
        goto label_26b9bc;
    }
    ctx->pc = 0x26B9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B9BCu);
        ctx->pc = 0x26B9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B9B4u;
            // 0x26b9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B9BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B9BCu; }
            if (ctx->pc != 0x26B9BCu) { return; }
        }
        }
    }
    ctx->pc = 0x26B9BCu;
label_26b9bc:
    // 0x26b9bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26b9bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26b9c0:
    // 0x26b9c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26b9c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26b9c4:
    // 0x26b9c4: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x26b9c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_26b9c8:
    // 0x26b9c8: 0x320f809  jalr        $t9
label_26b9cc:
    if (ctx->pc == 0x26B9CCu) {
        ctx->pc = 0x26B9CCu;
            // 0x26b9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B9D0u;
        goto label_26b9d0;
    }
    ctx->pc = 0x26B9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B9D0u);
        ctx->pc = 0x26B9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B9C8u;
            // 0x26b9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B9D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B9D0u; }
            if (ctx->pc != 0x26B9D0u) { return; }
        }
        }
    }
    ctx->pc = 0x26B9D0u;
label_26b9d0:
    // 0x26b9d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b9d4:
    // 0x26b9d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26b9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26b9d8:
    // 0x26b9d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26b9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26b9dc:
    // 0x26b9dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x26b9dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26b9e0:
    // 0x26b9e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26b9e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26b9e4:
    // 0x26b9e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26b9e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26b9e8:
    // 0x26b9e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26b9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26b9ec:
    // 0x26b9ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26b9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26b9f0:
    // 0x26b9f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26b9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26b9f4:
    // 0x26b9f4: 0x3e00008  jr          $ra
label_26b9f8:
    if (ctx->pc == 0x26B9F8u) {
        ctx->pc = 0x26B9F8u;
            // 0x26b9f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x26B9FCu;
        goto label_fallthrough_0x26b9f4;
    }
    ctx->pc = 0x26B9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B9F4u;
            // 0x26b9f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26b9f4:
    ctx->pc = 0x26B9FCu;
}
