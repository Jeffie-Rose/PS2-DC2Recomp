#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetName__18CEventSpriteMotherFiPc
// Address: 0x290670 - 0x2906b4
void SetName__18CEventSpriteMotherFiPc_0x290670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetName__18CEventSpriteMotherFiPc_0x290670");
#endif

    switch (ctx->pc) {
        case 0x2906a4u: goto label_2906a4;
        default: break;
    }

    ctx->pc = 0x290670u;

    // 0x290670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290674: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290674u;
    {
        const bool branch_taken_0x290674 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x290678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290674u;
            // 0x290678: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290674) {
            ctx->pc = 0x290688u;
            goto label_290688;
        }
    }
    ctx->pc = 0x29067Cu;
    // 0x29067c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x29067cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x290680: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290680u;
    {
        const bool branch_taken_0x290680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290680u;
            // 0x290684: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290680) {
            ctx->pc = 0x290690u;
            goto label_290690;
        }
    }
    ctx->pc = 0x290688u;
label_290688:
    // 0x290688: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290688u;
    {
        const bool branch_taken_0x290688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29068Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290688u;
            // 0x29068c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290688) {
            ctx->pc = 0x2906A8u;
            goto label_2906a8;
        }
    }
    ctx->pc = 0x290690u;
label_290690:
    // 0x290690: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x290690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x290694: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x290694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x290698: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x290698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29069c: 0xc0a408c  jal         func_290230
    ctx->pc = 0x29069Cu;
    SET_GPR_U32(ctx, 31, 0x2906A4u);
    ctx->pc = 0x2906A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29069Cu;
            // 0x2906a0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (runtime->hasFunction(0x290230u)) {
        auto targetFn = runtime->lookupFunction(0x290230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2906A4u; }
        if (ctx->pc != 0x2906A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__12CEventSpriteFPc_0x290230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2906A4u; }
        if (ctx->pc != 0x2906A4u) { return; }
    }
    ctx->pc = 0x2906A4u;
label_2906a4:
    // 0x2906a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2906a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2906a8:
    // 0x2906a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2906a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2906ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2906ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2906B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906ACu;
            // 0x2906b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2906B4u;
}
