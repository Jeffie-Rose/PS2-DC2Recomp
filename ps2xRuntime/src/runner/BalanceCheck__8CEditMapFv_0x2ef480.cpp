#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BalanceCheck__8CEditMapFv
// Address: 0x2ef480 - 0x2ef52c
void BalanceCheck__8CEditMapFv_0x2ef480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BalanceCheck__8CEditMapFv_0x2ef480");
#endif

    switch (ctx->pc) {
        case 0x2ef4c8u: goto label_2ef4c8;
        case 0x2ef504u: goto label_2ef504;
        default: break;
    }

    ctx->pc = 0x2ef480u;

    // 0x2ef480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ef484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ef484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ef488: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ef488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef48c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef494: 0x8c830f84  lw          $v1, 0xF84($a0)
    ctx->pc = 0x2ef494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3972)));
    // 0x2ef498: 0x8c820f88  lw          $v0, 0xF88($a0)
    ctx->pc = 0x2ef498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3976)));
    // 0x2ef49c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2ef49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ef4a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef4a4: 0x0  nop
    ctx->pc = 0x2ef4a4u;
    // NOP
    // 0x2ef4a8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2ef4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ef4ac: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x2ef4acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef4b0: 0x0  nop
    ctx->pc = 0x2ef4b0u;
    // NOP
    // 0x2ef4b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF4B4u;
    {
        const bool branch_taken_0x2ef4b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF4B4u;
            // 0x2ef4b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4b4) {
            ctx->pc = 0x2EF4C0u;
            goto label_2ef4c0;
        }
    }
    ctx->pc = 0x2EF4BCu;
    // 0x2ef4bc: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2ef4bcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_2ef4c0:
    // 0x2ef4c0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2EF4C0u;
    SET_GPR_U32(ctx, 31, 0x2EF4C8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF4C8u; }
        if (ctx->pc != 0x2EF4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF4C8u; }
        if (ctx->pc != 0x2EF4C8u) { return; }
    }
    ctx->pc = 0x2EF4C8u;
label_2ef4c8:
    // 0x2ef4c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ef4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef4cc: 0x8e230f8c  lw          $v1, 0xF8C($s1)
    ctx->pc = 0x2ef4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3980)));
    // 0x2ef4d0: 0x8e220f90  lw          $v0, 0xF90($s1)
    ctx->pc = 0x2ef4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3984)));
    // 0x2ef4d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ef4d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef4d8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2ef4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ef4dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ef4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef4e0: 0x0  nop
    ctx->pc = 0x2ef4e0u;
    // NOP
    // 0x2ef4e4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x2ef4e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ef4e8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2ef4e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef4ec: 0x0  nop
    ctx->pc = 0x2ef4ecu;
    // NOP
    // 0x2ef4f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF4F0u;
    {
        const bool branch_taken_0x2ef4f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef4f0) {
            ctx->pc = 0x2EF4FCu;
            goto label_2ef4fc;
        }
    }
    ctx->pc = 0x2EF4F8u;
    // 0x2ef4f8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2ef4f8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_2ef4fc:
    // 0x2ef4fc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2EF4FCu;
    SET_GPR_U32(ctx, 31, 0x2EF504u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF504u; }
        if (ctx->pc != 0x2EF504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF504u; }
        if (ctx->pc != 0x2EF504u) { return; }
    }
    ctx->pc = 0x2EF504u;
label_2ef504:
    // 0x2ef504: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x2ef504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ef508: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF508u;
    {
        const bool branch_taken_0x2ef508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef508) {
            ctx->pc = 0x2EF514u;
            goto label_2ef514;
        }
    }
    ctx->pc = 0x2EF510u;
    // 0x2ef510: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x2ef510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2ef514:
    // 0x2ef514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ef514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef518: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2ef518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ef51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef524: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF524u;
            // 0x2ef528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF52Cu;
}
