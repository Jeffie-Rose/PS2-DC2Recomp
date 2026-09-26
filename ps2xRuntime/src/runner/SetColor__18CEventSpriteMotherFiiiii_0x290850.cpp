#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__18CEventSpriteMotherFiiiii
// Address: 0x290850 - 0x2908a0
void SetColor__18CEventSpriteMotherFiiiii_0x290850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__18CEventSpriteMotherFiiiii_0x290850");
#endif

    switch (ctx->pc) {
        case 0x290890u: goto label_290890;
        default: break;
    }

    ctx->pc = 0x290850u;

    // 0x290850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290854: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290854u;
    {
        const bool branch_taken_0x290854 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x290858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290854u;
            // 0x290858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290854) {
            ctx->pc = 0x290868u;
            goto label_290868;
        }
    }
    ctx->pc = 0x29085Cu;
    // 0x29085c: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x29085cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x290860: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290860u;
    {
        const bool branch_taken_0x290860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290860u;
            // 0x290864: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290860) {
            ctx->pc = 0x290870u;
            goto label_290870;
        }
    }
    ctx->pc = 0x290868u;
label_290868:
    // 0x290868: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x290868u;
    {
        const bool branch_taken_0x290868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290868u;
            // 0x29086c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290868) {
            ctx->pc = 0x290894u;
            goto label_290894;
        }
    }
    ctx->pc = 0x290870u;
label_290870:
    // 0x290870: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x290870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x290874: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x290874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290878: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x290878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29087c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x29087cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290880: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x290880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x290884: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x290884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290888: 0xc0a40c0  jal         func_290300
    ctx->pc = 0x290888u;
    SET_GPR_U32(ctx, 31, 0x290890u);
    ctx->pc = 0x29088Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290888u;
            // 0x29088c: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290300u;
    if (runtime->hasFunction(0x290300u)) {
        auto targetFn = runtime->lookupFunction(0x290300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290890u; }
        if (ctx->pc != 0x290890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__12CEventSpriteFiiii_0x290300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290890u; }
        if (ctx->pc != 0x290890u) { return; }
    }
    ctx->pc = 0x290890u;
label_290890:
    // 0x290890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290894:
    // 0x290894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290898: 0x3e00008  jr          $ra
    ctx->pc = 0x290898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290898u;
            // 0x29089c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2908A0u;
}
