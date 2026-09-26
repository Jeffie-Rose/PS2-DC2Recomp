#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuildEditParts__8CEditMapFi
// Address: 0x1b14a0 - 0x1b14e4
void BuildEditParts__8CEditMapFi_0x1b14a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildEditParts__8CEditMapFi_0x1b14a0");
#endif

    switch (ctx->pc) {
        case 0x1b14b4u: goto label_1b14b4;
        case 0x1b14c8u: goto label_1b14c8;
        default: break;
    }

    ctx->pc = 0x1b14a0u;

    // 0x1b14a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b14a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b14a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b14a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b14a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b14a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b14ac: 0xc06c2d4  jal         func_1B0B50
    ctx->pc = 0x1B14ACu;
    SET_GPR_U32(ctx, 31, 0x1B14B4u);
    ctx->pc = 0x1B14B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14ACu;
            // 0x1b14b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14B4u; }
        if (ctx->pc != 0x1B14B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14B4u; }
        if (ctx->pc != 0x1B14B4u) { return; }
    }
    ctx->pc = 0x1B14B4u;
label_1b14b4:
    // 0x1b14b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B14B4u;
    {
        const bool branch_taken_0x1b14b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b14b4) {
            ctx->pc = 0x1B14D0u;
            goto label_1b14d0;
        }
    }
    ctx->pc = 0x1B14BCu;
    // 0x1b14bc: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1b14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1b14c0: 0xc06c58c  jal         func_1B1630
    ctx->pc = 0x1B14C0u;
    SET_GPR_U32(ctx, 31, 0x1B14C8u);
    ctx->pc = 0x1B14C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14C0u;
            // 0x1b14c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1630u;
    if (runtime->hasFunction(0x1B1630u)) {
        auto targetFn = runtime->lookupFunction(0x1B1630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14C8u; }
        if (ctx->pc != 0x1B14C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildEditParts__8CEditMapFPc_0x1b1630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B14C8u; }
        if (ctx->pc != 0x1B14C8u) { return; }
    }
    ctx->pc = 0x1B14C8u;
label_1b14c8:
    // 0x1b14c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B14C8u;
    {
        const bool branch_taken_0x1b14c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B14CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14C8u;
            // 0x1b14cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14c8) {
            ctx->pc = 0x1B14D8u;
            goto label_1b14d8;
        }
    }
    ctx->pc = 0x1B14D0u;
label_1b14d0:
    // 0x1b14d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b14d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b14d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b14d8:
    // 0x1b14d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b14d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b14dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B14DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B14DCu;
            // 0x1b14e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B14E4u;
}
