#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step_Wind__14CWeaponElementFv
// Address: 0x1c6d00 - 0x1c7298
void Step_Wind__14CWeaponElementFv_0x1c6d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step_Wind__14CWeaponElementFv_0x1c6d00");
#endif

    switch (ctx->pc) {
        case 0x1c6d44u: goto label_1c6d44;
        case 0x1c6df8u: goto label_1c6df8;
        case 0x1c6e34u: goto label_1c6e34;
        case 0x1c6f38u: goto label_1c6f38;
        case 0x1c6f58u: goto label_1c6f58;
        case 0x1c6fa0u: goto label_1c6fa0;
        case 0x1c6ff0u: goto label_1c6ff0;
        case 0x1c7030u: goto label_1c7030;
        case 0x1c7070u: goto label_1c7070;
        case 0x1c70bcu: goto label_1c70bc;
        case 0x1c70c8u: goto label_1c70c8;
        case 0x1c70d0u: goto label_1c70d0;
        case 0x1c7110u: goto label_1c7110;
        case 0x1c7118u: goto label_1c7118;
        case 0x1c7164u: goto label_1c7164;
        case 0x1c71a8u: goto label_1c71a8;
        case 0x1c71e4u: goto label_1c71e4;
        case 0x1c71fcu: goto label_1c71fc;
        case 0x1c7238u: goto label_1c7238;
        default: break;
    }

    ctx->pc = 0x1c6d00u;

    // 0x1c6d00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c6d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c6d04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c6d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c6d08: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c6d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c6d0c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c6d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c6d10: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c6d10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d14: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c6d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c6d18: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1c6d18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c6d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c6d20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c6d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c6d24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c6d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c6d28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c6d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c6d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c6d30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c6d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c6d38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c6d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c6d3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c6d40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c6d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6d44:
    // 0x1c6d44: 0x2d1a821  addu        $s5, $s6, $s1
    ctx->pc = 0x1c6d44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1c6d48: 0xc6a20520  lwc1        $f2, 0x520($s5)
    ctx->pc = 0x1c6d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6d4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6d50: 0x0  nop
    ctx->pc = 0x1c6d50u;
    // NOP
    // 0x1c6d54: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1c6d54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6d58: 0x0  nop
    ctx->pc = 0x1c6d58u;
    // NOP
    // 0x1c6d5c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6D5Cu;
    {
        const bool branch_taken_0x1c6d5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D5Cu;
            // 0x1c6d60: 0x26a40520  addiu       $a0, $s5, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d5c) {
            ctx->pc = 0x1C6D6Cu;
            goto label_1c6d6c;
        }
    }
    ctx->pc = 0x1C6D64u;
    // 0x1c6d64: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1C6D64u;
    {
        const bool branch_taken_0x1c6d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D64u;
            // 0x1c6d68: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d64) {
            ctx->pc = 0x1C6ED0u;
            goto label_1c6ed0;
        }
    }
    ctx->pc = 0x1C6D6Cu;
label_1c6d6c:
    // 0x1c6d6c: 0x0  nop
    ctx->pc = 0x1c6d6cu;
    // NOP
    // 0x1c6d70: 0x2d2a021  addu        $s4, $s6, $s2
    ctx->pc = 0x1c6d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1c6d74: 0x868306ba  lh          $v1, 0x6BA($s4)
    ctx->pc = 0x1c6d74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1722)));
    // 0x1c6d78: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6D78u;
    {
        const bool branch_taken_0x1c6d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D78u;
            // 0x1c6d7c: 0x268506ba  addiu       $a1, $s4, 0x6BA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1722));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d78) {
            ctx->pc = 0x1C6DA8u;
            goto label_1c6da8;
        }
    }
    ctx->pc = 0x1C6D80u;
    // 0x1c6d80: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1c6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1c6d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6d88: 0x0  nop
    ctx->pc = 0x1c6d88u;
    // NOP
    // 0x1c6d8c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1c6d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1c6d90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c6d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6d94: 0x0  nop
    ctx->pc = 0x1c6d94u;
    // NOP
    // 0x1c6d98: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6D98u;
    {
        const bool branch_taken_0x1c6d98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D98u;
            // 0x1c6d9c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d98) {
            ctx->pc = 0x1C6DDCu;
            goto label_1c6ddc;
        }
    }
    ctx->pc = 0x1C6DA0u;
    // 0x1c6da0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C6DA0u;
    {
        const bool branch_taken_0x1c6da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DA0u;
            // 0x1c6da4: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6da0) {
            ctx->pc = 0x1C6DDCu;
            goto label_1c6ddc;
        }
    }
    ctx->pc = 0x1C6DA8u;
