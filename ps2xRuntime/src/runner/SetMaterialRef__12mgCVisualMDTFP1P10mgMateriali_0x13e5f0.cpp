#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMaterialRef__12mgCVisualMDTFP1P10mgMateriali
// Address: 0x13e5f0 - 0x13e738
void SetMaterialRef__12mgCVisualMDTFP1P10mgMateriali_0x13e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMaterialRef__12mgCVisualMDTFP1P10mgMateriali_0x13e5f0");
#endif

    ctx->pc = 0x13e5f0u;

    // 0x13e5f0: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x13e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13e5f4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x13E5F4u;
    {
        const bool branch_taken_0x13e5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5F4u;
            // 0x13e5f8: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5f4) {
            ctx->pc = 0x13E63Cu;
            goto label_13e63c;
        }
    }
    ctx->pc = 0x13E5FCu;
    // 0x13e5fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13e600: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13e600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13e604: 0x244241a0  addiu       $v0, $v0, 0x41A0
    ctx->pc = 0x13e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16800));
    // 0x13e608: 0x246341d0  addiu       $v1, $v1, 0x41D0
    ctx->pc = 0x13e608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16848));
    // 0x13e60c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x13e60cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e610: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x13e610u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x13e614: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x13e614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13e618: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x13e618u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e61c: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x13e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x13e620: 0x78c40010  lq          $a0, 0x10($a2)
    ctx->pc = 0x13e620u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13e624: 0x7ca40020  sq          $a0, 0x20($a1)
    ctx->pc = 0x13e624u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 4));
    // 0x13e628: 0x7ca00030  sq          $zero, 0x30($a1)
    ctx->pc = 0x13e628u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 0));
    // 0x13e62c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13e62cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e630: 0x7ca30040  sq          $v1, 0x40($a1)
    ctx->pc = 0x13e630u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 3));
    // 0x13e634: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x13E634u;
    {
        const bool branch_taken_0x13e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E634u;
            // 0x13e638: 0xaf808758  sw          $zero, -0x78A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e634) {
            ctx->pc = 0x13E730u;
            goto label_13e730;
        }
    }
    ctx->pc = 0x13E63Cu;
label_13e63c:
    // 0x13e63c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x13E63Cu;
    {
        const bool branch_taken_0x13e63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E63Cu;
            // 0x13e640: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e63c) {
            ctx->pc = 0x13E6C8u;
            goto label_13e6c8;
        }
    }
    ctx->pc = 0x13E644u;
    // 0x13e644: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13e644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13e648: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x13e648u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x13e64c: 0x244241a0  addiu       $v0, $v0, 0x41A0
    ctx->pc = 0x13e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16800));
    // 0x13e650: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x13e650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13e654: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x13e654u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e658: 0x250841e0  addiu       $t0, $t0, 0x41E0
    ctx->pc = 0x13e658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16864));
    // 0x13e65c: 0x2407086e  addiu       $a3, $zero, 0x86E
    ctx->pc = 0x13e65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2158));
    // 0x13e660: 0x7caa0000  sq          $t2, 0x0($a1)
    ctx->pc = 0x13e660u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 10));
    // 0x13e664: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13e664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13e668: 0x78ca0000  lq          $t2, 0x0($a2)
    ctx->pc = 0x13e668u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e66c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13e66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13e670: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x13e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x13e674: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13e674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13e678: 0x70e23b89  pcpyld      $a3, $a3, $v0
    ctx->pc = 0x13e678u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x13e67c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x13e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13e680: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x13e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x13e684: 0x7caa0010  sq          $t2, 0x10($a1)
    ctx->pc = 0x13e684u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 10));
    // 0x13e688: 0x78c60010  lq          $a2, 0x10($a2)
    ctx->pc = 0x13e688u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x13e68c: 0x7ca60020  sq          $a2, 0x20($a1)
    ctx->pc = 0x13e68cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 6));
    // 0x13e690: 0x7ca00030  sq          $zero, 0x30($a1)
    ctx->pc = 0x13e690u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 0));
    // 0x13e694: 0x7ca90040  sq          $t1, 0x40($a1)
    ctx->pc = 0x13e694u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 9));
    // 0x13e698: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x13e698u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13e69c: 0x7ca60050  sq          $a2, 0x50($a1)
    ctx->pc = 0x13e69cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 6));
    // 0x13e6a0: 0x7ca70060  sq          $a3, 0x60($a1)
    ctx->pc = 0x13e6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 7));
    // 0x13e6a4: 0xdc660040  ld          $a2, 0x40($v1)
    ctx->pc = 0x13e6a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x13e6a8: 0xfca60070  sd          $a2, 0x70($a1)
    ctx->pc = 0x13e6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 6));
    // 0x13e6ac: 0xfca40078  sd          $a0, 0x78($a1)
    ctx->pc = 0x13e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 4));
    // 0x13e6b0: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x13e6b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x13e6b4: 0xfca40080  sd          $a0, 0x80($a1)
    ctx->pc = 0x13e6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 128), GPR_U64(ctx, 4));
    // 0x13e6b8: 0xdc640048  ld          $a0, 0x48($v1)
    ctx->pc = 0x13e6b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x13e6bc: 0xfca40090  sd          $a0, 0x90($a1)
    ctx->pc = 0x13e6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 144), GPR_U64(ctx, 4));
    // 0x13e6c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13E6C0u;
    {
        const bool branch_taken_0x13e6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E6C0u;
            // 0x13e6c4: 0xaf838758  sw          $v1, -0x78A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6c0) {
            ctx->pc = 0x13E730u;
            goto label_13e730;
        }
    }
    ctx->pc = 0x13E6C8u;
