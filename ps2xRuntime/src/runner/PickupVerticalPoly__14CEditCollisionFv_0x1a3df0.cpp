#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PickupVerticalPoly__14CEditCollisionFv
// Address: 0x1a3df0 - 0x1a40e0
void PickupVerticalPoly__14CEditCollisionFv_0x1a3df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PickupVerticalPoly__14CEditCollisionFv_0x1a3df0");
#endif

    switch (ctx->pc) {
        case 0x1a3df0u: goto label_1a3df0;
        case 0x1a3df4u: goto label_1a3df4;
        case 0x1a3df8u: goto label_1a3df8;
        case 0x1a3dfcu: goto label_1a3dfc;
        case 0x1a3e00u: goto label_1a3e00;
        case 0x1a3e04u: goto label_1a3e04;
        case 0x1a3e08u: goto label_1a3e08;
        case 0x1a3e0cu: goto label_1a3e0c;
        case 0x1a3e10u: goto label_1a3e10;
        case 0x1a3e14u: goto label_1a3e14;
        case 0x1a3e18u: goto label_1a3e18;
        case 0x1a3e1cu: goto label_1a3e1c;
        case 0x1a3e20u: goto label_1a3e20;
        case 0x1a3e24u: goto label_1a3e24;
        case 0x1a3e28u: goto label_1a3e28;
        case 0x1a3e2cu: goto label_1a3e2c;
        case 0x1a3e30u: goto label_1a3e30;
        case 0x1a3e34u: goto label_1a3e34;
        case 0x1a3e38u: goto label_1a3e38;
        case 0x1a3e3cu: goto label_1a3e3c;
        case 0x1a3e40u: goto label_1a3e40;
        case 0x1a3e44u: goto label_1a3e44;
        case 0x1a3e48u: goto label_1a3e48;
        case 0x1a3e4cu: goto label_1a3e4c;
        case 0x1a3e50u: goto label_1a3e50;
        case 0x1a3e54u: goto label_1a3e54;
        case 0x1a3e58u: goto label_1a3e58;
        case 0x1a3e5cu: goto label_1a3e5c;
        case 0x1a3e60u: goto label_1a3e60;
        case 0x1a3e64u: goto label_1a3e64;
        case 0x1a3e68u: goto label_1a3e68;
        case 0x1a3e6cu: goto label_1a3e6c;
        case 0x1a3e70u: goto label_1a3e70;
        case 0x1a3e74u: goto label_1a3e74;
        case 0x1a3e78u: goto label_1a3e78;
        case 0x1a3e7cu: goto label_1a3e7c;
        case 0x1a3e80u: goto label_1a3e80;
        case 0x1a3e84u: goto label_1a3e84;
        case 0x1a3e88u: goto label_1a3e88;
        case 0x1a3e8cu: goto label_1a3e8c;
        case 0x1a3e90u: goto label_1a3e90;
        case 0x1a3e94u: goto label_1a3e94;
        case 0x1a3e98u: goto label_1a3e98;
        case 0x1a3e9cu: goto label_1a3e9c;
        case 0x1a3ea0u: goto label_1a3ea0;
        case 0x1a3ea4u: goto label_1a3ea4;
        case 0x1a3ea8u: goto label_1a3ea8;
        case 0x1a3eacu: goto label_1a3eac;
        case 0x1a3eb0u: goto label_1a3eb0;
        case 0x1a3eb4u: goto label_1a3eb4;
        case 0x1a3eb8u: goto label_1a3eb8;
        case 0x1a3ebcu: goto label_1a3ebc;
        case 0x1a3ec0u: goto label_1a3ec0;
        case 0x1a3ec4u: goto label_1a3ec4;
        case 0x1a3ec8u: goto label_1a3ec8;
        case 0x1a3eccu: goto label_1a3ecc;
        case 0x1a3ed0u: goto label_1a3ed0;
        case 0x1a3ed4u: goto label_1a3ed4;
        case 0x1a3ed8u: goto label_1a3ed8;
        case 0x1a3edcu: goto label_1a3edc;
        case 0x1a3ee0u: goto label_1a3ee0;
        case 0x1a3ee4u: goto label_1a3ee4;
        case 0x1a3ee8u: goto label_1a3ee8;
        case 0x1a3eecu: goto label_1a3eec;
        case 0x1a3ef0u: goto label_1a3ef0;
        case 0x1a3ef4u: goto label_1a3ef4;
        case 0x1a3ef8u: goto label_1a3ef8;
        case 0x1a3efcu: goto label_1a3efc;
        case 0x1a3f00u: goto label_1a3f00;
        case 0x1a3f04u: goto label_1a3f04;
        case 0x1a3f08u: goto label_1a3f08;
        case 0x1a3f0cu: goto label_1a3f0c;
        case 0x1a3f10u: goto label_1a3f10;
        case 0x1a3f14u: goto label_1a3f14;
        case 0x1a3f18u: goto label_1a3f18;
        case 0x1a3f1cu: goto label_1a3f1c;
        case 0x1a3f20u: goto label_1a3f20;
        case 0x1a3f24u: goto label_1a3f24;
        case 0x1a3f28u: goto label_1a3f28;
        case 0x1a3f2cu: goto label_1a3f2c;
        case 0x1a3f30u: goto label_1a3f30;
        case 0x1a3f34u: goto label_1a3f34;
        case 0x1a3f38u: goto label_1a3f38;
        case 0x1a3f3cu: goto label_1a3f3c;
        case 0x1a3f40u: goto label_1a3f40;
        case 0x1a3f44u: goto label_1a3f44;
        case 0x1a3f48u: goto label_1a3f48;
        case 0x1a3f4cu: goto label_1a3f4c;
        case 0x1a3f50u: goto label_1a3f50;
        case 0x1a3f54u: goto label_1a3f54;
        case 0x1a3f58u: goto label_1a3f58;
        case 0x1a3f5cu: goto label_1a3f5c;
        case 0x1a3f60u: goto label_1a3f60;
        case 0x1a3f64u: goto label_1a3f64;
        case 0x1a3f68u: goto label_1a3f68;
        case 0x1a3f6cu: goto label_1a3f6c;
        case 0x1a3f70u: goto label_1a3f70;
        case 0x1a3f74u: goto label_1a3f74;
        case 0x1a3f78u: goto label_1a3f78;
        case 0x1a3f7cu: goto label_1a3f7c;
        case 0x1a3f80u: goto label_1a3f80;
        case 0x1a3f84u: goto label_1a3f84;
        case 0x1a3f88u: goto label_1a3f88;
        case 0x1a3f8cu: goto label_1a3f8c;
        case 0x1a3f90u: goto label_1a3f90;
        case 0x1a3f94u: goto label_1a3f94;
        case 0x1a3f98u: goto label_1a3f98;
        case 0x1a3f9cu: goto label_1a3f9c;
        case 0x1a3fa0u: goto label_1a3fa0;
        case 0x1a3fa4u: goto label_1a3fa4;
        case 0x1a3fa8u: goto label_1a3fa8;
        case 0x1a3facu: goto label_1a3fac;
        case 0x1a3fb0u: goto label_1a3fb0;
        case 0x1a3fb4u: goto label_1a3fb4;
        case 0x1a3fb8u: goto label_1a3fb8;
        case 0x1a3fbcu: goto label_1a3fbc;
        case 0x1a3fc0u: goto label_1a3fc0;
        case 0x1a3fc4u: goto label_1a3fc4;
        case 0x1a3fc8u: goto label_1a3fc8;
        case 0x1a3fccu: goto label_1a3fcc;
        case 0x1a3fd0u: goto label_1a3fd0;
        case 0x1a3fd4u: goto label_1a3fd4;
        case 0x1a3fd8u: goto label_1a3fd8;
        case 0x1a3fdcu: goto label_1a3fdc;
        case 0x1a3fe0u: goto label_1a3fe0;
        case 0x1a3fe4u: goto label_1a3fe4;
        case 0x1a3fe8u: goto label_1a3fe8;
        case 0x1a3fecu: goto label_1a3fec;
        case 0x1a3ff0u: goto label_1a3ff0;
        case 0x1a3ff4u: goto label_1a3ff4;
        case 0x1a3ff8u: goto label_1a3ff8;
        case 0x1a3ffcu: goto label_1a3ffc;
        case 0x1a4000u: goto label_1a4000;
        case 0x1a4004u: goto label_1a4004;
        case 0x1a4008u: goto label_1a4008;
        case 0x1a400cu: goto label_1a400c;
        case 0x1a4010u: goto label_1a4010;
        case 0x1a4014u: goto label_1a4014;
        case 0x1a4018u: goto label_1a4018;
        case 0x1a401cu: goto label_1a401c;
        case 0x1a4020u: goto label_1a4020;
        case 0x1a4024u: goto label_1a4024;
        case 0x1a4028u: goto label_1a4028;
        case 0x1a402cu: goto label_1a402c;
        case 0x1a4030u: goto label_1a4030;
        case 0x1a4034u: goto label_1a4034;
        case 0x1a4038u: goto label_1a4038;
        case 0x1a403cu: goto label_1a403c;
        case 0x1a4040u: goto label_1a4040;
        case 0x1a4044u: goto label_1a4044;
        case 0x1a4048u: goto label_1a4048;
        case 0x1a404cu: goto label_1a404c;
        case 0x1a4050u: goto label_1a4050;
        case 0x1a4054u: goto label_1a4054;
        case 0x1a4058u: goto label_1a4058;
        case 0x1a405cu: goto label_1a405c;
        case 0x1a4060u: goto label_1a4060;
        case 0x1a4064u: goto label_1a4064;
        case 0x1a4068u: goto label_1a4068;
        case 0x1a406cu: goto label_1a406c;
        case 0x1a4070u: goto label_1a4070;
        case 0x1a4074u: goto label_1a4074;
        case 0x1a4078u: goto label_1a4078;
        case 0x1a407cu: goto label_1a407c;
        case 0x1a4080u: goto label_1a4080;
        case 0x1a4084u: goto label_1a4084;
        case 0x1a4088u: goto label_1a4088;
        case 0x1a408cu: goto label_1a408c;
        case 0x1a4090u: goto label_1a4090;
        case 0x1a4094u: goto label_1a4094;
        case 0x1a4098u: goto label_1a4098;
        case 0x1a409cu: goto label_1a409c;
        case 0x1a40a0u: goto label_1a40a0;
        case 0x1a40a4u: goto label_1a40a4;
        case 0x1a40a8u: goto label_1a40a8;
        case 0x1a40acu: goto label_1a40ac;
        case 0x1a40b0u: goto label_1a40b0;
        case 0x1a40b4u: goto label_1a40b4;
        case 0x1a40b8u: goto label_1a40b8;
        case 0x1a40bcu: goto label_1a40bc;
        case 0x1a40c0u: goto label_1a40c0;
        case 0x1a40c4u: goto label_1a40c4;
        case 0x1a40c8u: goto label_1a40c8;
        case 0x1a40ccu: goto label_1a40cc;
        case 0x1a40d0u: goto label_1a40d0;
        case 0x1a40d4u: goto label_1a40d4;
        case 0x1a40d8u: goto label_1a40d8;
        case 0x1a40dcu: goto label_1a40dc;
        default: break;
    }

    ctx->pc = 0x1a3df0u;

