#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EyeCamera__FP9mgCCameraP11CCharacter2i
// Address: 0x1d3f80 - 0x1d425c
void EyeCamera__FP9mgCCameraP11CCharacter2i_0x1d3f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EyeCamera__FP9mgCCameraP11CCharacter2i_0x1d3f80");
#endif

    switch (ctx->pc) {
        case 0x1d3f80u: goto label_1d3f80;
        case 0x1d3f84u: goto label_1d3f84;
        case 0x1d3f88u: goto label_1d3f88;
        case 0x1d3f8cu: goto label_1d3f8c;
        case 0x1d3f90u: goto label_1d3f90;
        case 0x1d3f94u: goto label_1d3f94;
        case 0x1d3f98u: goto label_1d3f98;
        case 0x1d3f9cu: goto label_1d3f9c;
        case 0x1d3fa0u: goto label_1d3fa0;
        case 0x1d3fa4u: goto label_1d3fa4;
        case 0x1d3fa8u: goto label_1d3fa8;
        case 0x1d3facu: goto label_1d3fac;
        case 0x1d3fb0u: goto label_1d3fb0;
        case 0x1d3fb4u: goto label_1d3fb4;
        case 0x1d3fb8u: goto label_1d3fb8;
        case 0x1d3fbcu: goto label_1d3fbc;
        case 0x1d3fc0u: goto label_1d3fc0;
        case 0x1d3fc4u: goto label_1d3fc4;
        case 0x1d3fc8u: goto label_1d3fc8;
        case 0x1d3fccu: goto label_1d3fcc;
        case 0x1d3fd0u: goto label_1d3fd0;
        case 0x1d3fd4u: goto label_1d3fd4;
        case 0x1d3fd8u: goto label_1d3fd8;
        case 0x1d3fdcu: goto label_1d3fdc;
        case 0x1d3fe0u: goto label_1d3fe0;
        case 0x1d3fe4u: goto label_1d3fe4;
        case 0x1d3fe8u: goto label_1d3fe8;
        case 0x1d3fecu: goto label_1d3fec;
        case 0x1d3ff0u: goto label_1d3ff0;
        case 0x1d3ff4u: goto label_1d3ff4;
        case 0x1d3ff8u: goto label_1d3ff8;
        case 0x1d3ffcu: goto label_1d3ffc;
        case 0x1d4000u: goto label_1d4000;
        case 0x1d4004u: goto label_1d4004;
        case 0x1d4008u: goto label_1d4008;
        case 0x1d400cu: goto label_1d400c;
        case 0x1d4010u: goto label_1d4010;
        case 0x1d4014u: goto label_1d4014;
        case 0x1d4018u: goto label_1d4018;
        case 0x1d401cu: goto label_1d401c;
        case 0x1d4020u: goto label_1d4020;
        case 0x1d4024u: goto label_1d4024;
        case 0x1d4028u: goto label_1d4028;
        case 0x1d402cu: goto label_1d402c;
        case 0x1d4030u: goto label_1d4030;
        case 0x1d4034u: goto label_1d4034;
        case 0x1d4038u: goto label_1d4038;
        case 0x1d403cu: goto label_1d403c;
        case 0x1d4040u: goto label_1d4040;
        case 0x1d4044u: goto label_1d4044;
        case 0x1d4048u: goto label_1d4048;
        case 0x1d404cu: goto label_1d404c;
        case 0x1d4050u: goto label_1d4050;
        case 0x1d4054u: goto label_1d4054;
        case 0x1d4058u: goto label_1d4058;
        case 0x1d405cu: goto label_1d405c;
        case 0x1d4060u: goto label_1d4060;
        case 0x1d4064u: goto label_1d4064;
        case 0x1d4068u: goto label_1d4068;
        case 0x1d406cu: goto label_1d406c;
        case 0x1d4070u: goto label_1d4070;
        case 0x1d4074u: goto label_1d4074;
        case 0x1d4078u: goto label_1d4078;
        case 0x1d407cu: goto label_1d407c;
        case 0x1d4080u: goto label_1d4080;
        case 0x1d4084u: goto label_1d4084;
        case 0x1d4088u: goto label_1d4088;
        case 0x1d408cu: goto label_1d408c;
        case 0x1d4090u: goto label_1d4090;
        case 0x1d4094u: goto label_1d4094;
        case 0x1d4098u: goto label_1d4098;
        case 0x1d409cu: goto label_1d409c;
        case 0x1d40a0u: goto label_1d40a0;
        case 0x1d40a4u: goto label_1d40a4;
        case 0x1d40a8u: goto label_1d40a8;
        case 0x1d40acu: goto label_1d40ac;
        case 0x1d40b0u: goto label_1d40b0;
        case 0x1d40b4u: goto label_1d40b4;
        case 0x1d40b8u: goto label_1d40b8;
        case 0x1d40bcu: goto label_1d40bc;
        case 0x1d40c0u: goto label_1d40c0;
        case 0x1d40c4u: goto label_1d40c4;
        case 0x1d40c8u: goto label_1d40c8;
        case 0x1d40ccu: goto label_1d40cc;
        case 0x1d40d0u: goto label_1d40d0;
        case 0x1d40d4u: goto label_1d40d4;
        case 0x1d40d8u: goto label_1d40d8;
        case 0x1d40dcu: goto label_1d40dc;
        case 0x1d40e0u: goto label_1d40e0;
        case 0x1d40e4u: goto label_1d40e4;
        case 0x1d40e8u: goto label_1d40e8;
        case 0x1d40ecu: goto label_1d40ec;
        case 0x1d40f0u: goto label_1d40f0;
        case 0x1d40f4u: goto label_1d40f4;
        case 0x1d40f8u: goto label_1d40f8;
        case 0x1d40fcu: goto label_1d40fc;
        case 0x1d4100u: goto label_1d4100;
        case 0x1d4104u: goto label_1d4104;
        case 0x1d4108u: goto label_1d4108;
        case 0x1d410cu: goto label_1d410c;
        case 0x1d4110u: goto label_1d4110;
        case 0x1d4114u: goto label_1d4114;
        case 0x1d4118u: goto label_1d4118;
        case 0x1d411cu: goto label_1d411c;
        case 0x1d4120u: goto label_1d4120;
        case 0x1d4124u: goto label_1d4124;
        case 0x1d4128u: goto label_1d4128;
        case 0x1d412cu: goto label_1d412c;
        case 0x1d4130u: goto label_1d4130;
        case 0x1d4134u: goto label_1d4134;
        case 0x1d4138u: goto label_1d4138;
        case 0x1d413cu: goto label_1d413c;
        case 0x1d4140u: goto label_1d4140;
        case 0x1d4144u: goto label_1d4144;
        case 0x1d4148u: goto label_1d4148;
        case 0x1d414cu: goto label_1d414c;
        case 0x1d4150u: goto label_1d4150;
        case 0x1d4154u: goto label_1d4154;
        case 0x1d4158u: goto label_1d4158;
        case 0x1d415cu: goto label_1d415c;
        case 0x1d4160u: goto label_1d4160;
        case 0x1d4164u: goto label_1d4164;
        case 0x1d4168u: goto label_1d4168;
        case 0x1d416cu: goto label_1d416c;
        case 0x1d4170u: goto label_1d4170;
        case 0x1d4174u: goto label_1d4174;
        case 0x1d4178u: goto label_1d4178;
        case 0x1d417cu: goto label_1d417c;
        case 0x1d4180u: goto label_1d4180;
        case 0x1d4184u: goto label_1d4184;
        case 0x1d4188u: goto label_1d4188;
        case 0x1d418cu: goto label_1d418c;
        case 0x1d4190u: goto label_1d4190;
        case 0x1d4194u: goto label_1d4194;
        case 0x1d4198u: goto label_1d4198;
        case 0x1d419cu: goto label_1d419c;
        case 0x1d41a0u: goto label_1d41a0;
        case 0x1d41a4u: goto label_1d41a4;
        case 0x1d41a8u: goto label_1d41a8;
        case 0x1d41acu: goto label_1d41ac;
        case 0x1d41b0u: goto label_1d41b0;
        case 0x1d41b4u: goto label_1d41b4;
        case 0x1d41b8u: goto label_1d41b8;
        case 0x1d41bcu: goto label_1d41bc;
        case 0x1d41c0u: goto label_1d41c0;
        case 0x1d41c4u: goto label_1d41c4;
        case 0x1d41c8u: goto label_1d41c8;
        case 0x1d41ccu: goto label_1d41cc;
        case 0x1d41d0u: goto label_1d41d0;
        case 0x1d41d4u: goto label_1d41d4;
        case 0x1d41d8u: goto label_1d41d8;
        case 0x1d41dcu: goto label_1d41dc;
        case 0x1d41e0u: goto label_1d41e0;
        case 0x1d41e4u: goto label_1d41e4;
        case 0x1d41e8u: goto label_1d41e8;
        case 0x1d41ecu: goto label_1d41ec;
        case 0x1d41f0u: goto label_1d41f0;
        case 0x1d41f4u: goto label_1d41f4;
        case 0x1d41f8u: goto label_1d41f8;
        case 0x1d41fcu: goto label_1d41fc;
        case 0x1d4200u: goto label_1d4200;
        case 0x1d4204u: goto label_1d4204;
        case 0x1d4208u: goto label_1d4208;
        case 0x1d420cu: goto label_1d420c;
        case 0x1d4210u: goto label_1d4210;
        case 0x1d4214u: goto label_1d4214;
        case 0x1d4218u: goto label_1d4218;
        case 0x1d421cu: goto label_1d421c;
        case 0x1d4220u: goto label_1d4220;
        case 0x1d4224u: goto label_1d4224;
        case 0x1d4228u: goto label_1d4228;
        case 0x1d422cu: goto label_1d422c;
        case 0x1d4230u: goto label_1d4230;
        case 0x1d4234u: goto label_1d4234;
        case 0x1d4238u: goto label_1d4238;
        case 0x1d423cu: goto label_1d423c;
        case 0x1d4240u: goto label_1d4240;
        case 0x1d4244u: goto label_1d4244;
        case 0x1d4248u: goto label_1d4248;
        case 0x1d424cu: goto label_1d424c;
        case 0x1d4250u: goto label_1d4250;
        case 0x1d4254u: goto label_1d4254;
        case 0x1d4258u: goto label_1d4258;
        default: break;
    }

    ctx->pc = 0x1d3f80u;

