#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SET_PAS_FRM__FP12RS_STACKDATAi
// Address: 0x270de0 - 0x270e38
void ps2__OBJS_SET_PAS_FRM__FP12RS_STACKDATAi_0x270de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SET_PAS_FRM__FP12RS_STACKDATAi_0x270de0");
#endif

    switch (ctx->pc) {
        case 0x270df4u: goto label_270df4;
        case 0x270e00u: goto label_270e00;
        case 0x270e0cu: goto label_270e0c;
        case 0x270e24u: goto label_270e24;
        default: break;
    }

    ctx->pc = 0x270de0u;

    // 0x270de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x270de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270dec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270DECu;
    SET_GPR_U32(ctx, 31, 0x270DF4u);
    ctx->pc = 0x270DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270DECu;
            // 0x270df0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DF4u; }
        if (ctx->pc != 0x270DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270DF4u; }
        if (ctx->pc != 0x270DF4u) { return; }
    }
    ctx->pc = 0x270DF4u;
label_270df4:
    // 0x270df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270df8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270DF8u;
    SET_GPR_U32(ctx, 31, 0x270E00u);
    ctx->pc = 0x270DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270DF8u;
            // 0x270dfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270E00u; }
        if (ctx->pc != 0x270E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270E00u; }
        if (ctx->pc != 0x270E00u) { return; }
    }
    ctx->pc = 0x270E00u;
label_270e00:
    // 0x270e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e04: 0xc098a44  jal         func_262910
    ctx->pc = 0x270E04u;
    SET_GPR_U32(ctx, 31, 0x270E0Cu);
    ctx->pc = 0x270E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270E04u;
            // 0x270e08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270E0Cu; }
        if (ctx->pc != 0x270E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270E0Cu; }
        if (ctx->pc != 0x270E0Cu) { return; }
    }
    ctx->pc = 0x270E0Cu;
label_270e0c:
    // 0x270e0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270E0Cu;
    {
        const bool branch_taken_0x270e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270E0Cu;
            // 0x270e10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e0c) {
            ctx->pc = 0x270E1Cu;
            goto label_270e1c;
        }
    }
    ctx->pc = 0x270E14u;
    // 0x270e14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270E14u;
    {
        const bool branch_taken_0x270e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270E14u;
            // 0x270e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e14) {
            ctx->pc = 0x270E28u;
            goto label_270e28;
        }
    }
    ctx->pc = 0x270E1Cu;
label_270e1c:
    // 0x270e1c: 0xc0972ac  jal         func_25CAB0
    ctx->pc = 0x270E1Cu;
    SET_GPR_U32(ctx, 31, 0x270E24u);
    ctx->pc = 0x25CAB0u;
    if (runtime->hasFunction(0x25CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x25CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270E24u; }
        if (ctx->pc != 0x270E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPasFrm__12CSceneObjSeqFi_0x25cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270E24u; }
        if (ctx->pc != 0x270E24u) { return; }
    }
    ctx->pc = 0x270E24u;
label_270e24:
    // 0x270e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270e28:
    // 0x270e28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270e30: 0x3e00008  jr          $ra
    ctx->pc = 0x270E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270E30u;
            // 0x270e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270E38u;
}
