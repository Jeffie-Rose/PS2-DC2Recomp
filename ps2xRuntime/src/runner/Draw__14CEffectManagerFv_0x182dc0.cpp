#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__14CEffectManagerFv
// Address: 0x182dc0 - 0x182e28
void Draw__14CEffectManagerFv_0x182dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__14CEffectManagerFv_0x182dc0");
#endif

    switch (ctx->pc) {
        case 0x182decu: goto label_182dec;
        case 0x182df8u: goto label_182df8;
        default: break;
    }

    ctx->pc = 0x182dc0u;

    // 0x182dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182dc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x182dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x182dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182dd4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x182dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x182dd8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x182DD8u;
    {
        const bool branch_taken_0x182dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DD8u;
            // 0x182ddc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182dd8) {
            ctx->pc = 0x182E10u;
            goto label_182e10;
        }
    }
    ctx->pc = 0x182DE0u;
    // 0x182de0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x182de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182de4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x182DE4u;
    {
        const bool branch_taken_0x182de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DE4u;
            // 0x182de8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182de4) {
            ctx->pc = 0x182E00u;
            goto label_182e00;
        }
    }
    ctx->pc = 0x182DECu;
label_182dec:
    // 0x182dec: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x182decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x182df0: 0xc05ffdc  jal         func_17FF70
    ctx->pc = 0x182DF0u;
    SET_GPR_U32(ctx, 31, 0x182DF8u);
    ctx->pc = 0x182DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182DF0u;
            // 0x182df4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FF70u;
    if (runtime->hasFunction(0x17FF70u)) {
        auto targetFn = runtime->lookupFunction(0x17FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182DF8u; }
        if (ctx->pc != 0x182DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__7CEffectFv_0x17ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182DF8u; }
        if (ctx->pc != 0x182DF8u) { return; }
    }
    ctx->pc = 0x182DF8u;
label_182df8:
    // 0x182df8: 0x26310200  addiu       $s1, $s1, 0x200
    ctx->pc = 0x182df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x182dfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x182dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_182e00:
    // 0x182e00: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x182e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x182e04: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x182e04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182e08: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x182E08u;
    {
        const bool branch_taken_0x182e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182e08) {
            ctx->pc = 0x182DECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182dec;
        }
    }
    ctx->pc = 0x182E10u;
label_182e10:
    // 0x182e10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x182e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182e14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182e20: 0x3e00008  jr          $ra
    ctx->pc = 0x182E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E20u;
            // 0x182e24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182E28u;
}
