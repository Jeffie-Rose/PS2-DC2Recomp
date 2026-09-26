#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapWEIGHT__FP9SPI_STACKi
// Address: 0x2a53e0 - 0x2a541c
void emapWEIGHT__FP9SPI_STACKi_0x2a53e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapWEIGHT__FP9SPI_STACKi_0x2a53e0");
#endif

    switch (ctx->pc) {
        case 0x2a5404u: goto label_2a5404;
        default: break;
    }

    ctx->pc = 0x2a53e0u;

    // 0x2a53e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a53e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a53e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a53e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a53e8: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a53ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A53ECu;
    {
        const bool branch_taken_0x2a53ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A53F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A53ECu;
            // 0x2a53f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53ec) {
            ctx->pc = 0x2A53FCu;
            goto label_2a53fc;
        }
    }
    ctx->pc = 0x2A53F4u;
    // 0x2a53f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A53F4u;
    {
        const bool branch_taken_0x2a53f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A53F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A53F4u;
            // 0x2a53f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53f4) {
            ctx->pc = 0x2A5414u;
            goto label_2a5414;
        }
    }
    ctx->pc = 0x2A53FCu;
label_2a53fc:
    // 0x2a53fc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A53FCu;
    SET_GPR_U32(ctx, 31, 0x2A5404u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5404u; }
        if (ctx->pc != 0x2A5404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5404u; }
        if (ctx->pc != 0x2A5404u) { return; }
    }
    ctx->pc = 0x2A5404u;
label_2a5404:
    // 0x2a5404: 0x8f839a64  lw          $v1, -0x659C($gp)
    ctx->pc = 0x2a5404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5408: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2a5408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2a540c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5414:
    // 0x2a5414: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5414u;
            // 0x2a5418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A541Cu;
}
