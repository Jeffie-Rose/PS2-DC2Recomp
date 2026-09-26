#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13mgCVisualAttrFv
// Address: 0x13e7b0 - 0x13e7f0
void Initialize__13mgCVisualAttrFv_0x13e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13mgCVisualAttrFv_0x13e7b0");
#endif

    switch (ctx->pc) {
        case 0x13e7ccu: goto label_13e7cc;
        default: break;
    }

    ctx->pc = 0x13e7b0u;

    // 0x13e7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e7b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e7b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13e7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13e7bc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x13e7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13e7c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e7c4: 0xc049c86  jal         func_127218
    ctx->pc = 0x13E7C4u;
    SET_GPR_U32(ctx, 31, 0x13E7CCu);
    ctx->pc = 0x13E7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7C4u;
            // 0x13e7c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E7CCu; }
        if (ctx->pc != 0x13E7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E7CCu; }
        if (ctx->pc != 0x13E7CCu) { return; }
    }
    ctx->pc = 0x13E7CCu;
label_13e7cc:
    // 0x13e7cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e7d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e7d4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x13e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x13e7d8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x13e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x13e7dc: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x13e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x13e7e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e7e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E7E8u;
            // 0x13e7ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E7F0u;
}
