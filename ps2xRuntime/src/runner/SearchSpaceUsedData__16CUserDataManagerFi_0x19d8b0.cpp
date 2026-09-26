#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchSpaceUsedData__16CUserDataManagerFi
// Address: 0x19d8b0 - 0x19d978
void SearchSpaceUsedData__16CUserDataManagerFi_0x19d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSpaceUsedData__16CUserDataManagerFi_0x19d8b0");
#endif

    switch (ctx->pc) {
        case 0x19d8e4u: goto label_19d8e4;
        case 0x19d8f8u: goto label_19d8f8;
        case 0x19d910u: goto label_19d910;
        case 0x19d94cu: goto label_19d94c;
        default: break;
    }

    ctx->pc = 0x19d8b0u;

    // 0x19d8b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19d8b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19d8b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19d8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19d8bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19d8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19d8c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19d8c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19d8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19d8c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19d8c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19d8d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19d8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d8dc: 0xc068644  jal         func_1A1910
    ctx->pc = 0x19D8DCu;
    SET_GPR_U32(ctx, 31, 0x19D8E4u);
    ctx->pc = 0x19D8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8DCu;
            // 0x19d8e0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8E4u; }
        if (ctx->pc != 0x19D8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8E4u; }
        if (ctx->pc != 0x19D8E4u) { return; }
    }
    ctx->pc = 0x19D8E4u;
label_19d8e4:
    // 0x19d8e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19d8e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8e8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x19d8e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x19d8ec: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x19D8ECu;
    {
        const bool branch_taken_0x19d8ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D8ECu;
            // 0x19d8f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d8ec) {
            ctx->pc = 0x19D930u;
            goto label_19d930;
        }
    }
    ctx->pc = 0x19D8F4u;
    // 0x19d8f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19d8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d8f8:
    // 0x19d8f8: 0x2b32021  addu        $a0, $s5, $s3
    ctx->pc = 0x19d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x19d8fc: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x19d8fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19d900: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D900u;
    {
        const bool branch_taken_0x19d900 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d900) {
            ctx->pc = 0x19D920u;
            goto label_19d920;
        }
    }
    ctx->pc = 0x19D908u;
    // 0x19d908: 0xc065c9c  jal         func_197270
    ctx->pc = 0x19D908u;
    SET_GPR_U32(ctx, 31, 0x19D910u);
    ctx->pc = 0x197270u;
    if (runtime->hasFunction(0x197270u)) {
        auto targetFn = runtime->lookupFunction(0x197270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D910u; }
        if (ctx->pc != 0x19D910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStackRemain__13CGameDataUsedFv_0x197270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D910u; }
        if (ctx->pc != 0x19D910u) { return; }
    }
    ctx->pc = 0x19D910u;
label_19d910:
    // 0x19d910: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D910u;
    {
        const bool branch_taken_0x19d910 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19d910) {
            ctx->pc = 0x19D920u;
            goto label_19d920;
        }
    }
    ctx->pc = 0x19D918u;
    // 0x19d918: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19D918u;
    {
        const bool branch_taken_0x19d918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D918u;
            // 0x19d91c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d918) {
            ctx->pc = 0x19D930u;
            goto label_19d930;
        }
    }
    ctx->pc = 0x19D920u;
label_19d920:
    // 0x19d920: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19d920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19d924: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x19d924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x19d928: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x19D928u;
    {
        const bool branch_taken_0x19d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D928u;
            // 0x19d92c: 0x2673006c  addiu       $s3, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d928) {
            ctx->pc = 0x19D8F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d8f8;
        }
    }
    ctx->pc = 0x19D930u;
label_19d930:
    // 0x19d930: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x19d930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x19d934: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D934u;
    {
        const bool branch_taken_0x19d934 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D934u;
            // 0x19d938: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d934) {
            ctx->pc = 0x19D944u;
            goto label_19d944;
        }
    }
    ctx->pc = 0x19D93Cu;
    // 0x19d93c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19D93Cu;
    {
        const bool branch_taken_0x19d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D93Cu;
            // 0x19d940: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d93c) {
            ctx->pc = 0x19D954u;
            goto label_19d954;
        }
    }
    ctx->pc = 0x19D944u;
label_19d944:
    // 0x19d944: 0xc067610  jal         func_19D840
    ctx->pc = 0x19D944u;
    SET_GPR_U32(ctx, 31, 0x19D94Cu);
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D94Cu; }
        if (ctx->pc != 0x19D94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D94Cu; }
        if (ctx->pc != 0x19D94Cu) { return; }
    }
    ctx->pc = 0x19D94Cu;
label_19d94c:
    // 0x19d94c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19d94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d950: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19d954:
    // 0x19d954: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19d954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d958: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19d958u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d95c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19d95cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d960: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d970: 0x3e00008  jr          $ra
    ctx->pc = 0x19D970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D970u;
            // 0x19d974: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D978u;
}
