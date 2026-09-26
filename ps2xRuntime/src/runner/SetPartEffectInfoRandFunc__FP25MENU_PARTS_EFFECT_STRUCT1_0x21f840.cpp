#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPartEffectInfoRandFunc__FP25MENU_PARTS_EFFECT_STRUCT1
// Address: 0x21f840 - 0x21f9d4
void SetPartEffectInfoRandFunc__FP25MENU_PARTS_EFFECT_STRUCT1_0x21f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPartEffectInfoRandFunc__FP25MENU_PARTS_EFFECT_STRUCT1_0x21f840");
#endif

    switch (ctx->pc) {
        case 0x21f860u: goto label_21f860;
        case 0x21f868u: goto label_21f868;
        default: break;
    }

    ctx->pc = 0x21f840u;

    // 0x21f840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21f848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21f848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21f84c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21f84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f850: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
    ctx->pc = 0x21F850u;
    {
        const bool branch_taken_0x21f850 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F850u;
            // 0x21f854: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f850) {
            ctx->pc = 0x21F9C0u;
            goto label_21f9c0;
        }
    }
    ctx->pc = 0x21F858u;
    // 0x21f858: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x21F858u;
    SET_GPR_U32(ctx, 31, 0x21F860u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F860u; }
        if (ctx->pc != 0x21F860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F860u; }
        if (ctx->pc != 0x21F860u) { return; }
    }
    ctx->pc = 0x21F860u;
label_21f860:
    // 0x21f860: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x21F860u;
    SET_GPR_U32(ctx, 31, 0x21F868u);
    ctx->pc = 0x21F864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F860u;
            // 0x21f864: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F868u; }
        if (ctx->pc != 0x21F868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F868u; }
        if (ctx->pc != 0x21F868u) { return; }
    }
    ctx->pc = 0x21F868u;
label_21f868:
    // 0x21f868: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x21f868u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x21f86c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21f870: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x21F870u;
    {
        const bool branch_taken_0x21f870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21F874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F870u;
            // 0x21f874: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f870) {
            ctx->pc = 0x21F998u;
            goto label_21f998;
        }
    }
    ctx->pc = 0x21F878u;
    // 0x21f878: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F878u;
    {
        const bool branch_taken_0x21f878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21F87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F878u;
            // 0x21f87c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f878) {
            ctx->pc = 0x21F888u;
            goto label_21f888;
        }
    }
    ctx->pc = 0x21F880u;
    // 0x21f880: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x21F880u;
    {
        const bool branch_taken_0x21f880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F880u;
            // 0x21f884: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f880) {
            ctx->pc = 0x21F9C4u;
            goto label_21f9c4;
        }
    }
    ctx->pc = 0x21F888u;
label_21f888:
    // 0x21f888: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x21f888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21f88c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x21f88cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21f890: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x21f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x21f894: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21f894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21f898: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x21f898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x21f89c: 0x3810  mfhi        $a3
    ctx->pc = 0x21f89cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x21f8a0: 0x3c034208  lui         $v1, 0x4208
    ctx->pc = 0x21f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16904 << 16));
    // 0x21f8a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21f8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f8a8: 0x206001a  div         $zero, $s0, $a2
    ctx->pc = 0x21f8a8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21f8ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21f8b0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x21f8b0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21f8b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f8b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x21f8b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x21f8bc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x21f8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x21f8c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21f8c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21f8c4: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x21f8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x21f8c8: 0x3010  mfhi        $a2
    ctx->pc = 0x21f8c8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x21f8cc: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x21f8ccu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21f8d0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x21f8d0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f8d4: 0x0  nop
    ctx->pc = 0x21f8d4u;
    // NOP
    // 0x21f8d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21f8d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21f8dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21f8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21f8e0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x21f8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x21f8e4: 0x2810  mfhi        $a1
    ctx->pc = 0x21f8e4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x21f8e8: 0x204001a  div         $zero, $s0, $a0
    ctx->pc = 0x21f8e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21f8ec: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x21f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21f8f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21f8f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f8f4: 0x0  nop
    ctx->pc = 0x21f8f4u;
    // NOP
    // 0x21f8f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21f8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21f8fc: 0x2010  mfhi        $a0
    ctx->pc = 0x21f8fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x21f900: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x21f900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x21f904: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21f904u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f908: 0x0  nop
    ctx->pc = 0x21f908u;
    // NOP
    // 0x21f90c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21f90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21f910: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F910u;
    {
        const bool branch_taken_0x21f910 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21F914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F910u;
            // 0x21f914: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f910) {
            ctx->pc = 0x21F924u;
            goto label_21f924;
        }
    }
    ctx->pc = 0x21F918u;
    // 0x21f918: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21F918u;
    {
        const bool branch_taken_0x21f918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f918) {
            ctx->pc = 0x21F924u;
            goto label_21f924;
        }
    }
    ctx->pc = 0x21F920u;
    // 0x21f920: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x21f920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_21f924:
    // 0x21f924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f928: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x21f928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x21f92c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x21f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21f930: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x21f930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x21f934: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x21f934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21f938: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x21f938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21f93c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x21f93cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21f940: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x21f940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x21f944: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x21f944u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f948: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x21f948u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f94c: 0x0  nop
    ctx->pc = 0x21f94cu;
    // NOP
    // 0x21f950: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21f950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21f954: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21f954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21f958: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x21f958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x21f95c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x21f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x21f960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f964: 0x1810  mfhi        $v1
    ctx->pc = 0x21f964u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21f968: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x21f968u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21f96c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21f96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f970: 0x0  nop
    ctx->pc = 0x21f970u;
    // NOP
    // 0x21f974: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21f974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21f978: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x21f978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x21f97c: 0x1810  mfhi        $v1
    ctx->pc = 0x21f97cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21f980: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21f980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f984: 0x0  nop
    ctx->pc = 0x21f984u;
    // NOP
    // 0x21f988: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21f988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21f98c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21f98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21f990: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21F990u;
    {
        const bool branch_taken_0x21f990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F990u;
            // 0x21f994: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f990) {
            ctx->pc = 0x21F9C0u;
            goto label_21f9c0;
        }
    }
    ctx->pc = 0x21F998u;
label_21f998:
    // 0x21f998: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x21f998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x21f99c: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x21f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x21f9a0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x21f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x21f9a4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x21f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x21f9a8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x21f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x21f9ac: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x21f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x21f9b0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x21f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x21f9b4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x21f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x21f9b8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x21f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x21f9bc: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x21f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_21f9c0:
    // 0x21f9c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21f9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21f9c4:
    // 0x21f9c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f9c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x21F9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F9CCu;
            // 0x21f9d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F9D4u;
}
