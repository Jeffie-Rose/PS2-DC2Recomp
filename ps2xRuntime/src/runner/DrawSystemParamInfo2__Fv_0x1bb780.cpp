#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSystemParamInfo2__Fv
// Address: 0x1bb780 - 0x1bba8c
void DrawSystemParamInfo2__Fv_0x1bb780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSystemParamInfo2__Fv_0x1bb780");
#endif

    switch (ctx->pc) {
        case 0x1bb780u: goto label_1bb780;
        case 0x1bb784u: goto label_1bb784;
        case 0x1bb788u: goto label_1bb788;
        case 0x1bb78cu: goto label_1bb78c;
        case 0x1bb790u: goto label_1bb790;
        case 0x1bb794u: goto label_1bb794;
        case 0x1bb798u: goto label_1bb798;
        case 0x1bb79cu: goto label_1bb79c;
        case 0x1bb7a0u: goto label_1bb7a0;
        case 0x1bb7a4u: goto label_1bb7a4;
        case 0x1bb7a8u: goto label_1bb7a8;
        case 0x1bb7acu: goto label_1bb7ac;
        case 0x1bb7b0u: goto label_1bb7b0;
        case 0x1bb7b4u: goto label_1bb7b4;
        case 0x1bb7b8u: goto label_1bb7b8;
        case 0x1bb7bcu: goto label_1bb7bc;
        case 0x1bb7c0u: goto label_1bb7c0;
        case 0x1bb7c4u: goto label_1bb7c4;
        case 0x1bb7c8u: goto label_1bb7c8;
        case 0x1bb7ccu: goto label_1bb7cc;
        case 0x1bb7d0u: goto label_1bb7d0;
        case 0x1bb7d4u: goto label_1bb7d4;
        case 0x1bb7d8u: goto label_1bb7d8;
        case 0x1bb7dcu: goto label_1bb7dc;
        case 0x1bb7e0u: goto label_1bb7e0;
        case 0x1bb7e4u: goto label_1bb7e4;
        case 0x1bb7e8u: goto label_1bb7e8;
        case 0x1bb7ecu: goto label_1bb7ec;
        case 0x1bb7f0u: goto label_1bb7f0;
        case 0x1bb7f4u: goto label_1bb7f4;
        case 0x1bb7f8u: goto label_1bb7f8;
        case 0x1bb7fcu: goto label_1bb7fc;
        case 0x1bb800u: goto label_1bb800;
        case 0x1bb804u: goto label_1bb804;
        case 0x1bb808u: goto label_1bb808;
        case 0x1bb80cu: goto label_1bb80c;
        case 0x1bb810u: goto label_1bb810;
        case 0x1bb814u: goto label_1bb814;
        case 0x1bb818u: goto label_1bb818;
        case 0x1bb81cu: goto label_1bb81c;
        case 0x1bb820u: goto label_1bb820;
        case 0x1bb824u: goto label_1bb824;
        case 0x1bb828u: goto label_1bb828;
        case 0x1bb82cu: goto label_1bb82c;
        case 0x1bb830u: goto label_1bb830;
        case 0x1bb834u: goto label_1bb834;
        case 0x1bb838u: goto label_1bb838;
        case 0x1bb83cu: goto label_1bb83c;
        case 0x1bb840u: goto label_1bb840;
        case 0x1bb844u: goto label_1bb844;
        case 0x1bb848u: goto label_1bb848;
        case 0x1bb84cu: goto label_1bb84c;
        case 0x1bb850u: goto label_1bb850;
        case 0x1bb854u: goto label_1bb854;
        case 0x1bb858u: goto label_1bb858;
        case 0x1bb85cu: goto label_1bb85c;
        case 0x1bb860u: goto label_1bb860;
        case 0x1bb864u: goto label_1bb864;
        case 0x1bb868u: goto label_1bb868;
        case 0x1bb86cu: goto label_1bb86c;
        case 0x1bb870u: goto label_1bb870;
        case 0x1bb874u: goto label_1bb874;
        case 0x1bb878u: goto label_1bb878;
        case 0x1bb87cu: goto label_1bb87c;
        case 0x1bb880u: goto label_1bb880;
        case 0x1bb884u: goto label_1bb884;
        case 0x1bb888u: goto label_1bb888;
        case 0x1bb88cu: goto label_1bb88c;
        case 0x1bb890u: goto label_1bb890;
        case 0x1bb894u: goto label_1bb894;
        case 0x1bb898u: goto label_1bb898;
        case 0x1bb89cu: goto label_1bb89c;
        case 0x1bb8a0u: goto label_1bb8a0;
        case 0x1bb8a4u: goto label_1bb8a4;
        case 0x1bb8a8u: goto label_1bb8a8;
        case 0x1bb8acu: goto label_1bb8ac;
        case 0x1bb8b0u: goto label_1bb8b0;
        case 0x1bb8b4u: goto label_1bb8b4;
        case 0x1bb8b8u: goto label_1bb8b8;
        case 0x1bb8bcu: goto label_1bb8bc;
        case 0x1bb8c0u: goto label_1bb8c0;
        case 0x1bb8c4u: goto label_1bb8c4;
        case 0x1bb8c8u: goto label_1bb8c8;
        case 0x1bb8ccu: goto label_1bb8cc;
        case 0x1bb8d0u: goto label_1bb8d0;
        case 0x1bb8d4u: goto label_1bb8d4;
        case 0x1bb8d8u: goto label_1bb8d8;
        case 0x1bb8dcu: goto label_1bb8dc;
        case 0x1bb8e0u: goto label_1bb8e0;
        case 0x1bb8e4u: goto label_1bb8e4;
        case 0x1bb8e8u: goto label_1bb8e8;
        case 0x1bb8ecu: goto label_1bb8ec;
        case 0x1bb8f0u: goto label_1bb8f0;
        case 0x1bb8f4u: goto label_1bb8f4;
        case 0x1bb8f8u: goto label_1bb8f8;
        case 0x1bb8fcu: goto label_1bb8fc;
        case 0x1bb900u: goto label_1bb900;
        case 0x1bb904u: goto label_1bb904;
        case 0x1bb908u: goto label_1bb908;
        case 0x1bb90cu: goto label_1bb90c;
        case 0x1bb910u: goto label_1bb910;
        case 0x1bb914u: goto label_1bb914;
        case 0x1bb918u: goto label_1bb918;
        case 0x1bb91cu: goto label_1bb91c;
        case 0x1bb920u: goto label_1bb920;
        case 0x1bb924u: goto label_1bb924;
        case 0x1bb928u: goto label_1bb928;
        case 0x1bb92cu: goto label_1bb92c;
        case 0x1bb930u: goto label_1bb930;
        case 0x1bb934u: goto label_1bb934;
        case 0x1bb938u: goto label_1bb938;
        case 0x1bb93cu: goto label_1bb93c;
        case 0x1bb940u: goto label_1bb940;
        case 0x1bb944u: goto label_1bb944;
        case 0x1bb948u: goto label_1bb948;
        case 0x1bb94cu: goto label_1bb94c;
        case 0x1bb950u: goto label_1bb950;
        case 0x1bb954u: goto label_1bb954;
        case 0x1bb958u: goto label_1bb958;
        case 0x1bb95cu: goto label_1bb95c;
        case 0x1bb960u: goto label_1bb960;
        case 0x1bb964u: goto label_1bb964;
        case 0x1bb968u: goto label_1bb968;
        case 0x1bb96cu: goto label_1bb96c;
        case 0x1bb970u: goto label_1bb970;
        case 0x1bb974u: goto label_1bb974;
        case 0x1bb978u: goto label_1bb978;
        case 0x1bb97cu: goto label_1bb97c;
        case 0x1bb980u: goto label_1bb980;
        case 0x1bb984u: goto label_1bb984;
        case 0x1bb988u: goto label_1bb988;
        case 0x1bb98cu: goto label_1bb98c;
        case 0x1bb990u: goto label_1bb990;
        case 0x1bb994u: goto label_1bb994;
        case 0x1bb998u: goto label_1bb998;
        case 0x1bb99cu: goto label_1bb99c;
        case 0x1bb9a0u: goto label_1bb9a0;
        case 0x1bb9a4u: goto label_1bb9a4;
        case 0x1bb9a8u: goto label_1bb9a8;
        case 0x1bb9acu: goto label_1bb9ac;
        case 0x1bb9b0u: goto label_1bb9b0;
        case 0x1bb9b4u: goto label_1bb9b4;
        case 0x1bb9b8u: goto label_1bb9b8;
        case 0x1bb9bcu: goto label_1bb9bc;
        case 0x1bb9c0u: goto label_1bb9c0;
        case 0x1bb9c4u: goto label_1bb9c4;
        case 0x1bb9c8u: goto label_1bb9c8;
        case 0x1bb9ccu: goto label_1bb9cc;
        case 0x1bb9d0u: goto label_1bb9d0;
        case 0x1bb9d4u: goto label_1bb9d4;
        case 0x1bb9d8u: goto label_1bb9d8;
        case 0x1bb9dcu: goto label_1bb9dc;
        case 0x1bb9e0u: goto label_1bb9e0;
        case 0x1bb9e4u: goto label_1bb9e4;
        case 0x1bb9e8u: goto label_1bb9e8;
        case 0x1bb9ecu: goto label_1bb9ec;
        case 0x1bb9f0u: goto label_1bb9f0;
        case 0x1bb9f4u: goto label_1bb9f4;
        case 0x1bb9f8u: goto label_1bb9f8;
        case 0x1bb9fcu: goto label_1bb9fc;
        case 0x1bba00u: goto label_1bba00;
        case 0x1bba04u: goto label_1bba04;
        case 0x1bba08u: goto label_1bba08;
        case 0x1bba0cu: goto label_1bba0c;
        case 0x1bba10u: goto label_1bba10;
        case 0x1bba14u: goto label_1bba14;
        case 0x1bba18u: goto label_1bba18;
        case 0x1bba1cu: goto label_1bba1c;
        case 0x1bba20u: goto label_1bba20;
        case 0x1bba24u: goto label_1bba24;
        case 0x1bba28u: goto label_1bba28;
        case 0x1bba2cu: goto label_1bba2c;
        case 0x1bba30u: goto label_1bba30;
        case 0x1bba34u: goto label_1bba34;
        case 0x1bba38u: goto label_1bba38;
        case 0x1bba3cu: goto label_1bba3c;
        case 0x1bba40u: goto label_1bba40;
        case 0x1bba44u: goto label_1bba44;
        case 0x1bba48u: goto label_1bba48;
        case 0x1bba4cu: goto label_1bba4c;
        case 0x1bba50u: goto label_1bba50;
        case 0x1bba54u: goto label_1bba54;
        case 0x1bba58u: goto label_1bba58;
        case 0x1bba5cu: goto label_1bba5c;
        case 0x1bba60u: goto label_1bba60;
        case 0x1bba64u: goto label_1bba64;
        case 0x1bba68u: goto label_1bba68;
        case 0x1bba6cu: goto label_1bba6c;
        case 0x1bba70u: goto label_1bba70;
        case 0x1bba74u: goto label_1bba74;
        case 0x1bba78u: goto label_1bba78;
        case 0x1bba7cu: goto label_1bba7c;
        case 0x1bba80u: goto label_1bba80;
        case 0x1bba84u: goto label_1bba84;
        case 0x1bba88u: goto label_1bba88;
        default: break;
    }

    ctx->pc = 0x1bb780u;

