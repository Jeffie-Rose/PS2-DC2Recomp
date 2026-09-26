#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowViewModeMax__12CMenuGeoramaFi
// Address: 0x1f9d50 - 0x1f9db4
void GetNowViewModeMax__12CMenuGeoramaFi_0x1f9d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowViewModeMax__12CMenuGeoramaFi_0x1f9d50");
#endif

    ctx->pc = 0x1f9d50u;

    // 0x1f9d50: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f9d54: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F9D54u;
    {
        const bool branch_taken_0x1f9d54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D54u;
            // 0x1f9d58: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d54) {
            ctx->pc = 0x1F9DA4u;
            goto label_1f9da4;
        }
    }
    ctx->pc = 0x1F9D5Cu;
    // 0x1f9d5c: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F9D5Cu;
    {
        const bool branch_taken_0x1f9d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D5Cu;
            // 0x1f9d60: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d5c) {
            ctx->pc = 0x1F9D98u;
            goto label_1f9d98;
        }
    }
    ctx->pc = 0x1F9D64u;
    // 0x1f9d64: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9D64u;
    {
        const bool branch_taken_0x1f9d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D64u;
            // 0x1f9d68: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d64) {
            ctx->pc = 0x1F9D8Cu;
            goto label_1f9d8c;
        }
    }
    ctx->pc = 0x1F9D6Cu;
    // 0x1f9d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9d70: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9D70u;
    {
        const bool branch_taken_0x1f9d70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D70u;
            // 0x1f9d74: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d70) {
            ctx->pc = 0x1F9D80u;
            goto label_1f9d80;
        }
    }
    ctx->pc = 0x1F9D78u;
    // 0x1f9d78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F9D78u;
    {
        const bool branch_taken_0x1f9d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D78u;
            // 0x1f9d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d78) {
            ctx->pc = 0x1F9DACu;
            goto label_1f9dac;
        }
    }
    ctx->pc = 0x1F9D80u;
label_1f9d80:
    // 0x1f9d80: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f9d80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f9d84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9D84u;
    {
        const bool branch_taken_0x1f9d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D84u;
            // 0x1f9d88: 0x8c22bbb8  lw          $v0, -0x4448($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d84) {
            ctx->pc = 0x1F9DACu;
            goto label_1f9dac;
        }
    }
    ctx->pc = 0x1F9D8Cu;
label_1f9d8c:
    // 0x1f9d8c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f9d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f9d90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9D90u;
    {
        const bool branch_taken_0x1f9d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D90u;
            // 0x1f9d94: 0x8c220fbc  lw          $v0, 0xFBC($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d90) {
            ctx->pc = 0x1F9DACu;
            goto label_1f9dac;
        }
    }
    ctx->pc = 0x1F9D98u;
label_1f9d98:
    // 0x1f9d98: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1f9d98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1f9d9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9D9Cu;
    {
        const bool branch_taken_0x1f9d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D9Cu;
            // 0x1f9da0: 0x8c2263c0  lw          $v0, 0x63C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d9c) {
            ctx->pc = 0x1F9DACu;
            goto label_1f9dac;
        }
    }
    ctx->pc = 0x1F9DA4u;
label_1f9da4:
    // 0x1f9da4: 0x87829018  lh          $v0, -0x6FE8($gp)
    ctx->pc = 0x1f9da4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938648)));
    // 0x1f9da8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f9dac:
    // 0x1f9dac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9DB4u;
}
