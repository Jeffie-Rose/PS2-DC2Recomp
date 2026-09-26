#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: spiGetStackInt__FP9SPI_STACK
// Address: 0x1463e0 - 0x146424
void spiGetStackInt__FP9SPI_STACK_0x1463e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("spiGetStackInt__FP9SPI_STACK_0x1463e0");
#endif

    switch (ctx->pc) {
        case 0x146418u: goto label_146418;
        default: break;
    }

    ctx->pc = 0x1463e0u;

    // 0x1463e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1463e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1463e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1463e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1463e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1463e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1463ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1463ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1463f0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1463F0u;
    {
        const bool branch_taken_0x1463f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1463F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1463F0u;
            // 0x1463f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463f0) {
            ctx->pc = 0x146410u;
            goto label_146410;
        }
    }
    ctx->pc = 0x1463F8u;
    // 0x1463f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1463F8u;
    {
        const bool branch_taken_0x1463f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1463f8) {
            ctx->pc = 0x146408u;
            goto label_146408;
        }
    }
    ctx->pc = 0x146400u;
    // 0x146400: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x146400u;
    {
        const bool branch_taken_0x146400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146400u;
            // 0x146404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146400) {
            ctx->pc = 0x146418u;
            goto label_146418;
        }
    }
    ctx->pc = 0x146408u;
label_146408:
    // 0x146408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x146408u;
    {
        const bool branch_taken_0x146408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14640Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146408u;
            // 0x14640c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146408) {
            ctx->pc = 0x146418u;
            goto label_146418;
        }
    }
    ctx->pc = 0x146410u;
label_146410:
    // 0x146410: 0xc0a248c  jal         func_289230
    ctx->pc = 0x146410u;
    SET_GPR_U32(ctx, 31, 0x146418u);
    ctx->pc = 0x146414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146410u;
            // 0x146414: 0xc48c0004  lwc1        $f12, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146418u; }
        if (ctx->pc != 0x146418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146418u; }
        if (ctx->pc != 0x146418u) { return; }
    }
    ctx->pc = 0x146418u;
label_146418:
    // 0x146418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14641c: 0x3e00008  jr          $ra
    ctx->pc = 0x14641Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14641Cu;
            // 0x146420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146424u;
}
