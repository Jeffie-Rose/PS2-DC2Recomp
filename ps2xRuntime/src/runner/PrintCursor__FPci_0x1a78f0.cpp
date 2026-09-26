#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrintCursor__FPci
// Address: 0x1a78f0 - 0x1a792c
void PrintCursor__FPci_0x1a78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrintCursor__FPci_0x1a78f0");
#endif

    switch (ctx->pc) {
        case 0x1a7910u: goto label_1a7910;
        case 0x1a7920u: goto label_1a7920;
        default: break;
    }

    ctx->pc = 0x1a78f0u;

    // 0x1a78f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a78f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a78f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a78f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a78f8: 0x8f828c18  lw          $v0, -0x73E8($gp)
    ctx->pc = 0x1a78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
    // 0x1a78fc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A78FCu;
    {
        const bool branch_taken_0x1a78fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A7900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78FCu;
            // 0x1a7900: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78fc) {
            ctx->pc = 0x1A7918u;
            goto label_1a7918;
        }
    }
    ctx->pc = 0x1A7904u;
    // 0x1a7904: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a7904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a7908: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A7908u;
    SET_GPR_U32(ctx, 31, 0x1A7910u);
    ctx->pc = 0x1A790Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7908u;
            // 0x1a790c: 0x24a55de8  addiu       $a1, $a1, 0x5DE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7910u; }
        if (ctx->pc != 0x1A7910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7910u; }
        if (ctx->pc != 0x1A7910u) { return; }
    }
    ctx->pc = 0x1A7910u;
label_1a7910:
    // 0x1a7910: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7910u;
    {
        const bool branch_taken_0x1a7910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7910u;
            // 0x1a7914: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7910) {
            ctx->pc = 0x1A7924u;
            goto label_1a7924;
        }
    }
    ctx->pc = 0x1A7918u;
label_1a7918:
    // 0x1a7918: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1A7918u;
    SET_GPR_U32(ctx, 31, 0x1A7920u);
    ctx->pc = 0x1A791Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7918u;
            // 0x1a791c: 0x24a55df0  addiu       $a1, $a1, 0x5DF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7920u; }
        if (ctx->pc != 0x1A7920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7920u; }
        if (ctx->pc != 0x1A7920u) { return; }
    }
    ctx->pc = 0x1A7920u;
label_1a7920:
    // 0x1a7920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7924:
    // 0x1a7924: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7924u;
            // 0x1a7928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A792Cu;
}
