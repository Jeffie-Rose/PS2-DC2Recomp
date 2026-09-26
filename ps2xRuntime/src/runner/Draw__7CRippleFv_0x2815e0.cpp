#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__7CRippleFv
// Address: 0x2815e0 - 0x281998
void Draw__7CRippleFv_0x2815e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__7CRippleFv_0x2815e0");
#endif

    switch (ctx->pc) {
        case 0x281668u: goto label_281668;
        case 0x281678u: goto label_281678;
        case 0x281684u: goto label_281684;
        case 0x281690u: goto label_281690;
        case 0x28169cu: goto label_28169c;
        case 0x2816acu: goto label_2816ac;
        case 0x2816b8u: goto label_2816b8;
        case 0x2816c4u: goto label_2816c4;
        case 0x2816d0u: goto label_2816d0;
        case 0x2816dcu: goto label_2816dc;
        case 0x2816e8u: goto label_2816e8;
        case 0x2816f4u: goto label_2816f4;
        case 0x281700u: goto label_281700;
        case 0x28170cu: goto label_28170c;
        case 0x281718u: goto label_281718;
        case 0x281724u: goto label_281724;
        case 0x281730u: goto label_281730;
        case 0x2817e8u: goto label_2817e8;
        case 0x2817fcu: goto label_2817fc;
        case 0x281810u: goto label_281810;
        case 0x281824u: goto label_281824;
        case 0x281834u: goto label_281834;
        case 0x281840u: goto label_281840;
        case 0x281850u: goto label_281850;
        case 0x281884u: goto label_281884;
        case 0x281898u: goto label_281898;
        case 0x2818b0u: goto label_2818b0;
        case 0x2818c0u: goto label_2818c0;
        case 0x2818ccu: goto label_2818cc;
        case 0x2818e0u: goto label_2818e0;
        case 0x2818ecu: goto label_2818ec;
        case 0x281904u: goto label_281904;
        case 0x281910u: goto label_281910;
        case 0x281920u: goto label_281920;
        case 0x28192cu: goto label_28192c;
        case 0x28193cu: goto label_28193c;
        case 0x281948u: goto label_281948;
        case 0x281958u: goto label_281958;
        case 0x281964u: goto label_281964;
        case 0x28196cu: goto label_28196c;
        default: break;
    }

    ctx->pc = 0x2815e0u;

    // 0x2815e0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x2815e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x2815e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2815e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2815e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2815e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2815ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2815ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2815f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2815f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2815f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2815f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2815f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2815f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2815fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2815fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x281600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x281600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281604: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x281604u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x281608: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x281608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28160c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x28160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x281610: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x281610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281614: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x281614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x281618: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28161c: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x28161cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281620: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x281624: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x281624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x281628: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28162c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281630: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x281630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x281634: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x281634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x281638: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x281638u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28163c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28163cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281640: 0x0  nop
    ctx->pc = 0x281640u;
    // NOP
    // 0x281644: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x281644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x281648: 0x46011543  div.s       $f21, $f2, $f1
    ctx->pc = 0x281648u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x28164c: 0x0  nop
    ctx->pc = 0x28164cu;
    // NOP
    // 0x281650: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x281650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x281654: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x281654u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x281658: 0x0  nop
    ctx->pc = 0x281658u;
    // NOP
    // 0x28165c: 0x0  nop
    ctx->pc = 0x28165cu;
    // NOP
    // 0x281660: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x281660u;
    SET_GPR_U32(ctx, 31, 0x281668u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281668u; }
        if (ctx->pc != 0x281668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281668u; }
        if (ctx->pc != 0x281668u) { return; }
    }
    ctx->pc = 0x281668u;
label_281668:
    // 0x281668: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28166c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28166cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281670: 0xc04d104  jal         func_134410
    ctx->pc = 0x281670u;
    SET_GPR_U32(ctx, 31, 0x281678u);
    ctx->pc = 0x281674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281670u;
            // 0x281674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281678u; }
        if (ctx->pc != 0x281678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281678u; }
        if (ctx->pc != 0x281678u) { return; }
    }
    ctx->pc = 0x281678u;