label_1bb780:
    // 0x1bb780: 0x27bdf660  addiu       $sp, $sp, -0x9A0
    ctx->pc = 0x1bb780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964832));
label_1bb784:
    // 0x1bb784: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bb784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1bb788:
    // 0x1bb788: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bb788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bb78c:
    // 0x1bb78c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1bb78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1bb790:
    // 0x1bb790: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bb790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1bb794:
    // 0x1bb794: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bb794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1bb798:
    // 0x1bb798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bb798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1bb79c:
    // 0x1bb79c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1bb79cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1bb7a0:
    // 0x1bb7a0: 0xc04d0e8  jal         func_1343A0
label_1bb7a4:
    if (ctx->pc == 0x1BB7A4u) {
        ctx->pc = 0x1BB7A4u;
            // 0x1bb7a4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1BB7A8u;
        goto label_1bb7a8;
    }
    ctx->pc = 0x1BB7A0u;
    SET_GPR_U32(ctx, 31, 0x1BB7A8u);
    ctx->pc = 0x1BB7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7A0u;
            // 0x1bb7a4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7A8u; }
        if (ctx->pc != 0x1BB7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7A8u; }
        if (ctx->pc != 0x1BB7A8u) { return; }
    }
    ctx->pc = 0x1BB7A8u;
