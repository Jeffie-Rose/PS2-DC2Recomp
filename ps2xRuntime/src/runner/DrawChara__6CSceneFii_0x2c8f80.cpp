#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawChara__6CSceneFii
// Address: 0x2c8f80 - 0x2c9278
void DrawChara__6CSceneFii_0x2c8f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawChara__6CSceneFii_0x2c8f80");
#endif

    switch (ctx->pc) {
        case 0x2c8f80u: goto label_2c8f80;
        case 0x2c8f84u: goto label_2c8f84;
        case 0x2c8f88u: goto label_2c8f88;
        case 0x2c8f8cu: goto label_2c8f8c;
        case 0x2c8f90u: goto label_2c8f90;
        case 0x2c8f94u: goto label_2c8f94;
        case 0x2c8f98u: goto label_2c8f98;
        case 0x2c8f9cu: goto label_2c8f9c;
        case 0x2c8fa0u: goto label_2c8fa0;
        case 0x2c8fa4u: goto label_2c8fa4;
        case 0x2c8fa8u: goto label_2c8fa8;
        case 0x2c8facu: goto label_2c8fac;
        case 0x2c8fb0u: goto label_2c8fb0;
        case 0x2c8fb4u: goto label_2c8fb4;
        case 0x2c8fb8u: goto label_2c8fb8;
        case 0x2c8fbcu: goto label_2c8fbc;
        case 0x2c8fc0u: goto label_2c8fc0;
        case 0x2c8fc4u: goto label_2c8fc4;
        case 0x2c8fc8u: goto label_2c8fc8;
        case 0x2c8fccu: goto label_2c8fcc;
        case 0x2c8fd0u: goto label_2c8fd0;
        case 0x2c8fd4u: goto label_2c8fd4;
        case 0x2c8fd8u: goto label_2c8fd8;
        case 0x2c8fdcu: goto label_2c8fdc;
        case 0x2c8fe0u: goto label_2c8fe0;
        case 0x2c8fe4u: goto label_2c8fe4;
        case 0x2c8fe8u: goto label_2c8fe8;
        case 0x2c8fecu: goto label_2c8fec;
        case 0x2c8ff0u: goto label_2c8ff0;
        case 0x2c8ff4u: goto label_2c8ff4;
        case 0x2c8ff8u: goto label_2c8ff8;
        case 0x2c8ffcu: goto label_2c8ffc;
        case 0x2c9000u: goto label_2c9000;
        case 0x2c9004u: goto label_2c9004;
        case 0x2c9008u: goto label_2c9008;
        case 0x2c900cu: goto label_2c900c;
        case 0x2c9010u: goto label_2c9010;
        case 0x2c9014u: goto label_2c9014;
        case 0x2c9018u: goto label_2c9018;
        case 0x2c901cu: goto label_2c901c;
        case 0x2c9020u: goto label_2c9020;
        case 0x2c9024u: goto label_2c9024;
        case 0x2c9028u: goto label_2c9028;
        case 0x2c902cu: goto label_2c902c;
        case 0x2c9030u: goto label_2c9030;
        case 0x2c9034u: goto label_2c9034;
        case 0x2c9038u: goto label_2c9038;
        case 0x2c903cu: goto label_2c903c;
        case 0x2c9040u: goto label_2c9040;
        case 0x2c9044u: goto label_2c9044;
        case 0x2c9048u: goto label_2c9048;
        case 0x2c904cu: goto label_2c904c;
        case 0x2c9050u: goto label_2c9050;
        case 0x2c9054u: goto label_2c9054;
        case 0x2c9058u: goto label_2c9058;
        case 0x2c905cu: goto label_2c905c;
        case 0x2c9060u: goto label_2c9060;
        case 0x2c9064u: goto label_2c9064;
        case 0x2c9068u: goto label_2c9068;
        case 0x2c906cu: goto label_2c906c;
        case 0x2c9070u: goto label_2c9070;
        case 0x2c9074u: goto label_2c9074;
        case 0x2c9078u: goto label_2c9078;
        case 0x2c907cu: goto label_2c907c;
        case 0x2c9080u: goto label_2c9080;
        case 0x2c9084u: goto label_2c9084;
        case 0x2c9088u: goto label_2c9088;
        case 0x2c908cu: goto label_2c908c;
        case 0x2c9090u: goto label_2c9090;
        case 0x2c9094u: goto label_2c9094;
        case 0x2c9098u: goto label_2c9098;
        case 0x2c909cu: goto label_2c909c;
        case 0x2c90a0u: goto label_2c90a0;
        case 0x2c90a4u: goto label_2c90a4;
        case 0x2c90a8u: goto label_2c90a8;
        case 0x2c90acu: goto label_2c90ac;
        case 0x2c90b0u: goto label_2c90b0;
        case 0x2c90b4u: goto label_2c90b4;
        case 0x2c90b8u: goto label_2c90b8;
        case 0x2c90bcu: goto label_2c90bc;
        case 0x2c90c0u: goto label_2c90c0;
        case 0x2c90c4u: goto label_2c90c4;
        case 0x2c90c8u: goto label_2c90c8;
        case 0x2c90ccu: goto label_2c90cc;
        case 0x2c90d0u: goto label_2c90d0;
        case 0x2c90d4u: goto label_2c90d4;
        case 0x2c90d8u: goto label_2c90d8;
        case 0x2c90dcu: goto label_2c90dc;
        case 0x2c90e0u: goto label_2c90e0;
        case 0x2c90e4u: goto label_2c90e4;
        case 0x2c90e8u: goto label_2c90e8;
        case 0x2c90ecu: goto label_2c90ec;
        case 0x2c90f0u: goto label_2c90f0;
        case 0x2c90f4u: goto label_2c90f4;
        case 0x2c90f8u: goto label_2c90f8;
        case 0x2c90fcu: goto label_2c90fc;
        case 0x2c9100u: goto label_2c9100;
        case 0x2c9104u: goto label_2c9104;
        case 0x2c9108u: goto label_2c9108;
        case 0x2c910cu: goto label_2c910c;
        case 0x2c9110u: goto label_2c9110;
        case 0x2c9114u: goto label_2c9114;
        case 0x2c9118u: goto label_2c9118;
        case 0x2c911cu: goto label_2c911c;
        case 0x2c9120u: goto label_2c9120;
        case 0x2c9124u: goto label_2c9124;
        case 0x2c9128u: goto label_2c9128;
        case 0x2c912cu: goto label_2c912c;
        case 0x2c9130u: goto label_2c9130;
        case 0x2c9134u: goto label_2c9134;
        case 0x2c9138u: goto label_2c9138;
        case 0x2c913cu: goto label_2c913c;
        case 0x2c9140u: goto label_2c9140;
        case 0x2c9144u: goto label_2c9144;
        case 0x2c9148u: goto label_2c9148;
        case 0x2c914cu: goto label_2c914c;
        case 0x2c9150u: goto label_2c9150;
        case 0x2c9154u: goto label_2c9154;
        case 0x2c9158u: goto label_2c9158;
        case 0x2c915cu: goto label_2c915c;
        case 0x2c9160u: goto label_2c9160;
        case 0x2c9164u: goto label_2c9164;
        case 0x2c9168u: goto label_2c9168;
        case 0x2c916cu: goto label_2c916c;
        case 0x2c9170u: goto label_2c9170;
        case 0x2c9174u: goto label_2c9174;
        case 0x2c9178u: goto label_2c9178;
        case 0x2c917cu: goto label_2c917c;
        case 0x2c9180u: goto label_2c9180;
        case 0x2c9184u: goto label_2c9184;
        case 0x2c9188u: goto label_2c9188;
        case 0x2c918cu: goto label_2c918c;
        case 0x2c9190u: goto label_2c9190;
        case 0x2c9194u: goto label_2c9194;
        case 0x2c9198u: goto label_2c9198;
        case 0x2c919cu: goto label_2c919c;
        case 0x2c91a0u: goto label_2c91a0;
        case 0x2c91a4u: goto label_2c91a4;
        case 0x2c91a8u: goto label_2c91a8;
        case 0x2c91acu: goto label_2c91ac;
        case 0x2c91b0u: goto label_2c91b0;
        case 0x2c91b4u: goto label_2c91b4;
        case 0x2c91b8u: goto label_2c91b8;
        case 0x2c91bcu: goto label_2c91bc;
        case 0x2c91c0u: goto label_2c91c0;
        case 0x2c91c4u: goto label_2c91c4;
        case 0x2c91c8u: goto label_2c91c8;
        case 0x2c91ccu: goto label_2c91cc;
        case 0x2c91d0u: goto label_2c91d0;
        case 0x2c91d4u: goto label_2c91d4;
        case 0x2c91d8u: goto label_2c91d8;
        case 0x2c91dcu: goto label_2c91dc;
        case 0x2c91e0u: goto label_2c91e0;
        case 0x2c91e4u: goto label_2c91e4;
        case 0x2c91e8u: goto label_2c91e8;
        case 0x2c91ecu: goto label_2c91ec;
        case 0x2c91f0u: goto label_2c91f0;
        case 0x2c91f4u: goto label_2c91f4;
        case 0x2c91f8u: goto label_2c91f8;
        case 0x2c91fcu: goto label_2c91fc;
        case 0x2c9200u: goto label_2c9200;
        case 0x2c9204u: goto label_2c9204;
        case 0x2c9208u: goto label_2c9208;
        case 0x2c920cu: goto label_2c920c;
        case 0x2c9210u: goto label_2c9210;
        case 0x2c9214u: goto label_2c9214;
        case 0x2c9218u: goto label_2c9218;
        case 0x2c921cu: goto label_2c921c;
        case 0x2c9220u: goto label_2c9220;
        case 0x2c9224u: goto label_2c9224;
        case 0x2c9228u: goto label_2c9228;
        case 0x2c922cu: goto label_2c922c;
        case 0x2c9230u: goto label_2c9230;
        case 0x2c9234u: goto label_2c9234;
        case 0x2c9238u: goto label_2c9238;
        case 0x2c923cu: goto label_2c923c;
        case 0x2c9240u: goto label_2c9240;
        case 0x2c9244u: goto label_2c9244;
        case 0x2c9248u: goto label_2c9248;
        case 0x2c924cu: goto label_2c924c;
        case 0x2c9250u: goto label_2c9250;
        case 0x2c9254u: goto label_2c9254;
        case 0x2c9258u: goto label_2c9258;
        case 0x2c925cu: goto label_2c925c;
        case 0x2c9260u: goto label_2c9260;
        case 0x2c9264u: goto label_2c9264;
        case 0x2c9268u: goto label_2c9268;
        case 0x2c926cu: goto label_2c926c;
        case 0x2c9270u: goto label_2c9270;
        case 0x2c9274u: goto label_2c9274;
        default: break;
    }

    ctx->pc = 0x2c8f80u;

