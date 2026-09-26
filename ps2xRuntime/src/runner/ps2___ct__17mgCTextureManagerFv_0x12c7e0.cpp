#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__17mgCTextureManagerFv
// Address: 0x12c7e0 - 0x12c824
void ps2___ct__17mgCTextureManagerFv_0x12c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__17mgCTextureManagerFv_0x12c7e0");
#endif

    switch (ctx->pc) {
        case 0x12c7fcu: goto label_12c7fc;
        default: break;
    }

    ctx->pc = 0x12c7e0u;

    // 0x12c7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c7e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12c7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7f0: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x12c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x12c7f4: 0xc04b1b4  jal         func_12C6D0
    ctx->pc = 0x12C7F4u;
    SET_GPR_U32(ctx, 31, 0x12C7FCu);
    ctx->pc = 0x12C6D0u;
    if (runtime->hasFunction(0x12C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7FCu; }
        if (ctx->pc != 0x12C7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15mgCTextureBlockFv_0x12c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7FCu; }
        if (ctx->pc != 0x12C7FCu) { return; }
    }
    ctx->pc = 0x12C7FCu;
label_12c7fc:
    // 0x12c7fc: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x12c7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    // 0x12c800: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x12c800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x12c804: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12c804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12c808: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x12c808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x12c80c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12c80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c818: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12c818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12c81c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C824u;
}
