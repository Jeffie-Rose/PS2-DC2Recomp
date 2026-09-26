#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRotation__9mgCObjectFPf
// Address: 0x136270 - 0x1362ec
void SetRotation__9mgCObjectFPf_0x136270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotation__9mgCObjectFPf_0x136270");
#endif

    switch (ctx->pc) {
        case 0x1362d8u: goto label_1362d8;
        default: break;
    }

    ctx->pc = 0x136270u;

    // 0x136270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13627c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x13627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136280: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x136280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136284: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x136284u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136288: 0x0  nop
    ctx->pc = 0x136288u;
    // NOP
    // 0x13628c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x13628Cu;
    {
        const bool branch_taken_0x13628c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13628Cu;
            // 0x136290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13628c) {
            ctx->pc = 0x1362C4u;
            goto label_1362c4;
        }
    }
    ctx->pc = 0x136294u;
    // 0x136294: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x136294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136298: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x136298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13629c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13629cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1362a0: 0x0  nop
    ctx->pc = 0x1362a0u;
    // NOP
    // 0x1362a4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1362A4u;
    {
        const bool branch_taken_0x1362a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1362a4) {
            ctx->pc = 0x1362C4u;
            goto label_1362c4;
        }
    }
    ctx->pc = 0x1362ACu;
    // 0x1362ac: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1362acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1362b0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1362b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1362b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1362b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1362b8: 0x0  nop
    ctx->pc = 0x1362b8u;
    // NOP
    // 0x1362bc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1362BCu;
    {
        const bool branch_taken_0x1362bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1362bc) {
            ctx->pc = 0x1362DCu;
            goto label_1362dc;
        }
    }
    ctx->pc = 0x1362C4u;
label_1362c4:
    // 0x1362c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1362c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1362c8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1362c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1362cc: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1362ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1362d0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1362D0u;
    SET_GPR_U32(ctx, 31, 0x1362D8u);
    ctx->pc = 0x1362D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1362D0u;
            // 0x1362d4: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1362D8u; }
        if (ctx->pc != 0x1362D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1362D8u; }
        if (ctx->pc != 0x1362D8u) { return; }
    }
    ctx->pc = 0x1362D8u;
label_1362d8:
    // 0x1362d8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1362d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1362dc:
    // 0x1362dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1362dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1362e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1362e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1362e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1362E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1362E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1362E4u;
            // 0x1362e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1362ECu;
}
