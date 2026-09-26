#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IntersectionBox__FPfPfP9mgVu0FBOXPA4_f
// Address: 0x2de650 - 0x2deafc
void IntersectionBox__FPfPfP9mgVu0FBOXPA4_f_0x2de650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IntersectionBox__FPfPfP9mgVu0FBOXPA4_f_0x2de650");
#endif

    switch (ctx->pc) {
        case 0x2de690u: goto label_2de690;
        case 0x2de6b8u: goto label_2de6b8;
        case 0x2de6c8u: goto label_2de6c8;
        case 0x2de6f8u: goto label_2de6f8;
        case 0x2de708u: goto label_2de708;
        case 0x2de7c4u: goto label_2de7c4;
        case 0x2de7e8u: goto label_2de7e8;
        case 0x2de828u: goto label_2de828;
        case 0x2de858u: goto label_2de858;
        case 0x2de868u: goto label_2de868;
        case 0x2de924u: goto label_2de924;
        case 0x2de9a8u: goto label_2de9a8;
        case 0x2de9c0u: goto label_2de9c0;
        case 0x2dea44u: goto label_2dea44;
        case 0x2deaacu: goto label_2deaac;
        default: break;
    }

    ctx->pc = 0x2de650u;

    // 0x2de650: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2de650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2de654: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2de654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2de658: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2de658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2de65c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2de65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2de660: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2de660u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de664: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2de664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2de668: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2de668u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de66c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2de66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2de670: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2de670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2de674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2de674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2de678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2de67c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de680: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2de680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de684: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2de684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de688: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2DE688u;
    SET_GPR_U32(ctx, 31, 0x2DE690u);
    ctx->pc = 0x2DE68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE688u;
            // 0x2de68c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE690u; }
        if (ctx->pc != 0x2DE690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE690u; }
        if (ctx->pc != 0x2DE690u) { return; }
    }
    ctx->pc = 0x2DE690u;
label_2de690:
    // 0x2de690: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2de690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2de694: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x2de694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2de698: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x2de698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2de69c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2de69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de6a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2de6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2de6a4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2de6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2de6a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2de6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de6ac: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x2de6acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x2de6b0: 0xc04bd2c  jal         func_12F4B0
    ctx->pc = 0x2DE6B0u;
    SET_GPR_U32(ctx, 31, 0x2DE6B8u);
    ctx->pc = 0x2DE6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE6B0u;
            // 0x2de6b4: 0x7d020010  sq          $v0, 0x10($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE6B8u; }
        if (ctx->pc != 0x2DE6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE6B8u; }
        if (ctx->pc != 0x2DE6B8u) { return; }
    }
    ctx->pc = 0x2DE6B8u;
label_2de6b8:
    // 0x2de6b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2de6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de6bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2de6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de6c0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2DE6C0u;
    {
        const bool branch_taken_0x2de6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE6C0u;
            // 0x2de6c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6c0) {
            ctx->pc = 0x2DE7E8u;
            goto label_2de7e8;
        }
    }
    ctx->pc = 0x2DE6C8u;
label_2de6c8:
    // 0x2de6c8: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x2de6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2de6cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2de6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de6d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2de6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2de6d4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2de6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2de6d8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2de6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2de6dc: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x2de6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de6e0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2de6e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2de6e4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2de6e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2de6e8: 0x0  nop
    ctx->pc = 0x2de6e8u;
    // NOP
    // 0x2de6ec: 0x0  nop
    ctx->pc = 0x2de6ecu;
    // NOP
    // 0x2de6f0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2DE6F0u;
    SET_GPR_U32(ctx, 31, 0x2DE6F8u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE6F8u; }
        if (ctx->pc != 0x2DE6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE6F8u; }
        if (ctx->pc != 0x2DE6F8u) { return; }
    }
    ctx->pc = 0x2DE6F8u;
