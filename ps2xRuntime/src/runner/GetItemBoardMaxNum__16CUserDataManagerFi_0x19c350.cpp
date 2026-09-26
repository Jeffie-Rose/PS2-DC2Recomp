#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemBoardMaxNum__16CUserDataManagerFi
// Address: 0x19c350 - 0x19c3c4
void GetItemBoardMaxNum__16CUserDataManagerFi_0x19c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemBoardMaxNum__16CUserDataManagerFi_0x19c350");
#endif

    switch (ctx->pc) {
        case 0x19c378u: goto label_19c378;
        case 0x19c384u: goto label_19c384;
        default: break;
    }

    ctx->pc = 0x19c350u;

    // 0x19c350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19c358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c360: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19c360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c364: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C364u;
    {
        const bool branch_taken_0x19c364 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C364u;
            // 0x19c368: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c364) {
            ctx->pc = 0x19C370u;
            goto label_19c370;
        }
    }
    ctx->pc = 0x19C36Cu;
    // 0x19c36c: 0x2410008a  addiu       $s0, $zero, 0x8A
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
label_19c370:
    // 0x19c370: 0xc064220  jal         func_190880
    ctx->pc = 0x19C370u;
    SET_GPR_U32(ctx, 31, 0x19C378u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C378u; }
        if (ctx->pc != 0x19C378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C378u; }
        if (ctx->pc != 0x19C378u) { return; }
    }
    ctx->pc = 0x19C378u;
label_19c378:
    // 0x19c378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c37c: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x19C37Cu;
    SET_GPR_U32(ctx, 31, 0x19C384u);
    ctx->pc = 0x19C380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C37Cu;
            // 0x19c380: 0x240500fe  addiu       $a1, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C384u; }
        if (ctx->pc != 0x19C384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C384u; }
        if (ctx->pc != 0x19C384u) { return; }
    }
    ctx->pc = 0x19C384u;
label_19c384:
    // 0x19c384: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c388: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C388u;
    {
        const bool branch_taken_0x19c388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19C38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C388u;
            // 0x19c38c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c388) {
            ctx->pc = 0x19C3A0u;
            goto label_19c3a0;
        }
    }
    ctx->pc = 0x19C390u;
    // 0x19c390: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C390u;
    {
        const bool branch_taken_0x19c390 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c390) {
            ctx->pc = 0x19C39Cu;
            goto label_19c39c;
        }
    }
    ctx->pc = 0x19C398u;
    // 0x19c398: 0x24100090  addiu       $s0, $zero, 0x90
    ctx->pc = 0x19c398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_19c39c:
    // 0x19c39c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c3a0:
    // 0x19c3a0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C3A0u;
    {
        const bool branch_taken_0x19c3a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19C3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3A0u;
            // 0x19c3a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3a0) {
            ctx->pc = 0x19C3B0u;
            goto label_19c3b0;
        }
    }
    ctx->pc = 0x19C3A8u;
    // 0x19c3a8: 0x24100096  addiu       $s0, $zero, 0x96
    ctx->pc = 0x19c3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x19c3ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19c3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c3b0:
    // 0x19c3b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19c3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c3b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c3b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3BCu;
            // 0x19c3c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C3C4u;
}
