#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchIMGList__11CMdsListSetFPc
// Address: 0x168f30 - 0x168fd0
void SearchIMGList__11CMdsListSetFPc_0x168f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchIMGList__11CMdsListSetFPc_0x168f30");
#endif

    switch (ctx->pc) {
        case 0x168f5cu: goto label_168f5c;
        case 0x168f84u: goto label_168f84;
        default: break;
    }

    ctx->pc = 0x168f30u;

    // 0x168f30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168f34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x168f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x168f38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x168f3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168f40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x168f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168f48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x168f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168f50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x168f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f54: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x168F54u;
    {
        const bool branch_taken_0x168f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F54u;
            // 0x168f58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f54) {
            ctx->pc = 0x168FA0u;
            goto label_168fa0;
        }
    }
    ctx->pc = 0x168F5Cu;
label_168f5c:
    // 0x168f5c: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x168f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x168f60: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x168f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x168f64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x168f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x168f68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x168f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168f6c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x168F6Cu;
    {
        const bool branch_taken_0x168f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168f6c) {
            ctx->pc = 0x168F98u;
            goto label_168f98;
        }
    }
    ctx->pc = 0x168F74u;
    // 0x168f74: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168F74u;
    {
        const bool branch_taken_0x168f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F74u;
            // 0x168f78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f74) {
            ctx->pc = 0x168F98u;
            goto label_168f98;
        }
    }
    ctx->pc = 0x168F7Cu;
    // 0x168f7c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x168F7Cu;
    SET_GPR_U32(ctx, 31, 0x168F84u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F84u; }
        if (ctx->pc != 0x168F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F84u; }
        if (ctx->pc != 0x168F84u) { return; }
    }
    ctx->pc = 0x168F84u;
label_168f84:
    // 0x168f84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168F84u;
    {
        const bool branch_taken_0x168f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F84u;
            // 0x168f88: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f84) {
            ctx->pc = 0x168F98u;
            goto label_168f98;
        }
    }
    ctx->pc = 0x168F8Cu;
    // 0x168f8c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x168f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x168f90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168F90u;
    {
        const bool branch_taken_0x168f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F90u;
            // 0x168f94: 0x24420094  addiu       $v0, $v0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f90) {
            ctx->pc = 0x168FB4u;
            goto label_168fb4;
        }
    }
    ctx->pc = 0x168F98u;
label_168f98:
    // 0x168f98: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x168f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x168f9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x168f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_168fa0:
    // 0x168fa0: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x168fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x168fa4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x168fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168fa8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x168FA8u;
    {
        const bool branch_taken_0x168fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FA8u;
            // 0x168fac: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fa8) {
            ctx->pc = 0x168F5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168f5c;
        }
    }
    ctx->pc = 0x168FB0u;
    // 0x168fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x168fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168fb4:
    // 0x168fb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x168fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168fb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x168fb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168fbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168fc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x168FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FC8u;
            // 0x168fcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168FD0u;
}
