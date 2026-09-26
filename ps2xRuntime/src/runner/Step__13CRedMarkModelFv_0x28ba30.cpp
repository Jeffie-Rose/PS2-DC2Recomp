#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CRedMarkModelFv
// Address: 0x28ba30 - 0x28ba7c
void Step__13CRedMarkModelFv_0x28ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CRedMarkModelFv_0x28ba30");
#endif

    ctx->pc = 0x28ba30u;

    // 0x28ba30: 0xc4820084  lwc1        $f2, 0x84($a0)
    ctx->pc = 0x28ba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ba34: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x28ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x28ba38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28ba38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x28ba3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28ba3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ba40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28ba40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ba44: 0x0  nop
    ctx->pc = 0x28ba44u;
    // NOP
    // 0x28ba48: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x28ba48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x28ba4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28ba4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ba50: 0x0  nop
    ctx->pc = 0x28ba50u;
    // NOP
    // 0x28ba54: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x28BA54u;
    {
        const bool branch_taken_0x28ba54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28BA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA54u;
            // 0x28ba58: 0xe4810084  swc1        $f1, 0x84($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba54) {
            ctx->pc = 0x28BA74u;
            goto label_28ba74;
        }
    }
    ctx->pc = 0x28BA5Cu;
    // 0x28ba5c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x28ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x28ba60: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28ba60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x28ba64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ba64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ba68: 0x0  nop
    ctx->pc = 0x28ba68u;
    // NOP
    // 0x28ba6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28ba6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28ba70: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x28ba70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_28ba74:
    // 0x28ba74: 0x3e00008  jr          $ra
    ctx->pc = 0x28BA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BA7Cu;
}
