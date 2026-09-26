#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CCharaPasFPfPf
// Address: 0x256da0 - 0x256f28
void Step__9CCharaPasFPfPf_0x256da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CCharaPasFPfPf_0x256da0");
#endif

    switch (ctx->pc) {
        case 0x256de0u: goto label_256de0;
        case 0x256df4u: goto label_256df4;
        case 0x256dfcu: goto label_256dfc;
        case 0x256e14u: goto label_256e14;
        case 0x256e24u: goto label_256e24;
        case 0x256e5cu: goto label_256e5c;
        case 0x256e84u: goto label_256e84;
        default: break;
    }

    ctx->pc = 0x256da0u;

    // 0x256da0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x256da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x256da4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x256da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x256da8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x256da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x256dac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x256dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x256db0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x256db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256db4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x256db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x256db8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x256db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256dbc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x256dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x256dc0: 0x8c8304a4  lw          $v1, 0x4A4($a0)
    ctx->pc = 0x256dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1188)));
    // 0x256dc4: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x256DC4u;
    {
        const bool branch_taken_0x256dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256DC4u;
            // 0x256dc8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256dc4) {
            ctx->pc = 0x256F0Cu;
            goto label_256f0c;
        }
    }
    ctx->pc = 0x256DCCu;
    // 0x256dcc: 0x8e4204a8  lw          $v0, 0x4A8($s2)
    ctx->pc = 0x256dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1192)));
    // 0x256dd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256DD0u;
    {
        const bool branch_taken_0x256dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256DD0u;
            // 0x256dd4: 0x26440108  addiu       $a0, $s2, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256dd0) {
            ctx->pc = 0x256DECu;
            goto label_256dec;
        }
    }
    ctx->pc = 0x256DD8u;
    // 0x256dd8: 0xc0958d4  jal         func_256350
    ctx->pc = 0x256DD8u;
    SET_GPR_U32(ctx, 31, 0x256DE0u);
    ctx->pc = 0x256DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256DD8u;
            // 0x256ddc: 0x26440108  addiu       $a0, $s2, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DE0u; }
        if (ctx->pc != 0x256DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DE0u; }
        if (ctx->pc != 0x256DE0u) { return; }
    }
    ctx->pc = 0x256DE0u;
label_256de0:
    // 0x256de0: 0xae4004a4  sw          $zero, 0x4A4($s2)
    ctx->pc = 0x256de0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1188), GPR_U32(ctx, 0));
    // 0x256de4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x256DE4u;
    {
        const bool branch_taken_0x256de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256DE4u;
            // 0x256de8: 0xae4004a8  sw          $zero, 0x4A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256de4) {
            ctx->pc = 0x256F0Cu;
            goto label_256f0c;
        }
    }
    ctx->pc = 0x256DECu;
label_256dec:
    // 0x256dec: 0xc0958d4  jal         func_256350
    ctx->pc = 0x256DECu;
    SET_GPR_U32(ctx, 31, 0x256DF4u);
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DF4u; }
        if (ctx->pc != 0x256DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DF4u; }
        if (ctx->pc != 0x256DF4u) { return; }
    }
    ctx->pc = 0x256DF4u;
label_256df4:
    // 0x256df4: 0xc0957c8  jal         func_255F20
    ctx->pc = 0x256DF4u;
    SET_GPR_U32(ctx, 31, 0x256DFCu);
    ctx->pc = 0x256DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256DF4u;
            // 0x256df8: 0x26440108  addiu       $a0, $s2, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255F20u;
    if (runtime->hasFunction(0x255F20u)) {
        auto targetFn = runtime->lookupFunction(0x255F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DFCu; }
        if (ctx->pc != 0x256DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepS__9C3DSplineFv_0x255f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256DFCu; }
        if (ctx->pc != 0x256DFCu) { return; }
    }
    ctx->pc = 0x256DFCu;
label_256dfc:
    // 0x256dfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256DFCu;
    {
        const bool branch_taken_0x256dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256DFCu;
            // 0x256e00: 0x26440108  addiu       $a0, $s2, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256dfc) {
            ctx->pc = 0x256E0Cu;
            goto label_256e0c;
        }
    }
    ctx->pc = 0x256E04u;
    // 0x256e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x256e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256e08: 0xae4204a8  sw          $v0, 0x4A8($s2)
    ctx->pc = 0x256e08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1192), GPR_U32(ctx, 2));
label_256e0c:
    // 0x256e0c: 0xc0958d4  jal         func_256350
    ctx->pc = 0x256E0Cu;
    SET_GPR_U32(ctx, 31, 0x256E14u);
    ctx->pc = 0x256E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256E0Cu;
            // 0x256e10: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E14u; }
        if (ctx->pc != 0x256E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E14u; }
        if (ctx->pc != 0x256E14u) { return; }
    }
    ctx->pc = 0x256E14u;
