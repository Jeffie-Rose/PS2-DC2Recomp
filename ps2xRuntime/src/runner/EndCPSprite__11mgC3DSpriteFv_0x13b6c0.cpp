#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndCPSprite__11mgC3DSpriteFv
// Address: 0x13b6c0 - 0x13b7ec
void EndCPSprite__11mgC3DSpriteFv_0x13b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndCPSprite__11mgC3DSpriteFv_0x13b6c0");
#endif

    ctx->pc = 0x13b6c0u;

    // 0x13b6c0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x13b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b6c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13b6c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13b6c8: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x13b6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x13b6cc: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x13b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13b6d0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B6D0u;
    {
        const bool branch_taken_0x13b6d0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x13B6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B6D0u;
            // 0x13b6d4: 0x51903  sra         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6d0) {
            ctx->pc = 0x13B6E0u;
            goto label_13b6e0;
        }
    }
    ctx->pc = 0x13B6D8u;
    // 0x13b6d8: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x13b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x13b6dc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x13b6dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_13b6e0:
    // 0x13b6e0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x13b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13b6e4: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x13b6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x13b6e8: 0xa81825  or          $v1, $a1, $t0
    ctx->pc = 0x13b6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x13b6ec: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x13b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x13b6f0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x13b6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x13b6f4: 0x8c870034  lw          $a3, 0x34($a0)
    ctx->pc = 0x13b6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x13b6f8: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x13b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x13b6fc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x13b6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x13b700: 0xa33025  or          $a2, $a1, $v1
    ctx->pc = 0x13b700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x13b704: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13b704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13b708: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13b708u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13b70c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x13b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x13b710: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13b710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13b714: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x13b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x13b718: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x13b718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x13b71c: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x13b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13b720: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x13b720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x13b724: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13b724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13b728: 0x8c860044  lw          $a2, 0x44($a0)
    ctx->pc = 0x13b728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x13b72c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x13b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x13b730: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x13b730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x13b734: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x13b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x13b738: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13b738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13b73c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x13b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x13b740: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x13b740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x13b744: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x13b744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13b748: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x13B748u;
    {
        const bool branch_taken_0x13b748 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x13b748) {
            ctx->pc = 0x13B7E4u;
            goto label_13b7e4;
        }
    }
    ctx->pc = 0x13B750u;
    // 0x13b750: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x13b750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b754: 0x35030002  ori         $v1, $t0, 0x2
    ctx->pc = 0x13b754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x13b758: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x13b758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x13b75c: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x13b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x13b760: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x13b760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x13b764: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x13b764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x13b768: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x13b768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x13b76c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x13b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x13b770: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x13b770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x13b774: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x13B774u;
    {
        const bool branch_taken_0x13b774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B774u;
            // 0x13b778: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b774) {
            ctx->pc = 0x13B7A4u;
            goto label_13b7a4;
        }
    }
    ctx->pc = 0x13B77Cu;
    // 0x13b77c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13b780: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x13b780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b784: 0x24634070  addiu       $v1, $v1, 0x4070
    ctx->pc = 0x13b784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16496));
    // 0x13b788: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x13b788u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b78c: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x13b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x13b790: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x13b790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x13b794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b798: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x13b798u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x13b79c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13B79Cu;
    {
        const bool branch_taken_0x13b79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B79Cu;
            // 0x13b7a0: 0xac830048  sw          $v1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b79c) {
            ctx->pc = 0x13B7BCu;
            goto label_13b7bc;
        }
    }
    ctx->pc = 0x13B7A4u;
label_13b7a4:
    // 0x13b7a4: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x13b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b7a8: 0x24634080  addiu       $v1, $v1, 0x4080
    ctx->pc = 0x13b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16512));
    // 0x13b7ac: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x13b7acu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b7b0: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x13b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13b7b4: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x13b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x13b7b8: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x13b7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_13b7bc:
    // 0x13b7bc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13b7c0: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x13b7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x13b7c4: 0x24634090  addiu       $v1, $v1, 0x4090
    ctx->pc = 0x13b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16528));
    // 0x13b7c8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13b7c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b7cc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x13b7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x13b7d0: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x13b7d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x13b7d4: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x13b7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b7d8: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x13b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13b7dc: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x13b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x13b7e0: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x13b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_13b7e4:
    // 0x13b7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13B7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B7E4u;
            // 0x13b7e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B7ECu;
}
