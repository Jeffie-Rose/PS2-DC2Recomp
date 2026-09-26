#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ParaBlend__FPffPA4_fi
// Address: 0x313570 - 0x313770
void ParaBlend__FPffPA4_fi_0x313570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParaBlend__FPffPA4_fi_0x313570");
#endif

    switch (ctx->pc) {
        case 0x3135e0u: goto label_3135e0;
        case 0x313674u: goto label_313674;
        case 0x3136dcu: goto label_3136dc;
        case 0x3136ecu: goto label_3136ec;
        case 0x3136f8u: goto label_3136f8;
        case 0x313730u: goto label_313730;
        case 0x313740u: goto label_313740;
        default: break;
    }

    ctx->pc = 0x313570u;

    // 0x313570: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x313570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x313574: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x313574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x313578: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x313578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x31357c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x31357cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x313580: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x313580u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313584: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x313584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x313588: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x313588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31358c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x31358cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313590: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x313590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x313594: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x313594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x313598: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x313598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31359c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31359cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3135a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3135a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3135a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3135a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3135a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3135a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3135ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3135acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3135b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3135b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3135b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3135b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3135b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3135b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3135bc: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x3135bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3135c0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3135c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3135c4: 0x0  nop
    ctx->pc = 0x3135c4u;
    // NOP
    // 0x3135c8: 0x0  nop
    ctx->pc = 0x3135c8u;
    // NOP
    // 0x3135cc: 0x4614ab03  div.s       $f12, $f21, $f20
    ctx->pc = 0x3135ccu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
    // 0x3135d0: 0x0  nop
    ctx->pc = 0x3135d0u;
    // NOP
    // 0x3135d4: 0x0  nop
    ctx->pc = 0x3135d4u;
    // NOP
    // 0x3135d8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3135D8u;
    SET_GPR_U32(ctx, 31, 0x3135E0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3135E0u; }
        if (ctx->pc != 0x3135E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3135E0u; }
        if (ctx->pc != 0x3135E0u) { return; }
    }
    ctx->pc = 0x3135E0u;
label_3135e0:
    // 0x3135e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3135e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3135e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3135e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135e8: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x3135e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3135ec: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x3135ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3135f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3135f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3135f4: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x3135f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3135f8: 0x26530001  addiu       $s3, $s2, 0x1
    ctx->pc = 0x3135f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3135fc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3135fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x313600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x313600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313604: 0x0  nop
    ctx->pc = 0x313604u;
    // NOP
    // 0x313608: 0x4601ad01  sub.s       $f20, $f21, $f1
    ctx->pc = 0x313608u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x31360c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31360cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x313610: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x313610u;
    {
        const bool branch_taken_0x313610 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x313614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313610u;
            // 0x313614: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313610) {
            ctx->pc = 0x31361Cu;
            goto label_31361c;
        }
    }
    ctx->pc = 0x313618u;
    // 0x313618: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x313618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31361c:
    // 0x31361c: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x31361cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x313620: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x313620u;
    {
        const bool branch_taken_0x313620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313620u;
            // 0x313624: 0x254102a  slt         $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313620) {
            ctx->pc = 0x31362Cu;
            goto label_31362c;
        }
    }
    ctx->pc = 0x313628u;
    // 0x313628: 0x2690ffff  addiu       $s0, $s4, -0x1
    ctx->pc = 0x313628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_31362c:
    // 0x31362c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31362Cu;
    {
        const bool branch_taken_0x31362c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31362Cu;
            // 0x313630: 0x274102a  slt         $v0, $s3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31362c) {
            ctx->pc = 0x313638u;
            goto label_313638;
        }
    }
    ctx->pc = 0x313634u;
    // 0x313634: 0x2692ffff  addiu       $s2, $s4, -0x1
    ctx->pc = 0x313634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_313638:
    // 0x313638: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x313638u;
    {
        const bool branch_taken_0x313638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31363Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313638u;
            // 0x31363c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313638) {
            ctx->pc = 0x313644u;
            goto label_313644;
        }
    }
    ctx->pc = 0x313640u;
    // 0x313640: 0x2693ffff  addiu       $s3, $s4, -0x1
    ctx->pc = 0x313640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_313644:
    // 0x313644: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x313644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x313648: 0x2442e700  addiu       $v0, $v0, -0x1900
    ctx->pc = 0x313648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960896));
    // 0x31364c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31364cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313650: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x313650u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313654: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x313654u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x313658: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x313658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x31365c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x31365cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x313660: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x313660u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x313664: 0x7c860010  sq          $a2, 0x10($a0)
    ctx->pc = 0x313664u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 6));
    // 0x313668: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x313668u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x31366c: 0xc041bf0  jal         func_106FC0
    ctx->pc = 0x31366Cu;
    SET_GPR_U32(ctx, 31, 0x313674u);
    ctx->pc = 0x313670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31366Cu;
            // 0x313670: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106FC0u;
    if (runtime->hasFunction(0x106FC0u)) {
        auto targetFn = runtime->lookupFunction(0x106FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313674u; }
        if (ctx->pc != 0x313674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransposeMatrix_0x106fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313674u; }
        if (ctx->pc != 0x313674u) { return; }
    }
    ctx->pc = 0x313674u;
