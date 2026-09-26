#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckOmake__18CMemoryCardManagerFPUl
// Address: 0x2f1e10 - 0x2f1e74
void CheckOmake__18CMemoryCardManagerFPUl_0x2f1e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckOmake__18CMemoryCardManagerFPUl_0x2f1e10");
#endif

    switch (ctx->pc) {
        case 0x2f1e20u: goto label_2f1e20;
        default: break;
    }

    ctx->pc = 0x2f1e10u;

    // 0x2f1e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f1e18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e1c: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x2f1e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
label_2f1e20:
    // 0x2f1e20: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f1e20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f1e24: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2f1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2f1e28: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x2f1e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f1e2c: 0x8d230da0  lw          $v1, 0xDA0($t1)
    ctx->pc = 0x2f1e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 3488)));
    // 0x2f1e30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1E30u;
    {
        const bool branch_taken_0x2f1e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1e30) {
            ctx->pc = 0x2F1E48u;
            goto label_2f1e48;
        }
    }
    ctx->pc = 0x2F1E38u;
    // 0x2f1e38: 0x8d260db4  lw          $a2, 0xDB4($t1)
    ctx->pc = 0x2f1e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 3508)));
    // 0x2f1e3c: 0xdd230dc0  ld          $v1, 0xDC0($t1)
    ctx->pc = 0x2f1e3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 3520)));
    // 0x2f1e40: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f1e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f1e44: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2f1e44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_2f1e48:
    // 0x2f1e48: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x2f1e48u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x2f1e4c: 0x2903000d  slti        $v1, $t0, 0xD
    ctx->pc = 0x2f1e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f1e50: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F1E50u;
    {
        const bool branch_taken_0x2f1e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1E50u;
            // 0x2f1e54: 0x8183c  dsll32      $v1, $t0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e50) {
            ctx->pc = 0x2F1E20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1e20;
        }
    }
    ctx->pc = 0x2F1E58u;
    // 0x2f1e58: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1E58u;
    {
        const bool branch_taken_0x2f1e58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1e58) {
            ctx->pc = 0x2F1E6Cu;
            goto label_2f1e6c;
        }
    }
    ctx->pc = 0x2F1E60u;
    // 0x2f1e60: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2f1e60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f1e64: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2f1e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2f1e68: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2f1e68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_2f1e6c:
    // 0x2f1e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1E74u;
}
