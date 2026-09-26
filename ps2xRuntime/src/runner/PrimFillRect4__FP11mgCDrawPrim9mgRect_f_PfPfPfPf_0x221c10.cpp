#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrimFillRect4__FP11mgCDrawPrim9mgRect<f>PfPfPfPf
// Address: 0x221c10 - 0x221e30
void PrimFillRect4__FP11mgCDrawPrim9mgRect_f_PfPfPfPf_0x221c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrimFillRect4__FP11mgCDrawPrim9mgRect_f_PfPfPfPf_0x221c10");
#endif

    switch (ctx->pc) {
        case 0x221ca4u: goto label_221ca4;
        case 0x221cb0u: goto label_221cb0;
        case 0x221cbcu: goto label_221cbc;
        case 0x221cc8u: goto label_221cc8;
        case 0x221ce0u: goto label_221ce0;
        case 0x221cf4u: goto label_221cf4;
        case 0x221cfcu: goto label_221cfc;
        case 0x221d08u: goto label_221d08;
        case 0x221d14u: goto label_221d14;
        case 0x221d20u: goto label_221d20;
        case 0x221d38u: goto label_221d38;
        case 0x221d4cu: goto label_221d4c;
        case 0x221d54u: goto label_221d54;
        case 0x221d60u: goto label_221d60;
        case 0x221d6cu: goto label_221d6c;
        case 0x221d78u: goto label_221d78;
        case 0x221d90u: goto label_221d90;
        case 0x221da4u: goto label_221da4;
        case 0x221dacu: goto label_221dac;
        case 0x221db8u: goto label_221db8;
        case 0x221dc4u: goto label_221dc4;
        case 0x221dd0u: goto label_221dd0;
        case 0x221de8u: goto label_221de8;
        case 0x221dfcu: goto label_221dfc;
        default: break;
    }

    ctx->pc = 0x221c10u;

    // 0x221c10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x221c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x221c14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x221c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x221c18: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x221c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x221c1c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x221c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x221c20: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x221c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x221c24: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x221c24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x221c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x221c2c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x221c2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x221c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x221c34: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x221c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x221c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x221c3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x221c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x221c40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x221c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c44: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x221c44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x221c48: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x221c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x221c4c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x221c4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x221c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x221c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x221c54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x221c58: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x221c58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x221c5c: 0x12200067  beqz        $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x221C5Cu;
    {
        const bool branch_taken_0x221c5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221C5Cu;
            // 0x221c60: 0x7cc30000  sq          $v1, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c5c) {
            ctx->pc = 0x221DFCu;
            goto label_221dfc;
        }
    }
    ctx->pc = 0x221C64u;
    // 0x221c64: 0x12a00065  beqz        $s5, . + 4 + (0x65 << 2)
    ctx->pc = 0x221C64u;
    {
        const bool branch_taken_0x221c64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x221c64) {
            ctx->pc = 0x221DFCu;
            goto label_221dfc;
        }
    }
    ctx->pc = 0x221C6Cu;
    // 0x221c6c: 0x12800063  beqz        $s4, . + 4 + (0x63 << 2)
    ctx->pc = 0x221C6Cu;
    {
        const bool branch_taken_0x221c6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x221c6c) {
            ctx->pc = 0x221DFCu;
            goto label_221dfc;
        }
    }
    ctx->pc = 0x221C74u;
    // 0x221c74: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x221C74u;
    {
        const bool branch_taken_0x221c74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x221c74) {
            ctx->pc = 0x221C84u;
            goto label_221c84;
        }
    }
    ctx->pc = 0x221C7Cu;
    // 0x221c7c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x221C7Cu;
    {
        const bool branch_taken_0x221c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221C7Cu;
            // 0x221c80: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c7c) {
            ctx->pc = 0x221E00u;
            goto label_221e00;
        }
    }
    ctx->pc = 0x221C84u;
