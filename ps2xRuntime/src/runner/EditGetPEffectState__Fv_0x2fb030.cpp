#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditGetPEffectState__Fv
// Address: 0x2fb030 - 0x2fb080
void EditGetPEffectState__Fv_0x2fb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditGetPEffectState__Fv_0x2fb030");
#endif

    switch (ctx->pc) {
        case 0x2fb048u: goto label_2fb048;
        default: break;
    }

    ctx->pc = 0x2fb030u;

    // 0x2fb030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fb034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fb038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb03c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2fb03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2fb040: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fb040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fb044: 0x24a59370  addiu       $a1, $a1, -0x6C90
    ctx->pc = 0x2fb044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939504));
label_2fb048:
    // 0x2fb048: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2fb048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2fb04c: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x2fb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2fb050: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB050u;
    {
        const bool branch_taken_0x2fb050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb050) {
            ctx->pc = 0x2FB068u;
            goto label_2fb068;
        }
    }
    ctx->pc = 0x2FB058u;
    // 0x2fb058: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB058u;
    {
        const bool branch_taken_0x2fb058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FB05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB058u;
            // 0x2fb05c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb058) {
            ctx->pc = 0x2FB068u;
            goto label_2fb068;
        }
    }
    ctx->pc = 0x2FB060u;
    // 0x2fb060: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB060u;
    {
        const bool branch_taken_0x2fb060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB060u;
            // 0x2fb064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb060) {
            ctx->pc = 0x2FB078u;
            goto label_2fb078;
        }
    }
    ctx->pc = 0x2FB068u;
label_2fb068:
    // 0x2fb068: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2fb068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fb06c: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x2fb06cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fb070: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2FB070u;
    {
        const bool branch_taken_0x2fb070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB070u;
            // 0x2fb074: 0x24e70100  addiu       $a3, $a3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb070) {
            ctx->pc = 0x2FB048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fb048;
        }
    }
    ctx->pc = 0x2FB078u;
label_2fb078:
    // 0x2fb078: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FB080u;
}
