#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sprint
// Address: 0x12a990 - 0x12a9d4
void ps2___sprint_0x12a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sprint_0x12a990");
#endif

    switch (ctx->pc) {
        case 0x12a9bcu: goto label_12a9bc;
        default: break;
    }

    ctx->pc = 0x12a990u;

    // 0x12a990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12a994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12a99c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12a99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a9a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A9A4u;
    {
        const bool branch_taken_0x12a9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A9A4u;
            // 0x12a9a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9a4) {
            ctx->pc = 0x12A9B4u;
            goto label_12a9b4;
        }
    }
    ctx->pc = 0x12A9ACu;
    // 0x12a9ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12A9ACu;
    {
        const bool branch_taken_0x12a9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A9ACu;
            // 0x12a9b0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9ac) {
            ctx->pc = 0x12A9C4u;
            goto label_12a9c4;
        }
    }
    ctx->pc = 0x12A9B4u;
label_12a9b4:
    // 0x12a9b4: 0xc04975c  jal         func_125D70
    ctx->pc = 0x12A9B4u;
    SET_GPR_U32(ctx, 31, 0x12A9BCu);
    ctx->pc = 0x12A9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A9B4u;
            // 0x12a9b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D70u;
    if (runtime->hasFunction(0x125D70u)) {
        auto targetFn = runtime->lookupFunction(0x125D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A9BCu; }
        if (ctx->pc != 0x12A9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sfvwrite_0x125d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A9BCu; }
        if (ctx->pc != 0x12A9BCu) { return; }
    }
    ctx->pc = 0x12A9BCu;
label_12a9bc:
    // 0x12a9bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12a9c0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_12a9c4:
    // 0x12a9c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a9c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12A9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A9CCu;
            // 0x12a9d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A9D4u;
}