label_2c8f80:
    // 0x2c8f80: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x2c8f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
label_2c8f84:
    // 0x2c8f84: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2c8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2c8f88:
    // 0x2c8f88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2c8f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2c8f8c:
    // 0x2c8f8c: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x2c8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_2c8f90:
    // 0x2c8f90: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2c8f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2c8f94:
    // 0x2c8f94: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2c8f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2c8f98:
    // 0x2c8f98: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c8f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2c8f9c:
    // 0x2c8f9c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c8f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2c8fa0:
    // 0x2c8fa0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c8fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2c8fa4:
    // 0x2c8fa4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c8fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2c8fa8:
    // 0x2c8fa8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c8fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8fac:
    // 0x2c8fac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c8facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2c8fb0:
    // 0x2c8fb0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c8fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c8fb4:
    // 0x2c8fb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c8fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c8fb8:
    // 0x2c8fb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c8fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8fbc:
    // 0x2c8fbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c8fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2c8fc0:
    // 0x2c8fc0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2c8fc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2c8fc4:
    // 0x2c8fc4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c8fc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2c8fc8:
    // 0x2c8fc8: 0xc0a0ed8  jal         func_283B60
label_2c8fcc:
    if (ctx->pc == 0x2C8FCCu) {
        ctx->pc = 0x2C8FCCu;
            // 0x2c8fcc: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x2C8FD0u;
        goto label_2c8fd0;
    }
    ctx->pc = 0x2C8FC8u;
    SET_GPR_U32(ctx, 31, 0x2C8FD0u);
    ctx->pc = 0x2C8FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8FC8u;
            // 0x2c8fcc: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8FD0u; }
        if (ctx->pc != 0x2C8FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8FD0u; }
        if (ctx->pc != 0x2C8FD0u) { return; }
    }
    ctx->pc = 0x2C8FD0u;
