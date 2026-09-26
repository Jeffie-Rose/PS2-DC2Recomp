#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgTransZPrim__Ff
// Address: 0x145ae0 - 0x145b18
void mgTransZPrim__Ff_0x145ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgTransZPrim__Ff_0x145ae0");
#endif

    switch (ctx->pc) {
        case 0x145b08u: goto label_145b08;
        default: break;
    }

    ctx->pc = 0x145ae0u;

    // 0x145ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145ae4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x145ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x145ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145aec: 0x24424250  addiu       $v0, $v0, 0x4250
    ctx->pc = 0x145aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16976));
    // 0x145af0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x145af0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145af4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x145af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x145af8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x145af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x145afc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x145afcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x145b00: 0xc051680  jal         func_145A00
    ctx->pc = 0x145B00u;
    SET_GPR_U32(ctx, 31, 0x145B08u);
    ctx->pc = 0x145B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B00u;
            // 0x145b04: 0xe7ac0018  swc1        $f12, 0x18($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145A00u;
    if (runtime->hasFunction(0x145A00u)) {
        auto targetFn = runtime->lookupFunction(0x145A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B08u; }
        if (ctx->pc != 0x145B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransViewPrim__FPiPf_0x145a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B08u; }
        if (ctx->pc != 0x145B08u) { return; }
    }
    ctx->pc = 0x145B08u;
label_145b08:
    // 0x145b08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x145b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x145b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145b10: 0x3e00008  jr          $ra
    ctx->pc = 0x145B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B10u;
            // 0x145b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145B18u;
}