label_1d3f80:
    // 0x1d3f80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1d3f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1d3f84:
    // 0x1d3f84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d3f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d3f88:
    // 0x1d3f88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d3f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d3f8c:
    // 0x1d3f8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d3f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d3f90:
    // 0x1d3f90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d3f90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3f94:
    // 0x1d3f94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d3f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d3f98:
    // 0x1d3f98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d3f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d3f9c:
    // 0x1d3f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d3fa0:
    // 0x1d3fa0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d3fa0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d3fa4:
    // 0x1d3fa4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1d3fa8:
    if (ctx->pc == 0x1D3FA8u) {
        ctx->pc = 0x1D3FA8u;
            // 0x1d3fa8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1D3FACu;
        goto label_1d3fac;
    }
    ctx->pc = 0x1D3FA4u;
    {
        const bool branch_taken_0x1d3fa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FA4u;
            // 0x1d3fa8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fa4) {
            ctx->pc = 0x1D3FC4u;
            goto label_1d3fc4;
        }
    }
    ctx->pc = 0x1D3FACu;
label_1d3fac:
    // 0x1d3fac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d3facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d3fb0:
    // 0x1d3fb0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d3fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d3fb4:
    // 0x1d3fb4: 0xc052cb0  jal         func_14B2C0
label_1d3fb8:
    if (ctx->pc == 0x1D3FB8u) {
        ctx->pc = 0x1D3FB8u;
            // 0x1d3fb8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D3FBCu;
        goto label_1d3fbc;
    }
    ctx->pc = 0x1D3FB4u;
    SET_GPR_U32(ctx, 31, 0x1D3FBCu);
    ctx->pc = 0x1D3FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FB4u;
            // 0x1d3fb8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FBCu; }
        if (ctx->pc != 0x1D3FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FBCu; }
        if (ctx->pc != 0x1D3FBCu) { return; }
    }
    ctx->pc = 0x1D3FBCu;