label_281678:
    // 0x281678: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28167c: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x28167Cu;
    SET_GPR_U32(ctx, 31, 0x281684u);
    ctx->pc = 0x281680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28167Cu;
            // 0x281680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281684u; }
        if (ctx->pc != 0x281684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281684u; }
        if (ctx->pc != 0x281684u) { return; }
    }
    ctx->pc = 0x281684u;
label_281684:
    // 0x281684: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x281688: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x281688u;
    SET_GPR_U32(ctx, 31, 0x281690u);
    ctx->pc = 0x28168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281688u;
            // 0x28168c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281690u; }
        if (ctx->pc != 0x281690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281690u; }
        if (ctx->pc != 0x281690u) { return; }
    }
    ctx->pc = 0x281690u;
label_281690:
    // 0x281690: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x281694: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x281694u;
    SET_GPR_U32(ctx, 31, 0x28169Cu);
    ctx->pc = 0x281698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281694u;
            // 0x281698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28169Cu; }
        if (ctx->pc != 0x28169Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28169Cu; }
        if (ctx->pc != 0x28169Cu) { return; }
    }
    ctx->pc = 0x28169Cu;
label_28169c:
    // 0x28169c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x28169cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2816a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2816a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2816a4: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x2816A4u;
    SET_GPR_U32(ctx, 31, 0x2816ACu);
    ctx->pc = 0x2816A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2816A4u;
            // 0x2816a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816ACu; }
        if (ctx->pc != 0x2816ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816ACu; }
        if (ctx->pc != 0x2816ACu) { return; }
    }
    ctx->pc = 0x2816ACu;
label_2816ac:
    // 0x2816ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2816acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2816b0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2816B0u;
    SET_GPR_U32(ctx, 31, 0x2816B8u);
    ctx->pc = 0x2816B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2816B0u;
            // 0x2816b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816B8u; }
        if (ctx->pc != 0x2816B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816B8u; }
        if (ctx->pc != 0x2816B8u) { return; }
    }
    ctx->pc = 0x2816B8u;
label_2816b8:
    // 0x2816b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2816b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2816bc: 0xc04d424  jal         func_135090
    ctx->pc = 0x2816BCu;
    SET_GPR_U32(ctx, 31, 0x2816C4u);
    ctx->pc = 0x2816C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2816BCu;
            // 0x2816c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816C4u; }
        if (ctx->pc != 0x2816C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816C4u; }
        if (ctx->pc != 0x2816C4u) { return; }
    }
    ctx->pc = 0x2816C4u;
label_2816c4:
    // 0x2816c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2816c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2816c8: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2816C8u;
    SET_GPR_U32(ctx, 31, 0x2816D0u);
    ctx->pc = 0x2816CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2816C8u;
            // 0x2816cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816D0u; }
        if (ctx->pc != 0x2816D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816D0u; }
        if (ctx->pc != 0x2816D0u) { return; }
    }
    ctx->pc = 0x2816D0u;
label_2816d0:
    // 0x2816d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2816d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2816d4: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2816D4u;
    SET_GPR_U32(ctx, 31, 0x2816DCu);
    ctx->pc = 0x2816D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2816D4u;
            // 0x2816d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816DCu; }
        if (ctx->pc != 0x2816DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816DCu; }
        if (ctx->pc != 0x2816DCu) { return; }
    }
    ctx->pc = 0x2816DCu;
label_2816dc:
    // 0x2816dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2816dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2816e0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2816E0u;
    SET_GPR_U32(ctx, 31, 0x2816E8u);
    ctx->pc = 0x2816E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2816E0u;
            // 0x2816e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816E8u; }
        if (ctx->pc != 0x2816E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816E8u; }
        if (ctx->pc != 0x2816E8u) { return; }
    }
    ctx->pc = 0x2816E8u;
label_2816e8:
    // 0x2816e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2816e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2816ec: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x2816ECu;
    SET_GPR_U32(ctx, 31, 0x2816F4u);
    ctx->pc = 0x2816F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2816ECu;
            // 0x2816f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816F4u; }
        if (ctx->pc != 0x2816F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2816F4u; }
        if (ctx->pc != 0x2816F4u) { return; }
    }
    ctx->pc = 0x2816F4u;