label_1bb7a8:
    // 0x1bb7a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bb7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bb7ac:
    // 0x1bb7ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb7b0:
    // 0x1bb7b0: 0xc04d104  jal         func_134410
label_1bb7b4:
    if (ctx->pc == 0x1BB7B4u) {
        ctx->pc = 0x1BB7B4u;
            // 0x1bb7b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7B8u;
        goto label_1bb7b8;
    }
    ctx->pc = 0x1BB7B0u;
    SET_GPR_U32(ctx, 31, 0x1BB7B8u);
    ctx->pc = 0x1BB7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7B0u;
            // 0x1bb7b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7B8u; }
        if (ctx->pc != 0x1BB7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7B8u; }
        if (ctx->pc != 0x1BB7B8u) { return; }
    }
    ctx->pc = 0x1BB7B8u;
label_1bb7b8:
    // 0x1bb7b8: 0xc079f5c  jal         func_1E7D70
label_1bb7bc:
    if (ctx->pc == 0x1BB7BCu) {
        ctx->pc = 0x1BB7BCu;
            // 0x1bb7bc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1BB7C0u;
        goto label_1bb7c0;
    }
    ctx->pc = 0x1BB7B8u;
    SET_GPR_U32(ctx, 31, 0x1BB7C0u);
    ctx->pc = 0x1BB7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7B8u;
            // 0x1bb7bc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7C0u; }
        if (ctx->pc != 0x1BB7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7C0u; }
        if (ctx->pc != 0x1BB7C0u) { return; }
    }
    ctx->pc = 0x1BB7C0u;
label_1bb7c0:
    // 0x1bb7c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bb7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bb7c4:
    // 0x1bb7c4: 0xc04d428  jal         func_1350A0
label_1bb7c8:
    if (ctx->pc == 0x1BB7C8u) {
        ctx->pc = 0x1BB7C8u;
            // 0x1bb7c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7CCu;
        goto label_1bb7cc;
    }
    ctx->pc = 0x1BB7C4u;
    SET_GPR_U32(ctx, 31, 0x1BB7CCu);
    ctx->pc = 0x1BB7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7C4u;
            // 0x1bb7c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7CCu; }
        if (ctx->pc != 0x1BB7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7CCu; }
        if (ctx->pc != 0x1BB7CCu) { return; }
    }
    ctx->pc = 0x1BB7CCu;
label_1bb7cc:
    // 0x1bb7cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bb7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bb7d0:
    // 0x1bb7d0: 0xc04d128  jal         func_1344A0
label_1bb7d4:
    if (ctx->pc == 0x1BB7D4u) {
        ctx->pc = 0x1BB7D4u;
            // 0x1bb7d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1BB7D8u;
        goto label_1bb7d8;
    }
    ctx->pc = 0x1BB7D0u;
    SET_GPR_U32(ctx, 31, 0x1BB7D8u);
    ctx->pc = 0x1BB7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7D0u;
            // 0x1bb7d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7D8u; }
        if (ctx->pc != 0x1BB7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7D8u; }
        if (ctx->pc != 0x1BB7D8u) { return; }
    }
    ctx->pc = 0x1BB7D8u;
label_1bb7d8:
    // 0x1bb7d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bb7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1bb7dc:
    // 0x1bb7dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bb7e0:
    // 0x1bb7e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bb7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb7e4:
    // 0x1bb7e4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bb7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bb7e8:
    // 0x1bb7e8: 0xc04d320  jal         func_134C80
label_1bb7ec:
    if (ctx->pc == 0x1BB7ECu) {
        ctx->pc = 0x1BB7ECu;
            // 0x1bb7ec: 0x24080048  addiu       $t0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->pc = 0x1BB7F0u;
        goto label_1bb7f0;
    }
    ctx->pc = 0x1BB7E8u;
    SET_GPR_U32(ctx, 31, 0x1BB7F0u);
    ctx->pc = 0x1BB7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7E8u;
            // 0x1bb7ec: 0x24080048  addiu       $t0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7F0u; }
        if (ctx->pc != 0x1BB7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB7F0u; }
        if (ctx->pc != 0x1BB7F0u) { return; }
    }
    ctx->pc = 0x1BB7F0u;
label_1bb7f0:
    // 0x1bb7f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bb7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bb7f4:
    // 0x1bb7f4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bb7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1bb7f8:
    // 0x1bb7f8: 0x240600b2  addiu       $a2, $zero, 0xB2
    ctx->pc = 0x1bb7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_1bb7fc:
    // 0x1bb7fc: 0xc04d2c8  jal         func_134B20
label_1bb800:
    if (ctx->pc == 0x1BB800u) {
        ctx->pc = 0x1BB800u;
            // 0x1bb800: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB804u;
        goto label_1bb804;
    }
    ctx->pc = 0x1BB7FCu;
    SET_GPR_U32(ctx, 31, 0x1BB804u);
    ctx->pc = 0x1BB800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB7FCu;
            // 0x1bb800: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB804u; }
        if (ctx->pc != 0x1BB804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB804u; }
        if (ctx->pc != 0x1BB804u) { return; }
    }
    ctx->pc = 0x1BB804u;