label_1c6da8:
    // 0x1c6da8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1c6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1c6dac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6db0: 0x0  nop
    ctx->pc = 0x1c6db0u;
    // NOP
    // 0x1c6db4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c6db4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c6db8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1c6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1c6dbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6dc0: 0x0  nop
    ctx->pc = 0x1c6dc0u;
    // NOP
    // 0x1c6dc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6dc8: 0x0  nop
    ctx->pc = 0x1c6dc8u;
    // NOP
    // 0x1c6dcc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6DCCu;
    {
        const bool branch_taken_0x1c6dcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DCCu;
            // 0x1c6dd0: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6dcc) {
            ctx->pc = 0x1C6DDCu;
            goto label_1c6ddc;
        }
    }
    ctx->pc = 0x1C6DD4u;
    // 0x1c6dd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6dd8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1c6dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1c6ddc:
    // 0x1c6ddc: 0x0  nop
    ctx->pc = 0x1c6ddcu;
    // NOP
    // 0x1c6de0: 0x86c4073a  lh          $a0, 0x73A($s6)
    ctx->pc = 0x1c6de0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1850)));
    // 0x1c6de4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c6de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c6de8: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C6DE8u;
    {
        const bool branch_taken_0x1c6de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c6de8) {
            ctx->pc = 0x1C6E44u;
            goto label_1c6e44;
        }
    }
    ctx->pc = 0x1C6DF0u;
    // 0x1c6df0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6DF0u;
    SET_GPR_U32(ctx, 31, 0x1C6DF8u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DF8u; }
        if (ctx->pc != 0x1C6DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DF8u; }
        if (ctx->pc != 0x1C6DF8u) { return; }
    }
    ctx->pc = 0x1C6DF8u;
label_1c6df8:
    // 0x1c6df8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6dfc: 0x0  nop
    ctx->pc = 0x1c6dfcu;
    // NOP
    // 0x1c6e00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6e04: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c6e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e0c: 0x0  nop
    ctx->pc = 0x1c6e0cu;
    // NOP
    // 0x1c6e10: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c6e10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6e14: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e1c: 0x0  nop
    ctx->pc = 0x1c6e1cu;
    // NOP
    // 0x1c6e20: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c6e20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c6e24: 0x0  nop
    ctx->pc = 0x1c6e24u;
    // NOP
    // 0x1c6e28: 0x0  nop
    ctx->pc = 0x1c6e28u;
    // NOP
    // 0x1c6e2c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C6E2Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E34u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E34u; }
        if (ctx->pc != 0x1C6E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E34u; }
        if (ctx->pc != 0x1C6E34u) { return; }
    }
    ctx->pc = 0x1C6E34u;
label_1c6e34:
    // 0x1c6e34: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1c6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c6e38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6e3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c6e40: 0xa68306fa  sh          $v1, 0x6FA($s4)
    ctx->pc = 0x1c6e40u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1786), (uint16_t)GPR_U32(ctx, 3));
