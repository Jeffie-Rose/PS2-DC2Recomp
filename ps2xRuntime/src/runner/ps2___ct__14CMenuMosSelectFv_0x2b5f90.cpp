#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14CMenuMosSelectFv
// Address: 0x2b5f90 - 0x2b61d0
void ps2___ct__14CMenuMosSelectFv_0x2b5f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14CMenuMosSelectFv_0x2b5f90");
#endif

    switch (ctx->pc) {
        case 0x2b5f90u: goto label_2b5f90;
        case 0x2b5f94u: goto label_2b5f94;
        case 0x2b5f98u: goto label_2b5f98;
        case 0x2b5f9cu: goto label_2b5f9c;
        case 0x2b5fa0u: goto label_2b5fa0;
        case 0x2b5fa4u: goto label_2b5fa4;
        case 0x2b5fa8u: goto label_2b5fa8;
        case 0x2b5facu: goto label_2b5fac;
        case 0x2b5fb0u: goto label_2b5fb0;
        case 0x2b5fb4u: goto label_2b5fb4;
        case 0x2b5fb8u: goto label_2b5fb8;
        case 0x2b5fbcu: goto label_2b5fbc;
        case 0x2b5fc0u: goto label_2b5fc0;
        case 0x2b5fc4u: goto label_2b5fc4;
        case 0x2b5fc8u: goto label_2b5fc8;
        case 0x2b5fccu: goto label_2b5fcc;
        case 0x2b5fd0u: goto label_2b5fd0;
        case 0x2b5fd4u: goto label_2b5fd4;
        case 0x2b5fd8u: goto label_2b5fd8;
        case 0x2b5fdcu: goto label_2b5fdc;
        case 0x2b5fe0u: goto label_2b5fe0;
        case 0x2b5fe4u: goto label_2b5fe4;
        case 0x2b5fe8u: goto label_2b5fe8;
        case 0x2b5fecu: goto label_2b5fec;
        case 0x2b5ff0u: goto label_2b5ff0;
        case 0x2b5ff4u: goto label_2b5ff4;
        case 0x2b5ff8u: goto label_2b5ff8;
        case 0x2b5ffcu: goto label_2b5ffc;
        case 0x2b6000u: goto label_2b6000;
        case 0x2b6004u: goto label_2b6004;
        case 0x2b6008u: goto label_2b6008;
        case 0x2b600cu: goto label_2b600c;
        case 0x2b6010u: goto label_2b6010;
        case 0x2b6014u: goto label_2b6014;
        case 0x2b6018u: goto label_2b6018;
        case 0x2b601cu: goto label_2b601c;
        case 0x2b6020u: goto label_2b6020;
        case 0x2b6024u: goto label_2b6024;
        case 0x2b6028u: goto label_2b6028;
        case 0x2b602cu: goto label_2b602c;
        case 0x2b6030u: goto label_2b6030;
        case 0x2b6034u: goto label_2b6034;
        case 0x2b6038u: goto label_2b6038;
        case 0x2b603cu: goto label_2b603c;
        case 0x2b6040u: goto label_2b6040;
        case 0x2b6044u: goto label_2b6044;
        case 0x2b6048u: goto label_2b6048;
        case 0x2b604cu: goto label_2b604c;
        case 0x2b6050u: goto label_2b6050;
        case 0x2b6054u: goto label_2b6054;
        case 0x2b6058u: goto label_2b6058;
        case 0x2b605cu: goto label_2b605c;
        case 0x2b6060u: goto label_2b6060;
        case 0x2b6064u: goto label_2b6064;
        case 0x2b6068u: goto label_2b6068;
        case 0x2b606cu: goto label_2b606c;
        case 0x2b6070u: goto label_2b6070;
        case 0x2b6074u: goto label_2b6074;
        case 0x2b6078u: goto label_2b6078;
        case 0x2b607cu: goto label_2b607c;
        case 0x2b6080u: goto label_2b6080;
        case 0x2b6084u: goto label_2b6084;
        case 0x2b6088u: goto label_2b6088;
        case 0x2b608cu: goto label_2b608c;
        case 0x2b6090u: goto label_2b6090;
        case 0x2b6094u: goto label_2b6094;
        case 0x2b6098u: goto label_2b6098;
        case 0x2b609cu: goto label_2b609c;
        case 0x2b60a0u: goto label_2b60a0;
        case 0x2b60a4u: goto label_2b60a4;
        case 0x2b60a8u: goto label_2b60a8;
        case 0x2b60acu: goto label_2b60ac;
        case 0x2b60b0u: goto label_2b60b0;
        case 0x2b60b4u: goto label_2b60b4;
        case 0x2b60b8u: goto label_2b60b8;
        case 0x2b60bcu: goto label_2b60bc;
        case 0x2b60c0u: goto label_2b60c0;
        case 0x2b60c4u: goto label_2b60c4;
        case 0x2b60c8u: goto label_2b60c8;
        case 0x2b60ccu: goto label_2b60cc;
        case 0x2b60d0u: goto label_2b60d0;
        case 0x2b60d4u: goto label_2b60d4;
        case 0x2b60d8u: goto label_2b60d8;
        case 0x2b60dcu: goto label_2b60dc;
        case 0x2b60e0u: goto label_2b60e0;
        case 0x2b60e4u: goto label_2b60e4;
        case 0x2b60e8u: goto label_2b60e8;
        case 0x2b60ecu: goto label_2b60ec;
        case 0x2b60f0u: goto label_2b60f0;
        case 0x2b60f4u: goto label_2b60f4;
        case 0x2b60f8u: goto label_2b60f8;
        case 0x2b60fcu: goto label_2b60fc;
        case 0x2b6100u: goto label_2b6100;
        case 0x2b6104u: goto label_2b6104;
        case 0x2b6108u: goto label_2b6108;
        case 0x2b610cu: goto label_2b610c;
        case 0x2b6110u: goto label_2b6110;
        case 0x2b6114u: goto label_2b6114;
        case 0x2b6118u: goto label_2b6118;
        case 0x2b611cu: goto label_2b611c;
        case 0x2b6120u: goto label_2b6120;
        case 0x2b6124u: goto label_2b6124;
        case 0x2b6128u: goto label_2b6128;
        case 0x2b612cu: goto label_2b612c;
        case 0x2b6130u: goto label_2b6130;
        case 0x2b6134u: goto label_2b6134;
        case 0x2b6138u: goto label_2b6138;
        case 0x2b613cu: goto label_2b613c;
        case 0x2b6140u: goto label_2b6140;
        case 0x2b6144u: goto label_2b6144;
        case 0x2b6148u: goto label_2b6148;
        case 0x2b614cu: goto label_2b614c;
        case 0x2b6150u: goto label_2b6150;
        case 0x2b6154u: goto label_2b6154;
        case 0x2b6158u: goto label_2b6158;
        case 0x2b615cu: goto label_2b615c;
        case 0x2b6160u: goto label_2b6160;
        case 0x2b6164u: goto label_2b6164;
        case 0x2b6168u: goto label_2b6168;
        case 0x2b616cu: goto label_2b616c;
        case 0x2b6170u: goto label_2b6170;
        case 0x2b6174u: goto label_2b6174;
        case 0x2b6178u: goto label_2b6178;
        case 0x2b617cu: goto label_2b617c;
        case 0x2b6180u: goto label_2b6180;
        case 0x2b6184u: goto label_2b6184;
        case 0x2b6188u: goto label_2b6188;
        case 0x2b618cu: goto label_2b618c;
        case 0x2b6190u: goto label_2b6190;
        case 0x2b6194u: goto label_2b6194;
        case 0x2b6198u: goto label_2b6198;
        case 0x2b619cu: goto label_2b619c;
        case 0x2b61a0u: goto label_2b61a0;
        case 0x2b61a4u: goto label_2b61a4;
        case 0x2b61a8u: goto label_2b61a8;
        case 0x2b61acu: goto label_2b61ac;
        case 0x2b61b0u: goto label_2b61b0;
        case 0x2b61b4u: goto label_2b61b4;
        case 0x2b61b8u: goto label_2b61b8;
        case 0x2b61bcu: goto label_2b61bc;
        case 0x2b61c0u: goto label_2b61c0;
        case 0x2b61c4u: goto label_2b61c4;
        case 0x2b61c8u: goto label_2b61c8;
        case 0x2b61ccu: goto label_2b61cc;
        default: break;
    }

    ctx->pc = 0x2b5f90u;

