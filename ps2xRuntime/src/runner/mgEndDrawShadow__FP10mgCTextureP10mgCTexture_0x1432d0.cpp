#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgEndDrawShadow__FP10mgCTextureP10mgCTexture
// Address: 0x1432d0 - 0x1435f8
void mgEndDrawShadow__FP10mgCTextureP10mgCTexture_0x1432d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgEndDrawShadow__FP10mgCTextureP10mgCTexture_0x1432d0");
#endif

    switch (ctx->pc) {
        case 0x143320u: goto label_143320;
        case 0x1433d8u: goto label_1433d8;
        case 0x1433e0u: goto label_1433e0;
        case 0x1433f0u: goto label_1433f0;
        case 0x1433fcu: goto label_1433fc;
        case 0x143408u: goto label_143408;
        case 0x143418u: goto label_143418;
        case 0x143424u: goto label_143424;
        case 0x143430u: goto label_143430;
        case 0x14343cu: goto label_14343c;
        case 0x143448u: goto label_143448;
        case 0x143454u: goto label_143454;
        case 0x14346cu: goto label_14346c;
        case 0x143478u: goto label_143478;
        case 0x1434f8u: goto label_1434f8;
        case 0x14353cu: goto label_14353c;
        case 0x14354cu: goto label_14354c;
        case 0x143560u: goto label_143560;
        case 0x143578u: goto label_143578;
        case 0x14358cu: goto label_14358c;
        case 0x1435c0u: goto label_1435c0;
        case 0x1435d4u: goto label_1435d4;
        case 0x1435dcu: goto label_1435dc;
        default: break;
    }

    ctx->pc = 0x1432d0u;

    // 0x1432d0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1432d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1432d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1432d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1432d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1432d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1432dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1432dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1432e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1432e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1432e4: 0x108000bd  beqz        $a0, . + 4 + (0xBD << 2)
    ctx->pc = 0x1432E4u;
    {
        const bool branch_taken_0x1432e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1432E4u;
            // 0x1432e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432e4) {
            ctx->pc = 0x1435DCu;
            goto label_1435dc;
        }
    }
    ctx->pc = 0x1432ECu;
    // 0x1432ec: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x1432ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1432f0: 0x27b10052  addiu       $s1, $sp, 0x52
    ctx->pc = 0x1432f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 82));
    // 0x1432f4: 0x27b00054  addiu       $s0, $sp, 0x54
    ctx->pc = 0x1432f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1432f8: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x1432f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1432fc: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1432fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x143300: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143304: 0xa7a20050  sh          $v0, 0x50($sp)
    ctx->pc = 0x143304u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x143308: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x143308u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14330c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x14330cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x143310: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x143310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143314: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x143314u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x143318: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x143318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x14331c: 0xa7a20056  sh          $v0, 0x56($sp)
    ctx->pc = 0x14331cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 86), (uint16_t)GPR_U32(ctx, 2));
label_143320:
    // 0x143320: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x143320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x143324: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x143324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x143328: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x143328u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x14332c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x14332cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x143330: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x143330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x143334: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x143334u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x143338: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x143338u;
    {
        const bool branch_taken_0x143338 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x14333Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143338u;
            // 0x14333c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143338) {
            ctx->pc = 0x143320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_143320;
        }
    }
    ctx->pc = 0x143340u;
    // 0x143340: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x143340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x143344: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x143344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x143348: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x143348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x14334c: 0x64030010  daddiu      $v1, $zero, 0x10
    ctx->pc = 0x14334cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x143350: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x143350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x143354: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x143354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x143358: 0xafa6007c  sw          $a2, 0x7C($sp)
    ctx->pc = 0x143358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
    // 0x14335c: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x14335cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x143360: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x143360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x143364: 0xdc860038  ld          $a2, 0x38($a0)
    ctx->pc = 0x143364u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x143368: 0xffa60088  sd          $a2, 0x88($sp)
    ctx->pc = 0x143368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 6));
    // 0x14336c: 0xdc860040  ld          $a2, 0x40($a0)
    ctx->pc = 0x14336cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x143370: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x143370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x143374: 0xdc860048  ld          $a2, 0x48($a0)
    ctx->pc = 0x143374u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x143378: 0xffa60098  sd          $a2, 0x98($sp)
    ctx->pc = 0x143378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 6));
    // 0x14337c: 0xc4830050  lwc1        $f3, 0x50($a0)
    ctx->pc = 0x14337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143380: 0xc4820054  lwc1        $f2, 0x54($a0)
    ctx->pc = 0x143380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143384: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x143384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143388: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x143388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14338c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x14338cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x143390: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x143390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x143394: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x143394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x143398: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x143398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x14339c: 0x8c860060  lw          $a2, 0x60($a0)
    ctx->pc = 0x14339cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1433a0: 0x97a5008a  lhu         $a1, 0x8A($sp)
    ctx->pc = 0x1433a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 138)));
    // 0x1433a4: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x1433a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x1433a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1433a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1433ac: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x1433acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1433b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1433b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1433b4: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x1433b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x1433b8: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x1433b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1433bc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1433bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1433c0: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x1433c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x1433c4: 0xa7a2008a  sh          $v0, 0x8A($sp)
    ctx->pc = 0x1433c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 138), (uint16_t)GPR_U32(ctx, 2));
    // 0x1433c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1433c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1433ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433d0: 0xc050f18  jal         func_143C60
    ctx->pc = 0x1433D0u;
    SET_GPR_U32(ctx, 31, 0x1433D8u);
    ctx->pc = 0x1433D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1433D0u;
            // 0x1433d4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1433D8u; }
        if (ctx->pc != 0x1433D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1433D8u; }
        if (ctx->pc != 0x1433D8u) { return; }
    }
    ctx->pc = 0x1433D8u;
