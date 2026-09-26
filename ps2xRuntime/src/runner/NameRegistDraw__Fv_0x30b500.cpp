#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NameRegistDraw__Fv
// Address: 0x30b500 - 0x30b544
void NameRegistDraw__Fv_0x30b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NameRegistDraw__Fv_0x30b500");
#endif

    switch (ctx->pc) {
        case 0x30b518u: goto label_30b518;
        case 0x30b520u: goto label_30b520;
        case 0x30b528u: goto label_30b528;
        case 0x30b530u: goto label_30b530;
        case 0x30b538u: goto label_30b538;
        default: break;
    }

    ctx->pc = 0x30b500u;

    // 0x30b500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30b504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30b504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30b508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b50c: 0x8f84a1d8  lw          $a0, -0x5E28($gp)
    ctx->pc = 0x30b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
    // 0x30b510: 0xc0c34d0  jal         func_30D340
    ctx->pc = 0x30B510u;
    SET_GPR_U32(ctx, 31, 0x30B518u);
    ctx->pc = 0x30B514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B510u;
            // 0x30b514: 0xaf82a1dc  sw          $v0, -0x5E24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D340u;
    if (runtime->hasFunction(0x30D340u)) {
        auto targetFn = runtime->lookupFunction(0x30D340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B518u; }
        if (ctx->pc != 0x30B518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBaseBoard__13CNameRegiMenuFv_0x30d340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B518u; }
        if (ctx->pc != 0x30B518u) { return; }
    }
    ctx->pc = 0x30B518u;
label_30b518:
    // 0x30b518: 0xc0c3858  jal         func_30E160
    ctx->pc = 0x30B518u;
    SET_GPR_U32(ctx, 31, 0x30B520u);
    ctx->pc = 0x30B51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B518u;
            // 0x30b51c: 0x8f84a1d8  lw          $a0, -0x5E28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E160u;
    if (runtime->hasFunction(0x30E160u)) {
        auto targetFn = runtime->lookupFunction(0x30E160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B520u; }
        if (ctx->pc != 0x30B520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSelectedWord__13CNameRegiMenuFv_0x30e160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B520u; }
        if (ctx->pc != 0x30B520u) { return; }
    }
    ctx->pc = 0x30B520u;
label_30b520:
    // 0x30b520: 0xc0c361c  jal         func_30D870
    ctx->pc = 0x30B520u;
    SET_GPR_U32(ctx, 31, 0x30B528u);
    ctx->pc = 0x30B524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B520u;
            // 0x30b524: 0x8f84a1d8  lw          $a0, -0x5E28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D870u;
    if (runtime->hasFunction(0x30D870u)) {
        auto targetFn = runtime->lookupFunction(0x30D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B528u; }
        if (ctx->pc != 0x30B528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawActiveFont__13CNameRegiMenuFv_0x30d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B528u; }
        if (ctx->pc != 0x30B528u) { return; }
    }
    ctx->pc = 0x30B528u;
label_30b528:
    // 0x30b528: 0xc0c3828  jal         func_30E0A0
    ctx->pc = 0x30B528u;
    SET_GPR_U32(ctx, 31, 0x30B530u);
    ctx->pc = 0x30B52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B528u;
            // 0x30b52c: 0x8f84a1d8  lw          $a0, -0x5E28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E0A0u;
    if (runtime->hasFunction(0x30E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x30E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B530u; }
        if (ctx->pc != 0x30B530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMarkCursor__13CNameRegiMenuFv_0x30e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B530u; }
        if (ctx->pc != 0x30B530u) { return; }
    }
    ctx->pc = 0x30B530u;
label_30b530:
    // 0x30b530: 0xc0c3900  jal         func_30E400
    ctx->pc = 0x30B530u;
    SET_GPR_U32(ctx, 31, 0x30B538u);
    ctx->pc = 0x30B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B530u;
            // 0x30b534: 0x8f84a1d8  lw          $a0, -0x5E28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E400u;
    if (runtime->hasFunction(0x30E400u)) {
        auto targetFn = runtime->lookupFunction(0x30E400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B538u; }
        if (ctx->pc != 0x30B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMessage__13CNameRegiMenuFv_0x30e400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B538u; }
        if (ctx->pc != 0x30B538u) { return; }
    }
    ctx->pc = 0x30B538u;
label_30b538:
    // 0x30b538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b53c: 0x3e00008  jr          $ra
    ctx->pc = 0x30B53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B53Cu;
            // 0x30b540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B544u;
}
