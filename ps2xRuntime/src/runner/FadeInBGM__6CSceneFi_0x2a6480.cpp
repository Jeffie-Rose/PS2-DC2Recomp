#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeInBGM__6CSceneFi
// Address: 0x2a6480 - 0x2a64e0
void FadeInBGM__6CSceneFi_0x2a6480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeInBGM__6CSceneFi_0x2a6480");
#endif

    switch (ctx->pc) {
        case 0x2a649cu: goto label_2a649c;
        case 0x2a64ccu: goto label_2a64cc;
        default: break;
    }

    ctx->pc = 0x2a6480u;

    // 0x2a6480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a6488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a648c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a648cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a6490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6494: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A6494u;
    SET_GPR_U32(ctx, 31, 0x2A649Cu);
    ctx->pc = 0x2A6498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6494u;
            // 0x2a6498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A649Cu; }
        if (ctx->pc != 0x2A649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A649Cu; }
        if (ctx->pc != 0x2A649Cu) { return; }
    }
    ctx->pc = 0x2A649Cu;
label_2a649c:
    // 0x2a649c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2a649cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a64a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a64a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a64a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a64a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a64a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a64ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a64acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a64b0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a64b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2a64b4: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2a64b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2a64b8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2a64b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2a64bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2a64bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a64c0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2a64c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a64c4: 0xc0a98e8  jal         func_2A63A0
    ctx->pc = 0x2A64C4u;
    SET_GPR_U32(ctx, 31, 0x2A64CCu);
    ctx->pc = 0x2A64C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A64C4u;
            // 0x2a64c8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A64CCu; }
        if (ctx->pc != 0x2A64CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A64CCu; }
        if (ctx->pc != 0x2A64CCu) { return; }
    }
    ctx->pc = 0x2A64CCu;
label_2a64cc:
    // 0x2a64cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a64ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a64d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a64d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a64d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a64d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a64d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A64D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A64DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A64D8u;
            // 0x2a64dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A64E0u;
}
