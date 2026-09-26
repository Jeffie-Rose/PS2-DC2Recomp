#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_FRAME_SHOW__FP12RS_STACKDATAi
// Address: 0x275140 - 0x2751a4
void ps2__EOH_SET_FRAME_SHOW__FP12RS_STACKDATAi_0x275140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_FRAME_SHOW__FP12RS_STACKDATAi_0x275140");
#endif

    switch (ctx->pc) {
        case 0x275158u: goto label_275158;
        case 0x275168u: goto label_275168;
        case 0x275174u: goto label_275174;
        case 0x275190u: goto label_275190;
        default: break;
    }

    ctx->pc = 0x275140u;

    // 0x275140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27514c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27514cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x275150: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275150u;
    SET_GPR_U32(ctx, 31, 0x275158u);
    ctx->pc = 0x275154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275150u;
            // 0x275154: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275158u; }
        if (ctx->pc != 0x275158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275158u; }
        if (ctx->pc != 0x275158u) { return; }
    }
    ctx->pc = 0x275158u;
label_275158:
    // 0x275158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27515c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27515cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275160: 0xc097e48  jal         func_25F920
    ctx->pc = 0x275160u;
    SET_GPR_U32(ctx, 31, 0x275168u);
    ctx->pc = 0x275164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275160u;
            // 0x275164: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275168u; }
        if (ctx->pc != 0x275168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275168u; }
        if (ctx->pc != 0x275168u) { return; }
    }
    ctx->pc = 0x275168u;
label_275168:
    // 0x275168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27516c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27516Cu;
    SET_GPR_U32(ctx, 31, 0x275174u);
    ctx->pc = 0x275170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27516Cu;
            // 0x275170: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275174u; }
        if (ctx->pc != 0x275174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275174u; }
        if (ctx->pc != 0x275174u) { return; }
    }
    ctx->pc = 0x275174u;
label_275174:
    // 0x275174: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x275174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275178: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x27517c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27517cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275180: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x275180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275184: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x275184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x275188: 0xc097b30  jal         func_25ECC0
    ctx->pc = 0x275188u;
    SET_GPR_U32(ctx, 31, 0x275190u);
    ctx->pc = 0x27518Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275188u;
            // 0x27518c: 0x2380a  movz        $a3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25ECC0u;
    if (runtime->hasFunction(0x25ECC0u)) {
        auto targetFn = runtime->lookupFunction(0x25ECC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275190u; }
        if (ctx->pc != 0x275190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrameShow__10CEohMotherFiPci_0x25ecc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275190u; }
        if (ctx->pc != 0x275190u) { return; }
    }
    ctx->pc = 0x275190u;
label_275190:
    // 0x275190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x275190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27519c: 0x3e00008  jr          $ra
    ctx->pc = 0x27519Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2751A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27519Cu;
            // 0x2751a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2751A4u;
}
