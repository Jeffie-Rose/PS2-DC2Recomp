#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CGeyserEffectFv
// Address: 0x2f8360 - 0x2f8460
void Step__13CGeyserEffectFv_0x2f8360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CGeyserEffectFv_0x2f8360");
#endif

    switch (ctx->pc) {
        case 0x2f8374u: goto label_2f8374;
        case 0x2f83bcu: goto label_2f83bc;
        default: break;
    }

    ctx->pc = 0x2f8360u;

    // 0x2f8360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f8360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f8364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f8364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f8368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f836c: 0xc0be0a0  jal         func_2F8280
    ctx->pc = 0x2F836Cu;
    SET_GPR_U32(ctx, 31, 0x2F8374u);
    ctx->pc = 0x2F8370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F836Cu;
            // 0x2f8370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8280u;
    if (runtime->hasFunction(0x2F8280u)) {
        auto targetFn = runtime->lookupFunction(0x2F8280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8374u; }
        if (ctx->pc != 0x2F8374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Create__13CGeyserEffectFv_0x2f8280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8374u; }
        if (ctx->pc != 0x2F8374u) { return; }
    }
    ctx->pc = 0x2F8374u;
label_2f8374:
    // 0x2f8374: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2f8374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f8378: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2F8378u;
    {
        const bool branch_taken_0x2f8378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8378u;
            // 0x2f837c: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8378) {
            ctx->pc = 0x2F8450u;
            goto label_2f8450;
        }
    }
    ctx->pc = 0x2F8380u;
    // 0x2f8380: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x2f8380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x2f8384: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2f8384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2f8388: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x2f8388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2f838c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f838cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f8390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8394: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x2f8394u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2f8398: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2f8398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2f839c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2f839cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2f83a0: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2f83a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2f83a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f83a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f83a8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2f83a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2f83ac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2f83acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2f83b0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2f83b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f83b4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2F83B4u;
    {
        const bool branch_taken_0x2f83b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F83B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F83B4u;
            // 0x2f83b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f83b4) {
            ctx->pc = 0x2F8440u;
            goto label_2f8440;
        }
    }
    ctx->pc = 0x2F83BCu;
label_2f83bc:
    // 0x2f83bc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2f83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f83c0: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2f83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f83c4: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2f83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2f83c8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F83C8u;
    {
        const bool branch_taken_0x2f83c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f83c8) {
            ctx->pc = 0x2F8438u;
            goto label_2f8438;
        }
    }
    ctx->pc = 0x2F83D0u;
    // 0x2f83d0: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2f83d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f83d4: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x2f83d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2f83d8: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x2f83d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2f83dc: 0xc484001c  lwc1        $f4, 0x1C($a0)
    ctx->pc = 0x2f83dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f83e0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2f83e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f83e4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2f83e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2f83e8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2f83e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f83ec: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x2f83ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f83f0: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2f83f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2f83f4: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x2f83f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2f83f8: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x2f83f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f83fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2f83fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8400: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2f8400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2f8404: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2f8404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8408: 0x0  nop
    ctx->pc = 0x2f8408u;
    // NOP
    // 0x2f840c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F840Cu;
    {
        const bool branch_taken_0x2f840c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F8410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F840Cu;
            // 0x2f8410: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f840c) {
            ctx->pc = 0x2F841Cu;
            goto label_2f841c;
        }
    }
    ctx->pc = 0x2F8414u;
    // 0x2f8414: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2f8414u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2f8418: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2f8418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2f841c:
    // 0x2f841c: 0x0  nop
    ctx->pc = 0x2f841cu;
    // NOP
    // 0x2f8420: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2f8420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8424: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f8424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8428: 0x0  nop
    ctx->pc = 0x2f8428u;
    // NOP
    // 0x2f842c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F842Cu;
    {
        const bool branch_taken_0x2f842c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f842c) {
            ctx->pc = 0x2F8438u;
            goto label_2f8438;
        }
    }
    ctx->pc = 0x2F8434u;
    // 0x2f8434: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2f8434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_2f8438:
    // 0x2f8438: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2f8438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2f843c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f843cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2f8440:
    // 0x2f8440: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2f8440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2f8444: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2f8444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f8448: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2F8448u;
    {
        const bool branch_taken_0x2f8448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8448) {
            ctx->pc = 0x2F83BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f83bc;
        }
    }
    ctx->pc = 0x2F8450u;
label_2f8450:
    // 0x2f8450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f8450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8458: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F845Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8458u;
            // 0x2f845c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8460u;
}
