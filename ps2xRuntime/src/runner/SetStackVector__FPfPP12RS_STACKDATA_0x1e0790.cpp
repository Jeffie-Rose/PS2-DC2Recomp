#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStackVector__FPfPP12RS_STACKDATA
// Address: 0x1e0790 - 0x1e07e8
void SetStackVector__FPfPP12RS_STACKDATA_0x1e0790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStackVector__FPfPP12RS_STACKDATA_0x1e0790");
#endif

    switch (ctx->pc) {
        case 0x1e07b4u: goto label_1e07b4;
        case 0x1e07c8u: goto label_1e07c8;
        case 0x1e07dcu: goto label_1e07dc;
        default: break;
    }

    ctx->pc = 0x1e0790u;

    // 0x1e0790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0794: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e0794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e079c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e07a0: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1e07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e07a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1e07a8: 0xc4ec0000  lwc1        $f12, 0x0($a3)
    ctx->pc = 0x1e07a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e07ac: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E07ACu;
    SET_GPR_U32(ctx, 31, 0x1E07B4u);
    ctx->pc = 0x1E07B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07ACu;
            // 0x1e07b0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07B4u; }
        if (ctx->pc != 0x1E07B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07B4u; }
        if (ctx->pc != 0x1E07B4u) { return; }
    }
    ctx->pc = 0x1E07B4u;
label_1e07b4:
    // 0x1e07b4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1e07b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e07b8: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1e07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e07bc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1e07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1e07c0: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E07C0u;
    SET_GPR_U32(ctx, 31, 0x1E07C8u);
    ctx->pc = 0x1E07C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07C0u;
            // 0x1e07c4: 0xc4ec0004  lwc1        $f12, 0x4($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07C8u; }
        if (ctx->pc != 0x1E07C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07C8u; }
        if (ctx->pc != 0x1E07C8u) { return; }
    }
    ctx->pc = 0x1E07C8u;
label_1e07c8:
    // 0x1e07c8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1e07c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e07cc: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1e07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e07d0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1e07d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1e07d4: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E07D4u;
    SET_GPR_U32(ctx, 31, 0x1E07DCu);
    ctx->pc = 0x1E07D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07D4u;
            // 0x1e07d8: 0xc4ec0008  lwc1        $f12, 0x8($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07DCu; }
        if (ctx->pc != 0x1E07DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E07DCu; }
        if (ctx->pc != 0x1E07DCu) { return; }
    }
    ctx->pc = 0x1E07DCu;
label_1e07dc:
    // 0x1e07dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e07dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e07e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E07E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E07E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E07E0u;
            // 0x1e07e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E07E8u;
}
