#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect<i>iPUc
// Address: 0x223d60 - 0x223efc
void DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect_i_iPUc_0x223d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect_i_iPUc_0x223d60");
#endif

    switch (ctx->pc) {
        case 0x223db8u: goto label_223db8;
        case 0x223dc4u: goto label_223dc4;
        case 0x223dd0u: goto label_223dd0;
        case 0x223ddcu: goto label_223ddc;
        case 0x223dfcu: goto label_223dfc;
        case 0x223e18u: goto label_223e18;
        case 0x223e1cu: goto label_223e1c;
        case 0x223e48u: goto label_223e48;
        case 0x223e54u: goto label_223e54;
        case 0x223e6cu: goto label_223e6c;
        case 0x223e70u: goto label_223e70;
        case 0x223e9cu: goto label_223e9c;
        case 0x223ed8u: goto label_223ed8;
        default: break;
    }

    ctx->pc = 0x223d60u;

    // 0x223d60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x223d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x223d64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x223d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x223d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x223d6c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x223d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x223d70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x223d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x223d74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x223d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x223d78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x223d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x223d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x223d80: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x223d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x223d84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x223d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x223d88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x223d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d8c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x223d8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x223d90: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x223d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d94: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x223d94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x223d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d9c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x223d9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x223da0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x223da0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x223da4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x223da4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x223da8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223dac: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x223dacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x223db0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223DB0u;
    SET_GPR_U32(ctx, 31, 0x223DB8u);
    ctx->pc = 0x223DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223DB0u;
            // 0x223db4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DB8u; }
        if (ctx->pc != 0x223DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DB8u; }
        if (ctx->pc != 0x223DB8u) { return; }
    }
    ctx->pc = 0x223DB8u;
label_223db8:
    // 0x223db8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x223db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223dbc: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x223DBCu;
    SET_GPR_U32(ctx, 31, 0x223DC4u);
    ctx->pc = 0x223DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223DBCu;
            // 0x223dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DC4u; }
        if (ctx->pc != 0x223DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DC4u; }
        if (ctx->pc != 0x223DC4u) { return; }
    }
    ctx->pc = 0x223DC4u;
label_223dc4:
    // 0x223dc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x223dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223dc8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x223DC8u;
    SET_GPR_U32(ctx, 31, 0x223DD0u);
    ctx->pc = 0x223DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223DC8u;
            // 0x223dcc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DD0u; }
        if (ctx->pc != 0x223DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DD0u; }
        if (ctx->pc != 0x223DD0u) { return; }
    }
    ctx->pc = 0x223DD0u;
label_223dd0:
    // 0x223dd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223dd4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x223DD4u;
    SET_GPR_U32(ctx, 31, 0x223DDCu);
    ctx->pc = 0x223DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223DD4u;
            // 0x223dd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DDCu; }
        if (ctx->pc != 0x223DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DDCu; }
        if (ctx->pc != 0x223DDCu) { return; }
    }
    ctx->pc = 0x223DDCu;
label_223ddc:
    // 0x223ddc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223DDCu;
    {
        const bool branch_taken_0x223ddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223DDCu;
            // 0x223de0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ddc) {
            ctx->pc = 0x223E04u;
            goto label_223e04;
        }
    }
    ctx->pc = 0x223DE4u;
    // 0x223de4: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x223de4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x223de8: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x223de8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x223dec: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x223decu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x223df0: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x223df0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x223df4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x223DF4u;
    SET_GPR_U32(ctx, 31, 0x223DFCu);
    ctx->pc = 0x223DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223DF4u;
            // 0x223df8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DFCu; }
        if (ctx->pc != 0x223DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223DFCu; }
        if (ctx->pc != 0x223DFCu) { return; }
    }
    ctx->pc = 0x223DFCu;
label_223dfc:
    // 0x223dfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x223DFCu;
    {
        const bool branch_taken_0x223dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223DFCu;
            // 0x223e00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223dfc) {
            ctx->pc = 0x223E1Cu;
            goto label_223e1c;
        }
    }
    ctx->pc = 0x223E04u;
label_223e04:
    // 0x223e04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x223e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x223e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e0c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x223e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e10: 0xc04d320  jal         func_134C80
    ctx->pc = 0x223E10u;
    SET_GPR_U32(ctx, 31, 0x223E18u);
    ctx->pc = 0x223E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E10u;
            // 0x223e14: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E18u; }
        if (ctx->pc != 0x223E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E18u; }
        if (ctx->pc != 0x223E18u) { return; }
    }
    ctx->pc = 0x223E18u;
