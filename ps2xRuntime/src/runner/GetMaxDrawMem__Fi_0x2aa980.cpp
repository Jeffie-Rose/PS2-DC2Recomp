#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMaxDrawMem__Fi
// Address: 0x2aa980 - 0x2aa9e8
void GetMaxDrawMem__Fi_0x2aa980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMaxDrawMem__Fi_0x2aa980");
#endif

    ctx->pc = 0x2aa980u;

    // 0x2aa980: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2aa980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aa984: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AA984u;
    {
        const bool branch_taken_0x2aa984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA984u;
            // 0x2aa988: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa984) {
            ctx->pc = 0x2AA9E0u;
            goto label_2aa9e0;
        }
    }
    ctx->pc = 0x2AA98Cu;
    // 0x2aa98c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2aa98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa990: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AA990u;
    {
        const bool branch_taken_0x2aa990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA990u;
            // 0x2aa994: 0x3402d2f0  ori         $v0, $zero, 0xD2F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa990) {
            ctx->pc = 0x2AA9D8u;
            goto label_2aa9d8;
        }
    }
    ctx->pc = 0x2AA998u;
    // 0x2aa998: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aa998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa99c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AA99Cu;
    {
        const bool branch_taken_0x2aa99c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA99Cu;
            // 0x2aa9a0: 0x3402d2f0  ori         $v0, $zero, 0xD2F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa99c) {
            ctx->pc = 0x2AA9D0u;
            goto label_2aa9d0;
        }
    }
    ctx->pc = 0x2AA9A4u;
    // 0x2aa9a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa9a8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA9A8u;
    {
        const bool branch_taken_0x2aa9a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9A8u;
            // 0x2aa9ac: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9a8) {
            ctx->pc = 0x2AA9C8u;
            goto label_2aa9c8;
        }
    }
    ctx->pc = 0x2AA9B0u;
    // 0x2aa9b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA9B0u;
    {
        const bool branch_taken_0x2aa9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9B0u;
            // 0x2aa9b4: 0x3402bb80  ori         $v0, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9b0) {
            ctx->pc = 0x2AA9C0u;
            goto label_2aa9c0;
        }
    }
    ctx->pc = 0x2AA9B8u;
    // 0x2aa9b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA9B8u;
    {
        const bool branch_taken_0x2aa9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA9B8u;
            // 0x2aa9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa9b8) {
            ctx->pc = 0x2AA9E0u;
            goto label_2aa9e0;
        }
    }
    ctx->pc = 0x2AA9C0u;
label_2aa9c0:
    // 0x2aa9c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA9C0u;
    {
        const bool branch_taken_0x2aa9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa9c0) {
            ctx->pc = 0x2AA9E0u;
            goto label_2aa9e0;
        }
    }
    ctx->pc = 0x2AA9C8u;
label_2aa9c8:
    // 0x2aa9c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA9C8u;
    {
        const bool branch_taken_0x2aa9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa9c8) {
            ctx->pc = 0x2AA9E0u;
            goto label_2aa9e0;
        }
    }
    ctx->pc = 0x2AA9D0u;
label_2aa9d0:
    // 0x2aa9d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA9D0u;
    {
        const bool branch_taken_0x2aa9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa9d0) {
            ctx->pc = 0x2AA9E0u;
            goto label_2aa9e0;
        }
    }
    ctx->pc = 0x2AA9D8u;
label_2aa9d8:
    // 0x2aa9d8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2AA9D8u;
    {
        const bool branch_taken_0x2aa9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa9d8) {
            ctx->pc = 0x2AA9E0u;
            goto label_2aa9e0;
        }
    }
    ctx->pc = 0x2AA9E0u;
label_2aa9e0:
    // 0x2aa9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA9E8u;
}
