#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: search_txt_jis__FPc
// Address: 0x30add0 - 0x30ae28
void search_txt_jis__FPc_0x30add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("search_txt_jis__FPc_0x30add0");
#endif

    switch (ctx->pc) {
        case 0x30ade4u: goto label_30ade4;
        default: break;
    }

    ctx->pc = 0x30add0u;

    // 0x30add0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30add0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30add4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30add4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30add8: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x30add8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30addc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x30addcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x30ade0: 0x24c6e270  addiu       $a2, $a2, -0x1D90
    ctx->pc = 0x30ade0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959728));
label_30ade4:
    // 0x30ade4: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x30ade4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x30ade8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x30ade8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30adec: 0x14e30007  bne         $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30ADECu;
    {
        const bool branch_taken_0x30adec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x30adec) {
            ctx->pc = 0x30AE0Cu;
            goto label_30ae0c;
        }
    }
    ctx->pc = 0x30ADF4u;
    // 0x30adf4: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x30adf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x30adf8: 0x80850001  lb          $a1, 0x1($a0)
    ctx->pc = 0x30adf8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x30adfc: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30ADFCu;
    {
        const bool branch_taken_0x30adfc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x30adfc) {
            ctx->pc = 0x30AE0Cu;
            goto label_30ae0c;
        }
    }
    ctx->pc = 0x30AE04u;
    // 0x30ae04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30AE04u;
    {
        const bool branch_taken_0x30ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ae04) {
            ctx->pc = 0x30AE20u;
            goto label_30ae20;
        }
    }
    ctx->pc = 0x30AE0Cu;
label_30ae0c:
    // 0x30ae0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30ae10: 0x2843003a  slti        $v1, $v0, 0x3A
    ctx->pc = 0x30ae10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x30ae14: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x30AE14u;
    {
        const bool branch_taken_0x30ae14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE14u;
            // 0x30ae18: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae14) {
            ctx->pc = 0x30ADE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ade4;
        }
    }
    ctx->pc = 0x30AE1Cu;
    // 0x30ae1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30ae20:
    // 0x30ae20: 0x3e00008  jr          $ra
    ctx->pc = 0x30AE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AE28u;
}
