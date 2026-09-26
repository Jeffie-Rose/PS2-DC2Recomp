#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FormDraw__14CPosDataManageFv
// Address: 0x22b430 - 0x22b488
void FormDraw__14CPosDataManageFv_0x22b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FormDraw__14CPosDataManageFv_0x22b430");
#endif

    switch (ctx->pc) {
        case 0x22b448u: goto label_22b448;
        case 0x22b454u: goto label_22b454;
        case 0x22b460u: goto label_22b460;
        default: break;
    }

    ctx->pc = 0x22b430u;

    // 0x22b430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b434: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b43c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b440: 0xc08ac34  jal         func_22B0D0
    ctx->pc = 0x22B440u;
    SET_GPR_U32(ctx, 31, 0x22B448u);
    ctx->pc = 0x22B444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B440u;
            // 0x22b444: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B0D0u;
    if (runtime->hasFunction(0x22B0D0u)) {
        auto targetFn = runtime->lookupFunction(0x22B0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B448u; }
        if (ctx->pc != 0x22B448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawTopList__14CPosDataManageFv_0x22b0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B448u; }
        if (ctx->pc != 0x22B448u) { return; }
    }
    ctx->pc = 0x22B448u;
label_22b448:
    // 0x22b448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b44c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x22B44Cu;
    {
        const bool branch_taken_0x22b44c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b44c) {
            ctx->pc = 0x22B478u;
            goto label_22b478;
        }
    }
    ctx->pc = 0x22B454u;
label_22b454:
    // 0x22b454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b458: 0xc08a9b4  jal         func_22A6D0
    ctx->pc = 0x22B458u;
    SET_GPR_U32(ctx, 31, 0x22B460u);
    ctx->pc = 0x22B45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B458u;
            // 0x22b45c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A6D0u;
    if (runtime->hasFunction(0x22A6D0u)) {
        auto targetFn = runtime->lookupFunction(0x22A6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B460u; }
        if (ctx->pc != 0x22B460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormDraw__16CMenuPosDataFormFRi_0x22a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B460u; }
        if (ctx->pc != 0x22B460u) { return; }
    }
    ctx->pc = 0x22B460u;
label_22b460:
    // 0x22b460: 0x8e100074  lw          $s0, 0x74($s0)
    ctx->pc = 0x22b460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x22b464: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B464u;
    {
        const bool branch_taken_0x22b464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b464) {
            ctx->pc = 0x22B478u;
            goto label_22b478;
        }
    }
    ctx->pc = 0x22B46Cu;
    // 0x22b46c: 0x0  nop
    ctx->pc = 0x22b46cu;
    // NOP
    // 0x22b470: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22B470u;
    {
        const bool branch_taken_0x22b470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b470) {
            ctx->pc = 0x22B454u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b454;
        }
    }
    ctx->pc = 0x22B478u;
label_22b478:
    // 0x22b478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b47c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b480: 0x3e00008  jr          $ra
    ctx->pc = 0x22B480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B480u;
            // 0x22b484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B488u;
}
