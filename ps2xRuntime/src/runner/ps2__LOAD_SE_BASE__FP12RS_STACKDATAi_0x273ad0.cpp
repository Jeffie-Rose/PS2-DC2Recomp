#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_SE_BASE__FP12RS_STACKDATAi
// Address: 0x273ad0 - 0x273b20
void ps2__LOAD_SE_BASE__FP12RS_STACKDATAi_0x273ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_SE_BASE__FP12RS_STACKDATAi_0x273ad0");
#endif

    switch (ctx->pc) {
        case 0x273ae0u: goto label_273ae0;
        case 0x273af0u: goto label_273af0;
        case 0x273b10u: goto label_273b10;
        default: break;
    }

    ctx->pc = 0x273ad0u;

    // 0x273ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273ad8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273AD8u;
    SET_GPR_U32(ctx, 31, 0x273AE0u);
    ctx->pc = 0x273ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273AD8u;
            // 0x273adc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AE0u; }
        if (ctx->pc != 0x273AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AE0u; }
        if (ctx->pc != 0x273AE0u) { return; }
    }
    ctx->pc = 0x273AE0u;
label_273ae0:
    // 0x273ae0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ae8: 0xc0a9b00  jal         func_2A6C00
    ctx->pc = 0x273AE8u;
    SET_GPR_U32(ctx, 31, 0x273AF0u);
    ctx->pc = 0x273AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273AE8u;
            // 0x273aec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6C00u;
    if (runtime->hasFunction(0x2A6C00u)) {
        auto targetFn = runtime->lookupFunction(0x2A6C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AF0u; }
        if (ctx->pc != 0x273AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadSeBase__6CSceneFi_0x2a6c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AF0u; }
        if (ctx->pc != 0x273AF0u) { return; }
    }
    ctx->pc = 0x273AF0u;
label_273af0:
    // 0x273af0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273AF0u;
    {
        const bool branch_taken_0x273af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273AF0u;
            // 0x273af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273af0) {
            ctx->pc = 0x273B00u;
            goto label_273b00;
        }
    }
    ctx->pc = 0x273AF8u;
    // 0x273af8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x273AF8u;
    {
        const bool branch_taken_0x273af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273AF8u;
            // 0x273afc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273af8) {
            ctx->pc = 0x273B14u;
            goto label_273b14;
        }
    }
    ctx->pc = 0x273B00u;
label_273b00:
    // 0x273b00: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273b04: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x273b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x273b08: 0xc0a9c80  jal         func_2A7200
    ctx->pc = 0x273B08u;
    SET_GPR_U32(ctx, 31, 0x273B10u);
    ctx->pc = 0x273B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273B08u;
            // 0x273b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7200u;
    if (runtime->hasFunction(0x2A7200u)) {
        auto targetFn = runtime->lookupFunction(0x2A7200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B10u; }
        if (ctx->pc != 0x273B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeBase__6CSceneFiP1_0x2a7200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B10u; }
        if (ctx->pc != 0x273B10u) { return; }
    }
    ctx->pc = 0x273B10u;
label_273b10:
    // 0x273b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_273b14:
    // 0x273b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273b18: 0x3e00008  jr          $ra
    ctx->pc = 0x273B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B18u;
            // 0x273b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273B20u;
}
