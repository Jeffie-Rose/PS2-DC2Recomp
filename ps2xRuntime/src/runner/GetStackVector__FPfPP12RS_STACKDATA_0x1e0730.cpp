#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStackVector__FPfPP12RS_STACKDATA
// Address: 0x1e0730 - 0x1e078c
void GetStackVector__FPfPP12RS_STACKDATA_0x1e0730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStackVector__FPfPP12RS_STACKDATA_0x1e0730");
#endif

    switch (ctx->pc) {
        case 0x1e074cu: goto label_1e074c;
        case 0x1e0760u: goto label_1e0760;
        case 0x1e0774u: goto label_1e0774;
        default: break;
    }

    ctx->pc = 0x1e0730u;

    // 0x1e0730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0734: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e0734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e073c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0740: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e0740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e0744: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0744u;
    SET_GPR_U32(ctx, 31, 0x1E074Cu);
    ctx->pc = 0x1E0748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0744u;
            // 0x1e0748: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E074Cu; }
        if (ctx->pc != 0x1E074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E074Cu; }
        if (ctx->pc != 0x1E074Cu) { return; }
    }
    ctx->pc = 0x1E074Cu;
label_1e074c:
    // 0x1e074c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1e074cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1e0750: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e0750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0754: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e0754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e0758: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0758u;
    SET_GPR_U32(ctx, 31, 0x1E0760u);
    ctx->pc = 0x1E075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0758u;
            // 0x1e075c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0760u; }
        if (ctx->pc != 0x1E0760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0760u; }
        if (ctx->pc != 0x1E0760u) { return; }
    }
    ctx->pc = 0x1E0760u;
label_1e0760:
    // 0x1e0760: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1e0760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1e0764: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e0764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0768: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e0768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e076c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E076Cu;
    SET_GPR_U32(ctx, 31, 0x1E0774u);
    ctx->pc = 0x1E0770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E076Cu;
            // 0x1e0770: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0774u; }
        if (ctx->pc != 0x1E0774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0774u; }
        if (ctx->pc != 0x1E0774u) { return; }
    }
    ctx->pc = 0x1E0774u;
label_1e0774:
    // 0x1e0774: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1e0774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1e0778: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e0778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e077c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1e077cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1e0780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0784: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0784u;
            // 0x1e0788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E078Cu;
}
