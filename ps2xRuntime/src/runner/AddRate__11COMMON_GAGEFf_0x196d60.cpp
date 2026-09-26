#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddRate__11COMMON_GAGEFf
// Address: 0x196d60 - 0x196dac
void AddRate__11COMMON_GAGEFf_0x196d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddRate__11COMMON_GAGEFf_0x196d60");
#endif

    ctx->pc = 0x196d60u;

    // 0x196d60: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x196d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196d64: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x196d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d68: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x196d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x196d6c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x196d6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x196d70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x196d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x196d74: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x196d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196d78: 0x0  nop
    ctx->pc = 0x196d78u;
    // NOP
    // 0x196d7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x196D7Cu;
    {
        const bool branch_taken_0x196d7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196D7Cu;
            // 0x196d80: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d7c) {
            ctx->pc = 0x196D88u;
            goto label_196d88;
        }
    }
    ctx->pc = 0x196D84u;
    // 0x196d84: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x196d84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_196d88:
    // 0x196d88: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x196d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196d8c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x196d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x196d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196d94: 0x0  nop
    ctx->pc = 0x196d94u;
    // NOP
    // 0x196d98: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x196D98u;
    {
        const bool branch_taken_0x196d98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x196d98) {
            ctx->pc = 0x196DA4u;
            goto label_196da4;
        }
    }
    ctx->pc = 0x196DA0u;
    // 0x196da0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x196da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_196da4:
    // 0x196da4: 0x3e00008  jr          $ra
    ctx->pc = 0x196DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196DACu;
}
