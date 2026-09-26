#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepNormal__6ClsMesFv
// Address: 0x1538c0 - 0x153b98
void StepNormal__6ClsMesFv_0x1538c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepNormal__6ClsMesFv_0x1538c0");
#endif

    switch (ctx->pc) {
        case 0x153a04u: goto label_153a04;
        case 0x153a20u: goto label_153a20;
        case 0x153a2cu: goto label_153a2c;
        case 0x153a34u: goto label_153a34;
        case 0x153a74u: goto label_153a74;
        case 0x153a7cu: goto label_153a7c;
        case 0x153a88u: goto label_153a88;
        case 0x153ac8u: goto label_153ac8;
        case 0x153ad0u: goto label_153ad0;
        case 0x153adcu: goto label_153adc;
        case 0x153b14u: goto label_153b14;
        case 0x153b1cu: goto label_153b1c;
        case 0x153b24u: goto label_153b24;
        case 0x153b54u: goto label_153b54;
        case 0x153b68u: goto label_153b68;
        case 0x153b7cu: goto label_153b7c;
        default: break;
    }

    ctx->pc = 0x1538c0u;

    // 0x1538c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1538c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1538c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1538c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1538c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1538c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1538cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1538ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1538d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1538d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1538d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1538d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1538d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1538d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1538dc: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1538dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1538e0: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1538E0u;
    {
        const bool branch_taken_0x1538e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1538E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1538E0u;
            // 0x1538e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1538e0) {
            ctx->pc = 0x153908u;
            goto label_153908;
        }
    }
    ctx->pc = 0x1538E8u;
    // 0x1538e8: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x1538e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x1538ec: 0x46000a3  bltz        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1538ECu;
    {
        const bool branch_taken_0x1538ec = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1538ec) {
            ctx->pc = 0x153B7Cu;
            goto label_153b7c;
        }
    }
    ctx->pc = 0x1538F4u;
    // 0x1538f4: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x1538f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x1538f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1538F8u;
    {
        const bool branch_taken_0x1538f8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1538f8) {
            ctx->pc = 0x153908u;
            goto label_153908;
        }
    }
    ctx->pc = 0x153900u;
    // 0x153900: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x153900u;
    {
        const bool branch_taken_0x153900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153900u;
            // 0x153904: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153900) {
            ctx->pc = 0x153B80u;
            goto label_153b80;
        }
    }
    ctx->pc = 0x153908u;
label_153908:
    // 0x153908: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x153908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15390c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15390cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153910: 0x0  nop
    ctx->pc = 0x153910u;
    // NOP
    // 0x153914: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x153914u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153918: 0x0  nop
    ctx->pc = 0x153918u;
    // NOP
    // 0x15391c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x15391Cu;
    {
        const bool branch_taken_0x15391c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15391c) {
            ctx->pc = 0x153930u;
            goto label_153930;
        }
    }
    ctx->pc = 0x153924u;
    // 0x153924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153928: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x153928u;
    {
        const bool branch_taken_0x153928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15392Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153928u;
            // 0x15392c: 0xae020188  sw          $v0, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153928) {
            ctx->pc = 0x1539C8u;
            goto label_1539c8;
        }
    }
    ctx->pc = 0x153930u;
label_153930:
    // 0x153930: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x153930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x153934: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153934u;
    {
        const bool branch_taken_0x153934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153934) {
            ctx->pc = 0x15398Cu;
            goto label_15398c;
        }
    }
    ctx->pc = 0x15393Cu;
    // 0x15393c: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x15393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x153944: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x153944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153948: 0x0  nop
    ctx->pc = 0x153948u;
    // NOP
    // 0x15394c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15394cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153950: 0x0  nop
    ctx->pc = 0x153950u;
    // NOP
    // 0x153954: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153954u;
    {
        const bool branch_taken_0x153954 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153954) {
            ctx->pc = 0x153964u;
            goto label_153964;
        }
    }
    ctx->pc = 0x15395Cu;
    // 0x15395c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15395cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x153960: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x153960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_153964:
    // 0x153964: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x153964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153968: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x153968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15396c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15396cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153970: 0x0  nop
    ctx->pc = 0x153970u;
    // NOP
    // 0x153974: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x153974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153978: 0x0  nop
    ctx->pc = 0x153978u;
    // NOP
    // 0x15397c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x15397Cu;
    {
        const bool branch_taken_0x15397c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15397c) {
            ctx->pc = 0x1539C8u;
            goto label_1539c8;
        }
    }
    ctx->pc = 0x153984u;
    // 0x153984: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x153984u;
    {
        const bool branch_taken_0x153984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153984u;
            // 0x153988: 0xe6000188  swc1        $f0, 0x188($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153984) {
            ctx->pc = 0x1539C8u;
            goto label_1539c8;
        }
    }
    ctx->pc = 0x15398Cu;