label_1c6e44:
    // 0x1c6e44: 0x0  nop
    ctx->pc = 0x1c6e44u;
    // NOP
    // 0x1c6e48: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1c6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1c6e4c: 0xc6a20634  lwc1        $f2, 0x634($s5)
    ctx->pc = 0x1c6e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6e50: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c6e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c6e54: 0xc6a105b4  lwc1        $f1, 0x5B4($s5)
    ctx->pc = 0x1c6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6e58: 0x26a405b4  addiu       $a0, $s5, 0x5B4
    ctx->pc = 0x1c6e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1460));
    // 0x1c6e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e60: 0x0  nop
    ctx->pc = 0x1c6e60u;
    // NOP
    // 0x1c6e64: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c6e64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c6e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6e6c: 0x0  nop
    ctx->pc = 0x1c6e6cu;
    // NOP
    // 0x1c6e70: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6E70u;
    {
        const bool branch_taken_0x1c6e70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E70u;
            // 0x1c6e74: 0xe6a105b4  swc1        $f1, 0x5B4($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e70) {
            ctx->pc = 0x1C6E90u;
            goto label_1c6e90;
        }
    }
    ctx->pc = 0x1C6E78u;
    // 0x1c6e78: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1c6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1c6e7c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c6e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c6e80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e84: 0x0  nop
    ctx->pc = 0x1c6e84u;
    // NOP
    // 0x1c6e88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c6e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c6e8c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c6e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c6e90:
    // 0x1c6e90: 0x2d32021  addu        $a0, $s6, $s3
    ctx->pc = 0x1c6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1c6e94: 0xc4820220  lwc1        $f2, 0x220($a0)
    ctx->pc = 0x1c6e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6e98: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1c6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1c6e9c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1c6e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6ea0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c6ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c6ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6ea8: 0x0  nop
    ctx->pc = 0x1c6ea8u;
    // NOP
    // 0x1c6eac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c6eacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c6eb0: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1c6eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1c6eb4: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1c6eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6eb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c6eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c6ebc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1c6ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1c6ec0: 0xc4810228  lwc1        $f1, 0x228($a0)
    ctx->pc = 0x1c6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6ec4: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1c6ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6ec8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c6ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6ecc: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1c6eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1c6ed0:
    // 0x1c6ed0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c6ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c6ed4: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1c6ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c6ed8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1c6ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1c6edc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1c6edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1c6ee0: 0x1460ff98  bnez        $v1, . + 4 + (-0x68 << 2)
    ctx->pc = 0x1C6EE0u;
    {
        const bool branch_taken_0x1c6ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EE0u;
            // 0x1c6ee4: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ee0) {
            ctx->pc = 0x1C6D44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6d44;
        }
    }
    ctx->pc = 0x1C6EE8u;
    // 0x1c6ee8: 0x86c3073a  lh          $v1, 0x73A($s6)
    ctx->pc = 0x1c6ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1850)));
    // 0x1c6eec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c6eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c6ef0: 0xa6c3073a  sh          $v1, 0x73A($s6)
    ctx->pc = 0x1c6ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1850), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6ef4: 0x86c3073a  lh          $v1, 0x73A($s6)
    ctx->pc = 0x1c6ef4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1850)));
    // 0x1c6ef8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6EF8u;
    {
        const bool branch_taken_0x1c6ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EF8u;
            // 0x1c6efc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ef8) {
            ctx->pc = 0x1C6F04u;
            goto label_1c6f04;
        }
    }
    ctx->pc = 0x1C6F00u;
    // 0x1c6f00: 0xa6c3073a  sh          $v1, 0x73A($s6)
    ctx->pc = 0x1c6f00u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1850), (uint16_t)GPR_U32(ctx, 3));
