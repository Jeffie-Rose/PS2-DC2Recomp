#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UseItem__12CMenuItemUseFP13CGameDataUsediPv
// Address: 0x21f4b0 - 0x21f524
void UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UseItem__12CMenuItemUseFP13CGameDataUsediPv_0x21f4b0");
#endif

    switch (ctx->pc) {
        case 0x21f4e8u: goto label_21f4e8;
        case 0x21f4f8u: goto label_21f4f8;
        case 0x21f508u: goto label_21f508;
        default: break;
    }

    ctx->pc = 0x21f4b0u;

    // 0x21f4b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21f4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21f4b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21f4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21f4b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21f4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21f4bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21f4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21f4c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21f4c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21f4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21f4c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21f4c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21f4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21f4d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21f4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4d4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x21f4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4d8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x21f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x21f4dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4e0: 0xc0659c4  jal         func_196710
    ctx->pc = 0x21F4E0u;
    SET_GPR_U32(ctx, 31, 0x21F4E8u);
    ctx->pc = 0x21F4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F4E0u;
            // 0x21f4e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196710u;
    if (runtime->hasFunction(0x196710u)) {
        auto targetFn = runtime->lookupFunction(0x196710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4E8u; }
        if (ctx->pc != 0x21F4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtr__14CItemUseTargetFiPv_0x196710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4E8u; }
        if (ctx->pc != 0x21F4E8u) { return; }
    }
    ctx->pc = 0x21F4E8u;
label_21f4e8:
    // 0x21f4e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21f4ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4f0: 0xc0659c4  jal         func_196710
    ctx->pc = 0x21F4F0u;
    SET_GPR_U32(ctx, 31, 0x21F4F8u);
    ctx->pc = 0x21F4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F4F0u;
            // 0x21f4f4: 0x27849338  addiu       $a0, $gp, -0x6CC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196710u;
    if (runtime->hasFunction(0x196710u)) {
        auto targetFn = runtime->lookupFunction(0x196710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4F8u; }
        if (ctx->pc != 0x21F4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtr__14CItemUseTargetFiPv_0x196710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4F8u; }
        if (ctx->pc != 0x21F4F8u) { return; }
    }
    ctx->pc = 0x21F4F8u;
label_21f4f8:
    // 0x21f4f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21f4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21f4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f500: 0xc087d4c  jal         func_21F530
    ctx->pc = 0x21F500u;
    SET_GPR_U32(ctx, 31, 0x21F508u);
    ctx->pc = 0x21F504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F500u;
            // 0x21f504: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F530u;
    if (runtime->hasFunction(0x21F530u)) {
        auto targetFn = runtime->lookupFunction(0x21F530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F508u; }
        if (ctx->pc != 0x21F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsedP14CItemUseTarget_0x21f530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F508u; }
        if (ctx->pc != 0x21F508u) { return; }
    }
    ctx->pc = 0x21F508u;
label_21f508:
    // 0x21f508: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21f508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f50c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21f50cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f510: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21f510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f51c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F51Cu;
            // 0x21f520: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F524u;
}