label_15398c:
    // 0x15398c: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x15398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153990: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x153990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153994: 0x0  nop
    ctx->pc = 0x153994u;
    // NOP
    // 0x153998: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x153998u;
    {
        const bool branch_taken_0x153998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153998) {
            ctx->pc = 0x1539A8u;
            goto label_1539a8;
        }
    }
    ctx->pc = 0x1539A0u;
    // 0x1539a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1539a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1539a4: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x1539a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_1539a8:
    // 0x1539a8: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x1539a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1539ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1539acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1539b0: 0x0  nop
    ctx->pc = 0x1539b0u;
    // NOP
    // 0x1539b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1539b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1539b8: 0x0  nop
    ctx->pc = 0x1539b8u;
    // NOP
    // 0x1539bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1539BCu;
    {
        const bool branch_taken_0x1539bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1539bc) {
            ctx->pc = 0x1539C8u;
            goto label_1539c8;
        }
    }
    ctx->pc = 0x1539C4u;
    // 0x1539c4: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x1539c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_1539c8:
    // 0x1539c8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1539c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1539cc: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1539CCu;
    {
        const bool branch_taken_0x1539cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1539cc) {
            ctx->pc = 0x153B74u;
            goto label_153b74;
        }
    }
    ctx->pc = 0x1539D4u;
    // 0x1539d4: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x1539d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1539d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1539d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1539dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1539dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1539e0: 0xc6000160  lwc1        $f0, 0x160($s0)
    ctx->pc = 0x1539e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1539e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1539e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1539e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1539e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1539ec: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x1539ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1539f0: 0x8e02015c  lw          $v0, 0x15C($s0)
    ctx->pc = 0x1539f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x1539f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1539f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1539f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1539f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1539fc: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1539FCu;
    SET_GPR_U32(ctx, 31, 0x153A04u);
    ctx->pc = 0x153A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1539FCu;
            // 0x153a00: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A04u; }
        if (ctx->pc != 0x153A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A04u; }
        if (ctx->pc != 0x153A04u) { return; }
    }
    ctx->pc = 0x153A04u;
label_153a04:
    // 0x153a04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x153a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a08: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x153a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x153a0c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x153a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x153a10: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x153a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a18: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x153A18u;
    SET_GPR_U32(ctx, 31, 0x153A20u);
    ctx->pc = 0x153A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153A18u;
            // 0x153a1c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A20u; }
        if (ctx->pc != 0x153A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A20u; }
        if (ctx->pc != 0x153A20u) { return; }
    }
    ctx->pc = 0x153A20u;
label_153a20:
    // 0x153a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a24: 0xc047aa0  jal         func_11EA80
    ctx->pc = 0x153A24u;
    SET_GPR_U32(ctx, 31, 0x153A2Cu);
    ctx->pc = 0x153A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153A24u;
            // 0x153a28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EA80u;
    if (runtime->hasFunction(0x11EA80u)) {
        auto targetFn = runtime->lookupFunction(0x11EA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A2Cu; }
        if (ctx->pc != 0x153A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2_0x11ea80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A2Cu; }
        if (ctx->pc != 0x153A2Cu) { return; }
    }
    ctx->pc = 0x153A2Cu;
label_153a2c:
    // 0x153a2c: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x153A2Cu;
    SET_GPR_U32(ctx, 31, 0x153A34u);
    ctx->pc = 0x153A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153A2Cu;
            // 0x153a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A34u; }
        if (ctx->pc != 0x153A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A34u; }
        if (ctx->pc != 0x153A34u) { return; }
    }
    ctx->pc = 0x153A34u;
