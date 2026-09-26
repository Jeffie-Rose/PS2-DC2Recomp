#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemAll__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFO
// Address: 0x23c910 - 0x23c998
void GetItemAll__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFO_0x23c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemAll__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFO_0x23c910");
#endif

    switch (ctx->pc) {
        case 0x23c94cu: goto label_23c94c;
        case 0x23c964u: goto label_23c964;
        case 0x23c97cu: goto label_23c97c;
        default: break;
    }

    ctx->pc = 0x23c910u;

    // 0x23c910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23c914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23c918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23c918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23c91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c920: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23c920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c924: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23c924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23c928: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c92c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C92Cu;
    {
        const bool branch_taken_0x23c92c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C92Cu;
            // 0x23c930: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c92c) {
            ctx->pc = 0x23C93Cu;
            goto label_23c93c;
        }
    }
    ctx->pc = 0x23C934u;
    // 0x23c934: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C934u;
    {
        const bool branch_taken_0x23c934 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C934u;
            // 0x23c938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c934) {
            ctx->pc = 0x23C944u;
            goto label_23c944;
        }
    }
    ctx->pc = 0x23C93Cu;
label_23c93c:
    // 0x23c93c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23C93Cu;
    {
        const bool branch_taken_0x23c93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C93Cu;
            // 0x23c940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c93c) {
            ctx->pc = 0x23C980u;
            goto label_23c980;
        }
    }
    ctx->pc = 0x23C944u;
label_23c944:
    // 0x23c944: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23C944u;
    SET_GPR_U32(ctx, 31, 0x23C94Cu);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C94Cu; }
        if (ctx->pc != 0x23C94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C94Cu; }
        if (ctx->pc != 0x23C94Cu) { return; }
    }
    ctx->pc = 0x23C94Cu;
label_23c94c:
    // 0x23c94c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23c94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23c950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c954: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23c954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c958: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23c958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c95c: 0xc08f9ac  jal         func_23E6B0
    ctx->pc = 0x23C95Cu;
    SET_GPR_U32(ctx, 31, 0x23C964u);
    ctx->pc = 0x23C960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C95Cu;
            // 0x23c960: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E6B0u;
    if (runtime->hasFunction(0x23E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C964u; }
        if (ctx->pc != 0x23C964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSwapItem__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFOib_0x23e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C964u; }
        if (ctx->pc != 0x23C964u) { return; }
    }
    ctx->pc = 0x23C964u;
label_23c964:
    // 0x23c964: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23c968: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23c968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23c96c: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x23c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
    // 0x23c970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23c970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c974: 0xc094274  jal         func_2509D0
    ctx->pc = 0x23C974u;
    SET_GPR_U32(ctx, 31, 0x23C97Cu);
    ctx->pc = 0x23C978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C974u;
            // 0x23c978: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C97Cu; }
        if (ctx->pc != 0x23C97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C97Cu; }
        if (ctx->pc != 0x23C97Cu) { return; }
    }
    ctx->pc = 0x23C97Cu;
label_23c97c:
    // 0x23c97c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23c980:
    // 0x23c980: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23c980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23c984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23c988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23c98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c990: 0x3e00008  jr          $ra
    ctx->pc = 0x23C990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C990u;
            // 0x23c994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C998u;
}
