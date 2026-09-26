#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitLocalCnt__Fv
// Address: 0x2611a0 - 0x2611ec
void InitLocalCnt__Fv_0x2611a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitLocalCnt__Fv_0x2611a0");
#endif

    switch (ctx->pc) {
        case 0x2611b0u: goto label_2611b0;
        default: break;
    }

    ctx->pc = 0x2611a0u;

    // 0x2611a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2611a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2611a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2611a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2611a8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2611a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2611ac: 0x2484efc0  addiu       $a0, $a0, -0x1040
    ctx->pc = 0x2611acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
label_2611b0:
    // 0x2611b0: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2611b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2611b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2611b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2611b8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2611b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2611bc: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x2611bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2611c0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2611c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2611c4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2611c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2611c8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2611c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x2611cc: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x2611ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x2611d0: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2611d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2611d4: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x2611d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x2611d8: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x2611d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x2611dc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2611DCu;
    {
        const bool branch_taken_0x2611dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2611E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2611DCu;
            // 0x2611e0: 0xace0001c  sw          $zero, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611dc) {
            ctx->pc = 0x2611B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2611b0;
        }
    }
    ctx->pc = 0x2611E4u;
    // 0x2611e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2611E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2611ECu;
}
