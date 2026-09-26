#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgLoadImage__FPUiiiiP1iiiii
// Address: 0x12e600 - 0x12e800
void mgLoadImage__FPUiiiiP1iiiii_0x12e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgLoadImage__FPUiiiiP1iiiii_0x12e600");
#endif

    switch (ctx->pc) {
        case 0x12e75cu: goto label_12e75c;
        default: break;
    }

    ctx->pc = 0x12e600u;

    // 0x12e600: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12e600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e604: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x12e604u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x12e608: 0x35830006  ori         $v1, $t4, 0x6
    ctx->pc = 0x12e608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)6);
    // 0x12e60c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12e60cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12e610: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12e610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12e614: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12e614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12e618: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x12e618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x12e61c: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x12e61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x12e620: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x12e620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x12e624: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x12e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12e628: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x12e628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x12e62c: 0xac8c0014  sw          $t4, 0x14($a0)
    ctx->pc = 0x12e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 12));
    // 0x12e630: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x12e630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12e634: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x12e634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x12e638: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x12e638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x12e63c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x12e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x12e640: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x12e640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x12e644: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x12e644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x12e648: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x12e648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x12e64c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x12e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x12e650: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x12e650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12e654: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12e654u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12e658: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x12e658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12e65c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x12e65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x12e660: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12e660u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12e664: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12e664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12e668: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x12e668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x12e66c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x12e66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12e670: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12e670u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12e674: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x12e674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x12e678: 0x653025  or          $a2, $v1, $a1
    ctx->pc = 0x12e678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12e67c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x12e67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12e680: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x12e680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x12e684: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12e688: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x12e688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12e68c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12e68cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12e690: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12e690u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12e694: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x12e694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x12e698: 0x6283e  dsrl32      $a1, $a2, 0
    ctx->pc = 0x12e698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x12e69c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x12e69cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x12e6a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12e6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12e6a4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12e6a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12e6a8: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x12e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x12e6ac: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x12e6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x12e6b0: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x12e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x12e6b4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x12e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x12e6b8: 0xa283c  dsll32      $a1, $t2, 0
    ctx->pc = 0x12e6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 0));
    // 0x12e6bc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12e6bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12e6c0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x12e6c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12e6c4: 0xb283c  dsll32      $a1, $t3, 0
    ctx->pc = 0x12e6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) << (32 + 0));
    // 0x12e6c8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12e6c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12e6cc: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x12e6ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x12e6d0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x12e6d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x12e6d4: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x12e6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12e6d8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x12e6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x12e6dc: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x12e6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x12e6e0: 0x6283e  dsrl32      $a1, $a2, 0
    ctx->pc = 0x12e6e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x12e6e4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x12e6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x12e6e8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12e6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12e6ec: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12e6ecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12e6f0: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x12e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x12e6f4: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x12e6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x12e6f8: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x12e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x12e6fc: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x12e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x12e700: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x12e700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e704: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x12e704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e708: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12e708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12e70c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x12e70cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x12e710: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x12e710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12e714: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x12e714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x12e718: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x12e718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x12e71c: 0x6283e  dsrl32      $a1, $a2, 0
    ctx->pc = 0x12e71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x12e720: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x12e720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x12e724: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12e724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12e728: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12e728u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12e72c: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x12e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x12e730: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x12e730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x12e734: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x12e734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x12e738: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x12e738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x12e73c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x12e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x12e740: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x12e740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x12e744: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x12e744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x12e748: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x12e748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x12e74c: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x12e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x12e750: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x12e750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x12e754: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x12E754u;
    {
        const bool branch_taken_0x12e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e754) {
            ctx->pc = 0x12E7D4u;
            goto label_12e7d4;
        }
    }
    ctx->pc = 0x12E75Cu;
label_12e75c:
    // 0x12e75c: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x12e75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x12e760: 0x29214000  slti        $at, $t1, 0x4000
    ctx->pc = 0x12e760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x12e764: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x12E764u;
    {
        const bool branch_taken_0x12e764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e764) {
            ctx->pc = 0x12E770u;
            goto label_12e770;
        }
    }
    ctx->pc = 0x12E76Cu;
    // 0x12e76c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x12e76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_12e770:
    // 0x12e770: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12e770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12e774: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x12e774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x12e778: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12e778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12e77c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12e780: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12e780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12e784: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x12e784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x12e788: 0x34a30001  ori         $v1, $a1, 0x1
    ctx->pc = 0x12e788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x12e78c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x12e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x12e790: 0x34c38000  ori         $v1, $a2, 0x8000
    ctx->pc = 0x12e790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x12e794: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x12e794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x12e798: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12e798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x12e79c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x12e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x12e7a0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x12e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x12e7a4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x12e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x12e7a8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x12e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x12e7ac: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x12e7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x12e7b0: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x12e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x12e7b4: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x12e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x12e7b8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x12e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x12e7bc: 0xc51825  or          $v1, $a2, $a1
    ctx->pc = 0x12e7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x12e7c0: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x12e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x12e7c4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x12e7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x12e7c8: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x12e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x12e7cc: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x12e7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x12e7d0: 0x2529c000  addiu       $t1, $t1, -0x4000
    ctx->pc = 0x12e7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294950912));
label_12e7d4:
    // 0x12e7d4: 0x0  nop
    ctx->pc = 0x12e7d4u;
    // NOP
    // 0x12e7d8: 0x1d20ffe0  bgtz        $t1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x12E7D8u;
    {
        const bool branch_taken_0x12e7d8 = (GPR_S32(ctx, 9) > 0);
        if (branch_taken_0x12e7d8) {
            ctx->pc = 0x12E75Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e75c;
        }
    }
    ctx->pc = 0x12E7E0u;
    // 0x12e7e0: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x12e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12e7e4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x12e7e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x12e7e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E7E8u;
    {
        const bool branch_taken_0x12e7e8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12e7e8) {
            ctx->pc = 0x12E7F8u;
            goto label_12e7f8;
        }
    }
    ctx->pc = 0x12E7F0u;
    // 0x12e7f0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x12e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x12e7f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x12e7f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_12e7f8:
    // 0x12e7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E800u;
}
