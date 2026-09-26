#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_BGM__FP12RS_STACKDATAi
// Address: 0x272d90 - 0x272de0
void ps2__LOAD_BGM__FP12RS_STACKDATAi_0x272d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_BGM__FP12RS_STACKDATAi_0x272d90");
#endif

    switch (ctx->pc) {
        case 0x272da0u: goto label_272da0;
        case 0x272db0u: goto label_272db0;
        case 0x272dd0u: goto label_272dd0;
        default: break;
    }

    ctx->pc = 0x272d90u;

    // 0x272d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272d98: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272D98u;
    SET_GPR_U32(ctx, 31, 0x272DA0u);
    ctx->pc = 0x272D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272D98u;
            // 0x272d9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272DA0u; }
        if (ctx->pc != 0x272DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272DA0u; }
        if (ctx->pc != 0x272DA0u) { return; }
    }
    ctx->pc = 0x272DA0u;
label_272da0:
    // 0x272da0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x272da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x272da4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272da8: 0xc0a9ac4  jal         func_2A6B10
    ctx->pc = 0x272DA8u;
    SET_GPR_U32(ctx, 31, 0x272DB0u);
    ctx->pc = 0x272DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272DA8u;
            // 0x272dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B10u;
    if (runtime->hasFunction(0x2A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272DB0u; }
        if (ctx->pc != 0x272DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadBGM__6CSceneFi_0x2a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272DB0u; }
        if (ctx->pc != 0x272DB0u) { return; }
    }
    ctx->pc = 0x272DB0u;
label_272db0:
    // 0x272db0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272DB0u;
    {
        const bool branch_taken_0x272db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DB0u;
            // 0x272db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272db0) {
            ctx->pc = 0x272DC0u;
            goto label_272dc0;
        }
    }
    ctx->pc = 0x272DB8u;
    // 0x272db8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x272DB8u;
    {
        const bool branch_taken_0x272db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DB8u;
            // 0x272dbc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272db8) {
            ctx->pc = 0x272DD4u;
            goto label_272dd4;
        }
    }
    ctx->pc = 0x272DC0u;
label_272dc0:
    // 0x272dc0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x272dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x272dc4: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x272dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x272dc8: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x272DC8u;
    SET_GPR_U32(ctx, 31, 0x272DD0u);
    ctx->pc = 0x272DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272DC8u;
            // 0x272dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272DD0u; }
        if (ctx->pc != 0x272DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272DD0u; }
        if (ctx->pc != 0x272DD0u) { return; }
    }
    ctx->pc = 0x272DD0u;
label_272dd0:
    // 0x272dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_272dd4:
    // 0x272dd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x272DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DD8u;
            // 0x272ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272DE0u;
}
