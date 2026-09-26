#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Generate__9CStarDustFiiii
// Address: 0x22eb60 - 0x22ebbc
void Generate__9CStarDustFiiii_0x22eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Generate__9CStarDustFiiii_0x22eb60");
#endif

    switch (ctx->pc) {
        case 0x22eb98u: goto label_22eb98;
        default: break;
    }

    ctx->pc = 0x22eb60u;

    // 0x22eb60: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x22eb60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22eb64: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22eb64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22eb68: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x22eb68u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22eb6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22eb70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22eb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22eb74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22eb78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22eb7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22eb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb80: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x22eb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eb84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22eb84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22eb88: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x22eb88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x22eb8c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x22eb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x22eb90: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x22EB90u;
    SET_GPR_U32(ctx, 31, 0x22EB98u);
    ctx->pc = 0x22EB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EB90u;
            // 0x22eb94: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EB98u; }
        if (ctx->pc != 0x22EB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EB98u; }
        if (ctx->pc != 0x22EB98u) { return; }
    }
    ctx->pc = 0x22EB98u;
label_22eb98:
    // 0x22eb98: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x22eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22eb9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22eba0: 0xa6240010  sh          $a0, 0x10($s1)
    ctx->pc = 0x22eba0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x22eba4: 0xa2230012  sb          $v1, 0x12($s1)
    ctx->pc = 0x22eba4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x22eba8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22eba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ebac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ebacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ebb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ebb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ebb4: 0x3e00008  jr          $ra
    ctx->pc = 0x22EBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EBB4u;
            // 0x22ebb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22EBBCu;
}