label_2b5f90:
    // 0x2b5f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b5f94:
    // 0x2b5f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b5f98:
    // 0x2b5f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b5f9c:
    // 0x2b5f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b5fa0:
    // 0x2b5fa0: 0xc08dc2c  jal         func_2370B0
label_2b5fa4:
    if (ctx->pc == 0x2B5FA4u) {
        ctx->pc = 0x2B5FA4u;
            // 0x2b5fa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FA8u;
        goto label_2b5fa8;
    }
    ctx->pc = 0x2B5FA0u;
    SET_GPR_U32(ctx, 31, 0x2B5FA8u);
    ctx->pc = 0x2B5FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5FA0u;
            // 0x2b5fa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FA8u; }
        if (ctx->pc != 0x2B5FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FA8u; }
        if (ctx->pc != 0x2B5FA8u) { return; }
    }
    ctx->pc = 0x2B5FA8u;
label_2b5fa8:
    // 0x2b5fa8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b5fac:
    // 0x2b5fac: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2b5facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2b5fb0:
    // 0x2b5fb0: 0x24426290  addiu       $v0, $v0, 0x6290
    ctx->pc = 0x2b5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
label_2b5fb4:
    // 0x2b5fb4: 0xc0874b4  jal         func_21D2D0
label_2b5fb8:
    if (ctx->pc == 0x2B5FB8u) {
        ctx->pc = 0x2B5FB8u;
            // 0x2b5fb8: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5FBCu;
        goto label_2b5fbc;
    }
    ctx->pc = 0x2B5FB4u;
    SET_GPR_U32(ctx, 31, 0x2B5FBCu);
    ctx->pc = 0x2B5FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5FB4u;
            // 0x2b5fb8: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FBCu; }
        if (ctx->pc != 0x2B5FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FBCu; }
        if (ctx->pc != 0x2B5FBCu) { return; }
    }
    ctx->pc = 0x2B5FBCu;