label_2816f4:
    // 0x2816f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2816f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2816f8: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2816F8u;
    SET_GPR_U32(ctx, 31, 0x281700u);
    ctx->pc = 0x2816FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2816F8u;
            // 0x2816fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281700u; }
        if (ctx->pc != 0x281700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281700u; }
        if (ctx->pc != 0x281700u) { return; }
    }
    ctx->pc = 0x281700u;
label_281700:
    // 0x281700: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x281704: 0xc04d44c  jal         func_135130
    ctx->pc = 0x281704u;
    SET_GPR_U32(ctx, 31, 0x28170Cu);
    ctx->pc = 0x281708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281704u;
            // 0x281708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28170Cu; }
        if (ctx->pc != 0x28170Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28170Cu; }
        if (ctx->pc != 0x28170Cu) { return; }
    }
    ctx->pc = 0x28170Cu;
label_28170c:
    // 0x28170c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x28170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x281710: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x281710u;
    SET_GPR_U32(ctx, 31, 0x281718u);
    ctx->pc = 0x281714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281710u;
            // 0x281714: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281718u; }
        if (ctx->pc != 0x281718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281718u; }
        if (ctx->pc != 0x281718u) { return; }
    }
    ctx->pc = 0x281718u;
label_281718:
    // 0x281718: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28171c: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x28171Cu;
    SET_GPR_U32(ctx, 31, 0x281724u);
    ctx->pc = 0x281720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28171Cu;
            // 0x281720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281724u; }
        if (ctx->pc != 0x281724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281724u; }
        if (ctx->pc != 0x281724u) { return; }
    }
    ctx->pc = 0x281724u;
label_281724:
    // 0x281724: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x281728: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x281728u;
    SET_GPR_U32(ctx, 31, 0x281730u);
    ctx->pc = 0x28172Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281728u;
            // 0x28172c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281730u; }
        if (ctx->pc != 0x281730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281730u; }
        if (ctx->pc != 0x281730u) { return; }
    }
    ctx->pc = 0x281730u;
label_281730:
    // 0x281730: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x281730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x281734: 0x27b201a0  addiu       $s2, $sp, 0x1A0
    ctx->pc = 0x281734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x281738: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28173c: 0x27b301b0  addiu       $s3, $sp, 0x1B0
    ctx->pc = 0x28173cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x281740: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x281740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281744: 0x27b001c0  addiu       $s0, $sp, 0x1C0
    ctx->pc = 0x281744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x281748: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x281748u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x28174c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28174cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x281750: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x281750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x281754: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x281754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x281758: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x281758u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28175c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x28175cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x281760: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x281760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281764: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x281764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x281768: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x281768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28176c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28176cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x281770: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x281770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x281774: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x281774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x281778: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x281778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28177c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28177cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281780: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x281780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x281784: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x281784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281788: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x281788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x28178c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x28178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281790: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x281790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x281794: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x281794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x281798: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x281798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x28179c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x28179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2817a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2817a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2817a4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2817a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2817a8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2817a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2817ac: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2817acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x2817b0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2817b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2817b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2817b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2817b8: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x2817b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
    // 0x2817bc: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2817bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2817c0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2817c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2817c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2817c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2817c8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2817c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2817cc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2817ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2817d0: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x2817d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x2817d4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2817d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2817d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2817d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2817dc: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x2817dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    // 0x2817e0: 0xc051638  jal         func_1458E0
    ctx->pc = 0x2817E0u;
    SET_GPR_U32(ctx, 31, 0x2817E8u);
    ctx->pc = 0x2817E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2817E0u;
            // 0x2817e4: 0xe7a001c8  swc1        $f0, 0x1C8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2817E8u; }
        if (ctx->pc != 0x2817E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2817E8u; }
        if (ctx->pc != 0x2817E8u) { return; }
    }
    ctx->pc = 0x2817E8u;
