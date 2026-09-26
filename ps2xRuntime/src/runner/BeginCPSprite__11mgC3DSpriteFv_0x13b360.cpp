#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BeginCPSprite__11mgC3DSpriteFv
// Address: 0x13b360 - 0x13b588
void BeginCPSprite__11mgC3DSpriteFv_0x13b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BeginCPSprite__11mgC3DSpriteFv_0x13b360");
#endif

    ctx->pc = 0x13b360u;

    // 0x13b360: 0x8c89002c  lw          $t1, 0x2C($a0)
    ctx->pc = 0x13b360u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b364: 0x2407ff7f  addiu       $a3, $zero, -0x81
    ctx->pc = 0x13b364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x13b368: 0x64080080  daddiu      $t0, $zero, 0x80
    ctx->pc = 0x13b368u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x13b36c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x13b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13b370: 0x64060040  daddiu      $a2, $zero, 0x40
    ctx->pc = 0x13b370u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x13b374: 0x25250010  addiu       $a1, $t1, 0x10
    ctx->pc = 0x13b374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13b378: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x13b378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x13b37c: 0xac890034  sw          $t1, 0x34($a0)
    ctx->pc = 0x13b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 9));
    // 0x13b380: 0x8c89002c  lw          $t1, 0x2C($a0)
    ctx->pc = 0x13b380u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b384: 0x25250010  addiu       $a1, $t1, 0x10
    ctx->pc = 0x13b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13b388: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x13b388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x13b38c: 0xac890038  sw          $t1, 0x38($a0)
    ctx->pc = 0x13b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 9));
    // 0x13b390: 0x8c89002c  lw          $t1, 0x2C($a0)
    ctx->pc = 0x13b390u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b394: 0x25250010  addiu       $a1, $t1, 0x10
    ctx->pc = 0x13b394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x13b398: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x13b398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x13b39c: 0xac89003c  sw          $t1, 0x3C($a0)
    ctx->pc = 0x13b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 9));
    // 0x13b3a0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x13b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x13b3a4: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x13b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x13b3a8: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x13b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x13b3ac: 0x90a90001  lbu         $t1, 0x1($a1)
    ctx->pc = 0x13b3acu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x13b3b0: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x13b3b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x13b3b4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x13b3b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x13b3b8: 0xa0a70001  sb          $a3, 0x1($a1)
    ctx->pc = 0x13b3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x13b3bc: 0x90a70005  lbu         $a3, 0x5($a1)
    ctx->pc = 0x13b3bcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x13b3c0: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x13b3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x13b3c4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x13b3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13b3c8: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x13b3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b3cc: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x13b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x13b3d0: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x13B3D0u;
    {
        const bool branch_taken_0x13b3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3D0u;
            // 0x13b3d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3d0) {
            ctx->pc = 0x13B4D4u;
            goto label_13b4d4;
        }
    }
    ctx->pc = 0x13B3D8u;
    // 0x13b3d8: 0x106a0003  beq         $v1, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B3D8u;
    {
        const bool branch_taken_0x13b3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x13B3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3D8u;
            // 0x13b3dc: 0x3c03fc00  lui         $v1, 0xFC00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3d8) {
            ctx->pc = 0x13B3E8u;
            goto label_13b3e8;
        }
    }
    ctx->pc = 0x13B3E0u;
    // 0x13b3e0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x13B3E0u;
    {
        const bool branch_taken_0x13b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3E0u;
            // 0x13b3e4: 0x6403005e  daddiu      $v1, $zero, 0x5E (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)94);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b3e0) {
            ctx->pc = 0x13B4D8u;
            goto label_13b4d8;
        }
    }
    ctx->pc = 0x13B3E8u;
