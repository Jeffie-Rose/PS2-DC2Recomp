#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemBrdSetInfo__Fiiii
// Address: 0x226df0 - 0x226e50
void MenuItemBrdSetInfo__Fiiii_0x226df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemBrdSetInfo__Fiiii_0x226df0");
#endif

    ctx->pc = 0x226df0u;

    // 0x226df0: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x226df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x226df4: 0xaf8693fc  sw          $a2, -0x6C04($gp)
    ctx->pc = 0x226df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939644), GPR_U32(ctx, 6));
    // 0x226df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226dfc: 0x0  nop
    ctx->pc = 0x226dfcu;
    // NOP
    // 0x226e00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x226e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x226e04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x226e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x226e08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x226e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x226e0c: 0x0  nop
    ctx->pc = 0x226e0cu;
    // NOP
    // 0x226e10: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x226e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226e14: 0x0  nop
    ctx->pc = 0x226e14u;
    // NOP
    // 0x226e18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x226E18u;
    {
        const bool branch_taken_0x226e18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x226E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226E18u;
            // 0x226e1c: 0xaf879400  sw          $a3, -0x6C00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939648), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e18) {
            ctx->pc = 0x226E24u;
            goto label_226e24;
        }
    }
    ctx->pc = 0x226E20u;
    // 0x226e20: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x226e20u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_226e24:
    // 0x226e24: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x226e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x226e28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x226e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226e30: 0x0  nop
    ctx->pc = 0x226e30u;
    // NOP
    // 0x226e34: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x226e34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x226e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226e3c: 0xa38293f8  sb          $v0, -0x6C08($gp)
    ctx->pc = 0x226e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939640), (uint8_t)GPR_U32(ctx, 2));
    // 0x226e40: 0x0  nop
    ctx->pc = 0x226e40u;
    // NOP
    // 0x226e44: 0x0  nop
    ctx->pc = 0x226e44u;
    // NOP
    // 0x226e48: 0x808b050  j           func_22C140
    ctx->pc = 0x226E48u;
    ctx->pc = 0x226E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226E48u;
            // 0x226e4c: 0xe7809404  swc1        $f0, -0x6BFC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939652), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C140u;
    if (runtime->hasFunction(0x22C140u)) {
        auto targetFn = runtime->lookupFunction(0x22C140u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Func_MenuItemBrdPosStep__Fi_0x22c140(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x226E50u;
}
