#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEtcTbl2__14CPosDataManageFPc
// Address: 0x22ac30 - 0x22acc0
void GetEtcTbl2__14CPosDataManageFPc_0x22ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEtcTbl2__14CPosDataManageFPc_0x22ac30");
#endif

    switch (ctx->pc) {
        case 0x22ac6cu: goto label_22ac6c;
        case 0x22ac80u: goto label_22ac80;
        default: break;
    }

    ctx->pc = 0x22ac30u;

    // 0x22ac30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22ac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22ac34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22ac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22ac38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22ac3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22ac40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22ac40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ac48: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AC48u;
    {
        const bool branch_taken_0x22ac48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC48u;
            // 0x22ac4c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac48) {
            ctx->pc = 0x22AC58u;
            goto label_22ac58;
        }
    }
    ctx->pc = 0x22AC50u;
    // 0x22ac50: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22AC50u;
    {
        const bool branch_taken_0x22ac50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC50u;
            // 0x22ac54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac50) {
            ctx->pc = 0x22ACA4u;
            goto label_22aca4;
        }
    }
    ctx->pc = 0x22AC58u;
label_22ac58:
    // 0x22ac58: 0x9492000c  lhu         $s2, 0xC($a0)
    ctx->pc = 0x22ac58u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22ac5c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x22ac5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22ac60: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x22ac60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22ac64: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x22AC64u;
    {
        const bool branch_taken_0x22ac64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC64u;
            // 0x22ac68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac64) {
            ctx->pc = 0x22ACA0u;
            goto label_22aca0;
        }
    }
    ctx->pc = 0x22AC6Cu;
label_22ac6c:
    // 0x22ac6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ac70: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22AC70u;
    {
        const bool branch_taken_0x22ac70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC70u;
            // 0x22ac74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac70) {
            ctx->pc = 0x22AC90u;
            goto label_22ac90;
        }
    }
    ctx->pc = 0x22AC78u;
    // 0x22ac78: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x22AC78u;
    SET_GPR_U32(ctx, 31, 0x22AC80u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AC80u; }
        if (ctx->pc != 0x22AC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AC80u; }
        if (ctx->pc != 0x22AC80u) { return; }
    }
    ctx->pc = 0x22AC80u;
label_22ac80:
    // 0x22ac80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AC80u;
    {
        const bool branch_taken_0x22ac80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC80u;
            // 0x22ac84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac80) {
            ctx->pc = 0x22AC90u;
            goto label_22ac90;
        }
    }
    ctx->pc = 0x22AC88u;
    // 0x22ac88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22AC88u;
    {
        const bool branch_taken_0x22ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC88u;
            // 0x22ac8c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac88) {
            ctx->pc = 0x22ACA8u;
            goto label_22aca8;
        }
    }
    ctx->pc = 0x22AC90u;
label_22ac90:
    // 0x22ac90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22ac90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22ac94: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x22ac94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22ac98: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22AC98u;
    {
        const bool branch_taken_0x22ac98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC98u;
            // 0x22ac9c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac98) {
            ctx->pc = 0x22AC6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ac6c;
        }
    }
    ctx->pc = 0x22ACA0u;
label_22aca0:
    // 0x22aca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22aca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22aca4:
    // 0x22aca4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22aca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22aca8:
    // 0x22aca8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22aca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22acac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22acacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22acb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22acb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22acb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22acb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22acb8: 0x3e00008  jr          $ra
    ctx->pc = 0x22ACB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACB8u;
            // 0x22acbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22ACC0u;
}