label_2c8fd0:
    // 0x2c8fd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8fd4:
    // 0x2c8fd4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2c8fd8:
    if (ctx->pc == 0x2C8FD8u) {
        ctx->pc = 0x2C8FD8u;
            // 0x2c8fd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FDCu;
        goto label_2c8fdc;
    }
    ctx->pc = 0x2C8FD4u;
    {
        const bool branch_taken_0x2c8fd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8FD4u;
            // 0x2c8fd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fd4) {
            ctx->pc = 0x2C8FE4u;
            goto label_2c8fe4;
        }
    }
    ctx->pc = 0x2C8FDCu;
label_2c8fdc:
    // 0x2c8fdc: 0x10000098  b           . + 4 + (0x98 << 2)
label_2c8fe0:
    if (ctx->pc == 0x2C8FE0u) {
        ctx->pc = 0x2C8FE0u;
            // 0x2c8fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FE4u;
        goto label_2c8fe4;
    }
    ctx->pc = 0x2C8FDCu;
    {
        const bool branch_taken_0x2c8fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8FDCu;
            // 0x2c8fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fdc) {
            ctx->pc = 0x2C9240u;
            goto label_2c9240;
        }
    }
    ctx->pc = 0x2C8FE4u;
label_2c8fe4:
    // 0x2c8fe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8fe8:
    // 0x2c8fe8: 0xc0a11f0  jal         func_2847C0
label_2c8fec:
    if (ctx->pc == 0x2C8FECu) {
        ctx->pc = 0x2C8FECu;
            // 0x2c8fec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FF0u;
        goto label_2c8ff0;
    }
    ctx->pc = 0x2C8FE8u;
    SET_GPR_U32(ctx, 31, 0x2C8FF0u);
    ctx->pc = 0x2C8FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8FE8u;
            // 0x2c8fec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2847C0u;
    if (runtime->hasFunction(0x2847C0u)) {
        auto targetFn = runtime->lookupFunction(0x2847C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8FF0u; }
        if (ctx->pc != 0x2C8FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStatus__6CSceneFii_0x2847c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8FF0u; }
        if (ctx->pc != 0x2C8FF0u) { return; }
    }
    ctx->pc = 0x2C8FF0u;
label_2c8ff0:
    // 0x2c8ff0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c8ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c8ff4:
    // 0x2c8ff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c8ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8ff8:
    // 0x2c8ff8: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x2c8ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_2c8ffc:
    // 0x2c8ffc: 0x320f809  jalr        $t9