label_1433d8:
    // 0x1433d8: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1433D8u;
    SET_GPR_U32(ctx, 31, 0x1433E0u);
    ctx->pc = 0x1433DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1433D8u;
            // 0x1433dc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1433E0u; }
        if (ctx->pc != 0x1433E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1433E0u; }
        if (ctx->pc != 0x1433E0u) { return; }
    }
    ctx->pc = 0x1433E0u;
label_1433e0:
    // 0x1433e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1433e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1433e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1433e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433e8: 0xc04d104  jal         func_134410
    ctx->pc = 0x1433E8u;
    SET_GPR_U32(ctx, 31, 0x1433F0u);
    ctx->pc = 0x1433ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1433E8u;
            // 0x1433ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1433F0u; }
        if (ctx->pc != 0x1433F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1433F0u; }
        if (ctx->pc != 0x1433F0u) { return; }
    }
    ctx->pc = 0x1433F0u;
label_1433f0:
    // 0x1433f0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1433f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1433f4: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1433F4u;
    SET_GPR_U32(ctx, 31, 0x1433FCu);
    ctx->pc = 0x1433F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1433F4u;
            // 0x1433f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1433FCu; }
        if (ctx->pc != 0x1433FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1433FCu; }
        if (ctx->pc != 0x1433FCu) { return; }
    }
    ctx->pc = 0x1433FCu;
label_1433fc:
    // 0x1433fc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1433fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x143400: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x143400u;
    SET_GPR_U32(ctx, 31, 0x143408u);
    ctx->pc = 0x143404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143400u;
            // 0x143404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143408u; }
        if (ctx->pc != 0x143408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143408u; }
        if (ctx->pc != 0x143408u) { return; }
    }
    ctx->pc = 0x143408u;
label_143408:
    // 0x143408: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x143408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14340c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x143410: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x143410u;
    SET_GPR_U32(ctx, 31, 0x143418u);
    ctx->pc = 0x143414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143410u;
            // 0x143414: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143418u; }
        if (ctx->pc != 0x143418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143418u; }
        if (ctx->pc != 0x143418u) { return; }
    }
    ctx->pc = 0x143418u;
label_143418:
    // 0x143418: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x143418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14341c: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x14341Cu;
    SET_GPR_U32(ctx, 31, 0x143424u);
    ctx->pc = 0x143420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14341Cu;
            // 0x143420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143424u; }
        if (ctx->pc != 0x143424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143424u; }
        if (ctx->pc != 0x143424u) { return; }
    }
    ctx->pc = 0x143424u;
label_143424:
    // 0x143424: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x143424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x143428: 0xc04d424  jal         func_135090
    ctx->pc = 0x143428u;
    SET_GPR_U32(ctx, 31, 0x143430u);
    ctx->pc = 0x14342Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143428u;
            // 0x14342c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143430u; }
        if (ctx->pc != 0x143430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143430u; }
        if (ctx->pc != 0x143430u) { return; }
    }
    ctx->pc = 0x143430u;
label_143430:
    // 0x143430: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x143430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x143434: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x143434u;
    SET_GPR_U32(ctx, 31, 0x14343Cu);
    ctx->pc = 0x143438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143434u;
            // 0x143438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14343Cu; }
        if (ctx->pc != 0x14343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14343Cu; }
        if (ctx->pc != 0x14343Cu) { return; }
    }
    ctx->pc = 0x14343Cu;
label_14343c:
    // 0x14343c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x143440: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x143440u;
    SET_GPR_U32(ctx, 31, 0x143448u);
    ctx->pc = 0x143444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143440u;
            // 0x143444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143448u; }
        if (ctx->pc != 0x143448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143448u; }
        if (ctx->pc != 0x143448u) { return; }
    }
    ctx->pc = 0x143448u;
