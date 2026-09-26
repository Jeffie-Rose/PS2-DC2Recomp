#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__18CEventSpriteMotherFv
// Address: 0x290a00 - 0x290a58
void Init__18CEventSpriteMotherFv_0x290a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__18CEventSpriteMotherFv_0x290a00");
#endif

    switch (ctx->pc) {
        case 0x290a20u: goto label_290a20;
        case 0x290a28u: goto label_290a28;
        default: break;
    }

    ctx->pc = 0x290a00u;

    // 0x290a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290a04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x290a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x290a08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x290a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x290a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x290a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290a10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290a18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x290a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x290a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290a20:
    // 0x290a20: 0xc0a417c  jal         func_2905F0
    ctx->pc = 0x290A20u;
    SET_GPR_U32(ctx, 31, 0x290A28u);
    ctx->pc = 0x290A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290A20u;
            // 0x290a24: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2905F0u;
    if (runtime->hasFunction(0x2905F0u)) {
        auto targetFn = runtime->lookupFunction(0x2905F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A28u; }
        if (ctx->pc != 0x290A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__12CEventSpriteFv_0x2905f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A28u; }
        if (ctx->pc != 0x290A28u) { return; }
    }
    ctx->pc = 0x290A28u;
label_290a28:
    // 0x290a28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x290a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x290a2c: 0x26310088  addiu       $s1, $s1, 0x88
    ctx->pc = 0x290a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x290a30: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x290a30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x290a34: 0x0  nop
    ctx->pc = 0x290a34u;
    // NOP
    // 0x290a38: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x290A38u;
    {
        const bool branch_taken_0x290a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x290a38) {
            ctx->pc = 0x290A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_290a20;
        }
    }
    ctx->pc = 0x290A40u;
    // 0x290a40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x290a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290a44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x290a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x290a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290a50: 0x3e00008  jr          $ra
    ctx->pc = 0x290A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A50u;
            // 0x290a54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290A58u;
}
