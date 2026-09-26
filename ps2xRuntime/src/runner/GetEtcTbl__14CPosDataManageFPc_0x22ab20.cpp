#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEtcTbl__14CPosDataManageFPc
// Address: 0x22ab20 - 0x22abb0
void GetEtcTbl__14CPosDataManageFPc_0x22ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEtcTbl__14CPosDataManageFPc_0x22ab20");
#endif

    switch (ctx->pc) {
        case 0x22ab5cu: goto label_22ab5c;
        case 0x22ab70u: goto label_22ab70;
        default: break;
    }

    ctx->pc = 0x22ab20u;

    // 0x22ab20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22ab24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22ab28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ab28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22ab2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ab2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22ab30: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22ab30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ab34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ab38: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AB38u;
    {
        const bool branch_taken_0x22ab38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB38u;
            // 0x22ab3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab38) {
            ctx->pc = 0x22AB48u;
            goto label_22ab48;
        }
    }
    ctx->pc = 0x22AB40u;
    // 0x22ab40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22AB40u;
    {
        const bool branch_taken_0x22ab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB40u;
            // 0x22ab44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab40) {
            ctx->pc = 0x22AB94u;
            goto label_22ab94;
        }
    }
    ctx->pc = 0x22AB48u;
label_22ab48:
    // 0x22ab48: 0x94920004  lhu         $s2, 0x4($a0)
    ctx->pc = 0x22ab48u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22ab4c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x22ab4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22ab50: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x22ab50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22ab54: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x22AB54u;
    {
        const bool branch_taken_0x22ab54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB54u;
            // 0x22ab58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab54) {
            ctx->pc = 0x22AB90u;
            goto label_22ab90;
        }
    }
    ctx->pc = 0x22AB5Cu;
label_22ab5c:
    // 0x22ab5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ab60: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22AB60u;
    {
        const bool branch_taken_0x22ab60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB60u;
            // 0x22ab64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab60) {
            ctx->pc = 0x22AB80u;
            goto label_22ab80;
        }
    }
    ctx->pc = 0x22AB68u;
    // 0x22ab68: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x22AB68u;
    SET_GPR_U32(ctx, 31, 0x22AB70u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB70u; }
        if (ctx->pc != 0x22AB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AB70u; }
        if (ctx->pc != 0x22AB70u) { return; }
    }
    ctx->pc = 0x22AB70u;
label_22ab70:
    // 0x22ab70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AB70u;
    {
        const bool branch_taken_0x22ab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB70u;
            // 0x22ab74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab70) {
            ctx->pc = 0x22AB80u;
            goto label_22ab80;
        }
    }
    ctx->pc = 0x22AB78u;
    // 0x22ab78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22AB78u;
    {
        const bool branch_taken_0x22ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB78u;
            // 0x22ab7c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab78) {
            ctx->pc = 0x22AB98u;
            goto label_22ab98;
        }
    }
    ctx->pc = 0x22AB80u;
label_22ab80:
    // 0x22ab80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22ab80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22ab84: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x22ab84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22ab88: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22AB88u;
    {
        const bool branch_taken_0x22ab88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AB88u;
            // 0x22ab8c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab88) {
            ctx->pc = 0x22AB5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ab5c;
        }
    }
    ctx->pc = 0x22AB90u;
label_22ab90:
    // 0x22ab90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22ab90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ab94:
    // 0x22ab94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22ab94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22ab98:
    // 0x22ab98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ab98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ab9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ab9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22aba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22aba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22aba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22aba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aba8: 0x3e00008  jr          $ra
    ctx->pc = 0x22ABA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ABACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABA8u;
            // 0x22abac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22ABB0u;
}
