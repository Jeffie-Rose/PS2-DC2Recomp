#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__21CLevelUpEffectManagerFv
// Address: 0x22eb00 - 0x22eb58
void Draw__21CLevelUpEffectManagerFv_0x22eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__21CLevelUpEffectManagerFv_0x22eb00");
#endif

    switch (ctx->pc) {
        case 0x22eb20u: goto label_22eb20;
        case 0x22eb2cu: goto label_22eb2c;
        default: break;
    }

    ctx->pc = 0x22eb00u;

    // 0x22eb00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22eb04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22eb08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22eb0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22eb10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22eb10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22eb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22eb18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22eb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22eb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22eb20:
    // 0x22eb20: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x22eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x22eb24: 0xc08b998  jal         func_22E660
    ctx->pc = 0x22EB24u;
    SET_GPR_U32(ctx, 31, 0x22EB2Cu);
    ctx->pc = 0x22EB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EB24u;
            // 0x22eb28: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E660u;
    if (runtime->hasFunction(0x22E660u)) {
        auto targetFn = runtime->lookupFunction(0x22E660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EB2Cu; }
        if (ctx->pc != 0x22EB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CLevelUpEffectFv_0x22e660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EB2Cu; }
        if (ctx->pc != 0x22EB2Cu) { return; }
    }
    ctx->pc = 0x22EB2Cu;
label_22eb2c:
    // 0x22eb2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22eb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22eb30: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x22eb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x22eb34: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x22eb34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22eb38: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22EB38u;
    {
        const bool branch_taken_0x22eb38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eb38) {
            ctx->pc = 0x22EB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22eb20;
        }
    }
    ctx->pc = 0x22EB40u;
    // 0x22eb40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22eb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22eb44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22eb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22eb48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22eb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22eb4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22eb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eb50: 0x3e00008  jr          $ra
    ctx->pc = 0x22EB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EB50u;
            // 0x22eb54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22EB58u;
}