label_1d3fbc:
    // 0x1d3fbc: 0x10000011  b           . + 4 + (0x11 << 2)
label_1d3fc0:
    if (ctx->pc == 0x1D3FC0u) {
        ctx->pc = 0x1D3FC0u;
            // 0x1d3fc0: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x1D3FC4u;
        goto label_1d3fc4;
    }
    ctx->pc = 0x1D3FBCu;
    {
        const bool branch_taken_0x1d3fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FBCu;
            // 0x1d3fc0: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fbc) {
            ctx->pc = 0x1D4004u;
            goto label_1d4004;
        }
    }
    ctx->pc = 0x1D3FC4u;
label_1d3fc4:
    // 0x1d3fc4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d3fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d3fc8:
    // 0x1d3fc8: 0xc052cc0  jal         func_14B300
label_1d3fcc:
    if (ctx->pc == 0x1D3FCCu) {
        ctx->pc = 0x1D3FCCu;
            // 0x1d3fcc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D3FD0u;
        goto label_1d3fd0;
    }
    ctx->pc = 0x1D3FC8u;
    SET_GPR_U32(ctx, 31, 0x1D3FD0u);
    ctx->pc = 0x1D3FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FC8u;
            // 0x1d3fcc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FD0u; }
        if (ctx->pc != 0x1D3FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FD0u; }
        if (ctx->pc != 0x1D3FD0u) { return; }
    }
    ctx->pc = 0x1D3FD0u;