label_2b5fbc:
    // 0x2b5fbc: 0xc054aa4  jal         func_152A90
label_2b5fc0:
    if (ctx->pc == 0x2B5FC0u) {
        ctx->pc = 0x2B5FC0u;
            // 0x2b5fc0: 0x26042428  addiu       $a0, $s0, 0x2428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9256));
        ctx->pc = 0x2B5FC4u;
        goto label_2b5fc4;
    }
    ctx->pc = 0x2B5FBCu;
    SET_GPR_U32(ctx, 31, 0x2B5FC4u);
    ctx->pc = 0x2B5FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5FBCu;
            // 0x2b5fc0: 0x26042428  addiu       $a0, $s0, 0x2428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FC4u; }
        if (ctx->pc != 0x2B5FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FC4u; }
        if (ctx->pc != 0x2B5FC4u) { return; }
    }
    ctx->pc = 0x2B5FC4u;
label_2b5fc4:
    // 0x2b5fc4: 0x26114690  addiu       $s1, $s0, 0x4690
    ctx->pc = 0x2b5fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 18064));
label_2b5fc8:
    // 0x2b5fc8: 0xc058768  jal         func_161DA0
label_2b5fcc:
    if (ctx->pc == 0x2B5FCCu) {
        ctx->pc = 0x2B5FCCu;
            // 0x2b5fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FD0u;
        goto label_2b5fd0;
    }
    ctx->pc = 0x2B5FC8u;
    SET_GPR_U32(ctx, 31, 0x2B5FD0u);
    ctx->pc = 0x2B5FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5FC8u;
            // 0x2b5fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161DA0u;
    if (runtime->hasFunction(0x161DA0u)) {
        auto targetFn = runtime->lookupFunction(0x161DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FD0u; }
        if (ctx->pc != 0x2B5FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CObjectFv_0x161da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FD0u; }
        if (ctx->pc != 0x2B5FD0u) { return; }
    }
    ctx->pc = 0x2B5FD0u;
label_2b5fd0:
    // 0x2b5fd0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b5fd4:
    // 0x2b5fd4: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2b5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2b5fd8:
    // 0x2b5fd8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b5fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b5fdc:
    // 0x2b5fdc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2b5fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5fe0:
    // 0x2b5fe0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2b5fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2b5fe4:
    // 0x2b5fe4: 0x320f809  jalr        $t9
label_2b5fe8:
    if (ctx->pc == 0x2B5FE8u) {
        ctx->pc = 0x2B5FE8u;
            // 0x2b5fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FECu;
        goto label_2b5fec;
    }
    ctx->pc = 0x2B5FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B5FECu);
        ctx->pc = 0x2B5FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5FE4u;
            // 0x2b5fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B5FECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FECu; }
            if (ctx->pc != 0x2B5FECu) { return; }
        }
        }
    }
    ctx->pc = 0x2B5FECu;
label_2b5fec:
    // 0x2b5fec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b5ff0:
    // 0x2b5ff0: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2b5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2b5ff4:
    // 0x2b5ff4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b5ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b5ff8:
    // 0x2b5ff8: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x2b5ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_2b5ffc:
    // 0x2b5ffc: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x2b5ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_2b6000:
    // 0x2b6000: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x2b6000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_2b6004:
    // 0x2b6004: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2b6004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b6008:
    // 0x2b6008: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2b6008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2b600c:
    // 0x2b600c: 0x320f809  jalr        $t9