label_153a34:
    // 0x153a34: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x153a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x153a38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x153a38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x153a3c: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x153a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x153a40: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x153a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x153a44: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x153a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153a48: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x153a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x153a4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x153a4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x153a50: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x153a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153a58: 0x0  nop
    ctx->pc = 0x153a58u;
    // NOP
    // 0x153a5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153a5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153a60: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x153a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x153a64: 0xc6000160  lwc1        $f0, 0x160($s0)
    ctx->pc = 0x153a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153a68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153a6c: 0xc054408  jal         func_151020
    ctx->pc = 0x153A6Cu;
    SET_GPR_U32(ctx, 31, 0x153A74u);
    ctx->pc = 0x153A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153A6Cu;
            // 0x153a70: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x151020u;
    if (runtime->hasFunction(0x151020u)) {
        auto targetFn = runtime->lookupFunction(0x151020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A74u; }
        if (ctx->pc != 0x153A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RollPos__FPfPffPf_0x151020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A74u; }
        if (ctx->pc != 0x153A74u) { return; }
    }
    ctx->pc = 0x153A74u;
label_153a74:
    // 0x153a74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x153A74u;
    SET_GPR_U32(ctx, 31, 0x153A7Cu);
    ctx->pc = 0x153A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153A74u;
            // 0x153a78: 0xc7ac0058  lwc1        $f12, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A7Cu; }
        if (ctx->pc != 0x153A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A7Cu; }
        if (ctx->pc != 0x153A7Cu) { return; }
    }
    ctx->pc = 0x153A7Cu;
label_153a7c:
    // 0x153a7c: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x153a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x153a80: 0xc0a248c  jal         func_289230
    ctx->pc = 0x153A80u;
    SET_GPR_U32(ctx, 31, 0x153A88u);
    ctx->pc = 0x153A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153A80u;
            // 0x153a84: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A88u; }
        if (ctx->pc != 0x153A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A88u; }
        if (ctx->pc != 0x153A88u) { return; }
    }
    ctx->pc = 0x153A88u;
label_153a88:
    // 0x153a88: 0xae020170  sw          $v0, 0x170($s0)
    ctx->pc = 0x153a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
    // 0x153a8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x153a8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x153a90: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x153a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x153a94: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x153a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x153a98: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x153a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x153a9c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x153a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x153aa0: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x153aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x153aa4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x153aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153aac: 0x0  nop
    ctx->pc = 0x153aacu;
    // NOP
    // 0x153ab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153ab4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x153ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x153ab8: 0xc6000160  lwc1        $f0, 0x160($s0)
    ctx->pc = 0x153ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153abc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153ac0: 0xc054408  jal         func_151020
    ctx->pc = 0x153AC0u;
    SET_GPR_U32(ctx, 31, 0x153AC8u);
    ctx->pc = 0x153AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153AC0u;
            // 0x153ac4: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x151020u;
    if (runtime->hasFunction(0x151020u)) {
        auto targetFn = runtime->lookupFunction(0x151020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AC8u; }
        if (ctx->pc != 0x153AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RollPos__FPfPffPf_0x151020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AC8u; }
        if (ctx->pc != 0x153AC8u) { return; }
    }
    ctx->pc = 0x153AC8u;
label_153ac8:
    // 0x153ac8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x153AC8u;
    SET_GPR_U32(ctx, 31, 0x153AD0u);
    ctx->pc = 0x153ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153AC8u;
            // 0x153acc: 0xc7ac0068  lwc1        $f12, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AD0u; }
        if (ctx->pc != 0x153AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153AD0u; }
        if (ctx->pc != 0x153AD0u) { return; }
    }
    ctx->pc = 0x153AD0u;
label_153ad0:
    // 0x153ad0: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x153ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x153ad4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x153AD4u;
    SET_GPR_U32(ctx, 31, 0x153ADCu);
    ctx->pc = 0x153AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153AD4u;
            // 0x153ad8: 0xc7ac006c  lwc1        $f12, 0x6C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153ADCu; }
        if (ctx->pc != 0x153ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153ADCu; }
        if (ctx->pc != 0x153ADCu) { return; }
    }
    ctx->pc = 0x153ADCu;
