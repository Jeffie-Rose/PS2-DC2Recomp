#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAbsGage__16CUserDataManagerFii
// Address: 0x19b6f0 - 0x19b7b8
void GetAbsGage__16CUserDataManagerFii_0x19b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAbsGage__16CUserDataManagerFii_0x19b6f0");
#endif

    switch (ctx->pc) {
        case 0x19b73cu: goto label_19b73c;
        default: break;
    }

    ctx->pc = 0x19b6f0u;

    // 0x19b6f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19b6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19b6f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b6f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19b6fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19b704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b70c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19b70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b710: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B710u;
    {
        const bool branch_taken_0x19b710 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B710u;
            // 0x19b714: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b710) {
            ctx->pc = 0x19B720u;
            goto label_19b720;
        }
    }
    ctx->pc = 0x19B718u;
    // 0x19b718: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19B718u;
    {
        const bool branch_taken_0x19b718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B718u;
            // 0x19b71c: 0x26424688  addiu       $v0, $s2, 0x4688 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 18056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b718) {
            ctx->pc = 0x19B7A0u;
            goto label_19b7a0;
        }
    }
    ctx->pc = 0x19B720u;
label_19b720:
    // 0x19b720: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19b720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b724: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B724u;
    {
        const bool branch_taken_0x19b724 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B724u;
            // 0x19b728: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b724) {
            ctx->pc = 0x19B74Cu;
            goto label_19b74c;
        }
    }
    ctx->pc = 0x19B72Cu;
    // 0x19b72c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x19b72cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x19b730: 0x84254d98  lh          $a1, 0x4D98($at)
    ctx->pc = 0x19b730u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x19b734: 0xc066b10  jal         func_19AC40
    ctx->pc = 0x19B734u;
    SET_GPR_U32(ctx, 31, 0x19B73Cu);
    ctx->pc = 0x19B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B734u;
            // 0x19b738: 0x26444eb0  addiu       $a0, $s2, 0x4EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AC40u;
    if (runtime->hasFunction(0x19AC40u)) {
        auto targetFn = runtime->lookupFunction(0x19AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B73Cu; }
        if (ctx->pc != 0x19B73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiData__11CMonsterBoxFi_0x19ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B73Cu; }
        if (ctx->pc != 0x19B73Cu) { return; }
    }
    ctx->pc = 0x19B73Cu;
label_19b73c:
    // 0x19b73c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B73Cu;
    {
        const bool branch_taken_0x19b73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b73c) {
            ctx->pc = 0x19B74Cu;
            goto label_19b74c;
        }
    }
    ctx->pc = 0x19B744u;
    // 0x19b744: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19B744u;
    {
        const bool branch_taken_0x19b744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B744u;
            // 0x19b748: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b744) {
            ctx->pc = 0x19B7A0u;
            goto label_19b7a0;
        }
    }
    ctx->pc = 0x19B74Cu;
label_19b74c:
    // 0x19b74c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B74Cu;
    {
        const bool branch_taken_0x19b74c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B74Cu;
            // 0x19b750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b74c) {
            ctx->pc = 0x19B75Cu;
            goto label_19b75c;
        }
    }
    ctx->pc = 0x19B754u;
    // 0x19b754: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19B754u;
    {
        const bool branch_taken_0x19b754 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19B758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B754u;
            // 0x19b758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b754) {
            ctx->pc = 0x19B7A0u;
            goto label_19b7a0;
        }
    }
    ctx->pc = 0x19B75Cu;
label_19b75c:
    // 0x19b75c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B75Cu;
    {
        const bool branch_taken_0x19b75c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x19B760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B75Cu;
            // 0x19b760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b75c) {
            ctx->pc = 0x19B774u;
            goto label_19b774;
        }
    }
    ctx->pc = 0x19B764u;
    // 0x19b764: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x19b764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19b768: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B768u;
    {
        const bool branch_taken_0x19b768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B768u;
            // 0x19b76c: 0x2403038c  addiu       $v1, $zero, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b768) {
            ctx->pc = 0x19B77Cu;
            goto label_19b77c;
        }
    }
    ctx->pc = 0x19B770u;
    // 0x19b770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19b770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b774:
    // 0x19b774: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19B774u;
    {
        const bool branch_taken_0x19b774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B774u;
            // 0x19b778: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b774) {
            ctx->pc = 0x19B7A4u;
            goto label_19b7a4;
        }
    }
    ctx->pc = 0x19B77Cu;
label_19b77c:
    // 0x19b77c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x19b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19b780: 0x2232018  mult        $a0, $s1, $v1
    ctx->pc = 0x19b780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x19b784: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x19b784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19b788: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19b788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19b78c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b790: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19b794: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x19b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x19b798: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19b79c: 0x244240d0  addiu       $v0, $v0, 0x40D0
    ctx->pc = 0x19b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16592));
label_19b7a0:
    // 0x19b7a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19b7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19b7a4:
    // 0x19b7a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b7a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b7a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b7ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7B0u;
            // 0x19b7b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B7B8u;
}
