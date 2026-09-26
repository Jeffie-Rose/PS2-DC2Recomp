#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgInitFont__Fv
// Address: 0x1461e0 - 0x146228
void mgInitFont__Fv_0x1461e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgInitFont__Fv_0x1461e0");
#endif

    switch (ctx->pc) {
        case 0x1461f0u: goto label_1461f0;
        case 0x146214u: goto label_146214;
        default: break;
    }

    ctx->pc = 0x1461e0u;

    // 0x1461e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1461e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1461e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1461e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1461e8: 0xc041396  jal         func_104E58
    ctx->pc = 0x1461E8u;
    SET_GPR_U32(ctx, 31, 0x1461F0u);
    ctx->pc = 0x104E58u;
    if (runtime->hasFunction(0x104E58u)) {
        auto targetFn = runtime->lookupFunction(0x104E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461F0u; }
        if (ctx->pc != 0x1461F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsInit_0x104e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461F0u; }
        if (ctx->pc != 0x1461F0u) { return; }
    }
    ctx->pc = 0x1461F0u;
label_1461f0:
    // 0x1461f0: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x1461f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x1461f4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1461f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1461f8: 0x8f82879c  lw          $v0, -0x7864($gp)
    ctx->pc = 0x1461f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x1461fc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1461fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x146200: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x146200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x146204: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x146204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x146208: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x146208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14620c: 0xc0413a4  jal         func_104E90
    ctx->pc = 0x14620Cu;
    SET_GPR_U32(ctx, 31, 0x146214u);
    ctx->pc = 0x146210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14620Cu;
            // 0x146210: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104E90u;
    if (runtime->hasFunction(0x104E90u)) {
        auto targetFn = runtime->lookupFunction(0x104E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146214u; }
        if (ctx->pc != 0x146214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsOpen_0x104e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146214u; }
        if (ctx->pc != 0x146214u) { return; }
    }
    ctx->pc = 0x146214u;
label_146214:
    // 0x146214: 0xaf828018  sw          $v0, -0x7FE8($gp)
    ctx->pc = 0x146214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 2));
    // 0x146218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14621c: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x14621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x146220: 0x3e00008  jr          $ra
    ctx->pc = 0x146220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146220u;
            // 0x146224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146228u;
}
