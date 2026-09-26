#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fRand__Ff
// Address: 0x1c92f0 - 0x1c932c
void fRand__Ff_0x1c92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fRand__Ff_0x1c92f0");
#endif

    switch (ctx->pc) {
        case 0x1c9304u: goto label_1c9304;
        default: break;
    }

    ctx->pc = 0x1c92f0u;

    // 0x1c92f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c92f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c92f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c92f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c92f8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c92f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c92fc: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C92FCu;
    SET_GPR_U32(ctx, 31, 0x1C9304u);
    ctx->pc = 0x1C9300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92FCu;
            // 0x1c9300: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9304u; }
        if (ctx->pc != 0x1C9304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9304u; }
        if (ctx->pc != 0x1C9304u) { return; }
    }
    ctx->pc = 0x1C9304u;
label_1c9304:
    // 0x1c9304: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9308: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c930c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c930cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c9310: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c9310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1c9314: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c9314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c9318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c931c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c9320: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c9320u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c9324: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9324u;
            // 0x1c9328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C932Cu;
}