label_2de6f8:
    // 0x2de6f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2de6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2de6fc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2de6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de700: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2DE700u;
    SET_GPR_U32(ctx, 31, 0x2DE708u);
    ctx->pc = 0x2DE704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE700u;
            // 0x2de704: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE708u; }
        if (ctx->pc != 0x2DE708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE708u; }
        if (ctx->pc != 0x2DE708u) { return; }
    }
    ctx->pc = 0x2DE708u;
label_2de708:
    // 0x2de708: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2de708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2de70c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2de70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2de710: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2de710u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2de714: 0x0  nop
    ctx->pc = 0x2de714u;
    // NOP
    // 0x2de718: 0x0  nop
    ctx->pc = 0x2de718u;
    // NOP
    // 0x2de71c: 0x2010  mfhi        $a0
    ctx->pc = 0x2de71cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2de720: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2de720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2de724: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2de724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2de728: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x2de728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de72c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2de72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2de730: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2de730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de734: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de738: 0x0  nop
    ctx->pc = 0x2de738u;
    // NOP
    // 0x2de73c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE73Cu;
    {
        const bool branch_taken_0x2de73c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE73Cu;
            // 0x2de740: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de73c) {
            ctx->pc = 0x2DE748u;
            goto label_2de748;
        }
    }
    ctx->pc = 0x2DE744u;
    // 0x2de744: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2de744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de748:
    // 0x2de748: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x2DE748u;
    {
        const bool branch_taken_0x2de748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de748) {
            ctx->pc = 0x2DE948u;
            goto label_2de948;
        }
    }
    ctx->pc = 0x2DE750u;
    // 0x2de750: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2de750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de754: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2de754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de758: 0x0  nop
    ctx->pc = 0x2de758u;
    // NOP
    // 0x2de75c: 0x4501007a  bc1t        . + 4 + (0x7A << 2)
    ctx->pc = 0x2DE75Cu;
    {
        const bool branch_taken_0x2de75c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE75Cu;
            // 0x2de760: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de75c) {
            ctx->pc = 0x2DE948u;
            goto label_2de948;
        }
    }
    ctx->pc = 0x2DE764u;
    // 0x2de764: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2de764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2de768: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2de768u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2de76c: 0x0  nop
    ctx->pc = 0x2de76cu;
    // NOP
    // 0x2de770: 0x0  nop
    ctx->pc = 0x2de770u;
    // NOP
    // 0x2de774: 0x1010  mfhi        $v0
    ctx->pc = 0x2de774u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2de778: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2de778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2de77c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2de77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2de780: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x2de780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de784: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2de784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2de788: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2de788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de78c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de790: 0x0  nop
    ctx->pc = 0x2de790u;
    // NOP
    // 0x2de794: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE794u;
    {
        const bool branch_taken_0x2de794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE794u;
            // 0x2de798: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de794) {
            ctx->pc = 0x2DE7A0u;
            goto label_2de7a0;
        }
    }
    ctx->pc = 0x2DE79Cu;
    // 0x2de79c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2de79cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de7a0:
    // 0x2de7a0: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2DE7A0u;
    {
        const bool branch_taken_0x2de7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de7a0) {
            ctx->pc = 0x2DE948u;
            goto label_2de948;
        }
    }
    ctx->pc = 0x2DE7A8u;
    // 0x2de7a8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2de7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de7ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2de7acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de7b0: 0x0  nop
    ctx->pc = 0x2de7b0u;
    // NOP
    // 0x2de7b4: 0x45010064  bc1t        . + 4 + (0x64 << 2)
    ctx->pc = 0x2DE7B4u;
    {
        const bool branch_taken_0x2de7b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE7B4u;
            // 0x2de7b8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7b4) {
            ctx->pc = 0x2DE948u;
            goto label_2de948;
        }
    }
    ctx->pc = 0x2DE7BCu;
    // 0x2de7bc: 0xc04c018  jal         func_130060
    ctx->pc = 0x2DE7BCu;
    SET_GPR_U32(ctx, 31, 0x2DE7C4u);
    ctx->pc = 0x2DE7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE7BCu;
            // 0x2de7c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE7C4u; }
        if (ctx->pc != 0x2DE7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE7C4u; }
        if (ctx->pc != 0x2DE7C4u) { return; }
    }
    ctx->pc = 0x2DE7C4u;
