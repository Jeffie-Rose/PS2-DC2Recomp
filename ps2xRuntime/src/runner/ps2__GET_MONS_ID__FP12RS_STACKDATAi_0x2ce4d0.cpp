#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MONS_ID__FP12RS_STACKDATAi
// Address: 0x2ce4d0 - 0x2ce538
void ps2__GET_MONS_ID__FP12RS_STACKDATAi_0x2ce4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MONS_ID__FP12RS_STACKDATAi_0x2ce4d0");
#endif

    switch (ctx->pc) {
        case 0x2ce514u: goto label_2ce514;
        case 0x2ce51cu: goto label_2ce51c;
        case 0x2ce528u: goto label_2ce528;
        default: break;
    }

    ctx->pc = 0x2ce4d0u;

    // 0x2ce4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce4d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce4d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce4dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce4e0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE4E0u;
    {
        const bool branch_taken_0x2ce4e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CE4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE4E0u;
            // 0x2ce4e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4e0) {
            ctx->pc = 0x2CE4F0u;
            goto label_2ce4f0;
        }
    }
    ctx->pc = 0x2CE4E8u;
    // 0x2ce4e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2CE4E8u;
    {
        const bool branch_taken_0x2ce4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE4E8u;
            // 0x2ce4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4e8) {
            ctx->pc = 0x2CE528u;
            goto label_2ce528;
        }
    }
    ctx->pc = 0x2CE4F0u;
label_2ce4f0:
    // 0x2ce4f0: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x2ce4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x2ce4f4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2ce4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2ce4f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ce4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ce4fc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2ce4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2ce500: 0x84244d96  lh          $a0, 0x4D96($at)
    ctx->pc = 0x2ce500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x2ce504: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE504u;
    {
        const bool branch_taken_0x2ce504 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CE508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE504u;
            // 0x2ce508: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce504) {
            ctx->pc = 0x2CE520u;
            goto label_2ce520;
        }
    }
    ctx->pc = 0x2CE50Cu;
    // 0x2ce50c: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2CE50Cu;
    SET_GPR_U32(ctx, 31, 0x2CE514u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE514u; }
        if (ctx->pc != 0x2CE514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE514u; }
        if (ctx->pc != 0x2CE514u) { return; }
    }
    ctx->pc = 0x2CE514u;
label_2ce514:
    // 0x2ce514: 0xc067c84  jal         func_19F210
    ctx->pc = 0x2CE514u;
    SET_GPR_U32(ctx, 31, 0x2CE51Cu);
    ctx->pc = 0x2CE518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE514u;
            // 0x2ce518: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F210u;
    if (runtime->hasFunction(0x19F210u)) {
        auto targetFn = runtime->lookupFunction(0x19F210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE51Cu; }
        if (ctx->pc != 0x2CE51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterID__16CBattleCharaInfoFv_0x19f210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE51Cu; }
        if (ctx->pc != 0x2CE51Cu) { return; }
    }
    ctx->pc = 0x2CE51Cu;
label_2ce51c:
    // 0x2ce51c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce520:
    // 0x2ce520: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CE520u;
    SET_GPR_U32(ctx, 31, 0x2CE528u);
    ctx->pc = 0x2CE524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE520u;
            // 0x2ce524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE528u; }
        if (ctx->pc != 0x2CE528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE528u; }
        if (ctx->pc != 0x2CE528u) { return; }
    }
    ctx->pc = 0x2CE528u;
label_2ce528:
    // 0x2ce528: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce52c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce530: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE530u;
            // 0x2ce534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE538u;
}