label_2817e8:
    // 0x2817e8: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2817E8u;
    {
        const bool branch_taken_0x2817e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2817ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2817E8u;
            // 0x2817ec: 0x27b101e0  addiu       $s1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2817e8) {
            ctx->pc = 0x28196Cu;
            goto label_28196c;
        }
    }
    ctx->pc = 0x2817F0u;
    // 0x2817f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2817f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2817f4: 0xc051638  jal         func_1458E0
    ctx->pc = 0x2817F4u;
    SET_GPR_U32(ctx, 31, 0x2817FCu);
    ctx->pc = 0x2817F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2817F4u;
            // 0x2817f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2817FCu; }
        if (ctx->pc != 0x2817FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2817FCu; }
        if (ctx->pc != 0x2817FCu) { return; }
    }
    ctx->pc = 0x2817FCu;
label_2817fc:
    // 0x2817fc: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2817FCu;
    {
        const bool branch_taken_0x2817fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2817FCu;
            // 0x281800: 0x27b201f0  addiu       $s2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2817fc) {
            ctx->pc = 0x28196Cu;
            goto label_28196c;
        }
    }
    ctx->pc = 0x281804u;
    // 0x281804: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x281804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281808: 0xc051638  jal         func_1458E0
    ctx->pc = 0x281808u;
    SET_GPR_U32(ctx, 31, 0x281810u);
    ctx->pc = 0x28180Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281808u;
            // 0x28180c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281810u; }
        if (ctx->pc != 0x281810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281810u; }
        if (ctx->pc != 0x281810u) { return; }
    }
    ctx->pc = 0x281810u;
label_281810:
    // 0x281810: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x281810u;
    {
        const bool branch_taken_0x281810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281810u;
            // 0x281814: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281810) {
            ctx->pc = 0x28196Cu;
            goto label_28196c;
        }
    }
    ctx->pc = 0x281818u;
    // 0x281818: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x281818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x28181c: 0xc051638  jal         func_1458E0
    ctx->pc = 0x28181Cu;
    SET_GPR_U32(ctx, 31, 0x281824u);
    ctx->pc = 0x281820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28181Cu;
            // 0x281820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281824u; }
        if (ctx->pc != 0x281824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281824u; }
        if (ctx->pc != 0x281824u) { return; }
    }
    ctx->pc = 0x281824u;
label_281824:
    // 0x281824: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x281824u;
    {
        const bool branch_taken_0x281824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281824u;
            // 0x281828: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281824) {
            ctx->pc = 0x28196Cu;
            goto label_28196c;
        }
    }
    ctx->pc = 0x28182Cu;
    // 0x28182c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x28182Cu;
    SET_GPR_U32(ctx, 31, 0x281834u);
    ctx->pc = 0x281830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28182Cu;
            // 0x281830: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281834u; }
        if (ctx->pc != 0x281834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281834u; }
        if (ctx->pc != 0x281834u) { return; }
    }
    ctx->pc = 0x281834u;
label_281834:
    // 0x281834: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x281834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x281838: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x281838u;
    SET_GPR_U32(ctx, 31, 0x281840u);
    ctx->pc = 0x28183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281838u;
            // 0x28183c: 0x2484d160  addiu       $a0, $a0, -0x2EA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281840u; }
        if (ctx->pc != 0x281840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281840u; }
        if (ctx->pc != 0x281840u) { return; }
    }
    ctx->pc = 0x281840u;
label_281840:
    // 0x281840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x281840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281844: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x281844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x281848: 0xc0b504c  jal         func_2D4130
    ctx->pc = 0x281848u;
    SET_GPR_U32(ctx, 31, 0x281850u);
    ctx->pc = 0x28184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281848u;
            // 0x28184c: 0x27a6023c  addiu       $a2, $sp, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4130u;
    if (runtime->hasFunction(0x2D4130u)) {
        auto targetFn = runtime->lookupFunction(0x2D4130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281850u; }
        if (ctx->pc != 0x281850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRectFontTex__FiPi_0x2d4130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281850u; }
        if (ctx->pc != 0x281850u) { return; }
    }
    ctx->pc = 0x281850u;
