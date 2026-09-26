#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CLaserGunManFv
// Address: 0x1b7e10 - 0x1b7e68
void Step__12CLaserGunManFv_0x1b7e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CLaserGunManFv_0x1b7e10");
#endif

    switch (ctx->pc) {
        case 0x1b7e30u: goto label_1b7e30;
        case 0x1b7e38u: goto label_1b7e38;
        default: break;
    }

    ctx->pc = 0x1b7e10u;

    // 0x1b7e10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7e14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7e18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7e20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b7e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7e28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b7e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e30:
    // 0x1b7e30: 0xc06dc44  jal         func_1B7110
    ctx->pc = 0x1B7E30u;
    SET_GPR_U32(ctx, 31, 0x1B7E38u);
    ctx->pc = 0x1B7E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E30u;
            // 0x1b7e34: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7110u;
    if (runtime->hasFunction(0x1B7110u)) {
        auto targetFn = runtime->lookupFunction(0x1B7110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E38u; }
        if (ctx->pc != 0x1B7E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CLaserGunFv_0x1b7110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E38u; }
        if (ctx->pc != 0x1B7E38u) { return; }
    }
    ctx->pc = 0x1B7E38u;
label_1b7e38:
    // 0x1b7e38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b7e3c: 0x26310130  addiu       $s1, $s1, 0x130
    ctx->pc = 0x1b7e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x1b7e40: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1b7e40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b7e44: 0x0  nop
    ctx->pc = 0x1b7e44u;
    // NOP
    // 0x1b7e48: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B7E48u;
    {
        const bool branch_taken_0x1b7e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7e48) {
            ctx->pc = 0x1B7E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b7e30;
        }
    }
    ctx->pc = 0x1B7E50u;
    // 0x1b7e50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7e60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E60u;
            // 0x1b7e64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7E68u;
}