label_313674:
    // 0x313674: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x313674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x313678: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x313678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x31367c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x31367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x313680: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x313680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x313684: 0x786a0000  lq          $t2, 0x0($v1)
    ctx->pc = 0x313684u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x313688: 0x2a24821  addu        $t1, $s5, $v0
    ctx->pc = 0x313688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x31368c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x31368cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x313690: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x313690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x313694: 0x2a23821  addu        $a3, $s5, $v0
    ctx->pc = 0x313694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x313698: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x313698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x31369c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x31369cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x3136a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3136a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136a4: 0x7c8a0000  sq          $t2, 0x0($a0)
    ctx->pc = 0x3136a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 10));
    // 0x3136a8: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x3136a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3136ac: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3136acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x3136b0: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x3136b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3136b4: 0x79290000  lq          $t1, 0x0($t1)
    ctx->pc = 0x3136b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3136b8: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x3136b8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x3136bc: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x3136bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x3136c0: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x3136c0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3136c4: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x3136c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x3136c8: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x3136c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x3136cc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3136ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3136d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3136d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3136d4: 0xc041bf0  jal         func_106FC0
    ctx->pc = 0x3136D4u;
    SET_GPR_U32(ctx, 31, 0x3136DCu);
    ctx->pc = 0x3136D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3136D4u;
            // 0x3136d8: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106FC0u;
    if (runtime->hasFunction(0x106FC0u)) {
        auto targetFn = runtime->lookupFunction(0x106FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136DCu; }
        if (ctx->pc != 0x3136DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransposeMatrix_0x106fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136DCu; }
        if (ctx->pc != 0x3136DCu) { return; }
    }
    ctx->pc = 0x3136DCu;
label_3136dc:
    // 0x3136dc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3136dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3136e0: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3136e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3136e4: 0xc04c094  jal         func_130250
    ctx->pc = 0x3136E4u;
    SET_GPR_U32(ctx, 31, 0x3136ECu);
    ctx->pc = 0x3136E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3136E4u;
            // 0x3136e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136ECu; }
        if (ctx->pc != 0x3136ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136ECu; }
        if (ctx->pc != 0x3136ECu) { return; }
    }
    ctx->pc = 0x3136ECu;
label_3136ec:
    // 0x3136ec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3136ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3136f0: 0xc041bf0  jal         func_106FC0
    ctx->pc = 0x3136F0u;
    SET_GPR_U32(ctx, 31, 0x3136F8u);
    ctx->pc = 0x3136F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3136F0u;
            // 0x3136f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106FC0u;
    if (runtime->hasFunction(0x106FC0u)) {
        auto targetFn = runtime->lookupFunction(0x106FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136F8u; }
        if (ctx->pc != 0x3136F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransposeMatrix_0x106fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3136F8u; }
        if (ctx->pc != 0x3136F8u) { return; }
    }
    ctx->pc = 0x3136F8u;
label_3136f8:
    // 0x3136f8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3136f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x3136fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3136fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x313700: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x313700u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x313704: 0x2442e740  addiu       $v0, $v0, -0x18C0
    ctx->pc = 0x313704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960960));
    // 0x313708: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x313708u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31370c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x31370cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313710: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x313710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x313714: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x313714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x313718: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x313718u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x31371c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31371cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x313720: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x313720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x313724: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x313724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x313728: 0xc041c4a  jal         func_107128
    ctx->pc = 0x313728u;
    SET_GPR_U32(ctx, 31, 0x313730u);
    ctx->pc = 0x31372Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313728u;
            // 0x31372c: 0xe7b40118  swc1        $f20, 0x118($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313730u; }
        if (ctx->pc != 0x313730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313730u; }
        if (ctx->pc != 0x313730u) { return; }
    }
    ctx->pc = 0x313730u;
label_313730:
    // 0x313730: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x313730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313734: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x313734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x313738: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x313738u;
    SET_GPR_U32(ctx, 31, 0x313740u);
    ctx->pc = 0x31373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313738u;
            // 0x31373c: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313740u; }
        if (ctx->pc != 0x313740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313740u; }
        if (ctx->pc != 0x313740u) { return; }
    }
    ctx->pc = 0x313740u;
label_313740:
    // 0x313740: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x313740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x313744: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x313744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x313748: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x313748u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31374c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313750: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x313750u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313754: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x313754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x313758: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x313758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31375c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31375cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313760: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x313760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313764: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313768: 0x3e00008  jr          $ra
    ctx->pc = 0x313768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31376Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313768u;
            // 0x31376c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313770u;
}