label_1a3df0:
    // 0x1a3df0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a3df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1a3df4:
    // 0x1a3df4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a3df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a3df8:
    // 0x1a3df8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1a3df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1a3dfc:
    // 0x1a3dfc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a3dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1a3e00:
    // 0x1a3e00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a3e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1a3e04:
    // 0x1a3e04: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a3e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1a3e08:
    // 0x1a3e08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a3e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a3e0c:
    // 0x1a3e0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a3e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a3e10:
    // 0x1a3e10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a3e14:
    // 0x1a3e14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a3e14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a3e18:
    // 0x1a3e18: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x1a3e18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a3e1c:
    // 0x1a3e1c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1a3e20:
    if (ctx->pc == 0x1A3E20u) {
        ctx->pc = 0x1A3E20u;
            // 0x1a3e20: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E24u;
        goto label_1a3e24;
    }
    ctx->pc = 0x1A3E1Cu;
    {
        const bool branch_taken_0x1a3e1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E1Cu;
            // 0x1a3e20: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e1c) {
            ctx->pc = 0x1A3E2Cu;
            goto label_1a3e2c;
        }
    }
    ctx->pc = 0x1A3E24u;
label_1a3e24:
    // 0x1a3e24: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_1a3e28:
    if (ctx->pc == 0x1A3E28u) {
        ctx->pc = 0x1A3E28u;
            // 0x1a3e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E2Cu;
        goto label_1a3e2c;
    }
    ctx->pc = 0x1A3E24u;
    {
        const bool branch_taken_0x1a3e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E24u;
            // 0x1a3e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e24) {
            ctx->pc = 0x1A40B4u;
            goto label_1a40b4;
        }
    }
    ctx->pc = 0x1A3E2Cu;
