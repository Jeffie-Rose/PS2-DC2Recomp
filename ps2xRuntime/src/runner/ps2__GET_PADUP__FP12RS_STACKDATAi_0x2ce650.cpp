#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PADUP__FP12RS_STACKDATAi
// Address: 0x2ce650 - 0x2ce698
void ps2__GET_PADUP__FP12RS_STACKDATAi_0x2ce650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PADUP__FP12RS_STACKDATAi_0x2ce650");
#endif

    switch (ctx->pc) {
        case 0x2ce678u: goto label_2ce678;
        case 0x2ce684u: goto label_2ce684;
        default: break;
    }

    ctx->pc = 0x2ce650u;

    // 0x2ce650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce65c: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE65Cu;
    {
        const bool branch_taken_0x2ce65c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2CE660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE65Cu;
            // 0x2ce660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce65c) {
            ctx->pc = 0x2CE66Cu;
            goto label_2ce66c;
        }
    }
    ctx->pc = 0x2CE664u;
    // 0x2ce664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE664u;
    {
        const bool branch_taken_0x2ce664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE664u;
            // 0x2ce668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce664) {
            ctx->pc = 0x2CE688u;
            goto label_2ce688;
        }
    }
    ctx->pc = 0x2CE66Cu;
label_2ce66c:
    // 0x2ce66c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2ce66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2ce670: 0xc052c94  jal         func_14B250
    ctx->pc = 0x2CE670u;
    SET_GPR_U32(ctx, 31, 0x2CE678u);
    ctx->pc = 0x2CE674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE670u;
            // 0x2ce674: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B250u;
    if (runtime->hasFunction(0x14B250u)) {
        auto targetFn = runtime->lookupFunction(0x14B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE678u; }
        if (ctx->pc != 0x2CE678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPadUp__8CGamePadFv_0x14b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE678u; }
        if (ctx->pc != 0x2CE678u) { return; }
    }
    ctx->pc = 0x2CE678u;
label_2ce678:
    // 0x2ce678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce67c: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CE67Cu;
    SET_GPR_U32(ctx, 31, 0x2CE684u);
    ctx->pc = 0x2CE680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE67Cu;
            // 0x2ce680: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE684u; }
        if (ctx->pc != 0x2CE684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE684u; }
        if (ctx->pc != 0x2CE684u) { return; }
    }
    ctx->pc = 0x2CE684u;
label_2ce684:
    // 0x2ce684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce688:
    // 0x2ce688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce68c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce690: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE690u;
            // 0x2ce694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE698u;
}