label_2b6010:
    if (ctx->pc == 0x2B6010u) {
        ctx->pc = 0x2B6010u;
            // 0x2b6010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6014u;
        goto label_2b6014;
    }
    ctx->pc = 0x2B600Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B6014u);
        ctx->pc = 0x2B6010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B600Cu;
            // 0x2b6010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6014u; }
            if (ctx->pc != 0x2B6014u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6014u;
label_2b6014:
    // 0x2b6014: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b6014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b6018:
    // 0x2b6018: 0x262406bc  addiu       $a0, $s1, 0x6BC
    ctx->pc = 0x2b6018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
label_2b601c:
    // 0x2b601c: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x2b601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_2b6020:
    // 0x2b6020: 0xc061b34  jal         func_186CD0
label_2b6024:
    if (ctx->pc == 0x2B6024u) {
        ctx->pc = 0x2B6024u;
            // 0x2b6024: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B6028u;
        goto label_2b6028;
    }
    ctx->pc = 0x2B6020u;
    SET_GPR_U32(ctx, 31, 0x2B6028u);
    ctx->pc = 0x2B6024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6020u;
            // 0x2b6024: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6028u; }
        if (ctx->pc != 0x2B6028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6028u; }
        if (ctx->pc != 0x2B6028u) { return; }
    }
    ctx->pc = 0x2B6028u;
label_2b6028:
    // 0x2b6028: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x2b6028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
label_2b602c:
    // 0x2b602c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b602cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6030:
    // 0x2b6030: 0xc049c86  jal         func_127218
label_2b6034:
    if (ctx->pc == 0x2B6034u) {
        ctx->pc = 0x2B6034u;
            // 0x2b6034: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x2B6038u;
        goto label_2b6038;
    }
    ctx->pc = 0x2B6030u;
    SET_GPR_U32(ctx, 31, 0x2B6038u);
    ctx->pc = 0x2B6034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6030u;
            // 0x2b6034: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6038u; }
        if (ctx->pc != 0x2B6038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6038u; }
        if (ctx->pc != 0x2B6038u) { return; }
    }
    ctx->pc = 0x2B6038u;
label_2b6038:
    // 0x2b6038: 0x26311030  addiu       $s1, $s1, 0x1030
    ctx->pc = 0x2b6038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4144));
label_2b603c:
    // 0x2b603c: 0x260456c0  addiu       $a0, $s0, 0x56C0
    ctx->pc = 0x2b603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22208));
label_2b6040:
    // 0x2b6040: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x2b6040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2b6044:
    // 0x2b6044: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_2b6048:
    if (ctx->pc == 0x2B6048u) {
        ctx->pc = 0x2B604Cu;
        goto label_2b604c;
    }
    ctx->pc = 0x2B6044u;
    {
        const bool branch_taken_0x2b6044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6044) {
            ctx->pc = 0x2B5FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5fc8;
        }
    }
    ctx->pc = 0x2B604Cu;
label_2b604c:
    // 0x2b604c: 0xc058768  jal         func_161DA0
label_2b6050:
    if (ctx->pc == 0x2B6050u) {
        ctx->pc = 0x2B6054u;
        goto label_2b6054;
    }
    ctx->pc = 0x2B604Cu;
    SET_GPR_U32(ctx, 31, 0x2B6054u);
    ctx->pc = 0x161DA0u;
    if (runtime->hasFunction(0x161DA0u)) {
        auto targetFn = runtime->lookupFunction(0x161DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6054u; }
        if (ctx->pc != 0x2B6054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CObjectFv_0x161da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6054u; }
        if (ctx->pc != 0x2B6054u) { return; }
    }
    ctx->pc = 0x2B6054u;
label_2b6054:
    // 0x2b6054: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b6054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b6058:
    // 0x2b6058: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2b6058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2b605c:
    // 0x2b605c: 0xae0256c0  sw          $v0, 0x56C0($s0)
    ctx->pc = 0x2b605cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22208), GPR_U32(ctx, 2));
label_2b6060:
    // 0x2b6060: 0x8e1956c0  lw          $t9, 0x56C0($s0)
    ctx->pc = 0x2b6060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22208)));
label_2b6064:
    // 0x2b6064: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2b6064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2b6068:
    // 0x2b6068: 0x320f809  jalr        $t9
