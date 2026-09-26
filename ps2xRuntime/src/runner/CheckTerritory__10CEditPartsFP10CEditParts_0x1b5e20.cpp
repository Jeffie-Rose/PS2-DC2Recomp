#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckTerritory__10CEditPartsFP10CEditParts
// Address: 0x1b5e20 - 0x1b5f50
void CheckTerritory__10CEditPartsFP10CEditParts_0x1b5e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckTerritory__10CEditPartsFP10CEditParts_0x1b5e20");
#endif

    switch (ctx->pc) {
        case 0x1b5e84u: goto label_1b5e84;
        case 0x1b5e90u: goto label_1b5e90;
        case 0x1b5ea4u: goto label_1b5ea4;
        case 0x1b5eb8u: goto label_1b5eb8;
        case 0x1b5ed8u: goto label_1b5ed8;
        default: break;
    }

    ctx->pc = 0x1b5e20u;

    // 0x1b5e20: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1b5e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b5e24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b5e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b5e28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b5e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b5e2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b5e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b5e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b5e34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b5e38: 0x8c820324  lw          $v0, 0x324($a0)
    ctx->pc = 0x1b5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x1b5e3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5E3Cu;
    {
        const bool branch_taken_0x1b5e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E3Cu;
            // 0x1b5e40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e3c) {
            ctx->pc = 0x1B5E58u;
            goto label_1b5e58;
        }
    }
    ctx->pc = 0x1B5E44u;
    // 0x1b5e44: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5E44u;
    {
        const bool branch_taken_0x1b5e44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E44u;
            // 0x1b5e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e44) {
            ctx->pc = 0x1B5E5Cu;
            goto label_1b5e5c;
        }
    }
    ctx->pc = 0x1B5E4Cu;
    // 0x1b5e4c: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1b5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1b5e50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5E50u;
    {
        const bool branch_taken_0x1b5e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e50) {
            ctx->pc = 0x1B5E64u;
            goto label_1b5e64;
        }
    }
    ctx->pc = 0x1B5E58u;
label_1b5e58:
    // 0x1b5e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e5c:
    // 0x1b5e5c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1B5E5Cu;
    {
        const bool branch_taken_0x1b5e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E5Cu;
            // 0x1b5e60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e5c) {
            ctx->pc = 0x1B5F3Cu;
            goto label_1b5f3c;
        }
    }
    ctx->pc = 0x1B5E64u;
label_1b5e64:
    // 0x1b5e64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b5e68: 0x30420ac2  andi        $v0, $v0, 0xAC2
    ctx->pc = 0x1b5e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2754);
    // 0x1b5e6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5E6Cu;
    {
        const bool branch_taken_0x1b5e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E6Cu;
            // 0x1b5e70: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e6c) {
            ctx->pc = 0x1B5E7Cu;
            goto label_1b5e7c;
        }
    }
    ctx->pc = 0x1B5E74u;
    // 0x1b5e74: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B5E74u;
    {
        const bool branch_taken_0x1b5e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E74u;
            // 0x1b5e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e74) {
            ctx->pc = 0x1B5F38u;
            goto label_1b5f38;
        }
    }
    ctx->pc = 0x1B5E7Cu;
label_1b5e7c:
    // 0x1b5e7c: 0xc059cc0  jal         func_167300
    ctx->pc = 0x1B5E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B5E84u);
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E84u; }
        if (ctx->pc != 0x1B5E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E84u; }
        if (ctx->pc != 0x1B5E84u) { return; }
    }
    ctx->pc = 0x1B5E84u;
label_1b5e84:
    // 0x1b5e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e88: 0xc059cc0  jal         func_167300
    ctx->pc = 0x1B5E88u;
    SET_GPR_U32(ctx, 31, 0x1B5E90u);
    ctx->pc = 0x1B5E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E88u;
            // 0x1b5e8c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E90u; }
        if (ctx->pc != 0x1B5E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E90u; }
        if (ctx->pc != 0x1B5E90u) { return; }
    }
    ctx->pc = 0x1B5E90u;
