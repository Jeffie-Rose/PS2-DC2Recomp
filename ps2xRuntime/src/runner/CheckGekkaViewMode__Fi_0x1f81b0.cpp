#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckGekkaViewMode__Fi
// Address: 0x1f81b0 - 0x1f81e8
void CheckGekkaViewMode__Fi_0x1f81b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckGekkaViewMode__Fi_0x1f81b0");
#endif

    switch (ctx->pc) {
        case 0x1f81c8u: goto label_1f81c8;
        default: break;
    }

    ctx->pc = 0x1f81b0u;

    // 0x1f81b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f81b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f81b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f81b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f81b8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F81B8u;
    {
        const bool branch_taken_0x1f81b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F81BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F81B8u;
            // 0x1f81bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81b8) {
            ctx->pc = 0x1F81D8u;
            goto label_1f81d8;
        }
    }
    ctx->pc = 0x1F81C0u;
    // 0x1f81c0: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x1F81C0u;
    SET_GPR_U32(ctx, 31, 0x1F81C8u);
    ctx->pc = 0x1F81C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F81C0u;
            // 0x1f81c4: 0x240402be  addiu       $a0, $zero, 0x2BE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 702));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F81C8u; }
        if (ctx->pc != 0x1F81C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F81C8u; }
        if (ctx->pc != 0x1F81C8u) { return; }
    }
    ctx->pc = 0x1F81C8u;
label_1f81c8:
    // 0x1f81c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F81C8u;
    {
        const bool branch_taken_0x1f81c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F81CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F81C8u;
            // 0x1f81cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81c8) {
            ctx->pc = 0x1F81DCu;
            goto label_1f81dc;
        }
    }
    ctx->pc = 0x1F81D0u;
    // 0x1f81d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F81D0u;
    {
        const bool branch_taken_0x1f81d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F81D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F81D0u;
            // 0x1f81d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81d0) {
            ctx->pc = 0x1F81DCu;
            goto label_1f81dc;
        }
    }
    ctx->pc = 0x1F81D8u;
label_1f81d8:
    // 0x1f81d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f81d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f81dc:
    // 0x1f81dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f81dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f81e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F81E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F81E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F81E0u;
            // 0x1f81e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F81E8u;
}
