#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__4CPotFv
// Address: 0x2cce70 - 0x2ccee8
void Step__4CPotFv_0x2cce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__4CPotFv_0x2cce70");
#endif

    switch (ctx->pc) {
        case 0x2ccea0u: goto label_2ccea0;
        case 0x2cceb0u: goto label_2cceb0;
        default: break;
    }

    ctx->pc = 0x2cce70u;

    // 0x2cce70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cce74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cce78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cce7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cce80: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CCE80u;
    {
        const bool branch_taken_0x2cce80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CCE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE80u;
            // 0x2cce84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce80) {
            ctx->pc = 0x2CCEA8u;
            goto label_2ccea8;
        }
    }
    ctx->pc = 0x2CCE88u;
    // 0x2cce88: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCE88u;
    {
        const bool branch_taken_0x2cce88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cce88) {
            ctx->pc = 0x2CCE98u;
            goto label_2cce98;
        }
    }
    ctx->pc = 0x2CCE90u;
    // 0x2cce90: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2CCE90u;
    {
        const bool branch_taken_0x2cce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCE90u;
            // 0x2cce94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce90) {
            ctx->pc = 0x2CCEDCu;
            goto label_2ccedc;
        }
    }
    ctx->pc = 0x2CCE98u;
label_2cce98:
    // 0x2cce98: 0xc0b3208  jal         func_2CC820
    ctx->pc = 0x2CCE98u;
    SET_GPR_U32(ctx, 31, 0x2CCEA0u);
    ctx->pc = 0x2CC820u;
    if (runtime->hasFunction(0x2CC820u)) {
        auto targetFn = runtime->lookupFunction(0x2CC820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCEA0u; }
        if (ctx->pc != 0x2CCEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HoldStep__4CPotFv_0x2cc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCEA0u; }
        if (ctx->pc != 0x2CCEA0u) { return; }
    }
    ctx->pc = 0x2CCEA0u;
label_2ccea0:
    // 0x2ccea0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CCEA0u;
    {
        const bool branch_taken_0x2ccea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccea0) {
            ctx->pc = 0x2CCED8u;
            goto label_2cced8;
        }
    }
    ctx->pc = 0x2CCEA8u;
label_2ccea8:
    // 0x2ccea8: 0xc0b3220  jal         func_2CC880
    ctx->pc = 0x2CCEA8u;
    SET_GPR_U32(ctx, 31, 0x2CCEB0u);
    ctx->pc = 0x2CC880u;
    if (runtime->hasFunction(0x2CC880u)) {
        auto targetFn = runtime->lookupFunction(0x2CC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCEB0u; }
        if (ctx->pc != 0x2CCEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlyStep__4CPotFv_0x2cc880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCEB0u; }
        if (ctx->pc != 0x2CCEB0u) { return; }
    }
    ctx->pc = 0x2CCEB0u;
label_2cceb0:
    // 0x2cceb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cceb4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCEB4u;
    {
        const bool branch_taken_0x2cceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cceb4) {
            ctx->pc = 0x2CCEC4u;
            goto label_2ccec4;
        }
    }
    ctx->pc = 0x2CCEBCu;
    // 0x2ccebc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCEBCu;
    {
        const bool branch_taken_0x2ccebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCEBCu;
            // 0x2ccec0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccebc) {
            ctx->pc = 0x2CCEDCu;
            goto label_2ccedc;
        }
    }
    ctx->pc = 0x2CCEC4u;
label_2ccec4:
    // 0x2ccec4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ccec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccec8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCEC8u;
    {
        const bool branch_taken_0x2ccec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CCECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCEC8u;
            // 0x2ccecc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccec8) {
            ctx->pc = 0x2CCED8u;
            goto label_2cced8;
        }
    }
    ctx->pc = 0x2CCED0u;
    // 0x2cced0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCED0u;
    {
        const bool branch_taken_0x2cced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCED0u;
            // 0x2cced4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cced0) {
            ctx->pc = 0x2CCEE0u;
            goto label_2ccee0;
        }
    }
    ctx->pc = 0x2CCED8u;
label_2cced8:
    // 0x2cced8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cced8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ccedc:
    // 0x2ccedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ccedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ccee0:
    // 0x2ccee0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCEE0u;
            // 0x2ccee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CCEE8u;
}
