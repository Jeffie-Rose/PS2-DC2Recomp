#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckBadStatus__Fi
// Address: 0x1a0fb0 - 0x1a0ff4
void CheckBadStatus__Fi_0x1a0fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckBadStatus__Fi_0x1a0fb0");
#endif

    ctx->pc = 0x1a0fb0u;

    // 0x1a0fb0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a0fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a0fb4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0FB4u;
    {
        const bool branch_taken_0x1a0fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FB4u;
            // 0x1a0fb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fb4) {
            ctx->pc = 0x1A0FECu;
            goto label_1a0fec;
        }
    }
    ctx->pc = 0x1A0FBCu;
    // 0x1a0fbc: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1a0fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1a0fc0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0FC0u;
    {
        const bool branch_taken_0x1a0fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FC0u;
            // 0x1a0fc4: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fc0) {
            ctx->pc = 0x1A0FE8u;
            goto label_1a0fe8;
        }
    }
    ctx->pc = 0x1A0FC8u;
    // 0x1a0fc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0FC8u;
    {
        const bool branch_taken_0x1a0fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FC8u;
            // 0x1a0fcc: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fc8) {
            ctx->pc = 0x1A0FE8u;
            goto label_1a0fe8;
        }
    }
    ctx->pc = 0x1A0FD0u;
    // 0x1a0fd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0FD0u;
    {
        const bool branch_taken_0x1a0fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FD0u;
            // 0x1a0fd4: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fd0) {
            ctx->pc = 0x1A0FE8u;
            goto label_1a0fe8;
        }
    }
    ctx->pc = 0x1A0FD8u;
    // 0x1a0fd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0FD8u;
    {
        const bool branch_taken_0x1a0fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FD8u;
            // 0x1a0fdc: 0x30820040  andi        $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fd8) {
            ctx->pc = 0x1A0FE8u;
            goto label_1a0fe8;
        }
    }
    ctx->pc = 0x1A0FE0u;
    // 0x1a0fe0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0FE0u;
    {
        const bool branch_taken_0x1a0fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FE0u;
            // 0x1a0fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0fe0) {
            ctx->pc = 0x1A0FECu;
            goto label_1a0fec;
        }
    }
    ctx->pc = 0x1A0FE8u;
label_1a0fe8:
    // 0x1a0fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0fec:
    // 0x1a0fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0FF4u;
}