label_2c9000:
    if (ctx->pc == 0x2C9000u) {
        ctx->pc = 0x2C9000u;
            // 0x2c9000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9004u;
        goto label_2c9004;
    }
    ctx->pc = 0x2C8FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9004u);
        ctx->pc = 0x2C9000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8FFCu;
            // 0x2c9000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9004u; }
            if (ctx->pc != 0x2C9004u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9004u;
label_2c9004:
    // 0x2c9004: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2c9004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_2c9008:
    // 0x2c9008: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c9008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c900c:
    // 0x2c900c: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x2c900cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_2c9010:
    // 0x2c9010: 0x320f809  jalr        $t9
label_2c9014:
    if (ctx->pc == 0x2C9014u) {
        ctx->pc = 0x2C9014u;
            // 0x2c9014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9018u;
        goto label_2c9018;
    }
    ctx->pc = 0x2C9010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9018u);
        ctx->pc = 0x2C9014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9010u;
            // 0x2c9014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9018u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9018u; }
            if (ctx->pc != 0x2C9018u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9018u;
label_2c9018:
    // 0x2c9018: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c9018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c901c:
    // 0x2c901c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c901cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2c9020:
    // 0x2c9020: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x2c9020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_2c9024:
    // 0x2c9024: 0x320f809  jalr        $t9
label_2c9028:
    if (ctx->pc == 0x2C9028u) {
        ctx->pc = 0x2C9028u;
            // 0x2c9028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C902Cu;
        goto label_2c902c;
    }
    ctx->pc = 0x2C9024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C902Cu);
        ctx->pc = 0x2C9028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9024u;
            // 0x2c9028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C902Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C902Cu; }
            if (ctx->pc != 0x2C902Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C902Cu;
label_2c902c:
    // 0x2c902c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c902cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2c9030:
    // 0x2c9030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c9034:
    // 0x2c9034: 0xc0b22dc  jal         func_2C8B70
label_2c9038:
    if (ctx->pc == 0x2C9038u) {
        ctx->pc = 0x2C9038u;
            // 0x2c9038: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C903Cu;
        goto label_2c903c;
    }
    ctx->pc = 0x2C9034u;
    SET_GPR_U32(ctx, 31, 0x2C903Cu);
    ctx->pc = 0x2C9038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9034u;
            // 0x2c9038: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C903Cu; }
        if (ctx->pc != 0x2C903Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C903Cu; }
        if (ctx->pc != 0x2C903Cu) { return; }
    }
    ctx->pc = 0x2C903Cu;
label_2c903c:
    // 0x2c903c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c9040:
    if (ctx->pc == 0x2C9040u) {
        ctx->pc = 0x2C9040u;
            // 0x2c9040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9044u;
        goto label_2c9044;
    }
    ctx->pc = 0x2C903Cu;
    {
        const bool branch_taken_0x2c903c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C903Cu;
            // 0x2c9040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c903c) {
            ctx->pc = 0x2C904Cu;
            goto label_2c904c;
        }
    }
    ctx->pc = 0x2C9044u;
label_2c9044:
    // 0x2c9044: 0x1000007e  b           . + 4 + (0x7E << 2)
label_2c9048:
    if (ctx->pc == 0x2C9048u) {
        ctx->pc = 0x2C9048u;
            // 0x2c9048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C904Cu;
        goto label_2c904c;
    }
    ctx->pc = 0x2C9044u;
    {
        const bool branch_taken_0x2c9044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9044u;
            // 0x2c9048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9044) {
            ctx->pc = 0x2C9240u;
            goto label_2c9240;
        }
    }
    ctx->pc = 0x2C904Cu;
label_2c904c:
    // 0x2c904c: 0xc0a1240  jal         func_284900
label_2c9050:
    if (ctx->pc == 0x2C9050u) {
        ctx->pc = 0x2C9050u;
            // 0x2c9050: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9054u;
        goto label_2c9054;
    }
    ctx->pc = 0x2C904Cu;
    SET_GPR_U32(ctx, 31, 0x2C9054u);
    ctx->pc = 0x2C9050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C904Cu;
            // 0x2c9050: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9054u; }
        if (ctx->pc != 0x2C9054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9054u; }
        if (ctx->pc != 0x2C9054u) { return; }
    }
    ctx->pc = 0x2C9054u;
label_2c9054:
    // 0x2c9054: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c9054u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9058:
    // 0x2c9058: 0x1ee00003  bgtz        $s7, . + 4 + (0x3 << 2)
label_2c905c:
    if (ctx->pc == 0x2C905Cu) {
        ctx->pc = 0x2C905Cu;
            // 0x2c905c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C9060u;
        goto label_2c9060;
    }
    ctx->pc = 0x2C9058u;
    {
        const bool branch_taken_0x2c9058 = (GPR_S32(ctx, 23) > 0);
        ctx->pc = 0x2C905Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9058u;
            // 0x2c905c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9058) {
            ctx->pc = 0x2C9068u;
            goto label_2c9068;
        }
    }
    ctx->pc = 0x2C9060u;
label_2c9060:
    // 0x2c9060: 0x10000077  b           . + 4 + (0x77 << 2)
label_2c9064:
    if (ctx->pc == 0x2C9064u) {
        ctx->pc = 0x2C9064u;
            // 0x2c9064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9068u;
        goto label_2c9068;
    }
    ctx->pc = 0x2C9060u;
    {
        const bool branch_taken_0x2c9060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9060u;
            // 0x2c9064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9060) {
            ctx->pc = 0x2C9240u;
            goto label_2c9240;
        }
    }
    ctx->pc = 0x2C9068u;
label_2c9068:
    // 0x2c9068: 0xc050dc8  jal         func_143720
label_2c906c:
    if (ctx->pc == 0x2C906Cu) {
        ctx->pc = 0x2C906Cu;
            // 0x2c906c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9070u;
        goto label_2c9070;
    }
    ctx->pc = 0x2C9068u;
    SET_GPR_U32(ctx, 31, 0x2C9070u);
    ctx->pc = 0x2C906Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9068u;
            // 0x2c906c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9070u; }
        if (ctx->pc != 0x2C9070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9070u; }
        if (ctx->pc != 0x2C9070u) { return; }
    }
    ctx->pc = 0x2C9070u;
label_2c9070:
    // 0x2c9070: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x2c9070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_2c9074:
    // 0x2c9074: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
label_2c9078:
    if (ctx->pc == 0x2C9078u) {
        ctx->pc = 0x2C9078u;
            // 0x2c9078: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C907Cu;
        goto label_2c907c;
    }
    ctx->pc = 0x2C9074u;
    {
        const bool branch_taken_0x2c9074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9074u;
            // 0x2c9078: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9074) {
            ctx->pc = 0x2C9164u;
            goto label_2c9164;
        }
    }
    ctx->pc = 0x2C907Cu;
