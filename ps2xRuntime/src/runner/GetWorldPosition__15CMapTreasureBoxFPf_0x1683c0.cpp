#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWorldPosition__15CMapTreasureBoxFPf
// Address: 0x1683c0 - 0x168408
void GetWorldPosition__15CMapTreasureBoxFPf_0x1683c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWorldPosition__15CMapTreasureBoxFPf_0x1683c0");
#endif

    switch (ctx->pc) {
        case 0x1683e0u: goto label_1683e0;
        case 0x1683f4u: goto label_1683f4;
        default: break;
    }

    ctx->pc = 0x1683c0u;

    // 0x1683c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1683c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1683c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1683c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1683c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1683c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1683cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1683ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1683d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1683d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1683d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683d8: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x1683D8u;
    SET_GPR_U32(ctx, 31, 0x1683E0u);
    ctx->pc = 0x1683DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1683D8u;
            // 0x1683dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683E0u; }
        if (ctx->pc != 0x1683E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683E0u; }
        if (ctx->pc != 0x1683E0u) { return; }
    }
    ctx->pc = 0x1683E0u;
label_1683e0:
    // 0x1683e0: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1683e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1683e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1683E4u;
    {
        const bool branch_taken_0x1683e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1683E4u;
            // 0x1683e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683e4) {
            ctx->pc = 0x1683F4u;
            goto label_1683f4;
        }
    }
    ctx->pc = 0x1683ECu;
    // 0x1683ec: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1683ECu;
    SET_GPR_U32(ctx, 31, 0x1683F4u);
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683F4u; }
        if (ctx->pc != 0x1683F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683F4u; }
        if (ctx->pc != 0x1683F4u) { return; }
    }
    ctx->pc = 0x1683F4u;
label_1683f4:
    // 0x1683f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1683f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1683f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1683f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1683fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1683fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168400: 0x3e00008  jr          $ra
    ctx->pc = 0x168400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168400u;
            // 0x168404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168408u;
}
