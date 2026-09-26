#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPModeRef__12mgCVisualMDTFP1i
// Address: 0x13e740 - 0x13e7b0
void SetPModeRef__12mgCVisualMDTFP1i_0x13e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPModeRef__12mgCVisualMDTFP1i_0x13e740");
#endif

    ctx->pc = 0x13e740u;

    // 0x13e740: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x13e740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x13e744: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E744u;
    {
        const bool branch_taken_0x13e744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E744u;
            // 0x13e748: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e744) {
            ctx->pc = 0x13E754u;
            goto label_13e754;
        }
    }
    ctx->pc = 0x13E74Cu;
    // 0x13e74c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x13e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x13e750: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13e750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_13e754:
    // 0x13e754: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x13e754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x13e758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E758u;
    {
        const bool branch_taken_0x13e758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e758) {
            ctx->pc = 0x13E768u;
            goto label_13e768;
        }
    }
    ctx->pc = 0x13E760u;
    // 0x13e760: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x13e760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x13e764: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x13e764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_13e768:
    // 0x13e768: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13e768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13e76c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13e76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13e770: 0x244241c0  addiu       $v0, $v0, 0x41C0
    ctx->pc = 0x13e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16832));
    // 0x13e774: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x13e774u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x13e778: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x13e778u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e77c: 0x34078001  ori         $a3, $zero, 0x8001
    ctx->pc = 0x13e77cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x13e780: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x13e780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x13e784: 0x24c64120  addiu       $a2, $a2, 0x4120
    ctx->pc = 0x13e784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16672));
    // 0x13e788: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x13e788u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x13e78c: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x13e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x13e790: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x13e790u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x13e794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13e798: 0xac274120  sw          $a3, 0x4120($at)
    ctx->pc = 0x13e798u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16672), GPR_U32(ctx, 7));
    // 0x13e79c: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x13e79cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e7a0: 0x7ca60010  sq          $a2, 0x10($a1)
    ctx->pc = 0x13e7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 6));
    // 0x13e7a4: 0xfca40020  sd          $a0, 0x20($a1)
    ctx->pc = 0x13e7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 4));
    // 0x13e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7A8u;
            // 0x13e7ac: 0xfca30028  sd          $v1, 0x28($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E7B0u;
}