label_1bb804:
    // 0x1bb804: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bb804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bb808:
    // 0x1bb808: 0x24050144  addiu       $a1, $zero, 0x144
    ctx->pc = 0x1bb808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
label_1bb80c:
    // 0x1bb80c: 0x24060198  addiu       $a2, $zero, 0x198
    ctx->pc = 0x1bb80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_1bb810:
    // 0x1bb810: 0xc04d2c8  jal         func_134B20
label_1bb814:
    if (ctx->pc == 0x1BB814u) {
        ctx->pc = 0x1BB814u;
            // 0x1bb814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB818u;
        goto label_1bb818;
    }
    ctx->pc = 0x1BB810u;
    SET_GPR_U32(ctx, 31, 0x1BB818u);
    ctx->pc = 0x1BB814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB810u;
            // 0x1bb814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB818u; }
        if (ctx->pc != 0x1BB818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB818u; }
        if (ctx->pc != 0x1BB818u) { return; }
    }
    ctx->pc = 0x1BB818u;
label_1bb818:
    // 0x1bb818: 0xc04d1a4  jal         func_134690
label_1bb81c:
    if (ctx->pc == 0x1BB81Cu) {
        ctx->pc = 0x1BB81Cu;
            // 0x1bb81c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1BB820u;
        goto label_1bb820;
    }
    ctx->pc = 0x1BB818u;
    SET_GPR_U32(ctx, 31, 0x1BB820u);
    ctx->pc = 0x1BB81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB818u;
            // 0x1bb81c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB820u; }
        if (ctx->pc != 0x1BB820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB820u; }
        if (ctx->pc != 0x1BB820u) { return; }
    }
    ctx->pc = 0x1BB820u;
label_1bb820:
    // 0x1bb820: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb824:
    // 0x1bb824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb828:
    // 0x1bb828: 0xc0a0ed8  jal         func_283B60
label_1bb82c:
    if (ctx->pc == 0x1BB82Cu) {
        ctx->pc = 0x1BB82Cu;
            // 0x1bb82c: 0x27b00180  addiu       $s0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x1BB830u;
        goto label_1bb830;
    }
    ctx->pc = 0x1BB828u;
    SET_GPR_U32(ctx, 31, 0x1BB830u);
    ctx->pc = 0x1BB82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB828u;
            // 0x1bb82c: 0x27b00180  addiu       $s0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB830u; }
        if (ctx->pc != 0x1BB830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB830u; }
        if (ctx->pc != 0x1BB830u) { return; }
    }
    ctx->pc = 0x1BB830u;
label_1bb830:
    // 0x1bb830: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1bb830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bb834:
    // 0x1bb834: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bb834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb838:
    // 0x1bb838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb83c:
    // 0x1bb83c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1bb83cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1bb840:
    // 0x1bb840: 0x320f809  jalr        $t9
label_1bb844:
    if (ctx->pc == 0x1BB844u) {
        ctx->pc = 0x1BB844u;
            // 0x1bb844: 0x27a50980  addiu       $a1, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->pc = 0x1BB848u;
        goto label_1bb848;
    }
    ctx->pc = 0x1BB840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1BB848u);
        ctx->pc = 0x1BB844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB840u;
            // 0x1bb844: 0x27a50980  addiu       $a1, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BB848u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BB848u; }
            if (ctx->pc != 0x1BB848u) { return; }
        }
        }
    }
    ctx->pc = 0x1BB848u;
label_1bb848:
    // 0x1bb848: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x1bb848u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_1bb84c:
    // 0x1bb84c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1bb850:
    if (ctx->pc == 0x1BB850u) {
        ctx->pc = 0x1BB854u;
        goto label_1bb854;
    }
    ctx->pc = 0x1BB84Cu;
    {
        const bool branch_taken_0x1bb84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb84c) {
            ctx->pc = 0x1BB894u;
            goto label_1bb894;
        }
    }
    ctx->pc = 0x1BB854u;
label_1bb854:
    // 0x1bb854: 0x86230770  lh          $v1, 0x770($s1)
    ctx->pc = 0x1bb854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_1bb858:
    // 0x1bb858: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1bb858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1bb85c:
    // 0x1bb85c: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x1bb85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
label_1bb860:
    // 0x1bb860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bb860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bb864:
    // 0x1bb864: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bb864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bb868:
    // 0x1bb868: 0x8c520484  lw          $s2, 0x484($v0)
    ctx->pc = 0x1bb868u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1bb86c:
    // 0x1bb86c: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_1bb870:
    if (ctx->pc == 0x1BB870u) {
        ctx->pc = 0x1BB874u;
        goto label_1bb874;
    }
    ctx->pc = 0x1BB86Cu;
    {
        const bool branch_taken_0x1bb86c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb86c) {
            ctx->pc = 0x1BB894u;
            goto label_1bb894;
        }
    }
    ctx->pc = 0x1BB874u;
label_1bb874:
    // 0x1bb874: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1bb874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1bb878:
    // 0x1bb878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bb878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bb87c:
    // 0x1bb87c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1bb87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1bb880:
    // 0x1bb880: 0x320f809  jalr        $t9
label_1bb884:
    if (ctx->pc == 0x1BB884u) {
        ctx->pc = 0x1BB884u;
            // 0x1bb884: 0x27a50990  addiu       $a1, $sp, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
        ctx->pc = 0x1BB888u;
        goto label_1bb888;
    }
    ctx->pc = 0x1BB880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1BB888u);
        ctx->pc = 0x1BB884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB880u;
            // 0x1bb884: 0x27a50990  addiu       $a1, $sp, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BB888u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BB888u; }
            if (ctx->pc != 0x1BB888u) { return; }
        }
        }
    }
    ctx->pc = 0x1BB888u;
label_1bb888:
    // 0x1bb888: 0xc654130c  lwc1        $f20, 0x130C($s2)
    ctx->pc = 0x1bb888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bb88c:
    // 0x1bb88c: 0xc6551360  lwc1        $f21, 0x1360($s2)
    ctx->pc = 0x1bb88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1bb890:
    // 0x1bb890: 0x0  nop
    ctx->pc = 0x1bb890u;
    // NOP
