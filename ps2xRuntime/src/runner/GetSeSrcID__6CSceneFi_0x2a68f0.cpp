#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSeSrcID__6CSceneFi
// Address: 0x2a68f0 - 0x2a6940
void GetSeSrcID__6CSceneFi_0x2a68f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSeSrcID__6CSceneFi_0x2a68f0");
#endif

    switch (ctx->pc) {
        case 0x2a68f8u: goto label_2a68f8;
        default: break;
    }

    ctx->pc = 0x2a68f0u;

    // 0x2a68f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a68f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a68f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a68f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a68f8:
    // 0x2a68f8: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2a68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a68fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a68fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6900: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a6900u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a6904: 0x8c229984  lw          $v0, -0x667C($at)
    ctx->pc = 0x2a6904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941060)));
    // 0x2a6908: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6908u;
    {
        const bool branch_taken_0x2a6908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A690Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6908u;
            // 0x2a690c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6908) {
            ctx->pc = 0x2A6924u;
            goto label_2a6924;
        }
    }
    ctx->pc = 0x2A6910u;
    // 0x2a6910: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6914: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a6914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a6918: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a6918u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a691c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A691Cu;
    {
        const bool branch_taken_0x2a691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A691Cu;
            // 0x2a6920: 0x8c229944  lw          $v0, -0x66BC($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a691c) {
            ctx->pc = 0x2A6938u;
            goto label_2a6938;
        }
    }
    ctx->pc = 0x2A6924u;
label_2a6924:
    // 0x2a6924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a6924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a6928: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x2a6928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a692c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A692Cu;
    {
        const bool branch_taken_0x2a692c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A692Cu;
            // 0x2a6930: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a692c) {
            ctx->pc = 0x2A68F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a68f8;
        }
    }
    ctx->pc = 0x2A6934u;
    // 0x2a6934: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a6934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a6938:
    // 0x2a6938: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6940u;
}
