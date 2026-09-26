#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vpiSHADOW__FP9SPI_STACKi
// Address: 0x31a350 - 0x31a398
void vpiSHADOW__FP9SPI_STACKi_0x31a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vpiSHADOW__FP9SPI_STACKi_0x31a350");
#endif

    switch (ctx->pc) {
        case 0x31a374u: goto label_31a374;
        default: break;
    }

    ctx->pc = 0x31a350u;

    // 0x31a350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a358: 0x8f82a374  lw          $v0, -0x5C8C($gp)
    ctx->pc = 0x31a358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a35c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A35Cu;
    {
        const bool branch_taken_0x31a35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A35Cu;
            // 0x31a360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a35c) {
            ctx->pc = 0x31A36Cu;
            goto label_31a36c;
        }
    }
    ctx->pc = 0x31A364u;
    // 0x31a364: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31A364u;
    {
        const bool branch_taken_0x31a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A364u;
            // 0x31a368: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a364) {
            ctx->pc = 0x31A390u;
            goto label_31a390;
        }
    }
    ctx->pc = 0x31A36Cu;
label_31a36c:
    // 0x31a36c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x31A36Cu;
    SET_GPR_U32(ctx, 31, 0x31A374u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A374u; }
        if (ctx->pc != 0x31A374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A374u; }
        if (ctx->pc != 0x31A374u) { return; }
    }
    ctx->pc = 0x31A374u;
label_31a374:
    // 0x31a374: 0x8f83a374  lw          $v1, -0x5C8C($gp)
    ctx->pc = 0x31a374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a378: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31a378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31a37c: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x31a37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31a380: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x31a380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x31a384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a388: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x31a388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x31a38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31a390:
    // 0x31a390: 0x3e00008  jr          $ra
    ctx->pc = 0x31A390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A390u;
            // 0x31a394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A398u;
}
