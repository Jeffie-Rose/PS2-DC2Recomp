#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetValue__13CDamageScore2Fiif
// Address: 0x1cafc0 - 0x1cb030
void SetValue__13CDamageScore2Fiif_0x1cafc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetValue__13CDamageScore2Fiif_0x1cafc0");
#endif

    switch (ctx->pc) {
        case 0x1cb014u: goto label_1cb014;
        case 0x1cb01cu: goto label_1cb01c;
        default: break;
    }

    ctx->pc = 0x1cafc0u;

    // 0x1cafc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cafc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cafc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cafc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cafc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cafcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cafccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cafd0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1cafd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1cafd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cafd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafd8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1cafd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1cafdc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cafdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1cafe0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1cafe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1cafe4: 0x24a56c70  addiu       $a1, $a1, 0x6C70
    ctx->pc = 0x1cafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27760));
    // 0x1cafe8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1cafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1cafec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1cafecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1caff0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1caff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1caff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1caff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1caff8: 0x0  nop
    ctx->pc = 0x1caff8u;
    // NOP
    // 0x1caffc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1caffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1cb000: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1cb000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1cb004: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1cb004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1cb008: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1cb008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb00c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1CB00Cu;
    SET_GPR_U32(ctx, 31, 0x1CB014u);
    ctx->pc = 0x1CB010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB00Cu;
            // 0x1cb010: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB014u; }
        if (ctx->pc != 0x1CB014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB014u; }
        if (ctx->pc != 0x1CB014u) { return; }
    }
    ctx->pc = 0x1CB014u;
label_1cb014:
    // 0x1cb014: 0xc04a422  jal         func_129088
    ctx->pc = 0x1CB014u;
    SET_GPR_U32(ctx, 31, 0x1CB01Cu);
    ctx->pc = 0x1CB018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB014u;
            // 0x1cb018: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB01Cu; }
        if (ctx->pc != 0x1CB01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB01Cu; }
        if (ctx->pc != 0x1CB01Cu) { return; }
    }
    ctx->pc = 0x1CB01Cu;
label_1cb01c:
    // 0x1cb01c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1cb01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1cb020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb028: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB028u;
            // 0x1cb02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB030u;
}
