#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PROJECTION__FP12RS_STACKDATAi
// Address: 0x2667a0 - 0x2667c4
void ps2__GET_PROJECTION__FP12RS_STACKDATAi_0x2667a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PROJECTION__FP12RS_STACKDATAi_0x2667a0");
#endif

    switch (ctx->pc) {
        case 0x2667b4u: goto label_2667b4;
        default: break;
    }

    ctx->pc = 0x2667a0u;

    // 0x2667a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2667a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2667a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2667a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2667a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2667a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2667ac: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2667ACu;
    SET_GPR_U32(ctx, 31, 0x2667B4u);
    ctx->pc = 0x2667B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2667ACu;
            // 0x2667b0: 0xc42ce450  lwc1        $f12, -0x1BB0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2667B4u; }
        if (ctx->pc != 0x2667B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2667B4u; }
        if (ctx->pc != 0x2667B4u) { return; }
    }
    ctx->pc = 0x2667B4u;
label_2667b4:
    // 0x2667b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2667b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2667b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2667b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2667bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2667BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2667C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2667BCu;
            // 0x2667c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2667C4u;
}
