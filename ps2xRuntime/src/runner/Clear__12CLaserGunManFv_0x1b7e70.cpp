#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__12CLaserGunManFv
// Address: 0x1b7e70 - 0x1b7ec8
void Clear__12CLaserGunManFv_0x1b7e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__12CLaserGunManFv_0x1b7e70");
#endif

    switch (ctx->pc) {
        case 0x1b7e90u: goto label_1b7e90;
        case 0x1b7e98u: goto label_1b7e98;
        default: break;
    }

    ctx->pc = 0x1b7e70u;

    // 0x1b7e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7e74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7e78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7e7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7e80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b7e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7e88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b7e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e90:
    // 0x1b7e90: 0xc06df48  jal         func_1B7D20
    ctx->pc = 0x1B7E90u;
    SET_GPR_U32(ctx, 31, 0x1B7E98u);
    ctx->pc = 0x1B7E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7E90u;
            // 0x1b7e94: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D20u;
    if (runtime->hasFunction(0x1B7D20u)) {
        auto targetFn = runtime->lookupFunction(0x1B7D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E98u; }
        if (ctx->pc != 0x1B7E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CLaserGunFv_0x1b7d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7E98u; }
        if (ctx->pc != 0x1B7E98u) { return; }
    }
    ctx->pc = 0x1B7E98u;
label_1b7e98:
    // 0x1b7e98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b7e9c: 0x26310130  addiu       $s1, $s1, 0x130
    ctx->pc = 0x1b7e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x1b7ea0: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1b7ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b7ea4: 0x0  nop
    ctx->pc = 0x1b7ea4u;
    // NOP
    // 0x1b7ea8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B7EA8u;
    {
        const bool branch_taken_0x1b7ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ea8) {
            ctx->pc = 0x1B7E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b7e90;
        }
    }
    ctx->pc = 0x1B7EB0u;
    // 0x1b7eb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7eb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7eb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7ebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7EC0u;
            // 0x1b7ec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7EC8u;
}
