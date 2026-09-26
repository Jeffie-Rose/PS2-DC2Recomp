#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__14CSwordLuminousFv
// Address: 0x1c1c60 - 0x1c1d28
void Step__14CSwordLuminousFv_0x1c1c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__14CSwordLuminousFv_0x1c1c60");
#endif

    ctx->pc = 0x1c1c60u;

    // 0x1c1c60: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1c1c60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1c64: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C1C64u;
    {
        const bool branch_taken_0x1c1c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C64u;
            // 0x1c1c68: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c64) {
            ctx->pc = 0x1C1D20u;
            goto label_1c1d20;
        }
    }
    ctx->pc = 0x1C1C6Cu;
    // 0x1c1c6c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C1C6Cu;
    {
        const bool branch_taken_0x1c1c6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C1C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C6Cu;
            // 0x1c1c70: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c6c) {
            ctx->pc = 0x1C1CBCu;
            goto label_1c1cbc;
        }
    }
    ctx->pc = 0x1C1C74u;
    // 0x1c1c74: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C1C74u;
    {
        const bool branch_taken_0x1c1c74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C1C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C74u;
            // 0x1c1c78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c74) {
            ctx->pc = 0x1C1CE8u;
            goto label_1c1ce8;
        }
    }
    ctx->pc = 0x1C1C7Cu;
    // 0x1c1c7c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1C7Cu;
    {
        const bool branch_taken_0x1c1c7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1c7c) {
            ctx->pc = 0x1C1C8Cu;
            goto label_1c1c8c;
        }
    }
    ctx->pc = 0x1C1C84u;
    // 0x1c1c84: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C1C84u;
    {
        const bool branch_taken_0x1c1c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C84u;
            // 0x1c1c88: 0xc4810014  lwc1        $f1, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c84) {
            ctx->pc = 0x1C1CECu;
            goto label_1c1cec;
        }
    }
    ctx->pc = 0x1C1C8Cu;
label_1c1c8c:
    // 0x1c1c8c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1c1c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1c90: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x1c1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x1c1c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c1c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1c98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1c9c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c1c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1ca0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c1ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c1ca4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1c1ca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1ca8: 0x0  nop
    ctx->pc = 0x1c1ca8u;
    // NOP
    // 0x1c1cac: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1C1CACu;
    {
        const bool branch_taken_0x1c1cac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CACu;
            // 0x1c1cb0: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cac) {
            ctx->pc = 0x1C1CE8u;
            goto label_1c1ce8;
        }
    }
    ctx->pc = 0x1C1CB4u;
    // 0x1c1cb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C1CB4u;
    {
        const bool branch_taken_0x1c1cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CB4u;
            // 0x1c1cb8: 0xe4820010  swc1        $f2, 0x10($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cb4) {
            ctx->pc = 0x1C1CE8u;
            goto label_1c1ce8;
        }
    }
    ctx->pc = 0x1C1CBCu;
label_1c1cbc:
    // 0x1c1cbc: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x1c1cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1cc0: 0x3c033d00  lui         $v1, 0x3D00
    ctx->pc = 0x1c1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15616 << 16));
    // 0x1c1cc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c1cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1cc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c1cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1ccc: 0x0  nop
    ctx->pc = 0x1c1cccu;
    // NOP
    // 0x1c1cd0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1c1cd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c1cd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c1cd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1cd8: 0x0  nop
    ctx->pc = 0x1c1cd8u;
    // NOP
    // 0x1c1cdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1CDCu;
    {
        const bool branch_taken_0x1c1cdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CDCu;
            // 0x1c1ce0: 0xe4810010  swc1        $f1, 0x10($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cdc) {
            ctx->pc = 0x1C1CE8u;
            goto label_1c1ce8;
        }
    }
    ctx->pc = 0x1C1CE4u;
    // 0x1c1ce4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1c1ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c1ce8:
    // 0x1c1ce8: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1c1ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1cec:
    // 0x1c1cec: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x1c1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x1c1cf0: 0x34657750  ori         $a1, $v1, 0x7750
    ctx->pc = 0x1c1cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x1c1cf4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c1cf4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1cf8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1c1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1c1cfc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c1cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c1d00: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c1d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1d04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c1d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c1d08: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1c1d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1d0c: 0x0  nop
    ctx->pc = 0x1c1d0cu;
    // NOP
    // 0x1c1d10: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1D10u;
    {
        const bool branch_taken_0x1c1d10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D10u;
            // 0x1c1d14: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d10) {
            ctx->pc = 0x1C1D20u;
            goto label_1c1d20;
        }
    }
    ctx->pc = 0x1C1D18u;
    // 0x1c1d18: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c1d18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c1d1c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1c1d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_1c1d20:
    // 0x1c1d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1D28u;
}
