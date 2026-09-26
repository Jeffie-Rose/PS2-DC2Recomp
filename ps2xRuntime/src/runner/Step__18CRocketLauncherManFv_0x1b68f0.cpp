#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__18CRocketLauncherManFv
// Address: 0x1b68f0 - 0x1b6948
void Step__18CRocketLauncherManFv_0x1b68f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__18CRocketLauncherManFv_0x1b68f0");
#endif

    switch (ctx->pc) {
        case 0x1b6910u: goto label_1b6910;
        case 0x1b6918u: goto label_1b6918;
        default: break;
    }

    ctx->pc = 0x1b68f0u;

    // 0x1b68f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b68f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b68f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b68f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b68f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b68f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b68fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b68fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6900: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b6900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6904: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6908: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b6908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b690c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b690cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6910:
    // 0x1b6910: 0xc06d82c  jal         func_1B60B0
    ctx->pc = 0x1B6910u;
    SET_GPR_U32(ctx, 31, 0x1B6918u);
    ctx->pc = 0x1B6914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6910u;
            // 0x1b6914: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60B0u;
    if (runtime->hasFunction(0x1B60B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B60B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6918u; }
        if (ctx->pc != 0x1B6918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__15CRocketLauncherFv_0x1b60b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6918u; }
        if (ctx->pc != 0x1B6918u) { return; }
    }
    ctx->pc = 0x1B6918u;
label_1b6918:
    // 0x1b6918: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b6918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b691c: 0x26310190  addiu       $s1, $s1, 0x190
    ctx->pc = 0x1b691cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x1b6920: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x1b6920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1b6924: 0x0  nop
    ctx->pc = 0x1b6924u;
    // NOP
    // 0x1b6928: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B6928u;
    {
        const bool branch_taken_0x1b6928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6928) {
            ctx->pc = 0x1B6910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6910;
        }
    }
    ctx->pc = 0x1B6930u;
    // 0x1b6930: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b693c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b693cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6940: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6940u;
            // 0x1b6944: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6948u;
}
