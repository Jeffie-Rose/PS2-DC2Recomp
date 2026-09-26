#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetReadBGInfo__FPc
// Address: 0x251410 - 0x25144c
void GetReadBGInfo__FPc_0x251410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetReadBGInfo__FPc_0x251410");
#endif

    switch (ctx->pc) {
        case 0x251428u: goto label_251428;
        case 0x251434u: goto label_251434;
        case 0x25143cu: goto label_25143c;
        default: break;
    }

    ctx->pc = 0x251410u;

    // 0x251410: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x251410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x251414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25141c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25141cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251420: 0xc0521f0  jal         func_1487C0
    ctx->pc = 0x251420u;
    SET_GPR_U32(ctx, 31, 0x251428u);
    ctx->pc = 0x251424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251420u;
            // 0x251424: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1487C0u;
    if (runtime->hasFunction(0x1487C0u)) {
        auto targetFn = runtime->lookupFunction(0x1487C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251428u; }
        if (ctx->pc != 0x251428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCurrentDir__FPc_0x1487c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251428u; }
        if (ctx->pc != 0x251428u) { return; }
    }
    ctx->pc = 0x251428u;
label_251428:
    // 0x251428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x251428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25142c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x25142Cu;
    SET_GPR_U32(ctx, 31, 0x251434u);
    ctx->pc = 0x251430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25142Cu;
            // 0x251430: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251434u; }
        if (ctx->pc != 0x251434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251434u; }
        if (ctx->pc != 0x251434u) { return; }
    }
    ctx->pc = 0x251434u;
label_251434:
    // 0x251434: 0xc0522fc  jal         func_148BF0
    ctx->pc = 0x251434u;
    SET_GPR_U32(ctx, 31, 0x25143Cu);
    ctx->pc = 0x251438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251434u;
            // 0x251438: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148BF0u;
    if (runtime->hasFunction(0x148BF0u)) {
        auto targetFn = runtime->lookupFunction(0x148BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25143Cu; }
        if (ctx->pc != 0x25143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__FPc_0x148bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25143Cu; }
        if (ctx->pc != 0x25143Cu) { return; }
    }
    ctx->pc = 0x25143Cu;
label_25143c:
    // 0x25143c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25143cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251444: 0x3e00008  jr          $ra
    ctx->pc = 0x251444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251444u;
            // 0x251448: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25144Cu;
}
