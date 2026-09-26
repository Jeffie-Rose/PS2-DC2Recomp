#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_DNG_MAP__FP12RS_STACKDATAi
// Address: 0x263e80 - 0x263eb0
void ps2__SET_DNG_MAP__FP12RS_STACKDATAi_0x263e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_DNG_MAP__FP12RS_STACKDATAi_0x263e80");
#endif

    switch (ctx->pc) {
        case 0x263e94u: goto label_263e94;
        case 0x263e9cu: goto label_263e9c;
        default: break;
    }

    ctx->pc = 0x263e80u;

    // 0x263e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263e8c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263E8Cu;
    SET_GPR_U32(ctx, 31, 0x263E94u);
    ctx->pc = 0x263E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263E8Cu;
            // 0x263e90: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E94u; }
        if (ctx->pc != 0x263E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E94u; }
        if (ctx->pc != 0x263E94u) { return; }
    }
    ctx->pc = 0x263E94u;
label_263e94:
    // 0x263e94: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263E94u;
    SET_GPR_U32(ctx, 31, 0x263E9Cu);
    ctx->pc = 0x263E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263E94u;
            // 0x263e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E9Cu; }
        if (ctx->pc != 0x263E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E9Cu; }
        if (ctx->pc != 0x263E9Cu) { return; }
    }
    ctx->pc = 0x263E9Cu;
label_263e9c:
    // 0x263e9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x263EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263EA8u;
            // 0x263eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263EB0u;
}