label_1bb894:
    // 0x1bb894: 0xc0a24f0  jal         func_2893C0
label_1bb898:
    if (ctx->pc == 0x1BB898u) {
        ctx->pc = 0x1BB898u;
            // 0x1bb898: 0xc7ac0980  lwc1        $f12, 0x980($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1BB89Cu;
        goto label_1bb89c;
    }
    ctx->pc = 0x1BB894u;
    SET_GPR_U32(ctx, 31, 0x1BB89Cu);
    ctx->pc = 0x1BB898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB894u;
            // 0x1bb898: 0xc7ac0980  lwc1        $f12, 0x980($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB89Cu; }
        if (ctx->pc != 0x1BB89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB89Cu; }
        if (ctx->pc != 0x1BB89Cu) { return; }
    }
    ctx->pc = 0x1BB89Cu;
label_1bb89c:
    // 0x1bb89c: 0xc7ac0984  lwc1        $f12, 0x984($sp)
    ctx->pc = 0x1bb89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bb8a0:
    // 0x1bb8a0: 0xc0a24f0  jal         func_2893C0
label_1bb8a4:
    if (ctx->pc == 0x1BB8A4u) {
        ctx->pc = 0x1BB8A4u;
            // 0x1bb8a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8A8u;
        goto label_1bb8a8;
    }
    ctx->pc = 0x1BB8A0u;
    SET_GPR_U32(ctx, 31, 0x1BB8A8u);
    ctx->pc = 0x1BB8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8A0u;
            // 0x1bb8a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8A8u; }
        if (ctx->pc != 0x1BB8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8A8u; }
        if (ctx->pc != 0x1BB8A8u) { return; }
    }
    ctx->pc = 0x1BB8A8u;
label_1bb8a8:
    // 0x1bb8a8: 0xc7ac0988  lwc1        $f12, 0x988($sp)
    ctx->pc = 0x1bb8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bb8ac:
    // 0x1bb8ac: 0xc0a24f0  jal         func_2893C0
label_1bb8b0:
    if (ctx->pc == 0x1BB8B0u) {
        ctx->pc = 0x1BB8B0u;
            // 0x1bb8b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8B4u;
        goto label_1bb8b4;
    }
    ctx->pc = 0x1BB8ACu;
    SET_GPR_U32(ctx, 31, 0x1BB8B4u);
    ctx->pc = 0x1BB8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8ACu;
            // 0x1bb8b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8B4u; }
        if (ctx->pc != 0x1BB8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8B4u; }
        if (ctx->pc != 0x1BB8B4u) { return; }
    }
    ctx->pc = 0x1BB8B4u;
label_1bb8b4:
    // 0x1bb8b4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb8b8:
    // 0x1bb8b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1bb8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8bc:
    // 0x1bb8bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bb8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8c0:
    // 0x1bb8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb8c4:
    // 0x1bb8c4: 0x24a56b80  addiu       $a1, $a1, 0x6B80
    ctx->pc = 0x1bb8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27520));
label_1bb8c8:
    // 0x1bb8c8: 0xc04a234  jal         func_1288D0
label_1bb8cc:
    if (ctx->pc == 0x1BB8CCu) {
        ctx->pc = 0x1BB8CCu;
            // 0x1bb8cc: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8D0u;
        goto label_1bb8d0;
    }
    ctx->pc = 0x1BB8C8u;
    SET_GPR_U32(ctx, 31, 0x1BB8D0u);
    ctx->pc = 0x1BB8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8C8u;
            // 0x1bb8cc: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8D0u; }
        if (ctx->pc != 0x1BB8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8D0u; }
        if (ctx->pc != 0x1BB8D0u) { return; }
    }
    ctx->pc = 0x1BB8D0u;
label_1bb8d0:
    // 0x1bb8d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bb8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bb8d4:
    // 0x1bb8d4: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x1bb8d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_1bb8d8:
    // 0x1bb8d8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1bb8dc:
    if (ctx->pc == 0x1BB8DCu) {
        ctx->pc = 0x1BB8E0u;
        goto label_1bb8e0;
    }
    ctx->pc = 0x1BB8D8u;
    {
        const bool branch_taken_0x1bb8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb8d8) {
            ctx->pc = 0x1BB950u;
            goto label_1bb950;
        }
    }
    ctx->pc = 0x1BB8E0u;
label_1bb8e0:
    // 0x1bb8e0: 0xc0a24f0  jal         func_2893C0
label_1bb8e4:
    if (ctx->pc == 0x1BB8E4u) {
        ctx->pc = 0x1BB8E4u;
            // 0x1bb8e4: 0xc7ac0990  lwc1        $f12, 0x990($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1BB8E8u;
        goto label_1bb8e8;
    }
    ctx->pc = 0x1BB8E0u;
    SET_GPR_U32(ctx, 31, 0x1BB8E8u);
    ctx->pc = 0x1BB8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8E0u;
            // 0x1bb8e4: 0xc7ac0990  lwc1        $f12, 0x990($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8E8u; }
        if (ctx->pc != 0x1BB8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8E8u; }
        if (ctx->pc != 0x1BB8E8u) { return; }
    }
    ctx->pc = 0x1BB8E8u;
label_1bb8e8:
    // 0x1bb8e8: 0xc7ac0994  lwc1        $f12, 0x994($sp)
    ctx->pc = 0x1bb8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bb8ec:
    // 0x1bb8ec: 0xc0a24f0  jal         func_2893C0
label_1bb8f0:
    if (ctx->pc == 0x1BB8F0u) {
        ctx->pc = 0x1BB8F0u;
            // 0x1bb8f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8F4u;
        goto label_1bb8f4;
    }
    ctx->pc = 0x1BB8ECu;
    SET_GPR_U32(ctx, 31, 0x1BB8F4u);
    ctx->pc = 0x1BB8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8ECu;
            // 0x1bb8f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8F4u; }
        if (ctx->pc != 0x1BB8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB8F4u; }
        if (ctx->pc != 0x1BB8F4u) { return; }
    }
    ctx->pc = 0x1BB8F4u;
