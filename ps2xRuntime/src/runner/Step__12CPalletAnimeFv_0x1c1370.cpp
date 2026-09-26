#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CPalletAnimeFv
// Address: 0x1c1370 - 0x1c13d4
void Step__12CPalletAnimeFv_0x1c1370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CPalletAnimeFv_0x1c1370");
#endif

    ctx->pc = 0x1c1370u;

    // 0x1c1370: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x1c1370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1c1374: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C1374u;
    {
        const bool branch_taken_0x1c1374 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c1374) {
            ctx->pc = 0x1C13CCu;
            goto label_1c13cc;
        }
    }
    ctx->pc = 0x1C137Cu;
    // 0x1c137c: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x1c137cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c1380: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1384: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x1c1384u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c1388: 0x84850008  lh          $a1, 0x8($a0)
    ctx->pc = 0x1c1388u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c138c: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x1c138cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1c1390: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1c1390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c1394: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C1394u;
    {
        const bool branch_taken_0x1c1394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1394) {
            ctx->pc = 0x1C13CCu;
            goto label_1c13cc;
        }
    }
    ctx->pc = 0x1C139Cu;
    // 0x1c139c: 0x8485000c  lh          $a1, 0xC($a0)
    ctx->pc = 0x1c139cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c13a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c13a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c13a4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C13A4u;
    {
        const bool branch_taken_0x1c13a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c13a4) {
            ctx->pc = 0x1C13B4u;
            goto label_1c13b4;
        }
    }
    ctx->pc = 0x1C13ACu;
    // 0x1c13ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C13ACu;
    {
        const bool branch_taken_0x1c13ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13ACu;
            // 0x1c13b0: 0xa4800008  sh          $zero, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13ac) {
            ctx->pc = 0x1C13CCu;
            goto label_1c13cc;
        }
    }
    ctx->pc = 0x1C13B4u;
label_1c13b4:
    // 0x1c13b4: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C13B4u;
    {
        const bool branch_taken_0x1c13b4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1C13B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13B4u;
            // 0x1c13b8: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13b4) {
            ctx->pc = 0x1C13C8u;
            goto label_1c13c8;
        }
    }
    ctx->pc = 0x1C13BCu;
    // 0x1c13bc: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x1c13bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c13c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C13C0u;
    {
        const bool branch_taken_0x1c13c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13C0u;
            // 0x1c13c4: 0xa4800008  sh          $zero, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13c0) {
            ctx->pc = 0x1C13CCu;
            goto label_1c13cc;
        }
    }
    ctx->pc = 0x1C13C8u;
label_1c13c8:
    // 0x1c13c8: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x1c13c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
label_1c13cc:
    // 0x1c13cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C13CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C13D4u;
}
