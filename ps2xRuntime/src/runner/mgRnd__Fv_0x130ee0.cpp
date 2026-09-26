#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgRnd__Fv
// Address: 0x130ee0 - 0x130f1c
void mgRnd__Fv_0x130ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgRnd__Fv_0x130ee0");
#endif

    switch (ctx->pc) {
        case 0x130ef0u: goto label_130ef0;
        default: break;
    }

    ctx->pc = 0x130ee0u;

    // 0x130ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130ee8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x130EE8u;
    SET_GPR_U32(ctx, 31, 0x130EF0u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130EF0u; }
        if (ctx->pc != 0x130EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130EF0u; }
        if (ctx->pc != 0x130EF0u) { return; }
    }
    ctx->pc = 0x130EF0u;
label_130ef0:
    // 0x130ef0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x130ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130ef4: 0x0  nop
    ctx->pc = 0x130ef4u;
    // NOP
    // 0x130ef8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x130ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x130efc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x130efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x130f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130f04: 0x0  nop
    ctx->pc = 0x130f04u;
    // NOP
    // 0x130f08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x130f08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x130f0c: 0x0  nop
    ctx->pc = 0x130f0cu;
    // NOP
    // 0x130f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130f14: 0x3e00008  jr          $ra
    ctx->pc = 0x130F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130F14u;
            // 0x130f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130F1Cu;
}
