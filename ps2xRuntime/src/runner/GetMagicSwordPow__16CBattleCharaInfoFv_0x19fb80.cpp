#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMagicSwordPow__16CBattleCharaInfoFv
// Address: 0x19fb80 - 0x19fc44
void GetMagicSwordPow__16CBattleCharaInfoFv_0x19fb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMagicSwordPow__16CBattleCharaInfoFv_0x19fb80");
#endif

    switch (ctx->pc) {
        case 0x19fba4u: goto label_19fba4;
        case 0x19fc00u: goto label_19fc00;
        default: break;
    }

    ctx->pc = 0x19fb80u;

    // 0x19fb80: 0x848e001a  lh          $t6, 0x1A($a0)
    ctx->pc = 0x19fb80u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x19fb84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb88: 0xe082a  slt         $at, $zero, $t6
    ctx->pc = 0x19fb88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x19fb8c: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x19FB8Cu;
    {
        const bool branch_taken_0x19fb8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB8Cu;
            // 0x19fb90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb8c) {
            ctx->pc = 0x19FC1Cu;
            goto label_19fc1c;
        }
    }
    ctx->pc = 0x19FB94u;
    // 0x19fb94: 0x29c10009  slti        $at, $t6, 0x9
    ctx->pc = 0x19fb94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x19fb98: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x19FB98u;
    {
        const bool branch_taken_0x19fb98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB98u;
            // 0x19fb9c: 0x25ccfff8  addiu       $t4, $t6, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb98) {
            ctx->pc = 0x19FBF8u;
            goto label_19fbf8;
        }
    }
    ctx->pc = 0x19FBA0u;
    // 0x19fba0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x19fba0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fba4:
    // 0x19fba4: 0x8d7821  addu        $t7, $a0, $t5
    ctx->pc = 0x19fba4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x19fba8: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x19fba8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x19fbac: 0x85e6001c  lh          $a2, 0x1C($t7)
    ctx->pc = 0x19fbacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x19fbb0: 0x16c182a  slt         $v1, $t3, $t4
    ctx->pc = 0x19fbb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x19fbb4: 0x85e5001e  lh          $a1, 0x1E($t7)
    ctx->pc = 0x19fbb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 30)));
    // 0x19fbb8: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x19fbbc: 0x85ea0020  lh          $t2, 0x20($t7)
    ctx->pc = 0x19fbbcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 32)));
    // 0x19fbc0: 0x85e90022  lh          $t1, 0x22($t7)
    ctx->pc = 0x19fbc0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 34)));
    // 0x19fbc4: 0x85e80024  lh          $t0, 0x24($t7)
    ctx->pc = 0x19fbc4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 36)));
    // 0x19fbc8: 0x85e70026  lh          $a3, 0x26($t7)
    ctx->pc = 0x19fbc8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 38)));
    // 0x19fbcc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x19fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19fbd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19fbd4: 0x85e60028  lh          $a2, 0x28($t7)
    ctx->pc = 0x19fbd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 40)));
    // 0x19fbd8: 0x85e5002a  lh          $a1, 0x2A($t7)
    ctx->pc = 0x19fbd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 42)));
    // 0x19fbdc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x19fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x19fbe0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x19fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x19fbe4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19fbe8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x19fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19fbec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x19fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19fbf0: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19FBF0u;
    {
        const bool branch_taken_0x19fbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBF0u;
            // 0x19fbf4: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbf0) {
            ctx->pc = 0x19FBA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19fba4;
        }
    }
    ctx->pc = 0x19FBF8u;
label_19fbf8:
    // 0x19fbf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19FBF8u;
    {
        const bool branch_taken_0x19fbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBF8u;
            // 0x19fbfc: 0xb2840  sll         $a1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbf8) {
            ctx->pc = 0x19FC10u;
            goto label_19fc10;
        }
    }
    ctx->pc = 0x19FC00u;
label_19fc00:
    // 0x19fc00: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x19fc00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x19fc04: 0x8463001c  lh          $v1, 0x1C($v1)
    ctx->pc = 0x19fc04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x19fc08: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x19fc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x19fc0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19fc10:
    // 0x19fc10: 0x16e182a  slt         $v1, $t3, $t6
    ctx->pc = 0x19fc10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x19fc14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19FC14u;
    {
        const bool branch_taken_0x19fc14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC14u;
            // 0x19fc18: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc14) {
            ctx->pc = 0x19FC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19fc00;
        }
    }
    ctx->pc = 0x19FC1Cu;
label_19fc1c:
    // 0x19fc1c: 0x0  nop
    ctx->pc = 0x19fc1cu;
    // NOP
    // 0x19fc20: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x19fc20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fc24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fc28: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FC28u;
    {
        const bool branch_taken_0x19fc28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19fc28) {
            ctx->pc = 0x19FC38u;
            goto label_19fc38;
        }
    }
    ctx->pc = 0x19FC30u;
    // 0x19fc30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19FC30u;
    {
        const bool branch_taken_0x19fc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fc30) {
            ctx->pc = 0x19FC3Cu;
            goto label_19fc3c;
        }
    }
    ctx->pc = 0x19FC38u;
label_19fc38:
    // 0x19fc38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fc38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fc3c:
    // 0x19fc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x19FC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FC44u;
}
