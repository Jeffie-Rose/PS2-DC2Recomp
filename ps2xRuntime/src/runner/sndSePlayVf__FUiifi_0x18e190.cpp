#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSePlayVf__FUiifi
// Address: 0x18e190 - 0x18e20c
void sndSePlayVf__FUiifi_0x18e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSePlayVf__FUiifi_0x18e190");
#endif

    switch (ctx->pc) {
        case 0x18e1bcu: goto label_18e1bc;
        case 0x18e1d0u: goto label_18e1d0;
        case 0x18e1f0u: goto label_18e1f0;
        default: break;
    }

    ctx->pc = 0x18e190u;

    // 0x18e190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18e190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18e194: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18e194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18e198: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18e198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18e19c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18e1a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18e1a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18e1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e1a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18e1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18e1acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18e1b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18e1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1b4: 0xc063624  jal         func_18D890
    ctx->pc = 0x18E1B4u;
    SET_GPR_U32(ctx, 31, 0x18E1BCu);
    ctx->pc = 0x18E1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1B4u;
            // 0x18e1b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1BCu; }
        if (ctx->pc != 0x18E1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetSeDefVol__FUii_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1BCu; }
        if (ctx->pc != 0x18E1BCu) { return; }
    }
    ctx->pc = 0x18E1BCu;
label_18e1bc:
    // 0x18e1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e1c0: 0x0  nop
    ctx->pc = 0x18e1c0u;
    // NOP
    // 0x18e1c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e1c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18e1c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x18E1C8u;
    SET_GPR_U32(ctx, 31, 0x18E1D0u);
    ctx->pc = 0x18E1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1C8u;
            // 0x18e1cc: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1D0u; }
        if (ctx->pc != 0x18E1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1D0u; }
        if (ctx->pc != 0x18E1D0u) { return; }
    }
    ctx->pc = 0x18E1D0u;
label_18e1d0:
    // 0x18e1d0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x18e1d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x18e1d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E1D4u;
    {
        const bool branch_taken_0x18e1d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1D4u;
            // 0x18e1d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1d4) {
            ctx->pc = 0x18E1E0u;
            goto label_18e1e0;
        }
    }
    ctx->pc = 0x18E1DCu;
    // 0x18e1dc: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x18e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_18e1e0:
    // 0x18e1e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18e1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18e1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1e8: 0xc063820  jal         func_18E080
    ctx->pc = 0x18E1E8u;
    SET_GPR_U32(ctx, 31, 0x18E1F0u);
    ctx->pc = 0x18E1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E1E8u;
            // 0x18e1ec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1F0u; }
        if (ctx->pc != 0x18E1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1F0u; }
        if (ctx->pc != 0x18E1F0u) { return; }
    }
    ctx->pc = 0x18E1F0u;
label_18e1f0:
    // 0x18e1f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18e1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e1f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18e1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e1f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18e1f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e1fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18e1fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18e200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e204: 0x3e00008  jr          $ra
    ctx->pc = 0x18E204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E204u;
            // 0x18e208: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E20Cu;
}
