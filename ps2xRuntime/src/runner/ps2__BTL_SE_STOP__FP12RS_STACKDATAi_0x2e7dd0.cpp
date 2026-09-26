#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _BTL_SE_STOP__FP12RS_STACKDATAi
// Address: 0x2e7dd0 - 0x2e7e14
void ps2__BTL_SE_STOP__FP12RS_STACKDATAi_0x2e7dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__BTL_SE_STOP__FP12RS_STACKDATAi_0x2e7dd0");
#endif

    switch (ctx->pc) {
        case 0x2e7df0u: goto label_2e7df0;
        case 0x2e7e00u: goto label_2e7e00;
        default: break;
    }

    ctx->pc = 0x2e7dd0u;

    // 0x2e7dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7dd4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2e7dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2e7dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7de0: 0x8f829ec8  lw          $v0, -0x6138($gp)
    ctx->pc = 0x2e7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e7de4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2e7de4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2e7de8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7DE8u;
    SET_GPR_U32(ctx, 31, 0x2E7DF0u);
    ctx->pc = 0x2E7DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DE8u;
            // 0x2e7dec: 0x8c30c4d0  lw          $s0, -0x3B30($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7DF0u; }
        if (ctx->pc != 0x2E7DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7DF0u; }
        if (ctx->pc != 0x2E7DF0u) { return; }
    }
    ctx->pc = 0x2E7DF0u;
label_2e7df0:
    // 0x2e7df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e7df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7df8: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x2E7DF8u;
    SET_GPR_U32(ctx, 31, 0x2E7E00u);
    ctx->pc = 0x2E7DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7DF8u;
            // 0x2e7dfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E00u; }
        if (ctx->pc != 0x2E7E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E00u; }
        if (ctx->pc != 0x2E7E00u) { return; }
    }
    ctx->pc = 0x2E7E00u;
label_2e7e00:
    // 0x2e7e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E0Cu;
            // 0x2e7e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7E14u;
}
