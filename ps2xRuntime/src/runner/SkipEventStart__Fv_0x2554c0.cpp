#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SkipEventStart__Fv
// Address: 0x2554c0 - 0x255508
void SkipEventStart__Fv_0x2554c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SkipEventStart__Fv_0x2554c0");
#endif

    switch (ctx->pc) {
        case 0x2554f0u: goto label_2554f0;
        default: break;
    }

    ctx->pc = 0x2554c0u;

    // 0x2554c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2554c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2554c4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2554c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2554c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2554c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2554cc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2554ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2554d0: 0xc42ce510  lwc1        $f12, -0x1AF0($at)
    ctx->pc = 0x2554d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2554d4: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2554d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2554d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2554d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2554dc: 0xc42de514  lwc1        $f13, -0x1AEC($at)
    ctx->pc = 0x2554dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2554e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2554e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2554e4: 0xc42ee518  lwc1        $f14, -0x1AE8($at)
    ctx->pc = 0x2554e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2554e8: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2554E8u;
    SET_GPR_U32(ctx, 31, 0x2554F0u);
    ctx->pc = 0x2554ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2554E8u;
            // 0x2554ec: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2554F0u; }
        if (ctx->pc != 0x2554F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2554F0u; }
        if (ctx->pc != 0x2554F0u) { return; }
    }
    ctx->pc = 0x2554F0u;
label_2554f0:
    // 0x2554f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2554f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2554f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2554f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2554f8: 0xac23e504  sw          $v1, -0x1AFC($at)
    ctx->pc = 0x2554f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960388), GPR_U32(ctx, 3));
    // 0x2554fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2554fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255500: 0x3e00008  jr          $ra
    ctx->pc = 0x255500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255500u;
            // 0x255504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255508u;
}
