#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_mg_tanime.cpp
// Address: 0x373410 - 0x373438
void ps2___sinit_mg_tanime_cpp_0x373410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_mg_tanime_cpp_0x373410");
#endif

    switch (ctx->pc) {
        case 0x373428u: goto label_373428;
        default: break;
    }

    ctx->pc = 0x373410u;

    // 0x373410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373418: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x373418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x37341c: 0x24840e70  addiu       $a0, $a0, 0xE70
    ctx->pc = 0x37341cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3696));
    // 0x373420: 0xc04ef34  jal         func_13BCD0
    ctx->pc = 0x373420u;
    SET_GPR_U32(ctx, 31, 0x373428u);
    ctx->pc = 0x13BCD0u;
    if (runtime->hasFunction(0x13BCD0u)) {
        auto targetFn = runtime->lookupFunction(0x13BCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373428u; }
        if (ctx->pc != 0x373428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15mgCTexAnimeDataFv_0x13bcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373428u; }
        if (ctx->pc != 0x373428u) { return; }
    }
    ctx->pc = 0x373428u;
label_373428:
    // 0x373428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37342c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37342cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373430: 0x3e00008  jr          $ra
    ctx->pc = 0x373430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x373438u;
}
