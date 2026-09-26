#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInventDraw__Fv
// Address: 0x20c8c0 - 0x20c908
void MenuInventDraw__Fv_0x20c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInventDraw__Fv_0x20c8c0");
#endif

    switch (ctx->pc) {
        case 0x20c8d0u: goto label_20c8d0;
        case 0x20c8dcu: goto label_20c8dc;
        case 0x20c8e8u: goto label_20c8e8;
        case 0x20c8fcu: goto label_20c8fc;
        default: break;
    }

    ctx->pc = 0x20c8c0u;

    // 0x20c8c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c8c8: 0xc08ad0c  jal         func_22B430
    ctx->pc = 0x20C8C8u;
    SET_GPR_U32(ctx, 31, 0x20C8D0u);
    ctx->pc = 0x20C8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C8C8u;
            // 0x20c8cc: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B430u;
    if (runtime->hasFunction(0x22B430u)) {
        auto targetFn = runtime->lookupFunction(0x22B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8D0u; }
        if (ctx->pc != 0x20C8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormDraw__14CPosDataManageFv_0x22b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8D0u; }
        if (ctx->pc != 0x20C8D0u) { return; }
    }
    ctx->pc = 0x20C8D0u;
label_20c8d0:
    // 0x20c8d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x20c8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x20c8d4: 0xc08c7b0  jal         func_231EC0
    ctx->pc = 0x20C8D4u;
    SET_GPR_U32(ctx, 31, 0x20C8DCu);
    ctx->pc = 0x20C8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C8D4u;
            // 0x20c8d8: 0x8c247ab8  lw          $a0, 0x7AB8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231EC0u;
    if (runtime->hasFunction(0x231EC0u)) {
        auto targetFn = runtime->lookupFunction(0x231EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8DCu; }
        if (ctx->pc != 0x20C8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CMenuEffectFv_0x231ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8DCu; }
        if (ctx->pc != 0x20C8DCu) { return; }
    }
    ctx->pc = 0x20C8DCu;
label_20c8dc:
    // 0x20c8dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x20c8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x20c8e0: 0xc08c7b0  jal         func_231EC0
    ctx->pc = 0x20C8E0u;
    SET_GPR_U32(ctx, 31, 0x20C8E8u);
    ctx->pc = 0x20C8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C8E0u;
            // 0x20c8e4: 0x8c247abc  lw          $a0, 0x7ABC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31420)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231EC0u;
    if (runtime->hasFunction(0x231EC0u)) {
        auto targetFn = runtime->lookupFunction(0x231EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8E8u; }
        if (ctx->pc != 0x20C8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CMenuEffectFv_0x231ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8E8u; }
        if (ctx->pc != 0x20C8E8u) { return; }
    }
    ctx->pc = 0x20C8E8u;
label_20c8e8:
    // 0x20c8e8: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x20c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x20c8ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C8ECu;
    {
        const bool branch_taken_0x20c8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8ec) {
            ctx->pc = 0x20C8FCu;
            goto label_20c8fc;
        }
    }
    ctx->pc = 0x20C8F4u;
    // 0x20c8f4: 0xc082a84  jal         func_20AA10
    ctx->pc = 0x20C8F4u;
    SET_GPR_U32(ctx, 31, 0x20C8FCu);
    ctx->pc = 0x20AA10u;
    if (runtime->hasFunction(0x20AA10u)) {
        auto targetFn = runtime->lookupFunction(0x20AA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8FCu; }
        if (ctx->pc != 0x20C8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInventDebugDraw__Fv_0x20aa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C8FCu; }
        if (ctx->pc != 0x20C8FCu) { return; }
    }
    ctx->pc = 0x20C8FCu;
label_20c8fc:
    // 0x20c8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c900: 0x3e00008  jr          $ra
    ctx->pc = 0x20C900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C900u;
            // 0x20c904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C908u;
}
