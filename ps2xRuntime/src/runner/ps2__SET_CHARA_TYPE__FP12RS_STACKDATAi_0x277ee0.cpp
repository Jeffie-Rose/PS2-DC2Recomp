#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_TYPE__FP12RS_STACKDATAi
// Address: 0x277ee0 - 0x277f28
void ps2__SET_CHARA_TYPE__FP12RS_STACKDATAi_0x277ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_TYPE__FP12RS_STACKDATAi_0x277ee0");
#endif

    switch (ctx->pc) {
        case 0x277ef4u: goto label_277ef4;
        case 0x277f00u: goto label_277f00;
        case 0x277f14u: goto label_277f14;
        default: break;
    }

    ctx->pc = 0x277ee0u;

    // 0x277ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x277ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x277ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x277eec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277EECu;
    SET_GPR_U32(ctx, 31, 0x277EF4u);
    ctx->pc = 0x277EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277EECu;
            // 0x277ef0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277EF4u; }
        if (ctx->pc != 0x277EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277EF4u; }
        if (ctx->pc != 0x277EF4u) { return; }
    }
    ctx->pc = 0x277EF4u;
label_277ef4:
    // 0x277ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ef8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277EF8u;
    SET_GPR_U32(ctx, 31, 0x277F00u);
    ctx->pc = 0x277EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277EF8u;
            // 0x277efc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F00u; }
        if (ctx->pc != 0x277F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F00u; }
        if (ctx->pc != 0x277F00u) { return; }
    }
    ctx->pc = 0x277F00u;
label_277f00:
    // 0x277f00: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x277f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x277f04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x277f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x277f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f0c: 0xc0a11fc  jal         func_2847F0
    ctx->pc = 0x277F0Cu;
    SET_GPR_U32(ctx, 31, 0x277F14u);
    ctx->pc = 0x277F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F0Cu;
            // 0x277f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2847F0u;
    if (runtime->hasFunction(0x2847F0u)) {
        auto targetFn = runtime->lookupFunction(0x2847F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F14u; }
        if (ctx->pc != 0x277F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetType__6CSceneFiii_0x2847f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F14u; }
        if (ctx->pc != 0x277F14u) { return; }
    }
    ctx->pc = 0x277F14u;
label_277f14:
    // 0x277f14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x277f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277f20: 0x3e00008  jr          $ra
    ctx->pc = 0x277F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F20u;
            // 0x277f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277F28u;
}
