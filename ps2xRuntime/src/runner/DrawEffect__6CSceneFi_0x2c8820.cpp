#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEffect__6CSceneFi
// Address: 0x2c8820 - 0x2c8a18
void DrawEffect__6CSceneFi_0x2c8820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEffect__6CSceneFi_0x2c8820");
#endif

    switch (ctx->pc) {
        case 0x2c8820u: goto label_2c8820;
        case 0x2c8824u: goto label_2c8824;
        case 0x2c8828u: goto label_2c8828;
        case 0x2c882cu: goto label_2c882c;
        case 0x2c8830u: goto label_2c8830;
        case 0x2c8834u: goto label_2c8834;
        case 0x2c8838u: goto label_2c8838;
        case 0x2c883cu: goto label_2c883c;
        case 0x2c8840u: goto label_2c8840;
        case 0x2c8844u: goto label_2c8844;
        case 0x2c8848u: goto label_2c8848;
        case 0x2c884cu: goto label_2c884c;
        case 0x2c8850u: goto label_2c8850;
        case 0x2c8854u: goto label_2c8854;
        case 0x2c8858u: goto label_2c8858;
        case 0x2c885cu: goto label_2c885c;
        case 0x2c8860u: goto label_2c8860;
        case 0x2c8864u: goto label_2c8864;
        case 0x2c8868u: goto label_2c8868;
        case 0x2c886cu: goto label_2c886c;
        case 0x2c8870u: goto label_2c8870;
        case 0x2c8874u: goto label_2c8874;
        case 0x2c8878u: goto label_2c8878;
        case 0x2c887cu: goto label_2c887c;
        case 0x2c8880u: goto label_2c8880;
        case 0x2c8884u: goto label_2c8884;
        case 0x2c8888u: goto label_2c8888;
        case 0x2c888cu: goto label_2c888c;
        case 0x2c8890u: goto label_2c8890;
        case 0x2c8894u: goto label_2c8894;
        case 0x2c8898u: goto label_2c8898;
        case 0x2c889cu: goto label_2c889c;
        case 0x2c88a0u: goto label_2c88a0;
        case 0x2c88a4u: goto label_2c88a4;
        case 0x2c88a8u: goto label_2c88a8;
        case 0x2c88acu: goto label_2c88ac;
        case 0x2c88b0u: goto label_2c88b0;
        case 0x2c88b4u: goto label_2c88b4;
        case 0x2c88b8u: goto label_2c88b8;
        case 0x2c88bcu: goto label_2c88bc;
        case 0x2c88c0u: goto label_2c88c0;
        case 0x2c88c4u: goto label_2c88c4;
        case 0x2c88c8u: goto label_2c88c8;
        case 0x2c88ccu: goto label_2c88cc;
        case 0x2c88d0u: goto label_2c88d0;
        case 0x2c88d4u: goto label_2c88d4;
        case 0x2c88d8u: goto label_2c88d8;
        case 0x2c88dcu: goto label_2c88dc;
        case 0x2c88e0u: goto label_2c88e0;
        case 0x2c88e4u: goto label_2c88e4;
        case 0x2c88e8u: goto label_2c88e8;
        case 0x2c88ecu: goto label_2c88ec;
        case 0x2c88f0u: goto label_2c88f0;
        case 0x2c88f4u: goto label_2c88f4;
        case 0x2c88f8u: goto label_2c88f8;
        case 0x2c88fcu: goto label_2c88fc;
        case 0x2c8900u: goto label_2c8900;
        case 0x2c8904u: goto label_2c8904;
        case 0x2c8908u: goto label_2c8908;
        case 0x2c890cu: goto label_2c890c;
        case 0x2c8910u: goto label_2c8910;
        case 0x2c8914u: goto label_2c8914;
        case 0x2c8918u: goto label_2c8918;
        case 0x2c891cu: goto label_2c891c;
        case 0x2c8920u: goto label_2c8920;
        case 0x2c8924u: goto label_2c8924;
        case 0x2c8928u: goto label_2c8928;
        case 0x2c892cu: goto label_2c892c;
        case 0x2c8930u: goto label_2c8930;
        case 0x2c8934u: goto label_2c8934;
        case 0x2c8938u: goto label_2c8938;
        case 0x2c893cu: goto label_2c893c;
        case 0x2c8940u: goto label_2c8940;
        case 0x2c8944u: goto label_2c8944;
        case 0x2c8948u: goto label_2c8948;
        case 0x2c894cu: goto label_2c894c;
        case 0x2c8950u: goto label_2c8950;
        case 0x2c8954u: goto label_2c8954;
        case 0x2c8958u: goto label_2c8958;
        case 0x2c895cu: goto label_2c895c;
        case 0x2c8960u: goto label_2c8960;
        case 0x2c8964u: goto label_2c8964;
        case 0x2c8968u: goto label_2c8968;
        case 0x2c896cu: goto label_2c896c;
        case 0x2c8970u: goto label_2c8970;
        case 0x2c8974u: goto label_2c8974;
        case 0x2c8978u: goto label_2c8978;
        case 0x2c897cu: goto label_2c897c;
        case 0x2c8980u: goto label_2c8980;
        case 0x2c8984u: goto label_2c8984;
        case 0x2c8988u: goto label_2c8988;
        case 0x2c898cu: goto label_2c898c;
        case 0x2c8990u: goto label_2c8990;
        case 0x2c8994u: goto label_2c8994;
        case 0x2c8998u: goto label_2c8998;
        case 0x2c899cu: goto label_2c899c;
        case 0x2c89a0u: goto label_2c89a0;
        case 0x2c89a4u: goto label_2c89a4;
        case 0x2c89a8u: goto label_2c89a8;
        case 0x2c89acu: goto label_2c89ac;
        case 0x2c89b0u: goto label_2c89b0;
        case 0x2c89b4u: goto label_2c89b4;
        case 0x2c89b8u: goto label_2c89b8;
        case 0x2c89bcu: goto label_2c89bc;
        case 0x2c89c0u: goto label_2c89c0;
        case 0x2c89c4u: goto label_2c89c4;
        case 0x2c89c8u: goto label_2c89c8;
        case 0x2c89ccu: goto label_2c89cc;
        case 0x2c89d0u: goto label_2c89d0;
        case 0x2c89d4u: goto label_2c89d4;
        case 0x2c89d8u: goto label_2c89d8;
        case 0x2c89dcu: goto label_2c89dc;
        case 0x2c89e0u: goto label_2c89e0;
        case 0x2c89e4u: goto label_2c89e4;
        case 0x2c89e8u: goto label_2c89e8;
        case 0x2c89ecu: goto label_2c89ec;
        case 0x2c89f0u: goto label_2c89f0;
        case 0x2c89f4u: goto label_2c89f4;
        case 0x2c89f8u: goto label_2c89f8;
        case 0x2c89fcu: goto label_2c89fc;
        case 0x2c8a00u: goto label_2c8a00;
        case 0x2c8a04u: goto label_2c8a04;
        case 0x2c8a08u: goto label_2c8a08;
        case 0x2c8a0cu: goto label_2c8a0c;
        case 0x2c8a10u: goto label_2c8a10;
        case 0x2c8a14u: goto label_2c8a14;
        default: break;
    }

    ctx->pc = 0x2c8820u;

