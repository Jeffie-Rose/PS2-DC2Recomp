#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepGeyserEffect__FP6CScene
// Address: 0x2f8ac0 - 0x2f8b14
void StepGeyserEffect__FP6CScene_0x2f8ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepGeyserEffect__FP6CScene_0x2f8ac0");
#endif

    switch (ctx->pc) {
        case 0x2f8ae0u: goto label_2f8ae0;
        case 0x2f8aecu: goto label_2f8aec;
        default: break;
    }

    ctx->pc = 0x2f8ac0u;

    // 0x2f8ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f8ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f8ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f8ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f8ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f8acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f8ad0: 0x8f839f38  lw          $v1, -0x60C8($gp)
    ctx->pc = 0x2f8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942520)));
    // 0x2f8ad4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F8AD4u;
    {
        const bool branch_taken_0x2f8ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8AD4u;
            // 0x2f8ad8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ad4) {
            ctx->pc = 0x2F8B00u;
            goto label_2f8b00;
        }
    }
    ctx->pc = 0x2F8ADCu;
    // 0x2f8adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f8adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8ae0:
    // 0x2f8ae0: 0x8f829f48  lw          $v0, -0x60B8($gp)
    ctx->pc = 0x2f8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942536)));
    // 0x2f8ae4: 0xc0be0d8  jal         func_2F8360
    ctx->pc = 0x2F8AE4u;
    SET_GPR_U32(ctx, 31, 0x2F8AECu);
    ctx->pc = 0x2F8AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8AE4u;
            // 0x2f8ae8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8360u;
    if (runtime->hasFunction(0x2F8360u)) {
        auto targetFn = runtime->lookupFunction(0x2F8360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8AECu; }
        if (ctx->pc != 0x2F8AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__13CGeyserEffectFv_0x2f8360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8AECu; }
        if (ctx->pc != 0x2F8AECu) { return; }
    }
    ctx->pc = 0x2F8AECu;
label_2f8aec:
    // 0x2f8aec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f8aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f8af0: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x2f8af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2f8af4: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x2f8af4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f8af8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F8AF8u;
    {
        const bool branch_taken_0x2f8af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8af8) {
            ctx->pc = 0x2F8AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8ae0;
        }
    }
    ctx->pc = 0x2F8B00u;
label_2f8b00:
    // 0x2f8b00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f8b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f8b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B0Cu;
            // 0x2f8b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8B14u;
}
