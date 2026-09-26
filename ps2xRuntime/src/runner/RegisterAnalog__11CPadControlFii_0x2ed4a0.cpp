#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RegisterAnalog__11CPadControlFii
// Address: 0x2ed4a0 - 0x2ed4d8
void RegisterAnalog__11CPadControlFii_0x2ed4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RegisterAnalog__11CPadControlFii_0x2ed4a0");
#endif

    ctx->pc = 0x2ed4a0u;

    // 0x2ed4a0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED4A0u;
    {
        const bool branch_taken_0x2ed4a0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2ED4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4A0u;
            // 0x2ed4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4a0) {
            ctx->pc = 0x2ED4B8u;
            goto label_2ed4b8;
        }
    }
    ctx->pc = 0x2ED4A8u;
    // 0x2ed4a8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x2ed4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2ed4ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED4ACu;
    {
        const bool branch_taken_0x2ed4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4ACu;
            // 0x2ed4b0: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4ac) {
            ctx->pc = 0x2ED4C0u;
            goto label_2ed4c0;
        }
    }
    ctx->pc = 0x2ED4B4u;
    // 0x2ed4b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed4b8:
    // 0x2ed4b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED4B8u;
    {
        const bool branch_taken_0x2ed4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed4b8) {
            ctx->pc = 0x2ED4D0u;
            goto label_2ed4d0;
        }
    }
    ctx->pc = 0x2ED4C0u;
label_2ed4c0:
    // 0x2ed4c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed4c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ed4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ed4c8: 0xac660414  sw          $a2, 0x414($v1)
    ctx->pc = 0x2ed4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1044), GPR_U32(ctx, 6));
    // 0x2ed4cc: 0xac600410  sw          $zero, 0x410($v1)
    ctx->pc = 0x2ed4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1040), GPR_U32(ctx, 0));
label_2ed4d0:
    // 0x2ed4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED4D8u;
}
