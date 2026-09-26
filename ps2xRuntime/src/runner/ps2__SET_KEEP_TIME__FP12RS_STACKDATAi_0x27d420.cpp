#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_KEEP_TIME__FP12RS_STACKDATAi
// Address: 0x27d420 - 0x27d448
void ps2__SET_KEEP_TIME__FP12RS_STACKDATAi_0x27d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_KEEP_TIME__FP12RS_STACKDATAi_0x27d420");
#endif

    switch (ctx->pc) {
        case 0x27d430u: goto label_27d430;
        default: break;
    }

    ctx->pc = 0x27d420u;

    // 0x27d420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d428: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27D428u;
    SET_GPR_U32(ctx, 31, 0x27D430u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D430u; }
        if (ctx->pc != 0x27D430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D430u; }
        if (ctx->pc != 0x27D430u) { return; }
    }
    ctx->pc = 0x27D430u;
label_27d430:
    // 0x27d430: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27d430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x27d434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d438: 0xe420e87c  swc1        $f0, -0x1784($at)
    ctx->pc = 0x27d438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294961276), bits); }
    // 0x27d43c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d440: 0x3e00008  jr          $ra
    ctx->pc = 0x27D440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D440u;
            // 0x27d444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D448u;
}