label_1a3e2c:
    // 0x1a3e2c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1a3e30:
    if (ctx->pc == 0x1A3E30u) {
        ctx->pc = 0x1A3E30u;
            // 0x1a3e30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E34u;
        goto label_1a3e34;
    }
    ctx->pc = 0x1A3E2Cu;
    {
        const bool branch_taken_0x1a3e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E2Cu;
            // 0x1a3e30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e2c) {
            ctx->pc = 0x1A3F64u;
            goto label_1a3f64;
        }
    }
    ctx->pc = 0x1A3E34u;
label_1a3e34:
    // 0x1a3e34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a3e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1a3e38:
    // 0x1a3e38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a3e3c:
    // 0x1a3e3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a3e40:
    // 0x1a3e40: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1a3e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a3e44:
    // 0x1a3e44: 0xc041be0  jal         func_106F80
label_1a3e48:
    if (ctx->pc == 0x1A3E48u) {
        ctx->pc = 0x1A3E48u;
            // 0x1a3e48: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1A3E4Cu;
        goto label_1a3e4c;
    }
    ctx->pc = 0x1A3E44u;
    SET_GPR_U32(ctx, 31, 0x1A3E4Cu);
    ctx->pc = 0x1A3E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3E44u;
            // 0x1a3e48: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E4Cu; }
        if (ctx->pc != 0x1A3E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3E4Cu; }
        if (ctx->pc != 0x1A3E4Cu) { return; }
    }
    ctx->pc = 0x1A3E4Cu;
