#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAlpha__10mgCDrawEnvFi
// Address: 0x138970 - 0x1389e0
void SetAlpha__10mgCDrawEnvFi_0x138970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAlpha__10mgCDrawEnvFi_0x138970");
#endif

    ctx->pc = 0x138970u;

    // 0x138970: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x138970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x138974: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x138974u;
    {
        const bool branch_taken_0x138974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x138978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138974u;
            // 0x138978: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138974) {
            ctx->pc = 0x1389C4u;
            goto label_1389c4;
        }
    }
    ctx->pc = 0x13897Cu;
    // 0x13897c: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x13897Cu;
    {
        const bool branch_taken_0x13897c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x138980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13897Cu;
            // 0x138980: 0x24030042  addiu       $v1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13897c) {
            ctx->pc = 0x1389BCu;
            goto label_1389bc;
        }
    }
    ctx->pc = 0x138984u;
    // 0x138984: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x138984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138988: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x138988u;
    {
        const bool branch_taken_0x138988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x13898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138988u;
            // 0x13898c: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138988) {
            ctx->pc = 0x1389B4u;
            goto label_1389b4;
        }
    }
    ctx->pc = 0x138990u;
    // 0x138990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x138990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138994: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138994u;
    {
        const bool branch_taken_0x138994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x138998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138994u;
            // 0x138998: 0x24030044  addiu       $v1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138994) {
            ctx->pc = 0x1389ACu;
            goto label_1389ac;
        }
    }
    ctx->pc = 0x13899Cu;
    // 0x13899c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x13899Cu;
    {
        const bool branch_taken_0x13899c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13899c) {
            ctx->pc = 0x1389D8u;
            goto label_1389d8;
        }
    }
    ctx->pc = 0x1389A4u;
    // 0x1389a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1389A4u;
    {
        const bool branch_taken_0x1389a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1389a4) {
            ctx->pc = 0x1389D8u;
            goto label_1389d8;
        }
    }
    ctx->pc = 0x1389ACu;
label_1389ac:
    // 0x1389ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1389ACu;
    {
        const bool branch_taken_0x1389ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389ACu;
            // 0x1389b0: 0xfc830030  sd          $v1, 0x30($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389ac) {
            ctx->pc = 0x1389D8u;
            goto label_1389d8;
        }
    }
    ctx->pc = 0x1389B4u;
label_1389b4:
    // 0x1389b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1389B4u;
    {
        const bool branch_taken_0x1389b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389B4u;
            // 0x1389b8: 0xfc830030  sd          $v1, 0x30($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389b4) {
            ctx->pc = 0x1389D8u;
            goto label_1389d8;
        }
    }
    ctx->pc = 0x1389BCu;
label_1389bc:
    // 0x1389bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1389BCu;
    {
        const bool branch_taken_0x1389bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389BCu;
            // 0x1389c0: 0xfc830030  sd          $v1, 0x30($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389bc) {
            ctx->pc = 0x1389D8u;
            goto label_1389d8;
        }
    }
    ctx->pc = 0x1389C4u;
label_1389c4:
    // 0x1389c4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1389c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1389c8: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x1389c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1389cc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1389ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1389d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1389d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1389d4: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x1389d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
label_1389d8:
    // 0x1389d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1389D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1389E0u;
}
