#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetGet__18CEventSpriteMotherFiiiii
// Address: 0x290710 - 0x290760
void SetGet__18CEventSpriteMotherFiiiii_0x290710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGet__18CEventSpriteMotherFiiiii_0x290710");
#endif

    switch (ctx->pc) {
        case 0x290750u: goto label_290750;
        default: break;
    }

    ctx->pc = 0x290710u;

    // 0x290710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290714: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290714u;
    {
        const bool branch_taken_0x290714 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x290718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290714u;
            // 0x290718: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290714) {
            ctx->pc = 0x290728u;
            goto label_290728;
        }
    }
    ctx->pc = 0x29071Cu;
    // 0x29071c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x29071cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x290720: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290720u;
    {
        const bool branch_taken_0x290720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290720u;
            // 0x290724: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290720) {
            ctx->pc = 0x290730u;
            goto label_290730;
        }
    }
    ctx->pc = 0x290728u;
label_290728:
    // 0x290728: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x290728u;
    {
        const bool branch_taken_0x290728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290728u;
            // 0x29072c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290728) {
            ctx->pc = 0x290754u;
            goto label_290754;
        }
    }
    ctx->pc = 0x290730u;
label_290730:
    // 0x290730: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x290730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x290734: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x290734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290738: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x290738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29073c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x29073cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290740: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x290740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x290744: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x290744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290748: 0xc0a4094  jal         func_290250
    ctx->pc = 0x290748u;
    SET_GPR_U32(ctx, 31, 0x290750u);
    ctx->pc = 0x29074Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290748u;
            // 0x29074c: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290250u;
    if (runtime->hasFunction(0x290250u)) {
        auto targetFn = runtime->lookupFunction(0x290250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290750u; }
        if (ctx->pc != 0x290750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGet__12CEventSpriteFiiii_0x290250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290750u; }
        if (ctx->pc != 0x290750u) { return; }
    }
    ctx->pc = 0x290750u;
label_290750:
    // 0x290750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290754:
    // 0x290754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290758: 0x3e00008  jr          $ra
    ctx->pc = 0x290758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29075Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290758u;
            // 0x29075c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290760u;
}
