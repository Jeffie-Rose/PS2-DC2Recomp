#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CFireAfterHitFv
// Address: 0x1bf790 - 0x1bfa44
void Step__13CFireAfterHitFv_0x1bf790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CFireAfterHitFv_0x1bf790");
#endif

    switch (ctx->pc) {
        case 0x1bf7d4u: goto label_1bf7d4;
        case 0x1bf800u: goto label_1bf800;
        case 0x1bf830u: goto label_1bf830;
        case 0x1bf85cu: goto label_1bf85c;
        case 0x1bf9d0u: goto label_1bf9d0;
        default: break;
    }

    ctx->pc = 0x1bf790u;

    // 0x1bf790: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bf790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1bf794: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bf794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bf798: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bf798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bf79c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bf79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bf7a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bf7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bf7a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bf7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bf7a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf7ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf7b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf7b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bf7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bf7b8: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x1BF7B8u;
    {
        const bool branch_taken_0x1bf7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7B8u;
            // 0x1bf7bc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7b8) {
            ctx->pc = 0x1BFA1Cu;
            goto label_1bfa1c;
        }
    }
    ctx->pc = 0x1BF7C0u;
    // 0x1bf7c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bf7c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7c4: 0x26d30010  addiu       $s3, $s6, 0x10
    ctx->pc = 0x1bf7c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1bf7c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bf7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7cc: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1BF7CCu;
    {
        const bool branch_taken_0x1bf7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7CCu;
            // 0x1bf7d0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7cc) {
            ctx->pc = 0x1BF9F4u;
            goto label_1bf9f4;
        }
    }
    ctx->pc = 0x1BF7D4u;
label_1bf7d4:
    // 0x1bf7d4: 0x82630027  lb          $v1, 0x27($s3)
    ctx->pc = 0x1bf7d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
    // 0x1bf7d8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1bf7d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bf7dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF7DCu;
    {
        const bool branch_taken_0x1bf7dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf7dc) {
            ctx->pc = 0x1BF7F0u;
            goto label_1bf7f0;
        }
    }
    ctx->pc = 0x1BF7E4u;
    // 0x1bf7e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bf7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bf7e8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1BF7E8u;
    {
        const bool branch_taken_0x1bf7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7E8u;
            // 0x1bf7ec: 0xa2630027  sb          $v1, 0x27($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 39), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7e8) {
            ctx->pc = 0x1BF9E4u;
            goto label_1bf9e4;
        }
    }
    ctx->pc = 0x1BF7F0u;
label_1bf7f0:
    // 0x1bf7f0: 0x2d51021  addu        $v0, $s6, $s5
    ctx->pc = 0x1bf7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1bf7f4: 0x245402b0  addiu       $s4, $v0, 0x2B0
    ctx->pc = 0x1bf7f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x1bf7f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bf7f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf800:
    // 0x1bf800: 0x82620026  lb          $v0, 0x26($s3)
    ctx->pc = 0x1bf800u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x1bf804: 0x16220032  bne         $s1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1BF804u;
    {
        const bool branch_taken_0x1bf804 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf804) {
            ctx->pc = 0x1BF8D0u;
            goto label_1bf8d0;
        }
    }
    ctx->pc = 0x1BF80Cu;
    // 0x1bf80c: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BF80Cu;
    {
        const bool branch_taken_0x1bf80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf80c) {
            ctx->pc = 0x1BF8D0u;
            goto label_1bf8d0;
        }
    }
    ctx->pc = 0x1BF814u;
    // 0x1bf814: 0x86620022  lh          $v0, 0x22($s3)
    ctx->pc = 0x1bf814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x1bf818: 0x2841000d  slti        $at, $v0, 0xD
    ctx->pc = 0x1bf818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1bf81c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BF81Cu;
    {
        const bool branch_taken_0x1bf81c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF81Cu;
            // 0x1bf820: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf81c) {
            ctx->pc = 0x1BF8D0u;
            goto label_1bf8d0;
        }
    }
    ctx->pc = 0x1BF824u;
    // 0x1bf824: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bf824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf828: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1BF828u;
    SET_GPR_U32(ctx, 31, 0x1BF830u);
    ctx->pc = 0x1BF82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF828u;
            // 0x1bf82c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF830u; }
        if (ctx->pc != 0x1BF830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        trans_float_to_sceVector__FPfPfi_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF830u; }
        if (ctx->pc != 0x1BF830u) { return; }
    }
    ctx->pc = 0x1BF830u;
