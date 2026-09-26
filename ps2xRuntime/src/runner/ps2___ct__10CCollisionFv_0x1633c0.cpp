#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10CCollisionFv
// Address: 0x1633c0 - 0x1633f4
void ps2___ct__10CCollisionFv_0x1633c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10CCollisionFv_0x1633c0");
#endif

    switch (ctx->pc) {
        case 0x1633e0u: goto label_1633e0;
        default: break;
    }

    ctx->pc = 0x1633c0u;

    // 0x1633c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1633c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1633c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1633c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1633c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1633c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1633cc: 0x24425270  addiu       $v0, $v0, 0x5270
    ctx->pc = 0x1633ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
    // 0x1633d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1633d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1633d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1633d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1633d8: 0xc05218c  jal         func_148630
    ctx->pc = 0x1633D8u;
    SET_GPR_U32(ctx, 31, 0x1633E0u);
    ctx->pc = 0x1633DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1633D8u;
            // 0x1633dc: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148630u;
    if (runtime->hasFunction(0x148630u)) {
        auto targetFn = runtime->lookupFunction(0x148630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1633E0u; }
        if (ctx->pc != 0x1633E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CCollisionFv_0x148630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1633E0u; }
        if (ctx->pc != 0x1633E0u) { return; }
    }
    ctx->pc = 0x1633E0u;
label_1633e0:
    // 0x1633e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1633e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1633e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1633e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1633e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1633e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1633ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1633ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1633F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633ECu;
            // 0x1633f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1633F4u;
}
