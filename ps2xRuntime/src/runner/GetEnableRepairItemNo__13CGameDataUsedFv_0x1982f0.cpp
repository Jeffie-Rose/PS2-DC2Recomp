#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEnableRepairItemNo__13CGameDataUsedFv
// Address: 0x1982f0 - 0x198358
void GetEnableRepairItemNo__13CGameDataUsedFv_0x1982f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEnableRepairItemNo__13CGameDataUsedFv_0x1982f0");
#endif

    ctx->pc = 0x1982f0u;

    // 0x1982f0: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x1982f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1982f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1982f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1982f8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1982F8u;
    {
        const bool branch_taken_0x1982f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1982FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1982F8u;
            // 0x1982fc: 0x24020126  addiu       $v0, $zero, 0x126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982f8) {
            ctx->pc = 0x198318u;
            goto label_198318;
        }
    }
    ctx->pc = 0x198300u;
    // 0x198300: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x198300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198304: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198304u;
    {
        const bool branch_taken_0x198304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198304u;
            // 0x198308: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198304) {
            ctx->pc = 0x198314u;
            goto label_198314;
        }
    }
    ctx->pc = 0x19830Cu;
    // 0x19830c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19830Cu;
    {
        const bool branch_taken_0x19830c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19830Cu;
            // 0x198310: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19830c) {
            ctx->pc = 0x198320u;
            goto label_198320;
        }
    }
    ctx->pc = 0x198314u;
label_198314:
    // 0x198314: 0x24020126  addiu       $v0, $zero, 0x126
    ctx->pc = 0x198314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_198318:
    // 0x198318: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x198318u;
    {
        const bool branch_taken_0x198318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198318) {
            ctx->pc = 0x198350u;
            goto label_198350;
        }
    }
    ctx->pc = 0x198320u;
label_198320:
    // 0x198320: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198320u;
    {
        const bool branch_taken_0x198320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198320u;
            // 0x198324: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198320) {
            ctx->pc = 0x198330u;
            goto label_198330;
        }
    }
    ctx->pc = 0x198328u;
    // 0x198328: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x198328u;
    {
        const bool branch_taken_0x198328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198328u;
            // 0x19832c: 0x2402012a  addiu       $v0, $zero, 0x12A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198328) {
            ctx->pc = 0x198350u;
            goto label_198350;
        }
    }
    ctx->pc = 0x198330u;
label_198330:
    // 0x198330: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198330u;
    {
        const bool branch_taken_0x198330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198330u;
            // 0x198334: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198330) {
            ctx->pc = 0x198340u;
            goto label_198340;
        }
    }
    ctx->pc = 0x198338u;
    // 0x198338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x198338u;
    {
        const bool branch_taken_0x198338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19833Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198338u;
            // 0x19833c: 0x24020160  addiu       $v0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198338) {
            ctx->pc = 0x198350u;
            goto label_198350;
        }
    }
    ctx->pc = 0x198340u;
label_198340:
    // 0x198340: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198340u;
    {
        const bool branch_taken_0x198340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198340u;
            // 0x198344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198340) {
            ctx->pc = 0x198350u;
            goto label_198350;
        }
    }
    ctx->pc = 0x198348u;
    // 0x198348: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x198348u;
    {
        const bool branch_taken_0x198348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19834Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198348u;
            // 0x19834c: 0x2402017d  addiu       $v0, $zero, 0x17D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198348) {
            ctx->pc = 0x198350u;
            goto label_198350;
        }
    }
    ctx->pc = 0x198350u;
label_198350:
    // 0x198350: 0x3e00008  jr          $ra
    ctx->pc = 0x198350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198358u;
}
