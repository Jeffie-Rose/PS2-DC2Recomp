#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_FINISH__FP12RS_STACKDATAi
// Address: 0x1e66d0 - 0x1e6718
void ps2__ESM_FINISH__FP12RS_STACKDATAi_0x1e66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_FINISH__FP12RS_STACKDATAi_0x1e66d0");
#endif

    switch (ctx->pc) {
        case 0x1e66e8u: goto label_1e66e8;
        case 0x1e6708u: goto label_1e6708;
        default: break;
    }

    ctx->pc = 0x1e66d0u;

    // 0x1e66d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e66d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e66d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e66d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e66dc: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e66e0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E66E0u;
    SET_GPR_U32(ctx, 31, 0x1E66E8u);
    ctx->pc = 0x1E66E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66E0u;
            // 0x1e66e4: 0x8c500670  lw          $s0, 0x670($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66E8u; }
        if (ctx->pc != 0x1E66E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66E8u; }
        if (ctx->pc != 0x1E66E8u) { return; }
    }
    ctx->pc = 0x1E66E8u;
label_1e66e8:
    // 0x1e66e8: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e66e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e66ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e66ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e66f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e66f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e66f4: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1e66f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1e66f8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e66f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e66fc: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e66fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6700: 0xc0b8854  jal         func_2E2150
    ctx->pc = 0x1E6700u;
    SET_GPR_U32(ctx, 31, 0x1E6708u);
    ctx->pc = 0x1E6704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6700u;
            // 0x1e6704: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2150u;
    if (runtime->hasFunction(0x2E2150u)) {
        auto targetFn = runtime->lookupFunction(0x2E2150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6708u; }
        if (ctx->pc != 0x1E6708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptProgNo__16CEffectScriptManFiii_0x2e2150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6708u; }
        if (ctx->pc != 0x1E6708u) { return; }
    }
    ctx->pc = 0x1E6708u;
label_1e6708:
    // 0x1e6708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e670c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e670cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6710: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6710u;
            // 0x1e6714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6718u;
}
