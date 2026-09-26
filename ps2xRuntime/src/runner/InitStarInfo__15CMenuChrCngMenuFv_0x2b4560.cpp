#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitStarInfo__15CMenuChrCngMenuFv
// Address: 0x2b4560 - 0x2b45d4
void InitStarInfo__15CMenuChrCngMenuFv_0x2b4560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitStarInfo__15CMenuChrCngMenuFv_0x2b4560");
#endif

    switch (ctx->pc) {
        case 0x2b4590u: goto label_2b4590;
        default: break;
    }

    ctx->pc = 0x2b4560u;

    // 0x2b4560: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b4560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b4564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4568: 0xa4830256  sh          $v1, 0x256($a0)
    ctx->pc = 0x2b4568u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 598), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b456c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b456cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4570: 0xa4800254  sh          $zero, 0x254($a0)
    ctx->pc = 0x2b4570u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 596), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b4574: 0xac80025c  sw          $zero, 0x25C($a0)
    ctx->pc = 0x2b4574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 604), GPR_U32(ctx, 0));
    // 0x2b4578: 0xac800258  sw          $zero, 0x258($a0)
    ctx->pc = 0x2b4578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 0));
    // 0x2b457c: 0xac800260  sw          $zero, 0x260($a0)
    ctx->pc = 0x2b457cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 0));
    // 0x2b4580: 0xac800264  sw          $zero, 0x264($a0)
    ctx->pc = 0x2b4580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 0));
    // 0x2b4584: 0xac800268  sw          $zero, 0x268($a0)
    ctx->pc = 0x2b4584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 0));
    // 0x2b4588: 0xac80026c  sw          $zero, 0x26C($a0)
    ctx->pc = 0x2b4588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 0));
    // 0x2b458c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b458cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4590:
    // 0x2b4590: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2b4590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2b4594: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2b4594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2b4598: 0xace00284  sw          $zero, 0x284($a3)
    ctx->pc = 0x2b4598u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 644), GPR_U32(ctx, 0));
    // 0x2b459c: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x2b459cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2b45a0: 0xace0029c  sw          $zero, 0x29C($a3)
    ctx->pc = 0x2b45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 668), GPR_U32(ctx, 0));
    // 0x2b45a4: 0x24c600c0  addiu       $a2, $a2, 0xC0
    ctx->pc = 0x2b45a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x2b45a8: 0xace002b4  sw          $zero, 0x2B4($a3)
    ctx->pc = 0x2b45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 692), GPR_U32(ctx, 0));
    // 0x2b45ac: 0xace002cc  sw          $zero, 0x2CC($a3)
    ctx->pc = 0x2b45acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 716), GPR_U32(ctx, 0));
    // 0x2b45b0: 0xace002e4  sw          $zero, 0x2E4($a3)
    ctx->pc = 0x2b45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 740), GPR_U32(ctx, 0));
    // 0x2b45b4: 0xace002fc  sw          $zero, 0x2FC($a3)
    ctx->pc = 0x2b45b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 764), GPR_U32(ctx, 0));
    // 0x2b45b8: 0xace00314  sw          $zero, 0x314($a3)
    ctx->pc = 0x2b45b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 788), GPR_U32(ctx, 0));
    // 0x2b45bc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B45BCu;
    {
        const bool branch_taken_0x2b45bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B45C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B45BCu;
            // 0x2b45c0: 0xace0032c  sw          $zero, 0x32C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45bc) {
            ctx->pc = 0x2B4590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b4590;
        }
    }
    ctx->pc = 0x2B45C4u;
    // 0x2b45c4: 0xac800250  sw          $zero, 0x250($a0)
    ctx->pc = 0x2b45c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 0));
    // 0x2b45c8: 0xac800270  sw          $zero, 0x270($a0)
    ctx->pc = 0x2b45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 0));
    // 0x2b45cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B45CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B45D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B45CCu;
            // 0x2b45d0: 0xe4800278  swc1        $f0, 0x278($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B45D4u;
}
