#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SND_SET_SE_PAN__FP12RS_STACKDATAi
// Address: 0x272ca0 - 0x272d00
void ps2__SND_SET_SE_PAN__FP12RS_STACKDATAi_0x272ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SND_SET_SE_PAN__FP12RS_STACKDATAi_0x272ca0");
#endif

    switch (ctx->pc) {
        case 0x272cb8u: goto label_272cb8;
        case 0x272cc8u: goto label_272cc8;
        case 0x272cd4u: goto label_272cd4;
        case 0x272ce8u: goto label_272ce8;
        default: break;
    }

    ctx->pc = 0x272ca0u;

    // 0x272ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x272ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x272ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x272ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272cac: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x272cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x272cb0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272CB0u;
    SET_GPR_U32(ctx, 31, 0x272CB8u);
    ctx->pc = 0x272CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272CB0u;
            // 0x272cb4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272CB8u; }
        if (ctx->pc != 0x272CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272CB8u; }
        if (ctx->pc != 0x272CB8u) { return; }
    }
    ctx->pc = 0x272CB8u;
label_272cb8:
    // 0x272cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cc0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272CC0u;
    SET_GPR_U32(ctx, 31, 0x272CC8u);
    ctx->pc = 0x272CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272CC0u;
            // 0x272cc4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272CC8u; }
        if (ctx->pc != 0x272CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272CC8u; }
        if (ctx->pc != 0x272CC8u) { return; }
    }
    ctx->pc = 0x272CC8u;
label_272cc8:
    // 0x272cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ccc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272CCCu;
    SET_GPR_U32(ctx, 31, 0x272CD4u);
    ctx->pc = 0x272CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272CCCu;
            // 0x272cd0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272CD4u; }
        if (ctx->pc != 0x272CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272CD4u; }
        if (ctx->pc != 0x272CD4u) { return; }
    }
    ctx->pc = 0x272CD4u;
label_272cd4:
    // 0x272cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272cdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x272cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ce0: 0xc063b00  jal         func_18EC00
    ctx->pc = 0x272CE0u;
    SET_GPR_U32(ctx, 31, 0x272CE8u);
    ctx->pc = 0x272CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272CE0u;
            // 0x272ce4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EC00u;
    if (runtime->hasFunction(0x18EC00u)) {
        auto targetFn = runtime->lookupFunction(0x18EC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272CE8u; }
        if (ctx->pc != 0x272CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePan__FUiiii_0x18ec00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272CE8u; }
        if (ctx->pc != 0x272CE8u) { return; }
    }
    ctx->pc = 0x272CE8u;
label_272ce8:
    // 0x272ce8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x272ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272cf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x272CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272CF8u;
            // 0x272cfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272D00u;
}