label_2b606c:
    if (ctx->pc == 0x2B606Cu) {
        ctx->pc = 0x2B606Cu;
            // 0x2b606c: 0x260456c0  addiu       $a0, $s0, 0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22208));
        ctx->pc = 0x2B6070u;
        goto label_2b6070;
    }
    ctx->pc = 0x2B6068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B6070u);
        ctx->pc = 0x2B606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6068u;
            // 0x2b606c: 0x260456c0  addiu       $a0, $s0, 0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6070u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6070u; }
            if (ctx->pc != 0x2B6070u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6070u;
label_2b6070:
    // 0x2b6070: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b6070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b6074:
    // 0x2b6074: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2b6074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2b6078:
    // 0x2b6078: 0xae0256c0  sw          $v0, 0x56C0($s0)
    ctx->pc = 0x2b6078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22208), GPR_U32(ctx, 2));
label_2b607c:
    // 0x2b607c: 0xae005a1c  sw          $zero, 0x5A1C($s0)
    ctx->pc = 0x2b607cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23068), GPR_U32(ctx, 0));
label_2b6080:
    // 0x2b6080: 0xae005a24  sw          $zero, 0x5A24($s0)
    ctx->pc = 0x2b6080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23076), GPR_U32(ctx, 0));
label_2b6084:
    // 0x2b6084: 0xae005a20  sw          $zero, 0x5A20($s0)
    ctx->pc = 0x2b6084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23072), GPR_U32(ctx, 0));
label_2b6088:
    // 0x2b6088: 0x8e1956c0  lw          $t9, 0x56C0($s0)
    ctx->pc = 0x2b6088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22208)));
label_2b608c:
    // 0x2b608c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2b608cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2b6090:
    // 0x2b6090: 0x320f809  jalr        $t9
label_2b6094:
    if (ctx->pc == 0x2B6094u) {
        ctx->pc = 0x2B6094u;
            // 0x2b6094: 0x260456c0  addiu       $a0, $s0, 0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22208));
        ctx->pc = 0x2B6098u;
        goto label_2b6098;
    }
    ctx->pc = 0x2B6090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B6098u);
        ctx->pc = 0x2B6094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6090u;
            // 0x2b6094: 0x260456c0  addiu       $a0, $s0, 0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6098u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6098u; }
            if (ctx->pc != 0x2B6098u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6098u;
label_2b6098:
    // 0x2b6098: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b6098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b609c:
    // 0x2b609c: 0x26045d7c  addiu       $a0, $s0, 0x5D7C
    ctx->pc = 0x2b609cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 23932));
label_2b60a0:
    // 0x2b60a0: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x2b60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_2b60a4:
    // 0x2b60a4: 0xc061b34  jal         func_186CD0
label_2b60a8:
    if (ctx->pc == 0x2B60A8u) {
        ctx->pc = 0x2B60A8u;
            // 0x2b60a8: 0xae0256c0  sw          $v0, 0x56C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 22208), GPR_U32(ctx, 2));
        ctx->pc = 0x2B60ACu;
        goto label_2b60ac;
    }
    ctx->pc = 0x2B60A4u;
    SET_GPR_U32(ctx, 31, 0x2B60ACu);
    ctx->pc = 0x2B60A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B60A4u;
            // 0x2b60a8: 0xae0256c0  sw          $v0, 0x56C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 22208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60ACu; }
        if (ctx->pc != 0x2B60ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60ACu; }
        if (ctx->pc != 0x2B60ACu) { return; }
    }
    ctx->pc = 0x2B60ACu;
label_2b60ac:
    // 0x2b60ac: 0x26045fd0  addiu       $a0, $s0, 0x5FD0
    ctx->pc = 0x2b60acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24528));
label_2b60b0:
    // 0x2b60b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b60b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b60b4:
    // 0x2b60b4: 0xc049c86  jal         func_127218
label_2b60b8:
    if (ctx->pc == 0x2B60B8u) {
        ctx->pc = 0x2B60B8u;
            // 0x2b60b8: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x2B60BCu;
        goto label_2b60bc;
    }
    ctx->pc = 0x2B60B4u;
    SET_GPR_U32(ctx, 31, 0x2B60BCu);
    ctx->pc = 0x2B60B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B60B4u;
            // 0x2b60b8: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60BCu; }
        if (ctx->pc != 0x2B60BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60BCu; }
        if (ctx->pc != 0x2B60BCu) { return; }
    }
    ctx->pc = 0x2B60BCu;
label_2b60bc:
    // 0x2b60bc: 0xc04e640  jal         func_139900
