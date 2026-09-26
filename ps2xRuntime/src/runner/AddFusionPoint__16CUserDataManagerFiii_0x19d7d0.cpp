#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddFusionPoint__16CUserDataManagerFiii
// Address: 0x19d7d0 - 0x19d840
void AddFusionPoint__16CUserDataManagerFiii_0x19d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddFusionPoint__16CUserDataManagerFiii_0x19d7d0");
#endif

    switch (ctx->pc) {
        case 0x19d828u: goto label_19d828;
        default: break;
    }

    ctx->pc = 0x19d7d0u;

    // 0x19d7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d7d4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D7D4u;
    {
        const bool branch_taken_0x19d7d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7D4u;
            // 0x19d7d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7d4) {
            ctx->pc = 0x19D7E8u;
            goto label_19d7e8;
        }
    }
    ctx->pc = 0x19D7DCu;
    // 0x19d7dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d7e0: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19D7E0u;
    {
        const bool branch_taken_0x19d7e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7E0u;
            // 0x19d7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7e0) {
            ctx->pc = 0x19D834u;
            goto label_19d834;
        }
    }
    ctx->pc = 0x19D7E8u;
label_19d7e8:
    // 0x19d7e8: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D7E8u;
    {
        const bool branch_taken_0x19d7e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D7E8u;
            // 0x19d7ec: 0x2408038c  addiu       $t0, $zero, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7e8) {
            ctx->pc = 0x19D7FCu;
            goto label_19d7fc;
        }
    }
    ctx->pc = 0x19D7F0u;
    // 0x19d7f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d7f4: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19D7F4u;
    {
        const bool branch_taken_0x19d7f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d7f4) {
            ctx->pc = 0x19D830u;
            goto label_19d830;
        }
    }
    ctx->pc = 0x19D7FCu;
label_19d7fc:
    // 0x19d7fc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x19d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19d800: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x19d800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19d804: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19d808: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19d808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d80c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d814: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x19d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19d818: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d81c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19d81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d820: 0xc065f78  jal         func_197DE0
    ctx->pc = 0x19D820u;
    SET_GPR_U32(ctx, 31, 0x19D828u);
    ctx->pc = 0x19D824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D820u;
            // 0x19d824: 0x244440b8  addiu       $a0, $v0, 0x40B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DE0u;
    if (runtime->hasFunction(0x197DE0u)) {
        auto targetFn = runtime->lookupFunction(0x197DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D828u; }
        if (ctx->pc != 0x19D828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__13CGameDataUsedFi_0x197de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D828u; }
        if (ctx->pc != 0x19D828u) { return; }
    }
    ctx->pc = 0x19D828u;
label_19d828:
    // 0x19d828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19D828u;
    {
        const bool branch_taken_0x19d828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D828u;
            // 0x19d82c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d828) {
            ctx->pc = 0x19D838u;
            goto label_19d838;
        }
    }
    ctx->pc = 0x19D830u;
label_19d830:
    // 0x19d830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19d830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d834:
    // 0x19d834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d838:
    // 0x19d838: 0x3e00008  jr          $ra
    ctx->pc = 0x19D838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D838u;
            // 0x19d83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D840u;
}
