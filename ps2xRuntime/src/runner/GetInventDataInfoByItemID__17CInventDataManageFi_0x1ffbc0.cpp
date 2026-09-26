#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetInventDataInfoByItemID__17CInventDataManageFi
// Address: 0x1ffbc0 - 0x1ffc14
void GetInventDataInfoByItemID__17CInventDataManageFi_0x1ffbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInventDataInfoByItemID__17CInventDataManageFi_0x1ffbc0");
#endif

    switch (ctx->pc) {
        case 0x1ffbd0u: goto label_1ffbd0;
        default: break;
    }

    ctx->pc = 0x1ffbc0u;

    // 0x1ffbc0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ffbc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ffbc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ffbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FFBC8u;
    {
        const bool branch_taken_0x1ffbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFBC8u;
            // 0x1ffbcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbc8) {
            ctx->pc = 0x1FFBFCu;
            goto label_1ffbfc;
        }
    }
    ctx->pc = 0x1FFBD0u;
label_1ffbd0:
    // 0x1ffbd0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x1ffbd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ffbd4: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x1ffbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1ffbd8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1ffbd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ffbdc: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFBDCu;
    {
        const bool branch_taken_0x1ffbdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FFBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFBDCu;
            // 0x1ffbe0: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbdc) {
            ctx->pc = 0x1FFBF4u;
            goto label_1ffbf4;
        }
    }
    ctx->pc = 0x1FFBE4u;
    // 0x1ffbe4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ffbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ffbe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ffbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ffbec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFBECu;
    {
        const bool branch_taken_0x1ffbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFBECu;
            // 0x1ffbf0: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbec) {
            ctx->pc = 0x1FFC0Cu;
            goto label_1ffc0c;
        }
    }
    ctx->pc = 0x1FFBF4u;
label_1ffbf4:
    // 0x1ffbf4: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x1ffbf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ffbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ffbfc:
    // 0x1ffbfc: 0x0  nop
    ctx->pc = 0x1ffbfcu;
    // NOP
    // 0x1ffc00: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1ffc00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ffc04: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FFC04u;
    {
        const bool branch_taken_0x1ffc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFC04u;
            // 0x1ffc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc04) {
            ctx->pc = 0x1FFBD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffbd0;
        }
    }
    ctx->pc = 0x1FFC0Cu;
label_1ffc0c:
    // 0x1ffc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFC14u;
}
