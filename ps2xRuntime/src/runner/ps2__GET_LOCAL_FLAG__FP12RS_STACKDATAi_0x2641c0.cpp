#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_LOCAL_FLAG__FP12RS_STACKDATAi
// Address: 0x2641c0 - 0x2641fc
void ps2__GET_LOCAL_FLAG__FP12RS_STACKDATAi_0x2641c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_LOCAL_FLAG__FP12RS_STACKDATAi_0x2641c0");
#endif

    switch (ctx->pc) {
        case 0x2641d4u: goto label_2641d4;
        case 0x2641dcu: goto label_2641dc;
        case 0x2641e8u: goto label_2641e8;
        default: break;
    }

    ctx->pc = 0x2641c0u;

    // 0x2641c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2641c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2641c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2641c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2641c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2641c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2641cc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2641CCu;
    SET_GPR_U32(ctx, 31, 0x2641D4u);
    ctx->pc = 0x2641D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2641CCu;
            // 0x2641d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641D4u; }
        if (ctx->pc != 0x2641D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641D4u; }
        if (ctx->pc != 0x2641D4u) { return; }
    }
    ctx->pc = 0x2641D4u;
label_2641d4:
    // 0x2641d4: 0xc0983f0  jal         func_260FC0
    ctx->pc = 0x2641D4u;
    SET_GPR_U32(ctx, 31, 0x2641DCu);
    ctx->pc = 0x2641D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2641D4u;
            // 0x2641d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260FC0u;
    if (runtime->hasFunction(0x260FC0u)) {
        auto targetFn = runtime->lookupFunction(0x260FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641DCu; }
        if (ctx->pc != 0x2641DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLocalFlag__Fi_0x260fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641DCu; }
        if (ctx->pc != 0x2641DCu) { return; }
    }
    ctx->pc = 0x2641DCu;
label_2641dc:
    // 0x2641dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2641dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641e0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2641E0u;
    SET_GPR_U32(ctx, 31, 0x2641E8u);
    ctx->pc = 0x2641E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2641E0u;
            // 0x2641e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641E8u; }
        if (ctx->pc != 0x2641E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641E8u; }
        if (ctx->pc != 0x2641E8u) { return; }
    }
    ctx->pc = 0x2641E8u;
label_2641e8:
    // 0x2641e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2641e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2641ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2641ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2641f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2641f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2641f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2641F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2641F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2641F4u;
            // 0x2641f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2641FCu;
}
