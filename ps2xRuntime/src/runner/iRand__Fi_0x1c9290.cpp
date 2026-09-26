#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iRand__Fi
// Address: 0x1c9290 - 0x1c92e8
void iRand__Fi_0x1c9290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iRand__Fi_0x1c9290");
#endif

    switch (ctx->pc) {
        case 0x1c92a4u: goto label_1c92a4;
        case 0x1c92d8u: goto label_1c92d8;
        default: break;
    }

    ctx->pc = 0x1c9290u;

    // 0x1c9290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c929c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C929Cu;
    SET_GPR_U32(ctx, 31, 0x1C92A4u);
    ctx->pc = 0x1C92A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C929Cu;
            // 0x1c92a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92A4u; }
        if (ctx->pc != 0x1C92A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92A4u; }
        if (ctx->pc != 0x1C92A4u) { return; }
    }
    ctx->pc = 0x1C92A4u;
label_1c92a4:
    // 0x1c92a4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1c92a4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c92a8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c92ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c92acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c92b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c92b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c92b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c92b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c92b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c92b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c92bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c92bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c92c0: 0x0  nop
    ctx->pc = 0x1c92c0u;
    // NOP
    // 0x1c92c4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1c92c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c92c8: 0x0  nop
    ctx->pc = 0x1c92c8u;
    // NOP
    // 0x1c92cc: 0x0  nop
    ctx->pc = 0x1c92ccu;
    // NOP
    // 0x1c92d0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C92D0u;
    SET_GPR_U32(ctx, 31, 0x1C92D8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92D8u; }
        if (ctx->pc != 0x1C92D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92D8u; }
        if (ctx->pc != 0x1C92D8u) { return; }
    }
    ctx->pc = 0x1C92D8u;
label_1c92d8:
    // 0x1c92d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c92d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c92dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c92dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c92e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C92E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C92E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92E0u;
            // 0x1c92e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C92E8u;
}