label_221c84:
    // 0x221c84: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x221c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x221c88: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x221c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221c8c: 0xc7b60094  lwc1        $f22, 0x94($sp)
    ctx->pc = 0x221c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x221c90: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x221c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221c94: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x221c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221c98: 0x46011500  add.s       $f20, $f2, $f1
    ctx->pc = 0x221c98u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x221c9c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221C9Cu;
    SET_GPR_U32(ctx, 31, 0x221CA4u);
    ctx->pc = 0x221CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221C9Cu;
            // 0x221ca0: 0x4600b540  add.s       $f21, $f22, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CA4u; }
        if (ctx->pc != 0x221CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CA4u; }
        if (ctx->pc != 0x221CA4u) { return; }
    }
    ctx->pc = 0x221CA4u;
label_221ca4:
    // 0x221ca4: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x221ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221ca8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221CA8u;
    SET_GPR_U32(ctx, 31, 0x221CB0u);
    ctx->pc = 0x221CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221CA8u;
            // 0x221cac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CB0u; }
        if (ctx->pc != 0x221CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CB0u; }
        if (ctx->pc != 0x221CB0u) { return; }
    }
    ctx->pc = 0x221CB0u;
label_221cb0:
    // 0x221cb0: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x221cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221cb4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221CB4u;
    SET_GPR_U32(ctx, 31, 0x221CBCu);
    ctx->pc = 0x221CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221CB4u;
            // 0x221cb8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CBCu; }
        if (ctx->pc != 0x221CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CBCu; }
        if (ctx->pc != 0x221CBCu) { return; }
    }
    ctx->pc = 0x221CBCu;
label_221cbc:
    // 0x221cbc: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x221cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221cc0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221CC0u;
    SET_GPR_U32(ctx, 31, 0x221CC8u);
    ctx->pc = 0x221CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221CC0u;
            // 0x221cc4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CC8u; }
        if (ctx->pc != 0x221CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CC8u; }
        if (ctx->pc != 0x221CC8u) { return; }
    }
    ctx->pc = 0x221CC8u;
label_221cc8:
    // 0x221cc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x221cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ccc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x221cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cd0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x221cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cd4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x221cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cd8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x221CD8u;
    SET_GPR_U32(ctx, 31, 0x221CE0u);
    ctx->pc = 0x221CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221CD8u;
            // 0x221cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CE0u; }
        if (ctx->pc != 0x221CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CE0u; }
        if (ctx->pc != 0x221CE0u) { return; }
    }
    ctx->pc = 0x221CE0u;
label_221ce0:
    // 0x221ce0: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x221ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ce8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x221ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x221cec: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x221CECu;
    SET_GPR_U32(ctx, 31, 0x221CF4u);
    ctx->pc = 0x221CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221CECu;
            // 0x221cf0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CF4u; }
        if (ctx->pc != 0x221CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CF4u; }
        if (ctx->pc != 0x221CF4u) { return; }
    }
    ctx->pc = 0x221CF4u;
label_221cf4:
    // 0x221cf4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221CF4u;
    SET_GPR_U32(ctx, 31, 0x221CFCu);
    ctx->pc = 0x221CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221CF4u;
            // 0x221cf8: 0xc6ac0000  lwc1        $f12, 0x0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CFCu; }
        if (ctx->pc != 0x221CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CFCu; }
        if (ctx->pc != 0x221CFCu) { return; }
    }
    ctx->pc = 0x221CFCu;
label_221cfc:
    // 0x221cfc: 0xc6ac0004  lwc1        $f12, 0x4($s5)
    ctx->pc = 0x221cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221d00: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221D00u;
    SET_GPR_U32(ctx, 31, 0x221D08u);
    ctx->pc = 0x221D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D00u;
            // 0x221d04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D08u; }
        if (ctx->pc != 0x221D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D08u; }
        if (ctx->pc != 0x221D08u) { return; }
    }
    ctx->pc = 0x221D08u;
