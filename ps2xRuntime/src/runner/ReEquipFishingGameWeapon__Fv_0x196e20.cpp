#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReEquipFishingGameWeapon__Fv
// Address: 0x196e20 - 0x196e68
void ReEquipFishingGameWeapon__Fv_0x196e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReEquipFishingGameWeapon__Fv_0x196e20");
#endif

    switch (ctx->pc) {
        case 0x196e3cu: goto label_196e3c;
        case 0x196e4cu: goto label_196e4c;
        case 0x196e5cu: goto label_196e5c;
        default: break;
    }

    ctx->pc = 0x196e20u;

    // 0x196e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196e28: 0x8f838b7c  lw          $v1, -0x7484($gp)
    ctx->pc = 0x196e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937468)));
    // 0x196e2c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x196E2Cu;
    {
        const bool branch_taken_0x196e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196e2c) {
            ctx->pc = 0x196E5Cu;
            goto label_196e5c;
        }
    }
    ctx->pc = 0x196E34u;
    // 0x196e34: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x196E34u;
    SET_GPR_U32(ctx, 31, 0x196E3Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E3Cu; }
        if (ctx->pc != 0x196E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E3Cu; }
        if (ctx->pc != 0x196E3Cu) { return; }
    }
    ctx->pc = 0x196E3Cu;
label_196e3c:
    // 0x196e3c: 0x8f868b7c  lw          $a2, -0x7484($gp)
    ctx->pc = 0x196e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937468)));
    // 0x196e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e44: 0xc0674cc  jal         func_19D330
    ctx->pc = 0x196E44u;
    SET_GPR_U32(ctx, 31, 0x196E4Cu);
    ctx->pc = 0x196E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196E44u;
            // 0x196e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D330u;
    if (runtime->hasFunction(0x19D330u)) {
        auto targetFn = runtime->lookupFunction(0x19D330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E4Cu; }
        if (ctx->pc != 0x196E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetChrEquip__16CUserDataManagerFiP13CGameDataUsed_0x19d330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E4Cu; }
        if (ctx->pc != 0x196E4Cu) { return; }
    }
    ctx->pc = 0x196E4Cu;
label_196e4c:
    // 0x196e4c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x196e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x196e50: 0xaf808b7c  sw          $zero, -0x7484($gp)
    ctx->pc = 0x196e50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937468), GPR_U32(ctx, 0));
    // 0x196e54: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x196E54u;
    SET_GPR_U32(ctx, 31, 0x196E5Cu);
    ctx->pc = 0x196E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196E54u;
            // 0x196e58: 0x248457f0  addiu       $a0, $a0, 0x57F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E5Cu; }
        if (ctx->pc != 0x196E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E5Cu; }
        if (ctx->pc != 0x196E5Cu) { return; }
    }
    ctx->pc = 0x196E5Cu;
label_196e5c:
    // 0x196e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196e60: 0x3e00008  jr          $ra
    ctx->pc = 0x196E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196E60u;
            // 0x196e64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196E68u;
}
