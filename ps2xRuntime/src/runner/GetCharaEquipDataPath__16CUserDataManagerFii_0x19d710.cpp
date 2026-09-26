#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharaEquipDataPath__16CUserDataManagerFii
// Address: 0x19d710 - 0x19d7cc
void GetCharaEquipDataPath__16CUserDataManagerFii_0x19d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharaEquipDataPath__16CUserDataManagerFii_0x19d710");
#endif

    switch (ctx->pc) {
        case 0x19d77cu: goto label_19d77c;
        case 0x19d7c0u: goto label_19d7c0;
        default: break;
    }

    ctx->pc = 0x19d710u;

    // 0x19d710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d714: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D714u;
    {
        const bool branch_taken_0x19d714 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x19D718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D714u;
            // 0x19d718: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d714) {
            ctx->pc = 0x19D728u;
            goto label_19d728;
        }
    }
    ctx->pc = 0x19D71Cu;
    // 0x19d71c: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x19d71cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19d720: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D720u;
    {
        const bool branch_taken_0x19d720 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D720u;
            // 0x19d724: 0x28a10002  slti        $at, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d720) {
            ctx->pc = 0x19D730u;
            goto label_19d730;
        }
    }
    ctx->pc = 0x19D728u;
label_19d728:
    // 0x19d728: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19D728u;
    {
        const bool branch_taken_0x19d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D728u;
            // 0x19d72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d728) {
            ctx->pc = 0x19D7C0u;
            goto label_19d7c0;
        }
    }
    ctx->pc = 0x19D730u;
label_19d730:
    // 0x19d730: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x19D730u;
    {
        const bool branch_taken_0x19d730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d730) {
            ctx->pc = 0x19D784u;
            goto label_19d784;
        }
    }
    ctx->pc = 0x19D738u;
    // 0x19d738: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D738u;
    {
        const bool branch_taken_0x19d738 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x19D73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D738u;
            // 0x19d73c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d738) {
            ctx->pc = 0x19D74Cu;
            goto label_19d74c;
        }
    }
    ctx->pc = 0x19D740u;
    // 0x19d740: 0x28c10005  slti        $at, $a2, 0x5
    ctx->pc = 0x19d740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x19d744: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D744u;
    {
        const bool branch_taken_0x19d744 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D744u;
            // 0x19d748: 0x2403038c  addiu       $v1, $zero, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d744) {
            ctx->pc = 0x19D754u;
            goto label_19d754;
        }
    }
    ctx->pc = 0x19D74Cu;
label_19d74c:
    // 0x19d74c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19D74Cu;
    {
        const bool branch_taken_0x19d74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D74Cu;
            // 0x19d750: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d74c) {
            ctx->pc = 0x19D7C4u;
            goto label_19d7c4;
        }
    }
    ctx->pc = 0x19D754u;
label_19d754:
    // 0x19d754: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x19d754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19d758: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x19d758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19d75c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19d760: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19d760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d764: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d764u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d76c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x19d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19d770: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d774: 0xc065c48  jal         func_197120
    ctx->pc = 0x19D774u;
    SET_GPR_U32(ctx, 31, 0x19D77Cu);
    ctx->pc = 0x19D778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D774u;
            // 0x19d778: 0x244440b8  addiu       $a0, $v0, 0x40B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197120u;
    if (runtime->hasFunction(0x197120u)) {
        auto targetFn = runtime->lookupFunction(0x197120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D77Cu; }
        if (ctx->pc != 0x19D77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDataPath__13CGameDataUsedFv_0x197120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D77Cu; }
        if (ctx->pc != 0x19D77Cu) { return; }
    }
    ctx->pc = 0x19D77Cu;
label_19d77c:
    // 0x19d77c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19D77Cu;
    {
        const bool branch_taken_0x19d77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d77c) {
            ctx->pc = 0x19D7C0u;
            goto label_19d7c0;
        }
    }
    ctx->pc = 0x19D784u;
label_19d784:
    // 0x19d784: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D784u;
    {
        const bool branch_taken_0x19d784 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x19D788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D784u;
            // 0x19d788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d784) {
            ctx->pc = 0x19D798u;
            goto label_19d798;
        }
    }
    ctx->pc = 0x19D78Cu;
    // 0x19d78c: 0x28c10004  slti        $at, $a2, 0x4
    ctx->pc = 0x19d78cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19d790: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D790u;
    {
        const bool branch_taken_0x19d790 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d790) {
            ctx->pc = 0x19D7A0u;
            goto label_19d7a0;
        }
    }
    ctx->pc = 0x19D798u;
label_19d798:
    // 0x19d798: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19D798u;
    {
        const bool branch_taken_0x19d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d798) {
            ctx->pc = 0x19D7C0u;
            goto label_19d7c0;
        }
    }
    ctx->pc = 0x19D7A0u;
label_19d7a0:
    // 0x19d7a0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x19d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19d7a4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19d7a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d7ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d7b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d7b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19d7b8: 0xc065c48  jal         func_197120
    ctx->pc = 0x19D7B8u;
    SET_GPR_U32(ctx, 31, 0x19D7C0u);
    ctx->pc = 0x19D7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7B8u;
            // 0x19d7bc: 0x24444690  addiu       $a0, $v0, 0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197120u;
    if (runtime->hasFunction(0x197120u)) {
        auto targetFn = runtime->lookupFunction(0x197120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D7C0u; }
        if (ctx->pc != 0x19D7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDataPath__13CGameDataUsedFv_0x197120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D7C0u; }
        if (ctx->pc != 0x19D7C0u) { return; }
    }
    ctx->pc = 0x19D7C0u;
label_19d7c0:
    // 0x19d7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d7c4:
    // 0x19d7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x19D7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7C4u;
            // 0x19d7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D7CCu;
}
