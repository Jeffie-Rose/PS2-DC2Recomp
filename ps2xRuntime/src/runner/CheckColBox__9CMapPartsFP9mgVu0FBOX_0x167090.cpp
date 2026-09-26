#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckColBox__9CMapPartsFP9mgVu0FBOX
// Address: 0x167090 - 0x1671c4
void CheckColBox__9CMapPartsFP9mgVu0FBOX_0x167090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckColBox__9CMapPartsFP9mgVu0FBOX_0x167090");
#endif

    switch (ctx->pc) {
        case 0x1670c4u: goto label_1670c4;
        case 0x1670e8u: goto label_1670e8;
        case 0x167194u: goto label_167194;
        case 0x1671a8u: goto label_1671a8;
        default: break;
    }

    ctx->pc = 0x167090u;

    // 0x167090: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x167090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x167094: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x167094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x167098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16709c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1670a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1670a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1670a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1670a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670a8: 0x8c820270  lw          $v0, 0x270($a0)
    ctx->pc = 0x1670a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x1670ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1670ACu;
    {
        const bool branch_taken_0x1670ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1670B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670ACu;
            // 0x1670b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670ac) {
            ctx->pc = 0x1670BCu;
            goto label_1670bc;
        }
    }
    ctx->pc = 0x1670B4u;
    // 0x1670b4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1670B4u;
    {
        const bool branch_taken_0x1670b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1670B4u;
            // 0x1670b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670b4) {
            ctx->pc = 0x1671ACu;
            goto label_1671ac;
        }
    }
    ctx->pc = 0x1670BCu;
label_1670bc:
    // 0x1670bc: 0xc059cc0  jal         func_167300
    ctx->pc = 0x1670BCu;
    SET_GPR_U32(ctx, 31, 0x1670C4u);
    ctx->pc = 0x1670C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1670BCu;
            // 0x1670c0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1670C4u; }
        if (ctx->pc != 0x1670C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1670C4u; }
        if (ctx->pc != 0x1670C4u) { return; }
    }
    ctx->pc = 0x1670C4u;
label_1670c4:
    // 0x1670c4: 0x7a2302a0  lq          $v1, 0x2A0($s1)
    ctx->pc = 0x1670c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 672)));
    // 0x1670c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1670c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1670cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1670ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1670d0: 0x27b2008c  addiu       $s2, $sp, 0x8C
    ctx->pc = 0x1670d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1670d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1670d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1670d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1670d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670dc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1670dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1670e0: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1670E0u;
    SET_GPR_U32(ctx, 31, 0x1670E8u);
    ctx->pc = 0x1670E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1670E0u;
            // 0x1670e4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1670E8u; }
        if (ctx->pc != 0x1670E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1670E8u; }
        if (ctx->pc != 0x1670E8u) { return; }
    }
    ctx->pc = 0x1670E8u;
label_1670e8:
    // 0x1670e8: 0xc62002ac  lwc1        $f0, 0x2AC($s1)
    ctx->pc = 0x1670e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1670ec: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1670ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1670f0: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x1670f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1670f4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1670f4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1670f8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1670f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1670fc: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x1670fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x167100: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167104: 0x0  nop
    ctx->pc = 0x167104u;
    // NOP
    // 0x167108: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x167108u;
    {
        const bool branch_taken_0x167108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16710Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167108u;
            // 0x16710c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167108) {
            ctx->pc = 0x167118u;
            goto label_167118;
        }
    }
    ctx->pc = 0x167110u;
    // 0x167110: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x167110u;
    {
        const bool branch_taken_0x167110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167110u;
            // 0x167114: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167110) {
            ctx->pc = 0x1671B0u;
            goto label_1671b0;
        }
    }
    ctx->pc = 0x167118u;
label_167118:
    // 0x167118: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x167118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16711c: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x16711cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x167120: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167124: 0x0  nop
    ctx->pc = 0x167124u;
    // NOP
    // 0x167128: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x167128u;
    {
        const bool branch_taken_0x167128 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167128u;
            // 0x16712c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167128) {
            ctx->pc = 0x167138u;
            goto label_167138;
        }
    }
    ctx->pc = 0x167130u;
    // 0x167130: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x167130u;
    {
        const bool branch_taken_0x167130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167130) {
            ctx->pc = 0x1671ACu;
            goto label_1671ac;
        }
    }
    ctx->pc = 0x167138u;
label_167138:
    // 0x167138: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x167138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16713c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x16713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167140: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x167140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x167144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167148: 0x0  nop
    ctx->pc = 0x167148u;
    // NOP
    // 0x16714c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16714Cu;
    {
        const bool branch_taken_0x16714c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16714Cu;
            // 0x167150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16714c) {
            ctx->pc = 0x16715Cu;
            goto label_16715c;
        }
    }
    ctx->pc = 0x167154u;
    // 0x167154: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x167154u;
    {
        const bool branch_taken_0x167154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167154) {
            ctx->pc = 0x1671ACu;
            goto label_1671ac;
        }
    }
    ctx->pc = 0x16715Cu;
label_16715c:
    // 0x16715c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x16715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167160: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x167160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x167164: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167168: 0x0  nop
    ctx->pc = 0x167168u;
    // NOP
    // 0x16716c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16716Cu;
    {
        const bool branch_taken_0x16716c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16716Cu;
            // 0x167170: 0x27b200a0  addiu       $s2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16716c) {
            ctx->pc = 0x16717Cu;
            goto label_16717c;
        }
    }
    ctx->pc = 0x167174u;
    // 0x167174: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x167174u;
    {
        const bool branch_taken_0x167174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167174u;
            // 0x167178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167174) {
            ctx->pc = 0x1671ACu;
            goto label_1671ac;
        }
    }
    ctx->pc = 0x16717Cu;
label_16717c:
    // 0x16717c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16717cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x167180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x167180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167184: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x167184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167188: 0x26270280  addiu       $a3, $s1, 0x280
    ctx->pc = 0x167188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x16718c: 0xc04c278  jal         func_1309E0
    ctx->pc = 0x16718Cu;
    SET_GPR_U32(ctx, 31, 0x167194u);
    ctx->pc = 0x167190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16718Cu;
            // 0x167190: 0x26280290  addiu       $t0, $s1, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309E0u;
    if (runtime->hasFunction(0x1309E0u)) {
        auto targetFn = runtime->lookupFunction(0x1309E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167194u; }
        if (ctx->pc != 0x167194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167194u; }
        if (ctx->pc != 0x167194u) { return; }
    }
    ctx->pc = 0x167194u;
label_167194:
    // 0x167194: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x167194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167198: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x167198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16719c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16719cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671a0: 0xc04bca4  jal         func_12F290
    ctx->pc = 0x1671A0u;
    SET_GPR_U32(ctx, 31, 0x1671A8u);
    ctx->pc = 0x1671A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1671A0u;
            // 0x1671a4: 0x26070010  addiu       $a3, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F290u;
    if (runtime->hasFunction(0x12F290u)) {
        auto targetFn = runtime->lookupFunction(0x12F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671A8u; }
        if (ctx->pc != 0x1671A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgClipBox__FPfPfPfPf_0x12f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1671A8u; }
        if (ctx->pc != 0x1671A8u) { return; }
    }
    ctx->pc = 0x1671A8u;
label_1671a8:
    // 0x1671a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1671a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1671ac:
    // 0x1671ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1671acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1671b0:
    // 0x1671b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1671b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1671b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1671b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1671b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1671b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1671bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1671BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1671C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1671BCu;
            // 0x1671c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1671C4u;
}
