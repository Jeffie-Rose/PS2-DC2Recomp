#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAATTACH_ST_SP__FP9SPI_STACKi
// Address: 0x195020 - 0x195068
void ps2__DATAATTACH_ST_SP__FP9SPI_STACKi_0x195020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAATTACH_ST_SP__FP9SPI_STACKi_0x195020");
#endif

    switch (ctx->pc) {
        case 0x195044u: goto label_195044;
        default: break;
    }

    ctx->pc = 0x195020u;

    // 0x195020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195028: 0x8f828b6c  lw          $v0, -0x7494($gp)
    ctx->pc = 0x195028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937452)));
    // 0x19502c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19502Cu;
    {
        const bool branch_taken_0x19502c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19502Cu;
            // 0x195030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19502c) {
            ctx->pc = 0x19503Cu;
            goto label_19503c;
        }
    }
    ctx->pc = 0x195034u;
    // 0x195034: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x195034u;
    {
        const bool branch_taken_0x195034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195034u;
            // 0x195038: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195034) {
            ctx->pc = 0x195060u;
            goto label_195060;
        }
    }
    ctx->pc = 0x19503Cu;
label_19503c:
    // 0x19503c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x19503Cu;
    SET_GPR_U32(ctx, 31, 0x195044u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195044u; }
        if (ctx->pc != 0x195044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195044u; }
        if (ctx->pc != 0x195044u) { return; }
    }
    ctx->pc = 0x195044u;
label_195044:
    // 0x195044: 0x8f838b6c  lw          $v1, -0x7494($gp)
    ctx->pc = 0x195044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937452)));
    // 0x195048: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x195048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x19504c: 0x8f838b6c  lw          $v1, -0x7494($gp)
    ctx->pc = 0x19504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937452)));
    // 0x195050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195054: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x195054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x195058: 0xaf838b6c  sw          $v1, -0x7494($gp)
    ctx->pc = 0x195058u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937452), GPR_U32(ctx, 3));
    // 0x19505c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19505cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195060:
    // 0x195060: 0x3e00008  jr          $ra
    ctx->pc = 0x195060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195060u;
            // 0x195064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195068u;
}
