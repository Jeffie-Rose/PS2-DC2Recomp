#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEmptySeSeq__FPi
// Address: 0x18cab0 - 0x18caf4
void GetEmptySeSeq__FPi_0x18cab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEmptySeSeq__FPi_0x18cab0");
#endif

    switch (ctx->pc) {
        case 0x18cac0u: goto label_18cac0;
        default: break;
    }

    ctx->pc = 0x18cab0u;

    // 0x18cab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cab4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18cab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cab8: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x18cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x18cabc: 0x24a56040  addiu       $a1, $a1, 0x6040
    ctx->pc = 0x18cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24640));
label_18cac0:
    // 0x18cac0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x18cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x18cac4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18cac8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CAC8u;
    {
        const bool branch_taken_0x18cac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cac8) {
            ctx->pc = 0x18CAD8u;
            goto label_18cad8;
        }
    }
    ctx->pc = 0x18CAD0u;
    // 0x18cad0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18CAD0u;
    {
        const bool branch_taken_0x18cad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAD0u;
            // 0x18cad4: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cad0) {
            ctx->pc = 0x18CAECu;
            goto label_18caec;
        }
    }
    ctx->pc = 0x18CAD8u;
label_18cad8:
    // 0x18cad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18cad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18cadc: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x18cadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18cae0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18CAE0u;
    {
        const bool branch_taken_0x18cae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CAE0u;
            // 0x18cae4: 0x24e700b0  addiu       $a3, $a3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cae0) {
            ctx->pc = 0x18CAC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18cac0;
        }
    }
    ctx->pc = 0x18CAE8u;
    // 0x18cae8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18cae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18caec:
    // 0x18caec: 0x3e00008  jr          $ra
    ctx->pc = 0x18CAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CAF4u;
}
