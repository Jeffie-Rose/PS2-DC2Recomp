#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAlbumPhotoInfo__13CDC2AlbumDataFi
// Address: 0x1fe840 - 0x1fe880
void GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840");
#endif

    ctx->pc = 0x1fe840u;

    // 0x1fe840: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE840u;
    {
        const bool branch_taken_0x1fe840 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FE844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE840u;
            // 0x1fe844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe840) {
            ctx->pc = 0x1FE858u;
            goto label_1fe858;
        }
    }
    ctx->pc = 0x1FE848u;
    // 0x1fe848: 0x28a20032  slti        $v0, $a1, 0x32
    ctx->pc = 0x1fe848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1fe84c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE84Cu;
    {
        const bool branch_taken_0x1fe84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE84Cu;
            // 0x1fe850: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe84c) {
            ctx->pc = 0x1FE860u;
            goto label_1fe860;
        }
    }
    ctx->pc = 0x1FE854u;
    // 0x1fe854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe858:
    // 0x1fe858: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE858u;
    {
        const bool branch_taken_0x1fe858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe858) {
            ctx->pc = 0x1FE878u;
            goto label_1fe878;
        }
    }
    ctx->pc = 0x1FE860u;
label_1fe860:
    // 0x1fe860: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x1fe860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x1fe864: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fe864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fe868: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1fe868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1fe86c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fe86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fe870: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fe870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fe874: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1fe874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1fe878:
    // 0x1fe878: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE880u;
}
