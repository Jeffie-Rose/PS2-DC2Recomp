#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_helpmes.cpp
// Address: 0x374c80 - 0x374cdc
void ps2___sinit_helpmes_cpp_0x374c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_helpmes_cpp_0x374c80");
#endif

    switch (ctx->pc) {
        case 0x374c94u: goto label_374c94;
        default: break;
    }

    ctx->pc = 0x374c80u;

    // 0x374c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374c84: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374c8c: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x374C8Cu;
    SET_GPR_U32(ctx, 31, 0x374C94u);
    ctx->pc = 0x374C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374C8Cu;
            // 0x374c90: 0x248409d0  addiu       $a0, $a0, 0x9D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C94u; }
        if (ctx->pc != 0x374C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374C94u; }
        if (ctx->pc != 0x374C94u) { return; }
    }
    ctx->pc = 0x374C94u;
label_374c94:
    // 0x374c94: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374c98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x374c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x374c9c: 0xac202bb8  sw          $zero, 0x2BB8($at)
    ctx->pc = 0x374c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11192), GPR_U32(ctx, 0));
    // 0x374ca0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374ca4: 0xac232bbc  sw          $v1, 0x2BBC($at)
    ctx->pc = 0x374ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11196), GPR_U32(ctx, 3));
    // 0x374ca8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374cac: 0xac232bc8  sw          $v1, 0x2BC8($at)
    ctx->pc = 0x374cacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11208), GPR_U32(ctx, 3));
    // 0x374cb0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374cb4: 0xac202bb0  sw          $zero, 0x2BB0($at)
    ctx->pc = 0x374cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11184), GPR_U32(ctx, 0));
    // 0x374cb8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374cbc: 0xac202bc4  sw          $zero, 0x2BC4($at)
    ctx->pc = 0x374cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11204), GPR_U32(ctx, 0));
    // 0x374cc0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374cc4: 0xac202bc0  sw          $zero, 0x2BC0($at)
    ctx->pc = 0x374cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11200), GPR_U32(ctx, 0));
    // 0x374cc8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x374cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x374ccc: 0xac202bb4  sw          $zero, 0x2BB4($at)
    ctx->pc = 0x374cccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11188), GPR_U32(ctx, 0));
    // 0x374cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x374CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374CD4u;
            // 0x374cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374CDCu;
}
