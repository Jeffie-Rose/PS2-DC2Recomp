#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEffect__11CCharacter2Fv
// Address: 0x1779b0 - 0x177a28
void InitEffect__11CCharacter2Fv_0x1779b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEffect__11CCharacter2Fv_0x1779b0");
#endif

    ctx->pc = 0x1779b0u;

    // 0x1779b0: 0xac8005ec  sw          $zero, 0x5EC($a0)
    ctx->pc = 0x1779b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1516), GPR_U32(ctx, 0));
    // 0x1779b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1779b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1779b8: 0xac8005f0  sw          $zero, 0x5F0($a0)
    ctx->pc = 0x1779b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 0));
    // 0x1779bc: 0xac8005f4  sw          $zero, 0x5F4($a0)
    ctx->pc = 0x1779bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1524), GPR_U32(ctx, 0));
    // 0x1779c0: 0xac8005f8  sw          $zero, 0x5F8($a0)
    ctx->pc = 0x1779c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1528), GPR_U32(ctx, 0));
    // 0x1779c4: 0xac8005fc  sw          $zero, 0x5FC($a0)
    ctx->pc = 0x1779c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1532), GPR_U32(ctx, 0));
    // 0x1779c8: 0xac800600  sw          $zero, 0x600($a0)
    ctx->pc = 0x1779c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1536), GPR_U32(ctx, 0));
    // 0x1779cc: 0xac800604  sw          $zero, 0x604($a0)
    ctx->pc = 0x1779ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1540), GPR_U32(ctx, 0));
    // 0x1779d0: 0xac800608  sw          $zero, 0x608($a0)
    ctx->pc = 0x1779d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1544), GPR_U32(ctx, 0));
    // 0x1779d4: 0xac80060c  sw          $zero, 0x60C($a0)
    ctx->pc = 0x1779d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1548), GPR_U32(ctx, 0));
    // 0x1779d8: 0xac800610  sw          $zero, 0x610($a0)
    ctx->pc = 0x1779d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1552), GPR_U32(ctx, 0));
    // 0x1779dc: 0xac800614  sw          $zero, 0x614($a0)
    ctx->pc = 0x1779dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1556), GPR_U32(ctx, 0));
    // 0x1779e0: 0xac800618  sw          $zero, 0x618($a0)
    ctx->pc = 0x1779e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1560), GPR_U32(ctx, 0));
    // 0x1779e4: 0xac80061c  sw          $zero, 0x61C($a0)
    ctx->pc = 0x1779e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1564), GPR_U32(ctx, 0));
    // 0x1779e8: 0xac800620  sw          $zero, 0x620($a0)
    ctx->pc = 0x1779e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1568), GPR_U32(ctx, 0));
    // 0x1779ec: 0xac800624  sw          $zero, 0x624($a0)
    ctx->pc = 0x1779ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1572), GPR_U32(ctx, 0));
    // 0x1779f0: 0xac800628  sw          $zero, 0x628($a0)
    ctx->pc = 0x1779f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1576), GPR_U32(ctx, 0));
    // 0x1779f4: 0xac80062c  sw          $zero, 0x62C($a0)
    ctx->pc = 0x1779f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1580), GPR_U32(ctx, 0));
    // 0x1779f8: 0xac800630  sw          $zero, 0x630($a0)
    ctx->pc = 0x1779f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1584), GPR_U32(ctx, 0));
    // 0x1779fc: 0xac800634  sw          $zero, 0x634($a0)
    ctx->pc = 0x1779fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1588), GPR_U32(ctx, 0));
    // 0x177a00: 0xac800638  sw          $zero, 0x638($a0)
    ctx->pc = 0x177a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1592), GPR_U32(ctx, 0));
    // 0x177a04: 0xac80063c  sw          $zero, 0x63C($a0)
    ctx->pc = 0x177a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1596), GPR_U32(ctx, 0));
    // 0x177a08: 0xac800640  sw          $zero, 0x640($a0)
    ctx->pc = 0x177a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1600), GPR_U32(ctx, 0));
    // 0x177a0c: 0xac800644  sw          $zero, 0x644($a0)
    ctx->pc = 0x177a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1604), GPR_U32(ctx, 0));
    // 0x177a10: 0xac800648  sw          $zero, 0x648($a0)
    ctx->pc = 0x177a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1608), GPR_U32(ctx, 0));
    // 0x177a14: 0xac8005e8  sw          $zero, 0x5E8($a0)
    ctx->pc = 0x177a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1512), GPR_U32(ctx, 0));
    // 0x177a18: 0xac830650  sw          $v1, 0x650($a0)
    ctx->pc = 0x177a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1616), GPR_U32(ctx, 3));
    // 0x177a1c: 0xac80064c  sw          $zero, 0x64C($a0)
    ctx->pc = 0x177a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1612), GPR_U32(ctx, 0));
    // 0x177a20: 0x3e00008  jr          $ra
    ctx->pc = 0x177A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177A20u;
            // 0x177a24: 0xac8305e4  sw          $v1, 0x5E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1508), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177A28u;
}
