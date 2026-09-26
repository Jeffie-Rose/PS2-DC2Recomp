#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MinimapDoorEnable__FPf
// Address: 0x28fcf0 - 0x28fd34
void MinimapDoorEnable__FPf_0x28fcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MinimapDoorEnable__FPf_0x28fcf0");
#endif

    switch (ctx->pc) {
        case 0x28fd10u: goto label_28fd10;
        case 0x28fd24u: goto label_28fd24;
        default: break;
    }

    ctx->pc = 0x28fcf0u;

    // 0x28fcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28fcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28fcf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28fcf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28fcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28fcfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28fcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd00: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x28fd04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd08: 0xc0764a8  jal         func_1D92A0
    ctx->pc = 0x28FD08u;
    SET_GPR_U32(ctx, 31, 0x28FD10u);
    ctx->pc = 0x28FD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD08u;
            // 0x28fd0c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D92A0u;
    if (runtime->hasFunction(0x1D92A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D92A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD10u; }
        if (ctx->pc != 0x28FD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MinimapDoorOpen__11CAutoMapGenFPf_0x1d92a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD10u; }
        if (ctx->pc != 0x28FD10u) { return; }
    }
    ctx->pc = 0x28FD10u;
label_28fd10:
    // 0x28fd10: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x28fd14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd18: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x28fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x28fd1c: 0xc076604  jal         func_1D9810
    ctx->pc = 0x28FD1Cu;
    SET_GPR_U32(ctx, 31, 0x28FD24u);
    ctx->pc = 0x28FD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD1Cu;
            // 0x28fd20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9810u;
    if (runtime->hasFunction(0x1D9810u)) {
        auto targetFn = runtime->lookupFunction(0x1D9810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD24u; }
        if (ctx->pc != 0x28FD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateNaviMap__11CAutoMapGenFPfi_0x1d9810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD24u; }
        if (ctx->pc != 0x28FD24u) { return; }
    }
    ctx->pc = 0x28FD24u;
label_28fd24:
    // 0x28fd24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28fd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fd28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28fd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x28FD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD2Cu;
            // 0x28fd30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28FD34u;
}