label_1b5e90:
    // 0x1b5e90: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1b5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1b5e94: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b5e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b5e98: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1b5e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b5e9c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1B5E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B5EA4u);
    ctx->pc = 0x1B5EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E9Cu;
            // 0x1b5ea0: 0x24460260  addiu       $a2, $v0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5EA4u; }
        if (ctx->pc != 0x1B5EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5EA4u; }
        if (ctx->pc != 0x1B5EA4u) { return; }
    }
    ctx->pc = 0x1B5EA4u;
label_1b5ea4:
    // 0x1b5ea4: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1b5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1b5ea8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b5ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b5eac: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b5eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b5eb0: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1B5EB0u;
    SET_GPR_U32(ctx, 31, 0x1B5EB8u);
    ctx->pc = 0x1B5EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5EB0u;
            // 0x1b5eb4: 0x24460260  addiu       $a2, $v0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5EB8u; }
        if (ctx->pc != 0x1B5EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5EB8u; }
        if (ctx->pc != 0x1B5EB8u) { return; }
    }
    ctx->pc = 0x1B5EB8u;
label_1b5eb8:
    // 0x1b5eb8: 0x8e230324  lw          $v1, 0x324($s1)
    ctx->pc = 0x1b5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1b5ebc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b5ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b5ec0: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1b5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1b5ec4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b5ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b5ec8: 0xc4610270  lwc1        $f1, 0x270($v1)
    ctx->pc = 0x1b5ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5ecc: 0xc4400270  lwc1        $f0, 0x270($v0)
    ctx->pc = 0x1b5eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5ed0: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x1B5ED0u;
    SET_GPR_U32(ctx, 31, 0x1B5ED8u);
    ctx->pc = 0x1B5ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5ED0u;
            // 0x1b5ed4: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5ED8u; }
        if (ctx->pc != 0x1B5ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5ED8u; }
        if (ctx->pc != 0x1B5ED8u) { return; }
    }
    ctx->pc = 0x1B5ED8u;
label_1b5ed8:
    // 0x1b5ed8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1b5ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5edc: 0x0  nop
    ctx->pc = 0x1b5edcu;
    // NOP
    // 0x1b5ee0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5EE0u;
    {
        const bool branch_taken_0x1b5ee0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5EE0u;
            // 0x1b5ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ee0) {
            ctx->pc = 0x1B5EF0u;
            goto label_1b5ef0;
        }
    }
    ctx->pc = 0x1B5EE8u;
    // 0x1b5ee8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B5EE8u;
    {
        const bool branch_taken_0x1b5ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ee8) {
            ctx->pc = 0x1B5F38u;
            goto label_1b5f38;
        }
    }
    ctx->pc = 0x1B5EF0u;
label_1b5ef0:
    // 0x1b5ef0: 0x8e230324  lw          $v1, 0x324($s1)
    ctx->pc = 0x1b5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1b5ef4: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1b5ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b5ef8: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1b5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1b5efc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1b5efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5f00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5f04: 0xc4640274  lwc1        $f4, 0x274($v1)
    ctx->pc = 0x1b5f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b5f08: 0xc4430274  lwc1        $f3, 0x274($v0)
    ctx->pc = 0x1b5f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b5f0c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1b5f0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1b5f10: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b5f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5f14: 0x0  nop
    ctx->pc = 0x1b5f14u;
    // NOP
    // 0x1b5f18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5F18u;
    {
        const bool branch_taken_0x1b5f18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F18u;
            // 0x1b5f1c: 0x46032040  add.s       $f1, $f4, $f3 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f18) {
            ctx->pc = 0x1B5F24u;
            goto label_1b5f24;
        }
    }
    ctx->pc = 0x1B5F20u;
    // 0x1b5f20: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1b5f20u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1b5f24:
    // 0x1b5f24: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1b5f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5f28: 0x0  nop
    ctx->pc = 0x1b5f28u;
    // NOP
    // 0x1b5f2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5F2Cu;
    {
        const bool branch_taken_0x1b5f2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F2Cu;
            // 0x1b5f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f2c) {
            ctx->pc = 0x1B5F38u;
            goto label_1b5f38;
        }
    }
    ctx->pc = 0x1B5F34u;
    // 0x1b5f34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5f38:
    // 0x1b5f38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b5f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5f3c:
    // 0x1b5f3c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b5f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b5f40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b5f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5f44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b5f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5F48u;
            // 0x1b5f4c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5F50u;
}