label_1a3e4c:
    // 0x1a3e4c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1a3e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3e50:
    // 0x1a3e50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3e54:
    // 0x1a3e54: 0x0  nop
    ctx->pc = 0x1a3e54u;
    // NOP
label_1a3e58:
    // 0x1a3e58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3e5c:
    // 0x1a3e5c: 0x0  nop
    ctx->pc = 0x1a3e5cu;
    // NOP
label_1a3e60:
    // 0x1a3e60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a3e64:
    if (ctx->pc == 0x1A3E64u) {
        ctx->pc = 0x1A3E68u;
        goto label_1a3e68;
    }
    ctx->pc = 0x1A3E60u;
    {
        const bool branch_taken_0x1a3e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3e60) {
            ctx->pc = 0x1A3E6Cu;
            goto label_1a3e6c;
        }
    }
    ctx->pc = 0x1A3E68u;
label_1a3e68:
    // 0x1a3e68: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a3e68u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a3e6c:
    // 0x1a3e6c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a3e70:
    // 0x1a3e70: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a3e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a3e74:
    // 0x1a3e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3e78:
    // 0x1a3e78: 0x0  nop
    ctx->pc = 0x1a3e78u;
    // NOP
label_1a3e7c:
    // 0x1a3e7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a3e7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3e80:
    // 0x1a3e80: 0x0  nop
    ctx->pc = 0x1a3e80u;
    // NOP
label_1a3e84:
    // 0x1a3e84: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_1a3e88:
    if (ctx->pc == 0x1A3E88u) {
        ctx->pc = 0x1A3E8Cu;
        goto label_1a3e8c;
    }
    ctx->pc = 0x1A3E84u;
    {
        const bool branch_taken_0x1a3e84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3e84) {
            ctx->pc = 0x1A3F5Cu;
            goto label_1a3f5c;
        }
    }
    ctx->pc = 0x1A3E8Cu;
label_1a3e8c:
    // 0x1a3e8c: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x1a3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_1a3e90:
    // 0x1a3e90: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_1a3e94:
    if (ctx->pc == 0x1A3E94u) {
        ctx->pc = 0x1A3E98u;
        goto label_1a3e98;
    }
    ctx->pc = 0x1A3E90u;
    {
        const bool branch_taken_0x1a3e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e90) {
            ctx->pc = 0x1A3F78u;
            goto label_1a3f78;
        }
    }
    ctx->pc = 0x1A3E98u;
