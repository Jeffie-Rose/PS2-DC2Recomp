#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsItemUseNum__14CBaseMenuClassFiiiP13CGameDataUsedP14CItemUseTarget
// Address: 0x2399d0 - 0x239a74
void IsItemUseNum__14CBaseMenuClassFiiiP13CGameDataUsedP14CItemUseTarget_0x2399d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsItemUseNum__14CBaseMenuClassFiiiP13CGameDataUsedP14CItemUseTarget_0x2399d0");
#endif

    switch (ctx->pc) {
        case 0x239a04u: goto label_239a04;
        case 0x239a0cu: goto label_239a0c;
        case 0x239a24u: goto label_239a24;
        case 0x239a3cu: goto label_239a3c;
        default: break;
    }

    ctx->pc = 0x2399d0u;

    // 0x2399d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2399d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2399d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2399d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2399d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2399d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2399dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2399dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2399e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2399e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399e4: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2399e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2399e8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2399E8u;
    {
        const bool branch_taken_0x2399e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2399ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2399E8u;
            // 0x2399ec: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399e8) {
            ctx->pc = 0x239A54u;
            goto label_239a54;
        }
    }
    ctx->pc = 0x2399F0u;
    // 0x2399f0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2399f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2399f4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2399f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2399f8: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x2399f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x2399fc: 0xc087d4c  jal         func_21F530
    ctx->pc = 0x2399FCu;
    SET_GPR_U32(ctx, 31, 0x239A04u);
    ctx->pc = 0x239A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2399FCu;
            // 0x239a00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F530u;
    if (runtime->hasFunction(0x21F530u)) {
        auto targetFn = runtime->lookupFunction(0x21F530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A04u; }
        if (ctx->pc != 0x239A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseItem__12CMenuItemUseFP13CGameDataUsedP14CItemUseTarget_0x21f530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A04u; }
        if (ctx->pc != 0x239A04u) { return; }
    }
    ctx->pc = 0x239A04u;
label_239a04:
    // 0x239a04: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x239A04u;
    SET_GPR_U32(ctx, 31, 0x239A0Cu);
    ctx->pc = 0x239A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A04u;
            // 0x239a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A0Cu; }
        if (ctx->pc != 0x239A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A0Cu; }
        if (ctx->pc != 0x239A0Cu) { return; }
    }
    ctx->pc = 0x239A0Cu;
label_239a0c:
    // 0x239a0c: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239A0Cu;
    {
        const bool branch_taken_0x239a0c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x239a0c) {
            ctx->pc = 0x239A2Cu;
            goto label_239a2c;
        }
    }
    ctx->pc = 0x239A14u;
    // 0x239a14: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x239a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a1c: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x239A1Cu;
    SET_GPR_U32(ctx, 31, 0x239A24u);
    ctx->pc = 0x239A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A1Cu;
            // 0x239a20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A24u; }
        if (ctx->pc != 0x239A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A24u; }
        if (ctx->pc != 0x239A24u) { return; }
    }
    ctx->pc = 0x239A24u;
label_239a24:
    // 0x239a24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x239A24u;
    {
        const bool branch_taken_0x239a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A24u;
            // 0x239a28: 0x86220002  lh          $v0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a24) {
            ctx->pc = 0x239A40u;
            goto label_239a40;
        }
    }
    ctx->pc = 0x239A2Cu;
label_239a2c:
    // 0x239a2c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x239a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239a30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x239a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239a34: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x239A34u;
    SET_GPR_U32(ctx, 31, 0x239A3Cu);
    ctx->pc = 0x239A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A34u;
            // 0x239a38: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A3Cu; }
        if (ctx->pc != 0x239A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A3Cu; }
        if (ctx->pc != 0x239A3Cu) { return; }
    }
    ctx->pc = 0x239A3Cu;
label_239a3c:
    // 0x239a3c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x239a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_239a40:
    // 0x239a40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239a44: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x239a44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x239a48: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x239a48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x239a4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x239A4Cu;
    {
        const bool branch_taken_0x239a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A4Cu;
            // 0x239a50: 0xa6200000  sh          $zero, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a4c) {
            ctx->pc = 0x239A5Cu;
            goto label_239a5c;
        }
    }
    ctx->pc = 0x239A54u;
label_239a54:
    // 0x239a54: 0xa6200002  sh          $zero, 0x2($s1)
    ctx->pc = 0x239a54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x239a58: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x239a58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_239a5c:
    // 0x239a5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x239a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x239a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x239A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A6Cu;
            // 0x239a70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239A74u;
}
