#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_INT_FLAG__FP12RS_STACKDATAi
// Address: 0x1e5500 - 0x1e5554
void ps2__SET_INT_FLAG__FP12RS_STACKDATAi_0x1e5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_INT_FLAG__FP12RS_STACKDATAi_0x1e5500");
#endif

    switch (ctx->pc) {
        case 0x1e5524u: goto label_1e5524;
        case 0x1e5530u: goto label_1e5530;
        case 0x1e5540u: goto label_1e5540;
        default: break;
    }

    ctx->pc = 0x1e5500u;

    // 0x1e5500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5504: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e550c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E550Cu;
    {
        const bool branch_taken_0x1e550c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E550Cu;
            // 0x1e5510: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e550c) {
            ctx->pc = 0x1E551Cu;
            goto label_1e551c;
        }
    }
    ctx->pc = 0x1E5514u;
    // 0x1e5514: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E5514u;
    {
        const bool branch_taken_0x1e5514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5514u;
            // 0x1e5518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5514) {
            ctx->pc = 0x1E5544u;
            goto label_1e5544;
        }
    }
    ctx->pc = 0x1E551Cu;
label_1e551c:
    // 0x1e551c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E551Cu;
    SET_GPR_U32(ctx, 31, 0x1E5524u);
    ctx->pc = 0x1E5520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E551Cu;
            // 0x1e5520: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5524u; }
        if (ctx->pc != 0x1E5524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5524u; }
        if (ctx->pc != 0x1E5524u) { return; }
    }
    ctx->pc = 0x1E5524u;
label_1e5524:
    // 0x1e5524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5528: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E5528u;
    SET_GPR_U32(ctx, 31, 0x1E5530u);
    ctx->pc = 0x1E552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5528u;
            // 0x1e552c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5530u; }
        if (ctx->pc != 0x1E5530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5530u; }
        if (ctx->pc != 0x1E5530u) { return; }
    }
    ctx->pc = 0x1E5530u;
label_1e5530:
    // 0x1e5530: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e5530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5538: 0xc05a938  jal         func_16A4E0
    ctx->pc = 0x1E5538u;
    SET_GPR_U32(ctx, 31, 0x1E5540u);
    ctx->pc = 0x1E553Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5538u;
            // 0x1e553c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A4E0u;
    if (runtime->hasFunction(0x16A4E0u)) {
        auto targetFn = runtime->lookupFunction(0x16A4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5540u; }
        if (ctx->pc != 0x1E5540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMaskFlag__12CActionCharaFii_0x16a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5540u; }
        if (ctx->pc != 0x1E5540u) { return; }
    }
    ctx->pc = 0x1E5540u;
label_1e5540:
    // 0x1e5540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5544:
    // 0x1e5544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e554c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E554Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E554Cu;
            // 0x1e5550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5554u;
}
