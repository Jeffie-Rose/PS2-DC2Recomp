#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetHalfFontNo__5CFontFc
// Address: 0x2d48b0 - 0x2d48d8
void GetHalfFontNo__5CFontFc_0x2d48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetHalfFontNo__5CFontFc_0x2d48b0");
#endif

    switch (ctx->pc) {
        case 0x2d48ccu: goto label_2d48cc;
        default: break;
    }

    ctx->pc = 0x2d48b0u;

    // 0x2d48b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d48b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d48b4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d48b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d48b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d48bc: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2d48bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2d48c0: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x2d48c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d48c4: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D48C4u;
    SET_GPR_U32(ctx, 31, 0x2D48CCu);
    ctx->pc = 0x2D48C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D48C4u;
            // 0x2d48c8: 0xa3a20019  sb          $v0, 0x19($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D48CCu; }
        if (ctx->pc != 0x2D48CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D48CCu; }
        if (ctx->pc != 0x2D48CCu) { return; }
    }
    ctx->pc = 0x2D48CCu;
label_2d48cc:
    // 0x2d48cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d48ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d48d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D48D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D48D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D48D0u;
            // 0x2d48d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D48D8u;
}