label_143448:
    // 0x143448: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x143448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14344c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x14344Cu;
    SET_GPR_U32(ctx, 31, 0x143454u);
    ctx->pc = 0x143450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14344Cu;
            // 0x143450: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143454u; }
        if (ctx->pc != 0x143454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143454u; }
        if (ctx->pc != 0x143454u) { return; }
    }
    ctx->pc = 0x143454u;
label_143454:
    // 0x143454: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x143454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x143458: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x143458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14345c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14345cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143460: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x143460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143464: 0xc04d320  jal         func_134C80
    ctx->pc = 0x143464u;
    SET_GPR_U32(ctx, 31, 0x14346Cu);
    ctx->pc = 0x143468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143464u;
            // 0x143468: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14346Cu; }
        if (ctx->pc != 0x14346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14346Cu; }
        if (ctx->pc != 0x14346Cu) { return; }
    }
    ctx->pc = 0x14346Cu;
label_14346c:
    // 0x14346c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14346cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x143470: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x143470u;
    SET_GPR_U32(ctx, 31, 0x143478u);
    ctx->pc = 0x143474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143470u;
            // 0x143474: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143478u; }
        if (ctx->pc != 0x143478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143478u; }
        if (ctx->pc != 0x143478u) { return; }
    }
    ctx->pc = 0x143478u;
label_143478:
    // 0x143478: 0x93ac01d0  lbu         $t4, 0x1D0($sp)
    ctx->pc = 0x143478u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x14347c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x14347cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x143480: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x143480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x143484: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x143484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x143488: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x143488u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14348c: 0x64050002  daddiu      $a1, $zero, 0x2
    ctx->pc = 0x14348cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x143490: 0xa3a301d4  sb          $v1, 0x1D4($sp)
    ctx->pc = 0x143490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 468), (uint8_t)GPR_U32(ctx, 3));
    // 0x143494: 0x240afff3  addiu       $t2, $zero, -0xD
    ctx->pc = 0x143494u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x143498: 0x640b0004  daddiu      $t3, $zero, 0x4
    ctx->pc = 0x143498u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x14349c: 0x2408ffcf  addiu       $t0, $zero, -0x31
    ctx->pc = 0x14349cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1434a0: 0x2406ff3f  addiu       $a2, $zero, -0xC1
    ctx->pc = 0x1434a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1434a4: 0x64070040  daddiu      $a3, $zero, 0x40
    ctx->pc = 0x1434a4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1434a8: 0x1842024  and         $a0, $t4, $a0
    ctx->pc = 0x1434a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & GPR_U64(ctx, 4));
    // 0x1434ac: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x1434acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1434b0: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x1434b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1434b4: 0xa3a301d0  sb          $v1, 0x1D0($sp)
    ctx->pc = 0x1434b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1434b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1434bc: 0x93a301d0  lbu         $v1, 0x1D0($sp)
    ctx->pc = 0x1434bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1434c0: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x1434c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x1434c4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x1434c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x1434c8: 0xa3a301d0  sb          $v1, 0x1D0($sp)
    ctx->pc = 0x1434c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434cc: 0x93a301d0  lbu         $v1, 0x1D0($sp)
    ctx->pc = 0x1434ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1434d0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1434d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1434d4: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x1434d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1434d8: 0xa3a301d0  sb          $v1, 0x1D0($sp)
    ctx->pc = 0x1434d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434dc: 0x93a301d0  lbu         $v1, 0x1D0($sp)
    ctx->pc = 0x1434dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1434e0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1434e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1434e4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1434e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1434e8: 0xa3a301d0  sb          $v1, 0x1D0($sp)
    ctx->pc = 0x1434e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434ec: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1434ecu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1434f0: 0xc04d360  jal         func_134D80
    ctx->pc = 0x1434F0u;
    SET_GPR_U32(ctx, 31, 0x1434F8u);
    ctx->pc = 0x1434F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1434F0u;
            // 0x1434f4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434F8u; }
        if (ctx->pc != 0x1434F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434F8u; }
        if (ctx->pc != 0x1434F8u) { return; }
    }
    ctx->pc = 0x1434F8u;
