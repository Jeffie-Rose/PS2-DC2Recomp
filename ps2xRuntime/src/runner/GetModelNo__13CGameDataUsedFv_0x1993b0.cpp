#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetModelNo__13CGameDataUsedFv
// Address: 0x1993b0 - 0x1993f0
void GetModelNo__13CGameDataUsedFv_0x1993b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetModelNo__13CGameDataUsedFv_0x1993b0");
#endif

    switch (ctx->pc) {
        case 0x1993d0u: goto label_1993d0;
        default: break;
    }

    ctx->pc = 0x1993b0u;

    // 0x1993b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1993b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1993b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1993b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1993b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1993b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1993bc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1993bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1993c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1993C0u;
    {
        const bool branch_taken_0x1993c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1993C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1993C0u;
            // 0x1993c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1993c0) {
            ctx->pc = 0x1993E4u;
            goto label_1993e4;
        }
    }
    ctx->pc = 0x1993C8u;
    // 0x1993c8: 0xc065710  jal         func_195C40
    ctx->pc = 0x1993C8u;
    SET_GPR_U32(ctx, 31, 0x1993D0u);
    ctx->pc = 0x1993CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1993C8u;
            // 0x1993cc: 0x84840002  lh          $a0, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993D0u; }
        if (ctx->pc != 0x1993D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993D0u; }
        if (ctx->pc != 0x1993D0u) { return; }
    }
    ctx->pc = 0x1993D0u;
label_1993d0:
    // 0x1993d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1993D0u;
    {
        const bool branch_taken_0x1993d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993d0) {
            ctx->pc = 0x1993E0u;
            goto label_1993e0;
        }
    }
    ctx->pc = 0x1993D8u;
    // 0x1993d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1993D8u;
    {
        const bool branch_taken_0x1993d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1993DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1993D8u;
            // 0x1993dc: 0x80420049  lb          $v0, 0x49($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 73)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1993d8) {
            ctx->pc = 0x1993E4u;
            goto label_1993e4;
        }
    }
    ctx->pc = 0x1993E0u;
label_1993e0:
    // 0x1993e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1993e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1993e4:
    // 0x1993e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1993e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1993e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1993E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1993ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1993E8u;
            // 0x1993ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1993F0u;
}
