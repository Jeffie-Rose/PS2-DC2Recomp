#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPoint__11COMMON_GAGEFf
// Address: 0x196d10 - 0x196d58
void AddPoint__11COMMON_GAGEFf_0x196d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPoint__11COMMON_GAGEFf_0x196d10");
#endif

    ctx->pc = 0x196d10u;

    // 0x196d10: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x196d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x196d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196d18: 0x0  nop
    ctx->pc = 0x196d18u;
    // NOP
    // 0x196d1c: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x196d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x196d20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x196d20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196d24: 0x0  nop
    ctx->pc = 0x196d24u;
    // NOP
    // 0x196d28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x196D28u;
    {
        const bool branch_taken_0x196d28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x196D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196D28u;
            // 0x196d2c: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d28) {
            ctx->pc = 0x196D34u;
            goto label_196d34;
        }
    }
    ctx->pc = 0x196D30u;
    // 0x196d30: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x196d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_196d34:
    // 0x196d34: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x196d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196d38: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x196d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x196d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196d40: 0x0  nop
    ctx->pc = 0x196d40u;
    // NOP
    // 0x196d44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x196D44u;
    {
        const bool branch_taken_0x196d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x196d44) {
            ctx->pc = 0x196D50u;
            goto label_196d50;
        }
    }
    ctx->pc = 0x196D4Cu;
    // 0x196d4c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x196d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_196d50:
    // 0x196d50: 0x3e00008  jr          $ra
    ctx->pc = 0x196D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196D58u;
}