label_2c8820:
    // 0x2c8820: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c8820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2c8824:
    // 0x2c8824: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c8824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c8828:
    // 0x2c8828: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2c882c:
    // 0x2c882c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c882cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c8830:
    // 0x2c8830: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c8830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2c8834:
    // 0x2c8834: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2c8834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8838:
    // 0x2c8838: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c8838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c883c:
    // 0x2c883c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c883cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c8840:
    // 0x2c8840: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c8840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8844:
    // 0x2c8844: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c8844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c8848:
    // 0x2c8848: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2c8848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2c884c:
    // 0x2c884c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c8850:
    // 0x2c8850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c8854:
    // 0x2c8854: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2c8854u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_2c8858:
    // 0x2c8858: 0xc0a1214  jal         func_284850
label_2c885c:
    if (ctx->pc == 0x2C885Cu) {
        ctx->pc = 0x2C885Cu;
            // 0x2c885c: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->pc = 0x2C8860u;
        goto label_2c8860;
    }
    ctx->pc = 0x2C8858u;
    SET_GPR_U32(ctx, 31, 0x2C8860u);
    ctx->pc = 0x2C885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8858u;
            // 0x2c885c: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8860u; }
        if (ctx->pc != 0x2C8860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8860u; }
        if (ctx->pc != 0x2C8860u) { return; }
    }
    ctx->pc = 0x2C8860u;
