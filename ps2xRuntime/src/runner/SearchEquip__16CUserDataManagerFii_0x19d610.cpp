#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchEquip__16CUserDataManagerFii
// Address: 0x19d610 - 0x19d708
void SearchEquip__16CUserDataManagerFii_0x19d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchEquip__16CUserDataManagerFii_0x19d610");
#endif

    switch (ctx->pc) {
        case 0x19d654u: goto label_19d654;
        case 0x19d65cu: goto label_19d65c;
        case 0x19d688u: goto label_19d688;
        case 0x19d6c4u: goto label_19d6c4;
        default: break;
    }

    ctx->pc = 0x19d610u;

    // 0x19d610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19d614: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19d618: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19d618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19d61c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19d61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19d620: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19d620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d624: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d628: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19d628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d630: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19d630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d634: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D634u;
    {
        const bool branch_taken_0x19d634 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D634u;
            // 0x19d638: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d634) {
            ctx->pc = 0x19D648u;
            goto label_19d648;
        }
    }
    ctx->pc = 0x19D63Cu;
    // 0x19d63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d640: 0x1642001b  bne         $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19D640u;
    {
        const bool branch_taken_0x19d640 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d640) {
            ctx->pc = 0x19D6B0u;
            goto label_19d6b0;
        }
    }
    ctx->pc = 0x19D648u;
label_19d648:
    // 0x19d648: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19d648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d64c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x19D64Cu;
    SET_GPR_U32(ctx, 31, 0x19D654u);
    ctx->pc = 0x19D650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D64Cu;
            // 0x19d650: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D654u; }
        if (ctx->pc != 0x19D654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D654u; }
        if (ctx->pc != 0x19D654u) { return; }
    }
    ctx->pc = 0x19D654u;
label_19d654:
    // 0x19d654: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19d658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d65c:
    // 0x19d65c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x19d65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19d660: 0x84c3002e  lh          $v1, 0x2E($a2)
    ctx->pc = 0x19d660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 46)));
    // 0x19d664: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D664u;
    {
        const bool branch_taken_0x19d664 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d664) {
            ctx->pc = 0x19D670u;
            goto label_19d670;
        }
    }
    ctx->pc = 0x19D66Cu;
    // 0x19d66c: 0x24d0002c  addiu       $s0, $a2, 0x2C
    ctx->pc = 0x19d66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
label_19d670:
    // 0x19d670: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19d670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19d674: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x19d674u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19d678: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19D678u;
    {
        const bool branch_taken_0x19d678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D678u;
            // 0x19d67c: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d678) {
            ctx->pc = 0x19D65Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d65c;
        }
    }
    ctx->pc = 0x19D680u;
    // 0x19d680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d684: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d688:
    // 0x19d688: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x19d688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19d68c: 0x84a30172  lh          $v1, 0x172($a1)
    ctx->pc = 0x19d68cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 370)));
    // 0x19d690: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D690u;
    {
        const bool branch_taken_0x19d690 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d690) {
            ctx->pc = 0x19D69Cu;
            goto label_19d69c;
        }
    }
    ctx->pc = 0x19D698u;
    // 0x19d698: 0x24b00170  addiu       $s0, $a1, 0x170
    ctx->pc = 0x19d698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
label_19d69c:
    // 0x19d69c: 0x0  nop
    ctx->pc = 0x19d69cu;
    // NOP
    // 0x19d6a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19d6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19d6a4: 0x28c30005  slti        $v1, $a2, 0x5
    ctx->pc = 0x19d6a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x19d6a8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19D6A8u;
    {
        const bool branch_taken_0x19d6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6A8u;
            // 0x19d6ac: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6a8) {
            ctx->pc = 0x19D688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d688;
        }
    }
    ctx->pc = 0x19D6B0u;
label_19d6b0:
    // 0x19d6b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d6b4: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19D6B4u;
    {
        const bool branch_taken_0x19d6b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6B4u;
            // 0x19d6b8: 0x26634660  addiu       $v1, $s3, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 18016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6b4) {
            ctx->pc = 0x19D6E8u;
            goto label_19d6e8;
        }
    }
    ctx->pc = 0x19D6BCu;
    // 0x19d6bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d6c4:
    // 0x19d6c4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x19d6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d6c8: 0x84a20032  lh          $v0, 0x32($a1)
    ctx->pc = 0x19d6c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x19d6cc: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D6CCu;
    {
        const bool branch_taken_0x19d6cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d6cc) {
            ctx->pc = 0x19D6D8u;
            goto label_19d6d8;
        }
    }
    ctx->pc = 0x19D6D4u;
    // 0x19d6d4: 0x24b00030  addiu       $s0, $a1, 0x30
    ctx->pc = 0x19d6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_19d6d8:
    // 0x19d6d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19d6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19d6dc: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x19d6dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19d6e0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19D6E0u;
    {
        const bool branch_taken_0x19d6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6E0u;
            // 0x19d6e4: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d6e0) {
            ctx->pc = 0x19D6C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d6c4;
        }
    }
    ctx->pc = 0x19D6E8u;
label_19d6e8:
    // 0x19d6e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19d6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d6f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d6f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d6f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d6f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d6f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d700: 0x3e00008  jr          $ra
    ctx->pc = 0x19D700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D700u;
            // 0x19d704: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D708u;
}
