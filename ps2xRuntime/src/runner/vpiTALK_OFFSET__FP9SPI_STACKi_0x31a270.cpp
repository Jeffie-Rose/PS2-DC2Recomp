#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vpiTALK_OFFSET__FP9SPI_STACKi
// Address: 0x31a270 - 0x31a2a4
void vpiTALK_OFFSET__FP9SPI_STACKi_0x31a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vpiTALK_OFFSET__FP9SPI_STACKi_0x31a270");
#endif

    switch (ctx->pc) {
        case 0x31a294u: goto label_31a294;
        default: break;
    }

    ctx->pc = 0x31a270u;

    // 0x31a270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a278: 0x8f82a374  lw          $v0, -0x5C8C($gp)
    ctx->pc = 0x31a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a27c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A27Cu;
    {
        const bool branch_taken_0x31a27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A27Cu;
            // 0x31a280: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a27c) {
            ctx->pc = 0x31A28Cu;
            goto label_31a28c;
        }
    }
    ctx->pc = 0x31A284u;
    // 0x31a284: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31A284u;
    {
        const bool branch_taken_0x31a284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A284u;
            // 0x31a288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a284) {
            ctx->pc = 0x31A298u;
            goto label_31a298;
        }
    }
    ctx->pc = 0x31A28Cu;
label_31a28c:
    // 0x31a28c: 0xc051928  jal         func_1464A0
    ctx->pc = 0x31A28Cu;
    SET_GPR_U32(ctx, 31, 0x31A294u);
    ctx->pc = 0x31A290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A28Cu;
            // 0x31a290: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A294u; }
        if (ctx->pc != 0x31A294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A294u; }
        if (ctx->pc != 0x31A294u) { return; }
    }
    ctx->pc = 0x31A294u;
label_31a294:
    // 0x31a294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a298:
    // 0x31a298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a29c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A29Cu;
            // 0x31a2a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A2A4u;
}