label_2c8860:
    // 0x2c8860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c8860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8864:
    // 0x2c8864: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2c8864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2c8868:
    // 0x2c8868: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_2c886c:
    if (ctx->pc == 0x2C886Cu) {
        ctx->pc = 0x2C886Cu;
            // 0x2c886c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8870u;
        goto label_2c8870;
    }
    ctx->pc = 0x2C8868u;
    {
        const bool branch_taken_0x2c8868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8868u;
            // 0x2c886c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8868) {
            ctx->pc = 0x2C88B8u;
            goto label_2c88b8;
        }
    }
    ctx->pc = 0x2C8870u;
label_2c8870:
    // 0x2c8870: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c8870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8874:
    // 0x2c8874: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2c8874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2c8878:
    // 0x2c8878: 0x24550080  addiu       $s5, $v0, 0x80
    ctx->pc = 0x2c8878u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2c887c:
    // 0x2c887c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2c887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c8880:
    // 0x2c8880: 0x8c450318  lw          $a1, 0x318($v0)
    ctx->pc = 0x2c8880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 792)));
label_2c8884:
    // 0x2c8884: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
label_2c8888:
    if (ctx->pc == 0x2C8888u) {
        ctx->pc = 0x2C8888u;
            // 0x2c8888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C888Cu;
        goto label_2c888c;
    }
    ctx->pc = 0x2C8884u;
    {
        const bool branch_taken_0x2c8884 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2C8888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8884u;
            // 0x2c8888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8884) {
            ctx->pc = 0x2C88A8u;
            goto label_2c88a8;
        }
    }
    ctx->pc = 0x2C888Cu;
label_2c888c:
    // 0x2c888c: 0xc04ba14  jal         func_12E850
label_2c8890:
    if (ctx->pc == 0x2C8890u) {
        ctx->pc = 0x2C8890u;
            // 0x2c8890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8894u;
        goto label_2c8894;
    }
    ctx->pc = 0x2C888Cu;
    SET_GPR_U32(ctx, 31, 0x2C8894u);
    ctx->pc = 0x2C8890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C888Cu;
            // 0x2c8890: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8894u; }
        if (ctx->pc != 0x2C8894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8894u; }
        if (ctx->pc != 0x2C8894u) { return; }
    }
    ctx->pc = 0x2C8894u;
label_2c8894:
    // 0x2c8894: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2c8894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2c8898:
    // 0x2c8898: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2c8898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2c889c:
    // 0x2c889c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2c889cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2c88a0:
    // 0x2c88a0: 0x320f809  jalr        $t9
label_2c88a4:
    if (ctx->pc == 0x2C88A4u) {
        ctx->pc = 0x2C88A8u;
        goto label_2c88a8;
    }
    ctx->pc = 0x2C88A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C88A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C88A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C88A8u; }
            if (ctx->pc != 0x2C88A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C88A8u;
label_2c88a8:
    // 0x2c88a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c88a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c88ac:
    // 0x2c88ac: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x2c88acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2c88b0:
    // 0x2c88b0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2c88b4:
    if (ctx->pc == 0x2C88B4u) {
        ctx->pc = 0x2C88B4u;
            // 0x2c88b4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2C88B8u;
        goto label_2c88b8;
    }
    ctx->pc = 0x2C88B0u;
    {
        const bool branch_taken_0x2c88b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C88B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88B0u;
            // 0x2c88b4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88b0) {
            ctx->pc = 0x2C8874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8874;
        }
    }
    ctx->pc = 0x2C88B8u;
label_2c88b8:
    // 0x2c88b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c88b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c88bc:
    // 0x2c88bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c88bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c88c0:
    // 0x2c88c0: 0xc04ba14  jal         func_12E850
label_2c88c4:
    if (ctx->pc == 0x2C88C4u) {
        ctx->pc = 0x2C88C4u;
            // 0x2c88c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C88C8u;
        goto label_2c88c8;
    }
    ctx->pc = 0x2C88C0u;
    SET_GPR_U32(ctx, 31, 0x2C88C8u);
    ctx->pc = 0x2C88C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88C0u;
            // 0x2c88c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C88C8u; }
        if (ctx->pc != 0x2C88C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C88C8u; }
        if (ctx->pc != 0x2C88C8u) { return; }
    }
    ctx->pc = 0x2C88C8u;
