#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: get_gajji_id_from_monster_progress_table__FiPi
// Address: 0x2b5b40 - 0x2b5bc8
void get_gajji_id_from_monster_progress_table__FiPi_0x2b5b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_gajji_id_from_monster_progress_table__FiPi_0x2b5b40");
#endif

    switch (ctx->pc) {
        case 0x2b5b50u: goto label_2b5b50;
        case 0x2b5b5cu: goto label_2b5b5c;
        default: break;
    }

    ctx->pc = 0x2b5b40u;

    // 0x2b5b40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2b5b44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b48: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2b5b48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x2b5b4c: 0x24c64640  addiu       $a2, $a2, 0x4640
    ctx->pc = 0x2b5b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17984));
label_2b5b50:
    // 0x2b5b50: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b5b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5b54: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2b5b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5b58: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x2b5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_2b5b5c:
    // 0x2b5b5c: 0x0  nop
    ctx->pc = 0x2b5b5cu;
    // NOP
    // 0x2b5b60: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x2b5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2b5b64: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2b5b64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5b68: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B5B68u;
    {
        const bool branch_taken_0x2b5b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b5b68) {
            ctx->pc = 0x2B5B9Cu;
            goto label_2b5b9c;
        }
    }
    ctx->pc = 0x2B5B70u;
    // 0x2b5b70: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5B70u;
    {
        const bool branch_taken_0x2b5b70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B70u;
            // 0x2b5b74: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b70) {
            ctx->pc = 0x2B5B80u;
            goto label_2b5b80;
        }
    }
    ctx->pc = 0x2B5B78u;
    // 0x2b5b78: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x2b5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2b5b7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b5b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2b5b80:
    // 0x2b5b80: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2b5b84: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b5b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b5b88: 0x24424640  addiu       $v0, $v0, 0x4640
    ctx->pc = 0x2b5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17984));
    // 0x2b5b8c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2b5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b5b90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5b94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B5B94u;
    {
        const bool branch_taken_0x2b5b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B94u;
            // 0x2b5b98: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b94) {
            ctx->pc = 0x2B5BC0u;
            goto label_2b5bc0;
        }
    }
    ctx->pc = 0x2B5B9Cu;
label_2b5b9c:
    // 0x2b5b9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b5b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b5ba0: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x2b5ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2b5ba4: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2B5BA4u;
    {
        const bool branch_taken_0x2b5ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5BA4u;
            // 0x2b5ba8: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ba4) {
            ctx->pc = 0x2B5B5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5b5c;
        }
    }
    ctx->pc = 0x2B5BACu;
    // 0x2b5bac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b5bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b5bb0: 0x28e20013  slti        $v0, $a3, 0x13
    ctx->pc = 0x2b5bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2b5bb4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2B5BB4u;
    {
        const bool branch_taken_0x2b5bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5BB4u;
            // 0x2b5bb8: 0x254a000a  addiu       $t2, $t2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bb4) {
            ctx->pc = 0x2B5B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5b50;
        }
    }
    ctx->pc = 0x2B5BBCu;
    // 0x2b5bbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b5bc0:
    // 0x2b5bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5BC8u;
}
