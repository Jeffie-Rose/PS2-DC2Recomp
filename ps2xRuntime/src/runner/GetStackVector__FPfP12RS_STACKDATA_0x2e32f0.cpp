#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStackVector__FPfP12RS_STACKDATA
// Address: 0x2e32f0 - 0x2e333c
void GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStackVector__FPfP12RS_STACKDATA_0x2e32f0");
#endif

    switch (ctx->pc) {
        case 0x2e3308u: goto label_2e3308;
        case 0x2e3318u: goto label_2e3318;
        case 0x2e3324u: goto label_2e3324;
        default: break;
    }

    ctx->pc = 0x2e32f0u;

    // 0x2e32f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e32f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e32f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e32f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e32fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3300: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E3300u;
    SET_GPR_U32(ctx, 31, 0x2E3308u);
    ctx->pc = 0x2E3304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3300u;
            // 0x2e3304: 0x24850008  addiu       $a1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3308u; }
        if (ctx->pc != 0x2E3308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3308u; }
        if (ctx->pc != 0x2E3308u) { return; }
    }
    ctx->pc = 0x2E3308u;
label_2e3308:
    // 0x2e3308: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e3308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e330c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2e330cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2e3310: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E3310u;
    SET_GPR_U32(ctx, 31, 0x2E3318u);
    ctx->pc = 0x2E3314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3310u;
            // 0x2e3314: 0x24850008  addiu       $a1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3318u; }
        if (ctx->pc != 0x2E3318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3318u; }
        if (ctx->pc != 0x2E3318u) { return; }
    }
    ctx->pc = 0x2E3318u;
label_2e3318:
    // 0x2e3318: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e3318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e331c: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E331Cu;
    SET_GPR_U32(ctx, 31, 0x2E3324u);
    ctx->pc = 0x2E3320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E331Cu;
            // 0x2e3320: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3324u; }
        if (ctx->pc != 0x2E3324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3324u; }
        if (ctx->pc != 0x2E3324u) { return; }
    }
    ctx->pc = 0x2E3324u;
label_2e3324:
    // 0x2e3324: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2e3324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2e3328: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e3328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e332c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2e332cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x2e3330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3334: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3334u;
            // 0x2e3338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E333Cu;
}
