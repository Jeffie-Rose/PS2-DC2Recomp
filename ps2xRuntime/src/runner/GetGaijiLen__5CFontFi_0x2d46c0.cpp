#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGaijiLen__5CFontFi
// Address: 0x2d46c0 - 0x2d4738
void GetGaijiLen__5CFontFi_0x2d46c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGaijiLen__5CFontFi_0x2d46c0");
#endif

    switch (ctx->pc) {
        case 0x2d46d4u: goto label_2d46d4;
        default: break;
    }

    ctx->pc = 0x2d46c0u;

    // 0x2d46c0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d46c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d46c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d46c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d46c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46cc: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2d46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2d46d0: 0x24636b60  addiu       $v1, $v1, 0x6B60
    ctx->pc = 0x2d46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27488));
label_2d46d4:
    // 0x2d46d4: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2d46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2d46d8: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x2d46d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d46dc: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D46DCu;
    {
        const bool branch_taken_0x2d46dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d46dc) {
            ctx->pc = 0x2D46ECu;
            goto label_2d46ec;
        }
    }
    ctx->pc = 0x2D46E4u;
    // 0x2d46e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D46E4u;
    {
        const bool branch_taken_0x2d46e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D46E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D46E4u;
            // 0x2d46e8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46e4) {
            ctx->pc = 0x2D46FCu;
            goto label_2d46fc;
        }
    }
    ctx->pc = 0x2D46ECu;
label_2d46ec:
    // 0x2d46ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d46ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d46f0: 0x28c2002e  slti        $v0, $a2, 0x2E
    ctx->pc = 0x2d46f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x2d46f4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D46F4u;
    {
        const bool branch_taken_0x2d46f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D46F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D46F4u;
            // 0x2d46f8: 0x24e7000c  addiu       $a3, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46f4) {
            ctx->pc = 0x2D46D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d46d4;
        }
    }
    ctx->pc = 0x2D46FCu;
label_2d46fc:
    // 0x2d46fc: 0x0  nop
    ctx->pc = 0x2d46fcu;
    // NOP
    // 0x2d4700: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d4700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4704: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4704u;
    {
        const bool branch_taken_0x2d4704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4704u;
            // 0x2d4708: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4704) {
            ctx->pc = 0x2D4714u;
            goto label_2d4714;
        }
    }
    ctx->pc = 0x2D470Cu;
    // 0x2d470c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D470Cu;
    {
        const bool branch_taken_0x2d470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D470Cu;
            // 0x2d4710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d470c) {
            ctx->pc = 0x2D4730u;
            goto label_2d4730;
        }
    }
    ctx->pc = 0x2D4714u;
label_2d4714:
    // 0x2d4714: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d4714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d4718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d4718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d471c: 0x24426b64  addiu       $v0, $v0, 0x6B64
    ctx->pc = 0x2d471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27492));
    // 0x2d4720: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d4720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d4724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d4724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4728: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d472c: 0x0  nop
    ctx->pc = 0x2d472cu;
    // NOP
label_2d4730:
    // 0x2d4730: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4738u;
}