label_2de7c4:
    // 0x2de7c4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2de7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2de7c8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2de7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2de7cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2de7ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de7d0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2de7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2de7d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2de7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2de7d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2de7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2de7dc: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2de7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2de7e0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2DE7E0u;
    {
        const bool branch_taken_0x2de7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE7E0u;
            // 0x2de7e4: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7e0) {
            ctx->pc = 0x2DE948u;
            goto label_2de948;
        }
    }
    ctx->pc = 0x2DE7E8u;
label_2de7e8:
    // 0x2de7e8: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2de7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2de7ec: 0x24540120  addiu       $s4, $v0, 0x120
    ctx->pc = 0x2de7ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2de7f0: 0x24530080  addiu       $s3, $v0, 0x80
    ctx->pc = 0x2de7f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2de7f4: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x2de7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de7f8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2de7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de7fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2de7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de800: 0x0  nop
    ctx->pc = 0x2de800u;
    // NOP
    // 0x2de804: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x2DE804u;
    {
        const bool branch_taken_0x2de804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de804) {
            ctx->pc = 0x2DE948u;
            goto label_2de948;
        }
    }
    ctx->pc = 0x2DE80Cu;
    // 0x2de80c: 0xc4400090  lwc1        $f0, 0x90($v0)
    ctx->pc = 0x2de80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de810: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2de810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de814: 0x0  nop
    ctx->pc = 0x2de814u;
    // NOP
    // 0x2de818: 0x4500ffab  bc1f        . + 4 + (-0x55 << 2)
    ctx->pc = 0x2DE818u;
    {
        const bool branch_taken_0x2de818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de818) {
            ctx->pc = 0x2DE6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2de6c8;
        }
    }
    ctx->pc = 0x2DE820u;
    // 0x2de820: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2DE820u;
    {
        const bool branch_taken_0x2de820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de820) {
            ctx->pc = 0x2DE948u;
            goto label_2de948;
        }
    }
    ctx->pc = 0x2DE828u;
label_2de828:
    // 0x2de828: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x2de828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2de82c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2de82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de830: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2de830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2de834: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2de834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2de838: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2de838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2de83c: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x2de83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de840: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2de840u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2de844: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2de844u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2de848: 0x0  nop
    ctx->pc = 0x2de848u;
    // NOP
    // 0x2de84c: 0x0  nop
    ctx->pc = 0x2de84cu;
    // NOP
    // 0x2de850: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2DE850u;
    SET_GPR_U32(ctx, 31, 0x2DE858u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE858u; }
        if (ctx->pc != 0x2DE858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE858u; }
        if (ctx->pc != 0x2DE858u) { return; }
    }
    ctx->pc = 0x2DE858u;
label_2de858:
    // 0x2de858: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2de858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2de85c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2de85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de860: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2DE860u;
    SET_GPR_U32(ctx, 31, 0x2DE868u);
    ctx->pc = 0x2DE864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE860u;
            // 0x2de864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE868u; }
        if (ctx->pc != 0x2DE868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE868u; }
        if (ctx->pc != 0x2DE868u) { return; }
    }
    ctx->pc = 0x2DE868u;
