#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_KEEP_TIME__FP12RS_STACKDATAi
// Address: 0x27d450 - 0x27d480
void ps2__GET_KEEP_TIME__FP12RS_STACKDATAi_0x27d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_KEEP_TIME__FP12RS_STACKDATAi_0x27d450");
#endif

    switch (ctx->pc) {
        case 0x27d474u: goto label_27d474;
        default: break;
    }

    ctx->pc = 0x27d450u;

    // 0x27d450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d458: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D458u;
    {
        const bool branch_taken_0x27d458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D458u;
            // 0x27d45c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d458) {
            ctx->pc = 0x27D468u;
            goto label_27d468;
        }
    }
    ctx->pc = 0x27D460u;
    // 0x27d460: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27D460u;
    {
        const bool branch_taken_0x27d460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D460u;
            // 0x27d464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d460) {
            ctx->pc = 0x27D474u;
            goto label_27d474;
        }
    }
    ctx->pc = 0x27D468u;
label_27d468:
    // 0x27d468: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27d468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x27d46c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27D46Cu;
    SET_GPR_U32(ctx, 31, 0x27D474u);
    ctx->pc = 0x27D470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D46Cu;
            // 0x27d470: 0xc42ce87c  lwc1        $f12, -0x1784($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294961276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D474u; }
        if (ctx->pc != 0x27D474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D474u; }
        if (ctx->pc != 0x27D474u) { return; }
    }
    ctx->pc = 0x27D474u;
label_27d474:
    // 0x27d474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d478: 0x3e00008  jr          $ra
    ctx->pc = 0x27D478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D478u;
            // 0x27d47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D480u;
}
