#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckUse__11CItemSelectFP13CGameDataUsed
// Address: 0x24f3f0 - 0x24f46c
void CheckUse__11CItemSelectFP13CGameDataUsed_0x24f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckUse__11CItemSelectFP13CGameDataUsed_0x24f3f0");
#endif

    switch (ctx->pc) {
        case 0x24f420u: goto label_24f420;
        case 0x24f448u: goto label_24f448;
        default: break;
    }

    ctx->pc = 0x24f3f0u;

    // 0x24f3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24f3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24f3f4: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x24F3F4u;
    {
        const bool branch_taken_0x24f3f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F3F4u;
            // 0x24f3f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f3f4) {
            ctx->pc = 0x24F460u;
            goto label_24f460;
        }
    }
    ctx->pc = 0x24F3FCu;
    // 0x24f3fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f400: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x24f400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x24f404: 0x8c24d648  lw          $a0, -0x29B8($at)
    ctx->pc = 0x24f404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956616)));
    // 0x24f408: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24F408u;
    {
        const bool branch_taken_0x24f408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F408u;
            // 0x24f40c: 0x24c6d64c  addiu       $a2, $a2, -0x29B4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f408) {
            ctx->pc = 0x24F460u;
            goto label_24f460;
        }
    }
    ctx->pc = 0x24F410u;
    // 0x24f410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24f410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f414: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x24F414u;
    {
        const bool branch_taken_0x24f414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24F418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F414u;
            // 0x24f418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f414) {
            ctx->pc = 0x24F460u;
            goto label_24f460;
        }
    }
    ctx->pc = 0x24F41Cu;
    // 0x24f41c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24f41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f420:
    // 0x24f420: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x24f420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x24f424: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x24f424u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f428: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x24F428u;
    {
        const bool branch_taken_0x24f428 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x24f428) {
            ctx->pc = 0x24F460u;
            goto label_24f460;
        }
    }
    ctx->pc = 0x24F430u;
    // 0x24f430: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x24f430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24f434: 0x15030006  bne         $t0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24F434u;
    {
        const bool branch_taken_0x24f434 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x24f434) {
            ctx->pc = 0x24F450u;
            goto label_24f450;
        }
    }
    ctx->pc = 0x24F43Cu;
    // 0x24f43c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24f43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f440: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x24F440u;
    SET_GPR_U32(ctx, 31, 0x24F448u);
    ctx->pc = 0x24F444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24F440u;
            // 0x24f444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F448u; }
        if (ctx->pc != 0x24F448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F448u; }
        if (ctx->pc != 0x24F448u) { return; }
    }
    ctx->pc = 0x24F448u;
label_24f448:
    // 0x24f448: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24F448u;
    {
        const bool branch_taken_0x24f448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f448) {
            ctx->pc = 0x24F460u;
            goto label_24f460;
        }
    }
    ctx->pc = 0x24F450u;
label_24f450:
    // 0x24f450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24f450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24f454: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x24f454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x24f458: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x24F458u;
    {
        const bool branch_taken_0x24f458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F458u;
            // 0x24f45c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f458) {
            ctx->pc = 0x24F420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f420;
        }
    }
    ctx->pc = 0x24F460u;
label_24f460:
    // 0x24f460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f464: 0x3e00008  jr          $ra
    ctx->pc = 0x24F464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F464u;
            // 0x24f468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24F46Cu;
}
