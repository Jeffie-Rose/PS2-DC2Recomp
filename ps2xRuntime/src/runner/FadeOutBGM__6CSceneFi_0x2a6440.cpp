#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeOutBGM__6CSceneFi
// Address: 0x2a6440 - 0x2a647c
void FadeOutBGM__6CSceneFi_0x2a6440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeOutBGM__6CSceneFi_0x2a6440");
#endif

    switch (ctx->pc) {
        case 0x2a6454u: goto label_2a6454;
        default: break;
    }

    ctx->pc = 0x2a6440u;

    // 0x2a6440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a644c: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A644Cu;
    SET_GPR_U32(ctx, 31, 0x2A6454u);
    ctx->pc = 0x2A6450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A644Cu;
            // 0x2a6450: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6454u; }
        if (ctx->pc != 0x2A6454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6454u; }
        if (ctx->pc != 0x2A6454u) { return; }
    }
    ctx->pc = 0x2A6454u;
label_2a6454:
    // 0x2a6454: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2a6454u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6458: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2a6458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a645c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a645cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a6460: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a6460u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2a6464: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a6464u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2a6468: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2a6468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2a646c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a646cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6474: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6474u;
            // 0x2a6478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A647Cu;
}