label_281850:
    // 0x281850: 0x27a30220  addiu       $v1, $sp, 0x220
    ctx->pc = 0x281850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x281854: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x281854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x281858: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x281858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28185c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x28185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281860: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x281860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281864: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x281864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281868: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x281868u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28186c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x28186cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x281870: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x281870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x281874: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x281874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x281878: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x281878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x28187c: 0xc0b5530  jal         func_2D54C0
    ctx->pc = 0x28187Cu;
    SET_GPR_U32(ctx, 31, 0x281884u);
    ctx->pc = 0x281880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28187Cu;
            // 0x281880: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D54C0u;
    if (runtime->hasFunction(0x2D54C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D54C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281884u; }
        if (ctx->pc != 0x281884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FiP11mgCDrawPrim_0x2d54c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281884u; }
        if (ctx->pc != 0x281884u) { return; }
    }
    ctx->pc = 0x281884u;
label_281884:
    // 0x281884: 0x8fb30214  lw          $s3, 0x214($sp)
    ctx->pc = 0x281884u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x281888: 0x8fb40218  lw          $s4, 0x218($sp)
    ctx->pc = 0x281888u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x28188c: 0x8fb5021c  lw          $s5, 0x21C($sp)
    ctx->pc = 0x28188cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x281890: 0xc0a248c  jal         func_289230
    ctx->pc = 0x281890u;
    SET_GPR_U32(ctx, 31, 0x281898u);
    ctx->pc = 0x281894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281890u;
            // 0x281894: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281898u; }
        if (ctx->pc != 0x281898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281898u; }
        if (ctx->pc != 0x281898u) { return; }
    }
    ctx->pc = 0x281898u;
label_281898:
    // 0x281898: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x281898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28189c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28189cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2818a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2818a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2818a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818a8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2818A8u;
    SET_GPR_U32(ctx, 31, 0x2818B0u);
    ctx->pc = 0x2818ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2818A8u;
            // 0x2818ac: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818B0u; }
        if (ctx->pc != 0x2818B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818B0u; }
        if (ctx->pc != 0x2818B0u) { return; }
    }
    ctx->pc = 0x2818B0u;
label_2818b0:
    // 0x2818b0: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2818b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2818b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2818b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2818b8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2818B8u;
    SET_GPR_U32(ctx, 31, 0x2818C0u);
    ctx->pc = 0x2818BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2818B8u;
            // 0x2818bc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818C0u; }
        if (ctx->pc != 0x2818C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818C0u; }
        if (ctx->pc != 0x2818C0u) { return; }
    }
    ctx->pc = 0x2818C0u;
label_2818c0:
    // 0x2818c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2818c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2818c4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x2818C4u;
    SET_GPR_U32(ctx, 31, 0x2818CCu);
    ctx->pc = 0x2818C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2818C4u;
            // 0x2818c8: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818CCu; }
        if (ctx->pc != 0x2818CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818CCu; }
        if (ctx->pc != 0x2818CCu) { return; }
    }
    ctx->pc = 0x2818CCu;
label_2818cc:
    // 0x2818cc: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2818ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2818d0: 0x275a821  addu        $s5, $s3, $s5
    ctx->pc = 0x2818d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x2818d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2818d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2818d8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2818D8u;
    SET_GPR_U32(ctx, 31, 0x2818E0u);
    ctx->pc = 0x2818DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2818D8u;
            // 0x2818dc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818E0u; }
        if (ctx->pc != 0x2818E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818E0u; }
        if (ctx->pc != 0x2818E0u) { return; }
    }
    ctx->pc = 0x2818E0u;
label_2818e0:
    // 0x2818e0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2818e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2818e4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x2818E4u;
    SET_GPR_U32(ctx, 31, 0x2818ECu);
    ctx->pc = 0x2818E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2818E4u;
            // 0x2818e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818ECu; }
        if (ctx->pc != 0x2818ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2818ECu; }
        if (ctx->pc != 0x2818ECu) { return; }
    }
    ctx->pc = 0x2818ECu;
