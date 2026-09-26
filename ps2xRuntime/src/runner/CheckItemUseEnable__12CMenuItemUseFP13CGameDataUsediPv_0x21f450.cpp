#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckItemUseEnable__12CMenuItemUseFP13CGameDataUsediPv
// Address: 0x21f450 - 0x21f4b0
void CheckItemUseEnable__12CMenuItemUseFP13CGameDataUsediPv_0x21f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckItemUseEnable__12CMenuItemUseFP13CGameDataUsediPv_0x21f450");
#endif

    switch (ctx->pc) {
        case 0x21f490u: goto label_21f490;
        case 0x21f4a0u: goto label_21f4a0;
        default: break;
    }

    ctx->pc = 0x21f450u;

    // 0x21f450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21f458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21f45c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21f45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f460: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F460u;
    {
        const bool branch_taken_0x21f460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F460u;
            // 0x21f464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f460) {
            ctx->pc = 0x21F470u;
            goto label_21f470;
        }
    }
    ctx->pc = 0x21F468u;
    // 0x21f468: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F468u;
    {
        const bool branch_taken_0x21f468 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f468) {
            ctx->pc = 0x21F478u;
            goto label_21f478;
        }
    }
    ctx->pc = 0x21F470u;
label_21f470:
    // 0x21f470: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21F470u;
    {
        const bool branch_taken_0x21f470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F470u;
            // 0x21f474: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f470) {
            ctx->pc = 0x21F4A4u;
            goto label_21f4a4;
        }
    }
    ctx->pc = 0x21F478u;
label_21f478:
    // 0x21f478: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21f47c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21f47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f480: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x21f480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x21f484: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x21f484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x21f488: 0xc0659c4  jal         func_196710
    ctx->pc = 0x21F488u;
    SET_GPR_U32(ctx, 31, 0x21F490u);
    ctx->pc = 0x21F48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F488u;
            // 0x21f48c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196710u;
    if (runtime->hasFunction(0x196710u)) {
        auto targetFn = runtime->lookupFunction(0x196710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F490u; }
        if (ctx->pc != 0x21F490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtr__14CItemUseTargetFiPv_0x196710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F490u; }
        if (ctx->pc != 0x21F490u) { return; }
    }
    ctx->pc = 0x21F490u;
label_21f490:
    // 0x21f490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f494: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x21f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x21f498: 0xc087a30  jal         func_21E8C0
    ctx->pc = 0x21F498u;
    SET_GPR_U32(ctx, 31, 0x21F4A0u);
    ctx->pc = 0x21F49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F498u;
            // 0x21f49c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E8C0u;
    if (runtime->hasFunction(0x21E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4A0u; }
        if (ctx->pc != 0x21F4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuUseItemCheckFunc__FP13CGameDataUsedP14CItemUseTargeti_0x21e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4A0u; }
        if (ctx->pc != 0x21F4A0u) { return; }
    }
    ctx->pc = 0x21F4A0u;
label_21f4a0:
    // 0x21f4a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21f4a4:
    // 0x21f4a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x21F4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F4A8u;
            // 0x21f4ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F4B0u;
}
