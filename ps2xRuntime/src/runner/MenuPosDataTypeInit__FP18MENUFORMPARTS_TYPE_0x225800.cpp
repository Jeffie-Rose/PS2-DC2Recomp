#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPosDataTypeInit__FP18MENUFORMPARTS_TYPE
// Address: 0x225800 - 0x225888
void MenuPosDataTypeInit__FP18MENUFORMPARTS_TYPE_0x225800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPosDataTypeInit__FP18MENUFORMPARTS_TYPE_0x225800");
#endif

    ctx->pc = 0x225800u;

    // 0x225800: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x225800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x225804: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x225804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225808: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x225808u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x22580c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22580cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225810: 0xa0880005  sb          $t0, 0x5($a0)
    ctx->pc = 0x225810u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x225814: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x225814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x225818: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x225818u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x22581c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x22581cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x225820: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x225820u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x225824: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x225824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x225828: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x225828u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x22582c: 0xa087000b  sb          $a3, 0xB($a0)
    ctx->pc = 0x22582cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 7));
    // 0x225830: 0xa086000c  sb          $a2, 0xC($a0)
    ctx->pc = 0x225830u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x225834: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x225834u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x225838: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x225838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x22583c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x22583cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x225840: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x225840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x225844: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x225844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x225848: 0xa085000a  sb          $a1, 0xA($a0)
    ctx->pc = 0x225848u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x22584c: 0xa0850009  sb          $a1, 0x9($a0)
    ctx->pc = 0x22584cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x225850: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x225850u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x225854: 0xa0850007  sb          $a1, 0x7($a0)
    ctx->pc = 0x225854u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x225858: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x225858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x22585c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x22585cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x225860: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x225860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x225864: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x225864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x225868: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x225868u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x22586c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x22586cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x225870: 0xa088001a  sb          $t0, 0x1A($a0)
    ctx->pc = 0x225870u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 8));
    // 0x225874: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x225874u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x225878: 0xa0800045  sb          $zero, 0x45($a0)
    ctx->pc = 0x225878u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x22587c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x22587cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x225880: 0x3e00008  jr          $ra
    ctx->pc = 0x225880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225880u;
            // 0x225884: 0xa0800046  sb          $zero, 0x46($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225888u;
}