label_2c88c8:
    // 0x2c88c8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2c88c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2c88cc:
    // 0x2c88cc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_2c88d0:
    if (ctx->pc == 0x2C88D0u) {
        ctx->pc = 0x2C88D0u;
            // 0x2c88d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C88D4u;
        goto label_2c88d4;
    }
    ctx->pc = 0x2C88CCu;
    {
        const bool branch_taken_0x2c88cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C88D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88CCu;
            // 0x2c88d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88cc) {
            ctx->pc = 0x2C8920u;
            goto label_2c8920;
        }
    }
    ctx->pc = 0x2C88D4u;
label_2c88d4:
    // 0x2c88d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c88d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c88d8:
    // 0x2c88d8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2c88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2c88dc:
    // 0x2c88dc: 0x24530080  addiu       $s3, $v0, 0x80
    ctx->pc = 0x2c88dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2c88e0:
    // 0x2c88e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c88e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c88e4:
    // 0x2c88e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2c88e8:
    if (ctx->pc == 0x2C88E8u) {
        ctx->pc = 0x2C88E8u;
            // 0x2c88e8: 0x26c224f0  addiu       $v0, $s6, 0x24F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 9456));
        ctx->pc = 0x2C88ECu;
        goto label_2c88ec;
    }
    ctx->pc = 0x2C88E4u;
    {
        const bool branch_taken_0x2c88e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C88E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88E4u;
            // 0x2c88e8: 0x26c224f0  addiu       $v0, $s6, 0x24F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 9456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88e4) {
            ctx->pc = 0x2C890Cu;
            goto label_2c890c;
        }
    }
    ctx->pc = 0x2C88ECu;
label_2c88ec:
    // 0x2c88ec: 0xac620cfc  sw          $v0, 0xCFC($v1)
    ctx->pc = 0x2c88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3324), GPR_U32(ctx, 2));
label_2c88f0:
    // 0x2c88f0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2c88f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c88f4:
    // 0x2c88f4: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2c88f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2c88f8:
    // 0x2c88f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2c88f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2c88fc:
    // 0x2c88fc: 0x320f809  jalr        $t9
label_2c8900:
    if (ctx->pc == 0x2C8900u) {
        ctx->pc = 0x2C8900u;
            // 0x2c8900: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8904u;
        goto label_2c8904;
    }
    ctx->pc = 0x2C88FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8904u);
        ctx->pc = 0x2C8900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C88FCu;
            // 0x2c8900: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8904u; }
            if (ctx->pc != 0x2C8904u) { return; }
        }
        }
    }
    ctx->pc = 0x2C8904u;
label_2c8904:
    // 0x2c8904: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2c8904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c8908:
    // 0x2c8908: 0xac400cfc  sw          $zero, 0xCFC($v0)
    ctx->pc = 0x2c8908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3324), GPR_U32(ctx, 0));
label_2c890c:
    // 0x2c890c: 0x0  nop
    ctx->pc = 0x2c890cu;
    // NOP
label_2c8910:
    // 0x2c8910: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2c8910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2c8914:
    // 0x2c8914: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x2c8914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2c8918:
    // 0x2c8918: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2c891c:
    if (ctx->pc == 0x2C891Cu) {
        ctx->pc = 0x2C891Cu;
            // 0x2c891c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2C8920u;
        goto label_2c8920;
    }
    ctx->pc = 0x2C8918u;
    {
        const bool branch_taken_0x2c8918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C891Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8918u;
            // 0x2c891c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8918) {
            ctx->pc = 0x2C88D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c88d8;
        }
    }
    ctx->pc = 0x2C8920u;
label_2c8920:
    // 0x2c8920: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c8920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2c8924:
    // 0x2c8924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8928:
    // 0x2c8928: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c8928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c892c:
    // 0x2c892c: 0xc04b414  jal         func_12D050
label_2c8930:
    if (ctx->pc == 0x2C8930u) {
        ctx->pc = 0x2C8930u;
            // 0x2c8930: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->pc = 0x2C8934u;
        goto label_2c8934;
    }
    ctx->pc = 0x2C892Cu;
    SET_GPR_U32(ctx, 31, 0x2C8934u);
    ctx->pc = 0x2C8930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C892Cu;
            // 0x2c8930: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8934u; }
        if (ctx->pc != 0x2C8934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8934u; }
        if (ctx->pc != 0x2C8934u) { return; }
    }
    ctx->pc = 0x2C8934u;
