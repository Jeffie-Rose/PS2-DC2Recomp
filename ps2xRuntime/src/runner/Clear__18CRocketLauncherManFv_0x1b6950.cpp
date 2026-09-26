#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__18CRocketLauncherManFv
// Address: 0x1b6950 - 0x1b69a8
void Clear__18CRocketLauncherManFv_0x1b6950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__18CRocketLauncherManFv_0x1b6950");
#endif

    switch (ctx->pc) {
        case 0x1b6970u: goto label_1b6970;
        case 0x1b6978u: goto label_1b6978;
        default: break;
    }

    ctx->pc = 0x1b6950u;

    // 0x1b6950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6954: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b6954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b6958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b695c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b695cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6960: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b6960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6964: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6968: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b6968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b696c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b696cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6970:
    // 0x1b6970: 0xc06da00  jal         func_1B6800
    ctx->pc = 0x1B6970u;
    SET_GPR_U32(ctx, 31, 0x1B6978u);
    ctx->pc = 0x1B6974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6970u;
            // 0x1b6974: 0x2512021  addu        $a0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6800u;
    if (runtime->hasFunction(0x1B6800u)) {
        auto targetFn = runtime->lookupFunction(0x1B6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6978u; }
        if (ctx->pc != 0x1B6978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CRocketLauncherFv_0x1b6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6978u; }
        if (ctx->pc != 0x1B6978u) { return; }
    }
    ctx->pc = 0x1B6978u;
label_1b6978:
    // 0x1b6978: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b6978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b697c: 0x26310190  addiu       $s1, $s1, 0x190
    ctx->pc = 0x1b697cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x1b6980: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x1b6980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1b6984: 0x0  nop
    ctx->pc = 0x1b6984u;
    // NOP
    // 0x1b6988: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B6988u;
    {
        const bool branch_taken_0x1b6988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6988) {
            ctx->pc = 0x1B6970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6970;
        }
    }
    ctx->pc = 0x1B6990u;
    // 0x1b6990: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b699c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b699cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b69a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B69A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B69A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B69A0u;
            // 0x1b69a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B69A8u;
}
