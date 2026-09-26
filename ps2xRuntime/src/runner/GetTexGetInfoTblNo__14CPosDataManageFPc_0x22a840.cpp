#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTexGetInfoTblNo__14CPosDataManageFPc
// Address: 0x22a840 - 0x22a8d8
void GetTexGetInfoTblNo__14CPosDataManageFPc_0x22a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTexGetInfoTblNo__14CPosDataManageFPc_0x22a840");
#endif

    switch (ctx->pc) {
        case 0x22a870u: goto label_22a870;
        case 0x22a88cu: goto label_22a88c;
        default: break;
    }

    ctx->pc = 0x22a840u;

    // 0x22a840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22a844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22a848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22a84c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a850: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22a850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a858: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22a858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a85c: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x22A85Cu;
    {
        const bool branch_taken_0x22a85c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A85Cu;
            // 0x22a860: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a85c) {
            ctx->pc = 0x22A8B8u;
            goto label_22a8b8;
        }
    }
    ctx->pc = 0x22A864u;
    // 0x22a864: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22a864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a868: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22A868u;
    {
        const bool branch_taken_0x22a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A868u;
            // 0x22a86c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a868) {
            ctx->pc = 0x22A8A4u;
            goto label_22a8a4;
        }
    }
    ctx->pc = 0x22A870u;
label_22a870:
    // 0x22a870: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x22a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x22a874: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22a874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22a878: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x22a878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x22a87c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22A87Cu;
    {
        const bool branch_taken_0x22a87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A87Cu;
            // 0x22a880: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a87c) {
            ctx->pc = 0x22A89Cu;
            goto label_22a89c;
        }
    }
    ctx->pc = 0x22A884u;
    // 0x22a884: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x22A884u;
    SET_GPR_U32(ctx, 31, 0x22A88Cu);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A88Cu; }
        if (ctx->pc != 0x22A88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A88Cu; }
        if (ctx->pc != 0x22A88Cu) { return; }
    }
    ctx->pc = 0x22A88Cu;
label_22a88c:
    // 0x22a88c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A88Cu;
    {
        const bool branch_taken_0x22a88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A88Cu;
            // 0x22a890: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a88c) {
            ctx->pc = 0x22A89Cu;
            goto label_22a89c;
        }
    }
    ctx->pc = 0x22A894u;
    // 0x22a894: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22A894u;
    {
        const bool branch_taken_0x22a894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A894u;
            // 0x22a898: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a894) {
            ctx->pc = 0x22A8C0u;
            goto label_22a8c0;
        }
    }
    ctx->pc = 0x22A89Cu;
label_22a89c:
    // 0x22a89c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x22a89cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x22a8a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22a8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22a8a4:
    // 0x22a8a4: 0x0  nop
    ctx->pc = 0x22a8a4u;
    // NOP
    // 0x22a8a8: 0x96620014  lhu         $v0, 0x14($s3)
    ctx->pc = 0x22a8a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x22a8ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x22a8acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22a8b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22A8B0u;
    {
        const bool branch_taken_0x22a8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a8b0) {
            ctx->pc = 0x22A870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a870;
        }
    }
    ctx->pc = 0x22A8B8u;
label_22a8b8:
    // 0x22a8b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22a8bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22a8c0:
    // 0x22a8c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22a8c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a8c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a8c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a8c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x22A8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A8D0u;
            // 0x22a8d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A8D8u;
}