label_1d3fd0:
    // 0x1d3fd0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1d3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_1d3fd4:
    // 0x1d3fd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d3fd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d3fd8:
    // 0x1d3fd8: 0xc052cd0  jal         func_14B340
label_1d3fdc:
    if (ctx->pc == 0x1D3FDCu) {
        ctx->pc = 0x1D3FDCu;
            // 0x1d3fdc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x1D3FE0u;
        goto label_1d3fe0;
    }
    ctx->pc = 0x1D3FD8u;
    SET_GPR_U32(ctx, 31, 0x1D3FE0u);
    ctx->pc = 0x1D3FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FD8u;
            // 0x1d3fdc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FE0u; }
        if (ctx->pc != 0x1D3FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FE0u; }
        if (ctx->pc != 0x1D3FE0u) { return; }
    }
    ctx->pc = 0x1D3FE0u;
label_1d3fe0:
    // 0x1d3fe0: 0xc064220  jal         func_190880
label_1d3fe4:
    if (ctx->pc == 0x1D3FE4u) {
        ctx->pc = 0x1D3FE4u;
            // 0x1d3fe4: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x1D3FE8u;
        goto label_1d3fe8;
    }
    ctx->pc = 0x1D3FE0u;
    SET_GPR_U32(ctx, 31, 0x1D3FE8u);
    ctx->pc = 0x1D3FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3FE0u;
            // 0x1d3fe4: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FE8u; }
        if (ctx->pc != 0x1D3FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3FE8u; }
        if (ctx->pc != 0x1D3FE8u) { return; }
    }
    ctx->pc = 0x1D3FE8u;
label_1d3fe8:
    // 0x1d3fe8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d3fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d3fec:
    // 0x1d3fec: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x1d3fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_1d3ff0:
    // 0x1d3ff0: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1d3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1d3ff4:
    // 0x1d3ff4: 0x80420036  lb          $v0, 0x36($v0)
    ctx->pc = 0x1d3ff4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 54)));
label_1d3ff8:
    // 0x1d3ff8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d3ffc:
    if (ctx->pc == 0x1D3FFCu) {
        ctx->pc = 0x1D4000u;
        goto label_1d4000;
    }
    ctx->pc = 0x1D3FF8u;
    {
        const bool branch_taken_0x1d3ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ff8) {
            ctx->pc = 0x1D4004u;
            goto label_1d4004;
        }
    }
    ctx->pc = 0x1D4000u;
label_1d4000:
    // 0x1d4000: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x1d4000u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_1d4004:
    // 0x1d4004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4008:
    // 0x1d4008: 0x0  nop
    ctx->pc = 0x1d4008u;
    // NOP
label_1d400c:
    // 0x1d400c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1d400cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4010:
    // 0x1d4010: 0x0  nop
    ctx->pc = 0x1d4010u;
    // NOP
label_1d4014:
    // 0x1d4014: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_1d4018:
    if (ctx->pc == 0x1D4018u) {
        ctx->pc = 0x1D4018u;
            // 0x1d4018: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->pc = 0x1D401Cu;
        goto label_1d401c;
    }
    ctx->pc = 0x1D4014u;
    {
        const bool branch_taken_0x1d4014 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4014u;
            // 0x1d4018: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4014) {
            ctx->pc = 0x1D4068u;
            goto label_1d4068;
        }
    }
    ctx->pc = 0x1D401Cu;
