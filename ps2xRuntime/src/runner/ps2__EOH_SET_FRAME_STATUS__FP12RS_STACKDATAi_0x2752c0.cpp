#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_FRAME_STATUS__FP12RS_STACKDATAi
// Address: 0x2752c0 - 0x275320
void ps2__EOH_SET_FRAME_STATUS__FP12RS_STACKDATAi_0x2752c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_FRAME_STATUS__FP12RS_STACKDATAi_0x2752c0");
#endif

    switch (ctx->pc) {
        case 0x2752d8u: goto label_2752d8;
        case 0x2752e8u: goto label_2752e8;
        case 0x2752f4u: goto label_2752f4;
        case 0x27530cu: goto label_27530c;
        default: break;
    }

    ctx->pc = 0x2752c0u;

    // 0x2752c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2752c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2752c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2752c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2752c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2752c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2752cc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2752ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2752d0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2752D0u;
    SET_GPR_U32(ctx, 31, 0x2752D8u);
    ctx->pc = 0x2752D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2752D0u;
            // 0x2752d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752D8u; }
        if (ctx->pc != 0x2752D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752D8u; }
        if (ctx->pc != 0x2752D8u) { return; }
    }
    ctx->pc = 0x2752D8u;
label_2752d8:
    // 0x2752d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2752d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2752dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752e0: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2752E0u;
    SET_GPR_U32(ctx, 31, 0x2752E8u);
    ctx->pc = 0x2752E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2752E0u;
            // 0x2752e4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752E8u; }
        if (ctx->pc != 0x2752E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752E8u; }
        if (ctx->pc != 0x2752E8u) { return; }
    }
    ctx->pc = 0x2752E8u;
label_2752e8:
    // 0x2752e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2752e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2752ECu;
    SET_GPR_U32(ctx, 31, 0x2752F4u);
    ctx->pc = 0x2752F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2752ECu;
            // 0x2752f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752F4u; }
        if (ctx->pc != 0x2752F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2752F4u; }
        if (ctx->pc != 0x2752F4u) { return; }
    }
    ctx->pc = 0x2752F4u;
label_2752f4:
    // 0x2752f4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2752f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2752f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2752f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2752fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2752fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275300: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x275300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x275304: 0xc097b30  jal         func_25ECC0
    ctx->pc = 0x275304u;
    SET_GPR_U32(ctx, 31, 0x27530Cu);
    ctx->pc = 0x275308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275304u;
            // 0x275308: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25ECC0u;
    if (runtime->hasFunction(0x25ECC0u)) {
        auto targetFn = runtime->lookupFunction(0x25ECC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27530Cu; }
        if (ctx->pc != 0x27530Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrameShow__10CEohMotherFiPci_0x25ecc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27530Cu; }
        if (ctx->pc != 0x27530Cu) { return; }
    }
    ctx->pc = 0x27530Cu;
label_27530c:
    // 0x27530c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27530cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275318: 0x3e00008  jr          $ra
    ctx->pc = 0x275318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27531Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275318u;
            // 0x27531c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275320u;
}
