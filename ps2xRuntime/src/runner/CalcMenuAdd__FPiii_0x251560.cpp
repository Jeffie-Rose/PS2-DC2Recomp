#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcMenuAdd__FPiii
// Address: 0x251560 - 0x2515c0
void CalcMenuAdd__FPiii_0x251560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcMenuAdd__FPiii_0x251560");
#endif

    ctx->pc = 0x251560u;

    // 0x251560: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251560u;
    {
        const bool branch_taken_0x251560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x251564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251560u;
            // 0x251564: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251560) {
            ctx->pc = 0x251570u;
            goto label_251570;
        }
    }
    ctx->pc = 0x251568u;
    // 0x251568: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x251568u;
    {
        const bool branch_taken_0x251568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251568) {
            ctx->pc = 0x2515B8u;
            goto label_2515b8;
        }
    }
    ctx->pc = 0x251570u;
label_251570:
    // 0x251570: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x251570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251574: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x251574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x251578: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x251578u;
    {
        const bool branch_taken_0x251578 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x25157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251578u;
            // 0x25157c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251578) {
            ctx->pc = 0x251590u;
            goto label_251590;
        }
    }
    ctx->pc = 0x251580u;
    // 0x251580: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x251580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251584: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x251584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x251588: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x251588u;
    {
        const bool branch_taken_0x251588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251588) {
            ctx->pc = 0x2515A8u;
            goto label_2515a8;
        }
    }
    ctx->pc = 0x251590u;
label_251590:
    // 0x251590: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x251590u;
    {
        const bool branch_taken_0x251590 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x251594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251590u;
            // 0x251594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251590) {
            ctx->pc = 0x2515B8u;
            goto label_2515b8;
        }
    }
    ctx->pc = 0x251598u;
    // 0x251598: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x251598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25159c: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x25159cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2515a0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2515A0u;
    {
        const bool branch_taken_0x2515a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2515a0) {
            ctx->pc = 0x2515B4u;
            goto label_2515b4;
        }
    }
    ctx->pc = 0x2515A8u;
label_2515a8:
    // 0x2515a8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2515a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2515ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2515ACu;
    {
        const bool branch_taken_0x2515ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2515B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2515ACu;
            // 0x2515b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2515ac) {
            ctx->pc = 0x2515B8u;
            goto label_2515b8;
        }
    }
    ctx->pc = 0x2515B4u;
label_2515b4:
    // 0x2515b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2515b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2515b8:
    // 0x2515b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2515B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2515C0u;
}
