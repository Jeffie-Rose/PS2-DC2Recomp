#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__8mgCFrameFR8mgCFrame
// Address: 0x1386c0 - 0x1387ec
void ps2___as__8mgCFrameFR8mgCFrame_0x1386c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__8mgCFrameFR8mgCFrame_0x1386c0");
#endif

    switch (ctx->pc) {
        case 0x1386d8u: goto label_1386d8;
        default: break;
    }

    ctx->pc = 0x1386c0u;

    // 0x1386c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1386c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1386c4: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1386c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1386c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1386c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1386cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1386ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1386d0: 0xc049c18  jal         func_127060
    ctx->pc = 0x1386D0u;
    SET_GPR_U32(ctx, 31, 0x1386D8u);
    ctx->pc = 0x1386D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1386D0u;
            // 0x1386d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1386D8u; }
        if (ctx->pc != 0x1386D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1386D8u; }
        if (ctx->pc != 0x1386D8u) { return; }
    }
    ctx->pc = 0x1386D8u;
label_1386d8:
    // 0x1386d8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1386d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1386dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1386dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1386e0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1386e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1386e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1386e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1386e8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1386e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1386ec: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1386ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1386f0: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x1386f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x1386f4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1386f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1386f8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1386f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1386fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1386fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138700: 0x0  nop
    ctx->pc = 0x138700u;
    // NOP
    // 0x138704: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x138704u;
    {
        const bool branch_taken_0x138704 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138704u;
            // 0x138708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138704) {
            ctx->pc = 0x138738u;
            goto label_138738;
        }
    }
    ctx->pc = 0x13870Cu;
    // 0x13870c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x13870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138710: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x138710u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138714: 0x0  nop
    ctx->pc = 0x138714u;
    // NOP
    // 0x138718: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x138718u;
    {
        const bool branch_taken_0x138718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138718) {
            ctx->pc = 0x138734u;
            goto label_138734;
        }
    }
    ctx->pc = 0x138720u;
    // 0x138720: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x138720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138724: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x138724u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138728: 0x0  nop
    ctx->pc = 0x138728u;
    // NOP
    // 0x13872c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x13872Cu;
    {
        const bool branch_taken_0x13872c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13872c) {
            ctx->pc = 0x13873Cu;
            goto label_13873c;
        }
    }
    ctx->pc = 0x138734u;
label_138734:
    // 0x138734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138738:
    // 0x138738: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x138738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_13873c:
    // 0x13873c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x13873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138740: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x138740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138744: 0x0  nop
    ctx->pc = 0x138744u;
    // NOP
    // 0x138748: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x138748u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13874c: 0x0  nop
    ctx->pc = 0x13874cu;
    // NOP
    // 0x138750: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x138750u;
    {
        const bool branch_taken_0x138750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138750u;
            // 0x138754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138750) {
            ctx->pc = 0x138784u;
            goto label_138784;
        }
    }
    ctx->pc = 0x138758u;
    // 0x138758: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x138758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13875c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13875cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138760: 0x0  nop
    ctx->pc = 0x138760u;
    // NOP
    // 0x138764: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x138764u;
    {
        const bool branch_taken_0x138764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138764) {
            ctx->pc = 0x138780u;
            goto label_138780;
        }
    }
    ctx->pc = 0x13876Cu;
    // 0x13876c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x13876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138770: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x138770u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138774: 0x0  nop
    ctx->pc = 0x138774u;
    // NOP
    // 0x138778: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x138778u;
    {
        const bool branch_taken_0x138778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138778) {
            ctx->pc = 0x138788u;
            goto label_138788;
        }
    }
    ctx->pc = 0x138780u;
label_138780:
    // 0x138780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138784:
    // 0x138784: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x138784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_138788:
    // 0x138788: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x138788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13878c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13878cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x138790: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x138790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138794: 0x0  nop
    ctx->pc = 0x138794u;
    // NOP
    // 0x138798: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x138798u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13879c: 0x0  nop
    ctx->pc = 0x13879cu;
    // NOP
    // 0x1387a0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1387A0u;
    {
        const bool branch_taken_0x1387a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1387A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1387A0u;
            // 0x1387a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387a0) {
            ctx->pc = 0x1387D4u;
            goto label_1387d4;
        }
    }
    ctx->pc = 0x1387A8u;
    // 0x1387a8: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1387a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1387ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1387acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1387b0: 0x0  nop
    ctx->pc = 0x1387b0u;
    // NOP
    // 0x1387b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1387B4u;
    {
        const bool branch_taken_0x1387b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1387b4) {
            ctx->pc = 0x1387D0u;
            goto label_1387d0;
        }
    }
    ctx->pc = 0x1387BCu;
    // 0x1387bc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1387bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1387c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1387c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1387c4: 0x0  nop
    ctx->pc = 0x1387c4u;
    // NOP
    // 0x1387c8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1387C8u;
    {
        const bool branch_taken_0x1387c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1387CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1387C8u;
            // 0x1387cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387c8) {
            ctx->pc = 0x1387DCu;
            goto label_1387dc;
        }
    }
    ctx->pc = 0x1387D0u;
label_1387d0:
    // 0x1387d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1387d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1387d4:
    // 0x1387d4: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1387d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1387d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1387d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1387dc:
    // 0x1387dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1387dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1387e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1387e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1387e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1387E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1387E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1387E4u;
            // 0x1387e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1387ECu;
}