label_1d401c:
    // 0x1d401c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1d401cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1d4020:
    // 0x1d4020: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4024:
    // 0x1d4024: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d4024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d4028:
    // 0x1d4028: 0xc7828d7c  lwc1        $f2, -0x7284($gp)
    ctx->pc = 0x1d4028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d402c:
    // 0x1d402c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d4030:
    // 0x1d4030: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1d4030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1d4034:
    // 0x1d4034: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d4034u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1d4038:
    // 0x1d4038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d403c:
    // 0x1d403c: 0x0  nop
    ctx->pc = 0x1d403cu;
    // NOP
label_1d4040:
    // 0x1d4040: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4044:
    // 0x1d4044: 0x0  nop
    ctx->pc = 0x1d4044u;
    // NOP
label_1d4048:
    // 0x1d4048: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d404c:
    if (ctx->pc == 0x1D404Cu) {
        ctx->pc = 0x1D404Cu;
            // 0x1d404c: 0xe7818d7c  swc1        $f1, -0x7284($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937980), bits); }
        ctx->pc = 0x1D4050u;
        goto label_1d4050;
    }
    ctx->pc = 0x1D4048u;
    {
        const bool branch_taken_0x1d4048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4048u;
            // 0x1d404c: 0xe7818d7c  swc1        $f1, -0x7284($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937980), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4048) {
            ctx->pc = 0x1D4068u;
            goto label_1d4068;
        }
    }
    ctx->pc = 0x1D4050u;
label_1d4050:
    // 0x1d4050: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d4050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d4054:
    // 0x1d4054: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d4054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d4058:
    // 0x1d4058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d405c:
    // 0x1d405c: 0x0  nop
    ctx->pc = 0x1d405cu;
    // NOP
label_1d4060:
    // 0x1d4060: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d4064:
    // 0x1d4064: 0xe7808d7c  swc1        $f0, -0x7284($gp)
    ctx->pc = 0x1d4064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937980), bits); }
label_1d4068:
    // 0x1d4068: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d406c:
    // 0x1d406c: 0x0  nop
    ctx->pc = 0x1d406cu;
    // NOP
label_1d4070:
    // 0x1d4070: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1d4070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4074:
    // 0x1d4074: 0x0  nop
    ctx->pc = 0x1d4074u;
    // NOP
label_1d4078:
    // 0x1d4078: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_1d407c:
    if (ctx->pc == 0x1D407Cu) {
        ctx->pc = 0x1D407Cu;
            // 0x1d407c: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->pc = 0x1D4080u;
        goto label_1d4080;
    }
    ctx->pc = 0x1D4078u;
    {
        const bool branch_taken_0x1d4078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4078u;
            // 0x1d407c: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4078) {
            ctx->pc = 0x1D40CCu;
            goto label_1d40cc;
        }
    }
    ctx->pc = 0x1D4080u;
label_1d4080:
    // 0x1d4080: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1d4080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1d4084:
    // 0x1d4084: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4088:
    // 0x1d4088: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d4088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d408c:
    // 0x1d408c: 0xc7828d7c  lwc1        $f2, -0x7284($gp)
    ctx->pc = 0x1d408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d4090:
    // 0x1d4090: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d4090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d4094:
    // 0x1d4094: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1d4094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1d4098:
    // 0x1d4098: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d4098u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1d409c:
    // 0x1d409c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d409cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d40a0:
    // 0x1d40a0: 0x0  nop
    ctx->pc = 0x1d40a0u;
    // NOP
label_1d40a4:
    // 0x1d40a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d40a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d40a8:
    // 0x1d40a8: 0x0  nop
    ctx->pc = 0x1d40a8u;
    // NOP
label_1d40ac:
    // 0x1d40ac: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d40b0:
    if (ctx->pc == 0x1D40B0u) {
        ctx->pc = 0x1D40B0u;
            // 0x1d40b0: 0xe7818d7c  swc1        $f1, -0x7284($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937980), bits); }
        ctx->pc = 0x1D40B4u;
        goto label_1d40b4;
    }
    ctx->pc = 0x1D40ACu;
    {
        const bool branch_taken_0x1d40ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D40B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D40ACu;
            // 0x1d40b0: 0xe7818d7c  swc1        $f1, -0x7284($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937980), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40ac) {
            ctx->pc = 0x1D40CCu;
            goto label_1d40cc;
        }
    }
    ctx->pc = 0x1D40B4u;
