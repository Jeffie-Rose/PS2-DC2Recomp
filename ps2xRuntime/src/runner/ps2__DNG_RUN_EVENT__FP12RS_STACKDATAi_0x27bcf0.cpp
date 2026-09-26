#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_RUN_EVENT__FP12RS_STACKDATAi
// Address: 0x27bcf0 - 0x27bd40
void ps2__DNG_RUN_EVENT__FP12RS_STACKDATAi_0x27bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_RUN_EVENT__FP12RS_STACKDATAi_0x27bcf0");
#endif

    switch (ctx->pc) {
        case 0x27bd00u: goto label_27bd00;
        default: break;
    }

    ctx->pc = 0x27bcf0u;

    // 0x27bcf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27bcf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bcf8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27BCF8u;
    SET_GPR_U32(ctx, 31, 0x27BD00u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD00u; }
        if (ctx->pc != 0x27BD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BD00u; }
        if (ctx->pc != 0x27BD00u) { return; }
    }
    ctx->pc = 0x27BD00u;
label_27bd00:
    // 0x27bd00: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x27bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27bd04: 0x24632f90  addiu       $v1, $v1, 0x2F90
    ctx->pc = 0x27bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
    // 0x27bd08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BD08u;
    {
        const bool branch_taken_0x27bd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bd08) {
            ctx->pc = 0x27BD18u;
            goto label_27bd18;
        }
    }
    ctx->pc = 0x27BD10u;
    // 0x27bd10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27BD10u;
    {
        const bool branch_taken_0x27bd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD10u;
            // 0x27bd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd10) {
            ctx->pc = 0x27BD34u;
            goto label_27bd34;
        }
    }
    ctx->pc = 0x27BD18u;
label_27bd18:
    // 0x27bd18: 0x24630044  addiu       $v1, $v1, 0x44
    ctx->pc = 0x27bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x27bd1c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BD1Cu;
    {
        const bool branch_taken_0x27bd1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bd1c) {
            ctx->pc = 0x27BD2Cu;
            goto label_27bd2c;
        }
    }
    ctx->pc = 0x27BD24u;
    // 0x27bd24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27BD24u;
    {
        const bool branch_taken_0x27bd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD24u;
            // 0x27bd28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bd24) {
            ctx->pc = 0x27BD34u;
            goto label_27bd34;
        }
    }
    ctx->pc = 0x27BD2Cu;
label_27bd2c:
    // 0x27bd2c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x27bd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x27bd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bd34:
    // 0x27bd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bd38: 0x3e00008  jr          $ra
    ctx->pc = 0x27BD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BD38u;
            // 0x27bd3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BD40u;
}
