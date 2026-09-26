#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FormInfoClear__14CPosDataManageFii
// Address: 0x22af30 - 0x22afbc
void FormInfoClear__14CPosDataManageFii_0x22af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FormInfoClear__14CPosDataManageFii_0x22af30");
#endif

    switch (ctx->pc) {
        case 0x22af7cu: goto label_22af7c;
        case 0x22af88u: goto label_22af88;
        default: break;
    }

    ctx->pc = 0x22af30u;

    // 0x22af30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22af30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22af34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22af38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22af38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22af3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22af3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22af40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22af40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22af44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22af44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22af48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22af48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af4c: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22AF4Cu;
    {
        const bool branch_taken_0x22af4c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x22AF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF4Cu;
            // 0x22af50: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af4c) {
            ctx->pc = 0x22AF58u;
            goto label_22af58;
        }
    }
    ctx->pc = 0x22AF54u;
    // 0x22af54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22af54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22af58:
    // 0x22af58: 0x9624001c  lhu         $a0, 0x1C($s1)
    ctx->pc = 0x22af58u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x22af5c: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x22af5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22af60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AF60u;
    {
        const bool branch_taken_0x22af60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF60u;
            // 0x22af64: 0xb0082a  slt         $at, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af60) {
            ctx->pc = 0x22AF70u;
            goto label_22af70;
        }
    }
    ctx->pc = 0x22AF68u;
    // 0x22af68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22af68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af6c: 0xb0082a  slt         $at, $a1, $s0
    ctx->pc = 0x22af6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_22af70:
    // 0x22af70: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x22AF70u;
    {
        const bool branch_taken_0x22af70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF70u;
            // 0x22af74: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af70) {
            ctx->pc = 0x22AF9Cu;
            goto label_22af9c;
        }
    }
    ctx->pc = 0x22AF78u;
    // 0x22af78: 0x599c0  sll         $s3, $a1, 7
    ctx->pc = 0x22af78u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_22af7c:
    // 0x22af7c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x22af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x22af80: 0xc089630  jal         func_2258C0
    ctx->pc = 0x22AF80u;
    SET_GPR_U32(ctx, 31, 0x22AF88u);
    ctx->pc = 0x22AF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AF80u;
            // 0x22af84: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258C0u;
    if (runtime->hasFunction(0x2258C0u)) {
        auto targetFn = runtime->lookupFunction(0x2258C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AF88u; }
        if (ctx->pc != 0x22AF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CMenuPosDataFormFv_0x2258c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AF88u; }
        if (ctx->pc != 0x22AF88u) { return; }
    }
    ctx->pc = 0x22AF88u;
label_22af88:
    // 0x22af88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22af88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x22af8c: 0x26730080  addiu       $s3, $s3, 0x80
    ctx->pc = 0x22af8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x22af90: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x22af90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22af94: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22AF94u;
    {
        const bool branch_taken_0x22af94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22af94) {
            ctx->pc = 0x22AF7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22af7c;
        }
    }
    ctx->pc = 0x22AF9Cu;
label_22af9c:
    // 0x22af9c: 0x0  nop
    ctx->pc = 0x22af9cu;
    // NOP
    // 0x22afa0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22afa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22afa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22afa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22afa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22afa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22afac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22afacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22afb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22afb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22afb4: 0x3e00008  jr          $ra
    ctx->pc = 0x22AFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFB4u;
            // 0x22afb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AFBCu;
}