label_1a3e98:
    // 0x1a3e98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a3e9c:
    // 0x1a3e9c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a3e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1a3ea0:
    // 0x1a3ea0: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x1a3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_1a3ea4:
    // 0x1a3ea4: 0x8ea40044  lw          $a0, 0x44($s5)
    ctx->pc = 0x1a3ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_1a3ea8:
    // 0x1a3ea8: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x1a3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_1a3eac:
    // 0x1a3eac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a3eb0:
    // 0x1a3eb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a3eb4:
    // 0x1a3eb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a3eb8:
    // 0x1a3eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3ebc:
    // 0x1a3ebc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1a3ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3ec0:
    // 0x1a3ec0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1a3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3ec4:
    // 0x1a3ec4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a3ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3ec8:
    // 0x1a3ec8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1a3ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3ecc:
    // 0x1a3ecc: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x1a3eccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1a3ed0:
    // 0x1a3ed0: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1a3ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1a3ed4:
    // 0x1a3ed4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1a3ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1a3ed8:
    // 0x1a3ed8: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1a3ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1a3edc:
    // 0x1a3edc: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1a3edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3ee0:
    // 0x1a3ee0: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x1a3ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3ee4:
    // 0x1a3ee4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1a3ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3ee8:
    // 0x1a3ee8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1a3ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3eec:
    // 0x1a3eec: 0xe6430010  swc1        $f3, 0x10($s2)
    ctx->pc = 0x1a3eecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_1a3ef0:
    // 0x1a3ef0: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x1a3ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1a3ef4:
    // 0x1a3ef4: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x1a3ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_1a3ef8:
    // 0x1a3ef8: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1a3ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_1a3efc:
    // 0x1a3efc: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x1a3efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3f00:
    // 0x1a3f00: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1a3f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3f04:
    // 0x1a3f04: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1a3f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3f08:
    // 0x1a3f08: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x1a3f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3f0c:
    // 0x1a3f0c: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x1a3f0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1a3f10:
    // 0x1a3f10: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x1a3f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_1a3f14:
    // 0x1a3f14: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x1a3f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_1a3f18:
    // 0x1a3f18: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x1a3f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_1a3f1c:
    // 0x1a3f1c: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x1a3f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3f20:
    // 0x1a3f20: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x1a3f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3f24:
    // 0x1a3f24: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1a3f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3f28:
    // 0x1a3f28: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1a3f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3f2c:
    // 0x1a3f2c: 0xe6430030  swc1        $f3, 0x30($s2)
    ctx->pc = 0x1a3f2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_1a3f30:
    // 0x1a3f30: 0xe6420034  swc1        $f2, 0x34($s2)
    ctx->pc = 0x1a3f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_1a3f34:
    // 0x1a3f34: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x1a3f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_1a3f38:
    // 0x1a3f38: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x1a3f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_1a3f3c:
    // 0x1a3f3c: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x1a3f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3f40:
    // 0x1a3f40: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x1a3f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3f44:
    // 0x1a3f44: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x1a3f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3f48:
    // 0x1a3f48: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1a3f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3f4c:
    // 0x1a3f4c: 0xe6430040  swc1        $f3, 0x40($s2)
    ctx->pc = 0x1a3f4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_1a3f50:
    // 0x1a3f50: 0xe6420044  swc1        $f2, 0x44($s2)
    ctx->pc = 0x1a3f50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_1a3f54:
    // 0x1a3f54: 0xe6410048  swc1        $f1, 0x48($s2)
    ctx->pc = 0x1a3f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
label_1a3f58:
    // 0x1a3f58: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x1a3f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
label_1a3f5c:
    // 0x1a3f5c: 0x0  nop
    ctx->pc = 0x1a3f5cu;
    // NOP
label_1a3f60:
    // 0x1a3f60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a3f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a3f64:
    // 0x1a3f64: 0x0  nop
    ctx->pc = 0x1a3f64u;
    // NOP
label_1a3f68:
    // 0x1a3f68: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x1a3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_1a3f6c:
    // 0x1a3f6c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a3f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a3f70:
    // 0x1a3f70: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_1a3f74:
    if (ctx->pc == 0x1A3F74u) {
        ctx->pc = 0x1A3F74u;
            // 0x1a3f74: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x1A3F78u;
        goto label_1a3f78;
    }
    ctx->pc = 0x1A3F70u;
    {
        const bool branch_taken_0x1a3f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F70u;
            // 0x1a3f74: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f70) {
            ctx->pc = 0x1A3E34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3e34;
        }
    }
    ctx->pc = 0x1A3F78u;
label_1a3f78:
    // 0x1a3f78: 0x8eb90030  lw          $t9, 0x30($s5)
    ctx->pc = 0x1a3f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1a3f7c:
    // 0x1a3f7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a3f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a3f80:
    // 0x1a3f80: 0x320f809  jalr        $t9
label_1a3f84:
    if (ctx->pc == 0x1A3F84u) {
        ctx->pc = 0x1A3F84u;
            // 0x1a3f84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F88u;
        goto label_1a3f88;
    }
    ctx->pc = 0x1A3F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3F88u);
        ctx->pc = 0x1A3F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F80u;
            // 0x1a3f84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A3F88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A3F88u; }
            if (ctx->pc != 0x1A3F88u) { return; }
        }
        }
    }
    ctx->pc = 0x1A3F88u;