label_2c8934:
    // 0x2c8934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8938:
    // 0x2c8938: 0x26c424f0  addiu       $a0, $s6, 0x24F0
    ctx->pc = 0x2c8938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 9456));
label_2c893c:
    // 0x2c893c: 0xc0610cc  jal         func_184330
label_2c8940:
    if (ctx->pc == 0x2C8940u) {
        ctx->pc = 0x2C8940u;
            // 0x2c8940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8944u;
        goto label_2c8944;
    }
    ctx->pc = 0x2C893Cu;
    SET_GPR_U32(ctx, 31, 0x2C8944u);
    ctx->pc = 0x2C8940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C893Cu;
            // 0x2c8940: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184330u;
    if (runtime->hasFunction(0x184330u)) {
        auto targetFn = runtime->lookupFunction(0x184330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8944u; }
        if (ctx->pc != 0x2C8944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__11CFireRasterFP10mgCTexture_0x184330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8944u; }
        if (ctx->pc != 0x2C8944u) { return; }
    }
    ctx->pc = 0x2C8944u;
label_2c8944:
    // 0x2c8944: 0xc04b120  jal         func_12C480
label_2c8948:
    if (ctx->pc == 0x2C8948u) {
        ctx->pc = 0x2C8948u;
            // 0x2c8948: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2C894Cu;
        goto label_2c894c;
    }
    ctx->pc = 0x2C8944u;
    SET_GPR_U32(ctx, 31, 0x2C894Cu);
    ctx->pc = 0x2C8948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8944u;
            // 0x2c8948: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C894Cu; }
        if (ctx->pc != 0x2C894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C894Cu; }
        if (ctx->pc != 0x2C894Cu) { return; }
    }
    ctx->pc = 0x2C894Cu;
label_2c894c:
    // 0x2c894c: 0xc0510c0  jal         func_144300
label_2c8950:
    if (ctx->pc == 0x2C8950u) {
        ctx->pc = 0x2C8950u;
            // 0x2c8950: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2C8954u;
        goto label_2c8954;
    }
    ctx->pc = 0x2C894Cu;
    SET_GPR_U32(ctx, 31, 0x2C8954u);
    ctx->pc = 0x2C8950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C894Cu;
            // 0x2c8950: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8954u; }
        if (ctx->pc != 0x2C8954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8954u; }
        if (ctx->pc != 0x2C8954u) { return; }
    }
    ctx->pc = 0x2C8954u;
label_2c8954:
    // 0x2c8954: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2c8954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_2c8958:
    // 0x2c8958: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2c8958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2c895c:
    // 0x2c895c: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x2c895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_2c8960:
    // 0x2c8960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8964:
    // 0x2c8964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c8964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8968:
    // 0x2c8968: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c8968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2c896c:
    // 0x2c896c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c8970:
    // 0x2c8970: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2c8970u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2c8974:
    // 0x2c8974: 0xc04f8e4  jal         func_13E390
label_2c8978:
    if (ctx->pc == 0x2C8978u) {
        ctx->pc = 0x2C8978u;
            // 0x2c8978: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2C897Cu;
        goto label_2c897c;
    }
    ctx->pc = 0x2C8974u;
    SET_GPR_U32(ctx, 31, 0x2C897Cu);
    ctx->pc = 0x2C8978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8974u;
            // 0x2c8978: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C897Cu; }
        if (ctx->pc != 0x2C897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C897Cu; }
        if (ctx->pc != 0x2C897Cu) { return; }
    }
    ctx->pc = 0x2C897Cu;
label_2c897c:
    // 0x2c897c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c897cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8980:
    // 0x2c8980: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2c8980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2c8984:
    // 0x2c8984: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2c8984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2c8988:
    // 0x2c8988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c8988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c898c:
    // 0x2c898c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c898cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8990:
    // 0x2c8990: 0xc051158  jal         func_144560
label_2c8994:
    if (ctx->pc == 0x2C8994u) {
        ctx->pc = 0x2C8994u;
            // 0x2c8994: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8998u;
        goto label_2c8998;
    }
    ctx->pc = 0x2C8990u;
    SET_GPR_U32(ctx, 31, 0x2C8998u);
    ctx->pc = 0x2C8994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8990u;
            // 0x2c8994: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144560u;
    if (runtime->hasFunction(0x144560u)) {
        auto targetFn = runtime->lookupFunction(0x144560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8998u; }
        if (ctx->pc != 0x2C8998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTextureiii_0x144560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8998u; }
        if (ctx->pc != 0x2C8998u) { return; }
    }
    ctx->pc = 0x2C8998u;
