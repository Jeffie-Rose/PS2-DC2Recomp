#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEntranceRoomGlid__11CDngFreeMapFv
// Address: 0x1eab60 - 0x1eabd4
void GetEntranceRoomGlid__11CDngFreeMapFv_0x1eab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEntranceRoomGlid__11CDngFreeMapFv_0x1eab60");
#endif

    switch (ctx->pc) {
        case 0x1eab88u: goto label_1eab88;
        default: break;
    }

    ctx->pc = 0x1eab60u;

    // 0x1eab60: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x1eab60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1eab64: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAB64u;
    {
        const bool branch_taken_0x1eab64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB64u;
            // 0x1eab68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab64) {
            ctx->pc = 0x1EAB74u;
            goto label_1eab74;
        }
    }
    ctx->pc = 0x1EAB6Cu;
    // 0x1eab6c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EAB6Cu;
    {
        const bool branch_taken_0x1eab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eab6c) {
            ctx->pc = 0x1EABCCu;
            goto label_1eabcc;
        }
    }
    ctx->pc = 0x1EAB74u;
label_1eab74:
    // 0x1eab74: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1eab74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1eab78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eab78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eab7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EAB80u;
    {
        const bool branch_taken_0x1eab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAB80u;
            // 0x1eab84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab80) {
            ctx->pc = 0x1EABBCu;
            goto label_1eabbc;
        }
    }
    ctx->pc = 0x1EAB88u;
label_1eab88:
    // 0x1eab88: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1eab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1eab8c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1eab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1eab90: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eab94: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EAB94u;
    {
        const bool branch_taken_0x1eab94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1eab94) {
            ctx->pc = 0x1EABB4u;
            goto label_1eabb4;
        }
    }
    ctx->pc = 0x1EAB9Cu;
    // 0x1eab9c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1eab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1eaba0: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x1eaba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1eaba4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EABA4u;
    {
        const bool branch_taken_0x1eaba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaba4) {
            ctx->pc = 0x1EABB4u;
            goto label_1eabb4;
        }
    }
    ctx->pc = 0x1EABACu;
    // 0x1eabac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EABACu;
    {
        const bool branch_taken_0x1eabac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eabac) {
            ctx->pc = 0x1EABCCu;
            goto label_1eabcc;
        }
    }
    ctx->pc = 0x1EABB4u;
label_1eabb4:
    // 0x1eabb4: 0x24e70070  addiu       $a3, $a3, 0x70
    ctx->pc = 0x1eabb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x1eabb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1eabb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1eabbc:
    // 0x1eabbc: 0x0  nop
    ctx->pc = 0x1eabbcu;
    // NOP
    // 0x1eabc0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1eabc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1eabc4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EABC4u;
    {
        const bool branch_taken_0x1eabc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EABC4u;
            // 0x1eabc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabc4) {
            ctx->pc = 0x1EAB88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eab88;
        }
    }
    ctx->pc = 0x1EABCCu;
label_1eabcc:
    // 0x1eabcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EABD4u;
}
