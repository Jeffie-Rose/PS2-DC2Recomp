#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: McCheckMCPs2Boot__FP12MC_CARD_INFOi
// Address: 0x2f53d0 - 0x2f5438
void McCheckMCPs2Boot__FP12MC_CARD_INFOi_0x2f53d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("McCheckMCPs2Boot__FP12MC_CARD_INFOi_0x2f53d0");
#endif

    ctx->pc = 0x2f53d0u;

    // 0x2f53d0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F53D0u;
    {
        const bool branch_taken_0x2f53d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F53D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F53D0u;
            // 0x2f53d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53d0) {
            ctx->pc = 0x2F53E0u;
            goto label_2f53e0;
        }
    }
    ctx->pc = 0x2F53D8u;
    // 0x2f53d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2F53D8u;
    {
        const bool branch_taken_0x2f53d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f53d8) {
            ctx->pc = 0x2F5430u;
            goto label_2f5430;
        }
    }
    ctx->pc = 0x2F53E0u;
label_2f53e0:
    // 0x2f53e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f53e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F53E4u;
    {
        const bool branch_taken_0x2f53e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F53E4u;
            // 0x2f53e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53e4) {
            ctx->pc = 0x2F5400u;
            goto label_2f5400;
        }
    }
    ctx->pc = 0x2F53ECu;
    // 0x2f53ec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f53f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f53f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F53F4u;
    {
        const bool branch_taken_0x2f53f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f53f4) {
            ctx->pc = 0x2F5408u;
            goto label_2f5408;
        }
    }
    ctx->pc = 0x2F53FCu;
    // 0x2f53fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f53fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5400:
    // 0x2f5400: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F5400u;
    {
        const bool branch_taken_0x2f5400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5400) {
            ctx->pc = 0x2F5430u;
            goto label_2f5430;
        }
    }
    ctx->pc = 0x2F5408u;
label_2f5408:
    // 0x2f5408: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2f5408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f540c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F540Cu;
    {
        const bool branch_taken_0x2f540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F540Cu;
            // 0x2f5410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f540c) {
            ctx->pc = 0x2F5430u;
            goto label_2f5430;
        }
    }
    ctx->pc = 0x2F5414u;
    // 0x2f5414: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2f5414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f5418: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x2f5418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f541c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F541Cu;
    {
        const bool branch_taken_0x2f541c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F541Cu;
            // 0x2f5420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f541c) {
            ctx->pc = 0x2F542Cu;
            goto label_2f542c;
        }
    }
    ctx->pc = 0x2F5424u;
    // 0x2f5424: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5424u;
    {
        const bool branch_taken_0x2f5424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5424) {
            ctx->pc = 0x2F5430u;
            goto label_2f5430;
        }
    }
    ctx->pc = 0x2F542Cu;
label_2f542c:
    // 0x2f542c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5430:
    // 0x2f5430: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5438u;
}
