#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddAbsRate__16CBattleCharaInfoFifPi
// Address: 0x19fee0 - 0x19ffdc
void AddAbsRate__16CBattleCharaInfoFifPi_0x19fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddAbsRate__16CBattleCharaInfoFifPi_0x19fee0");
#endif

    switch (ctx->pc) {
        case 0x19ff20u: goto label_19ff20;
        case 0x19ffacu: goto label_19ffac;
        default: break;
    }

    ctx->pc = 0x19fee0u;

    // 0x19fee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19fee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19fee4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19fee8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19fee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19feec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19feecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19fef0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19fef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fef4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19fef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19fef8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19fef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fefc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19fefcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19ff00: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19ff00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff04: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x19ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19ff08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FF08u;
    {
        const bool branch_taken_0x19ff08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF08u;
            // 0x19ff0c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff08) {
            ctx->pc = 0x19FF18u;
            goto label_19ff18;
        }
    }
    ctx->pc = 0x19FF10u;
    // 0x19ff10: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x19FF10u;
    {
        const bool branch_taken_0x19ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF10u;
            // 0x19ff14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff10) {
            ctx->pc = 0x19FFC0u;
            goto label_19ffc0;
        }
    }
    ctx->pc = 0x19FF18u;
label_19ff18:
    // 0x19ff18: 0xc067e44  jal         func_19F910
    ctx->pc = 0x19FF18u;
    SET_GPR_U32(ctx, 31, 0x19FF20u);
    ctx->pc = 0x19F910u;
    if (runtime->hasFunction(0x19F910u)) {
        auto targetFn = runtime->lookupFunction(0x19F910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF20u; }
        if (ctx->pc != 0x19FF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAccessAbs__16CBattleCharaInfoFi_0x19f910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF20u; }
        if (ctx->pc != 0x19FF20u) { return; }
    }
    ctx->pc = 0x19FF20u;
label_19ff20:
    // 0x19ff20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FF20u;
    {
        const bool branch_taken_0x19ff20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ff20) {
            ctx->pc = 0x19FF38u;
            goto label_19ff38;
        }
    }
    ctx->pc = 0x19FF28u;
    // 0x19ff28: 0x86440006  lh          $a0, 0x6($s2)
    ctx->pc = 0x19ff28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x19ff2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ff30: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FF30u;
    {
        const bool branch_taken_0x19ff30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19ff30) {
            ctx->pc = 0x19FF40u;
            goto label_19ff40;
        }
    }
    ctx->pc = 0x19FF38u;
label_19ff38:
    // 0x19ff38: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19FF38u;
    {
        const bool branch_taken_0x19ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF38u;
            // 0x19ff3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff38) {
            ctx->pc = 0x19FFC0u;
            goto label_19ffc0;
        }
    }
    ctx->pc = 0x19FF40u;
label_19ff40:
    // 0x19ff40: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ff44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19ff48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19ff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ff4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ff4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ff50: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x19ff50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x19ff54: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19ff54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x19ff58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ff58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ff5c: 0x0  nop
    ctx->pc = 0x19ff5cu;
    // NOP
    // 0x19ff60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19FF60u;
    {
        const bool branch_taken_0x19ff60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19FF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF60u;
            // 0x19ff64: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ff60) {
            ctx->pc = 0x19FF6Cu;
            goto label_19ff6c;
        }
    }
    ctx->pc = 0x19FF68u;
    // 0x19ff68: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_19ff6c:
    // 0x19ff6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x19ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ff70: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ff74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ff74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ff78: 0x0  nop
    ctx->pc = 0x19ff78u;
    // NOP
    // 0x19ff7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19FF7Cu;
    {
        const bool branch_taken_0x19ff7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ff7c) {
            ctx->pc = 0x19FF88u;
            goto label_19ff88;
        }
    }
    ctx->pc = 0x19FF84u;
    // 0x19ff84: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x19ff84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_19ff88:
    // 0x19ff88: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x19ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x19ff8c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x19ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x19ff90: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x19ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x19ff94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff98: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19ff9c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x19ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19ffa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ffa4: 0xc06800c  jal         func_1A0030
    ctx->pc = 0x19FFA4u;
    SET_GPR_U32(ctx, 31, 0x19FFACu);
    ctx->pc = 0x19FFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFA4u;
            // 0x19ffa8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0030u;
    if (runtime->hasFunction(0x1A0030u)) {
        auto targetFn = runtime->lookupFunction(0x1A0030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFACu; }
        if (ctx->pc != 0x19FFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LevelUpWeapon__16CBattleCharaInfoFP13CGameDataUsed_0x1a0030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFACu; }
        if (ctx->pc != 0x19FFACu) { return; }
    }
    ctx->pc = 0x19FFACu;
label_19ffac:
    // 0x19ffac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FFACu;
    {
        const bool branch_taken_0x19ffac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ffac) {
            ctx->pc = 0x19FFC0u;
            goto label_19ffc0;
        }
    }
    ctx->pc = 0x19FFB4u;
    // 0x19ffb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19FFB4u;
    {
        const bool branch_taken_0x19ffb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFB4u;
            // 0x19ffb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffb4) {
            ctx->pc = 0x19FFC0u;
            goto label_19ffc0;
        }
    }
    ctx->pc = 0x19FFBCu;
    // 0x19ffbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19ffc0:
    // 0x19ffc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19ffc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ffc4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19ffc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19ffc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ffcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19ffccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ffd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19ffd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x19FFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFD4u;
            // 0x19ffd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FFDCu;
}
