#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CPadControlFv
// Address: 0x2ed3e0 - 0x2ed460
void Initialize__11CPadControlFv_0x2ed3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CPadControlFv_0x2ed3e0");
#endif

    switch (ctx->pc) {
        case 0x2ed3e8u: goto label_2ed3e8;
        case 0x2ed424u: goto label_2ed424;
        default: break;
    }

    ctx->pc = 0x2ed3e0u;

    // 0x2ed3e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed3e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed3e8:
    // 0x2ed3e8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2ed3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ed3ec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2ed3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2ed3f0: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x2ed3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x2ed3f4: 0x28a30080  slti        $v1, $a1, 0x80
    ctx->pc = 0x2ed3f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2ed3f8: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x2ed3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x2ed3fc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2ed3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2ed400: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x2ed400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x2ed404: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x2ed404u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x2ed408: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x2ed408u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x2ed40c: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x2ed40cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x2ed410: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x2ed410u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x2ed414: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2ED414u;
    {
        const bool branch_taken_0x2ed414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED414u;
            // 0x2ed418: 0xace0004c  sw          $zero, 0x4C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed414) {
            ctx->pc = 0x2ED3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed3e8;
        }
    }
    ctx->pc = 0x2ED41Cu;
    // 0x2ed41c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed424:
    // 0x2ed424: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2ed424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2ed428: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2ed428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2ed42c: 0xace00414  sw          $zero, 0x414($a3)
    ctx->pc = 0x2ed42cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1044), GPR_U32(ctx, 0));
    // 0x2ed430: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x2ed430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2ed434: 0xace0041c  sw          $zero, 0x41C($a3)
    ctx->pc = 0x2ed434u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1052), GPR_U32(ctx, 0));
    // 0x2ed438: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2ed438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2ed43c: 0xace00424  sw          $zero, 0x424($a3)
    ctx->pc = 0x2ed43cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1060), GPR_U32(ctx, 0));
    // 0x2ed440: 0xace0042c  sw          $zero, 0x42C($a3)
    ctx->pc = 0x2ed440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1068), GPR_U32(ctx, 0));
    // 0x2ed444: 0xace00434  sw          $zero, 0x434($a3)
    ctx->pc = 0x2ed444u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1076), GPR_U32(ctx, 0));
    // 0x2ed448: 0xace0043c  sw          $zero, 0x43C($a3)
    ctx->pc = 0x2ed448u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1084), GPR_U32(ctx, 0));
    // 0x2ed44c: 0xace00444  sw          $zero, 0x444($a3)
    ctx->pc = 0x2ed44cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1092), GPR_U32(ctx, 0));
    // 0x2ed450: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2ED450u;
    {
        const bool branch_taken_0x2ed450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED450u;
            // 0x2ed454: 0xace0044c  sw          $zero, 0x44C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed450) {
            ctx->pc = 0x2ED424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed424;
        }
    }
    ctx->pc = 0x2ED458u;
    // 0x2ed458: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED460u;
}
