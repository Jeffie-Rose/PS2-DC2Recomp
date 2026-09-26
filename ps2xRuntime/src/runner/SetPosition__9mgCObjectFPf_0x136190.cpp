#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPosition__9mgCObjectFPf
// Address: 0x136190 - 0x136214
void SetPosition__9mgCObjectFPf_0x136190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPosition__9mgCObjectFPf_0x136190");
#endif

    switch (ctx->pc) {
        case 0x1361f4u: goto label_1361f4;
        default: break;
    }

    ctx->pc = 0x136190u;

    // 0x136190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13619c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x13619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1361a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1361a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1361a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1361a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1361a8: 0x0  nop
    ctx->pc = 0x1361a8u;
    // NOP
    // 0x1361ac: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1361ACu;
    {
        const bool branch_taken_0x1361ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1361B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361ACu;
            // 0x1361b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361ac) {
            ctx->pc = 0x1361E4u;
            goto label_1361e4;
        }
    }
    ctx->pc = 0x1361B4u;
    // 0x1361b4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1361b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1361b8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1361b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1361bc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1361bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1361c0: 0x0  nop
    ctx->pc = 0x1361c0u;
    // NOP
    // 0x1361c4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1361C4u;
    {
        const bool branch_taken_0x1361c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1361c4) {
            ctx->pc = 0x1361E4u;
            goto label_1361e4;
        }
    }
    ctx->pc = 0x1361CCu;
    // 0x1361cc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1361ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1361d0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1361d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1361d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1361d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1361d8: 0x0  nop
    ctx->pc = 0x1361d8u;
    // NOP
    // 0x1361dc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1361DCu;
    {
        const bool branch_taken_0x1361dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1361dc) {
            ctx->pc = 0x136204u;
            goto label_136204;
        }
    }
    ctx->pc = 0x1361E4u;
label_1361e4:
    // 0x1361e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1361e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1361e8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1361e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1361ec: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1361ECu;
    SET_GPR_U32(ctx, 31, 0x1361F4u);
    ctx->pc = 0x1361F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1361ECu;
            // 0x1361f0: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1361F4u; }
        if (ctx->pc != 0x1361F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1361F4u; }
        if (ctx->pc != 0x1361F4u) { return; }
    }
    ctx->pc = 0x1361F4u;
label_1361f4:
    // 0x1361f4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1361f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1361f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1361f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1361fc: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1361fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x136200: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x136200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_136204:
    // 0x136204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13620c: 0x3e00008  jr          $ra
    ctx->pc = 0x13620Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13620Cu;
            // 0x136210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136214u;
}
