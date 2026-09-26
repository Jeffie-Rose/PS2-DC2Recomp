#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitFishBoiledEffect__FPiP10mgCTexture
// Address: 0x22f5b0 - 0x22f6e4
void InitFishBoiledEffect__FPiP10mgCTexture_0x22f5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFishBoiledEffect__FPiP10mgCTexture_0x22f5b0");
#endif

    switch (ctx->pc) {
        case 0x22f5e8u: goto label_22f5e8;
        case 0x22f5f8u: goto label_22f5f8;
        case 0x22f62cu: goto label_22f62c;
        case 0x22f658u: goto label_22f658;
        case 0x22f684u: goto label_22f684;
        default: break;
    }

    ctx->pc = 0x22f5b0u;

    // 0x22f5b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22f5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22f5b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22f5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22f5b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22f5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22f5bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22f5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22f5c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22f5c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22f5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22f5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f5d0: 0xaf85949c  sw          $a1, -0x6B64($gp)
    ctx->pc = 0x22f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939804), GPR_U32(ctx, 5));
    // 0x22f5d4: 0x1280003a  beqz        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x22F5D4u;
    {
        const bool branch_taken_0x22f5d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F5D4u;
            // 0x22f5d8: 0xa7809498  sh          $zero, -0x6B68($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939800), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5d4) {
            ctx->pc = 0x22F6C0u;
            goto label_22f6c0;
        }
    }
    ctx->pc = 0x22F5DCu;
    // 0x22f5dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22f5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22f5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22f5e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f5e8:
    // 0x22f5e8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x22f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x22f5ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f5f0: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22F5F0u;
    SET_GPR_U32(ctx, 31, 0x22F5F8u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F5F8u; }
        if (ctx->pc != 0x22F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F5F8u; }
        if (ctx->pc != 0x22F5F8u) { return; }
    }
    ctx->pc = 0x22F5F8u;
label_22f5f8:
    // 0x22f5f8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x22f5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f5fc: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x22f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x22f600: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22f600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22f604: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22f604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22f608: 0x2442d450  addiu       $v0, $v0, -0x2BB0
    ctx->pc = 0x22f608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956112));
    // 0x22f60c: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x22f60cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22f610: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22f610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f614: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x22f614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x22f618: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22f618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x22f61c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22f61cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22f620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f624: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22F624u;
    SET_GPR_U32(ctx, 31, 0x22F62Cu);
    ctx->pc = 0x22F628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F624u;
            // 0x22f628: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F62Cu; }
        if (ctx->pc != 0x22F62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F62Cu; }
        if (ctx->pc != 0x22F62Cu) { return; }
    }
    ctx->pc = 0x22F62Cu;
label_22f62c:
    // 0x22f62c: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x22f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f630: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x22f630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x22f634: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f638: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x22f638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x22f63c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f640: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22f640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x22f644: 0x46026080  add.s       $f2, $f12, $f2
    ctx->pc = 0x22f644u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x22f648: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x22f648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x22f64c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22f64cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f650: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22F650u;
    SET_GPR_U32(ctx, 31, 0x22F658u);
    ctx->pc = 0x22F654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F650u;
            // 0x22f654: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F658u; }
        if (ctx->pc != 0x22F658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F658u; }
        if (ctx->pc != 0x22F658u) { return; }
    }
    ctx->pc = 0x22F658u;
label_22f658:
    // 0x22f658: 0x3c034304  lui         $v1, 0x4304
    ctx->pc = 0x22f658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17156 << 16));
    // 0x22f65c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22f660: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22f660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f664: 0x2442d4d0  addiu       $v0, $v0, -0x2B30
    ctx->pc = 0x22f664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956240));
    // 0x22f668: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22f66c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22f66cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22f670: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x22f670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x22f674: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22f674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22f678: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f67c: 0xc0941c0  jal         func_250700
    ctx->pc = 0x22F67Cu;
    SET_GPR_U32(ctx, 31, 0x22F684u);
    ctx->pc = 0x22F680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22F67Cu;
            // 0x22f680: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F684u; }
        if (ctx->pc != 0x22F684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22F684u; }
        if (ctx->pc != 0x22F684u) { return; }
    }
    ctx->pc = 0x22F684u;
label_22f684:
    // 0x22f684: 0x3c043ecc  lui         $a0, 0x3ECC
    ctx->pc = 0x22f684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16076 << 16));
    // 0x22f688: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x22f688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x22f68c: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x22f68cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x22f690: 0x2463d4b0  addiu       $v1, $v1, -0x2B50
    ctx->pc = 0x22f690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956208));
    // 0x22f694: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x22f694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f698: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x22f698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x22f69c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22f69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22f6a0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x22f6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x22f6a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22f6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22f6a8: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x22f6a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22f6ac: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x22f6acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x22f6b0: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x22F6B0u;
    {
        const bool branch_taken_0x22f6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6B0u;
            // 0x22f6b4: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6b0) {
            ctx->pc = 0x22F5E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22f5e8;
        }
    }
    ctx->pc = 0x22F6B8u;
    // 0x22f6b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f6bc: 0xa7839498  sh          $v1, -0x6B68($gp)
    ctx->pc = 0x22f6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939800), (uint16_t)GPR_U32(ctx, 3));
label_22f6c0:
    // 0x22f6c0: 0xa7809494  sh          $zero, -0x6B6C($gp)
    ctx->pc = 0x22f6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939796), (uint16_t)GPR_U32(ctx, 0));
    // 0x22f6c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22f6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f6c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22f6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f6cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22f6ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f6d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22f6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f6d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f6d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x22F6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F6DCu;
            // 0x22f6e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22F6E4u;
}