label_221d08:
    // 0x221d08: 0xc6ac0008  lwc1        $f12, 0x8($s5)
    ctx->pc = 0x221d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221d0c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221D0Cu;
    SET_GPR_U32(ctx, 31, 0x221D14u);
    ctx->pc = 0x221D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D0Cu;
            // 0x221d10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D14u; }
        if (ctx->pc != 0x221D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D14u; }
        if (ctx->pc != 0x221D14u) { return; }
    }
    ctx->pc = 0x221D14u;
label_221d14:
    // 0x221d14: 0xc6ac000c  lwc1        $f12, 0xC($s5)
    ctx->pc = 0x221d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221d18: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221D18u;
    SET_GPR_U32(ctx, 31, 0x221D20u);
    ctx->pc = 0x221D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D18u;
            // 0x221d1c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D20u; }
        if (ctx->pc != 0x221D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D20u; }
        if (ctx->pc != 0x221D20u) { return; }
    }
    ctx->pc = 0x221D20u;
label_221d20:
    // 0x221d20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x221d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x221d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d28: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x221d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d2c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x221d2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d30: 0xc04d320  jal         func_134C80
    ctx->pc = 0x221D30u;
    SET_GPR_U32(ctx, 31, 0x221D38u);
    ctx->pc = 0x221D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D30u;
            // 0x221d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D38u; }
        if (ctx->pc != 0x221D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D38u; }
        if (ctx->pc != 0x221D38u) { return; }
    }
    ctx->pc = 0x221D38u;
label_221d38:
    // 0x221d38: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x221d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x221d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d40: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x221d40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x221d44: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x221D44u;
    SET_GPR_U32(ctx, 31, 0x221D4Cu);
    ctx->pc = 0x221D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D44u;
            // 0x221d48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D4Cu; }
        if (ctx->pc != 0x221D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D4Cu; }
        if (ctx->pc != 0x221D4Cu) { return; }
    }
    ctx->pc = 0x221D4Cu;
label_221d4c:
    // 0x221d4c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221D4Cu;
    SET_GPR_U32(ctx, 31, 0x221D54u);
    ctx->pc = 0x221D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D4Cu;
            // 0x221d50: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D54u; }
        if (ctx->pc != 0x221D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D54u; }
        if (ctx->pc != 0x221D54u) { return; }
    }
    ctx->pc = 0x221D54u;
label_221d54:
    // 0x221d54: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x221d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221d58: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221D58u;
    SET_GPR_U32(ctx, 31, 0x221D60u);
    ctx->pc = 0x221D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D58u;
            // 0x221d5c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D60u; }
        if (ctx->pc != 0x221D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D60u; }
        if (ctx->pc != 0x221D60u) { return; }
    }
    ctx->pc = 0x221D60u;
label_221d60:
    // 0x221d60: 0xc68c0008  lwc1        $f12, 0x8($s4)
    ctx->pc = 0x221d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221d64: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221D64u;
    SET_GPR_U32(ctx, 31, 0x221D6Cu);
    ctx->pc = 0x221D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D64u;
            // 0x221d68: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D6Cu; }
        if (ctx->pc != 0x221D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D6Cu; }
        if (ctx->pc != 0x221D6Cu) { return; }
    }
    ctx->pc = 0x221D6Cu;
label_221d6c:
    // 0x221d6c: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x221d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221d70: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221D70u;
    SET_GPR_U32(ctx, 31, 0x221D78u);
    ctx->pc = 0x221D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D70u;
            // 0x221d74: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D78u; }
        if (ctx->pc != 0x221D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D78u; }
        if (ctx->pc != 0x221D78u) { return; }
    }
    ctx->pc = 0x221D78u;
