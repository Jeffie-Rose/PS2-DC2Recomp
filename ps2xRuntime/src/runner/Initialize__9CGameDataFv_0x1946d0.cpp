#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CGameDataFv
// Address: 0x1946d0 - 0x194750
void Initialize__9CGameDataFv_0x1946d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CGameDataFv_0x1946d0");
#endif

    ctx->pc = 0x1946d0u;

    // 0x1946d0: 0x3c0201e7  lui         $v0, 0x1E7
    ctx->pc = 0x1946d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)487 << 16));
    // 0x1946d4: 0x3c0301e7  lui         $v1, 0x1E7
    ctx->pc = 0x1946d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)487 << 16));
    // 0x1946d8: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x1946d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1946dc: 0x244295a0  addiu       $v0, $v0, -0x6A60
    ctx->pc = 0x1946dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x1946e0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1946e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1946e4: 0x3c0601e7  lui         $a2, 0x1E7
    ctx->pc = 0x1946e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)487 << 16));
    // 0x1946e8: 0x2463dfe0  addiu       $v1, $v1, -0x2020
    ctx->pc = 0x1946e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959072));
    // 0x1946ec: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x1946ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1946f0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1946f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1946f4: 0x3c0201e7  lui         $v0, 0x1E7
    ctx->pc = 0x1946f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)487 << 16));
    // 0x1946f8: 0x2442ea00  addiu       $v0, $v0, -0x1600
    ctx->pc = 0x1946f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961664));
    // 0x1946fc: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x1946fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x194700: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x194700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x194704: 0x3c0701e7  lui         $a3, 0x1E7
    ctx->pc = 0x194704u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)487 << 16));
    // 0x194708: 0x24c61b20  addiu       $a2, $a2, 0x1B20
    ctx->pc = 0x194708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6944));
    // 0x19470c: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x19470cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x194710: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x194710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x194714: 0x3c0301e7  lui         $v1, 0x1E7
    ctx->pc = 0x194714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)487 << 16));
    // 0x194718: 0x24e70c70  addiu       $a3, $a3, 0xC70
    ctx->pc = 0x194718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3184));
    // 0x19471c: 0xa4800028  sh          $zero, 0x28($a0)
    ctx->pc = 0x19471cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x194720: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x194720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x194724: 0x3c0201e7  lui         $v0, 0x1E7
    ctx->pc = 0x194724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)487 << 16));
    // 0x194728: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x194728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
    // 0x19472c: 0xa480002a  sh          $zero, 0x2A($a0)
    ctx->pc = 0x19472cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x194730: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x194730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x194734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194738: 0x24421990  addiu       $v0, $v0, 0x1990
    ctx->pc = 0x194738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6544));
    // 0x19473c: 0xa480002c  sh          $zero, 0x2C($a0)
    ctx->pc = 0x19473cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x194740: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x194740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x194744: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x194744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194748: 0x80655c8  j           func_195720
    ctx->pc = 0x194748u;
    ctx->pc = 0x19474Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194748u;
            // 0x19474c: 0xa480002e  sh          $zero, 0x2E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195720u;
    if (runtime->hasFunction(0x195720u)) {
        auto targetFn = runtime->lookupFunction(0x195720u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitItemMes__9CGameDataFii_0x195720(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x194750u;
}
