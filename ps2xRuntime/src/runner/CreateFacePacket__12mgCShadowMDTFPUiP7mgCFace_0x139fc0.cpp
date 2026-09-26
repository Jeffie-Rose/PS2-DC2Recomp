#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateFacePacket__12mgCShadowMDTFPUiP7mgCFace
// Address: 0x139fc0 - 0x13a38c
void CreateFacePacket__12mgCShadowMDTFPUiP7mgCFace_0x139fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateFacePacket__12mgCShadowMDTFPUiP7mgCFace_0x139fc0");
#endif

    switch (ctx->pc) {
        case 0x13a114u: goto label_13a114;
        case 0x13a12cu: goto label_13a12c;
        case 0x13a19cu: goto label_13a19c;
        case 0x13a280u: goto label_13a280;
        case 0x13a298u: goto label_13a298;
        case 0x13a308u: goto label_13a308;
        default: break;
    }

    ctx->pc = 0x139fc0u;

    // 0x139fc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x139fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x139fc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x139fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x139fc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x139fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x139fcc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x139fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x139fd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x139fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x139fd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x139fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x139fd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x139fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x139fdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x139fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139fe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139fe8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x139fe8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139fec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x139fecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ff0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x139ff0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ff4: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x139FF4u;
    {
        const bool branch_taken_0x139ff4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x139ff4) {
            ctx->pc = 0x13A008u;
            goto label_13a008;
        }
    }
    ctx->pc = 0x139FFCu;
    // 0x139ffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a000: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x13A000u;
    {
        const bool branch_taken_0x13a000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a000) {
            ctx->pc = 0x13A35Cu;
            goto label_13a35c;
        }
    }
    ctx->pc = 0x13A008u;
label_13a008:
    // 0x13a008: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13a008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a00c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x13a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x13a010: 0x2a21824  and         $v1, $s5, $v0
    ctx->pc = 0x13a010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x13a014: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13a014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13a018: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13A018u;
    {
        const bool branch_taken_0x13a018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13a018) {
            ctx->pc = 0x13A024u;
            goto label_13a024;
        }
    }
    ctx->pc = 0x13A020u;
    // 0x13a020: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13a020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a024:
    // 0x13a024: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x13a024u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a028: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x13a028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13a02c: 0x30460007  andi        $a2, $v0, 0x7
    ctx->pc = 0x13a02cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x13a030: 0x86910008  lh          $s1, 0x8($s4)
    ctx->pc = 0x13a030u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13a034: 0x8e92000c  lw          $s2, 0xC($s4)
    ctx->pc = 0x13a034u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a038: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x13a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13a03c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x13a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x13a040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a044: 0x93a50091  lbu         $a1, 0x91($sp)
    ctx->pc = 0x13a044u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 145)));
    // 0x13a048: 0x64040080  daddiu      $a0, $zero, 0x80
    ctx->pc = 0x13a048u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x13a04c: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x13a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x13a050: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x13a050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x13a054: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13a054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13a058: 0xa3a20091  sb          $v0, 0x91($sp)
    ctx->pc = 0x13a058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 145), (uint8_t)GPR_U32(ctx, 2));
    // 0x13a05c: 0x93a50095  lbu         $a1, 0x95($sp)
    ctx->pc = 0x13a05cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 149)));
    // 0x13a060: 0x64020040  daddiu      $v0, $zero, 0x40
    ctx->pc = 0x13a060u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x13a064: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x13a064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13a068: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x13a068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x13a06c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x13a06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13a070: 0xa3a40095  sb          $a0, 0x95($sp)
    ctx->pc = 0x13a070u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 149), (uint8_t)GPR_U32(ctx, 4));
    // 0x13a074: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x13a074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x13a078: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x13a078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13a07c: 0x10c50004  beq         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A07Cu;
    {
        const bool branch_taken_0x13a07c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x13a07c) {
            ctx->pc = 0x13A090u;
            goto label_13a090;
        }
    }
    ctx->pc = 0x13A084u;
    // 0x13a084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a088: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x13A088u;
    {
        const bool branch_taken_0x13a088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a088) {
            ctx->pc = 0x13A35Cu;
            goto label_13a35c;
        }
    }
    ctx->pc = 0x13A090u;
