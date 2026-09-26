#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ITEM_HAVE_NUM__FP12RS_STACKDATAi
// Address: 0x279f30 - 0x279f6c
void ps2__GET_ITEM_HAVE_NUM__FP12RS_STACKDATAi_0x279f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ITEM_HAVE_NUM__FP12RS_STACKDATAi_0x279f30");
#endif

    switch (ctx->pc) {
        case 0x279f44u: goto label_279f44;
        case 0x279f4cu: goto label_279f4c;
        case 0x279f58u: goto label_279f58;
        default: break;
    }

    ctx->pc = 0x279f30u;

    // 0x279f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279f3c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279F3Cu;
    SET_GPR_U32(ctx, 31, 0x279F44u);
    ctx->pc = 0x279F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279F3Cu;
            // 0x279f40: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F44u; }
        if (ctx->pc != 0x279F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F44u; }
        if (ctx->pc != 0x279F44u) { return; }
    }
    ctx->pc = 0x279F44u;
label_279f44:
    // 0x279f44: 0xc0684dc  jal         func_1A1370
    ctx->pc = 0x279F44u;
    SET_GPR_U32(ctx, 31, 0x279F4Cu);
    ctx->pc = 0x279F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279F44u;
            // 0x279f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F4Cu; }
        if (ctx->pc != 0x279F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F4Cu; }
        if (ctx->pc != 0x279F4Cu) { return; }
    }
    ctx->pc = 0x279F4Cu;
label_279f4c:
    // 0x279f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x279f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f50: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x279F50u;
    SET_GPR_U32(ctx, 31, 0x279F58u);
    ctx->pc = 0x279F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279F50u;
            // 0x279f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F58u; }
        if (ctx->pc != 0x279F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F58u; }
        if (ctx->pc != 0x279F58u) { return; }
    }
    ctx->pc = 0x279F58u;
label_279f58:
    // 0x279f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279f60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279f64: 0x3e00008  jr          $ra
    ctx->pc = 0x279F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F64u;
            // 0x279f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279F6Cu;
}
