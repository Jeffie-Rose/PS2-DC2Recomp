#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_GUARD_FLAG__FP12RS_STACKDATAi
// Address: 0x2cf940 - 0x2cf97c
void ps2__SET_GUARD_FLAG__FP12RS_STACKDATAi_0x2cf940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_GUARD_FLAG__FP12RS_STACKDATAi_0x2cf940");
#endif

    switch (ctx->pc) {
        case 0x2cf960u: goto label_2cf960;
        default: break;
    }

    ctx->pc = 0x2cf940u;

    // 0x2cf940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf948: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF948u;
    {
        const bool branch_taken_0x2cf948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF948u;
            // 0x2cf94c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf948) {
            ctx->pc = 0x2CF958u;
            goto label_2cf958;
        }
    }
    ctx->pc = 0x2CF950u;
    // 0x2cf950: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF950u;
    {
        const bool branch_taken_0x2cf950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF950u;
            // 0x2cf954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf950) {
            ctx->pc = 0x2CF970u;
            goto label_2cf970;
        }
    }
    ctx->pc = 0x2CF958u;
label_2cf958:
    // 0x2cf958: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF958u;
    SET_GPR_U32(ctx, 31, 0x2CF960u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF960u; }
        if (ctx->pc != 0x2CF960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF960u; }
        if (ctx->pc != 0x2CF960u) { return; }
    }
    ctx->pc = 0x2CF960u;
label_2cf960:
    // 0x2cf960: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf964: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf968: 0xac620bf0  sw          $v0, 0xBF0($v1)
    ctx->pc = 0x2cf968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3056), GPR_U32(ctx, 2));
    // 0x2cf96c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf970:
    // 0x2cf970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf974: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF974u;
            // 0x2cf978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF97Cu;
}