label_13b3e8:
    // 0x13b3e8: 0x6404005c  daddiu      $a0, $zero, 0x5C
    ctx->pc = 0x13b3e8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)92);
    // 0x13b3ec: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x13b3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x13b3f0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x13b3f0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b3f4: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x13b3f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13b3f8: 0x43bfc  dsll32      $a3, $a0, 15
    ctx->pc = 0x13b3f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 15));
    // 0x13b3fc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13b3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13b400: 0x3149000f  andi        $t1, $t2, 0xF
    ctx->pc = 0x13b400u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x13b404: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x13b404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x13b408: 0x2404ff0f  addiu       $a0, $zero, -0xF1
    ctx->pc = 0x13b408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x13b40c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13b40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13b410: 0x640a0090  daddiu      $t2, $zero, 0x90
    ctx->pc = 0x13b410u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)144);
    // 0x13b414: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x13b414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13b418: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x13b418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x13b41c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x13b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13b420: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x13b420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x13b424: 0x64080030  daddiu      $t0, $zero, 0x30
    ctx->pc = 0x13b424u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
    // 0x13b428: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x13b428u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x13b42c: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x13b42cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x13b430: 0x90a60007  lbu         $a2, 0x7($a1)
    ctx->pc = 0x13b430u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x13b434: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x13b434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x13b438: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x13b438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x13b43c: 0xa0a60007  sb          $a2, 0x7($a1)
    ctx->pc = 0x13b43cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x13b440: 0x90a60008  lbu         $a2, 0x8($a1)
    ctx->pc = 0x13b440u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13b444: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x13b444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13b448: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x13b448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x13b44c: 0xa0a60008  sb          $a2, 0x8($a1)
    ctx->pc = 0x13b44cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x13b450: 0x90a60008  lbu         $a2, 0x8($a1)
    ctx->pc = 0x13b450u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13b454: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x13b454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x13b458: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x13b458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x13b45c: 0xa0a60008  sb          $a2, 0x8($a1)
    ctx->pc = 0x13b45cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x13b460: 0x90a60009  lbu         $a2, 0x9($a1)
    ctx->pc = 0x13b460u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x13b464: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x13b464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13b468: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x13b468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x13b46c: 0xa0a60009  sb          $a2, 0x9($a1)
    ctx->pc = 0x13b46cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x13b470: 0x90a60009  lbu         $a2, 0x9($a1)
    ctx->pc = 0x13b470u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x13b474: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x13b474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x13b478: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x13b478u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x13b47c: 0xa0a60009  sb          $a2, 0x9($a1)
    ctx->pc = 0x13b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x13b480: 0x90a6000a  lbu         $a2, 0xA($a1)
    ctx->pc = 0x13b480u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x13b484: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x13b484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13b488: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x13b488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x13b48c: 0xa0a6000a  sb          $a2, 0xA($a1)
    ctx->pc = 0x13b48cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x13b490: 0x90a6000a  lbu         $a2, 0xA($a1)
    ctx->pc = 0x13b490u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x13b494: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x13b494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x13b498: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x13b498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x13b49c: 0xa0a6000a  sb          $a2, 0xA($a1)
    ctx->pc = 0x13b49cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x13b4a0: 0x90a6000b  lbu         $a2, 0xB($a1)
    ctx->pc = 0x13b4a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x13b4a4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x13b4a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13b4a8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x13b4a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x13b4ac: 0xa0a6000b  sb          $a2, 0xB($a1)
    ctx->pc = 0x13b4acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 6));
    // 0x13b4b0: 0x90a6000b  lbu         $a2, 0xB($a1)
    ctx->pc = 0x13b4b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x13b4b4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x13b4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x13b4b8: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x13b4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x13b4bc: 0xa0a4000b  sb          $a0, 0xB($a1)
    ctx->pc = 0x13b4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x13b4c0: 0x90a4000c  lbu         $a0, 0xC($a1)
    ctx->pc = 0x13b4c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x13b4c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13b4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13b4c8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x13b4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x13b4cc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x13B4CCu;
    {
        const bool branch_taken_0x13b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4CCu;
            // 0x13b4d0: 0xa0a3000c  sb          $v1, 0xC($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4cc) {
            ctx->pc = 0x13B580u;
            goto label_13b580;
        }
    }
    ctx->pc = 0x13B4D4u;
label_13b4d4:
    // 0x13b4d4: 0x6403005e  daddiu      $v1, $zero, 0x5E
    ctx->pc = 0x13b4d4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)94);
label_13b4d8:
    // 0x13b4d8: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x13b4d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b4dc: 0x333fc  dsll32      $a2, $v1, 15
    ctx->pc = 0x13b4dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 15));
    // 0x13b4e0: 0x2409ff0f  addiu       $t1, $zero, -0xF1
    ctx->pc = 0x13b4e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x13b4e4: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x13b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x13b4e8: 0x640a0050  daddiu      $t2, $zero, 0x50
    ctx->pc = 0x13b4e8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)80);
    // 0x13b4ec: 0x34647fff  ori         $a0, $v1, 0x7FFF
    ctx->pc = 0x13b4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x13b4f0: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x13b4f0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13b4f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13b4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13b4f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x13b4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13b4fc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x13b4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x13b500: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13b500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13b504: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13b504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13b508: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x13b508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x13b50c: 0x64040004  daddiu      $a0, $zero, 0x4
    ctx->pc = 0x13b50cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x13b510: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x13b510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13b514: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x13b514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13b518: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x13b518u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x13b51c: 0x64060030  daddiu      $a2, $zero, 0x30
    ctx->pc = 0x13b51cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)48);
    // 0x13b520: 0x90a30007  lbu         $v1, 0x7($a1)
    ctx->pc = 0x13b520u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x13b524: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x13b524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13b528: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x13b528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x13b52c: 0xa0a30007  sb          $v1, 0x7($a1)
    ctx->pc = 0x13b52cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b530: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x13b530u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13b534: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x13b534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x13b538: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x13b538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x13b53c: 0xa0a30008  sb          $v1, 0x8($a1)
    ctx->pc = 0x13b53cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b540: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x13b540u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13b544: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x13b544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13b548: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x13b548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13b54c: 0xa0a30008  sb          $v1, 0x8($a1)
    ctx->pc = 0x13b54cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b550: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x13b550u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x13b554: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x13b554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x13b558: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13b558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13b55c: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x13b55cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b560: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x13b560u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x13b564: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x13b564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x13b568: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x13b568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13b56c: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x13b56cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b570: 0x90a3000a  lbu         $v1, 0xA($a1)
    ctx->pc = 0x13b570u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x13b574: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x13b574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x13b578: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13b578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13b57c: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x13b57cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
label_13b580:
    // 0x13b580: 0x3e00008  jr          $ra
    ctx->pc = 0x13B580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B588u;
}
