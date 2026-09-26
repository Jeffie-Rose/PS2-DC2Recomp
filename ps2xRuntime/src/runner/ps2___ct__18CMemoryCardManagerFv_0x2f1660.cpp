#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__18CMemoryCardManagerFv
// Address: 0x2f1660 - 0x2f168c
void ps2___ct__18CMemoryCardManagerFv_0x2f1660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__18CMemoryCardManagerFv_0x2f1660");
#endif

    switch (ctx->pc) {
        case 0x2f1678u: goto label_2f1678;
        default: break;
    }

    ctx->pc = 0x2f1660u;

    // 0x2f1660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f166c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1670: 0xc0bc5a4  jal         func_2F1690
    ctx->pc = 0x2F1670u;
    SET_GPR_U32(ctx, 31, 0x2F1678u);
    ctx->pc = 0x2F1674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1670u;
            // 0x2f1674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1690u;
    if (runtime->hasFunction(0x2F1690u)) {
        auto targetFn = runtime->lookupFunction(0x2F1690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1678u; }
        if (ctx->pc != 0x2F1678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__18CMemoryCardManagerFP9mgCMemory_0x2f1690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1678u; }
        if (ctx->pc != 0x2F1678u) { return; }
    }
    ctx->pc = 0x2F1678u;
label_2f1678:
    // 0x2f1678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f1678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f167c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f1680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1684: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1684u;
            // 0x2f1688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F168Cu;
}