label_1c6f04:
    // 0x1c6f04: 0x86c306b8  lh          $v1, 0x6B8($s6)
    ctx->pc = 0x1c6f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1720)));
    // 0x1c6f08: 0x186000d2  blez        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x1C6F08u;
    {
        const bool branch_taken_0x1c6f08 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c6f08) {
            ctx->pc = 0x1C7254u;
            goto label_1c7254;
        }
    }
    ctx->pc = 0x1C6F10u;
    // 0x1c6f10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c6f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c6f14: 0xa6c306b8  sh          $v1, 0x6B8($s6)
    ctx->pc = 0x1c6f14u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1720), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6f18: 0x86c306b6  lh          $v1, 0x6B6($s6)
    ctx->pc = 0x1c6f18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1718)));
    // 0x1c6f1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c6f20: 0xa6c306b6  sh          $v1, 0x6B6($s6)
    ctx->pc = 0x1c6f20u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1718), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c6f24: 0x86c306b6  lh          $v1, 0x6B6($s6)
    ctx->pc = 0x1c6f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1718)));
    // 0x1c6f28: 0x1c6000ca  bgtz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x1C6F28u;
    {
        const bool branch_taken_0x1c6f28 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C6F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F28u;
            // 0x1c6f2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f28) {
            ctx->pc = 0x1C7254u;
            goto label_1c7254;
        }
    }
    ctx->pc = 0x1C6F30u;
    // 0x1c6f30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6f38:
    // 0x1c6f38: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x1c6f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x1c6f3c: 0xc4610520  lwc1        $f1, 0x520($v1)
    ctx->pc = 0x1c6f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6f40: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c6f40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6f44: 0x0  nop
    ctx->pc = 0x1c6f44u;
    // NOP
    // 0x1c6f48: 0x450000be  bc1f        . + 4 + (0xBE << 2)
    ctx->pc = 0x1C6F48u;
    {
        const bool branch_taken_0x1c6f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6f48) {
            ctx->pc = 0x1C7244u;
            goto label_1c7244;
        }
    }
    ctx->pc = 0x1C6F50u;
    // 0x1c6f50: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6F50u;
    SET_GPR_U32(ctx, 31, 0x1C6F58u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F58u; }
        if (ctx->pc != 0x1C6F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F58u; }
        if (ctx->pc != 0x1C6F58u) { return; }
    }
    ctx->pc = 0x1C6F58u;
label_1c6f58:
    // 0x1c6f58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6f5c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c6f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6f60: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1c6f60u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c6f64: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x1c6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6f68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6f6c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c6f70: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1c6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c6f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6f78: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c6f78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6f7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6f80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c6f84: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c6f84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6f88: 0x0  nop
    ctx->pc = 0x1c6f88u;
    // NOP
    // 0x1c6f8c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c6f8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c6f90: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c6f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c6f94: 0xe4600420  swc1        $f0, 0x420($v1)
    ctx->pc = 0x1c6f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1056), bits); }
    // 0x1c6f98: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6F98u;
    SET_GPR_U32(ctx, 31, 0x1C6FA0u);
    ctx->pc = 0x1C6F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F98u;
            // 0x1c6f9c: 0xac6204a0  sw          $v0, 0x4A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FA0u; }
        if (ctx->pc != 0x1C6FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FA0u; }
        if (ctx->pc != 0x1C6FA0u) { return; }
    }
    ctx->pc = 0x1C6FA0u;
label_1c6fa0:
    // 0x1c6fa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6fa4: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x1c6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x1c6fa8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c6fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1c6fac: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1c6facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c6fb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c6fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c6fb4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1c6fb8: 0x109040  sll         $s2, $s0, 1
    ctx->pc = 0x1c6fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c6fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6fc0: 0x0  nop
    ctx->pc = 0x1c6fc0u;
    // NOP
    // 0x1c6fc4: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1c6fc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6fc8: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x1c6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x1c6fcc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c6fccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6fd0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c6fd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6fd4: 0x0  nop
    ctx->pc = 0x1c6fd4u;
    // NOP
    // 0x1c6fd8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c6fd8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c6fdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c6fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6fe0: 0xe4600520  swc1        $f0, 0x520($v1)
    ctx->pc = 0x1c6fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1312), bits); }
    // 0x1c6fe4: 0xa44006ba  sh          $zero, 0x6BA($v0)
    ctx->pc = 0x1c6fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1722), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c6fe8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C6FE8u;
    SET_GPR_U32(ctx, 31, 0x1C6FF0u);
    ctx->pc = 0x1C6FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FE8u;
            // 0x1c6fec: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FF0u; }
        if (ctx->pc != 0x1C6FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FF0u; }
        if (ctx->pc != 0x1C6FF0u) { return; }
    }
    ctx->pc = 0x1C6FF0u;