label_2de868:
    // 0x2de868: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2de868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2de86c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2de86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2de870: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2de870u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2de874: 0x0  nop
    ctx->pc = 0x2de874u;
    // NOP
    // 0x2de878: 0x0  nop
    ctx->pc = 0x2de878u;
    // NOP
    // 0x2de87c: 0x2010  mfhi        $a0
    ctx->pc = 0x2de87cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2de880: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2de880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2de884: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2de884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2de888: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x2de888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de88c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2de88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2de890: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2de890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de898: 0x0  nop
    ctx->pc = 0x2de898u;
    // NOP
    // 0x2de89c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE89Cu;
    {
        const bool branch_taken_0x2de89c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE89Cu;
            // 0x2de8a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de89c) {
            ctx->pc = 0x2DE8A8u;
            goto label_2de8a8;
        }
    }
    ctx->pc = 0x2DE8A4u;
    // 0x2de8a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2de8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de8a8:
    // 0x2de8a8: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2DE8A8u;
    {
        const bool branch_taken_0x2de8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de8a8) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE8B0u;
    // 0x2de8b0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2de8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de8b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2de8b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de8b8: 0x0  nop
    ctx->pc = 0x2de8b8u;
    // NOP
    // 0x2de8bc: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x2DE8BCu;
    {
        const bool branch_taken_0x2de8bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE8BCu;
            // 0x2de8c0: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8bc) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE8C4u;
    // 0x2de8c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2de8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2de8c8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2de8c8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2de8cc: 0x0  nop
    ctx->pc = 0x2de8ccu;
    // NOP
    // 0x2de8d0: 0x0  nop
    ctx->pc = 0x2de8d0u;
    // NOP
    // 0x2de8d4: 0x1010  mfhi        $v0
    ctx->pc = 0x2de8d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2de8d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2de8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2de8dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2de8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2de8e0: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x2de8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de8e4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2de8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2de8e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2de8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de8ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de8f0: 0x0  nop
    ctx->pc = 0x2de8f0u;
    // NOP
    // 0x2de8f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE8F4u;
    {
        const bool branch_taken_0x2de8f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE8F4u;
            // 0x2de8f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de8f4) {
            ctx->pc = 0x2DE900u;
            goto label_2de900;
        }
    }
    ctx->pc = 0x2DE8FCu;
    // 0x2de8fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2de8fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de900:
    // 0x2de900: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2DE900u;
    {
        const bool branch_taken_0x2de900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de900) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE908u;
    // 0x2de908: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2de908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de90c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2de90cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de910: 0x0  nop
    ctx->pc = 0x2de910u;
    // NOP
    // 0x2de914: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x2DE914u;
    {
        const bool branch_taken_0x2de914 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE914u;
            // 0x2de918: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de914) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE91Cu;
    // 0x2de91c: 0xc04c018  jal         func_130060
    ctx->pc = 0x2DE91Cu;
    SET_GPR_U32(ctx, 31, 0x2DE924u);
    ctx->pc = 0x2DE920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE91Cu;
            // 0x2de920: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE924u; }
        if (ctx->pc != 0x2DE924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE924u; }
        if (ctx->pc != 0x2DE924u) { return; }
    }
    ctx->pc = 0x2DE924u;
label_2de924:
    // 0x2de924: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2de924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2de928: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2de928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2de92c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2de92cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de930: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2de930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2de934: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2de934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2de938: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2de938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2de93c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2de93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2de940: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DE940u;
    {
        const bool branch_taken_0x2de940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE940u;
            // 0x2de944: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de940) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE948u;
label_2de948:
    // 0x2de948: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x2de948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de94c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2de94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de950: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2de950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de954: 0x0  nop
    ctx->pc = 0x2de954u;
    // NOP
    // 0x2de958: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DE958u;
    {
        const bool branch_taken_0x2de958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE958u;
            // 0x2de95c: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de958) {
            ctx->pc = 0x2DE974u;
            goto label_2de974;
        }
    }
    ctx->pc = 0x2DE960u;
    // 0x2de960: 0xc4400090  lwc1        $f0, 0x90($v0)
    ctx->pc = 0x2de960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de964: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2de964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de968: 0x0  nop
    ctx->pc = 0x2de968u;
    // NOP
    // 0x2de96c: 0x4500ffae  bc1f        . + 4 + (-0x52 << 2)
    ctx->pc = 0x2DE96Cu;
    {
        const bool branch_taken_0x2de96c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de96c) {
            ctx->pc = 0x2DE828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2de828;
        }
    }
    ctx->pc = 0x2DE974u;
