#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DisableAll__15mgCTextureAnimeFv
// Address: 0x13d7a0 - 0x13d800
void DisableAll__15mgCTextureAnimeFv_0x13d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DisableAll__15mgCTextureAnimeFv_0x13d7a0");
#endif

    switch (ctx->pc) {
        case 0x13d7c0u: goto label_13d7c0;
        case 0x13d7d0u: goto label_13d7d0;
        default: break;
    }

    ctx->pc = 0x13d7a0u;

    // 0x13d7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d7a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13d7a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d7b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13d7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D7B8u;
    {
        const bool branch_taken_0x13d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d7b8) {
            ctx->pc = 0x13D7D4u;
            goto label_13d7d4;
        }
    }
    ctx->pc = 0x13D7C0u;
label_13d7c0:
    // 0x13d7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7c8: 0xc04f610  jal         func_13D840
    ctx->pc = 0x13D7C8u;
    SET_GPR_U32(ctx, 31, 0x13D7D0u);
    ctx->pc = 0x13D840u;
    if (runtime->hasFunction(0x13D840u)) {
        auto targetFn = runtime->lookupFunction(0x13D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D7D0u; }
        if (ctx->pc != 0x13D7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Disable__15mgCTextureAnimeFi_0x13d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D7D0u; }
        if (ctx->pc != 0x13D7D0u) { return; }
    }
    ctx->pc = 0x13D7D0u;
label_13d7d0:
    // 0x13d7d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13d7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13d7d4:
    // 0x13d7d4: 0x0  nop
    ctx->pc = 0x13d7d4u;
    // NOP
    // 0x13d7d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13d7dc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x13d7dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13d7e0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13D7E0u;
    {
        const bool branch_taken_0x13d7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d7e0) {
            ctx->pc = 0x13D7C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13d7c0;
        }
    }
    ctx->pc = 0x13D7E8u;
    // 0x13d7e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d7ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d7f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D800u;
}