label_1c6ff0:
    // 0x1c6ff0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c6ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c6ff4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c6ff8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6ffc: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1c6ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c7000: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c7000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c7004: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c7004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7008: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1c7008u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1c700c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c700cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c7010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7014: 0x0  nop
    ctx->pc = 0x1c7014u;
    // NOP
    // 0x1c7018: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c7018u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c701c: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x1c701cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c7020: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c7020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c7024: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1c7024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1c7028: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7028u;
    SET_GPR_U32(ctx, 31, 0x1C7030u);
    ctx->pc = 0x1C702Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7028u;
            // 0x1c702c: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7030u; }
        if (ctx->pc != 0x1C7030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7030u; }
        if (ctx->pc != 0x1C7030u) { return; }
    }
    ctx->pc = 0x1C7030u;
label_1c7030:
    // 0x1c7030: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7034: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c7034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7038: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c703c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c703cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c7040: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c7040u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c7044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7048: 0x0  nop
    ctx->pc = 0x1c7048u;
    // NOP
    // 0x1c704c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c704cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7050: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x1c7050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c7054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7058: 0x0  nop
    ctx->pc = 0x1c7058u;
    // NOP
    // 0x1c705c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c705cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7060: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c7060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c7064: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1c7064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1c7068: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7068u;
    SET_GPR_U32(ctx, 31, 0x1C7070u);
    ctx->pc = 0x1C706Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7068u;
            // 0x1c706c: 0xc6d405a0  lwc1        $f20, 0x5A0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7070u; }
        if (ctx->pc != 0x1C7070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7070u; }
        if (ctx->pc != 0x1C7070u) { return; }
    }
    ctx->pc = 0x1C7070u;
label_1c7070:
    // 0x1c7070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7074: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x1c7074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c7078: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x1c7078u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x1c707c: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x1c707cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x1c7080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7084: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1c7084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c708c: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x1c708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1c7090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7094: 0x4600a082  mul.s       $f2, $f20, $f0
    ctx->pc = 0x1c7094u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c7098: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1c7098u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c709c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c709cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c70a0: 0x0  nop
    ctx->pc = 0x1c70a0u;
    // NOP
    // 0x1c70a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c70a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c70a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c70a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c70ac: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c70acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c70b0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1c70b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1c70b4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C70B4u;
    SET_GPR_U32(ctx, 31, 0x1C70BCu);
    ctx->pc = 0x1C70B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70B4u;
            // 0x1c70b8: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70BCu; }
        if (ctx->pc != 0x1C70BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70BCu; }
        if (ctx->pc != 0x1C70BCu) { return; }
    }
    ctx->pc = 0x1C70BCu;
label_1c70bc:
    // 0x1c70bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c70bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70c0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C70C0u;
    SET_GPR_U32(ctx, 31, 0x1C70C8u);
    ctx->pc = 0x1C70C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70C0u;
            // 0x1c70c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70C8u; }
        if (ctx->pc != 0x1C70C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70C8u; }
        if (ctx->pc != 0x1C70C8u) { return; }
    }
    ctx->pc = 0x1C70C8u;
label_1c70c8:
    // 0x1c70c8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C70C8u;
    SET_GPR_U32(ctx, 31, 0x1C70D0u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70D0u; }
        if (ctx->pc != 0x1C70D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70D0u; }
        if (ctx->pc != 0x1C70D0u) { return; }
    }
    ctx->pc = 0x1C70D0u;