label_2de974:
    // 0x2de974: 0x0  nop
    ctx->pc = 0x2de974u;
    // NOP
    // 0x2de978: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2de978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2de97c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2de97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2de980: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x2DE980u;
    {
        const bool branch_taken_0x2de980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE980u;
            // 0x2de984: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de980) {
            ctx->pc = 0x2DE7E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2de7e8;
        }
    }
    ctx->pc = 0x2DE988u;
    // 0x2de988: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x2de988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2de98c: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x2DE98Cu;
    {
        const bool branch_taken_0x2de98c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE98Cu;
            // 0x2de990: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de98c) {
            ctx->pc = 0x2DEA18u;
            goto label_2dea18;
        }
    }
    ctx->pc = 0x2DE994u;
    // 0x2de994: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2de994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2de998: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x2DE998u;
    {
        const bool branch_taken_0x2de998 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE998u;
            // 0x2de99c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de998) {
            ctx->pc = 0x2DEA18u;
            goto label_2dea18;
        }
    }
    ctx->pc = 0x2DE9A0u;
    // 0x2de9a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2de9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de9a4: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2de9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2de9a8:
    // 0x2de9a8: 0x25450001  addiu       $a1, $t2, 0x1
    ctx->pc = 0x2de9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2de9ac: 0xb0082a  slt         $at, $a1, $s0
    ctx->pc = 0x2de9acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2de9b0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DE9B0u;
    {
        const bool branch_taken_0x2de9b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE9B0u;
            // 0x2de9b4: 0x53100  sll         $a2, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de9b0) {
            ctx->pc = 0x2DEA08u;
            goto label_2dea08;
        }
    }
    ctx->pc = 0x2DE9B8u;
    // 0x2de9b8: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x2de9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x2de9bc: 0x244900c0  addiu       $t1, $v0, 0xC0
    ctx->pc = 0x2de9bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2de9c0:
    // 0x2de9c0: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x2de9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2de9c4: 0x244800c0  addiu       $t0, $v0, 0xC0
    ctx->pc = 0x2de9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2de9c8: 0xc521000c  lwc1        $f1, 0xC($t1)
    ctx->pc = 0x2de9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de9cc: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x2de9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de9d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2de9d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de9d4: 0x0  nop
    ctx->pc = 0x2de9d4u;
    // NOP
    // 0x2de9d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE9D8u;
    {
        const bool branch_taken_0x2de9d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de9d8) {
            ctx->pc = 0x2DE9F8u;
            goto label_2de9f8;
        }
    }
    ctx->pc = 0x2DE9E0u;
    // 0x2de9e0: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x2de9e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2de9e4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2de9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2de9e8: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2de9e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2de9ec: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x2de9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x2de9f0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2de9f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de9f4: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x2de9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_2de9f8:
    // 0x2de9f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2de9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2de9fc: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2de9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2dea00: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2DEA00u;
    {
        const bool branch_taken_0x2dea00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA00u;
            // 0x2dea04: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea00) {
            ctx->pc = 0x2DE9C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2de9c0;
        }
    }
    ctx->pc = 0x2DEA08u;
label_2dea08:
    // 0x2dea08: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2dea08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2dea0c: 0x144102a  slt         $v0, $t2, $a0
    ctx->pc = 0x2dea0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2dea10: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2DEA10u;
    {
        const bool branch_taken_0x2dea10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA10u;
            // 0x2dea14: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea10) {
            ctx->pc = 0x2DE9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2de9a8;
        }
    }
    ctx->pc = 0x2DEA18u;
