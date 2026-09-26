#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMaterial__9CMapPieceFi
// Address: 0x168630 - 0x168674
void GetMaterial__9CMapPieceFi_0x168630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMaterial__9CMapPieceFi_0x168630");
#endif

    ctx->pc = 0x168630u;

    // 0x168630: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x168630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x168634: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168634u;
    {
        const bool branch_taken_0x168634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168634u;
            // 0x168638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168634) {
            ctx->pc = 0x168644u;
            goto label_168644;
        }
    }
    ctx->pc = 0x16863Cu;
    // 0x16863c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16863Cu;
    {
        const bool branch_taken_0x16863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16863c) {
            ctx->pc = 0x16866Cu;
            goto label_16866c;
        }
    }
    ctx->pc = 0x168644u;
label_168644:
    // 0x168644: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x168644u;
    {
        const bool branch_taken_0x168644 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x168648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168644u;
            // 0x168648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168644) {
            ctx->pc = 0x168660u;
            goto label_168660;
        }
    }
    ctx->pc = 0x16864Cu;
    // 0x16864c: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x16864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x168650: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x168650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168654: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168654u;
    {
        const bool branch_taken_0x168654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168654u;
            // 0x168658: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168654) {
            ctx->pc = 0x168668u;
            goto label_168668;
        }
    }
    ctx->pc = 0x16865Cu;
    // 0x16865c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16865cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168660:
    // 0x168660: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x168660u;
    {
        const bool branch_taken_0x168660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168660) {
            ctx->pc = 0x16866Cu;
            goto label_16866c;
        }
    }
    ctx->pc = 0x168668u;
label_168668:
    // 0x168668: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16866c:
    // 0x16866c: 0x3e00008  jr          $ra
    ctx->pc = 0x16866Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168674u;
}
