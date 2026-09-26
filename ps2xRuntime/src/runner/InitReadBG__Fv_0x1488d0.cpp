#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitReadBG__Fv
// Address: 0x1488d0 - 0x148924
void InitReadBG__Fv_0x1488d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitReadBG__Fv_0x1488d0");
#endif

    switch (ctx->pc) {
        case 0x1488e0u: goto label_1488e0;
        default: break;
    }

    ctx->pc = 0x1488d0u;

    // 0x1488d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1488d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1488d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488d8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1488d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1488dc: 0x24848680  addiu       $a0, $a0, -0x7980
    ctx->pc = 0x1488dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936192));
label_1488e0:
    // 0x1488e0: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1488e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1488e4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1488e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1488e8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1488e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1488ec: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x1488ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1488f0: 0xace00120  sw          $zero, 0x120($a3)
    ctx->pc = 0x1488f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 288), GPR_U32(ctx, 0));
    // 0x1488f4: 0x24c60900  addiu       $a2, $a2, 0x900
    ctx->pc = 0x1488f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2304));
    // 0x1488f8: 0xace00240  sw          $zero, 0x240($a3)
    ctx->pc = 0x1488f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 576), GPR_U32(ctx, 0));
    // 0x1488fc: 0xace00360  sw          $zero, 0x360($a3)
    ctx->pc = 0x1488fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 864), GPR_U32(ctx, 0));
    // 0x148900: 0xace00480  sw          $zero, 0x480($a3)
    ctx->pc = 0x148900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1152), GPR_U32(ctx, 0));
    // 0x148904: 0xace005a0  sw          $zero, 0x5A0($a3)
    ctx->pc = 0x148904u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 0));
    // 0x148908: 0xace006c0  sw          $zero, 0x6C0($a3)
    ctx->pc = 0x148908u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1728), GPR_U32(ctx, 0));
    // 0x14890c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x14890Cu;
    {
        const bool branch_taken_0x14890c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14890Cu;
            // 0x148910: 0xace007e0  sw          $zero, 0x7E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14890c) {
            ctx->pc = 0x1488E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1488e0;
        }
    }
    ctx->pc = 0x148914u;
    // 0x148914: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x148914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x148918: 0xaf8088b0  sw          $zero, -0x7750($gp)
    ctx->pc = 0x148918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936752), GPR_U32(ctx, 0));
    // 0x14891c: 0x3e00008  jr          $ra
    ctx->pc = 0x14891Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14891Cu;
            // 0x148920: 0xaf8388ac  sw          $v1, -0x7754($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936748), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148924u;
}
