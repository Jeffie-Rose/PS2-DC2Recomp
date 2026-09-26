#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Btn__11CPadControlFi
// Address: 0x2ed4e0 - 0x2ed514
void Btn__11CPadControlFi_0x2ed4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Btn__11CPadControlFi_0x2ed4e0");
#endif

    ctx->pc = 0x2ed4e0u;

    // 0x2ed4e0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED4E0u;
    {
        const bool branch_taken_0x2ed4e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2ED4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4E0u;
            // 0x2ed4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4e0) {
            ctx->pc = 0x2ED4F8u;
            goto label_2ed4f8;
        }
    }
    ctx->pc = 0x2ED4E8u;
    // 0x2ed4e8: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x2ed4e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2ed4ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED4ECu;
    {
        const bool branch_taken_0x2ed4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4ECu;
            // 0x2ed4f0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4ec) {
            ctx->pc = 0x2ED500u;
            goto label_2ed500;
        }
    }
    ctx->pc = 0x2ED4F4u;
    // 0x2ed4f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed4f8:
    // 0x2ed4f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED4F8u;
    {
        const bool branch_taken_0x2ed4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed4f8) {
            ctx->pc = 0x2ED50Cu;
            goto label_2ed50c;
        }
    }
    ctx->pc = 0x2ED500u;
label_2ed500:
    // 0x2ed500: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ed500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ed504: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2ed504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ed508: 0x0  nop
    ctx->pc = 0x2ed508u;
    // NOP
label_2ed50c:
    // 0x2ed50c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED514u;
}
