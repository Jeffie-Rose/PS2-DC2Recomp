#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__15mgCTexAnimeDataFv
// Address: 0x13bcd0 - 0x13bd00
void ps2___ct__15mgCTexAnimeDataFv_0x13bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__15mgCTexAnimeDataFv_0x13bcd0");
#endif

    switch (ctx->pc) {
        case 0x13bce8u: goto label_13bce8;
        default: break;
    }

    ctx->pc = 0x13bcd0u;

    // 0x13bcd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13bcd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13bcd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bcdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13bcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bce0: 0xc04ef40  jal         func_13BD00
    ctx->pc = 0x13BCE0u;
    SET_GPR_U32(ctx, 31, 0x13BCE8u);
    ctx->pc = 0x13BD00u;
    if (runtime->hasFunction(0x13BD00u)) {
        auto targetFn = runtime->lookupFunction(0x13BD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BCE8u; }
        if (ctx->pc != 0x13BCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15mgCTexAnimeDataFv_0x13bd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BCE8u; }
        if (ctx->pc != 0x13BCE8u) { return; }
    }
    ctx->pc = 0x13BCE8u;
label_13bce8:
    // 0x13bce8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13bce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bcec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13bcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bcf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bcf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bcf4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13bcf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13bcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x13BCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BD00u;
}