label_1bf830:
    // 0x1bf830: 0x86630020  lh          $v1, 0x20($s3)
    ctx->pc = 0x1bf830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1bf834: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1bf834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1bf838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf83c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1bf83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1bf840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bf840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf844: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bf844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf848: 0x0  nop
    ctx->pc = 0x1bf848u;
    // NOP
    // 0x1bf84c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bf84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bf850: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1bf850u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1bf854: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BF854u;
    SET_GPR_U32(ctx, 31, 0x1BF85Cu);
    ctx->pc = 0x1BF858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF854u;
            // 0x1bf858: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF85Cu; }
        if (ctx->pc != 0x1BF85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF85Cu; }
        if (ctx->pc != 0x1BF85Cu) { return; }
    }
    ctx->pc = 0x1BF85Cu;
label_1bf85c:
    // 0x1bf85c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1bf85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1bf860: 0xa6820010  sh          $v0, 0x10($s4)
    ctx->pc = 0x1bf860u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bf864: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x1bf864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1bf868: 0x28410020  slti        $at, $v0, 0x20
    ctx->pc = 0x1bf868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1bf86c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF86Cu;
    {
        const bool branch_taken_0x1bf86c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF86Cu;
            // 0x1bf870: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf86c) {
            ctx->pc = 0x1BF878u;
            goto label_1bf878;
        }
    }
    ctx->pc = 0x1BF874u;
    // 0x1bf874: 0xa6820010  sh          $v0, 0x10($s4)
    ctx->pc = 0x1bf874u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
label_1bf878:
    // 0x1bf878: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x1bf878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1bf87c: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x1bf87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1bf880: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF880u;
    {
        const bool branch_taken_0x1bf880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF880u;
            // 0x1bf884: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf880) {
            ctx->pc = 0x1BF88Cu;
            goto label_1bf88c;
        }
    }
    ctx->pc = 0x1BF888u;
    // 0x1bf888: 0xa6820010  sh          $v0, 0x10($s4)
    ctx->pc = 0x1bf888u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
label_1bf88c:
    // 0x1bf88c: 0x0  nop
    ctx->pc = 0x1bf88cu;
    // NOP
    // 0x1bf890: 0x3c023fac  lui         $v0, 0x3FAC
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16300 << 16));
    // 0x1bf894: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x1bf894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf898: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bf898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bf89c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf8a0: 0x0  nop
    ctx->pc = 0x1bf8a0u;
    // NOP
    // 0x1bf8a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bf8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bf8a8: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x1bf8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x1bf8ac: 0x82620026  lb          $v0, 0x26($s3)
    ctx->pc = 0x1bf8acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x1bf8b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf8b4: 0xa2620026  sb          $v0, 0x26($s3)
    ctx->pc = 0x1bf8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bf8b8: 0x82620026  lb          $v0, 0x26($s3)
    ctx->pc = 0x1bf8b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x1bf8bc: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x1bf8bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1bf8c0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BF8C0u;
    {
        const bool branch_taken_0x1bf8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF8C0u;
            // 0x1bf8c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8c0) {
            ctx->pc = 0x1BF908u;
            goto label_1bf908;
        }
    }
    ctx->pc = 0x1BF8C8u;
    // 0x1bf8c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BF8C8u;
    {
        const bool branch_taken_0x1bf8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF8C8u;
            // 0x1bf8cc: 0xa2600026  sb          $zero, 0x26($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 38), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8c8) {
            ctx->pc = 0x1BF908u;
            goto label_1bf908;
        }
    }
    ctx->pc = 0x1BF8D0u;
label_1bf8d0:
    // 0x1bf8d0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1bf8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1bf8d4: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x1bf8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf8d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bf8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bf8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bf8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf8e0: 0x0  nop
    ctx->pc = 0x1bf8e0u;
    // NOP
    // 0x1bf8e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bf8e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bf8e8: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x1bf8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x1bf8ec: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x1bf8ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1bf8f0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1bf8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1bf8f4: 0xa6820010  sh          $v0, 0x10($s4)
    ctx->pc = 0x1bf8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bf8f8: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x1bf8f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1bf8fc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF8FCu;
    {
        const bool branch_taken_0x1bf8fc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1bf8fc) {
            ctx->pc = 0x1BF908u;
            goto label_1bf908;
        }
    }
    ctx->pc = 0x1BF904u;
    // 0x1bf904: 0xa6800010  sh          $zero, 0x10($s4)
    ctx->pc = 0x1bf904u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 0));
