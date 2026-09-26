#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetMesFileBuffAll__Fv
// Address: 0x2625a0 - 0x2625e8
void ResetMesFileBuffAll__Fv_0x2625a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetMesFileBuffAll__Fv_0x2625a0");
#endif

    switch (ctx->pc) {
        case 0x2625b0u: goto label_2625b0;
        case 0x2625b8u: goto label_2625b8;
        default: break;
    }

    ctx->pc = 0x2625a0u;

    // 0x2625a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2625a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2625a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2625a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2625a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2625a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2625ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2625acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2625b0:
    // 0x2625b0: 0xc0956bc  jal         func_255AF0
    ctx->pc = 0x2625B0u;
    SET_GPR_U32(ctx, 31, 0x2625B8u);
    ctx->pc = 0x2625B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2625B0u;
            // 0x2625b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255AF0u;
    if (runtime->hasFunction(0x255AF0u)) {
        auto targetFn = runtime->lookupFunction(0x255AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2625B8u; }
        if (ctx->pc != 0x2625B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventMessage__Fi_0x255af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2625B8u; }
        if (ctx->pc != 0x2625B8u) { return; }
    }
    ctx->pc = 0x2625B8u;
label_2625b8:
    // 0x2625b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2625B8u;
    {
        const bool branch_taken_0x2625b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2625b8) {
            ctx->pc = 0x2625C8u;
            goto label_2625c8;
        }
    }
    ctx->pc = 0x2625C0u;
    // 0x2625c0: 0xac4017ec  sw          $zero, 0x17EC($v0)
    ctx->pc = 0x2625c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6124), GPR_U32(ctx, 0));
    // 0x2625c4: 0xac4017f0  sw          $zero, 0x17F0($v0)
    ctx->pc = 0x2625c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6128), GPR_U32(ctx, 0));
label_2625c8:
    // 0x2625c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2625c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2625cc: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x2625ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2625d0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2625D0u;
    {
        const bool branch_taken_0x2625d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2625d0) {
            ctx->pc = 0x2625B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2625b0;
        }
    }
    ctx->pc = 0x2625D8u;
    // 0x2625d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2625d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2625dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2625dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2625e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2625E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2625E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2625E0u;
            // 0x2625e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2625E8u;
}
