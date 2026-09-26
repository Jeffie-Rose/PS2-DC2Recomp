#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_OUTSIDE__FP12RS_STACKDATAi
// Address: 0x262da0 - 0x262e2c
void ps2__GOTO_OUTSIDE__FP12RS_STACKDATAi_0x262da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_OUTSIDE__FP12RS_STACKDATAi_0x262da0");
#endif

    switch (ctx->pc) {
        case 0x262dbcu: goto label_262dbc;
        case 0x262dd0u: goto label_262dd0;
        case 0x262de0u: goto label_262de0;
        case 0x262df4u: goto label_262df4;
        default: break;
    }

    ctx->pc = 0x262da0u;

    // 0x262da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262da4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262db0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x262db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x262db4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x262DB4u;
    SET_GPR_U32(ctx, 31, 0x262DBCu);
    ctx->pc = 0x262DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262DB4u;
            // 0x262db8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262DBCu; }
        if (ctx->pc != 0x262DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262DBCu; }
        if (ctx->pc != 0x262DBCu) { return; }
    }
    ctx->pc = 0x262DBCu;
label_262dbc:
    // 0x262dbc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262dc4: 0xac22e494  sw          $v0, -0x1B6C($at)
    ctx->pc = 0x262dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960276), GPR_U32(ctx, 2));
    // 0x262dc8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x262DC8u;
    SET_GPR_U32(ctx, 31, 0x262DD0u);
    ctx->pc = 0x262DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262DC8u;
            // 0x262dcc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262DD0u; }
        if (ctx->pc != 0x262DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262DD0u; }
        if (ctx->pc != 0x262DD0u) { return; }
    }
    ctx->pc = 0x262DD0u;
label_262dd0:
    // 0x262dd0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x262dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x262dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x262dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262dd8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x262DD8u;
    SET_GPR_U32(ctx, 31, 0x262DE0u);
    ctx->pc = 0x262DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262DD8u;
            // 0x262ddc: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262DE0u; }
        if (ctx->pc != 0x262DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262DE0u; }
        if (ctx->pc != 0x262DE0u) { return; }
    }
    ctx->pc = 0x262DE0u;
label_262de0:
    // 0x262de0: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x262de0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x262de4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x262DE4u;
    {
        const bool branch_taken_0x262de4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x262DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262DE4u;
            // 0x262de8: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262de4) {
            ctx->pc = 0x262E00u;
            goto label_262e00;
        }
    }
    ctx->pc = 0x262DECu;
    // 0x262dec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x262DECu;
    SET_GPR_U32(ctx, 31, 0x262DF4u);
    ctx->pc = 0x262DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262DECu;
            // 0x262df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262DF4u; }
        if (ctx->pc != 0x262DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262DF4u; }
        if (ctx->pc != 0x262DF4u) { return; }
    }
    ctx->pc = 0x262DF4u;
label_262df4:
    // 0x262df4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262DF8u;
    {
        const bool branch_taken_0x262df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262DF8u;
            // 0x262dfc: 0xac22e4b8  sw          $v0, -0x1B48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262df8) {
            ctx->pc = 0x262E08u;
            goto label_262e08;
        }
    }
    ctx->pc = 0x262E00u;
label_262e00:
    // 0x262e00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262e04: 0xac22e4b8  sw          $v0, -0x1B48($at)
    ctx->pc = 0x262e04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
label_262e08:
    // 0x262e08: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x262e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x262e0c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262e10: 0xac23e4fc  sw          $v1, -0x1B04($at)
    ctx->pc = 0x262e10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 3));
    // 0x262e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262e18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262e1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262e24: 0x3e00008  jr          $ra
    ctx->pc = 0x262E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262E24u;
            // 0x262e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262E2Cu;
}
