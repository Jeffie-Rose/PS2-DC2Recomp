#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: spiGetStackFloat__FP9SPI_STACK
// Address: 0x146430 - 0x146470
void spiGetStackFloat__FP9SPI_STACK_0x146430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("spiGetStackFloat__FP9SPI_STACK_0x146430");
#endif

    ctx->pc = 0x146430u;

    // 0x146430: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x146430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x146434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x146434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146438: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x146438u;
    {
        const bool branch_taken_0x146438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146438u;
            // 0x14643c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146438) {
            ctx->pc = 0x14645Cu;
            goto label_14645c;
        }
    }
    ctx->pc = 0x146440u;
    // 0x146440: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146440u;
    {
        const bool branch_taken_0x146440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x146440) {
            ctx->pc = 0x146450u;
            goto label_146450;
        }
    }
    ctx->pc = 0x146448u;
    // 0x146448: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x146448u;
    {
        const bool branch_taken_0x146448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146448) {
            ctx->pc = 0x146464u;
            goto label_146464;
        }
    }
    ctx->pc = 0x146450u;
label_146450:
    // 0x146450: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x146450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146454u;
    {
        const bool branch_taken_0x146454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146454u;
            // 0x146458: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146454) {
            ctx->pc = 0x146468u;
            goto label_146468;
        }
    }
    ctx->pc = 0x14645Cu;
label_14645c:
    // 0x14645c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14645Cu;
    {
        const bool branch_taken_0x14645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14645Cu;
            // 0x146460: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14645c) {
            ctx->pc = 0x146468u;
            goto label_146468;
        }
    }
    ctx->pc = 0x146464u;
label_146464:
    // 0x146464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_146468:
    // 0x146468: 0x3e00008  jr          $ra
    ctx->pc = 0x146468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146470u;
}
