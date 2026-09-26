#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWHpGage__16CUserDataManagerFii
// Address: 0x19b620 - 0x19b6e8
void GetWHpGage__16CUserDataManagerFii_0x19b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWHpGage__16CUserDataManagerFii_0x19b620");
#endif

    switch (ctx->pc) {
        case 0x19b66cu: goto label_19b66c;
        default: break;
    }

    ctx->pc = 0x19b620u;

    // 0x19b620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19b620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19b624: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b628: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19b628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19b62c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b634: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19b634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b63c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19b63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b640: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B640u;
    {
        const bool branch_taken_0x19b640 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B640u;
            // 0x19b644: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b640) {
            ctx->pc = 0x19B650u;
            goto label_19b650;
        }
    }
    ctx->pc = 0x19B648u;
    // 0x19b648: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19B648u;
    {
        const bool branch_taken_0x19b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B648u;
            // 0x19b64c: 0x264246a8  addiu       $v0, $s2, 0x46A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 18088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b648) {
            ctx->pc = 0x19B6D0u;
            goto label_19b6d0;
        }
    }
    ctx->pc = 0x19B650u;
label_19b650:
    // 0x19b650: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b654: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B654u;
    {
        const bool branch_taken_0x19b654 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B654u;
            // 0x19b658: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b654) {
            ctx->pc = 0x19B67Cu;
            goto label_19b67c;
        }
    }
    ctx->pc = 0x19B65Cu;
    // 0x19b65c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x19b65cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x19b660: 0x84254d98  lh          $a1, 0x4D98($at)
    ctx->pc = 0x19b660u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x19b664: 0xc066b10  jal         func_19AC40
    ctx->pc = 0x19B664u;
    SET_GPR_U32(ctx, 31, 0x19B66Cu);
    ctx->pc = 0x19B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B664u;
            // 0x19b668: 0x26444eb0  addiu       $a0, $s2, 0x4EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AC40u;
    if (runtime->hasFunction(0x19AC40u)) {
        auto targetFn = runtime->lookupFunction(0x19AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B66Cu; }
        if (ctx->pc != 0x19B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiData__11CMonsterBoxFi_0x19ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B66Cu; }
        if (ctx->pc != 0x19B66Cu) { return; }
    }
    ctx->pc = 0x19B66Cu;
label_19b66c:
    // 0x19b66c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B66Cu;
    {
        const bool branch_taken_0x19b66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b66c) {
            ctx->pc = 0x19B67Cu;
            goto label_19b67c;
        }
    }
    ctx->pc = 0x19B674u;
    // 0x19b674: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19B674u;
    {
        const bool branch_taken_0x19b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B674u;
            // 0x19b678: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b674) {
            ctx->pc = 0x19B6D0u;
            goto label_19b6d0;
        }
    }
    ctx->pc = 0x19B67Cu;
label_19b67c:
    // 0x19b67c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B67Cu;
    {
        const bool branch_taken_0x19b67c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B67Cu;
            // 0x19b680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b67c) {
            ctx->pc = 0x19B68Cu;
            goto label_19b68c;
        }
    }
    ctx->pc = 0x19B684u;
    // 0x19b684: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B684u;
    {
        const bool branch_taken_0x19b684 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B684u;
            // 0x19b688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b684) {
            ctx->pc = 0x19B6D0u;
            goto label_19b6d0;
        }
    }
    ctx->pc = 0x19B68Cu;
label_19b68c:
    // 0x19b68c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B68Cu;
    {
        const bool branch_taken_0x19b68c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x19B690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B68Cu;
            // 0x19b690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b68c) {
            ctx->pc = 0x19B6A4u;
            goto label_19b6a4;
        }
    }
    ctx->pc = 0x19B694u;
    // 0x19b694: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x19b694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19b698: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B698u;
    {
        const bool branch_taken_0x19b698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B698u;
            // 0x19b69c: 0x2403038c  addiu       $v1, $zero, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b698) {
            ctx->pc = 0x19B6ACu;
            goto label_19b6ac;
        }
    }
    ctx->pc = 0x19B6A0u;
    // 0x19b6a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b6a4:
    // 0x19b6a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19B6A4u;
    {
        const bool branch_taken_0x19b6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6A4u;
            // 0x19b6a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6a4) {
            ctx->pc = 0x19B6D4u;
            goto label_19b6d4;
        }
    }
    ctx->pc = 0x19B6ACu;
label_19b6ac:
    // 0x19b6ac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x19b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19b6b0: 0x2232018  mult        $a0, $s1, $v1
    ctx->pc = 0x19b6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19b6b4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x19b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19b6b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19b6bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b6c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19b6c4: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x19b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x19b6c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b6cc: 0x244240c8  addiu       $v0, $v0, 0x40C8
    ctx->pc = 0x19b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16584));
label_19b6d0:
    // 0x19b6d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19b6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19b6d4:
    // 0x19b6d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b6d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b6d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b6d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b6dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B6E0u;
            // 0x19b6e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B6E8u;
}