label_2c907c:
    // 0x2c907c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c907cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c9080:
    // 0x2c9080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c9080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c9084:
    // 0x2c9084: 0xc0a11f0  jal         func_2847C0
label_2c9088:
    if (ctx->pc == 0x2C9088u) {
        ctx->pc = 0x2C9088u;
            // 0x2c9088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C908Cu;
        goto label_2c908c;
    }
    ctx->pc = 0x2C9084u;
    SET_GPR_U32(ctx, 31, 0x2C908Cu);
    ctx->pc = 0x2C9088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9084u;
            // 0x2c9088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2847C0u;
    if (runtime->hasFunction(0x2847C0u)) {
        auto targetFn = runtime->lookupFunction(0x2847C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C908Cu; }
        if (ctx->pc != 0x2C908Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStatus__6CSceneFii_0x2847c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C908Cu; }
        if (ctx->pc != 0x2C908Cu) { return; }
    }
    ctx->pc = 0x2C908Cu;
label_2c908c:
    // 0x2c908c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2c908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2c9090:
    // 0x2c9090: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2c9094:
    if (ctx->pc == 0x2C9094u) {
        ctx->pc = 0x2C9094u;
            // 0x2c9094: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9098u;
        goto label_2c9098;
    }
    ctx->pc = 0x2C9090u;
    {
        const bool branch_taken_0x2c9090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9090u;
            // 0x2c9094: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9090) {
            ctx->pc = 0x2C90D4u;
            goto label_2c90d4;
        }
    }
    ctx->pc = 0x2C9098u;
label_2c9098:
    // 0x2c9098: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2c9098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2c909c:
    // 0x2c909c: 0xc050dd8  jal         func_143760
label_2c90a0:
    if (ctx->pc == 0x2C90A0u) {
        ctx->pc = 0x2C90A0u;
            // 0x2c90a0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2C90A4u;
        goto label_2c90a4;
    }
    ctx->pc = 0x2C909Cu;
    SET_GPR_U32(ctx, 31, 0x2C90A4u);
    ctx->pc = 0x2C90A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C909Cu;
            // 0x2c90a0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143760u;
    if (runtime->hasFunction(0x143760u)) {
        auto targetFn = runtime->lookupFunction(0x143760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90A4u; }
        if (ctx->pc != 0x2C90A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetLight__FPA4_fPA4_f_0x143760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90A4u; }
        if (ctx->pc != 0x2C90A4u) { return; }
    }
    ctx->pc = 0x2C90A4u;
label_2c90a4:
    // 0x2c90a4: 0xc050df4  jal         func_1437D0
label_2c90a8:
    if (ctx->pc == 0x2C90A8u) {
        ctx->pc = 0x2C90A8u;
            // 0x2c90a8: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2C90ACu;
        goto label_2c90ac;
    }
    ctx->pc = 0x2C90A4u;
    SET_GPR_U32(ctx, 31, 0x2C90ACu);
    ctx->pc = 0x2C90A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90A4u;
            // 0x2c90a8: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90ACu; }
        if (ctx->pc != 0x2C90ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90ACu; }
        if (ctx->pc != 0x2C90ACu) { return; }
    }
    ctx->pc = 0x2C90ACu;
label_2c90ac:
    // 0x2c90ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c90acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c90b0:
    // 0x2c90b0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2c90b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2c90b4:
    // 0x2c90b4: 0xc0b235c  jal         func_2C8D70
label_2c90b8:
    if (ctx->pc == 0x2C90B8u) {
        ctx->pc = 0x2C90B8u;
            // 0x2c90b8: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2C90BCu;
        goto label_2c90bc;
    }
    ctx->pc = 0x2C90B4u;
    SET_GPR_U32(ctx, 31, 0x2C90BCu);
    ctx->pc = 0x2C90B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90B4u;
            // 0x2c90b8: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8D70u;
    if (runtime->hasFunction(0x2C8D70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90BCu; }
        if (ctx->pc != 0x2C90BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaLighting__6CSceneFPA4_fPf_0x2c8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90BCu; }
        if (ctx->pc != 0x2C90BCu) { return; }
    }
    ctx->pc = 0x2C90BCu;
label_2c90bc:
    // 0x2c90bc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2c90bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2c90c0:
    // 0x2c90c0: 0xc050dd0  jal         func_143740
label_2c90c4:
    if (ctx->pc == 0x2C90C4u) {
        ctx->pc = 0x2C90C4u;
            // 0x2c90c4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2C90C8u;
        goto label_2c90c8;
    }
    ctx->pc = 0x2C90C0u;
    SET_GPR_U32(ctx, 31, 0x2C90C8u);
    ctx->pc = 0x2C90C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90C0u;
            // 0x2c90c4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90C8u; }
        if (ctx->pc != 0x2C90C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90C8u; }
        if (ctx->pc != 0x2C90C8u) { return; }
    }
    ctx->pc = 0x2C90C8u;
label_2c90c8:
    // 0x2c90c8: 0xc050dec  jal         func_1437B0
label_2c90cc:
    if (ctx->pc == 0x2C90CCu) {
        ctx->pc = 0x2C90CCu;
            // 0x2c90cc: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2C90D0u;
        goto label_2c90d0;
    }
    ctx->pc = 0x2C90C8u;
    SET_GPR_U32(ctx, 31, 0x2C90D0u);
    ctx->pc = 0x2C90CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90C8u;
            // 0x2c90cc: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90D0u; }
        if (ctx->pc != 0x2C90D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90D0u; }
        if (ctx->pc != 0x2C90D0u) { return; }
    }
    ctx->pc = 0x2C90D0u;
