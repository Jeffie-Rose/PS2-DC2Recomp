#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartsNumID__9CEditDataFi
// Address: 0x2a9e40 - 0x2a9e94
void GetPartsNumID__9CEditDataFi_0x2a9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartsNumID__9CEditDataFi_0x2a9e40");
#endif

    switch (ctx->pc) {
        case 0x2a9e54u: goto label_2a9e54;
        default: break;
    }

    ctx->pc = 0x2a9e40u;

    // 0x2a9e40: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x2a9e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2a9e44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a9e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e48: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2a9e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a9e4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A9E4Cu;
    {
        const bool branch_taken_0x2a9e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9E4Cu;
            // 0x2a9e50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e4c) {
            ctx->pc = 0x2A9E80u;
            goto label_2a9e80;
        }
    }
    ctx->pc = 0x2A9E54u;
label_2a9e54:
    // 0x2a9e54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a9e58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9E58u;
    {
        const bool branch_taken_0x2a9e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9e58) {
            ctx->pc = 0x2A9E78u;
            goto label_2a9e78;
        }
    }
    ctx->pc = 0x2A9E60u;
    // 0x2a9e60: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9E60u;
    {
        const bool branch_taken_0x2a9e60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a9e60) {
            ctx->pc = 0x2A9E78u;
            goto label_2a9e78;
        }
    }
    ctx->pc = 0x2A9E68u;
    // 0x2a9e68: 0x80c30004  lb          $v1, 0x4($a2)
    ctx->pc = 0x2a9e68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a9e6c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9E6Cu;
    {
        const bool branch_taken_0x2a9e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9e6c) {
            ctx->pc = 0x2A9E78u;
            goto label_2a9e78;
        }
    }
    ctx->pc = 0x2A9E74u;
    // 0x2a9e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a9e78:
    // 0x2a9e78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a9e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a9e7c: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x2a9e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
label_2a9e80:
    // 0x2a9e80: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x2a9e80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a9e84: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A9E84u;
    {
        const bool branch_taken_0x2a9e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9e84) {
            ctx->pc = 0x2A9E54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9e54;
        }
    }
    ctx->pc = 0x2A9E8Cu;
    // 0x2a9e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9E94u;
}