label_1434f8:
    // 0x1434f8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1434f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1434fc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1434fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x143500: 0xa3a301d8  sb          $v1, 0x1D8($sp)
    ctx->pc = 0x143500u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 472), (uint8_t)GPR_U32(ctx, 3));
    // 0x143504: 0x27b201dc  addiu       $s2, $sp, 0x1DC
    ctx->pc = 0x143504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x143508: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x143508u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14350c: 0x27b301d9  addiu       $s3, $sp, 0x1D9
    ctx->pc = 0x14350cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 473));
    // 0x143510: 0x92670000  lbu         $a3, 0x0($s3)
    ctx->pc = 0x143510u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x143514: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x143514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x143518: 0x64060080  daddiu      $a2, $zero, 0x80
    ctx->pc = 0x143518u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x14351c: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x14351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x143520: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x143520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x143524: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x143524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x143528: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x143528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x14352c: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x14352cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x143530: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x143530u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143534: 0xc04d360  jal         func_134D80
    ctx->pc = 0x143534u;
    SET_GPR_U32(ctx, 31, 0x14353Cu);
    ctx->pc = 0x143538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143534u;
            // 0x143538: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14353Cu; }
        if (ctx->pc != 0x14353Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14353Cu; }
        if (ctx->pc != 0x14353Cu) { return; }
    }
    ctx->pc = 0x14353Cu;
label_14353c:
    // 0x14353c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14353cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143540: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x143540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x143544: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x143544u;
    SET_GPR_U32(ctx, 31, 0x14354Cu);
    ctx->pc = 0x143548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143544u;
            // 0x143548: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14354Cu; }
        if (ctx->pc != 0x14354Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14354Cu; }
        if (ctx->pc != 0x14354Cu) { return; }
    }
    ctx->pc = 0x14354Cu;
label_14354c:
    // 0x14354c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x143550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143558: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x143558u;
    SET_GPR_U32(ctx, 31, 0x143560u);
    ctx->pc = 0x14355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143558u;
            // 0x14355c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143560u; }
        if (ctx->pc != 0x143560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143560u; }
        if (ctx->pc != 0x143560u) { return; }
    }
    ctx->pc = 0x143560u;
label_143560:
    // 0x143560: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x143560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x143564: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x143564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x143568: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x143568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14356c: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x14356cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x143570: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x143570u;
    SET_GPR_U32(ctx, 31, 0x143578u);
    ctx->pc = 0x143574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143570u;
            // 0x143574: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143578u; }
        if (ctx->pc != 0x143578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143578u; }
        if (ctx->pc != 0x143578u) { return; }
    }
    ctx->pc = 0x143578u;
label_143578:
    // 0x143578: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x143578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x14357c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x143580: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x143580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x143584: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x143584u;
    SET_GPR_U32(ctx, 31, 0x14358Cu);
    ctx->pc = 0x143588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143584u;
            // 0x143588: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14358Cu; }
        if (ctx->pc != 0x14358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14358Cu; }
        if (ctx->pc != 0x14358Cu) { return; }
    }
    ctx->pc = 0x14358Cu;
label_14358c:
    // 0x14358c: 0xa3a001d8  sb          $zero, 0x1D8($sp)
    ctx->pc = 0x14358cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 472), (uint8_t)GPR_U32(ctx, 0));
    // 0x143590: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x143590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x143594: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x143594u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x143598: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x143598u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x14359c: 0x92670000  lbu         $a3, 0x0($s3)
    ctx->pc = 0x14359cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1435a0: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1435a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1435a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1435a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1435a8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1435a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1435ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1435acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1435b0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1435b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1435b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1435b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1435b8: 0xc04d360  jal         func_134D80
    ctx->pc = 0x1435B8u;
    SET_GPR_U32(ctx, 31, 0x1435C0u);
    ctx->pc = 0x1435BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1435B8u;
            // 0x1435bc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435C0u; }
        if (ctx->pc != 0x1435C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435C0u; }
        if (ctx->pc != 0x1435C0u) { return; }
    }
    ctx->pc = 0x1435C0u;
label_1435c0:
    // 0x1435c0: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x1435c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x1435c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1435c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1435c8: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1435c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1435cc: 0xc04d360  jal         func_134D80
    ctx->pc = 0x1435CCu;
    SET_GPR_U32(ctx, 31, 0x1435D4u);
    ctx->pc = 0x1435D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1435CCu;
            // 0x1435d0: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435D4u; }
        if (ctx->pc != 0x1435D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435D4u; }
        if (ctx->pc != 0x1435D4u) { return; }
    }
    ctx->pc = 0x1435D4u;
label_1435d4:
    // 0x1435d4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1435D4u;
    SET_GPR_U32(ctx, 31, 0x1435DCu);
    ctx->pc = 0x1435D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1435D4u;
            // 0x1435d8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435DCu; }
        if (ctx->pc != 0x1435DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435DCu; }
        if (ctx->pc != 0x1435DCu) { return; }
    }
    ctx->pc = 0x1435DCu;
label_1435dc:
    // 0x1435dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1435dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1435e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1435e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1435e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1435e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1435e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1435e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1435ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1435ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1435f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1435F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1435F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1435F0u;
            // 0x1435f4: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1435F8u;
}