label_1d40b4:
    // 0x1d40b4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d40b8:
    // 0x1d40b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d40b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1d40bc:
    // 0x1d40bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d40bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d40c0:
    // 0x1d40c0: 0x0  nop
    ctx->pc = 0x1d40c0u;
    // NOP
label_1d40c4:
    // 0x1d40c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d40c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d40c8:
    // 0x1d40c8: 0xe7808d7c  swc1        $f0, -0x7284($gp)
    ctx->pc = 0x1d40c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937980), bits); }
label_1d40cc:
    // 0x1d40cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d40ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d40d0:
    // 0x1d40d0: 0x0  nop
    ctx->pc = 0x1d40d0u;
    // NOP
label_1d40d4:
    // 0x1d40d4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1d40d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d40d8:
    // 0x1d40d8: 0x0  nop
    ctx->pc = 0x1d40d8u;
    // NOP
label_1d40dc:
    // 0x1d40dc: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_1d40e0:
    if (ctx->pc == 0x1D40E0u) {
        ctx->pc = 0x1D40E4u;
        goto label_1d40e4;
    }
    ctx->pc = 0x1D40DCu;
    {
        const bool branch_taken_0x1d40dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d40dc) {
            ctx->pc = 0x1D4120u;
            goto label_1d4120;
        }
    }
    ctx->pc = 0x1D40E4u;
label_1d40e4:
    // 0x1d40e4: 0xc7818d80  lwc1        $f1, -0x7280($gp)
    ctx->pc = 0x1d40e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d40e8:
    // 0x1d40e8: 0x3c023f26  lui         $v0, 0x3F26
    ctx->pc = 0x1d40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16166 << 16));
label_1d40ec:
    // 0x1d40ec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1d40ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1d40f0:
    // 0x1d40f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d40f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d40f4:
    // 0x1d40f4: 0x0  nop
    ctx->pc = 0x1d40f4u;
    // NOP
label_1d40f8:
    // 0x1d40f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d40f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d40fc:
    // 0x1d40fc: 0x0  nop
    ctx->pc = 0x1d40fcu;
    // NOP
label_1d4100:
    // 0x1d4100: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d4104:
    if (ctx->pc == 0x1D4104u) {
        ctx->pc = 0x1D4104u;
            // 0x1d4104: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->pc = 0x1D4108u;
        goto label_1d4108;
    }
    ctx->pc = 0x1D4100u;
    {
        const bool branch_taken_0x1d4100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4100u;
            // 0x1d4104: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4100) {
            ctx->pc = 0x1D4120u;
            goto label_1d4120;
        }
    }
    ctx->pc = 0x1D4108u;
label_1d4108:
    // 0x1d4108: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1d410c:
    // 0x1d410c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d410cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4110:
    // 0x1d4110: 0x0  nop
    ctx->pc = 0x1d4110u;
    // NOP
label_1d4114:
    // 0x1d4114: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1d4114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d4118:
    // 0x1d4118: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d411c:
    // 0x1d411c: 0xe7808d80  swc1        $f0, -0x7280($gp)
    ctx->pc = 0x1d411cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937984), bits); }
label_1d4120:
    // 0x1d4120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4124:
    // 0x1d4124: 0x0  nop
    ctx->pc = 0x1d4124u;
    // NOP
label_1d4128:
    // 0x1d4128: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1d4128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d412c:
    // 0x1d412c: 0x0  nop
    ctx->pc = 0x1d412cu;
    // NOP
label_1d4130:
    // 0x1d4130: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1d4134:
    if (ctx->pc == 0x1D4134u) {
        ctx->pc = 0x1D4138u;
        goto label_1d4138;
    }
    ctx->pc = 0x1D4130u;
    {
        const bool branch_taken_0x1d4130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4130) {
            ctx->pc = 0x1D4170u;
            goto label_1d4170;
        }
    }
    ctx->pc = 0x1D4138u;
label_1d4138:
    // 0x1d4138: 0xc7818d80  lwc1        $f1, -0x7280($gp)
    ctx->pc = 0x1d4138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d413c:
    // 0x1d413c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d413cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d4140:
    // 0x1d4140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4144:
    // 0x1d4144: 0x0  nop
    ctx->pc = 0x1d4144u;
    // NOP
label_1d4148:
    // 0x1d4148: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d4148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d414c:
    // 0x1d414c: 0x0  nop
    ctx->pc = 0x1d414cu;
    // NOP
