#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ForceSet__16CBattleCharaInfoFv
// Address: 0x1a0550 - 0x1a058c
void ForceSet__16CBattleCharaInfoFv_0x1a0550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForceSet__16CBattleCharaInfoFv_0x1a0550");
#endif

    ctx->pc = 0x1a0550u;

    // 0x1a0550: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x1a0550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a0554: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0554u;
    {
        const bool branch_taken_0x1a0554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0554) {
            ctx->pc = 0x1A0584u;
            goto label_1a0584;
        }
    }
    ctx->pc = 0x1A055Cu;
    // 0x1a055c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1a055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0560: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1a0560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0564: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1a0564u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0568: 0x0  nop
    ctx->pc = 0x1a0568u;
    // NOP
    // 0x1a056c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1A056Cu;
    {
        const bool branch_taken_0x1a056c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a056c) {
            ctx->pc = 0x1A0584u;
            goto label_1a0584;
        }
    }
    ctx->pc = 0x1A0574u;
    // 0x1a0574: 0xe4810084  swc1        $f1, 0x84($a0)
    ctx->pc = 0x1a0574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1a0578: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1a0578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1a057c: 0xac83008c  sw          $v1, 0x8C($a0)
    ctx->pc = 0x1a057cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
    // 0x1a0580: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x1a0580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
label_1a0584:
    // 0x1a0584: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A058Cu;
}
