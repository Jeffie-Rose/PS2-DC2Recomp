#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapGEO_STONE__FP9SPI_STACKi
// Address: 0x2a5420 - 0x2a545c
void emapGEO_STONE__FP9SPI_STACKi_0x2a5420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapGEO_STONE__FP9SPI_STACKi_0x2a5420");
#endif

    switch (ctx->pc) {
        case 0x2a5444u: goto label_2a5444;
        default: break;
    }

    ctx->pc = 0x2a5420u;

    // 0x2a5420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5428: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a5428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a542c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A542Cu;
    {
        const bool branch_taken_0x2a542c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A542Cu;
            // 0x2a5430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a542c) {
            ctx->pc = 0x2A543Cu;
            goto label_2a543c;
        }
    }
    ctx->pc = 0x2A5434u;
    // 0x2a5434: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5434u;
    {
        const bool branch_taken_0x2a5434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5434u;
            // 0x2a5438: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5434) {
            ctx->pc = 0x2A5454u;
            goto label_2a5454;
        }
    }
    ctx->pc = 0x2A543Cu;
label_2a543c:
    // 0x2a543c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A543Cu;
    SET_GPR_U32(ctx, 31, 0x2A5444u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5444u; }
        if (ctx->pc != 0x2A5444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5444u; }
        if (ctx->pc != 0x2A5444u) { return; }
    }
    ctx->pc = 0x2A5444u;
label_2a5444:
    // 0x2a5444: 0x8f839a64  lw          $v1, -0x659C($gp)
    ctx->pc = 0x2a5444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5448: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2a5448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2a544c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5454:
    // 0x2a5454: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5454u;
            // 0x2a5458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A545Cu;
}