label_13a090:
    // 0x13a090: 0xdfa80090  ld          $t0, 0x90($sp)
    ctx->pc = 0x13a090u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13a094: 0x6405005d  daddiu      $a1, $zero, 0x5D
    ctx->pc = 0x13a094u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)93);
    // 0x13a098: 0x53bfc  dsll32      $a3, $a1, 15
    ctx->pc = 0x13a098u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 15));
    // 0x13a09c: 0x3c05fc00  lui         $a1, 0xFC00
    ctx->pc = 0x13a09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64512 << 16));
    // 0x13a0a0: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x13a0a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x13a0a4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13a0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13a0a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x13a0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13a0ac: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x13a0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x13a0b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x13a0b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x13a0b4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x13a0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x13a0b8: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x13a0b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x13a0bc: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x13a0bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x13a0c0: 0xffa50090  sd          $a1, 0x90($sp)
    ctx->pc = 0x13a0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 5));
    // 0x13a0c4: 0x93a50097  lbu         $a1, 0x97($sp)
    ctx->pc = 0x13a0c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 151)));
    // 0x13a0c8: 0x64060020  daddiu      $a2, $zero, 0x20
    ctx->pc = 0x13a0c8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x13a0cc: 0x2407ff0f  addiu       $a3, $zero, -0xF1
    ctx->pc = 0x13a0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x13a0d0: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x13a0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x13a0d4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x13a0d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x13a0d8: 0xa3a50097  sb          $a1, 0x97($sp)
    ctx->pc = 0x13a0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 151), (uint8_t)GPR_U32(ctx, 5));
    // 0x13a0dc: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x13a0dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a0e0: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x13a0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x13a0e4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x13a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13a0e8: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x13a0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13a0ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x13a0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13a0f0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x13a0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13a0f4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x13a0f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a0f8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x13a0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x13a0fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13a0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13a100: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x13a100u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x13a104: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A104u;
    {
        const bool branch_taken_0x13a104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a104) {
            ctx->pc = 0x13A11Cu;
            goto label_13a11c;
        }
    }
    ctx->pc = 0x13A10Cu;
    // 0x13a10c: 0xc04f8ec  jal         func_13E3B0
    ctx->pc = 0x13A10Cu;
    SET_GPR_U32(ctx, 31, 0x13A114u);
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A114u; }
        if (ctx->pc != 0x13A114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A114u; }
        if (ctx->pc != 0x13A114u) { return; }
    }
    ctx->pc = 0x13A114u;
label_13a114:
    // 0x13a114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13A114u;
    {
        const bool branch_taken_0x13a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a114) {
            ctx->pc = 0x13A120u;
            goto label_13a120;
        }
    }
    ctx->pc = 0x13A11Cu;
label_13a11c:
    // 0x13a11c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x13a11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13a120:
    // 0x13a120: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13a120u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a124: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x13A124u;
    {
        const bool branch_taken_0x13a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a124) {
            ctx->pc = 0x13A2B4u;
            goto label_13a2b4;
        }
    }
    ctx->pc = 0x13A12Cu;
label_13a12c:
    // 0x13a12c: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x13a12cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x13a130: 0x2a21002a  slti        $at, $s1, 0x2A
    ctx->pc = 0x13a130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)42) ? 1 : 0);
    // 0x13a134: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13A134u;
    {
        const bool branch_taken_0x13a134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a134) {
            ctx->pc = 0x13A140u;
            goto label_13a140;
        }
    }
    ctx->pc = 0x13A13Cu;
    // 0x13a13c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x13a13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13a140:
    // 0x13a140: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13a140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13a144: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13a144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x13a148: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x13a148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x13a14c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x13a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x13a150: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x13a150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x13a154: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13a158: 0x97a90090  lhu         $t1, 0x90($sp)
    ctx->pc = 0x13a158u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13a15c: 0x30e87fff  andi        $t0, $a3, 0x7FFF
    ctx->pc = 0x13a15cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32767);
    // 0x13a160: 0x24068000  addiu       $a2, $zero, -0x8000
    ctx->pc = 0x13a160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x13a164: 0x1263024  and         $a2, $t1, $a2
    ctx->pc = 0x13a164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x13a168: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x13a168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x13a16c: 0xa7a60090  sh          $a2, 0x90($sp)
    ctx->pc = 0x13a16cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x13a170: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x13a170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13a174: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x13a174u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13a178: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x13a178u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x13a17c: 0xac470020  sw          $a3, 0x20($v0)
    ctx->pc = 0x13a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 7));
    // 0x13a180: 0xac470024  sw          $a3, 0x24($v0)
    ctx->pc = 0x13a180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 7));
    // 0x13a184: 0x96860000  lhu         $a2, 0x0($s4)
    ctx->pc = 0x13a184u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13a188: 0xac460028  sw          $a2, 0x28($v0)
    ctx->pc = 0x13a188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 6));
    // 0x13a18c: 0x8ec60030  lw          $a2, 0x30($s6)
    ctx->pc = 0x13a18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x13a190: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x13a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13a194: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13A194u;
    {
        const bool branch_taken_0x13a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a194) {
            ctx->pc = 0x13A1E8u;
            goto label_13a1e8;
        }
    }
    ctx->pc = 0x13A19Cu;
