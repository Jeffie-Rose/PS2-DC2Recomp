#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgTransWorldPrim3DSprite__FPiPiPfffi
// Address: 0x145bb0 - 0x145d80
void mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0");
#endif

    switch (ctx->pc) {
        case 0x145c00u: goto label_145c00;
        case 0x145c6cu: goto label_145c6c;
        case 0x145c78u: goto label_145c78;
        case 0x145cd8u: goto label_145cd8;
        case 0x145cf0u: goto label_145cf0;
        case 0x145cfcu: goto label_145cfc;
        case 0x145d18u: goto label_145d18;
        case 0x145d30u: goto label_145d30;
        case 0x145d3cu: goto label_145d3c;
        case 0x145d4cu: goto label_145d4c;
        case 0x145d58u: goto label_145d58;
        default: break;
    }

    ctx->pc = 0x145bb0u;

    // 0x145bb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x145bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x145bb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x145bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x145bb8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x145bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x145bbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x145bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x145bc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x145bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x145bc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x145bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x145bc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x145bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145bcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x145bd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x145bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145bd4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x145bd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x145bd8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x145bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x145bdc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x145bdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x145be0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x145be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145be4: 0xc4210f10  lwc1        $f1, 0xF10($at)
    ctx->pc = 0x145be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145be8: 0x24a50ed0  addiu       $a1, $a1, 0xED0
    ctx->pc = 0x145be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3792));
    // 0x145bec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x145becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x145bf0: 0xc4200f24  lwc1        $f0, 0xF24($at)
    ctx->pc = 0x145bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145bf4: 0x46016502  mul.s       $f20, $f12, $f1
    ctx->pc = 0x145bf4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x145bf8: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x145BF8u;
    SET_GPR_U32(ctx, 31, 0x145C00u);
    ctx->pc = 0x145BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145BF8u;
            // 0x145bfc: 0x46006d42  mul.s       $f21, $f13, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C00u; }
        if (ctx->pc != 0x145C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C00u; }
        if (ctx->pc != 0x145C00u) { return; }
    }
    ctx->pc = 0x145C00u;
label_145c00:
    // 0x145c00: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x145c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x145c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x145c08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145c0c: 0x0  nop
    ctx->pc = 0x145c0cu;
    // NOP
    // 0x145c10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x145c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145c14: 0x0  nop
    ctx->pc = 0x145c14u;
    // NOP
    // 0x145c18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x145C18u;
    {
        const bool branch_taken_0x145c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x145C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145C18u;
            // 0x145c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c18) {
            ctx->pc = 0x145C28u;
            goto label_145c28;
        }
    }
    ctx->pc = 0x145C20u;
    // 0x145c20: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x145C20u;
    {
        const bool branch_taken_0x145c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145C20u;
            // 0x145c24: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c20) {
            ctx->pc = 0x145D60u;
            goto label_145d60;
        }
    }
    ctx->pc = 0x145C28u;
label_145c28:
    // 0x145c28: 0x0  nop
    ctx->pc = 0x145c28u;
    // NOP
    // 0x145c2c: 0x0  nop
    ctx->pc = 0x145c2cu;
    // NOP
    // 0x145c30: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x145c30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x145c34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x145c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x145c38: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x145c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145c3c: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x145c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145c40: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x145c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145c44: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x145c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c48: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x145c48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x145c4c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x145c4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x145c50: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x145c50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x145c54: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x145c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x145c58: 0x4603ad42  mul.s       $f21, $f21, $f3
    ctx->pc = 0x145c58u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x145c5c: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x145c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x145c60: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x145c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x145c64: 0xc041c5c  jal         func_107170
    ctx->pc = 0x145C64u;
    SET_GPR_U32(ctx, 31, 0x145C6Cu);
    ctx->pc = 0x145C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C64u;
            // 0x145c68: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C6Cu; }
        if (ctx->pc != 0x145C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C6Cu; }
        if (ctx->pc != 0x145C6Cu) { return; }
    }
    ctx->pc = 0x145C6Cu;
label_145c6c:
    // 0x145c6c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x145c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x145c70: 0xc041c5c  jal         func_107170
    ctx->pc = 0x145C70u;
    SET_GPR_U32(ctx, 31, 0x145C78u);
    ctx->pc = 0x145C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C70u;
            // 0x145c74: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C78u; }
        if (ctx->pc != 0x145C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C78u; }
        if (ctx->pc != 0x145C78u) { return; }
    }
    ctx->pc = 0x145C78u;