label_1bb8f4:
    // 0x1bb8f4: 0xc7ac0998  lwc1        $f12, 0x998($sp)
    ctx->pc = 0x1bb8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bb8f8:
    // 0x1bb8f8: 0xc0a24f0  jal         func_2893C0
label_1bb8fc:
    if (ctx->pc == 0x1BB8FCu) {
        ctx->pc = 0x1BB8FCu;
            // 0x1bb8fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB900u;
        goto label_1bb900;
    }
    ctx->pc = 0x1BB8F8u;
    SET_GPR_U32(ctx, 31, 0x1BB900u);
    ctx->pc = 0x1BB8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB8F8u;
            // 0x1bb8fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB900u; }
        if (ctx->pc != 0x1BB900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB900u; }
        if (ctx->pc != 0x1BB900u) { return; }
    }
    ctx->pc = 0x1BB900u;
label_1bb900:
    // 0x1bb900: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb904:
    // 0x1bb904: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1bb904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bb908:
    // 0x1bb908: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1bb908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb90c:
    // 0x1bb90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb910:
    // 0x1bb910: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0
    ctx->pc = 0x1bb910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
label_1bb914:
    // 0x1bb914: 0xc04a234  jal         func_1288D0
label_1bb918:
    if (ctx->pc == 0x1BB918u) {
        ctx->pc = 0x1BB918u;
            // 0x1bb918: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB91Cu;
        goto label_1bb91c;
    }
    ctx->pc = 0x1BB914u;
    SET_GPR_U32(ctx, 31, 0x1BB91Cu);
    ctx->pc = 0x1BB918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB914u;
            // 0x1bb918: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB91Cu; }
        if (ctx->pc != 0x1BB91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB91Cu; }
        if (ctx->pc != 0x1BB91Cu) { return; }
    }
    ctx->pc = 0x1BB91Cu;
label_1bb91c:
    // 0x1bb91c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bb91cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1bb920:
    // 0x1bb920: 0xc0a24f0  jal         func_2893C0
label_1bb924:
    if (ctx->pc == 0x1BB924u) {
        ctx->pc = 0x1BB924u;
            // 0x1bb924: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x1BB928u;
        goto label_1bb928;
    }
    ctx->pc = 0x1BB920u;
    SET_GPR_U32(ctx, 31, 0x1BB928u);
    ctx->pc = 0x1BB924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB920u;
            // 0x1bb924: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB928u; }
        if (ctx->pc != 0x1BB928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB928u; }
        if (ctx->pc != 0x1BB928u) { return; }
    }
    ctx->pc = 0x1BB928u;
label_1bb928:
    // 0x1bb928: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1bb928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1bb92c:
    // 0x1bb92c: 0xc0a24f0  jal         func_2893C0
label_1bb930:
    if (ctx->pc == 0x1BB930u) {
        ctx->pc = 0x1BB930u;
            // 0x1bb930: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB934u;
        goto label_1bb934;
    }
    ctx->pc = 0x1BB92Cu;
    SET_GPR_U32(ctx, 31, 0x1BB934u);
    ctx->pc = 0x1BB930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB92Cu;
            // 0x1bb930: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB934u; }
        if (ctx->pc != 0x1BB934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB934u; }
        if (ctx->pc != 0x1BB934u) { return; }
    }
    ctx->pc = 0x1BB934u;
label_1bb934:
    // 0x1bb934: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb938:
    // 0x1bb938: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bb93c:
    // 0x1bb93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb940:
    // 0x1bb940: 0x24a56c10  addiu       $a1, $a1, 0x6C10
    ctx->pc = 0x1bb940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27664));
label_1bb944:
    // 0x1bb944: 0xc04a234  jal         func_1288D0
label_1bb948:
    if (ctx->pc == 0x1BB948u) {
        ctx->pc = 0x1BB948u;
            // 0x1bb948: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BB94Cu;
        goto label_1bb94c;
    }
    ctx->pc = 0x1BB944u;
    SET_GPR_U32(ctx, 31, 0x1BB94Cu);
    ctx->pc = 0x1BB948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB944u;
            // 0x1bb948: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB94Cu; }
        if (ctx->pc != 0x1BB94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB94Cu; }
        if (ctx->pc != 0x1BB94Cu) { return; }
    }
    ctx->pc = 0x1BB94Cu;
label_1bb94c:
    // 0x1bb94c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bb950:
    // 0x1bb950: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1bb954:
    // 0x1bb954: 0xc06e9e4  jal         func_1BA790
label_1bb958:
    if (ctx->pc == 0x1BB958u) {
        ctx->pc = 0x1BB958u;
            // 0x1bb958: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x1BB95Cu;
        goto label_1bb95c;
    }
    ctx->pc = 0x1BB954u;
    SET_GPR_U32(ctx, 31, 0x1BB95Cu);
    ctx->pc = 0x1BB958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB954u;
            // 0x1bb958: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA790u;
    if (runtime->hasFunction(0x1BA790u)) {
        auto targetFn = runtime->lookupFunction(0x1BA790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB95Cu; }
        if (ctx->pc != 0x1BB95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ActivePrimNum__11CColPrimManFv_0x1ba790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB95Cu; }
        if (ctx->pc != 0x1BB95Cu) { return; }
    }
    ctx->pc = 0x1BB95Cu;
label_1bb95c:
    // 0x1bb95c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb95cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb960:
    // 0x1bb960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb964:
    // 0x1bb964: 0x24a56b98  addiu       $a1, $a1, 0x6B98
    ctx->pc = 0x1bb964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27544));
label_1bb968:
    // 0x1bb968: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bb968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb96c:
    // 0x1bb96c: 0xc04a234  jal         func_1288D0
label_1bb970:
    if (ctx->pc == 0x1BB970u) {
        ctx->pc = 0x1BB970u;
            // 0x1bb970: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1BB974u;
        goto label_1bb974;
    }
    ctx->pc = 0x1BB96Cu;
    SET_GPR_U32(ctx, 31, 0x1BB974u);
    ctx->pc = 0x1BB970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB96Cu;
            // 0x1bb970: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB974u; }
        if (ctx->pc != 0x1BB974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB974u; }
        if (ctx->pc != 0x1BB974u) { return; }
    }
    ctx->pc = 0x1BB974u;