label_13a19c:
    // 0x13a19c: 0x0  nop
    ctx->pc = 0x13a19cu;
    // NOP
    // 0x13a1a0: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13a1a4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x13a1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x13a1a8: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x13a1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x13a1ac: 0x79080000  lq          $t0, 0x0($t0)
    ctx->pc = 0x13a1acu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13a1b0: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x13a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x13a1b4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x13a1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13a1b8: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x13a1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x13a1bc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x13a1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x13a1c0: 0x79080000  lq          $t0, 0x0($t0)
    ctx->pc = 0x13a1c0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13a1c4: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x13a1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x13a1c8: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x13a1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13a1cc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x13a1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x13a1d0: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x13a1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x13a1d4: 0x79080000  lq          $t0, 0x0($t0)
    ctx->pc = 0x13a1d4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13a1d8: 0x7c480020  sq          $t0, 0x20($v0)
    ctx->pc = 0x13a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 8));
    // 0x13a1dc: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x13a1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x13a1e0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x13a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13a1e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x13a1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_13a1e8:
    // 0x13a1e8: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13A1E8u;
    {
        const bool branch_taken_0x13a1e8 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x13a1e8) {
            ctx->pc = 0x13A19Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a19c;
        }
    }
    ctx->pc = 0x13A1F0u;
    // 0x13a1f0: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x13a1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13a1f4: 0x62883  sra         $a1, $a2, 2
    ctx->pc = 0x13a1f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 2));
    // 0x13a1f8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A1F8u;
    {
        const bool branch_taken_0x13a1f8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x13a1f8) {
            ctx->pc = 0x13A208u;
            goto label_13a208;
        }
    }
    ctx->pc = 0x13A200u;
    // 0x13a200: 0x24c50003  addiu       $a1, $a2, 0x3
    ctx->pc = 0x13a200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x13a204: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x13a204u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_13a208:
    // 0x13a208: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x13a208u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x13a20c: 0x53400  sll         $a2, $a1, 16
    ctx->pc = 0x13a20cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x13a210: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x13a210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x13a214: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x13a214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x13a218: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x13a218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x13a21c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x13a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x13a220: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x13a220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x13a224: 0x24844040  addiu       $a0, $a0, 0x4040
    ctx->pc = 0x13a224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x13a228: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x13a228u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a22c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x13a22cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x13a230: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13a234: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x13a234u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a238: 0x49883  sra         $s3, $a0, 2
    ctx->pc = 0x13a238u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), 2));
    // 0x13a23c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A23Cu;
    {
        const bool branch_taken_0x13a23c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x13a23c) {
            ctx->pc = 0x13A24Cu;
            goto label_13a24c;
        }
    }
    ctx->pc = 0x13A244u;
    // 0x13a244: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x13a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x13a248: 0x49883  sra         $s3, $a0, 2
    ctx->pc = 0x13a248u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), 2));
label_13a24c:
    // 0x13a24c: 0x2a610515  slti        $at, $s3, 0x515
    ctx->pc = 0x13a24cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1301) ? 1 : 0);
    // 0x13a250: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x13A250u;
    {
        const bool branch_taken_0x13a250 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a250) {
            ctx->pc = 0x13A2ACu;
            goto label_13a2ac;
        }
    }
    ctx->pc = 0x13A258u;
    // 0x13a258: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13A258u;
    {
        const bool branch_taken_0x13a258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a258) {
            ctx->pc = 0x13A280u;
            goto label_13a280;
        }
    }
    ctx->pc = 0x13A260u;
    // 0x13a260: 0x132883  sra         $a1, $s3, 2
    ctx->pc = 0x13a260u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 19), 2));
    // 0x13a264: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A264u;
    {
        const bool branch_taken_0x13a264 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x13a264) {
            ctx->pc = 0x13A274u;
            goto label_13a274;
        }
    }
    ctx->pc = 0x13A26Cu;
    // 0x13a26c: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x13a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x13a270: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x13a270u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_13a274:
    // 0x13a274: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13a274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a278: 0xc04f8f4  jal         func_13E3D0
    ctx->pc = 0x13A278u;
    SET_GPR_U32(ctx, 31, 0x13A280u);
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A280u; }
        if (ctx->pc != 0x13A280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A280u; }
        if (ctx->pc != 0x13A280u) { return; }
    }
    ctx->pc = 0x13A280u;
label_13a280:
    // 0x13a280: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13a280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13a284: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x13a284u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x13a288: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A288u;
    {
        const bool branch_taken_0x13a288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a288) {
            ctx->pc = 0x13A2A0u;
            goto label_13a2a0;
        }
    }
    ctx->pc = 0x13A290u;
    // 0x13a290: 0xc04f8ec  jal         func_13E3B0
    ctx->pc = 0x13A290u;
    SET_GPR_U32(ctx, 31, 0x13A298u);
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A298u; }
        if (ctx->pc != 0x13A298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A298u; }
        if (ctx->pc != 0x13A298u) { return; }
    }
    ctx->pc = 0x13A298u;
