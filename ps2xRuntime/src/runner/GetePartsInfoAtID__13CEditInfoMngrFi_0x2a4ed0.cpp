#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePartsInfoAtID__13CEditInfoMngrFi
// Address: 0x2a4ed0 - 0x2a4f38
void GetePartsInfoAtID__13CEditInfoMngrFi_0x2a4ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePartsInfoAtID__13CEditInfoMngrFi_0x2a4ed0");
#endif

    switch (ctx->pc) {
        case 0x2a4f00u: goto label_2a4f00;
        default: break;
    }

    ctx->pc = 0x2a4ed0u;

    // 0x2a4ed0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4ED0u;
    {
        const bool branch_taken_0x2a4ed0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A4ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4ED0u;
            // 0x2a4ed4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ed0) {
            ctx->pc = 0x2A4EE0u;
            goto label_2a4ee0;
        }
    }
    ctx->pc = 0x2A4ED8u;
    // 0x2a4ed8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A4ED8u;
    {
        const bool branch_taken_0x2a4ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ed8) {
            ctx->pc = 0x2A4F30u;
            goto label_2a4f30;
        }
    }
    ctx->pc = 0x2A4EE0u;
label_2a4ee0:
    // 0x2a4ee0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4ee4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4EE4u;
    {
        const bool branch_taken_0x2a4ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ee4) {
            ctx->pc = 0x2A4EF4u;
            goto label_2a4ef4;
        }
    }
    ctx->pc = 0x2A4EECu;
    // 0x2a4eec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A4EECu;
    {
        const bool branch_taken_0x2a4eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4EECu;
            // 0x2a4ef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4eec) {
            ctx->pc = 0x2A4F30u;
            goto label_2a4f30;
        }
    }
    ctx->pc = 0x2A4EF4u;
label_2a4ef4:
    // 0x2a4ef4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2a4ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4ef8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4EF8u;
    {
        const bool branch_taken_0x2a4ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4EF8u;
            // 0x2a4efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ef8) {
            ctx->pc = 0x2A4F1Cu;
            goto label_2a4f1c;
        }
    }
    ctx->pc = 0x2A4F00u;
label_2a4f00:
    // 0x2a4f00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4f04: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4F04u;
    {
        const bool branch_taken_0x2a4f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a4f04) {
            ctx->pc = 0x2A4F14u;
            goto label_2a4f14;
        }
    }
    ctx->pc = 0x2A4F0Cu;
    // 0x2a4f0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4F0Cu;
    {
        const bool branch_taken_0x2a4f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f0c) {
            ctx->pc = 0x2A4F30u;
            goto label_2a4f30;
        }
    }
    ctx->pc = 0x2A4F14u;
label_2a4f14:
    // 0x2a4f14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a4f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a4f18: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x2a4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_2a4f1c:
    // 0x2a4f1c: 0x0  nop
    ctx->pc = 0x2a4f1cu;
    // NOP
    // 0x2a4f20: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x2a4f20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a4f24: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A4F24u;
    {
        const bool branch_taken_0x2a4f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f24) {
            ctx->pc = 0x2A4F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4f00;
        }
    }
    ctx->pc = 0x2A4F2Cu;
    // 0x2a4f2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4f30:
    // 0x2a4f30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4F38u;
}