label_2818ec:
    // 0x2818ec: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2818ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2818f0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2818f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2818f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2818f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818f8: 0x54a021  addu        $s4, $v0, $s4
    ctx->pc = 0x2818f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2818fc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2818FCu;
    SET_GPR_U32(ctx, 31, 0x281904u);
    ctx->pc = 0x281900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2818FCu;
            // 0x281900: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281904u; }
        if (ctx->pc != 0x281904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281904u; }
        if (ctx->pc != 0x281904u) { return; }
    }
    ctx->pc = 0x281904u;
label_281904:
    // 0x281904: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x281908: 0xc04d318  jal         func_134C60
    ctx->pc = 0x281908u;
    SET_GPR_U32(ctx, 31, 0x281910u);
    ctx->pc = 0x28190Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281908u;
            // 0x28190c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281910u; }
        if (ctx->pc != 0x281910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281910u; }
        if (ctx->pc != 0x281910u) { return; }
    }
    ctx->pc = 0x281910u;
label_281910:
    // 0x281910: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x281910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x281914: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x281918: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x281918u;
    SET_GPR_U32(ctx, 31, 0x281920u);
    ctx->pc = 0x28191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281918u;
            // 0x28191c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281920u; }
        if (ctx->pc != 0x281920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281920u; }
        if (ctx->pc != 0x281920u) { return; }
    }
    ctx->pc = 0x281920u;
label_281920:
    // 0x281920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x281920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281924: 0xc04d318  jal         func_134C60
    ctx->pc = 0x281924u;
    SET_GPR_U32(ctx, 31, 0x28192Cu);
    ctx->pc = 0x281928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281924u;
            // 0x281928: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28192Cu; }
        if (ctx->pc != 0x28192Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28192Cu; }
        if (ctx->pc != 0x28192Cu) { return; }
    }
    ctx->pc = 0x28192Cu;
label_28192c:
    // 0x28192c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28192cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281930: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x281930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x281934: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x281934u;
    SET_GPR_U32(ctx, 31, 0x28193Cu);
    ctx->pc = 0x281938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281934u;
            // 0x281938: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28193Cu; }
        if (ctx->pc != 0x28193Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28193Cu; }
        if (ctx->pc != 0x28193Cu) { return; }
    }
    ctx->pc = 0x28193Cu;
label_28193c:
    // 0x28193c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28193cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281940: 0xc04d318  jal         func_134C60
    ctx->pc = 0x281940u;
    SET_GPR_U32(ctx, 31, 0x281948u);
    ctx->pc = 0x281944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281940u;
            // 0x281944: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281948u; }
        if (ctx->pc != 0x281948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281948u; }
        if (ctx->pc != 0x281948u) { return; }
    }
    ctx->pc = 0x281948u;
label_281948:
    // 0x281948: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x281948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28194c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28194cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281950: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x281950u;
    SET_GPR_U32(ctx, 31, 0x281958u);
    ctx->pc = 0x281954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281950u;
            // 0x281954: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281958u; }
        if (ctx->pc != 0x281958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281958u; }
        if (ctx->pc != 0x281958u) { return; }
    }
    ctx->pc = 0x281958u;
label_281958:
    // 0x281958: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28195c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x28195Cu;
    SET_GPR_U32(ctx, 31, 0x281964u);
    ctx->pc = 0x281960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28195Cu;
            // 0x281960: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281964u; }
        if (ctx->pc != 0x281964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281964u; }
        if (ctx->pc != 0x281964u) { return; }
    }
    ctx->pc = 0x281964u;
label_281964:
    // 0x281964: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x281964u;
    SET_GPR_U32(ctx, 31, 0x28196Cu);
    ctx->pc = 0x281968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281964u;
            // 0x281968: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28196Cu; }
        if (ctx->pc != 0x28196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28196Cu; }
        if (ctx->pc != 0x28196Cu) { return; }
    }
    ctx->pc = 0x28196Cu;
label_28196c:
    // 0x28196c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28196cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x281970: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x281970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x281974: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x281974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281978: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x281978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28197c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28197cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281980: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x281980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281984: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x281984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281988: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x281988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28198c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28198cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281990: 0x3e00008  jr          $ra
    ctx->pc = 0x281990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281990u;
            // 0x281994: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281998u;
}