label_153adc:
    // 0x153adc: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x153adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x153ae0: 0x8e060154  lw          $a2, 0x154($s0)
    ctx->pc = 0x153ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x153ae4: 0x8e05015c  lw          $a1, 0x15C($s0)
    ctx->pc = 0x153ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x153ae8: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x153ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x153aec: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x153aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x153af0: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x153af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x153af4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x153af4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153af8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x153af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153afc: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x153afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x153b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b04: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x153b04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x153b08: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x153b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x153b0c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x153B0Cu;
    SET_GPR_U32(ctx, 31, 0x153B14u);
    ctx->pc = 0x153B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153B0Cu;
            // 0x153b10: 0x4615ab1c  madd.s      $f12, $f21, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B14u; }
        if (ctx->pc != 0x153B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B14u; }
        if (ctx->pc != 0x153B14u) { return; }
    }
    ctx->pc = 0x153B14u;
label_153b14:
    // 0x153b14: 0xc047bf2  jal         func_11EFC8
    ctx->pc = 0x153B14u;
    SET_GPR_U32(ctx, 31, 0x153B1Cu);
    ctx->pc = 0x153B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153B14u;
            // 0x153b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EFC8u;
    if (runtime->hasFunction(0x11EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B1Cu; }
        if (ctx->pc != 0x153B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrt_0x11efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B1Cu; }
        if (ctx->pc != 0x153B1Cu) { return; }
    }
    ctx->pc = 0x153B1Cu;
label_153b1c:
    // 0x153b1c: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x153B1Cu;
    SET_GPR_U32(ctx, 31, 0x153B24u);
    ctx->pc = 0x153B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153B1Cu;
            // 0x153b20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B24u; }
        if (ctx->pc != 0x153B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B24u; }
        if (ctx->pc != 0x153B24u) { return; }
    }
    ctx->pc = 0x153B24u;
label_153b24:
    // 0x153b24: 0xc6010168  lwc1        $f1, 0x168($s0)
    ctx->pc = 0x153b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153b28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x153b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x153b2c: 0x46150882  mul.s       $f2, $f1, $f21
    ctx->pc = 0x153b2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x153b30: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x153b30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x153b34: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x153b34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x153b38: 0x0  nop
    ctx->pc = 0x153b38u;
    // NOP
    // 0x153b3c: 0x0  nop
    ctx->pc = 0x153b3cu;
    // NOP
    // 0x153b40: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x153b40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x153b44: 0x0  nop
    ctx->pc = 0x153b44u;
    // NOP
    // 0x153b48: 0x0  nop
    ctx->pc = 0x153b48u;
    // NOP
    // 0x153b4c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x153B4Cu;
    SET_GPR_U32(ctx, 31, 0x153B54u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B54u; }
        if (ctx->pc != 0x153B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B54u; }
        if (ctx->pc != 0x153B54u) { return; }
    }
    ctx->pc = 0x153B54u;
label_153b54:
    // 0x153b54: 0x8e03015c  lw          $v1, 0x15C($s0)
    ctx->pc = 0x153b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x153b58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x153b58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x153b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153b60: 0xc0a248c  jal         func_289230
    ctx->pc = 0x153B60u;
    SET_GPR_U32(ctx, 31, 0x153B68u);
    ctx->pc = 0x153B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153B60u;
            // 0x153b64: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B68u; }
        if (ctx->pc != 0x153B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B68u; }
        if (ctx->pc != 0x153B68u) { return; }
    }
    ctx->pc = 0x153B68u;
label_153b68:
    // 0x153b68: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x153b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x153b6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153b70: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x153b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_153b74:
    // 0x153b74: 0xc055054  jal         func_154150
    ctx->pc = 0x153B74u;
    SET_GPR_U32(ctx, 31, 0x153B7Cu);
    ctx->pc = 0x153B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153B74u;
            // 0x153b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154150u;
    if (runtime->hasFunction(0x154150u)) {
        auto targetFn = runtime->lookupFunction(0x154150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B7Cu; }
        if (ctx->pc != 0x153B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MyTextureMake__6ClsMesFv_0x154150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153B7Cu; }
        if (ctx->pc != 0x153B7Cu) { return; }
    }
    ctx->pc = 0x153B7Cu;
label_153b7c:
    // 0x153b7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x153b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_153b80:
    // 0x153b80: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x153b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x153b84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x153b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153b88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x153b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153b8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x153b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153b90: 0x3e00008  jr          $ra
    ctx->pc = 0x153B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153B90u;
            // 0x153b94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153B98u;
}
