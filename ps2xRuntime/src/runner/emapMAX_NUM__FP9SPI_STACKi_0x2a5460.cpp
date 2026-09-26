#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapMAX_NUM__FP9SPI_STACKi
// Address: 0x2a5460 - 0x2a549c
void emapMAX_NUM__FP9SPI_STACKi_0x2a5460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapMAX_NUM__FP9SPI_STACKi_0x2a5460");
#endif

    switch (ctx->pc) {
        case 0x2a5484u: goto label_2a5484;
        default: break;
    }

    ctx->pc = 0x2a5460u;

    // 0x2a5460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5468: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a5468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a546c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A546Cu;
    {
        const bool branch_taken_0x2a546c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A546Cu;
            // 0x2a5470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a546c) {
            ctx->pc = 0x2A547Cu;
            goto label_2a547c;
        }
    }
    ctx->pc = 0x2A5474u;
    // 0x2a5474: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5474u;
    {
        const bool branch_taken_0x2a5474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5474u;
            // 0x2a5478: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5474) {
            ctx->pc = 0x2A5494u;
            goto label_2a5494;
        }
    }
    ctx->pc = 0x2A547Cu;
label_2a547c:
    // 0x2a547c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A547Cu;
    SET_GPR_U32(ctx, 31, 0x2A5484u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5484u; }
        if (ctx->pc != 0x2A5484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5484u; }
        if (ctx->pc != 0x2A5484u) { return; }
    }
    ctx->pc = 0x2A5484u;
label_2a5484:
    // 0x2a5484: 0x8f839a64  lw          $v1, -0x659C($gp)
    ctx->pc = 0x2a5484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5488: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2a5488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x2a548c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5494:
    // 0x2a5494: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5494u;
            // 0x2a5498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A549Cu;
}
