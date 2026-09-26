#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcPosParabolicJump__FPfPfPffff
// Address: 0x290080 - 0x2901e4
void CalcPosParabolicJump__FPfPfPffff_0x290080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcPosParabolicJump__FPfPfPffff_0x290080");
#endif

    switch (ctx->pc) {
        case 0x2900e4u: goto label_2900e4;
        case 0x2900f4u: goto label_2900f4;
        case 0x290108u: goto label_290108;
        case 0x29015cu: goto label_29015c;
        case 0x290190u: goto label_290190;
        case 0x2901a8u: goto label_2901a8;
        default: break;
    }

    ctx->pc = 0x290080u;

    // 0x290080: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x290080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x290084: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x290084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x290088: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x290088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29008c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29008cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290090: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x290090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x290094: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x290094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x290098: 0x460d03c0  add.s       $f15, $f0, $f13
    ctx->pc = 0x290098u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x29009c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29009cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2900a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2900a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2900a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2900a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2900a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2900acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900b0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2900b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2900b4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2900b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2900b8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2900b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2900bc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2900bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2900c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2900c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2900c4: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x2900c4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x2900c8: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x2900c8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x2900cc: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x2900ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2900d0: 0xc4cd0004  lwc1        $f13, 0x4($a2)
    ctx->pc = 0x2900d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2900d4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2900d4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2900d8: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x2900d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x2900dc: 0xc0a4014  jal         func_290050
    ctx->pc = 0x2900DCu;
    SET_GPR_U32(ctx, 31, 0x2900E4u);
    ctx->pc = 0x2900E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2900DCu;
            // 0x2900e0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x290050u;
    if (runtime->hasFunction(0x290050u)) {
        auto targetFn = runtime->lookupFunction(0x290050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2900E4u; }
        if (ctx->pc != 0x2900E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParabolicInitialVectorY__Fffff_0x290050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2900E4u; }
        if (ctx->pc != 0x2900E4u) { return; }
    }
    ctx->pc = 0x2900E4u;
label_2900e4:
    // 0x2900e4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2900e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2900e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2900e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2900ECu;
    SET_GPR_U32(ctx, 31, 0x2900F4u);
    ctx->pc = 0x2900F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2900ECu;
            // 0x2900f0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2900F4u; }
        if (ctx->pc != 0x2900F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2900F4u; }
        if (ctx->pc != 0x2900F4u) { return; }
    }
    ctx->pc = 0x2900F4u;
label_2900f4:
    // 0x2900f4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2900f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2900f8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x2900F8u;
    {
        const bool branch_taken_0x2900f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2900FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2900F8u;
            // 0x2900fc: 0x28410009  slti        $at, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900f8) {
            ctx->pc = 0x290178u;
            goto label_290178;
        }
    }
    ctx->pc = 0x290100u;
    // 0x290100: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x290100u;
    {
        const bool branch_taken_0x290100 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x290104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290100u;
            // 0x290104: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290100) {
            ctx->pc = 0x290168u;
            goto label_290168;
        }
    }
    ctx->pc = 0x290108u;
label_290108:
    // 0x290108: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x290108u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x29010c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x29010cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x290110: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x290110u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x290114: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x290114u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x290118: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x290118u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x29011c: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x29011cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x290120: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x290120u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x290124: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x290124u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x290128: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x290128u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x29012c: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x29012cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x290130: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x290130u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x290134: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x290134u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x290138: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x290138u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x29013c: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x29013cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x290140: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x290140u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x290144: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x290144u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x290148: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x290148u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x29014c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x29014Cu;
    {
        const bool branch_taken_0x29014c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29014Cu;
            // 0x290150: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29014c) {
            ctx->pc = 0x290108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_290108;
        }
    }
    ctx->pc = 0x290154u;
    // 0x290154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290154u;
    {
        const bool branch_taken_0x290154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290154) {
            ctx->pc = 0x290168u;
            goto label_290168;
        }
    }
    ctx->pc = 0x29015Cu;
label_29015c:
    // 0x29015c: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x29015cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x290160: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x290160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x290164: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x290164u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_290168:
    // 0x290168: 0x262182a  slt         $v1, $s3, $v0
    ctx->pc = 0x290168u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29016c: 0x0  nop
    ctx->pc = 0x29016cu;
    // NOP
    // 0x290170: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x290170u;
    {
        const bool branch_taken_0x290170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x290170) {
            ctx->pc = 0x29015Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29015c;
        }
    }
    ctx->pc = 0x290178u;
label_290178:
    // 0x290178: 0x4617b543  div.s       $f21, $f22, $f23
    ctx->pc = 0x290178u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[22], ctx->f[23]); }
    // 0x29017c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x29017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x290180: 0x0  nop
    ctx->pc = 0x290180u;
    // NOP
    // 0x290184: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x290184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x290188: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x290188u;
    SET_GPR_U32(ctx, 31, 0x290190u);
    ctx->pc = 0x29018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290188u;
            // 0x29018c: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290190u; }
        if (ctx->pc != 0x290190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290190u; }
        if (ctx->pc != 0x290190u) { return; }
    }
    ctx->pc = 0x290190u;
label_290190:
    // 0x290190: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x290190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x290194: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x290194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x290198: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x290198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29019c: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x29019cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2901a0: 0xc0543fc  jal         func_150FF0
    ctx->pc = 0x2901A0u;
    SET_GPR_U32(ctx, 31, 0x2901A8u);
    ctx->pc = 0x2901A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2901A0u;
            // 0x2901a4: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x150FF0u;
    if (runtime->hasFunction(0x150FF0u)) {
        auto targetFn = runtime->lookupFunction(0x150FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2901A8u; }
        if (ctx->pc != 0x2901A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinerInterpolation__Ffff_0x150ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2901A8u; }
        if (ctx->pc != 0x2901A8u) { return; }
    }
    ctx->pc = 0x2901A8u;
label_2901a8:
    // 0x2901a8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2901a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2901ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2901acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2901b0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2901b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x2901b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2901b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2901b8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x2901b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2901bc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2901bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2901c0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2901c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2901c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2901c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2901c8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2901c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2901cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2901ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2901d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2901d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2901d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2901d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2901d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2901d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2901dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2901DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2901E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2901DCu;
            // 0x2901e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2901E4u;
}