label_2b60c0:
    if (ctx->pc == 0x2B60C0u) {
        ctx->pc = 0x2B60C0u;
            // 0x2b60c0: 0x260466f0  addiu       $a0, $s0, 0x66F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26352));
        ctx->pc = 0x2B60C4u;
        goto label_2b60c4;
    }
    ctx->pc = 0x2B60BCu;
    SET_GPR_U32(ctx, 31, 0x2B60C4u);
    ctx->pc = 0x2B60C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B60BCu;
            // 0x2b60c0: 0x260466f0  addiu       $a0, $s0, 0x66F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60C4u; }
        if (ctx->pc != 0x2B60C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60C4u; }
        if (ctx->pc != 0x2B60C4u) { return; }
    }
    ctx->pc = 0x2B60C4u;
label_2b60c4:
    // 0x2b60c4: 0xc04e640  jal         func_139900
label_2b60c8:
    if (ctx->pc == 0x2B60C8u) {
        ctx->pc = 0x2B60C8u;
            // 0x2b60c8: 0x26046720  addiu       $a0, $s0, 0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26400));
        ctx->pc = 0x2B60CCu;
        goto label_2b60cc;
    }
    ctx->pc = 0x2B60C4u;
    SET_GPR_U32(ctx, 31, 0x2B60CCu);
    ctx->pc = 0x2B60C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B60C4u;
            // 0x2b60c8: 0x26046720  addiu       $a0, $s0, 0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60CCu; }
        if (ctx->pc != 0x2B60CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60CCu; }
        if (ctx->pc != 0x2B60CCu) { return; }
    }
    ctx->pc = 0x2B60CCu;
label_2b60cc:
    // 0x2b60cc: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x2b60ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
label_2b60d0:
    // 0x2b60d0: 0x26044690  addiu       $a0, $s0, 0x4690
    ctx->pc = 0x2b60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 18064));
label_2b60d4:
    // 0x2b60d4: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x2b60d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
label_2b60d8:
    // 0x2b60d8: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x2b60d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
label_2b60dc:
    // 0x2b60dc: 0xae00460c  sw          $zero, 0x460C($s0)
    ctx->pc = 0x2b60dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17932), GPR_U32(ctx, 0));
label_2b60e0:
    // 0x2b60e0: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x2b60e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_2b60e4:
    // 0x2b60e4: 0x8e194690  lw          $t9, 0x4690($s0)
    ctx->pc = 0x2b60e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18064)));
label_2b60e8:
    // 0x2b60e8: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b60e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b60ec:
    // 0x2b60ec: 0x320f809  jalr        $t9
label_2b60f0:
    if (ctx->pc == 0x2B60F0u) {
        ctx->pc = 0x2B60F0u;
            // 0x2b60f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B60F4u;
        goto label_2b60f4;
    }
    ctx->pc = 0x2B60ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B60F4u);
        ctx->pc = 0x2B60F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B60ECu;
            // 0x2b60f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B60F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B60F4u; }
            if (ctx->pc != 0x2B60F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B60F4u;
label_2b60f4:
    // 0x2b60f4: 0xae00675c  sw          $zero, 0x675C($s0)
    ctx->pc = 0x2b60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26460), GPR_U32(ctx, 0));
label_2b60f8:
    // 0x2b60f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b60f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b60fc:
    // 0x2b60fc: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x2b60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_2b6100:
    // 0x2b6100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6104:
    // 0x2b6104: 0xa6006760  sh          $zero, 0x6760($s0)
    ctx->pc = 0x2b6104u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26464), (uint16_t)GPR_U32(ctx, 0));
label_2b6108:
    // 0x2b6108: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2b6108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2b610c:
    // 0x2b610c: 0xa6006762  sh          $zero, 0x6762($s0)
    ctx->pc = 0x2b610cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26466), (uint16_t)GPR_U32(ctx, 0));
label_2b6110:
    // 0x2b6110: 0xae03465c  sw          $v1, 0x465C($s0)
    ctx->pc = 0x2b6110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18012), GPR_U32(ctx, 3));
label_2b6114:
    // 0x2b6114: 0xae034660  sw          $v1, 0x4660($s0)
    ctx->pc = 0x2b6114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18016), GPR_U32(ctx, 3));
label_2b6118:
    // 0x2b6118: 0xae034664  sw          $v1, 0x4664($s0)
    ctx->pc = 0x2b6118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18020), GPR_U32(ctx, 3));
label_2b611c:
    // 0x2b611c: 0xae004668  sw          $zero, 0x4668($s0)
    ctx->pc = 0x2b611cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18024), GPR_U32(ctx, 0));