label_1a3f88:
    // 0x1a3f88: 0x8eb40040  lw          $s4, 0x40($s5)
    ctx->pc = 0x1a3f88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_1a3f8c:
    // 0x1a3f8c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a3f8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f90:
    // 0x1a3f90: 0x10000043  b           . + 4 + (0x43 << 2)
label_1a3f94:
    if (ctx->pc == 0x1A3F94u) {
        ctx->pc = 0x1A3F94u;
            // 0x1a3f94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F98u;
        goto label_1a3f98;
    }
    ctx->pc = 0x1A3F90u;
    {
        const bool branch_taken_0x1a3f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F90u;
            // 0x1a3f94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f90) {
            ctx->pc = 0x1A40A0u;
            goto label_1a40a0;
        }
    }
    ctx->pc = 0x1A3F98u;
label_1a3f98:
    // 0x1a3f98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a3f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f9c:
    // 0x1a3f9c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_1a3fa0:
    if (ctx->pc == 0x1A3FA0u) {
        ctx->pc = 0x1A3FA0u;
            // 0x1a3fa0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3FA4u;
        goto label_1a3fa4;
    }
    ctx->pc = 0x1A3F9Cu;
    {
        const bool branch_taken_0x1a3f9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3F9Cu;
            // 0x1a3fa0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f9c) {
            ctx->pc = 0x1A4078u;
            goto label_1a4078;
        }
    }
    ctx->pc = 0x1A3FA4u;
label_1a3fa4:
    // 0x1a3fa4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a3fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3fa8:
    // 0x1a3fa8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a3fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1a3fac:
    // 0x1a3fac: 0xc041be0  jal         func_106F80
label_1a3fb0:
    if (ctx->pc == 0x1A3FB0u) {
        ctx->pc = 0x1A3FB0u;
            // 0x1a3fb0: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->pc = 0x1A3FB4u;
        goto label_1a3fb4;
    }
    ctx->pc = 0x1A3FACu;
    SET_GPR_U32(ctx, 31, 0x1A3FB4u);
    ctx->pc = 0x1A3FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3FACu;
            // 0x1a3fb0: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FB4u; }
        if (ctx->pc != 0x1A3FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FB4u; }
        if (ctx->pc != 0x1A3FB4u) { return; }
    }
    ctx->pc = 0x1A3FB4u;
label_1a3fb4:
    // 0x1a3fb4: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x1a3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_1a3fb8:
    // 0x1a3fb8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a3fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1a3fbc:
    // 0x1a3fbc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1a3fc0:
    // 0x1a3fc0: 0xc041be0  jal         func_106F80
label_1a3fc4:
    if (ctx->pc == 0x1A3FC4u) {
        ctx->pc = 0x1A3FC4u;
            // 0x1a3fc4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x1A3FC8u;
        goto label_1a3fc8;
    }
    ctx->pc = 0x1A3FC0u;
    SET_GPR_U32(ctx, 31, 0x1A3FC8u);
    ctx->pc = 0x1A3FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3FC0u;
            // 0x1a3fc4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FC8u; }
        if (ctx->pc != 0x1A3FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FC8u; }
        if (ctx->pc != 0x1A3FC8u) { return; }
    }
    ctx->pc = 0x1A3FC8u;
label_1a3fc8:
    // 0x1a3fc8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a3fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1a3fcc:
    // 0x1a3fcc: 0xc04c018  jal         func_130060
label_1a3fd0:
    if (ctx->pc == 0x1A3FD0u) {
        ctx->pc = 0x1A3FD0u;
            // 0x1a3fd0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1A3FD4u;
        goto label_1a3fd4;
    }
    ctx->pc = 0x1A3FCCu;
    SET_GPR_U32(ctx, 31, 0x1A3FD4u);
    ctx->pc = 0x1A3FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3FCCu;
            // 0x1a3fd0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FD4u; }
        if (ctx->pc != 0x1A3FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FD4u; }
        if (ctx->pc != 0x1A3FD4u) { return; }
    }
    ctx->pc = 0x1A3FD4u;
label_1a3fd4:
    // 0x1a3fd4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a3fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a3fd8:
    // 0x1a3fd8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a3fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a3fdc:
    // 0x1a3fdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a3fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3fe0:
    // 0x1a3fe0: 0x0  nop
    ctx->pc = 0x1a3fe0u;
    // NOP