label_223e18:
    // 0x223e18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x223e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223e1c:
    // 0x223e1c: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x223e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x223e20: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x223e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x223e24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x223e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223e28: 0x0  nop
    ctx->pc = 0x223e28u;
    // NOP
    // 0x223e2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223e30: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x223e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223e34: 0x0  nop
    ctx->pc = 0x223e34u;
    // NOP
    // 0x223e38: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x223E38u;
    {
        const bool branch_taken_0x223e38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x223E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E38u;
            // 0x223e3c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e38) {
            ctx->pc = 0x223ED0u;
            goto label_223ed0;
        }
    }
    ctx->pc = 0x223E40u;
    // 0x223e40: 0xc0a248c  jal         func_289230
    ctx->pc = 0x223E40u;
    SET_GPR_U32(ctx, 31, 0x223E48u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E48u; }
        if (ctx->pc != 0x223E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E48u; }
        if (ctx->pc != 0x223E48u) { return; }
    }
    ctx->pc = 0x223E48u;
label_223e48:
    // 0x223e48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x223e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e4c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x223E4Cu;
    SET_GPR_U32(ctx, 31, 0x223E54u);
    ctx->pc = 0x223E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E4Cu;
            // 0x223e50: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E54u; }
        if (ctx->pc != 0x223E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E54u; }
        if (ctx->pc != 0x223E54u) { return; }
    }
    ctx->pc = 0x223E54u;
label_223e54:
    // 0x223e54: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x223e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x223e58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e5c: 0x8fa8006c  lw          $t0, 0x6C($sp)
    ctx->pc = 0x223e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x223e60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x223e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e64: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x223E64u;
    SET_GPR_U32(ctx, 31, 0x223E6Cu);
    ctx->pc = 0x223E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E64u;
            // 0x223e68: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E6Cu; }
        if (ctx->pc != 0x223E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E6Cu; }
        if (ctx->pc != 0x223E6Cu) { return; }
    }
    ctx->pc = 0x223E6Cu;
label_223e6c:
    // 0x223e6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x223e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223e70:
    // 0x223e70: 0x27b20074  addiu       $s2, $sp, 0x74
    ctx->pc = 0x223e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x223e74: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x223e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x223e78: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x223e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x223e7c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x223e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x223e80: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x223e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x223e84: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x223E84u;
    {
        const bool branch_taken_0x223e84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x223e84) {
            ctx->pc = 0x223EB8u;
            goto label_223eb8;
        }
    }
    ctx->pc = 0x223E8Cu;
    // 0x223e8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x223e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e90: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x223e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x223e94: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x223E94u;
    SET_GPR_U32(ctx, 31, 0x223E9Cu);
    ctx->pc = 0x223E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E94u;
            // 0x223e98: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E9Cu; }
        if (ctx->pc != 0x223E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E9Cu; }
        if (ctx->pc != 0x223E9Cu) { return; }
    }
    ctx->pc = 0x223E9Cu;
label_223e9c:
    // 0x223e9c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x223e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x223ea0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x223ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x223ea4: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x223ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x223ea8: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x223ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x223eac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x223eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x223eb0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x223EB0u;
    {
        const bool branch_taken_0x223eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223EB0u;
            // 0x223eb4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223eb0) {
            ctx->pc = 0x223E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223e70;
        }
    }
    ctx->pc = 0x223EB8u;
label_223eb8:
    // 0x223eb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x223eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x223ebc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x223ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223ec0: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x223ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x223ec4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x223ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x223ec8: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x223EC8u;
    {
        const bool branch_taken_0x223ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223EC8u;
            // 0x223ecc: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ec8) {
            ctx->pc = 0x223E1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223e1c;
        }
    }
    ctx->pc = 0x223ED0u;
label_223ed0:
    // 0x223ed0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x223ED0u;
    SET_GPR_U32(ctx, 31, 0x223ED8u);
    ctx->pc = 0x223ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223ED0u;
            // 0x223ed4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223ED8u; }
        if (ctx->pc != 0x223ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223ED8u; }
        if (ctx->pc != 0x223ED8u) { return; }
    }
    ctx->pc = 0x223ED8u;
label_223ed8:
    // 0x223ed8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x223ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223edc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x223edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x223ee0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x223ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223ee4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x223ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223ee8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x223ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223eec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x223eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223ef0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x223ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x223EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223EF4u;
            // 0x223ef8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223EFCu;
}