label_2c8998:
    // 0x2c8998: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2c8998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2c899c:
    // 0x2c899c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_2c89a0:
    if (ctx->pc == 0x2C89A0u) {
        ctx->pc = 0x2C89A0u;
            // 0x2c89a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C89A4u;
        goto label_2c89a4;
    }
    ctx->pc = 0x2C899Cu;
    {
        const bool branch_taken_0x2c899c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C89A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C899Cu;
            // 0x2c89a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c899c) {
            ctx->pc = 0x2C89F0u;
            goto label_2c89f0;
        }
    }
    ctx->pc = 0x2C89A4u;
label_2c89a4:
    // 0x2c89a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c89a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c89a8:
    // 0x2c89a8: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x2c89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2c89ac:
    // 0x2c89ac: 0x24730080  addiu       $s3, $v1, 0x80
    ctx->pc = 0x2c89acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2c89b0:
    // 0x2c89b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c89b4:
    // 0x2c89b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2c89b8:
    if (ctx->pc == 0x2C89B8u) {
        ctx->pc = 0x2C89BCu;
        goto label_2c89bc;
    }
    ctx->pc = 0x2C89B4u;
    {
        const bool branch_taken_0x2c89b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c89b4) {
            ctx->pc = 0x2C89E0u;
            goto label_2c89e0;
        }
    }
    ctx->pc = 0x2C89BCu;
label_2c89bc:
    // 0x2c89bc: 0x26c224f0  addiu       $v0, $s6, 0x24F0
    ctx->pc = 0x2c89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 9456));
label_2c89c0:
    // 0x2c89c0: 0xac620cfc  sw          $v0, 0xCFC($v1)
    ctx->pc = 0x2c89c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3324), GPR_U32(ctx, 2));
label_2c89c4:
    // 0x2c89c4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2c89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c89c8:
    // 0x2c89c8: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2c89c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2c89cc:
    // 0x2c89cc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2c89ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2c89d0:
    // 0x2c89d0: 0x320f809  jalr        $t9
label_2c89d4:
    if (ctx->pc == 0x2C89D4u) {
        ctx->pc = 0x2C89D8u;
        goto label_2c89d8;
    }
    ctx->pc = 0x2C89D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C89D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C89D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C89D8u; }
            if (ctx->pc != 0x2C89D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C89D8u;
label_2c89d8:
    // 0x2c89d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c89d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2c89dc:
    // 0x2c89dc: 0xac600cfc  sw          $zero, 0xCFC($v1)
    ctx->pc = 0x2c89dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3324), GPR_U32(ctx, 0));
label_2c89e0:
    // 0x2c89e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c89e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c89e4:
    // 0x2c89e4: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x2c89e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2c89e8:
    // 0x2c89e8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_2c89ec:
    if (ctx->pc == 0x2C89ECu) {
        ctx->pc = 0x2C89ECu;
            // 0x2c89ec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2C89F0u;
        goto label_2c89f0;
    }
    ctx->pc = 0x2C89E8u;
    {
        const bool branch_taken_0x2c89e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C89ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C89E8u;
            // 0x2c89ec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89e8) {
            ctx->pc = 0x2C89A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c89a8;
        }
    }
    ctx->pc = 0x2C89F0u;
label_2c89f0:
    // 0x2c89f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c89f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2c89f4:
    // 0x2c89f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c89f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c89f8:
    // 0x2c89f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c89f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c89fc:
    // 0x2c89fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c89fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c8a00:
    // 0x2c8a00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c8a00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c8a04:
    // 0x2c8a04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8a04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8a08:
    // 0x2c8a08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8a0c:
    // 0x2c8a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8a10:
    // 0x2c8a10: 0x3e00008  jr          $ra
label_2c8a14:
    if (ctx->pc == 0x2C8A14u) {
        ctx->pc = 0x2C8A14u;
            // 0x2c8a14: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2C8A18u;
        goto label_fallthrough_0x2c8a10;
    }
    ctx->pc = 0x2C8A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8A10u;
            // 0x2c8a14: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c8a10:
    ctx->pc = 0x2C8A18u;
}