label_2b6120:
    // 0x2b6120: 0xae024610  sw          $v0, 0x4610($s0)
    ctx->pc = 0x2b6120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17936), GPR_U32(ctx, 2));
label_2b6124:
    // 0x2b6124: 0xc0873e4  jal         func_21CF90
label_2b6128:
    if (ctx->pc == 0x2B6128u) {
        ctx->pc = 0x2B6128u;
            // 0x2b6128: 0xae002420  sw          $zero, 0x2420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 9248), GPR_U32(ctx, 0));
        ctx->pc = 0x2B612Cu;
        goto label_2b612c;
    }
    ctx->pc = 0x2B6124u;
    SET_GPR_U32(ctx, 31, 0x2B612Cu);
    ctx->pc = 0x2B6128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6124u;
            // 0x2b6128: 0xae002420  sw          $zero, 0x2420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 9248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF90u;
    if (runtime->hasFunction(0x21CF90u)) {
        auto targetFn = runtime->lookupFunction(0x21CF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B612Cu; }
        if (ctx->pc != 0x2B612Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMesInit__FP6ClsMes_0x21cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B612Cu; }
        if (ctx->pc != 0x2B612Cu) { return; }
    }
    ctx->pc = 0x2B612Cu;
label_2b612c:
    // 0x2b612c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b612cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b6130:
    // 0x2b6130: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x2b6130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
label_2b6134:
    // 0x2b6134: 0xc065af8  jal         func_196BE0
label_2b6138:
    if (ctx->pc == 0x2B6138u) {
        ctx->pc = 0x2B6138u;
            // 0x2b6138: 0xae021c7c  sw          $v0, 0x1C7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7292), GPR_U32(ctx, 2));
        ctx->pc = 0x2B613Cu;
        goto label_2b613c;
    }
    ctx->pc = 0x2B6134u;
    SET_GPR_U32(ctx, 31, 0x2B613Cu);
    ctx->pc = 0x2B6138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6134u;
            // 0x2b6138: 0xae021c7c  sw          $v0, 0x1C7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B613Cu; }
        if (ctx->pc != 0x2B613Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B613Cu; }
        if (ctx->pc != 0x2B613Cu) { return; }
    }
    ctx->pc = 0x2B613Cu;
label_2b613c:
    // 0x2b613c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6140:
    // 0x2b6140: 0xc0670bc  jal         func_19C2F0
label_2b6144:
    if (ctx->pc == 0x2B6144u) {
        ctx->pc = 0x2B6144u;
            // 0x2b6144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B6148u;
        goto label_2b6148;
    }
    ctx->pc = 0x2B6140u;
    SET_GPR_U32(ctx, 31, 0x2B6148u);
    ctx->pc = 0x2B6144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6140u;
            // 0x2b6144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2F0u;
    if (runtime->hasFunction(0x19C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6148u; }
        if (ctx->pc != 0x2B6148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtr__16CUserDataManagerFi_0x19c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6148u; }
        if (ctx->pc != 0x2B6148u) { return; }
    }
    ctx->pc = 0x2B6148u;
label_2b6148:
    // 0x2b6148: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x2b6148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
label_2b614c:
    // 0x2b614c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b614cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b6150:
    // 0x2b6150: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x2b6150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
label_2b6154:
    // 0x2b6154: 0x26042428  addiu       $a0, $s0, 0x2428
    ctx->pc = 0x2b6154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9256));
label_2b6158:
    // 0x2b6158: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x2b6158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
label_2b615c:
    // 0x2b615c: 0xc0873e4  jal         func_21CF90
label_2b6160:
    if (ctx->pc == 0x2B6160u) {
        ctx->pc = 0x2B6160u;
            // 0x2b6160: 0xae023f54  sw          $v0, 0x3F54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16212), GPR_U32(ctx, 2));
        ctx->pc = 0x2B6164u;
        goto label_2b6164;
    }
    ctx->pc = 0x2B615Cu;
    SET_GPR_U32(ctx, 31, 0x2B6164u);
    ctx->pc = 0x2B6160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B615Cu;
            // 0x2b6160: 0xae023f54  sw          $v0, 0x3F54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF90u;
    if (runtime->hasFunction(0x21CF90u)) {
        auto targetFn = runtime->lookupFunction(0x21CF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6164u; }
        if (ctx->pc != 0x2B6164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMesInit__FP6ClsMes_0x21cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6164u; }
        if (ctx->pc != 0x2B6164u) { return; }
    }
    ctx->pc = 0x2B6164u;
label_2b6164:
    // 0x2b6164: 0x26042428  addiu       $a0, $s0, 0x2428
    ctx->pc = 0x2b6164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9256));
