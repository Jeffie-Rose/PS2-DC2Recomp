#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearEffectFromLevel__16CEffectScriptManFi
// Address: 0x2e1340 - 0x2e13b0
void ClearEffectFromLevel__16CEffectScriptManFi_0x2e1340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearEffectFromLevel__16CEffectScriptManFi_0x2e1340");
#endif

    switch (ctx->pc) {
        case 0x2e1364u: goto label_2e1364;
        case 0x2e137cu: goto label_2e137c;
        default: break;
    }

    ctx->pc = 0x2e1340u;

    // 0x2e1340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e1340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e1344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e1344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e1348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e134c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1350: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e1350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1358: 0x8c901188  lw          $s0, 0x1188($a0)
    ctx->pc = 0x2e1358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4488)));
    // 0x2e135c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E135Cu;
    {
        const bool branch_taken_0x2e135c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E135Cu;
            // 0x2e1360: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e135c) {
            ctx->pc = 0x2E1398u;
            goto label_2e1398;
        }
    }
    ctx->pc = 0x2E1364u;
label_2e1364:
    // 0x2e1364: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2e1364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e1368: 0x14710006  bne         $v1, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1368u;
    {
        const bool branch_taken_0x2e1368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2E136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1368u;
            // 0x2e136c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1368) {
            ctx->pc = 0x2E1384u;
            goto label_2e1384;
        }
    }
    ctx->pc = 0x2E1370u;
    // 0x2e1370: 0x8e100144  lw          $s0, 0x144($s0)
    ctx->pc = 0x2e1370u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x2e1374: 0xc0b84ec  jal         func_2E13B0
    ctx->pc = 0x2E1374u;
    SET_GPR_U32(ctx, 31, 0x2E137Cu);
    ctx->pc = 0x2E1378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1374u;
            // 0x2e1378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E13B0u;
    if (runtime->hasFunction(0x2E13B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E137Cu; }
        if (ctx->pc != 0x2E137Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E137Cu; }
        if (ctx->pc != 0x2E137Cu) { return; }
    }
    ctx->pc = 0x2E137Cu;
label_2e137c:
    // 0x2e137c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E137Cu;
    {
        const bool branch_taken_0x2e137c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e137c) {
            ctx->pc = 0x2E1390u;
            goto label_2e1390;
        }
    }
    ctx->pc = 0x2E1384u;
label_2e1384:
    // 0x2e1384: 0x0  nop
    ctx->pc = 0x2e1384u;
    // NOP
    // 0x2e1388: 0x8e100144  lw          $s0, 0x144($s0)
    ctx->pc = 0x2e1388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x2e138c: 0x0  nop
    ctx->pc = 0x2e138cu;
    // NOP
label_2e1390:
    // 0x2e1390: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E1390u;
    {
        const bool branch_taken_0x2e1390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1390) {
            ctx->pc = 0x2E1364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1364;
        }
    }
    ctx->pc = 0x2E1398u;
label_2e1398:
    // 0x2e1398: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e1398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e139c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e139cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e13a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e13a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e13a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e13a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e13a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E13A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E13ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13A8u;
            // 0x2e13ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E13B0u;
}
