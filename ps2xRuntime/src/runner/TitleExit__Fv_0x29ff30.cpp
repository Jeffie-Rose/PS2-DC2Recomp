#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleExit__Fv
// Address: 0x29ff30 - 0x29ff94
void TitleExit__Fv_0x29ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleExit__Fv_0x29ff30");
#endif

    switch (ctx->pc) {
        case 0x29ff40u: goto label_29ff40;
        case 0x29ff5cu: goto label_29ff5c;
        case 0x29ff64u: goto label_29ff64;
        case 0x29ff70u: goto label_29ff70;
        case 0x29ff7cu: goto label_29ff7c;
        case 0x29ff88u: goto label_29ff88;
        default: break;
    }

    ctx->pc = 0x29ff30u;

    // 0x29ff30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ff34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ff38: 0xc0a7c40  jal         func_29F100
    ctx->pc = 0x29FF38u;
    SET_GPR_U32(ctx, 31, 0x29FF40u);
    ctx->pc = 0x29F100u;
    if (runtime->hasFunction(0x29F100u)) {
        auto targetFn = runtime->lookupFunction(0x29F100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF40u; }
        if (ctx->pc != 0x29FF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckOmakeFlag__Fv_0x29f100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF40u; }
        if (ctx->pc != 0x29FF40u) { return; }
    }
    ctx->pc = 0x29FF40u;
label_29ff40:
    // 0x29ff40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29FF40u;
    {
        const bool branch_taken_0x29ff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF40u;
            // 0x29ff44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff40) {
            ctx->pc = 0x29FF4Cu;
            goto label_29ff4c;
        }
    }
    ctx->pc = 0x29FF48u;
    // 0x29ff48: 0xaf828ad4  sw          $v0, -0x752C($gp)
    ctx->pc = 0x29ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937300), GPR_U32(ctx, 2));
label_29ff4c:
    // 0x29ff4c: 0x8f858ad4  lw          $a1, -0x752C($gp)
    ctx->pc = 0x29ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x29ff50: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x29ff54: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x29FF54u;
    SET_GPR_U32(ctx, 31, 0x29FF5Cu);
    ctx->pc = 0x29FF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF54u;
            // 0x29ff58: 0x2484e120  addiu       $a0, $a0, -0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF5Cu; }
        if (ctx->pc != 0x29FF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF5Cu; }
        if (ctx->pc != 0x29FF5Cu) { return; }
    }
    ctx->pc = 0x29FF5Cu;
label_29ff5c:
    // 0x29ff5c: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x29FF5Cu;
    SET_GPR_U32(ctx, 31, 0x29FF64u);
    ctx->pc = 0x29FF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF5Cu;
            // 0x29ff60: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF64u; }
        if (ctx->pc != 0x29FF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF64u; }
        if (ctx->pc != 0x29FF64u) { return; }
    }
    ctx->pc = 0x29FF64u;
label_29ff64:
    // 0x29ff64: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x29ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x29ff68: 0xc052d40  jal         func_14B500
    ctx->pc = 0x29FF68u;
    SET_GPR_U32(ctx, 31, 0x29FF70u);
    ctx->pc = 0x29FF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF68u;
            // 0x29ff6c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B500u;
    if (runtime->hasFunction(0x14B500u)) {
        auto targetFn = runtime->lookupFunction(0x14B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF70u; }
        if (ctx->pc != 0x29FF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoRepeatOff__8CGamePadFv_0x14b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF70u; }
        if (ctx->pc != 0x29FF70u) { return; }
    }
    ctx->pc = 0x29FF70u;
label_29ff70:
    // 0x29ff70: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x29ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x29ff74: 0xc052d48  jal         func_14B520
    ctx->pc = 0x29FF74u;
    SET_GPR_U32(ctx, 31, 0x29FF7Cu);
    ctx->pc = 0x29FF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF74u;
            // 0x29ff78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF7Cu; }
        if (ctx->pc != 0x29FF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOff__8CGamePadFv_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF7Cu; }
        if (ctx->pc != 0x29FF7Cu) { return; }
    }
    ctx->pc = 0x29FF7Cu;
label_29ff7c:
    // 0x29ff7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ff80: 0xc05188c  jal         func_146230
    ctx->pc = 0x29FF80u;
    SET_GPR_U32(ctx, 31, 0x29FF88u);
    ctx->pc = 0x29FF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF80u;
            // 0x29ff84: 0xaf828760  sw          $v0, -0x78A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146230u;
    if (runtime->hasFunction(0x146230u)) {
        auto targetFn = runtime->lookupFunction(0x146230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF88u; }
        if (ctx->pc != 0x29FF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCloseFont__Fv_0x146230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF88u; }
        if (ctx->pc != 0x29FF88u) { return; }
    }
    ctx->pc = 0x29FF88u;
label_29ff88:
    // 0x29ff88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ff88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ff8c: 0x3e00008  jr          $ra
    ctx->pc = 0x29FF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF8Cu;
            // 0x29ff90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FF94u;
}
