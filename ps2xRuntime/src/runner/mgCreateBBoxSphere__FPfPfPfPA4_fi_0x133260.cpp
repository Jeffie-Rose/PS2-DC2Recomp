#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgCreateBBoxSphere__FPfPfPfPA4_fi
// Address: 0x133260 - 0x1333f8
void mgCreateBBoxSphere__FPfPfPfPA4_fi_0x133260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgCreateBBoxSphere__FPfPfPfPA4_fi_0x133260");
#endif

    switch (ctx->pc) {
        case 0x1332f8u: goto label_1332f8;
        case 0x133308u: goto label_133308;
        case 0x133314u: goto label_133314;
        case 0x133330u: goto label_133330;
        case 0x133358u: goto label_133358;
        case 0x133370u: goto label_133370;
        case 0x133388u: goto label_133388;
        case 0x133398u: goto label_133398;
        default: break;
    }

    ctx->pc = 0x133260u;

    // 0x133260: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x133260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x133264: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x133264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x133268: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x133268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13326c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x13326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x133270: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x133270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x133274: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x133274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x133278: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x133278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13327c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x133280: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x133280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x133284: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x133284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x133288: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x133288u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13328c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13328cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133290: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x133290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133294: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x133294u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133298: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x133298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13329c: 0x16c0000d  bnez        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x13329Cu;
    {
        const bool branch_taken_0x13329c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13329c) {
            ctx->pc = 0x1332D4u;
            goto label_1332d4;
        }
    }
    ctx->pc = 0x1332A4u;
    // 0x1332a4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1332a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1332a8: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1332a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1332ac: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1332acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x1332b0: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1332b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x1332b4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1332b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x1332b8: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x1332b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x1332bc: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1332bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1332c0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1332c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1332c4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1332c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1332c8: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1332c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x1332cc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1332CCu;
    {
        const bool branch_taken_0x1332cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1332cc) {
            ctx->pc = 0x1333C8u;
            goto label_1333c8;
        }
    }
    ctx->pc = 0x1332D4u;
label_1332d4:
    // 0x1332d4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1332d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1332d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1332dc: 0x24420d40  addiu       $v0, $v0, 0xD40
    ctx->pc = 0x1332dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3392));
    // 0x1332e0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1332e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1332e4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1332e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1332e8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1332e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1332ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1332ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332f0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1332F0u;
    SET_GPR_U32(ctx, 31, 0x1332F8u);
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1332F8u; }
        if (ctx->pc != 0x1332F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1332F8u; }
        if (ctx->pc != 0x1332F8u) { return; }
    }
    ctx->pc = 0x1332F8u;
label_1332f8:
    // 0x1332f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1332f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1332fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133300: 0xc041c5c  jal         func_107170
    ctx->pc = 0x133300u;
    SET_GPR_U32(ctx, 31, 0x133308u);
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133308u; }
        if (ctx->pc != 0x133308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133308u; }
        if (ctx->pc != 0x133308u) { return; }
    }
    ctx->pc = 0x133308u;
label_133308:
    // 0x133308: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x133308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13330c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13330Cu;
    {
        const bool branch_taken_0x13330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13330c) {
            ctx->pc = 0x133338u;
            goto label_133338;
        }
    }
    ctx->pc = 0x133314u;
label_133314:
    // 0x133314: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133318: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x133318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13331c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x13331cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133320: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x133320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133324: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x133324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133328: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x133328u;
    SET_GPR_U32(ctx, 31, 0x133330u);
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133330u; }
        if (ctx->pc != 0x133330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133330u; }
        if (ctx->pc != 0x133330u) { return; }
    }
    ctx->pc = 0x133330u;
label_133330:
    // 0x133330: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x133330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x133334: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x133334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_133338:
    // 0x133338: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x133338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x13333c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13333Cu;
    {
        const bool branch_taken_0x13333c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13333c) {
            ctx->pc = 0x133314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_133314;
        }
    }
    ctx->pc = 0x133344u;
    // 0x133344: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x133344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x133348: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x133348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13334c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13334cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133350: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x133350u;
    SET_GPR_U32(ctx, 31, 0x133358u);
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133358u; }
        if (ctx->pc != 0x133358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133358u; }
        if (ctx->pc != 0x133358u) { return; }
    }
    ctx->pc = 0x133358u;
label_133358:
    // 0x133358: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x133358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x13335c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13335cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133360: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x133360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133364: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x133364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x133368: 0xc041c4a  jal         func_107128
    ctx->pc = 0x133368u;
    SET_GPR_U32(ctx, 31, 0x133370u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133370u; }
        if (ctx->pc != 0x133370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133370u; }
        if (ctx->pc != 0x133370u) { return; }
    }
    ctx->pc = 0x133370u;
label_133370:
    // 0x133370: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x133370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x133374: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x133374u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x133378: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x133378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13337c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13337cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133380: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x133380u;
    {
        const bool branch_taken_0x133380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133380) {
            ctx->pc = 0x1333B8u;
            goto label_1333b8;
        }
    }
    ctx->pc = 0x133388u;
label_133388:
    // 0x133388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x133388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13338c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13338cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133390: 0xc04c018  jal         func_130060
    ctx->pc = 0x133390u;
    SET_GPR_U32(ctx, 31, 0x133398u);
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133398u; }
        if (ctx->pc != 0x133398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133398u; }
        if (ctx->pc != 0x133398u) { return; }
    }
    ctx->pc = 0x133398u;
label_133398:
    // 0x133398: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x133398u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13339c: 0x0  nop
    ctx->pc = 0x13339cu;
    // NOP
    // 0x1333a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1333A0u;
    {
        const bool branch_taken_0x1333a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1333a0) {
            ctx->pc = 0x1333ACu;
            goto label_1333ac;
        }
    }
    ctx->pc = 0x1333A8u;
    // 0x1333a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1333a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1333ac:
    // 0x1333ac: 0x0  nop
    ctx->pc = 0x1333acu;
    // NOP
    // 0x1333b0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1333b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1333b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1333b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1333b8:
    // 0x1333b8: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1333b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1333bc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1333BCu;
    {
        const bool branch_taken_0x1333bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1333bc) {
            ctx->pc = 0x133388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_133388;
        }
    }
    ctx->pc = 0x1333C4u;
    // 0x1333c4: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1333c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1333c8:
    // 0x1333c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1333c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1333cc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1333ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1333d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1333d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1333d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1333d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1333d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1333d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1333dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1333dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1333e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1333e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1333e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1333e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1333e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1333e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1333ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1333ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1333f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1333F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1333F8u;
}
