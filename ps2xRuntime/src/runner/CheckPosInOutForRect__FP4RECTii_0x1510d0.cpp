#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckPosInOutForRect__FP4RECTii
// Address: 0x1510d0 - 0x151134
void CheckPosInOutForRect__FP4RECTii_0x1510d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckPosInOutForRect__FP4RECTii_0x1510d0");
#endif

    ctx->pc = 0x1510d0u;

    // 0x1510d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1510d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1510d4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1510d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1510d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1510D8u;
    {
        const bool branch_taken_0x1510d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1510D8u;
            // 0x1510dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510d8) {
            ctx->pc = 0x1510E8u;
            goto label_1510e8;
        }
    }
    ctx->pc = 0x1510E0u;
    // 0x1510e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1510E0u;
    {
        const bool branch_taken_0x1510e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510e0) {
            ctx->pc = 0x15112Cu;
            goto label_15112c;
        }
    }
    ctx->pc = 0x1510E8u;
label_1510e8:
    // 0x1510e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1510e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1510ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1510ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1510f0: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x1510f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1510f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1510F4u;
    {
        const bool branch_taken_0x1510f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1510F4u;
            // 0x1510f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510f4) {
            ctx->pc = 0x151104u;
            goto label_151104;
        }
    }
    ctx->pc = 0x1510FCu;
    // 0x1510fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1510FCu;
    {
        const bool branch_taken_0x1510fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510fc) {
            ctx->pc = 0x15112Cu;
            goto label_15112c;
        }
    }
    ctx->pc = 0x151104u;
label_151104:
    // 0x151104: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x151104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x151108: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x151108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15110c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15110Cu;
    {
        const bool branch_taken_0x15110c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x151110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15110Cu;
            // 0x151110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15110c) {
            ctx->pc = 0x15111Cu;
            goto label_15111c;
        }
    }
    ctx->pc = 0x151114u;
    // 0x151114: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x151114u;
    {
        const bool branch_taken_0x151114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151114) {
            ctx->pc = 0x15112Cu;
            goto label_15112c;
        }
    }
    ctx->pc = 0x15111Cu;
label_15111c:
    // 0x15111c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x15111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x151120: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151124: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x151124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x151128: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x151128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15112c:
    // 0x15112c: 0x3e00008  jr          $ra
    ctx->pc = 0x15112Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151134u;
}
