#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MAP_EFFECT_ID__FP12RS_STACKDATAi
// Address: 0x27d150 - 0x27d194
void ps2__SET_MAP_EFFECT_ID__FP12RS_STACKDATAi_0x27d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MAP_EFFECT_ID__FP12RS_STACKDATAi_0x27d150");
#endif

    switch (ctx->pc) {
        case 0x27d17cu: goto label_27d17c;
        default: break;
    }

    ctx->pc = 0x27d150u;

    // 0x27d150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27d15c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27d160: 0x24502f90  addiu       $s0, $v0, 0x2F90
    ctx->pc = 0x27d160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x27d164: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D164u;
    {
        const bool branch_taken_0x27d164 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D164u;
            // 0x27d168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d164) {
            ctx->pc = 0x27D174u;
            goto label_27d174;
        }
    }
    ctx->pc = 0x27D16Cu;
    // 0x27d16c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D16Cu;
    {
        const bool branch_taken_0x27d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D16Cu;
            // 0x27d170: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d16c) {
            ctx->pc = 0x27D188u;
            goto label_27d188;
        }
    }
    ctx->pc = 0x27D174u;
label_27d174:
    // 0x27d174: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D174u;
    SET_GPR_U32(ctx, 31, 0x27D17Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D17Cu; }
        if (ctx->pc != 0x27D17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D17Cu; }
        if (ctx->pc != 0x27D17Cu) { return; }
    }
    ctx->pc = 0x27D17Cu;
label_27d17c:
    // 0x27d17c: 0xa202009c  sb          $v0, 0x9C($s0)
    ctx->pc = 0x27d17cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    // 0x27d180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27d188:
    // 0x27d188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d18c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D18Cu;
            // 0x27d190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D194u;
}