label_1d4150:
    // 0x1d4150: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d4154:
    if (ctx->pc == 0x1D4154u) {
        ctx->pc = 0x1D4154u;
            // 0x1d4154: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->pc = 0x1D4158u;
        goto label_1d4158;
    }
    ctx->pc = 0x1D4150u;
    {
        const bool branch_taken_0x1d4150 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4150u;
            // 0x1d4154: 0x3c023d23  lui         $v0, 0x3D23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4150) {
            ctx->pc = 0x1D4170u;
            goto label_1d4170;
        }
    }
    ctx->pc = 0x1D4158u;
label_1d4158:
    // 0x1d4158: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1d415c:
    // 0x1d415c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d415cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4160:
    // 0x1d4160: 0x0  nop
    ctx->pc = 0x1d4160u;
    // NOP
label_1d4164:
    // 0x1d4164: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1d4164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d4168:
    // 0x1d4168: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d416c:
    // 0x1d416c: 0xe7808d80  swc1        $f0, -0x7280($gp)
    ctx->pc = 0x1d416cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937984), bits); }
label_1d4170:
    // 0x1d4170: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1d4170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_1d4174:
    // 0x1d4174: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x1d4174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1d4178:
    // 0x1d4178: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d4178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1d417c:
    // 0x1d417c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d4180:
    // 0x1d4180: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x1d4180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1d4184:
    // 0x1d4184: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d4184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d4188:
    // 0x1d4188: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d4188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d418c:
    // 0x1d418c: 0xc041c7a  jal         func_1071E8
label_1d4190:
    if (ctx->pc == 0x1D4190u) {
        ctx->pc = 0x1D4190u;
            // 0x1d4190: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x1D4194u;
        goto label_1d4194;
    }
    ctx->pc = 0x1D418Cu;
    SET_GPR_U32(ctx, 31, 0x1D4194u);
    ctx->pc = 0x1D4190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D418Cu;
            // 0x1d4190: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4194u; }
        if (ctx->pc != 0x1D4194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4194u; }
        if (ctx->pc != 0x1D4194u) { return; }
    }
    ctx->pc = 0x1D4194u;
label_1d4194:
    // 0x1d4194: 0xc78c8d80  lwc1        $f12, -0x7280($gp)
    ctx->pc = 0x1d4194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d4198:
    // 0x1d4198: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d4198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d419c:
    // 0x1d419c: 0xc041ccc  jal         func_107330
label_1d41a0:
    if (ctx->pc == 0x1D41A0u) {
        ctx->pc = 0x1D41A0u;
            // 0x1d41a0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1D41A4u;
        goto label_1d41a4;
    }
    ctx->pc = 0x1D419Cu;
    SET_GPR_U32(ctx, 31, 0x1D41A4u);
    ctx->pc = 0x1D41A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D419Cu;
            // 0x1d41a0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107330u;
    if (runtime->hasFunction(0x107330u)) {
        auto targetFn = runtime->lookupFunction(0x107330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41A4u; }
        if (ctx->pc != 0x1D41A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x107330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41A4u; }
        if (ctx->pc != 0x1D41A4u) { return; }
    }
    ctx->pc = 0x1D41A4u;
label_1d41a4:
    // 0x1d41a4: 0xc78c8d7c  lwc1        $f12, -0x7284($gp)
    ctx->pc = 0x1d41a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d41a8:
    // 0x1d41a8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d41a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d41ac:
    // 0x1d41ac: 0xc041cf6  jal         func_1073D8
label_1d41b0:
    if (ctx->pc == 0x1D41B0u) {
        ctx->pc = 0x1D41B0u;
            // 0x1d41b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D41B4u;
        goto label_1d41b4;
    }
    ctx->pc = 0x1D41ACu;
    SET_GPR_U32(ctx, 31, 0x1D41B4u);
    ctx->pc = 0x1D41B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41ACu;
            // 0x1d41b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41B4u; }
        if (ctx->pc != 0x1D41B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41B4u; }
        if (ctx->pc != 0x1D41B4u) { return; }
    }
    ctx->pc = 0x1D41B4u;
label_1d41b4:
    // 0x1d41b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d41b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1d41b8:
    // 0x1d41b8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1d41b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d41bc:
    // 0x1d41bc: 0xc041bb0  jal         func_106EC0
