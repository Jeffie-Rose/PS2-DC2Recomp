#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CLockOnModelFv
// Address: 0x1cb860 - 0x1cb8b4
void Step__12CLockOnModelFv_0x1cb860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CLockOnModelFv_0x1cb860");
#endif

    ctx->pc = 0x1cb860u;

    // 0x1cb860: 0xc4820088  lwc1        $f2, 0x88($a0)
    ctx->pc = 0x1cb860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb864: 0x3c053d8e  lui         $a1, 0x3D8E
    ctx->pc = 0x1cb864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15758 << 16));
    // 0x1cb868: 0x34a5fa35  ori         $a1, $a1, 0xFA35
    ctx->pc = 0x1cb868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64053);
    // 0x1cb86c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1cb86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1cb870: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1cb870u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb874: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1cb874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1cb878: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb87c: 0x0  nop
    ctx->pc = 0x1cb87cu;
    // NOP
    // 0x1cb880: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1cb880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1cb884: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb888: 0x0  nop
    ctx->pc = 0x1cb888u;
    // NOP
    // 0x1cb88c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB88Cu;
    {
        const bool branch_taken_0x1cb88c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB88Cu;
            // 0x1cb890: 0xe4810088  swc1        $f1, 0x88($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb88c) {
            ctx->pc = 0x1CB8ACu;
            goto label_1cb8ac;
        }
    }
    ctx->pc = 0x1CB894u;
    // 0x1cb894: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1cb894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1cb898: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1cb898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1cb89c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb8a0: 0x0  nop
    ctx->pc = 0x1cb8a0u;
    // NOP
    // 0x1cb8a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb8a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cb8a8: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x1cb8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_1cb8ac:
    // 0x1cb8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB8B4u;
}