label_1bf908:
    // 0x1bf908: 0x86820010  lh          $v0, 0x10($s4)
    ctx->pc = 0x1bf908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1bf90c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1bf90cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bf910: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF910u;
    {
        const bool branch_taken_0x1bf910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf910) {
            ctx->pc = 0x1BF91Cu;
            goto label_1bf91c;
        }
    }
    ctx->pc = 0x1BF918u;
    // 0x1bf918: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1bf918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf91c:
    // 0x1bf91c: 0x0  nop
    ctx->pc = 0x1bf91cu;
    // NOP
    // 0x1bf920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bf920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bf924: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1bf924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1bf928: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1BF928u;
    {
        const bool branch_taken_0x1bf928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF928u;
            // 0x1bf92c: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf928) {
            ctx->pc = 0x1BF800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf800;
        }
    }
    ctx->pc = 0x1BF930u;
    // 0x1bf930: 0x86630020  lh          $v1, 0x20($s3)
    ctx->pc = 0x1bf930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1bf934: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1bf934u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bf938: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF938u;
    {
        const bool branch_taken_0x1bf938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf938) {
            ctx->pc = 0x1BF950u;
            goto label_1bf950;
        }
    }
    ctx->pc = 0x1BF940u;
    // 0x1bf940: 0x86620024  lh          $v0, 0x24($s3)
    ctx->pc = 0x1bf940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1bf944: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1bf944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf948: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1bf948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf94c: 0xa6620020  sh          $v0, 0x20($s3)
    ctx->pc = 0x1bf94cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 2));
label_1bf950:
    // 0x1bf950: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x1bf950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x1bf954: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x1bf954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf958: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x1bf958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x1bf95c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bf95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf960: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1bf960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1bf964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bf964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf968: 0x0  nop
    ctx->pc = 0x1bf968u;
    // NOP
    // 0x1bf96c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1bf96cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1bf970: 0x3c02c090  lui         $v0, 0xC090
    ctx->pc = 0x1bf970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49296 << 16));
    // 0x1bf974: 0xe6610010  swc1        $f1, 0x10($s3)
    ctx->pc = 0x1bf974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x1bf978: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x1bf978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf97c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1bf97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf980: 0x0  nop
    ctx->pc = 0x1bf980u;
    // NOP
    // 0x1bf984: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1bf984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1bf988: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x1bf988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x1bf98c: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1bf98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf990: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bf990u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bf994: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1bf994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf998: 0x0  nop
    ctx->pc = 0x1bf998u;
    // NOP
    // 0x1bf99c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF99Cu;
    {
        const bool branch_taken_0x1bf99c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF99Cu;
            // 0x1bf9a0: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf99c) {
            ctx->pc = 0x1BF9A8u;
            goto label_1bf9a8;
        }
    }
    ctx->pc = 0x1BF9A4u;
    // 0x1bf9a4: 0xe6630014  swc1        $f3, 0x14($s3)
    ctx->pc = 0x1bf9a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_1bf9a8:
    // 0x1bf9a8: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x1bf9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x1bf9ac: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x1bf9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf9b0: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x1bf9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x1bf9b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf9b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bf9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bf9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9c0: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1bf9c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bf9c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bf9c8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1BF9C8u;
    SET_GPR_U32(ctx, 31, 0x1BF9D0u);
    ctx->pc = 0x1BF9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF9C8u;
            // 0x1bf9cc: 0xe660001c  swc1        $f0, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9D0u; }
        if (ctx->pc != 0x1BF9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF9D0u; }
        if (ctx->pc != 0x1BF9D0u) { return; }
    }
    ctx->pc = 0x1BF9D0u;
label_1bf9d0:
    // 0x1bf9d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bf9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bf9d4: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1bf9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x1bf9d8: 0x86630022  lh          $v1, 0x22($s3)
    ctx->pc = 0x1bf9d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x1bf9dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bf9e0: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x1bf9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
label_1bf9e4:
    // 0x1bf9e4: 0x0  nop
    ctx->pc = 0x1bf9e4u;
    // NOP
    // 0x1bf9e8: 0x26b50078  addiu       $s5, $s5, 0x78
    ctx->pc = 0x1bf9e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 120));
    // 0x1bf9ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bf9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bf9f0: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x1bf9f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1bf9f4:
    // 0x1bf9f4: 0x0  nop
    ctx->pc = 0x1bf9f4u;
    // NOP
    // 0x1bf9f8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x1bf9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1bf9fc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1bf9fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bfa00: 0x1460ff74  bnez        $v1, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1BFA00u;
    {
        const bool branch_taken_0x1bfa00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa00) {
            ctx->pc = 0x1BF7D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf7d4;
        }
    }
    ctx->pc = 0x1BFA08u;
    // 0x1bfa08: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x1bfa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1bfa0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bfa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bfa10: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFA10u;
    {
        const bool branch_taken_0x1bfa10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA10u;
            // 0x1bfa14: 0xaec30008  sw          $v1, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa10) {
            ctx->pc = 0x1BFA1Cu;
            goto label_1bfa1c;
        }
    }
    ctx->pc = 0x1BFA18u;
    // 0x1bfa18: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1bfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1bfa1c:
    // 0x1bfa1c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bfa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfa20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bfa20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfa24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bfa24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfa28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bfa28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfa2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bfa2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfa30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bfa30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfa34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfa34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfa38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFA3Cu;
            // 0x1bfa40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFA44u;
}
