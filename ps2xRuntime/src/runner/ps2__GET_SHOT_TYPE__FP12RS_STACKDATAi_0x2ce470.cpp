#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_SHOT_TYPE__FP12RS_STACKDATAi
// Address: 0x2ce470 - 0x2ce4c4
void ps2__GET_SHOT_TYPE__FP12RS_STACKDATAi_0x2ce470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_SHOT_TYPE__FP12RS_STACKDATAi_0x2ce470");
#endif

    switch (ctx->pc) {
        case 0x2ce498u: goto label_2ce498;
        case 0x2ce4a4u: goto label_2ce4a4;
        case 0x2ce4b0u: goto label_2ce4b0;
        default: break;
    }

    ctx->pc = 0x2ce470u;

    // 0x2ce470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce480: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE480u;
    {
        const bool branch_taken_0x2ce480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE480u;
            // 0x2ce484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce480) {
            ctx->pc = 0x2CE490u;
            goto label_2ce490;
        }
    }
    ctx->pc = 0x2CE488u;
    // 0x2ce488: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CE488u;
    {
        const bool branch_taken_0x2ce488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE488u;
            // 0x2ce48c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce488) {
            ctx->pc = 0x2CE4B4u;
            goto label_2ce4b4;
        }
    }
    ctx->pc = 0x2CE490u;
label_2ce490:
    // 0x2ce490: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x2CE490u;
    SET_GPR_U32(ctx, 31, 0x2CE498u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE498u; }
        if (ctx->pc != 0x2CE498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE498u; }
        if (ctx->pc != 0x2CE498u) { return; }
    }
    ctx->pc = 0x2CE498u;
label_2ce498:
    // 0x2ce498: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2ce498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ce49c: 0xc0664d0  jal         func_199340
    ctx->pc = 0x2CE49Cu;
    SET_GPR_U32(ctx, 31, 0x2CE4A4u);
    ctx->pc = 0x2CE4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE49Cu;
            // 0x2ce4a0: 0x2444006c  addiu       $a0, $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199340u;
    if (runtime->hasFunction(0x199340u)) {
        auto targetFn = runtime->lookupFunction(0x199340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE4A4u; }
        if (ctx->pc != 0x2CE4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttackType__13CGameDataUsedFv_0x199340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE4A4u; }
        if (ctx->pc != 0x2CE4A4u) { return; }
    }
    ctx->pc = 0x2CE4A4u;
label_2ce4a4:
    // 0x2ce4a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce4a8: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CE4A8u;
    SET_GPR_U32(ctx, 31, 0x2CE4B0u);
    ctx->pc = 0x2CE4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE4A8u;
            // 0x2ce4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE4B0u; }
        if (ctx->pc != 0x2CE4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE4B0u; }
        if (ctx->pc != 0x2CE4B0u) { return; }
    }
    ctx->pc = 0x2CE4B0u;
label_2ce4b0:
    // 0x2ce4b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce4b4:
    // 0x2ce4b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce4b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE4BCu;
            // 0x2ce4c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE4C4u;
}
