#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_SET_WEATHER__FP12RS_STACKDATAi
// Address: 0x27ccb0 - 0x27cd1c
void ps2__DNG_SET_WEATHER__FP12RS_STACKDATAi_0x27ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_SET_WEATHER__FP12RS_STACKDATAi_0x27ccb0");
#endif

    switch (ctx->pc) {
        case 0x27ccdcu: goto label_27ccdc;
        case 0x27ccf4u: goto label_27ccf4;
        case 0x27cd08u: goto label_27cd08;
        default: break;
    }

    ctx->pc = 0x27ccb0u;

    // 0x27ccb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ccb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27ccb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ccbc: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27ccc0: 0x24502f90  addiu       $s0, $v0, 0x2F90
    ctx->pc = 0x27ccc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x27ccc4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CCC4u;
    {
        const bool branch_taken_0x27ccc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCC4u;
            // 0x27ccc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccc4) {
            ctx->pc = 0x27CCD4u;
            goto label_27ccd4;
        }
    }
    ctx->pc = 0x27CCCCu;
    // 0x27cccc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27CCCCu;
    {
        const bool branch_taken_0x27cccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCCCu;
            // 0x27ccd0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cccc) {
            ctx->pc = 0x27CD10u;
            goto label_27cd10;
        }
    }
    ctx->pc = 0x27CCD4u;
label_27ccd4:
    // 0x27ccd4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CCD4u;
    SET_GPR_U32(ctx, 31, 0x27CCDCu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCDCu; }
        if (ctx->pc != 0x27CCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCDCu; }
        if (ctx->pc != 0x27CCDCu) { return; }
    }
    ctx->pc = 0x27CCDCu;
label_27ccdc:
    // 0x27ccdc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27cce0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CCE0u;
    {
        const bool branch_taken_0x27cce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27CCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCE0u;
            // 0x27cce4: 0xa202008c  sb          $v0, 0x8C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cce0) {
            ctx->pc = 0x27CCFCu;
            goto label_27ccfc;
        }
    }
    ctx->pc = 0x27CCE8u;
    // 0x27cce8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27ccec: 0xc0a9a0c  jal         func_2A6830
    ctx->pc = 0x27CCECu;
    SET_GPR_U32(ctx, 31, 0x27CCF4u);
    ctx->pc = 0x27CCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCECu;
            // 0x27ccf0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6830u;
    if (runtime->hasFunction(0x2A6830u)) {
        auto targetFn = runtime->lookupFunction(0x2A6830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCF4u; }
        if (ctx->pc != 0x27CCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoChangeEnvOffset__6CSceneFi_0x2a6830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CCF4u; }
        if (ctx->pc != 0x27CCF4u) { return; }
    }
    ctx->pc = 0x27CCF4u;
label_27ccf4:
    // 0x27ccf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27CCF4u;
    {
        const bool branch_taken_0x27ccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CCF4u;
            // 0x27ccf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ccf4) {
            ctx->pc = 0x27CD0Cu;
            goto label_27cd0c;
        }
    }
    ctx->pc = 0x27CCFCu;
label_27ccfc:
    // 0x27ccfc: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27cd00: 0xc0a9a0c  jal         func_2A6830
    ctx->pc = 0x27CD00u;
    SET_GPR_U32(ctx, 31, 0x27CD08u);
    ctx->pc = 0x27CD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD00u;
            // 0x27cd04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6830u;
    if (runtime->hasFunction(0x2A6830u)) {
        auto targetFn = runtime->lookupFunction(0x2A6830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD08u; }
        if (ctx->pc != 0x27CD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoChangeEnvOffset__6CSceneFi_0x2a6830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CD08u; }
        if (ctx->pc != 0x27CD08u) { return; }
    }
    ctx->pc = 0x27CD08u;
label_27cd08:
    // 0x27cd08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cd0c:
    // 0x27cd0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27cd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27cd10:
    // 0x27cd10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27cd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cd14: 0x3e00008  jr          $ra
    ctx->pc = 0x27CD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD14u;
            // 0x27cd18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27CD1Cu;
}