label_2c90d0:
    // 0x2c90d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2c90d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c90d4:
    // 0x2c90d4: 0x1e600002  bgtz        $s3, . + 4 + (0x2 << 2)
label_2c90d8:
    if (ctx->pc == 0x2C90D8u) {
        ctx->pc = 0x2C90D8u;
            // 0x2c90d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C90DCu;
        goto label_2c90dc;
    }
    ctx->pc = 0x2C90D4u;
    {
        const bool branch_taken_0x2c90d4 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2C90D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90D4u;
            // 0x2c90d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90d4) {
            ctx->pc = 0x2C90E0u;
            goto label_2c90e0;
        }
    }
    ctx->pc = 0x2C90DCu;
label_2c90dc:
    // 0x2c90dc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2c90dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c90e0:
    // 0x2c90e0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2c90e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2c90e4:
    // 0x2c90e4: 0xc0a1214  jal         func_284850
label_2c90e8:
    if (ctx->pc == 0x2C90E8u) {
        ctx->pc = 0x2C90E8u;
            // 0x2c90e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2C90ECu;
        goto label_2c90ec;
    }
    ctx->pc = 0x2C90E4u;
    SET_GPR_U32(ctx, 31, 0x2C90ECu);
    ctx->pc = 0x2C90E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90E4u;
            // 0x2c90e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90ECu; }
        if (ctx->pc != 0x2C90ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90ECu; }
        if (ctx->pc != 0x2C90ECu) { return; }
    }
    ctx->pc = 0x2C90ECu;
label_2c90ec:
    // 0x2c90ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c90ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c90f0:
    // 0x2c90f0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2c90f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2c90f4:
    // 0x2c90f4: 0xc04d924  jal         func_136490
label_2c90f8:
    if (ctx->pc == 0x2C90F8u) {
        ctx->pc = 0x2C90F8u;
            // 0x2c90f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C90FCu;
        goto label_2c90fc;
    }
    ctx->pc = 0x2C90F4u;
    SET_GPR_U32(ctx, 31, 0x2C90FCu);
    ctx->pc = 0x2C90F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90F4u;
            // 0x2c90f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90FCu; }
        if (ctx->pc != 0x2C90FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C90FCu; }
        if (ctx->pc != 0x2C90FCu) { return; }
    }
    ctx->pc = 0x2C90FCu;
label_2c90fc:
    // 0x2c90fc: 0xc04d924  jal         func_136490
label_2c9100:
    if (ctx->pc == 0x2C9100u) {
        ctx->pc = 0x2C9100u;
            // 0x2c9100: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->pc = 0x2C9104u;
        goto label_2c9104;
    }
    ctx->pc = 0x2C90FCu;
    SET_GPR_U32(ctx, 31, 0x2C9104u);
    ctx->pc = 0x2C9100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90FCu;
            // 0x2c9100: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9104u; }
        if (ctx->pc != 0x2C9104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9104u; }
        if (ctx->pc != 0x2C9104u) { return; }
    }
    ctx->pc = 0x2C9104u;
label_2c9104:
    // 0x2c9104: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2c9104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2c9108:
    // 0x2c9108: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_2c910c:
    if (ctx->pc == 0x2C910Cu) {
        ctx->pc = 0x2C910Cu;
            // 0x2c910c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9110u;
        goto label_2c9110;
    }
    ctx->pc = 0x2C9108u;
    {
        const bool branch_taken_0x2c9108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9108u;
            // 0x2c910c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9108) {
            ctx->pc = 0x2C9164u;
            goto label_2c9164;
        }
    }
    ctx->pc = 0x2C9110u;
label_2c9110:
    // 0x2c9110: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c9110u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9114:
    // 0x2c9114: 0x2bd1821  addu        $v1, $s5, $sp
    ctx->pc = 0x2c9114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_2c9118:
    // 0x2c9118: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2c9118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_2c911c:
    // 0x2c911c: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x2c911cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
label_2c9120:
    // 0x2c9120: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2c9120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2c9124:
    // 0x2c9124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c9124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9128:
    // 0x2c9128: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2c9128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c912c:
    // 0x2c912c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2c912cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2c9130:
    // 0x2c9130: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c9130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c9134:
    // 0x2c9134: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2c9134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_2c9138:
    // 0x2c9138: 0x533823  subu        $a3, $v0, $s3
    ctx->pc = 0x2c9138u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2c913c:
    // 0x2c913c: 0xc0576f8  jal         func_15DBE0
label_2c9140:
    if (ctx->pc == 0x2C9140u) {
        ctx->pc = 0x2C9140u;
            // 0x2c9140: 0x24660170  addiu       $a2, $v1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
        ctx->pc = 0x2C9144u;
        goto label_2c9144;
    }
    ctx->pc = 0x2C913Cu;
    SET_GPR_U32(ctx, 31, 0x2C9144u);
    ctx->pc = 0x2C9140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C913Cu;
            // 0x2c9140: 0x24660170  addiu       $a2, $v1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBE0u;
    if (runtime->hasFunction(0x15DBE0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9144u; }
        if (ctx->pc != 0x2C9144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaLight__4CMapFP9mgCObjectP10CFuncPointii_0x15dbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9144u; }
        if (ctx->pc != 0x2C9144u) { return; }
    }
    ctx->pc = 0x2C9144u;
