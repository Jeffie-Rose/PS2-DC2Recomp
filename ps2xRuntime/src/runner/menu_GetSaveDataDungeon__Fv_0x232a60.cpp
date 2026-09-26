#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: menu_GetSaveDataDungeon__Fv
// Address: 0x232a60 - 0x232a94
void menu_GetSaveDataDungeon__Fv_0x232a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menu_GetSaveDataDungeon__Fv_0x232a60");
#endif

    switch (ctx->pc) {
        case 0x232a70u: goto label_232a70;
        default: break;
    }

    ctx->pc = 0x232a60u;

    // 0x232a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232a68: 0xc064220  jal         func_190880
    ctx->pc = 0x232A68u;
    SET_GPR_U32(ctx, 31, 0x232A70u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232A70u; }
        if (ctx->pc != 0x232A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232A70u; }
        if (ctx->pc != 0x232A70u) { return; }
    }
    ctx->pc = 0x232A70u;
label_232a70:
    // 0x232a70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232A70u;
    {
        const bool branch_taken_0x232a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A70u;
            // 0x232a74: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a70) {
            ctx->pc = 0x232A84u;
            goto label_232a84;
        }
    }
    ctx->pc = 0x232A78u;
    // 0x232a78: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x232a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x232a7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x232A7Cu;
    {
        const bool branch_taken_0x232a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A7Cu;
            // 0x232a80: 0x411021  addu        $v0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a7c) {
            ctx->pc = 0x232A88u;
            goto label_232a88;
        }
    }
    ctx->pc = 0x232A84u;
label_232a84:
    // 0x232a84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232a88:
    // 0x232a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x232A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A8Cu;
            // 0x232a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232A94u;
}
