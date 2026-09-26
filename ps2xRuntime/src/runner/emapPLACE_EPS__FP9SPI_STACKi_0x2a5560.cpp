#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapPLACE_EPS__FP9SPI_STACKi
// Address: 0x2a5560 - 0x2a559c
void emapPLACE_EPS__FP9SPI_STACKi_0x2a5560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapPLACE_EPS__FP9SPI_STACKi_0x2a5560");
#endif

    switch (ctx->pc) {
        case 0x2a5584u: goto label_2a5584;
        default: break;
    }

    ctx->pc = 0x2a5560u;

    // 0x2a5560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5568: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a5568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a556c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A556Cu;
    {
        const bool branch_taken_0x2a556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A556Cu;
            // 0x2a5570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a556c) {
            ctx->pc = 0x2A557Cu;
            goto label_2a557c;
        }
    }
    ctx->pc = 0x2A5574u;
    // 0x2a5574: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A5574u;
    {
        const bool branch_taken_0x2a5574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5574u;
            // 0x2a5578: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5574) {
            ctx->pc = 0x2A5594u;
            goto label_2a5594;
        }
    }
    ctx->pc = 0x2A557Cu;
label_2a557c:
    // 0x2a557c: 0xc05190c  jal         func_146430
    ctx->pc = 0x2A557Cu;
    SET_GPR_U32(ctx, 31, 0x2A5584u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5584u; }
        if (ctx->pc != 0x2A5584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5584u; }
        if (ctx->pc != 0x2A5584u) { return; }
    }
    ctx->pc = 0x2A5584u;
label_2a5584:
    // 0x2a5584: 0x8f839a64  lw          $v1, -0x659C($gp)
    ctx->pc = 0x2a5584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a558c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2a558cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2a5590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5594:
    // 0x2a5594: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5594u;
            // 0x2a5598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A559Cu;
}