label_2c9144:
    // 0x2c9144: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2c9144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2c9148:
    // 0x2c9148: 0x2a610003  slti        $at, $s3, 0x3
    ctx->pc = 0x2c9148u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_2c914c:
    // 0x2c914c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2c9150:
    if (ctx->pc == 0x2C9150u) {
        ctx->pc = 0x2C9154u;
        goto label_2c9154;
    }
    ctx->pc = 0x2C914Cu;
    {
        const bool branch_taken_0x2c914c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c914c) {
            ctx->pc = 0x2C9164u;
            goto label_2c9164;
        }
    }
    ctx->pc = 0x2C9154u;
label_2c9154:
    // 0x2c9154: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2c9154u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2c9158:
    // 0x2c9158: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x2c9158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2c915c:
    // 0x2c915c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_2c9160:
    if (ctx->pc == 0x2C9160u) {
        ctx->pc = 0x2C9160u;
            // 0x2c9160: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x2C9164u;
        goto label_2c9164;
    }
    ctx->pc = 0x2C915Cu;
    {
        const bool branch_taken_0x2c915c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C915Cu;
            // 0x2c9160: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c915c) {
            ctx->pc = 0x2C9114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9114;
        }
    }
    ctx->pc = 0x2C9164u;
label_2c9164:
    // 0x2c9164: 0x0  nop
    ctx->pc = 0x2c9164u;
    // NOP
label_2c9168:
    // 0x2c9168: 0x32320080  andi        $s2, $s1, 0x80
    ctx->pc = 0x2c9168u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
label_2c916c:
    // 0x2c916c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_2c9170:
    if (ctx->pc == 0x2C9170u) {
        ctx->pc = 0x2C9174u;
        goto label_2c9174;
    }
    ctx->pc = 0x2C916Cu;
    {
        const bool branch_taken_0x2c916c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c916c) {
            ctx->pc = 0x2C9188u;
            goto label_2c9188;
        }
    }
    ctx->pc = 0x2C9174u;
label_2c9174:
    // 0x2c9174: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c9174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c9178:
    // 0x2c9178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c917c:
    // 0x2c917c: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x2c917cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_2c9180:
    // 0x2c9180: 0x320f809  jalr        $t9
label_2c9184:
    if (ctx->pc == 0x2C9184u) {
        ctx->pc = 0x2C9184u;
            // 0x2c9184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9188u;
        goto label_2c9188;
    }
    ctx->pc = 0x2C9180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9188u);
        ctx->pc = 0x2C9184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9180u;
            // 0x2c9184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9188u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9188u; }
            if (ctx->pc != 0x2C9188u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9188u;
label_2c9188:
    // 0x2c9188: 0x32310100  andi        $s1, $s1, 0x100
    ctx->pc = 0x2c9188u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
label_2c918c:
    // 0x2c918c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2c9190:
    if (ctx->pc == 0x2C9190u) {
        ctx->pc = 0x2C9194u;
        goto label_2c9194;
    }
    ctx->pc = 0x2C918Cu;
    {
        const bool branch_taken_0x2c918c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c918c) {
            ctx->pc = 0x2C91C4u;
            goto label_2c91c4;
        }
    }
    ctx->pc = 0x2C9194u;
label_2c9194:
    // 0x2c9194: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c9194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c9198:
    // 0x2c9198: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2c9198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2c919c:
    // 0x2c919c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c919cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c91a0:
    // 0x2c91a0: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x2c91a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_2c91a4:
    // 0x2c91a4: 0x320f809  jalr        $t9
label_2c91a8:
    if (ctx->pc == 0x2C91A8u) {
        ctx->pc = 0x2C91A8u;
            // 0x2c91a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C91ACu;
        goto label_2c91ac;
    }
    ctx->pc = 0x2C91A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C91ACu);
        ctx->pc = 0x2C91A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91A4u;
            // 0x2c91a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C91ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C91ACu; }
            if (ctx->pc != 0x2C91ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2C91ACu;
label_2c91ac:
    // 0x2c91ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c91acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c91b0:
    // 0x2c91b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2c91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2c91b4:
    // 0x2c91b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c91b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c91b8:
    // 0x2c91b8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2c91b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2c91bc:
    // 0x2c91bc: 0x320f809  jalr        $t9
label_2c91c0:
    if (ctx->pc == 0x2C91C0u) {
        ctx->pc = 0x2C91C0u;
            // 0x2c91c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C91C4u;
        goto label_2c91c4;
    }
    ctx->pc = 0x2C91BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C91C4u);
        ctx->pc = 0x2C91C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91BCu;
            // 0x2c91c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C91C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C91C4u; }
            if (ctx->pc != 0x2C91C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C91C4u;
label_2c91c4:
    // 0x2c91c4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2c91c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2c91c8:
    // 0x2c91c8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c91c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c91cc:
    // 0x2c91cc: 0xc04ba14  jal         func_12E850
label_2c91d0:
    if (ctx->pc == 0x2C91D0u) {
        ctx->pc = 0x2C91D0u;
            // 0x2c91d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C91D4u;
        goto label_2c91d4;
    }
    ctx->pc = 0x2C91CCu;
    SET_GPR_U32(ctx, 31, 0x2C91D4u);
    ctx->pc = 0x2C91D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91CCu;
            // 0x2c91d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91D4u; }
        if (ctx->pc != 0x2C91D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91D4u; }
        if (ctx->pc != 0x2C91D4u) { return; }
    }
    ctx->pc = 0x2C91D4u;
