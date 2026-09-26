#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__16CMenuPosDataFormFv
// Address: 0x2258c0 - 0x225984
void Initialize__16CMenuPosDataFormFv_0x2258c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__16CMenuPosDataFormFv_0x2258c0");
#endif

    ctx->pc = 0x2258c0u;

    // 0x2258c0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2258c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2258c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2258c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2258c8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2258c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2258cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2258ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2258d0: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2258d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2258d4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2258d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2258d8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2258d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2258dc: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2258dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2258e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2258e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2258e4: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x2258e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2258e8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2258e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2258ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2258ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2258f0: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x2258f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x2258f4: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x2258f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2258f8: 0xa4870006  sh          $a3, 0x6($a0)
    ctx->pc = 0x2258f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x2258fc: 0xa4870004  sh          $a3, 0x4($a0)
    ctx->pc = 0x2258fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x225900: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x225900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x225904: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x225904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x225908: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x225908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x22590c: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x22590cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x225910: 0xa0850020  sb          $a1, 0x20($a0)
    ctx->pc = 0x225910u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x225914: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x225914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x225918: 0xa0800051  sb          $zero, 0x51($a0)
    ctx->pc = 0x225918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x22591c: 0xa0830055  sb          $v1, 0x55($a0)
    ctx->pc = 0x22591cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x225920: 0xa0830059  sb          $v1, 0x59($a0)
    ctx->pc = 0x225920u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 3));
    // 0x225924: 0xa0800052  sb          $zero, 0x52($a0)
    ctx->pc = 0x225924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x225928: 0xa0830056  sb          $v1, 0x56($a0)
    ctx->pc = 0x225928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x22592c: 0xa083005a  sb          $v1, 0x5A($a0)
    ctx->pc = 0x22592cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x225930: 0xa0800053  sb          $zero, 0x53($a0)
    ctx->pc = 0x225930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x225934: 0xa0830057  sb          $v1, 0x57($a0)
    ctx->pc = 0x225934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 3));
    // 0x225938: 0xa083005b  sb          $v1, 0x5B($a0)
    ctx->pc = 0x225938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 3));
    // 0x22593c: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x22593cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x225940: 0xa0830058  sb          $v1, 0x58($a0)
    ctx->pc = 0x225940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x225944: 0xa083005c  sb          $v1, 0x5C($a0)
    ctx->pc = 0x225944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x225948: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x225948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x22594c: 0xa4800068  sh          $zero, 0x68($a0)
    ctx->pc = 0x22594cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x225950: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x225950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x225954: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x225954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x225958: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x225958u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x22595c: 0xa4800036  sh          $zero, 0x36($a0)
    ctx->pc = 0x22595cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x225960: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x225960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225964: 0xa487005e  sh          $a3, 0x5E($a0)
    ctx->pc = 0x225964u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 7));
    // 0x225968: 0xa4870060  sh          $a3, 0x60($a0)
    ctx->pc = 0x225968u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 7));
    // 0x22596c: 0xa4800062  sh          $zero, 0x62($a0)
    ctx->pc = 0x22596cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x225970: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x225970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x225974: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x225974u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x225978: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x225978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x22597c: 0x3e00008  jr          $ra
    ctx->pc = 0x22597Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22597Cu;
            // 0x225980: 0xac800074  sw          $zero, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225984u;
}