label_1c70d0:
    // 0x1c70d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c70d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c70d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c70d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c70d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70dc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c70dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c70e0: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1c70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1c70e4: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1c70e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1c70e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c70ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c70ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c70f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c70f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c70f4: 0x0  nop
    ctx->pc = 0x1c70f4u;
    // NOP
    // 0x1c70f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c70f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c70fc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c70fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7100: 0x0  nop
    ctx->pc = 0x1c7100u;
    // NOP
    // 0x1c7104: 0x0  nop
    ctx->pc = 0x1c7104u;
    // NOP
    // 0x1c7108: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1C7108u;
    SET_GPR_U32(ctx, 31, 0x1C7110u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7110u; }
        if (ctx->pc != 0x1C7110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7110u; }
        if (ctx->pc != 0x1C7110u) { return; }
    }
    ctx->pc = 0x1C7110u;
label_1c7110:
    // 0x1c7110: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C7110u;
    SET_GPR_U32(ctx, 31, 0x1C7118u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7118u; }
        if (ctx->pc != 0x1C7118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7118u; }
        if (ctx->pc != 0x1C7118u) { return; }
    }
    ctx->pc = 0x1C7118u;
label_1c7118:
    // 0x1c7118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c711c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c711cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c7120: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c7120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7124: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c7124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7128: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c7128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c712c: 0x34450fdb  ori         $a1, $v0, 0xFDB
    ctx->pc = 0x1c712cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c7130: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x1c7130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c7134: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1c7134u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7138: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c7138u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c713c: 0x0  nop
    ctx->pc = 0x1c713cu;
    // NOP
    // 0x1c7140: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c7140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c7144: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c7144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c7148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c714c: 0x0  nop
    ctx->pc = 0x1c714cu;
    // NOP
    // 0x1c7150: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c7150u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7154: 0x0  nop
    ctx->pc = 0x1c7154u;
    // NOP
    // 0x1c7158: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c7158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c715c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C715Cu;
    SET_GPR_U32(ctx, 31, 0x1C7164u);
    ctx->pc = 0x1C7160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C715Cu;
            // 0x1c7160: 0xe44005b4  swc1        $f0, 0x5B4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1460), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7164u; }
        if (ctx->pc != 0x1C7164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7164u; }
        if (ctx->pc != 0x1C7164u) { return; }
    }
    ctx->pc = 0x1C7164u;
label_1c7164:
    // 0x1c7164: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c7164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c7168: 0x3c043e49  lui         $a0, 0x3E49
    ctx->pc = 0x1c7168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15945 << 16));
    // 0x1c716c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1c716cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1c7170: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x1c7170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7174: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1c7174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1c7178: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x1c7178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c717c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c717cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7180: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1c7180u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7184: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1c7184u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c7188: 0x3c043dc9  lui         $a0, 0x3DC9
    ctx->pc = 0x1c7188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15817 << 16));
    // 0x1c718c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1c718cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1c7190: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c7190u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c7194: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c7194u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7198: 0x0  nop
    ctx->pc = 0x1c7198u;
    // NOP
    // 0x1c719c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c719cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c71a0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C71A0u;
    SET_GPR_U32(ctx, 31, 0x1C71A8u);
    ctx->pc = 0x1C71A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71A0u;
            // 0x1c71a4: 0xe4600634  swc1        $f0, 0x634($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1588), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71A8u; }
        if (ctx->pc != 0x1C71A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71A8u; }
        if (ctx->pc != 0x1C71A8u) { return; }
    }
    ctx->pc = 0x1C71A8u;
label_1c71a8:
    // 0x1c71a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c71a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c71ac: 0x0  nop
    ctx->pc = 0x1c71acu;
    // NOP
    // 0x1c71b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c71b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c71b4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c71b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c71b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c71bc: 0x0  nop
    ctx->pc = 0x1c71bcu;
    // NOP
    // 0x1c71c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c71c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c71c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c71c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c71c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c71cc: 0x0  nop
    ctx->pc = 0x1c71ccu;
    // NOP
    // 0x1c71d0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c71d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c71d4: 0x0  nop
    ctx->pc = 0x1c71d4u;
    // NOP
    // 0x1c71d8: 0x0  nop
    ctx->pc = 0x1c71d8u;
    // NOP
    // 0x1c71dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C71DCu;
    SET_GPR_U32(ctx, 31, 0x1C71E4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71E4u; }
        if (ctx->pc != 0x1C71E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71E4u; }
        if (ctx->pc != 0x1C71E4u) { return; }
    }
    ctx->pc = 0x1C71E4u;
