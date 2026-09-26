#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteTexAnimeGroup__17mgCTextureManagerFii
// Address: 0x12f100 - 0x12f14c
void DeleteTexAnimeGroup__17mgCTextureManagerFii_0x12f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteTexAnimeGroup__17mgCTextureManagerFii_0x12f100");
#endif

    switch (ctx->pc) {
        case 0x12f118u: goto label_12f118;
        case 0x12f138u: goto label_12f138;
        default: break;
    }

    ctx->pc = 0x12f100u;

    // 0x12f100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12f104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12f108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f10c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12f10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f110: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x12F110u;
    SET_GPR_U32(ctx, 31, 0x12F118u);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F118u; }
        if (ctx->pc != 0x12F118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F118u; }
        if (ctx->pc != 0x12F118u) { return; }
    }
    ctx->pc = 0x12F118u;
label_12f118:
    // 0x12f118: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F118u;
    {
        const bool branch_taken_0x12f118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f118) {
            ctx->pc = 0x12F138u;
            goto label_12f138;
        }
    }
    ctx->pc = 0x12F120u;
    // 0x12f120: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12f120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12f124: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F124u;
    {
        const bool branch_taken_0x12f124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f124) {
            ctx->pc = 0x12F138u;
            goto label_12f138;
        }
    }
    ctx->pc = 0x12F12Cu;
    // 0x12f12c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12f12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f130: 0xc04f5cc  jal         func_13D730
    ctx->pc = 0x12F130u;
    SET_GPR_U32(ctx, 31, 0x12F138u);
    ctx->pc = 0x13D730u;
    if (runtime->hasFunction(0x13D730u)) {
        auto targetFn = runtime->lookupFunction(0x13D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F138u; }
        if (ctx->pc != 0x12F138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteGroup__15mgCTextureAnimeFi_0x13d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F138u; }
        if (ctx->pc != 0x12F138u) { return; }
    }
    ctx->pc = 0x12F138u;
label_12f138:
    // 0x12f138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12f138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f13c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f140: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f144: 0x3e00008  jr          $ra
    ctx->pc = 0x12F144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F14Cu;
}
