#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchMdsList__11CMdsListSetFPc
// Address: 0x168b80 - 0x168c18
void SearchMdsList__11CMdsListSetFPc_0x168b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchMdsList__11CMdsListSetFPc_0x168b80");
#endif

    switch (ctx->pc) {
        case 0x168bb8u: goto label_168bb8;
        case 0x168bccu: goto label_168bcc;
        default: break;
    }

    ctx->pc = 0x168b80u;

    // 0x168b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168b84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x168b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x168b88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x168b8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168b90: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x168b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168b9c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x168B9Cu;
    {
        const bool branch_taken_0x168b9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x168BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168B9Cu;
            // 0x168ba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b9c) {
            ctx->pc = 0x168BACu;
            goto label_168bac;
        }
    }
    ctx->pc = 0x168BA4u;
    // 0x168ba4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x168BA4u;
    {
        const bool branch_taken_0x168ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BA4u;
            // 0x168ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ba4) {
            ctx->pc = 0x168BFCu;
            goto label_168bfc;
        }
    }
    ctx->pc = 0x168BACu;
label_168bac:
    // 0x168bac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x168bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168bb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x168BB0u;
    {
        const bool branch_taken_0x168bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BB0u;
            // 0x168bb4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bb0) {
            ctx->pc = 0x168BE8u;
            goto label_168be8;
        }
    }
    ctx->pc = 0x168BB8u;
label_168bb8:
    // 0x168bb8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x168bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x168bbc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168BBCu;
    {
        const bool branch_taken_0x168bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BBCu;
            // 0x168bc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bbc) {
            ctx->pc = 0x168BE0u;
            goto label_168be0;
        }
    }
    ctx->pc = 0x168BC4u;
    // 0x168bc4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x168BC4u;
    SET_GPR_U32(ctx, 31, 0x168BCCu);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BCCu; }
        if (ctx->pc != 0x168BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BCCu; }
        if (ctx->pc != 0x168BCCu) { return; }
    }
    ctx->pc = 0x168BCCu;
label_168bcc:
    // 0x168bcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168BCCu;
    {
        const bool branch_taken_0x168bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BCCu;
            // 0x168bd0: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bcc) {
            ctx->pc = 0x168BE0u;
            goto label_168be0;
        }
    }
    ctx->pc = 0x168BD4u;
    // 0x168bd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x168bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x168bd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168BD8u;
    {
        const bool branch_taken_0x168bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BD8u;
            // 0x168bdc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bd8) {
            ctx->pc = 0x168BFCu;
            goto label_168bfc;
        }
    }
    ctx->pc = 0x168BE0u;
label_168be0:
    // 0x168be0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x168be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x168be4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x168be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_168be8:
    // 0x168be8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x168be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168bec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x168becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168bf0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x168BF0u;
    {
        const bool branch_taken_0x168bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168BF0u;
            // 0x168bf4: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bf0) {
            ctx->pc = 0x168BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168bb8;
        }
    }
    ctx->pc = 0x168BF8u;
    // 0x168bf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x168bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168bfc:
    // 0x168bfc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x168bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168c00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x168c00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168c04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168c08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168c0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168c10: 0x3e00008  jr          $ra
    ctx->pc = 0x168C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C10u;
            // 0x168c14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168C18u;
}