label_13a298:
    // 0x13a298: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13A298u;
    {
        const bool branch_taken_0x13a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a298) {
            ctx->pc = 0x13A2A4u;
            goto label_13a2a4;
        }
    }
    ctx->pc = 0x13A2A0u;
label_13a2a0:
    // 0x13a2a0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x13a2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13a2a4:
    // 0x13a2a4: 0x0  nop
    ctx->pc = 0x13a2a4u;
    // NOP
    // 0x13a2a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13a2a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a2ac:
    // 0x13a2ac: 0x0  nop
    ctx->pc = 0x13a2acu;
    // NOP
    // 0x13a2b0: 0x2631ffd6  addiu       $s1, $s1, -0x2A
    ctx->pc = 0x13a2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967254));
label_13a2b4:
    // 0x13a2b4: 0x0  nop
    ctx->pc = 0x13a2b4u;
    // NOP
    // 0x13a2b8: 0x1e20ff9c  bgtz        $s1, . + 4 + (-0x64 << 2)
    ctx->pc = 0x13A2B8u;
    {
        const bool branch_taken_0x13a2b8 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x13a2b8) {
            ctx->pc = 0x13A12Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a12c;
        }
    }
    ctx->pc = 0x13A2C0u;
    // 0x13a2c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a2c4: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x13a2c4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
    // 0x13a2c8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A2C8u;
    {
        const bool branch_taken_0x13a2c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13a2c8) {
            ctx->pc = 0x13A2D8u;
            goto label_13a2d8;
        }
    }
    ctx->pc = 0x13A2D0u;
    // 0x13a2d0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x13a2d4: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x13a2d4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_13a2d8:
    // 0x13a2d8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x13A2D8u;
    {
        const bool branch_taken_0x13a2d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a2d8) {
            ctx->pc = 0x13A308u;
            goto label_13a308;
        }
    }
    ctx->pc = 0x13A2E0u;
    // 0x13a2e0: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13A2E0u;
    {
        const bool branch_taken_0x13a2e0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x13a2e0) {
            ctx->pc = 0x13A308u;
            goto label_13a308;
        }
    }
    ctx->pc = 0x13A2E8u;
    // 0x13a2e8: 0x112883  sra         $a1, $s1, 2
    ctx->pc = 0x13a2e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 2));
    // 0x13a2ec: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A2ECu;
    {
        const bool branch_taken_0x13a2ec = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x13a2ec) {
            ctx->pc = 0x13A2FCu;
            goto label_13a2fc;
        }
    }
    ctx->pc = 0x13A2F4u;
    // 0x13a2f4: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x13a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x13a2f8: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x13a2f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_13a2fc:
    // 0x13a2fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13a2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a300: 0xc04f8f4  jal         func_13E3D0
    ctx->pc = 0x13A300u;
    SET_GPR_U32(ctx, 31, 0x13A308u);
    ctx->pc = 0x13E3D0u;
    if (runtime->hasFunction(0x13E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A308u; }
        if (ctx->pc != 0x13A308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendDMA__FPvi_0x13e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A308u; }
        if (ctx->pc != 0x13A308u) { return; }
    }
    ctx->pc = 0x13A308u;
label_13a308:
    // 0x13a308: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13a308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13a30c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x13a30cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x13a310: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13a310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13a314: 0x24424050  addiu       $v0, $v0, 0x4050
    ctx->pc = 0x13a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16464));
    // 0x13a318: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x13a318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13a31c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13a31cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a320: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13a320u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13a324: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x13a324u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13a328: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x13a328u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x13a32c: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x13a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x13a330: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x13a330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x13a334: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x13a334u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x13a338: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A338u;
    {
        const bool branch_taken_0x13a338 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13a338) {
            ctx->pc = 0x13A348u;
            goto label_13a348;
        }
    }
    ctx->pc = 0x13A340u;
    // 0x13a340: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x13a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x13a344: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x13a344u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_13a348:
    // 0x13a348: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x13a348u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13a34c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A34Cu;
    {
        const bool branch_taken_0x13a34c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13a34c) {
            ctx->pc = 0x13A35Cu;
            goto label_13a35c;
        }
    }
    ctx->pc = 0x13A354u;
    // 0x13a354: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13a354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13a358: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13a358u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13a35c:
    // 0x13a35c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x13a35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13a360: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13a360u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13a364: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13a364u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a368: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13a368u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a36c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13a36cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a370: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a374: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a37c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a380: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x13a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13a384: 0x3e00008  jr          $ra
    ctx->pc = 0x13A384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A38Cu;
}
