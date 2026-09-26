#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgNormalizeVector__FPfPff
// Address: 0x12f410 - 0x12f454
void mgNormalizeVector__FPfPff_0x12f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgNormalizeVector__FPfPff_0x12f410");
#endif

    switch (ctx->pc) {
        case 0x12f430u: goto label_12f430;
        case 0x12f440u: goto label_12f440;
        default: break;
    }

    ctx->pc = 0x12f410u;

    // 0x12f410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f418: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12f418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12f41c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x12f41cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12f420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f424: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12f424u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x12f428: 0xc041be0  jal         func_106F80
    ctx->pc = 0x12F428u;
    SET_GPR_U32(ctx, 31, 0x12F430u);
    ctx->pc = 0x12F42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F428u;
            // 0x12f42c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F430u; }
        if (ctx->pc != 0x12F430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F430u; }
        if (ctx->pc != 0x12F430u) { return; }
    }
    ctx->pc = 0x12F430u;
label_12f430:
    // 0x12f430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f434: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12f434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f438: 0xc041c4a  jal         func_107128
    ctx->pc = 0x12F438u;
    SET_GPR_U32(ctx, 31, 0x12F440u);
    ctx->pc = 0x12F43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F438u;
            // 0x12f43c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F440u; }
        if (ctx->pc != 0x12F440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F440u; }
        if (ctx->pc != 0x12F440u) { return; }
    }
    ctx->pc = 0x12F440u;
label_12f440:
    // 0x12f440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f444: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12f448: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12f448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f44c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F44Cu;
            // 0x12f450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F454u;
}
