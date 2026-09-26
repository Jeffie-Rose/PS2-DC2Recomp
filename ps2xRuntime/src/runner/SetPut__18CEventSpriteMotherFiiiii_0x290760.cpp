#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPut__18CEventSpriteMotherFiiiii
// Address: 0x290760 - 0x2907b0
void SetPut__18CEventSpriteMotherFiiiii_0x290760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPut__18CEventSpriteMotherFiiiii_0x290760");
#endif

    switch (ctx->pc) {
        case 0x2907a0u: goto label_2907a0;
        default: break;
    }

    ctx->pc = 0x290760u;

    // 0x290760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290764: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290764u;
    {
        const bool branch_taken_0x290764 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x290768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290764u;
            // 0x290768: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290764) {
            ctx->pc = 0x290778u;
            goto label_290778;
        }
    }
    ctx->pc = 0x29076Cu;
    // 0x29076c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x29076cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x290770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290770u;
    {
        const bool branch_taken_0x290770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290770u;
            // 0x290774: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290770) {
            ctx->pc = 0x290780u;
            goto label_290780;
        }
    }
    ctx->pc = 0x290778u;
label_290778:
    // 0x290778: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x290778u;
    {
        const bool branch_taken_0x290778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29077Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290778u;
            // 0x29077c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290778) {
            ctx->pc = 0x2907A4u;
            goto label_2907a4;
        }
    }
    ctx->pc = 0x290780u;
label_290780:
    // 0x290780: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x290780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x290784: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x290784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290788: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x290788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29078c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x29078cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290790: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x290790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x290794: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x290794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290798: 0xc0a409c  jal         func_290270
    ctx->pc = 0x290798u;
    SET_GPR_U32(ctx, 31, 0x2907A0u);
    ctx->pc = 0x29079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290798u;
            // 0x29079c: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290270u;
    if (runtime->hasFunction(0x290270u)) {
        auto targetFn = runtime->lookupFunction(0x290270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2907A0u; }
        if (ctx->pc != 0x2907A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPut__12CEventSpriteFiiii_0x290270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2907A0u; }
        if (ctx->pc != 0x2907A0u) { return; }
    }
    ctx->pc = 0x2907A0u;
label_2907a0:
    // 0x2907a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2907a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2907a4:
    // 0x2907a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2907a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2907a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2907A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2907ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907A8u;
            // 0x2907ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2907B0u;
}