label_256e14:
    // 0x256e14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x256e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x256e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x256e1c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x256E1Cu;
    SET_GPR_U32(ctx, 31, 0x256E24u);
    ctx->pc = 0x256E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256E1Cu;
            // 0x256e20: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E24u; }
        if (ctx->pc != 0x256E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E24u; }
        if (ctx->pc != 0x256E24u) { return; }
    }
    ctx->pc = 0x256E24u;
label_256e24:
    // 0x256e24: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x256e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x256e28: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x256e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256e2c: 0x0  nop
    ctx->pc = 0x256e2cu;
    // NOP
    // 0x256e30: 0x460c0832  c.eq.s      $f1, $f12
    ctx->pc = 0x256e30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256e34: 0x0  nop
    ctx->pc = 0x256e34u;
    // NOP
    // 0x256e38: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x256E38u;
    {
        const bool branch_taken_0x256e38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x256e38) {
            ctx->pc = 0x256E54u;
            goto label_256e54;
        }
    }
    ctx->pc = 0x256E40u;
    // 0x256e40: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x256e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256e44: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x256e44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256e48: 0x0  nop
    ctx->pc = 0x256e48u;
    // NOP
    // 0x256e4c: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x256E4Cu;
    {
        const bool branch_taken_0x256e4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x256e4c) {
            ctx->pc = 0x256F0Cu;
            goto label_256f0c;
        }
    }
    ctx->pc = 0x256E54u;
label_256e54:
    // 0x256e54: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x256E54u;
    SET_GPR_U32(ctx, 31, 0x256E5Cu);
    ctx->pc = 0x256E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256E54u;
            // 0x256e58: 0xc7ad0068  lwc1        $f13, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E5Cu; }
        if (ctx->pc != 0x256E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E5Cu; }
        if (ctx->pc != 0x256E5Cu) { return; }
    }
    ctx->pc = 0x256E5Cu;
label_256e5c:
    // 0x256e5c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x256e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x256e60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x256e60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x256e64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x256e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x256e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256e6c: 0x0  nop
    ctx->pc = 0x256e6cu;
    // NOP
    // 0x256e70: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x256e70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x256e74: 0x0  nop
    ctx->pc = 0x256e74u;
    // NOP
    // 0x256e78: 0x0  nop
    ctx->pc = 0x256e78u;
    // NOP
    // 0x256e7c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x256E7Cu;
    SET_GPR_U32(ctx, 31, 0x256E84u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E84u; }
        if (ctx->pc != 0x256E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256E84u; }
        if (ctx->pc != 0x256E84u) { return; }
    }
    ctx->pc = 0x256E84u;
label_256e84:
    // 0x256e84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x256e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256e88: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x256e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x256e8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x256e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256e90: 0x0  nop
    ctx->pc = 0x256e90u;
    // NOP
    // 0x256e94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x256e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x256e98: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x256e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x256e9c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x256e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x256ea0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x256ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x256ea4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x256ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x256ea8: 0x0  nop
    ctx->pc = 0x256ea8u;
    // NOP
    // 0x256eac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x256eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x256eb0: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x256eb0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x256eb4: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x256eb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256eb8: 0x0  nop
    ctx->pc = 0x256eb8u;
    // NOP
    // 0x256ebc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x256EBCu;
    {
        const bool branch_taken_0x256ebc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x256EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256EBCu;
            // 0x256ec0: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ebc) {
            ctx->pc = 0x256EDCu;
            goto label_256edc;
        }
    }
    ctx->pc = 0x256EC4u;
    // 0x256ec4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x256ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x256ec8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x256ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x256ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x256eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256ed0: 0x0  nop
    ctx->pc = 0x256ed0u;
    // NOP
    // 0x256ed4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x256ed4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x256ed8: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x256ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_256edc:
    // 0x256edc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x256edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x256ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x256ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256ee4: 0x0  nop
    ctx->pc = 0x256ee4u;
    // NOP
    // 0x256ee8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x256ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x256eec: 0x0  nop
    ctx->pc = 0x256eecu;
    // NOP
    // 0x256ef0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x256EF0u;
    {
        const bool branch_taken_0x256ef0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x256EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256EF0u;
            // 0x256ef4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ef0) {
            ctx->pc = 0x256F08u;
            goto label_256f08;
        }
    }
    ctx->pc = 0x256EF8u;
    // 0x256ef8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x256ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x256efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x256efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256f00: 0x0  nop
    ctx->pc = 0x256f00u;
    // NOP
    // 0x256f04: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x256f04u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_256f08:
    // 0x256f08: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x256f08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_256f0c:
    // 0x256f0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x256f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256f10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x256f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x256f14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x256f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256f18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x256f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256f1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x256f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256f20: 0x3e00008  jr          $ra
    ctx->pc = 0x256F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256F20u;
            // 0x256f24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256F28u;
}
