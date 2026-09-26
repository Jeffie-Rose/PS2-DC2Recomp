#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ZERO_VECTOR__FP12RS_STACKDATAi
// Address: 0x2e3390 - 0x2e33d8
void ps2__ZERO_VECTOR__FP12RS_STACKDATAi_0x2e3390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ZERO_VECTOR__FP12RS_STACKDATAi_0x2e3390");
#endif

    switch (ctx->pc) {
        case 0x2e33b4u: goto label_2e33b4;
        case 0x2e33c0u: goto label_2e33c0;
        case 0x2e33c8u: goto label_2e33c8;
        default: break;
    }

    ctx->pc = 0x2e3390u;

    // 0x2e3390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3394: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3398: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3398u;
    {
        const bool branch_taken_0x2e3398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3398u;
            // 0x2e339c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3398) {
            ctx->pc = 0x2E33A8u;
            goto label_2e33a8;
        }
    }
    ctx->pc = 0x2E33A0u;
    // 0x2e33a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E33A0u;
    {
        const bool branch_taken_0x2e33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E33A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E33A0u;
            // 0x2e33a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33a0) {
            ctx->pc = 0x2E33CCu;
            goto label_2e33cc;
        }
    }
    ctx->pc = 0x2E33A8u;
label_2e33a8:
    // 0x2e33a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e33a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e33ac: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E33ACu;
    SET_GPR_U32(ctx, 31, 0x2E33B4u);
    ctx->pc = 0x2E33B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E33ACu;
            // 0x2e33b0: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E33B4u; }
        if (ctx->pc != 0x2E33B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E33B4u; }
        if (ctx->pc != 0x2E33B4u) { return; }
    }
    ctx->pc = 0x2E33B4u;
label_2e33b4:
    // 0x2e33b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e33b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e33b8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E33B8u;
    SET_GPR_U32(ctx, 31, 0x2E33C0u);
    ctx->pc = 0x2E33BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E33B8u;
            // 0x2e33bc: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E33C0u; }
        if (ctx->pc != 0x2E33C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E33C0u; }
        if (ctx->pc != 0x2E33C0u) { return; }
    }
    ctx->pc = 0x2E33C0u;
label_2e33c0:
    // 0x2e33c0: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E33C0u;
    SET_GPR_U32(ctx, 31, 0x2E33C8u);
    ctx->pc = 0x2E33C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E33C0u;
            // 0x2e33c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E33C8u; }
        if (ctx->pc != 0x2E33C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E33C8u; }
        if (ctx->pc != 0x2E33C8u) { return; }
    }
    ctx->pc = 0x2E33C8u;
label_2e33c8:
    // 0x2e33c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e33cc:
    // 0x2e33cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e33ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e33d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E33D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E33D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E33D0u;
            // 0x2e33d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E33D8u;
}
