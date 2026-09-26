#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetUserGlid__11CDngFreeMapFi
// Address: 0x1ea850 - 0x1ea888
void SetUserGlid__11CDngFreeMapFi_0x1ea850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetUserGlid__11CDngFreeMapFi_0x1ea850");
#endif

    switch (ctx->pc) {
        case 0x1ea874u: goto label_1ea874;
        default: break;
    }

    ctx->pc = 0x1ea850u;

    // 0x1ea850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ea854: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x1ea854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1ea858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ea858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ea85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea860: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x1ea860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x1ea864: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA864u;
    {
        const bool branch_taken_0x1ea864 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA864u;
            // 0x1ea868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea864) {
            ctx->pc = 0x1EA878u;
            goto label_1ea878;
        }
    }
    ctx->pc = 0x1EA86Cu;
    // 0x1ea86c: 0xc07aacc  jal         func_1EAB30
    ctx->pc = 0x1EA86Cu;
    SET_GPR_U32(ctx, 31, 0x1EA874u);
    ctx->pc = 0x1EAB30u;
    if (runtime->hasFunction(0x1EAB30u)) {
        auto targetFn = runtime->lookupFunction(0x1EAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA874u; }
        if (ctx->pc != 0x1EA874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoomGlid__11CDngFreeMapFi_0x1eab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA874u; }
        if (ctx->pc != 0x1EA874u) { return; }
    }
    ctx->pc = 0x1EA874u;
label_1ea874:
    // 0x1ea874: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x1ea874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_1ea878:
    // 0x1ea878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea880: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA880u;
            // 0x1ea884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA888u;
}