label_1bb974:
    // 0x1bb974: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb978:
    // 0x1bb978: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bb978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bb97c:
    // 0x1bb97c: 0xc0a0c64  jal         func_283190
label_1bb980:
    if (ctx->pc == 0x1BB980u) {
        ctx->pc = 0x1BB980u;
            // 0x1bb980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BB984u;
        goto label_1bb984;
    }
    ctx->pc = 0x1BB97Cu;
    SET_GPR_U32(ctx, 31, 0x1BB984u);
    ctx->pc = 0x1BB980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB97Cu;
            // 0x1bb980: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB984u; }
        if (ctx->pc != 0x1BB984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB984u; }
        if (ctx->pc != 0x1BB984u) { return; }
    }
    ctx->pc = 0x1BB984u;
label_1bb984:
    // 0x1bb984: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb988:
    // 0x1bb988: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bb988u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb98c:
    // 0x1bb98c: 0xc0a0c64  jal         func_283190
label_1bb990:
    if (ctx->pc == 0x1BB990u) {
        ctx->pc = 0x1BB990u;
            // 0x1bb990: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1BB994u;
        goto label_1bb994;
    }
    ctx->pc = 0x1BB98Cu;
    SET_GPR_U32(ctx, 31, 0x1BB994u);
    ctx->pc = 0x1BB990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB98Cu;
            // 0x1bb990: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB994u; }
        if (ctx->pc != 0x1BB994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB994u; }
        if (ctx->pc != 0x1BB994u) { return; }
    }
    ctx->pc = 0x1BB994u;
label_1bb994:
    // 0x1bb994: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb998:
    // 0x1bb998: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bb998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb99c:
    // 0x1bb99c: 0xc0a0c64  jal         func_283190
label_1bb9a0:
    if (ctx->pc == 0x1BB9A0u) {
        ctx->pc = 0x1BB9A0u;
            // 0x1bb9a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1BB9A4u;
        goto label_1bb9a4;
    }
    ctx->pc = 0x1BB99Cu;
    SET_GPR_U32(ctx, 31, 0x1BB9A4u);
    ctx->pc = 0x1BB9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB99Cu;
            // 0x1bb9a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB9A4u; }
        if (ctx->pc != 0x1BB9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB9A4u; }
        if (ctx->pc != 0x1BB9A4u) { return; }
    }
    ctx->pc = 0x1BB9A4u;
label_1bb9a4:
    // 0x1bb9a4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1bb9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1bb9a8:
    // 0x1bb9a8: 0xc0a0c64  jal         func_283190
label_1bb9ac:
    if (ctx->pc == 0x1BB9ACu) {
        ctx->pc = 0x1BB9ACu;
            // 0x1bb9ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1BB9B0u;
        goto label_1bb9b0;
    }
    ctx->pc = 0x1BB9A8u;
    SET_GPR_U32(ctx, 31, 0x1BB9B0u);
    ctx->pc = 0x1BB9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB9A8u;
            // 0x1bb9ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB9B0u; }
        if (ctx->pc != 0x1BB9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB9B0u; }
        if (ctx->pc != 0x1BB9B0u) { return; }
    }
    ctx->pc = 0x1BB9B0u;
label_1bb9b0:
    // 0x1bb9b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bb9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9b4:
    // 0x1bb9b4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1bb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1bb9b8:
    // 0x1bb9b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bb9bc:
    // 0x1bb9bc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1bb9c0:
    if (ctx->pc == 0x1BB9C0u) {
        ctx->pc = 0x1BB9C0u;
            // 0x1bb9c0: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1BB9C4u;
        goto label_1bb9c4;
    }
    ctx->pc = 0x1BB9BCu;
    {
        const bool branch_taken_0x1bb9bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BB9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB9BCu;
            // 0x1bb9c0: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9bc) {
            ctx->pc = 0x1BB9CCu;
            goto label_1bb9cc;
        }
    }
    ctx->pc = 0x1BB9C4u;
label_1bb9c4:
    // 0x1bb9c4: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1bb9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1bb9c8:
    // 0x1bb9c8: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x1bb9c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_1bb9cc:
    // 0x1bb9cc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb9d0:
    // 0x1bb9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9d4:
    // 0x1bb9d4: 0xc04a234  jal         func_1288D0
label_1bb9d8:
    if (ctx->pc == 0x1BB9D8u) {
        ctx->pc = 0x1BB9D8u;
            // 0x1bb9d8: 0x24a56ba8  addiu       $a1, $a1, 0x6BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27560));
        ctx->pc = 0x1BB9DCu;
        goto label_1bb9dc;
    }
    ctx->pc = 0x1BB9D4u;
    SET_GPR_U32(ctx, 31, 0x1BB9DCu);
    ctx->pc = 0x1BB9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB9D4u;
            // 0x1bb9d8: 0x24a56ba8  addiu       $a1, $a1, 0x6BA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB9DCu; }
        if (ctx->pc != 0x1BB9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB9DCu; }
        if (ctx->pc != 0x1BB9DCu) { return; }
    }
    ctx->pc = 0x1BB9DCu;
label_1bb9dc:
    // 0x1bb9dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bb9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bb9e0:
    // 0x1bb9e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1bb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1bb9e4:
    // 0x1bb9e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bb9e8:
    // 0x1bb9e8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1bb9ec:
    if (ctx->pc == 0x1BB9ECu) {
        ctx->pc = 0x1BB9ECu;
            // 0x1bb9ec: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1BB9F0u;
        goto label_1bb9f0;
    }
    ctx->pc = 0x1BB9E8u;
    {
        const bool branch_taken_0x1bb9e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BB9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB9E8u;
            // 0x1bb9ec: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9e8) {
            ctx->pc = 0x1BB9F8u;
            goto label_1bb9f8;
        }
    }
    ctx->pc = 0x1BB9F0u;
