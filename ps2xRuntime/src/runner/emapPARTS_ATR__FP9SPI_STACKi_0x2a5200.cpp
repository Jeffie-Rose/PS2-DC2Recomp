#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapPARTS_ATR__FP9SPI_STACKi
// Address: 0x2a5200 - 0x2a5244
void emapPARTS_ATR__FP9SPI_STACKi_0x2a5200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapPARTS_ATR__FP9SPI_STACKi_0x2a5200");
#endif

    switch (ctx->pc) {
        case 0x2a5224u: goto label_2a5224;
        default: break;
    }

    ctx->pc = 0x2a5200u;

    // 0x2a5200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5208: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a5208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a520c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A520Cu;
    {
        const bool branch_taken_0x2a520c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A520Cu;
            // 0x2a5210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a520c) {
            ctx->pc = 0x2A521Cu;
            goto label_2a521c;
        }
    }
    ctx->pc = 0x2A5214u;
    // 0x2a5214: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5214u;
    {
        const bool branch_taken_0x2a5214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5214u;
            // 0x2a5218: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5214) {
            ctx->pc = 0x2A523Cu;
            goto label_2a523c;
        }
    }
    ctx->pc = 0x2A521Cu;
label_2a521c:
    // 0x2a521c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A521Cu;
    SET_GPR_U32(ctx, 31, 0x2A5224u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5224u; }
        if (ctx->pc != 0x2A5224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5224u; }
        if (ctx->pc != 0x2A5224u) { return; }
    }
    ctx->pc = 0x2A5224u;
label_2a5224:
    // 0x2a5224: 0x8f849a64  lw          $a0, -0x659C($gp)
    ctx->pc = 0x2a5224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5228: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a5228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a522c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a5230: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2a5230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2a5234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a523c:
    // 0x2a523c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A523Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A523Cu;
            // 0x2a5240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5244u;
}
