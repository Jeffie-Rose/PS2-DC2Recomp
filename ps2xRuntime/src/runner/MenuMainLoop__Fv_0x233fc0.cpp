#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMainLoop__Fv
// Address: 0x233fc0 - 0x233fec
void MenuMainLoop__Fv_0x233fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMainLoop__Fv_0x233fc0");
#endif

    switch (ctx->pc) {
        case 0x233fd0u: goto label_233fd0;
        case 0x233fd8u: goto label_233fd8;
        default: break;
    }

    ctx->pc = 0x233fc0u;

    // 0x233fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x233fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x233fc8: 0xc08cffc  jal         func_233FF0
    ctx->pc = 0x233FC8u;
    SET_GPR_U32(ctx, 31, 0x233FD0u);
    ctx->pc = 0x233FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233FC8u;
            // 0x233fcc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233FF0u;
    if (runtime->hasFunction(0x233FF0u)) {
        auto targetFn = runtime->lookupFunction(0x233FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233FD0u; }
        if (ctx->pc != 0x233FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainKey__Fv_0x233ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233FD0u; }
        if (ctx->pc != 0x233FD0u) { return; }
    }
    ctx->pc = 0x233FD0u;
label_233fd0:
    // 0x233fd0: 0xc08d0a4  jal         func_234290
    ctx->pc = 0x233FD0u;
    SET_GPR_U32(ctx, 31, 0x233FD8u);
    ctx->pc = 0x233FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233FD0u;
            // 0x233fd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234290u;
    if (runtime->hasFunction(0x234290u)) {
        auto targetFn = runtime->lookupFunction(0x234290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233FD8u; }
        if (ctx->pc != 0x233FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainDraw__Fv_0x234290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233FD8u; }
        if (ctx->pc != 0x233FD8u) { return; }
    }
    ctx->pc = 0x233FD8u;
label_233fd8:
    // 0x233fd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x233fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x233fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x233fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x233FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FE4u;
            // 0x233fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x233FECu;
}
