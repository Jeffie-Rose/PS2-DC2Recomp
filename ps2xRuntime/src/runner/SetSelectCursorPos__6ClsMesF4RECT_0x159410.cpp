#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSelectCursorPos__6ClsMesF4RECT
// Address: 0x159410 - 0x159454
void SetSelectCursorPos__6ClsMesF4RECT_0x159410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSelectCursorPos__6ClsMesF4RECT_0x159410");
#endif

    switch (ctx->pc) {
        case 0x159448u: goto label_159448;
        default: break;
    }

    ctx->pc = 0x159410u;

    // 0x159410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159414: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x159414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15941c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159420: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x159420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159424: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x159424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159428: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x159428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15942c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x15942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159430: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x159430u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x159434: 0x24451b04  addiu       $a1, $v0, 0x1B04
    ctx->pc = 0x159434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6916));
    // 0x159438: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x159438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15943c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x15943cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x159440: 0xc0b5838  jal         func_2D60E0
    ctx->pc = 0x159440u;
    SET_GPR_U32(ctx, 31, 0x159448u);
    ctx->pc = 0x159444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159440u;
            // 0x159444: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D60E0u;
    if (runtime->hasFunction(0x2D60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159448u; }
        if (ctx->pc != 0x159448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcSelectCursorPos__F4RECTPi_0x2d60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159448u; }
        if (ctx->pc != 0x159448u) { return; }
    }
    ctx->pc = 0x159448u;
label_159448:
    // 0x159448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15944c: 0x3e00008  jr          $ra
    ctx->pc = 0x15944Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15944Cu;
            // 0x159450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159454u;
}