label_221d78:
    // 0x221d78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x221d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x221d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d80: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x221d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d84: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x221d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d88: 0xc04d320  jal         func_134C80
    ctx->pc = 0x221D88u;
    SET_GPR_U32(ctx, 31, 0x221D90u);
    ctx->pc = 0x221D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D88u;
            // 0x221d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D90u; }
        if (ctx->pc != 0x221D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D90u; }
        if (ctx->pc != 0x221D90u) { return; }
    }
    ctx->pc = 0x221D90u;
label_221d90:
    // 0x221d90: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x221d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d98: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x221d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x221d9c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x221D9Cu;
    SET_GPR_U32(ctx, 31, 0x221DA4u);
    ctx->pc = 0x221DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221D9Cu;
            // 0x221da0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DA4u; }
        if (ctx->pc != 0x221DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DA4u; }
        if (ctx->pc != 0x221DA4u) { return; }
    }
    ctx->pc = 0x221DA4u;
label_221da4:
    // 0x221da4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221DA4u;
    SET_GPR_U32(ctx, 31, 0x221DACu);
    ctx->pc = 0x221DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221DA4u;
            // 0x221da8: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DACu; }
        if (ctx->pc != 0x221DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DACu; }
        if (ctx->pc != 0x221DACu) { return; }
    }
    ctx->pc = 0x221DACu;
label_221dac:
    // 0x221dac: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x221dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221db0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221DB0u;
    SET_GPR_U32(ctx, 31, 0x221DB8u);
    ctx->pc = 0x221DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221DB0u;
            // 0x221db4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DB8u; }
        if (ctx->pc != 0x221DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DB8u; }
        if (ctx->pc != 0x221DB8u) { return; }
    }
    ctx->pc = 0x221DB8u;
label_221db8:
    // 0x221db8: 0xc66c0008  lwc1        $f12, 0x8($s3)
    ctx->pc = 0x221db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221dbc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221DBCu;
    SET_GPR_U32(ctx, 31, 0x221DC4u);
    ctx->pc = 0x221DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221DBCu;
            // 0x221dc0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DC4u; }
        if (ctx->pc != 0x221DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DC4u; }
        if (ctx->pc != 0x221DC4u) { return; }
    }
    ctx->pc = 0x221DC4u;
label_221dc4:
    // 0x221dc4: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x221dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221dc8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221DC8u;
    SET_GPR_U32(ctx, 31, 0x221DD0u);
    ctx->pc = 0x221DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221DC8u;
            // 0x221dcc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DD0u; }
        if (ctx->pc != 0x221DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DD0u; }
        if (ctx->pc != 0x221DD0u) { return; }
    }
    ctx->pc = 0x221DD0u;
label_221dd0:
    // 0x221dd0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x221dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x221dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221dd8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x221dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ddc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x221ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221de0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x221DE0u;
    SET_GPR_U32(ctx, 31, 0x221DE8u);
    ctx->pc = 0x221DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221DE0u;
            // 0x221de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DE8u; }
        if (ctx->pc != 0x221DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DE8u; }
        if (ctx->pc != 0x221DE8u) { return; }
    }
    ctx->pc = 0x221DE8u;
label_221de8:
    // 0x221de8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x221de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x221dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221df0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x221df0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x221df4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x221DF4u;
    SET_GPR_U32(ctx, 31, 0x221DFCu);
    ctx->pc = 0x221DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221DF4u;
            // 0x221df8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DFCu; }
        if (ctx->pc != 0x221DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DFCu; }
        if (ctx->pc != 0x221DFCu) { return; }
    }
    ctx->pc = 0x221DFCu;
label_221dfc:
    // 0x221dfc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x221dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_221e00:
    // 0x221e00: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x221e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x221e04: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x221e04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221e08: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x221e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x221e0c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x221e0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221e10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x221e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x221e14: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x221e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221e18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x221e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221e1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x221e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221e20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x221e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221e24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x221e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221e28: 0x3e00008  jr          $ra
    ctx->pc = 0x221E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221E28u;
            // 0x221e2c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221E30u;
}
