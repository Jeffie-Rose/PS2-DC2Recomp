#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vpiMOVE_MOTION__FP9SPI_STACKi
// Address: 0x31a2b0 - 0x31a304
void vpiMOVE_MOTION__FP9SPI_STACKi_0x31a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vpiMOVE_MOTION__FP9SPI_STACKi_0x31a2b0");
#endif

    switch (ctx->pc) {
        case 0x31a2d4u: goto label_31a2d4;
        case 0x31a2ecu: goto label_31a2ec;
        default: break;
    }

    ctx->pc = 0x31a2b0u;

    // 0x31a2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a2b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a2b8: 0x8f82a374  lw          $v0, -0x5C8C($gp)
    ctx->pc = 0x31a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a2bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A2BCu;
    {
        const bool branch_taken_0x31a2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A2BCu;
            // 0x31a2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2bc) {
            ctx->pc = 0x31A2CCu;
            goto label_31a2cc;
        }
    }
    ctx->pc = 0x31A2C4u;
    // 0x31a2c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31A2C4u;
    {
        const bool branch_taken_0x31a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A2C4u;
            // 0x31a2c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2c4) {
            ctx->pc = 0x31A2FCu;
            goto label_31a2fc;
        }
    }
    ctx->pc = 0x31A2CCu;
label_31a2cc:
    // 0x31a2cc: 0xc05191c  jal         func_146470
    ctx->pc = 0x31A2CCu;
    SET_GPR_U32(ctx, 31, 0x31A2D4u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A2D4u; }
        if (ctx->pc != 0x31A2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A2D4u; }
        if (ctx->pc != 0x31A2D4u) { return; }
    }
    ctx->pc = 0x31A2D4u;
label_31a2d4:
    // 0x31a2d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A2D4u;
    {
        const bool branch_taken_0x31a2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A2D4u;
            // 0x31a2d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2d4) {
            ctx->pc = 0x31A2E4u;
            goto label_31a2e4;
        }
    }
    ctx->pc = 0x31A2DCu;
    // 0x31a2dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31A2DCu;
    {
        const bool branch_taken_0x31a2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A2DCu;
            // 0x31a2e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2dc) {
            ctx->pc = 0x31A2F8u;
            goto label_31a2f8;
        }
    }
    ctx->pc = 0x31A2E4u;
label_31a2e4:
    // 0x31a2e4: 0xc0c68e8  jal         func_31A3A0
    ctx->pc = 0x31A2E4u;
    SET_GPR_U32(ctx, 31, 0x31A2ECu);
    ctx->pc = 0x31A3A0u;
    if (runtime->hasFunction(0x31A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x31A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A2ECu; }
        if (ctx->pc != 0x31A2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        vpiGetMotionID__FPc_0x31a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A2ECu; }
        if (ctx->pc != 0x31A2ECu) { return; }
    }
    ctx->pc = 0x31A2ECu;
label_31a2ec:
    // 0x31a2ec: 0x8f83a374  lw          $v1, -0x5C8C($gp)
    ctx->pc = 0x31a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a2f0: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x31a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x31a2f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a2f8:
    // 0x31a2f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31a2fc:
    // 0x31a2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x31A2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A2FCu;
            // 0x31a300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A304u;
}