label_1a3fe4:
    // 0x1a3fe4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a3fe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3fe8:
    // 0x1a3fe8: 0x0  nop
    ctx->pc = 0x1a3fe8u;
    // NOP
label_1a3fec:
    // 0x1a3fec: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1a3ff0:
    if (ctx->pc == 0x1A3FF0u) {
        ctx->pc = 0x1A3FF0u;
            // 0x1a3ff0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1A3FF4u;
        goto label_1a3ff4;
    }
    ctx->pc = 0x1A3FECu;
    {
        const bool branch_taken_0x1a3fec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3FECu;
            // 0x1a3ff0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3fec) {
            ctx->pc = 0x1A4068u;
            goto label_1a4068;
        }
    }
    ctx->pc = 0x1A3FF4u;
label_1a3ff4:
    // 0x1a3ff4: 0xc041bd6  jal         func_106F58
label_1a3ff8:
    if (ctx->pc == 0x1A3FF8u) {
        ctx->pc = 0x1A3FF8u;
            // 0x1a3ff8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3FFCu;
        goto label_1a3ffc;
    }
    ctx->pc = 0x1A3FF4u;
    SET_GPR_U32(ctx, 31, 0x1A3FFCu);
    ctx->pc = 0x1A3FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3FF4u;
            // 0x1a3ff8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FFCu; }
        if (ctx->pc != 0x1A3FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3FFCu; }
        if (ctx->pc != 0x1A3FFCu) { return; }
    }
    ctx->pc = 0x1A3FFCu;
label_1a3ffc:
    // 0x1a3ffc: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x1a3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_1a4000:
    // 0x1a4000: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a4000u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a4004:
    // 0x1a4004: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a4004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1a4008:
    // 0x1a4008: 0xc041bd6  jal         func_106F58
label_1a400c:
    if (ctx->pc == 0x1A400Cu) {
        ctx->pc = 0x1A400Cu;
            // 0x1a400c: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x1A4010u;
        goto label_1a4010;
    }
    ctx->pc = 0x1A4008u;
    SET_GPR_U32(ctx, 31, 0x1A4010u);
    ctx->pc = 0x1A400Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4008u;
            // 0x1a400c: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4010u; }
        if (ctx->pc != 0x1A4010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4010u; }
        if (ctx->pc != 0x1A4010u) { return; }
    }
    ctx->pc = 0x1A4010u;
label_1a4010:
    // 0x1a4010: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x1a4010u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1a4014:
    // 0x1a4014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4018:
    // 0x1a4018: 0x0  nop
    ctx->pc = 0x1a4018u;
    // NOP
label_1a401c:
    // 0x1a401c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a401cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4020:
    // 0x1a4020: 0x0  nop
    ctx->pc = 0x1a4020u;
    // NOP
label_1a4024:
    // 0x1a4024: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a4028:
    if (ctx->pc == 0x1A4028u) {
        ctx->pc = 0x1A402Cu;
        goto label_1a402c;
    }
    ctx->pc = 0x1A4024u;
    {
        const bool branch_taken_0x1a4024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4024) {
            ctx->pc = 0x1A4030u;
            goto label_1a4030;
        }
    }
    ctx->pc = 0x1A402Cu;
label_1a402c:
    // 0x1a402c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a402cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a4030:
    // 0x1a4030: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a4030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a4034:
    // 0x1a4034: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a4038:
    // 0x1a4038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a403c:
    // 0x1a403c: 0x0  nop
    ctx->pc = 0x1a403cu;
    // NOP
label_1a4040:
    // 0x1a4040: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a4040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4044:
    // 0x1a4044: 0x0  nop
    ctx->pc = 0x1a4044u;
    // NOP
label_1a4048:
    // 0x1a4048: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a404c:
    if (ctx->pc == 0x1A404Cu) {
        ctx->pc = 0x1A4050u;
        goto label_1a4050;
    }
    ctx->pc = 0x1A4048u;
    {
        const bool branch_taken_0x1a4048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4048) {
            ctx->pc = 0x1A4068u;
            goto label_1a4068;
        }
    }
    ctx->pc = 0x1A4050u;
