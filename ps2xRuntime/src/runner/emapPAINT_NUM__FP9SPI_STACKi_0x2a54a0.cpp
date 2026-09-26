#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapPAINT_NUM__FP9SPI_STACKi
// Address: 0x2a54a0 - 0x2a54dc
void emapPAINT_NUM__FP9SPI_STACKi_0x2a54a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapPAINT_NUM__FP9SPI_STACKi_0x2a54a0");
#endif

    switch (ctx->pc) {
        case 0x2a54c4u: goto label_2a54c4;
        default: break;
    }

    ctx->pc = 0x2a54a0u;

    // 0x2a54a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a54a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a54a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a54a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a54a8: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a54ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A54ACu;
    {
        const bool branch_taken_0x2a54ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A54B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A54ACu;
            // 0x2a54b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54ac) {
            ctx->pc = 0x2A54BCu;
            goto label_2a54bc;
        }
    }
    ctx->pc = 0x2A54B4u;
    // 0x2a54b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A54B4u;
    {
        const bool branch_taken_0x2a54b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A54B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A54B4u;
            // 0x2a54b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54b4) {
            ctx->pc = 0x2A54D4u;
            goto label_2a54d4;
        }
    }
    ctx->pc = 0x2A54BCu;
label_2a54bc:
    // 0x2a54bc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A54BCu;
    SET_GPR_U32(ctx, 31, 0x2A54C4u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A54C4u; }
        if (ctx->pc != 0x2A54C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A54C4u; }
        if (ctx->pc != 0x2A54C4u) { return; }
    }
    ctx->pc = 0x2A54C4u;
label_2a54c4:
    // 0x2a54c4: 0x8f839a64  lw          $v1, -0x659C($gp)
    ctx->pc = 0x2a54c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a54c8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2a54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2a54cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a54d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a54d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a54d4:
    // 0x2a54d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A54D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A54D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A54D4u;
            // 0x2a54d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A54DCu;
}
