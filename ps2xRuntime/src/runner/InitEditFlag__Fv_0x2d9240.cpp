#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEditFlag__Fv
// Address: 0x2d9240 - 0x2d9284
void InitEditFlag__Fv_0x2d9240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEditFlag__Fv_0x2d9240");
#endif

    switch (ctx->pc) {
        case 0x2d9258u: goto label_2d9258;
        case 0x2d9260u: goto label_2d9260;
        case 0x2d9268u: goto label_2d9268;
        default: break;
    }

    ctx->pc = 0x2d9240u;

    // 0x2d9240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9244: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2d9244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2d9248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d924c: 0xaf829e60  sw          $v0, -0x61A0($gp)
    ctx->pc = 0x2d924cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942304), GPR_U32(ctx, 2));
    // 0x2d9250: 0xc0b6478  jal         func_2D91E0
    ctx->pc = 0x2D9250u;
    SET_GPR_U32(ctx, 31, 0x2D9258u);
    ctx->pc = 0x2D9254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9250u;
            // 0x2d9254: 0xaf809e0c  sw          $zero, -0x61F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D91E0u;
    if (runtime->hasFunction(0x2D91E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9258u; }
        if (ctx->pc != 0x2D9258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearEditFlag__Fv_0x2d91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9258u; }
        if (ctx->pc != 0x2D9258u) { return; }
    }
    ctx->pc = 0x2D9258u;
label_2d9258:
    // 0x2d9258: 0xc0beeb0  jal         func_2FBAC0
    ctx->pc = 0x2D9258u;
    SET_GPR_U32(ctx, 31, 0x2D9260u);
    ctx->pc = 0x2FBAC0u;
    if (runtime->hasFunction(0x2FBAC0u)) {
        auto targetFn = runtime->lookupFunction(0x2FBAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9260u; }
        if (ctx->pc != 0x2D9260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceAnime__Fv_0x2fbac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9260u; }
        if (ctx->pc != 0x2D9260u) { return; }
    }
    ctx->pc = 0x2D9260u;
label_2d9260:
    // 0x2d9260: 0xc0beaf8  jal         func_2FABE0
    ctx->pc = 0x2D9260u;
    SET_GPR_U32(ctx, 31, 0x2D9268u);
    ctx->pc = 0x2FABE0u;
    if (runtime->hasFunction(0x2FABE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FABE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9268u; }
        if (ctx->pc != 0x2D9268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceEffect__Fv_0x2fabe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9268u; }
        if (ctx->pc != 0x2D9268u) { return; }
    }
    ctx->pc = 0x2D9268u;
label_2d9268:
    // 0x2d9268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d926c: 0xaf809e5c  sw          $zero, -0x61A4($gp)
    ctx->pc = 0x2d926cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942300), GPR_U32(ctx, 0));
    // 0x2d9270: 0xaf839e10  sw          $v1, -0x61F0($gp)
    ctx->pc = 0x2d9270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942224), GPR_U32(ctx, 3));
    // 0x2d9274: 0xaf809e14  sw          $zero, -0x61EC($gp)
    ctx->pc = 0x2d9274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942228), GPR_U32(ctx, 0));
    // 0x2d9278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d927c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D927Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D927Cu;
            // 0x2d9280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9284u;
}