label_1d41c0:
    if (ctx->pc == 0x1D41C0u) {
        ctx->pc = 0x1D41C0u;
            // 0x1d41c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D41C4u;
        goto label_1d41c4;
    }
    ctx->pc = 0x1D41BCu;
    SET_GPR_U32(ctx, 31, 0x1D41C4u);
    ctx->pc = 0x1D41C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41BCu;
            // 0x1d41c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41C4u; }
        if (ctx->pc != 0x1D41C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41C4u; }
        if (ctx->pc != 0x1D41C4u) { return; }
    }
    ctx->pc = 0x1D41C4u;
label_1d41c4:
    // 0x1d41c4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1d41c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d41c8:
    // 0x1d41c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d41c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d41cc:
    // 0x1d41cc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d41ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d41d0:
    // 0x1d41d0: 0x320f809  jalr        $t9
label_1d41d4:
    if (ctx->pc == 0x1D41D4u) {
        ctx->pc = 0x1D41D4u;
            // 0x1d41d4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D41D8u;
        goto label_1d41d8;
    }
    ctx->pc = 0x1D41D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D41D8u);
        ctx->pc = 0x1D41D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41D0u;
            // 0x1d41d4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D41D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D41D8u; }
            if (ctx->pc != 0x1D41D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D41D8u;
label_1d41d8:
    // 0x1d41d8: 0x27a30064  addiu       $v1, $sp, 0x64
    ctx->pc = 0x1d41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1d41dc:
    // 0x1d41dc: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x1d41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
label_1d41e0:
    // 0x1d41e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1d41e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d41e4:
    // 0x1d41e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d41e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d41e8:
    // 0x1d41e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d41e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d41ec:
    // 0x1d41ec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1d41ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1d41f0:
    // 0x1d41f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d41f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d41f4:
    // 0x1d41f4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d41f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1d41f8:
    // 0x1d41f8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1d41f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d41fc:
    // 0x1d41fc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1d41fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4200:
    // 0x1d4200: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d4204:
    // 0x1d4204: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1d4204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1d4208:
    // 0x1d4208: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1d4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d420c:
    // 0x1d420c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1d420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4210:
    // 0x1d4210: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d4214:
    // 0x1d4214: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d4214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1d4218:
    // 0x1d4218: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d4218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d421c:
    // 0x1d421c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1d421cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4220:
    // 0x1d4220: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d4224:
    // 0x1d4224: 0xc04c504  jal         func_131410
label_1d4228:
    if (ctx->pc == 0x1D4228u) {
        ctx->pc = 0x1D4228u;
            // 0x1d4228: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x1D422Cu;
        goto label_1d422c;
    }
    ctx->pc = 0x1D4224u;
    SET_GPR_U32(ctx, 31, 0x1D422Cu);
    ctx->pc = 0x1D4228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4224u;
            // 0x1d4228: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D422Cu; }
        if (ctx->pc != 0x1D422Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D422Cu; }
        if (ctx->pc != 0x1D422Cu) { return; }
    }
    ctx->pc = 0x1D422Cu;
label_1d422c:
    // 0x1d422c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d4230:
    // 0x1d4230: 0xc04c518  jal         func_131460
label_1d4234:
    if (ctx->pc == 0x1D4234u) {
        ctx->pc = 0x1D4234u;
            // 0x1d4234: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1D4238u;
        goto label_1d4238;
    }
    ctx->pc = 0x1D4230u;
    SET_GPR_U32(ctx, 31, 0x1D4238u);
    ctx->pc = 0x1D4234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4230u;
            // 0x1d4234: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4238u; }
        if (ctx->pc != 0x1D4238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4238u; }
        if (ctx->pc != 0x1D4238u) { return; }
    }
    ctx->pc = 0x1D4238u;
label_1d4238:
    // 0x1d4238: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d4238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d423c:
    // 0x1d423c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d4240:
    // 0x1d4240: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d4240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d4244:
    // 0x1d4244: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d4244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d4248:
    // 0x1d4248: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d4248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d424c:
    // 0x1d424c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d424cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4250:
    // 0x1d4250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d4250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4254:
    // 0x1d4254: 0x3e00008  jr          $ra
label_1d4258:
    if (ctx->pc == 0x1D4258u) {
        ctx->pc = 0x1D4258u;
            // 0x1d4258: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1D425Cu;
        goto label_fallthrough_0x1d4254;
    }
    ctx->pc = 0x1D4254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4254u;
            // 0x1d4258: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d4254:
    ctx->pc = 0x1D425Cu;
}
