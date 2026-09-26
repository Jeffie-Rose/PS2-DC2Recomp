#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFade__18CEventSpriteMotherFiii
// Address: 0x290800 - 0x290848
void SetFade__18CEventSpriteMotherFiii_0x290800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFade__18CEventSpriteMotherFiii_0x290800");
#endif

    switch (ctx->pc) {
        case 0x290838u: goto label_290838;
        default: break;
    }

    ctx->pc = 0x290800u;

    // 0x290800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290804: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290804u;
    {
        const bool branch_taken_0x290804 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x290808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290804u;
            // 0x290808: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290804) {
            ctx->pc = 0x290818u;
            goto label_290818;
        }
    }
    ctx->pc = 0x29080Cu;
    // 0x29080c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x29080cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x290810: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290810u;
    {
        const bool branch_taken_0x290810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290810u;
            // 0x290814: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290810) {
            ctx->pc = 0x290820u;
            goto label_290820;
        }
    }
    ctx->pc = 0x290818u;
label_290818:
    // 0x290818: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x290818u;
    {
        const bool branch_taken_0x290818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290818u;
            // 0x29081c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290818) {
            ctx->pc = 0x29083Cu;
            goto label_29083c;
        }
    }
    ctx->pc = 0x290820u;
label_290820:
    // 0x290820: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x290820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x290824: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x290824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x290828: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x290828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29082c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29082cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x290830: 0xc0a40b0  jal         func_2902C0
    ctx->pc = 0x290830u;
    SET_GPR_U32(ctx, 31, 0x290838u);
    ctx->pc = 0x290834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290830u;
            // 0x290834: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2902C0u;
    if (runtime->hasFunction(0x2902C0u)) {
        auto targetFn = runtime->lookupFunction(0x2902C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290838u; }
        if (ctx->pc != 0x290838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFade__12CEventSpriteFii_0x2902c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290838u; }
        if (ctx->pc != 0x290838u) { return; }
    }
    ctx->pc = 0x290838u;
label_290838:
    // 0x290838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29083c:
    // 0x29083c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29083cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290840: 0x3e00008  jr          $ra
    ctx->pc = 0x290840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290840u;
            // 0x290844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290848u;
}
