#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__15mgCTexAnimeDataFv
// Address: 0x13bd00 - 0x13bd8c
void Initialize__15mgCTexAnimeDataFv_0x13bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__15mgCTexAnimeDataFv_0x13bd00");
#endif

    ctx->pc = 0x13bd00u;

    // 0x13bd00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13bd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bd04: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x13bd04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x13bd08: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x13bd08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x13bd0c: 0xa4800028  sh          $zero, 0x28($a0)
    ctx->pc = 0x13bd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd10: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x13bd10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x13bd14: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x13bd18: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13bd1c: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x13bd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd20: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x13bd20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd24: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x13bd24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd28: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x13bd28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd2c: 0xa4800016  sh          $zero, 0x16($a0)
    ctx->pc = 0x13bd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd30: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x13bd30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd34: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x13bd34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd38: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x13bd38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd3c: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x13bd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd40: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x13bd40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd44: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x13bd44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd48: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x13bd48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x13bd4c: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x13bd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x13bd50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bd54: 0xa083002c  sb          $v1, 0x2C($a0)
    ctx->pc = 0x13bd54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bd58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13bd5c: 0xa083002d  sb          $v1, 0x2D($a0)
    ctx->pc = 0x13bd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bd60: 0xa085002e  sb          $a1, 0x2E($a0)
    ctx->pc = 0x13bd60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 46), (uint8_t)GPR_U32(ctx, 5));
    // 0x13bd64: 0xa080002f  sb          $zero, 0x2F($a0)
    ctx->pc = 0x13bd64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x13bd68: 0x87838724  lh          $v1, -0x78DC($gp)
    ctx->pc = 0x13bd68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936356)));
    // 0x13bd6c: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x13bd6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x13bd70: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13bd74: 0xa0830033  sb          $v1, 0x33($a0)
    ctx->pc = 0x13bd74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 51), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bd78: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x13bd78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bd7c: 0xa0830031  sb          $v1, 0x31($a0)
    ctx->pc = 0x13bd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bd80: 0xa0830030  sb          $v1, 0x30($a0)
    ctx->pc = 0x13bd80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bd84: 0x3e00008  jr          $ra
    ctx->pc = 0x13BD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BD8Cu;
}
