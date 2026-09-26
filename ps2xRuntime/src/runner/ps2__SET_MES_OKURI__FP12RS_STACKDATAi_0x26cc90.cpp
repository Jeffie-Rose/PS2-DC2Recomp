#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_OKURI__FP12RS_STACKDATAi
// Address: 0x26cc90 - 0x26cce8
void ps2__SET_MES_OKURI__FP12RS_STACKDATAi_0x26cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_OKURI__FP12RS_STACKDATAi_0x26cc90");
#endif

    switch (ctx->pc) {
        case 0x26cca8u: goto label_26cca8;
        case 0x26ccb0u: goto label_26ccb0;
        case 0x26ccccu: goto label_26cccc;
        default: break;
    }

    ctx->pc = 0x26cc90u;

    // 0x26cc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26cc94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26cc98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26cc9c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26cc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26cca0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CCA0u;
    SET_GPR_U32(ctx, 31, 0x26CCA8u);
    ctx->pc = 0x26CCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCA0u;
            // 0x26cca4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCA8u; }
        if (ctx->pc != 0x26CCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCA8u; }
        if (ctx->pc != 0x26CCA8u) { return; }
    }
    ctx->pc = 0x26CCA8u;
label_26cca8:
    // 0x26cca8: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CCA8u;
    SET_GPR_U32(ctx, 31, 0x26CCB0u);
    ctx->pc = 0x26CCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCA8u;
            // 0x26ccac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCB0u; }
        if (ctx->pc != 0x26CCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCB0u; }
        if (ctx->pc != 0x26CCB0u) { return; }
    }
    ctx->pc = 0x26CCB0u;
label_26ccb0:
    // 0x26ccb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ccb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ccb4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CCB4u;
    {
        const bool branch_taken_0x26ccb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCB4u;
            // 0x26ccb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccb4) {
            ctx->pc = 0x26CCC4u;
            goto label_26ccc4;
        }
    }
    ctx->pc = 0x26CCBCu;
    // 0x26ccbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26CCBCu;
    {
        const bool branch_taken_0x26ccbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCBCu;
            // 0x26ccc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ccbc) {
            ctx->pc = 0x26CCD4u;
            goto label_26ccd4;
        }
    }
    ctx->pc = 0x26CCC4u;
label_26ccc4:
    // 0x26ccc4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CCC4u;
    SET_GPR_U32(ctx, 31, 0x26CCCCu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCCCu; }
        if (ctx->pc != 0x26CCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CCCCu; }
        if (ctx->pc != 0x26CCCCu) { return; }
    }
    ctx->pc = 0x26CCCCu;
label_26cccc:
    // 0x26cccc: 0xae0217f4  sw          $v0, 0x17F4($s0)
    ctx->pc = 0x26ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6132), GPR_U32(ctx, 2));
    // 0x26ccd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ccd4:
    // 0x26ccd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ccd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ccd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ccdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ccdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cce0: 0x3e00008  jr          $ra
    ctx->pc = 0x26CCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CCE0u;
            // 0x26cce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CCE8u;
}
