#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcCenteringXY__6ClsMesFPiPi
// Address: 0x15aff0 - 0x15b07c
void CalcCenteringXY__6ClsMesFPiPi_0x15aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcCenteringXY__6ClsMesFPiPi_0x15aff0");
#endif

    ctx->pc = 0x15aff0u;

    // 0x15aff0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x15aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x15aff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15aff8: 0x8c870130  lw          $a3, 0x130($a0)
    ctx->pc = 0x15aff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x15affc: 0x14e3000b  bne         $a3, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15AFFCu;
    {
        const bool branch_taken_0x15affc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x15affc) {
            ctx->pc = 0x15B02Cu;
            goto label_15b02c;
        }
    }
    ctx->pc = 0x15B004u;
    // 0x15b004: 0x8c8700d8  lw          $a3, 0xD8($a0)
    ctx->pc = 0x15b004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x15b008: 0x28e1002d  slti        $at, $a3, 0x2D
    ctx->pc = 0x15b008u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x15b00c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B00Cu;
    {
        const bool branch_taken_0x15b00c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B00Cu;
            // 0x15b010: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b00c) {
            ctx->pc = 0x15B02Cu;
            goto label_15b02c;
        }
    }
    ctx->pc = 0x15B014u;
    // 0x15b014: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x15b014u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x15b018: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B018u;
    {
        const bool branch_taken_0x15b018 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x15B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B018u;
            // 0x15b01c: 0x71843  sra         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b018) {
            ctx->pc = 0x15B028u;
            goto label_15b028;
        }
    }
    ctx->pc = 0x15B020u;
    // 0x15b020: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x15b020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15b024: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x15b024u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_15b028:
    // 0x15b028: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15b028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_15b02c:
    // 0x15b02c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x15b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x15b030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b034: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x15b034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x15b038: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15B038u;
    {
        const bool branch_taken_0x15b038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15b038) {
            ctx->pc = 0x15B074u;
            goto label_15b074;
        }
    }
    ctx->pc = 0x15B040u;
    // 0x15b040: 0x8c8317f8  lw          $v1, 0x17F8($a0)
    ctx->pc = 0x15b040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6136)));
    // 0x15b044: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x15B044u;
    {
        const bool branch_taken_0x15b044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b044) {
            ctx->pc = 0x15B074u;
            goto label_15b074;
        }
    }
    ctx->pc = 0x15B04Cu;
    // 0x15b04c: 0x8c8700d0  lw          $a3, 0xD0($a0)
    ctx->pc = 0x15b04cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x15b050: 0x8c8500c4  lw          $a1, 0xC4($a0)
    ctx->pc = 0x15b050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x15b054: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x15b054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x15b058: 0xe52018  mult        $a0, $a3, $a1
    ctx->pc = 0x15b058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15b05c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x15b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b060: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B060u;
    {
        const bool branch_taken_0x15b060 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15B064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B060u;
            // 0x15b064: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b060) {
            ctx->pc = 0x15B070u;
            goto label_15b070;
        }
    }
    ctx->pc = 0x15B068u;
    // 0x15b068: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x15b068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15b06c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x15b06cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_15b070:
    // 0x15b070: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x15b070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_15b074:
    // 0x15b074: 0x3e00008  jr          $ra
    ctx->pc = 0x15B074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B07Cu;
}
