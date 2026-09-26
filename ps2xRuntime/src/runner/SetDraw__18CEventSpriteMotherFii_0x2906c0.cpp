#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDraw__18CEventSpriteMotherFii
// Address: 0x2906c0 - 0x290704
void SetDraw__18CEventSpriteMotherFii_0x2906c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDraw__18CEventSpriteMotherFii_0x2906c0");
#endif

    switch (ctx->pc) {
        case 0x2906f4u: goto label_2906f4;
        default: break;
    }

    ctx->pc = 0x2906c0u;

    // 0x2906c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2906c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2906c4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2906C4u;
    {
        const bool branch_taken_0x2906c4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2906C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906C4u;
            // 0x2906c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906c4) {
            ctx->pc = 0x2906D8u;
            goto label_2906d8;
        }
    }
    ctx->pc = 0x2906CCu;
    // 0x2906cc: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2906ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2906d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2906D0u;
    {
        const bool branch_taken_0x2906d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2906D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906D0u;
            // 0x2906d4: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906d0) {
            ctx->pc = 0x2906E0u;
            goto label_2906e0;
        }
    }
    ctx->pc = 0x2906D8u;
label_2906d8:
    // 0x2906d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2906D8u;
    {
        const bool branch_taken_0x2906d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2906DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906D8u;
            // 0x2906dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906d8) {
            ctx->pc = 0x2906F8u;
            goto label_2906f8;
        }
    }
    ctx->pc = 0x2906E0u;
label_2906e0:
    // 0x2906e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2906e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2906e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2906e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2906e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2906e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906ec: 0xc0a4090  jal         func_290240
    ctx->pc = 0x2906ECu;
    SET_GPR_U32(ctx, 31, 0x2906F4u);
    ctx->pc = 0x2906F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2906ECu;
            // 0x2906f0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290240u;
    if (runtime->hasFunction(0x290240u)) {
        auto targetFn = runtime->lookupFunction(0x290240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2906F4u; }
        if (ctx->pc != 0x2906F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDraw__12CEventSpriteFi_0x290240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2906F4u; }
        if (ctx->pc != 0x2906F4u) { return; }
    }
    ctx->pc = 0x2906F4u;
label_2906f4:
    // 0x2906f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2906f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2906f8:
    // 0x2906f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2906f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2906fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2906FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906FCu;
            // 0x290700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290704u;
}