label_2c91d4:
    // 0x2c91d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c91d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c91d8:
    // 0x2c91d8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2c91d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2c91dc:
    // 0x2c91dc: 0x320f809  jalr        $t9
label_2c91e0:
    if (ctx->pc == 0x2C91E0u) {
        ctx->pc = 0x2C91E0u;
            // 0x2c91e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C91E4u;
        goto label_2c91e4;
    }
    ctx->pc = 0x2C91DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C91E4u);
        ctx->pc = 0x2C91E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91DCu;
            // 0x2c91e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C91E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C91E4u; }
            if (ctx->pc != 0x2C91E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C91E4u;
label_2c91e4:
    // 0x2c91e4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_2c91e8:
    if (ctx->pc == 0x2C91E8u) {
        ctx->pc = 0x2C91ECu;
        goto label_2c91ec;
    }
    ctx->pc = 0x2C91E4u;
    {
        const bool branch_taken_0x2c91e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c91e4) {
            ctx->pc = 0x2C9200u;
            goto label_2c9200;
        }
    }
    ctx->pc = 0x2C91ECu;
label_2c91ec:
    // 0x2c91ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c91ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c91f0:
    // 0x2c91f0: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x2c91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_2c91f4:
    // 0x2c91f4: 0x8f3900c4  lw          $t9, 0xC4($t9)
    ctx->pc = 0x2c91f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 196)));
label_2c91f8:
    // 0x2c91f8: 0x320f809  jalr        $t9
label_2c91fc:
    if (ctx->pc == 0x2C91FCu) {
        ctx->pc = 0x2C91FCu;
            // 0x2c91fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9200u;
        goto label_2c9200;
    }
    ctx->pc = 0x2C91F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9200u);
        ctx->pc = 0x2C91FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91F8u;
            // 0x2c91fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9200u; }
            if (ctx->pc != 0x2C9200u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9200u;
label_2c9200:
    // 0x2c9200: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2c9204:
    if (ctx->pc == 0x2C9204u) {
        ctx->pc = 0x2C9204u;
            // 0x2c9204: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9208u;
        goto label_2c9208;
    }
    ctx->pc = 0x2C9200u;
    {
        const bool branch_taken_0x2c9200 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9200u;
            // 0x2c9204: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9200) {
            ctx->pc = 0x2C9234u;
            goto label_2c9234;
        }
    }
    ctx->pc = 0x2C9208u;
label_2c9208:
    // 0x2c9208: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c9208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c920c:
    // 0x2c920c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c920cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c9210:
    // 0x2c9210: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x2c9210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_2c9214:
    // 0x2c9214: 0x320f809  jalr        $t9
label_2c9218:
    if (ctx->pc == 0x2C9218u) {
        ctx->pc = 0x2C9218u;
            // 0x2c9218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C921Cu;
        goto label_2c921c;
    }
    ctx->pc = 0x2C9214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C921Cu);
        ctx->pc = 0x2C9218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9214u;
            // 0x2c9218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C921Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C921Cu; }
            if (ctx->pc != 0x2C921Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C921Cu;
label_2c921c:
    // 0x2c921c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c921cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c9220:
    // 0x2c9220: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c9220u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2c9224:
    // 0x2c9224: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2c9224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2c9228:
    // 0x2c9228: 0x320f809  jalr        $t9
label_2c922c:
    if (ctx->pc == 0x2C922Cu) {
        ctx->pc = 0x2C922Cu;
            // 0x2c922c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9230u;
        goto label_2c9230;
    }
    ctx->pc = 0x2C9228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C9230u);
        ctx->pc = 0x2C922Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9228u;
            // 0x2c922c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9230u; }
            if (ctx->pc != 0x2C9230u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9230u;
label_2c9230:
    // 0x2c9230: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c9230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c9234:
    // 0x2c9234: 0xc050dc8  jal         func_143720
label_2c9238:
    if (ctx->pc == 0x2C9238u) {
        ctx->pc = 0x2C9238u;
            // 0x2c9238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C923Cu;
        goto label_2c923c;
    }
    ctx->pc = 0x2C9234u;
    SET_GPR_U32(ctx, 31, 0x2C923Cu);
    ctx->pc = 0x2C9238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9234u;
            // 0x2c9238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C923Cu; }
        if (ctx->pc != 0x2C923Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C923Cu; }
        if (ctx->pc != 0x2C923Cu) { return; }
    }
    ctx->pc = 0x2C923Cu;
label_2c923c:
    // 0x2c923c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9240:
    // 0x2c9240: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c9240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2c9244:
    // 0x2c9244: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2c9244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c9248:
    // 0x2c9248: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2c9248u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c924c:
    // 0x2c924c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c9250:
    // 0x2c9250: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c9250u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c9254:
    // 0x2c9254: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c9254u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c9258:
    // 0x2c9258: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c9258u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c925c:
    // 0x2c925c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c925cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c9260:
    // 0x2c9260: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c9260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c9264:
    // 0x2c9264: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c9264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c9268:
    // 0x2c9268: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c9268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c926c:
    // 0x2c926c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c926cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9270:
    // 0x2c9270: 0x3e00008  jr          $ra
label_2c9274:
    if (ctx->pc == 0x2C9274u) {
        ctx->pc = 0x2C9274u;
            // 0x2c9274: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->pc = 0x2C9278u;
        goto label_fallthrough_0x2c9270;
    }
    ctx->pc = 0x2C9270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9270u;
            // 0x2c9274: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c9270:
    ctx->pc = 0x2C9278u;
}