label_1c71e4:
    // 0x1c71e4: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1c71e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c71e8: 0x2561821  addu        $v1, $s2, $s6
    ctx->pc = 0x1c71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x1c71ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c71f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c71f4: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C71F4u;
    SET_GPR_U32(ctx, 31, 0x1C71FCu);
    ctx->pc = 0x1C71F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71F4u;
            // 0x1c71f8: 0xa46206fa  sh          $v0, 0x6FA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1786), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71FCu; }
        if (ctx->pc != 0x1C71FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71FCu; }
        if (ctx->pc != 0x1C71FCu) { return; }
    }
    ctx->pc = 0x1C71FCu;
label_1c71fc:
    // 0x1c71fc: 0x86c306b4  lh          $v1, 0x6B4($s6)
    ctx->pc = 0x1c71fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 1716)));
    // 0x1c7200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7204: 0x0  nop
    ctx->pc = 0x1c7204u;
    // NOP
    // 0x1c7208: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c7208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c720c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c720cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c7210: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7218: 0x0  nop
    ctx->pc = 0x1c7218u;
    // NOP
    // 0x1c721c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c721cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7220: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c7220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c7224: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c7224u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c7228: 0x0  nop
    ctx->pc = 0x1c7228u;
    // NOP
    // 0x1c722c: 0x0  nop
    ctx->pc = 0x1c722cu;
    // NOP
    // 0x1c7230: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C7230u;
    SET_GPR_U32(ctx, 31, 0x1C7238u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7238u; }
        if (ctx->pc != 0x1C7238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7238u; }
        if (ctx->pc != 0x1C7238u) { return; }
    }
    ctx->pc = 0x1C7238u;
label_1c7238:
    // 0x1c7238: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1c7238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c723c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C723Cu;
    {
        const bool branch_taken_0x1c723c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C723Cu;
            // 0x1c7240: 0xa6c306b6  sh          $v1, 0x6B6($s6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 22), 1718), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c723c) {
            ctx->pc = 0x1C7254u;
            goto label_1c7254;
        }
    }
    ctx->pc = 0x1C7244u;
label_1c7244:
    // 0x1c7244: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c7244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c7248: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1c7248u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c724c: 0x1460ff3a  bnez        $v1, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x1C724Cu;
    {
        const bool branch_taken_0x1c724c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C724Cu;
            // 0x1c7250: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c724c) {
            ctx->pc = 0x1C6F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6f38;
        }
    }
    ctx->pc = 0x1C7254u;
label_1c7254:
    // 0x1c7254: 0x0  nop
    ctx->pc = 0x1c7254u;
    // NOP
    // 0x1c7258: 0x2ae30020  slti        $v1, $s7, 0x20
    ctx->pc = 0x1c7258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c725c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C725Cu;
    {
        const bool branch_taken_0x1c725c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c725c) {
            ctx->pc = 0x1C7268u;
            goto label_1c7268;
        }
    }
    ctx->pc = 0x1C7264u;
    // 0x1c7264: 0xa6c005ac  sh          $zero, 0x5AC($s6)
    ctx->pc = 0x1c7264u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 1452), (uint16_t)GPR_U32(ctx, 0));
label_1c7268:
    // 0x1c7268: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c7268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c726c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c7270: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c7270u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c7274: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c7274u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c7278: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c7278u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c727c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c727cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7280: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c7280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7284: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c7284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7288: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c7288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c728c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c728cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7290: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7290u;
            // 0x1c7294: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7298u;
}
