#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_PROJECTION__FP12RS_STACKDATAi
// Address: 0x266770 - 0x266798
void ps2__SET_PROJECTION__FP12RS_STACKDATAi_0x266770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_PROJECTION__FP12RS_STACKDATAi_0x266770");
#endif

    switch (ctx->pc) {
        case 0x266780u: goto label_266780;
        default: break;
    }

    ctx->pc = 0x266770u;

    // 0x266770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266778: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266778u;
    SET_GPR_U32(ctx, 31, 0x266780u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266780u; }
        if (ctx->pc != 0x266780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266780u; }
        if (ctx->pc != 0x266780u) { return; }
    }
    ctx->pc = 0x266780u;
label_266780:
    // 0x266780: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x266780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x266784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266788: 0xe420e450  swc1        $f0, -0x1BB0($at)
    ctx->pc = 0x266788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960208), bits); }
    // 0x26678c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26678cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266790: 0x3e00008  jr          $ra
    ctx->pc = 0x266790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266790u;
            // 0x266794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266798u;
}
