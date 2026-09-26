#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPARTS_NAME__FP9SPI_STACKi
// Address: 0x162c00 - 0x162c3c
void mapPARTS_NAME__FP9SPI_STACKi_0x162c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPARTS_NAME__FP9SPI_STACKi_0x162c00");
#endif

    switch (ctx->pc) {
        case 0x162c10u: goto label_162c10;
        case 0x162c2cu: goto label_162c2c;
        default: break;
    }

    ctx->pc = 0x162c00u;

    // 0x162c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162c08: 0xc05191c  jal         func_146470
    ctx->pc = 0x162C08u;
    SET_GPR_U32(ctx, 31, 0x162C10u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C10u; }
        if (ctx->pc != 0x162C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C10u; }
        if (ctx->pc != 0x162C10u) { return; }
    }
    ctx->pc = 0x162C10u;
label_162c10:
    // 0x162c10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162C10u;
    {
        const bool branch_taken_0x162c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C10u;
            // 0x162c14: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c10) {
            ctx->pc = 0x162C20u;
            goto label_162c20;
        }
    }
    ctx->pc = 0x162C18u;
    // 0x162c18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x162C18u;
    {
        const bool branch_taken_0x162c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C18u;
            // 0x162c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c18) {
            ctx->pc = 0x162C30u;
            goto label_162c30;
        }
    }
    ctx->pc = 0x162C20u;
label_162c20:
    // 0x162c20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x162c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c24: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x162C24u;
    SET_GPR_U32(ctx, 31, 0x162C2Cu);
    ctx->pc = 0x162C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C24u;
            // 0x162c28: 0x248402a0  addiu       $a0, $a0, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C2Cu; }
        if (ctx->pc != 0x162C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C2Cu; }
        if (ctx->pc != 0x162C2Cu) { return; }
    }
    ctx->pc = 0x162C2Cu;
label_162c2c:
    // 0x162c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162c30:
    // 0x162c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162c34: 0x3e00008  jr          $ra
    ctx->pc = 0x162C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C34u;
            // 0x162c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C3Cu;
}