label_1bb9f0:
    // 0x1bb9f0: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1bb9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1bb9f4:
    // 0x1bb9f4: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x1bb9f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_1bb9f8:
    // 0x1bb9f8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bb9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bb9fc:
    // 0x1bb9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bb9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bba00:
    // 0x1bba00: 0xc04a234  jal         func_1288D0
label_1bba04:
    if (ctx->pc == 0x1BBA04u) {
        ctx->pc = 0x1BBA04u;
            // 0x1bba04: 0x24a56bc0  addiu       $a1, $a1, 0x6BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27584));
        ctx->pc = 0x1BBA08u;
        goto label_1bba08;
    }
    ctx->pc = 0x1BBA00u;
    SET_GPR_U32(ctx, 31, 0x1BBA08u);
    ctx->pc = 0x1BBA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA00u;
            // 0x1bba04: 0x24a56bc0  addiu       $a1, $a1, 0x6BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA08u; }
        if (ctx->pc != 0x1BBA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA08u; }
        if (ctx->pc != 0x1BBA08u) { return; }
    }
    ctx->pc = 0x1BBA08u;
label_1bba08:
    // 0x1bba08: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1bba08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bba0c:
    // 0x1bba0c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1bba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1bba10:
    // 0x1bba10: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1bba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1bba14:
    // 0x1bba14: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1bba14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bba18:
    // 0x1bba18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bba18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bba1c:
    // 0x1bba1c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1bba20:
    if (ctx->pc == 0x1BBA20u) {
        ctx->pc = 0x1BBA20u;
            // 0x1bba20: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1BBA24u;
        goto label_1bba24;
    }
    ctx->pc = 0x1BBA1Cu;
    {
        const bool branch_taken_0x1bba1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BBA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA1Cu;
            // 0x1bba20: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba1c) {
            ctx->pc = 0x1BBA2Cu;
            goto label_1bba2c;
        }
    }
    ctx->pc = 0x1BBA24u;
label_1bba24:
    // 0x1bba24: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1bba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1bba28:
    // 0x1bba28: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x1bba28u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_1bba2c:
    // 0x1bba2c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1bba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1bba30:
    // 0x1bba30: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1bba34:
    if (ctx->pc == 0x1BBA34u) {
        ctx->pc = 0x1BBA34u;
            // 0x1bba34: 0x23a83  sra         $a3, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1BBA38u;
        goto label_1bba38;
    }
    ctx->pc = 0x1BBA30u;
    {
        const bool branch_taken_0x1bba30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BBA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA30u;
            // 0x1bba34: 0x23a83  sra         $a3, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba30) {
            ctx->pc = 0x1BBA40u;
            goto label_1bba40;
        }
    }
    ctx->pc = 0x1BBA38u;
label_1bba38:
    // 0x1bba38: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1bba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1bba3c:
    // 0x1bba3c: 0x23a83  sra         $a3, $v0, 10
    ctx->pc = 0x1bba3cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 10));
label_1bba40:
    // 0x1bba40: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1bba40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1bba44:
    // 0x1bba44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bba48:
    // 0x1bba48: 0xc04a234  jal         func_1288D0
label_1bba4c:
    if (ctx->pc == 0x1BBA4Cu) {
        ctx->pc = 0x1BBA4Cu;
            // 0x1bba4c: 0x24a56bd0  addiu       $a1, $a1, 0x6BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27600));
        ctx->pc = 0x1BBA50u;
        goto label_1bba50;
    }
    ctx->pc = 0x1BBA48u;
    SET_GPR_U32(ctx, 31, 0x1BBA50u);
    ctx->pc = 0x1BBA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA48u;
            // 0x1bba4c: 0x24a56bd0  addiu       $a1, $a1, 0x6BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA50u; }
        if (ctx->pc != 0x1BBA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA50u; }
        if (ctx->pc != 0x1BBA50u) { return; }
    }
    ctx->pc = 0x1BBA50u;
label_1bba50:
    // 0x1bba50: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1bba50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1bba54:
    // 0x1bba54: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1bba54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1bba58:
    // 0x1bba58: 0x2484f140  addiu       $a0, $a0, -0xEC0
    ctx->pc = 0x1bba58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963520));
label_1bba5c:
    // 0x1bba5c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bba5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1bba60:
    // 0x1bba60: 0xc0b5688  jal         func_2D5A20
label_1bba64:
    if (ctx->pc == 0x1BBA64u) {
        ctx->pc = 0x1BBA64u;
            // 0x1bba64: 0x240700b4  addiu       $a3, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->pc = 0x1BBA68u;
        goto label_1bba68;
    }
    ctx->pc = 0x1BBA60u;
    SET_GPR_U32(ctx, 31, 0x1BBA68u);
    ctx->pc = 0x1BBA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA60u;
            // 0x1bba64: 0x240700b4  addiu       $a3, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA68u; }
        if (ctx->pc != 0x1BBA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA68u; }
        if (ctx->pc != 0x1BBA68u) { return; }
    }
    ctx->pc = 0x1BBA68u;
label_1bba68:
    // 0x1bba68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bba68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bba6c:
    // 0x1bba6c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1bba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1bba70:
    // 0x1bba70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1bba70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bba74:
    // 0x1bba74: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1bba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bba78:
    // 0x1bba78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bba78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bba7c:
    // 0x1bba7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bba7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bba80:
    // 0x1bba80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bba80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bba84:
    // 0x1bba84: 0x3e00008  jr          $ra
label_1bba88:
    if (ctx->pc == 0x1BBA88u) {
        ctx->pc = 0x1BBA88u;
            // 0x1bba88: 0x27bd09a0  addiu       $sp, $sp, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
        ctx->pc = 0x1BBA8Cu;
        goto label_fallthrough_0x1bba84;
    }
    ctx->pc = 0x1BBA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA84u;
            // 0x1bba88: 0x27bd09a0  addiu       $sp, $sp, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1bba84:
    ctx->pc = 0x1BBA8Cu;
}