label_2dea18:
    // 0x2dea18: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x2dea18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dea1c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEA1Cu;
    {
        const bool branch_taken_0x2dea1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA1Cu;
            // 0x2dea20: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea1c) {
            ctx->pc = 0x2DEA2Cu;
            goto label_2dea2c;
        }
    }
    ctx->pc = 0x2DEA24u;
    // 0x2dea24: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2dea24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dea28: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2dea28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2dea2c:
    // 0x2dea2c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x2DEA2Cu;
    {
        const bool branch_taken_0x2dea2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA2Cu;
            // 0x2dea30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea2c) {
            ctx->pc = 0x2DEAD0u;
            goto label_2dead0;
        }
    }
    ctx->pc = 0x2DEA34u;
    // 0x2dea34: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x2dea34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2dea38: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DEA38u;
    {
        const bool branch_taken_0x2dea38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA38u;
            // 0x2dea3c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea38) {
            ctx->pc = 0x2DEAA0u;
            goto label_2deaa0;
        }
    }
    ctx->pc = 0x2DEA40u;
    // 0x2dea40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dea40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dea44:
    // 0x2dea44: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x2dea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2dea48: 0x2c53821  addu        $a3, $s6, $a1
    ctx->pc = 0x2dea48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x2dea4c: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x2dea4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2dea50: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x2dea50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2dea54: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2dea54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dea58: 0x104102a  slt         $v0, $t0, $a0
    ctx->pc = 0x2dea58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2dea5c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2dea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2dea60: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2dea60u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2dea64: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x2dea64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2dea68: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x2dea68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x2dea6c: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x2dea6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2dea70: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x2dea70u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x2dea74: 0x78c30030  lq          $v1, 0x30($a2)
    ctx->pc = 0x2dea74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2dea78: 0x7ce30030  sq          $v1, 0x30($a3)
    ctx->pc = 0x2dea78u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
    // 0x2dea7c: 0x78c30040  lq          $v1, 0x40($a2)
    ctx->pc = 0x2dea7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2dea80: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x2dea80u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x2dea84: 0x78c30050  lq          $v1, 0x50($a2)
    ctx->pc = 0x2dea84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2dea88: 0x7ce30050  sq          $v1, 0x50($a3)
    ctx->pc = 0x2dea88u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 3));
    // 0x2dea8c: 0x78c30060  lq          $v1, 0x60($a2)
    ctx->pc = 0x2dea8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x2dea90: 0x7ce30060  sq          $v1, 0x60($a3)
    ctx->pc = 0x2dea90u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 96), GPR_VEC(ctx, 3));
    // 0x2dea94: 0x78c30070  lq          $v1, 0x70($a2)
    ctx->pc = 0x2dea94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x2dea98: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2DEA98u;
    {
        const bool branch_taken_0x2dea98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA98u;
            // 0x2dea9c: 0x7ce30070  sq          $v1, 0x70($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea98) {
            ctx->pc = 0x2DEA44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dea44;
        }
    }
    ctx->pc = 0x2DEAA0u;
label_2deaa0:
    // 0x2deaa0: 0x110082a  slt         $at, $t0, $s0
    ctx->pc = 0x2deaa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2deaa4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2DEAA4u;
    {
        const bool branch_taken_0x2deaa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEAA4u;
            // 0x2deaa8: 0x82900  sll         $a1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deaa4) {
            ctx->pc = 0x2DEAD0u;
            goto label_2dead0;
        }
    }
    ctx->pc = 0x2DEAACu;
label_2deaac:
    // 0x2deaac: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x2deaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2deab0: 0x2c51821  addu        $v1, $s6, $a1
    ctx->pc = 0x2deab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x2deab4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2deab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2deab8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2deab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2deabc: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2deabcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2deac0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2deac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2deac4: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x2deac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2deac8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DEAC8u;
    {
        const bool branch_taken_0x2deac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DEACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEAC8u;
            // 0x2deacc: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deac8) {
            ctx->pc = 0x2DEAACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2deaac;
        }
    }
    ctx->pc = 0x2DEAD0u;
label_2dead0:
    // 0x2dead0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dead0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dead4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2dead4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dead8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dead8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2deadc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2deadcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2deae0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2deae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2deae4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2deae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2deae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2deae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deaec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2deaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2deaf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2deaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2deaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEAF4u;
            // 0x2deaf8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEAFCu;
}
