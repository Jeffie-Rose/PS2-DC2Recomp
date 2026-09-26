#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_FOOT_SE_ID__FP12RS_STACKDATAi
// Address: 0x2758a0 - 0x2758e4
void ps2__EOH_SET_FOOT_SE_ID__FP12RS_STACKDATAi_0x2758a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_FOOT_SE_ID__FP12RS_STACKDATAi_0x2758a0");
#endif

    switch (ctx->pc) {
        case 0x2758b4u: goto label_2758b4;
        case 0x2758c0u: goto label_2758c0;
        case 0x2758d4u: goto label_2758d4;
        default: break;
    }

    ctx->pc = 0x2758a0u;

    // 0x2758a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2758a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2758a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2758a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2758a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2758a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2758ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2758ACu;
    SET_GPR_U32(ctx, 31, 0x2758B4u);
    ctx->pc = 0x2758B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2758ACu;
            // 0x2758b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2758B4u; }
        if (ctx->pc != 0x2758B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2758B4u; }
        if (ctx->pc != 0x2758B4u) { return; }
    }
    ctx->pc = 0x2758B4u;
label_2758b4:
    // 0x2758b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2758b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758b8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2758B8u;
    SET_GPR_U32(ctx, 31, 0x2758C0u);
    ctx->pc = 0x2758BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2758B8u;
            // 0x2758bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2758C0u; }
        if (ctx->pc != 0x2758C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2758C0u; }
        if (ctx->pc != 0x2758C0u) { return; }
    }
    ctx->pc = 0x2758C0u;
label_2758c0:
    // 0x2758c0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2758c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2758c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2758c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758c8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2758c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2758cc: 0xc097dfc  jal         func_25F7F0
    ctx->pc = 0x2758CCu;
    SET_GPR_U32(ctx, 31, 0x2758D4u);
    ctx->pc = 0x2758D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2758CCu;
            // 0x2758d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F7F0u;
    if (runtime->hasFunction(0x25F7F0u)) {
        auto targetFn = runtime->lookupFunction(0x25F7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2758D4u; }
        if (ctx->pc != 0x2758D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFootSeId__10CEohMotherFii_0x25f7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2758D4u; }
        if (ctx->pc != 0x2758D4u) { return; }
    }
    ctx->pc = 0x2758D4u;
label_2758d4:
    // 0x2758d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2758d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2758d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2758d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2758dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2758DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2758E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2758DCu;
            // 0x2758e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2758E4u;
}