label_1a4050:
    // 0x1a4050: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x1a4050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_1a4054:
    // 0x1a4054: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1a4054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1a4058:
    // 0x1a4058: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a4058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1a405c:
    // 0x1a405c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a405cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a4060:
    // 0x1a4060: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a4064:
    if (ctx->pc == 0x1A4064u) {
        ctx->pc = 0x1A4064u;
            // 0x1a4064: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A4068u;
        goto label_1a4068;
    }
    ctx->pc = 0x1A4060u;
    {
        const bool branch_taken_0x1a4060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4060u;
            // 0x1a4064: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4060) {
            ctx->pc = 0x1A4078u;
            goto label_1a4078;
        }
    }
    ctx->pc = 0x1A4068u;
label_1a4068:
    // 0x1a4068: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a4068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a406c:
    // 0x1a406c: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x1a406cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1a4070:
    // 0x1a4070: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_1a4074:
    if (ctx->pc == 0x1A4074u) {
        ctx->pc = 0x1A4074u;
            // 0x1a4074: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->pc = 0x1A4078u;
        goto label_1a4078;
    }
    ctx->pc = 0x1A4070u;
    {
        const bool branch_taken_0x1a4070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4070u;
            // 0x1a4074: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4070) {
            ctx->pc = 0x1A3FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3fa8;
        }
    }
    ctx->pc = 0x1A4078u;
label_1a4078:
    // 0x1a4078: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1a407c:
    if (ctx->pc == 0x1A407Cu) {
        ctx->pc = 0x1A4080u;
        goto label_1a4080;
    }
    ctx->pc = 0x1A4078u;
    {
        const bool branch_taken_0x1a4078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4078) {
            ctx->pc = 0x1A408Cu;
            goto label_1a408c;
        }
    }
    ctx->pc = 0x1A4080u;
label_1a4080:
    // 0x1a4080: 0x86220046  lh          $v0, 0x46($s1)
    ctx->pc = 0x1a4080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
label_1a4084:
    // 0x1a4084: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a4088:
    if (ctx->pc == 0x1A4088u) {
        ctx->pc = 0x1A4088u;
            // 0x1a4088: 0xa6820046  sh          $v0, 0x46($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1A408Cu;
        goto label_1a408c;
    }
    ctx->pc = 0x1A4084u;
    {
        const bool branch_taken_0x1a4084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4084u;
            // 0x1a4088: 0xa6820046  sh          $v0, 0x46($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4084) {
            ctx->pc = 0x1A4098u;
            goto label_1a4098;
        }
    }
    ctx->pc = 0x1A408Cu;
label_1a408c:
    // 0x1a408c: 0x0  nop
    ctx->pc = 0x1a408cu;
    // NOP
label_1a4090:
    // 0x1a4090: 0xa6960046  sh          $s6, 0x46($s4)
    ctx->pc = 0x1a4090u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 70), (uint16_t)GPR_U32(ctx, 22));
label_1a4094:
    // 0x1a4094: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a4094u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1a4098:
    // 0x1a4098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a4098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a409c:
    // 0x1a409c: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x1a409cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_1a40a0:
    // 0x1a40a0: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x1a40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_1a40a4:
    // 0x1a40a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a40a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a40a8:
    // 0x1a40a8: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
label_1a40ac:
    if (ctx->pc == 0x1A40ACu) {
        ctx->pc = 0x1A40ACu;
            // 0x1a40ac: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x1A40B0u;
        goto label_1a40b0;
    }
    ctx->pc = 0x1A40A8u;
    {
        const bool branch_taken_0x1a40a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A40ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A40A8u;
            // 0x1a40ac: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40a8) {
            ctx->pc = 0x1A3F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3f98;
        }
    }
    ctx->pc = 0x1A40B0u;
label_1a40b0:
    // 0x1a40b0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1a40b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a40b4:
    // 0x1a40b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a40b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a40b8:
    // 0x1a40b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a40b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a40bc:
    // 0x1a40bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1a40bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a40c0:
    // 0x1a40c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a40c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a40c4:
    // 0x1a40c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a40c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a40c8:
    // 0x1a40c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a40c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a40cc:
    // 0x1a40cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a40ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a40d0:
    // 0x1a40d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a40d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a40d4:
    // 0x1a40d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a40d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a40d8:
    // 0x1a40d8: 0x3e00008  jr          $ra
label_1a40dc:
    if (ctx->pc == 0x1A40DCu) {
        ctx->pc = 0x1A40DCu;
            // 0x1a40dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1A40E0u;
        goto label_fallthrough_0x1a40d8;
    }
    ctx->pc = 0x1A40D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A40DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A40D8u;
            // 0x1a40dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a40d8:
    ctx->pc = 0x1A40E0u;
}