label_2b6168:
    // 0x2b6168: 0xc054cdc  jal         func_153370
label_2b616c:
    if (ctx->pc == 0x2B616Cu) {
        ctx->pc = 0x2B616Cu;
            // 0x2b616c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2B6170u;
        goto label_2b6170;
    }
    ctx->pc = 0x2B6168u;
    SET_GPR_U32(ctx, 31, 0x2B6170u);
    ctx->pc = 0x2B616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6168u;
            // 0x2b616c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6170u; }
        if (ctx->pc != 0x2B6170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6170u; }
        if (ctx->pc != 0x2B6170u) { return; }
    }
    ctx->pc = 0x2B6170u;
label_2b6170:
    // 0x2b6170: 0xae0024d8  sw          $zero, 0x24D8($s0)
    ctx->pc = 0x2b6170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9432), GPR_U32(ctx, 0));
label_2b6174:
    // 0x2b6174: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b6174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b6178:
    // 0x2b6178: 0xae0225ac  sw          $v0, 0x25AC($s0)
    ctx->pc = 0x2b6178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9644), GPR_U32(ctx, 2));
label_2b617c:
    // 0x2b617c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b617cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6180:
    // 0x2b6180: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b6180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b6184:
    // 0x2b6184: 0xae003c1c  sw          $zero, 0x3C1C($s0)
    ctx->pc = 0x2b6184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15388), GPR_U32(ctx, 0));
label_2b6188:
    // 0x2b6188: 0xae022574  sw          $v0, 0x2574($s0)
    ctx->pc = 0x2b6188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9588), GPR_U32(ctx, 2));
label_2b618c:
    // 0x2b618c: 0xa2003c28  sb          $zero, 0x3C28($s0)
    ctx->pc = 0x2b618cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15400), (uint8_t)GPR_U32(ctx, 0));
label_2b6190:
    // 0x2b6190: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6194:
    // 0x2b6194: 0xae006750  sw          $zero, 0x6750($s0)
    ctx->pc = 0x2b6194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26448), GPR_U32(ctx, 0));
label_2b6198:
    // 0x2b6198: 0xae006754  sw          $zero, 0x6754($s0)
    ctx->pc = 0x2b6198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26452), GPR_U32(ctx, 0));
label_2b619c:
    // 0x2b619c: 0xa6006758  sh          $zero, 0x6758($s0)
    ctx->pc = 0x2b619cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26456), (uint16_t)GPR_U32(ctx, 0));
label_2b61a0:
    // 0x2b61a0: 0xa600675a  sh          $zero, 0x675A($s0)
    ctx->pc = 0x2b61a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26458), (uint16_t)GPR_U32(ctx, 0));
label_2b61a4:
    // 0x2b61a4: 0xae034608  sw          $v1, 0x4608($s0)
    ctx->pc = 0x2b61a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17928), GPR_U32(ctx, 3));
label_2b61a8:
    // 0x2b61a8: 0xa200466c  sb          $zero, 0x466C($s0)
    ctx->pc = 0x2b61a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18028), (uint8_t)GPR_U32(ctx, 0));
label_2b61ac:
    // 0x2b61ac: 0xae004658  sw          $zero, 0x4658($s0)
    ctx->pc = 0x2b61acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18008), GPR_U32(ctx, 0));
label_2b61b0:
    // 0x2b61b0: 0xae004670  sw          $zero, 0x4670($s0)
    ctx->pc = 0x2b61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18032), GPR_U32(ctx, 0));
label_2b61b4:
    // 0x2b61b4: 0xae004674  sw          $zero, 0x4674($s0)
    ctx->pc = 0x2b61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18036), GPR_U32(ctx, 0));
label_2b61b8:
    // 0x2b61b8: 0xae004678  sw          $zero, 0x4678($s0)
    ctx->pc = 0x2b61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18040), GPR_U32(ctx, 0));
label_2b61bc:
    // 0x2b61bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b61bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b61c0:
    // 0x2b61c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b61c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b61c4:
    // 0x2b61c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b61c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b61c8:
    // 0x2b61c8: 0x3e00008  jr          $ra
label_2b61cc:
    if (ctx->pc == 0x2B61CCu) {
        ctx->pc = 0x2B61CCu;
            // 0x2b61cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B61D0u;
        goto label_fallthrough_0x2b61c8;
    }
    ctx->pc = 0x2B61C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B61CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B61C8u;
            // 0x2b61cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b61c8:
    ctx->pc = 0x2B61D0u;
}