label_13e6c8:
    // 0x13e6c8: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x13e6c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x13e6cc: 0x244241b0  addiu       $v0, $v0, 0x41B0
    ctx->pc = 0x13e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16816));
    // 0x13e6d0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x13e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x13e6d4: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x13e6d4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e6d8: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x13e6d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13e6dc: 0x252941e0  addiu       $t1, $t1, 0x41E0
    ctx->pc = 0x13e6dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16864));
    // 0x13e6e0: 0x2408086e  addiu       $t0, $zero, 0x86E
    ctx->pc = 0x13e6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2158));
    // 0x13e6e4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x13e6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13e6e8: 0x7caa0000  sq          $t2, 0x0($a1)
    ctx->pc = 0x13e6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 10));
    // 0x13e6ec: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x13e6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x13e6f0: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x13e6f0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e6f4: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x13e6f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13e6f8: 0x71073b89  pcpyld      $a3, $t0, $a3
    ctx->pc = 0x13e6f8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x13e6fc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x13e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13e700: 0x7ca60010  sq          $a2, 0x10($a1)
    ctx->pc = 0x13e700u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 6));
    // 0x13e704: 0x79260000  lq          $a2, 0x0($t1)
    ctx->pc = 0x13e704u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13e708: 0x7ca60020  sq          $a2, 0x20($a1)
    ctx->pc = 0x13e708u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 6));
    // 0x13e70c: 0x7ca70030  sq          $a3, 0x30($a1)
    ctx->pc = 0x13e70cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 7));
    // 0x13e710: 0xdc660040  ld          $a2, 0x40($v1)
    ctx->pc = 0x13e710u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x13e714: 0xfca60040  sd          $a2, 0x40($a1)
    ctx->pc = 0x13e714u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 6));
    // 0x13e718: 0xfca40048  sd          $a0, 0x48($a1)
    ctx->pc = 0x13e718u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 4));
    // 0x13e71c: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x13e71cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x13e720: 0xfca40050  sd          $a0, 0x50($a1)
    ctx->pc = 0x13e720u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 4));
    // 0x13e724: 0xdc640048  ld          $a0, 0x48($v1)
    ctx->pc = 0x13e724u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x13e728: 0xfca40060  sd          $a0, 0x60($a1)
    ctx->pc = 0x13e728u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 4));
    // 0x13e72c: 0xaf838758  sw          $v1, -0x78A8($gp)
    ctx->pc = 0x13e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 3));
label_13e730:
    // 0x13e730: 0x3e00008  jr          $ra
    ctx->pc = 0x13E730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E738u;
}