label_145c78:
    // 0x145c78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x145c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x145c7c: 0x27b30064  addiu       $s3, $sp, 0x64
    ctx->pc = 0x145c7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x145c80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145c84: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x145c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x145c88: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x145c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c8c: 0x46140882  mul.s       $f2, $f1, $f20
    ctx->pc = 0x145c8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x145c90: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x145c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x145c94: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x145c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x145c98: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x145c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x145c9c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x145c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ca0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x145ca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x145ca4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x145ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x145ca8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x145ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x145cac: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x145cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145cb0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x145cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x145cb4: 0x0  nop
    ctx->pc = 0x145cb4u;
    // NOP
    // 0x145cb8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x145cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x145cbc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x145cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x145cc0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x145cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145cc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x145cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x145cc8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x145cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x145ccc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x145cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145cd0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145CD0u;
    SET_GPR_U32(ctx, 31, 0x145CD8u);
    ctx->pc = 0x145CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CD0u;
            // 0x145cd4: 0x46001b02  mul.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CD8u; }
        if (ctx->pc != 0x145CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CD8u; }
        if (ctx->pc != 0x145CD8u) { return; }
    }
    ctx->pc = 0x145CD8u;
label_145cd8:
    // 0x145cd8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x145cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x145cdc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x145cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ce0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x145ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x145ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145ce8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145CE8u;
    SET_GPR_U32(ctx, 31, 0x145CF0u);
    ctx->pc = 0x145CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CE8u;
            // 0x145cec: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CF0u; }
        if (ctx->pc != 0x145CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CF0u; }
        if (ctx->pc != 0x145CF0u) { return; }
    }
    ctx->pc = 0x145CF0u;
label_145cf0:
    // 0x145cf0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x145cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x145cf4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145CF4u;
    SET_GPR_U32(ctx, 31, 0x145CFCu);
    ctx->pc = 0x145CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CF4u;
            // 0x145cf8: 0xc7ac0068  lwc1        $f12, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CFCu; }
        if (ctx->pc != 0x145CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CFCu; }
        if (ctx->pc != 0x145CFCu) { return; }
    }
    ctx->pc = 0x145CFCu;
label_145cfc:
    // 0x145cfc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x145cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x145d00: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x145d00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x145d04: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x145d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x145d08: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x145d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145d10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145D10u;
    SET_GPR_U32(ctx, 31, 0x145D18u);
    ctx->pc = 0x145D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D10u;
            // 0x145d14: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D18u; }
        if (ctx->pc != 0x145D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D18u; }
        if (ctx->pc != 0x145D18u) { return; }
    }
    ctx->pc = 0x145D18u;
label_145d18:
    // 0x145d18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x145d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x145d1c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x145d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d20: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x145d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x145d24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145d28: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145D28u;
    SET_GPR_U32(ctx, 31, 0x145D30u);
    ctx->pc = 0x145D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D28u;
            // 0x145d2c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D30u; }
        if (ctx->pc != 0x145D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D30u; }
        if (ctx->pc != 0x145D30u) { return; }
    }
    ctx->pc = 0x145D30u;
label_145d30:
    // 0x145d30: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x145d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x145d34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145D34u;
    SET_GPR_U32(ctx, 31, 0x145D3Cu);
    ctx->pc = 0x145D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D34u;
            // 0x145d38: 0xc7ac0078  lwc1        $f12, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D3Cu; }
        if (ctx->pc != 0x145D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D3Cu; }
        if (ctx->pc != 0x145D3Cu) { return; }
    }
    ctx->pc = 0x145D3Cu;
label_145d3c:
    // 0x145d3c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x145d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x145d40: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x145d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x145d44: 0xc05160c  jal         func_145830
    ctx->pc = 0x145D44u;
    SET_GPR_U32(ctx, 31, 0x145D4Cu);
    ctx->pc = 0x145D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D44u;
            // 0x145d48: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145830u;
    if (runtime->hasFunction(0x145830u)) {
        auto targetFn = runtime->lookupFunction(0x145830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D4Cu; }
        if (ctx->pc != 0x145D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        prim_clip_check__FPf_0x145830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D4Cu; }
        if (ctx->pc != 0x145D4Cu) { return; }
    }
    ctx->pc = 0x145D4Cu;
label_145d4c:
    // 0x145d4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d50: 0xc05160c  jal         func_145830
    ctx->pc = 0x145D50u;
    SET_GPR_U32(ctx, 31, 0x145D58u);
    ctx->pc = 0x145D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D50u;
            // 0x145d54: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145830u;
    if (runtime->hasFunction(0x145830u)) {
        auto targetFn = runtime->lookupFunction(0x145830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D58u; }
        if (ctx->pc != 0x145D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        prim_clip_check__FPf_0x145830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D58u; }
        if (ctx->pc != 0x145D58u) { return; }
    }
    ctx->pc = 0x145D58u;
label_145d58:
    // 0x145d58: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x145d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x145d5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x145d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_145d60:
    // 0x145d60: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x145d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x145d64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x145d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145d68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x145d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x145d6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x145d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145d70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x145d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145d74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x145d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145d78: 0x3e00008  jr          $ra
    ctx->pc = 0x145D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145D78u;
            // 0x145d7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145D80u;
}
