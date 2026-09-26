#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUseableEsaNo__FPi
// Address: 0x20ca70 - 0x20caf4
void GetUseableEsaNo__FPi_0x20ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUseableEsaNo__FPi_0x20ca70");
#endif

    switch (ctx->pc) {
        case 0x20ca9cu: goto label_20ca9c;
        case 0x20cac8u: goto label_20cac8;
        default: break;
    }

    ctx->pc = 0x20ca70u;

    // 0x20ca70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20ca74: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x20ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x20ca78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20ca7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20ca7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20ca84: 0x2463f7b0  addiu       $v1, $v1, -0x850
    ctx->pc = 0x20ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965168));
    // 0x20ca88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ca8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20ca8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20ca90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ca94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20CA94u;
    {
        const bool branch_taken_0x20ca94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CA94u;
            // 0x20ca98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca94) {
            ctx->pc = 0x20CAACu;
            goto label_20caac;
        }
    }
    ctx->pc = 0x20CA9Cu;
label_20ca9c:
    // 0x20ca9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20ca9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x20caa0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x20caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x20caa4: 0x2484000a  addiu       $a0, $a0, 0xA
    ctx->pc = 0x20caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x20caa8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x20caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_20caac:
    // 0x20caac: 0x0  nop
    ctx->pc = 0x20caacu;
    // NOP
    // 0x20cab0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x20cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20cab4: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x20cab4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cab8: 0x1cc0fff8  bgtz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20CAB8u;
    {
        const bool branch_taken_0x20cab8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x20CABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CAB8u;
            // 0x20cabc: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cab8) {
            ctx->pc = 0x20CA9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20CAC0u;
    // 0x20cac0: 0xc0684dc  jal         func_1A1370
    ctx->pc = 0x20CAC0u;
    SET_GPR_U32(ctx, 31, 0x20CAC8u);
    ctx->pc = 0x20CAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CAC0u;
            // 0x20cac4: 0x24040168  addiu       $a0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAC8u; }
        if (ctx->pc != 0x20CAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CAC8u; }
        if (ctx->pc != 0x20CAC8u) { return; }
    }
    ctx->pc = 0x20CAC8u;
label_20cac8:
    // 0x20cac8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CAC8u;
    {
        const bool branch_taken_0x20cac8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x20CACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CAC8u;
            // 0x20cacc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cac8) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20CAD0u;
    // 0x20cad0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20cad4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x20cad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x20cad8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x20cad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x20cadc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20cadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20cae0:
    // 0x20cae0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20cae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20cae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20cae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20caec: 0x3e00008  jr          $ra
    ctx->pc = 0x20CAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CAECu;
            // 0x20caf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CAF4u;
}
