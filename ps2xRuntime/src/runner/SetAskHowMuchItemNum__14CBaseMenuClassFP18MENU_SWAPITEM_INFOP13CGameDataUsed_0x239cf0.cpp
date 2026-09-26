#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAskHowMuchItemNum__14CBaseMenuClassFP18MENU_SWAPITEM_INFOP13CGameDataUsed
// Address: 0x239cf0 - 0x239da0
void SetAskHowMuchItemNum__14CBaseMenuClassFP18MENU_SWAPITEM_INFOP13CGameDataUsed_0x239cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAskHowMuchItemNum__14CBaseMenuClassFP18MENU_SWAPITEM_INFOP13CGameDataUsed_0x239cf0");
#endif

    switch (ctx->pc) {
        case 0x239d1cu: goto label_239d1c;
        case 0x239d34u: goto label_239d34;
        case 0x239d48u: goto label_239d48;
        case 0x239d58u: goto label_239d58;
        case 0x239d60u: goto label_239d60;
        default: break;
    }

    ctx->pc = 0x239cf0u;

    // 0x239cf0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x239cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x239cf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x239cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x239cf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x239cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x239cfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x239d00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x239d04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x239d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x239d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x239d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d14: 0xc08e70c  jal         func_239C30
    ctx->pc = 0x239D14u;
    SET_GPR_U32(ctx, 31, 0x239D1Cu);
    ctx->pc = 0x239D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239D14u;
            // 0x239d18: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239C30u;
    if (runtime->hasFunction(0x239C30u)) {
        auto targetFn = runtime->lookupFunction(0x239C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D1Cu; }
        if (ctx->pc != 0x239D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetConditionHowMuchBoard__Fv_0x239c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D1Cu; }
        if (ctx->pc != 0x239D1Cu) { return; }
    }
    ctx->pc = 0x239D1Cu;
label_239d1c:
    // 0x239d1c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x239D1Cu;
    {
        const bool branch_taken_0x239d1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D1Cu;
            // 0x239d20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d1c) {
            ctx->pc = 0x239D3Cu;
            goto label_239d3c;
        }
    }
    ctx->pc = 0x239D24u;
    // 0x239d24: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239D24u;
    {
        const bool branch_taken_0x239d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D24u;
            // 0x239d28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d24) {
            ctx->pc = 0x239D38u;
            goto label_239d38;
        }
    }
    ctx->pc = 0x239D2Cu;
    // 0x239d2c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x239D2Cu;
    SET_GPR_U32(ctx, 31, 0x239D34u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D34u; }
        if (ctx->pc != 0x239D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D34u; }
        if (ctx->pc != 0x239D34u) { return; }
    }
    ctx->pc = 0x239D34u;
label_239d34:
    // 0x239d34: 0xaf829608  sw          $v0, -0x69F8($gp)
    ctx->pc = 0x239d34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940168), GPR_U32(ctx, 2));
label_239d38:
    // 0x239d38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x239d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239d3c:
    // 0x239d3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x239d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x239d40: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x239D40u;
    SET_GPR_U32(ctx, 31, 0x239D48u);
    ctx->pc = 0x239D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239D40u;
            // 0x239d44: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D48u; }
        if (ctx->pc != 0x239D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D48u; }
        if (ctx->pc != 0x239D48u) { return; }
    }
    ctx->pc = 0x239D48u;
label_239d48:
    // 0x239d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d4c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x239d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x239d50: 0xc08e768  jal         func_239DA0
    ctx->pc = 0x239D50u;
    SET_GPR_U32(ctx, 31, 0x239D58u);
    ctx->pc = 0x239D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239D50u;
            // 0x239d54: 0xafb200bc  sw          $s2, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239DA0u;
    if (runtime->hasFunction(0x239DA0u)) {
        auto targetFn = runtime->lookupFunction(0x239DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D58u; }
        if (ctx->pc != 0x239D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D58u; }
        if (ctx->pc != 0x239D58u) { return; }
    }
    ctx->pc = 0x239D58u;
label_239d58:
    // 0x239d58: 0xc08f00c  jal         func_23C030
    ctx->pc = 0x239D58u;
    SET_GPR_U32(ctx, 31, 0x239D60u);
    ctx->pc = 0x239D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239D58u;
            // 0x239d5c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C030u;
    if (runtime->hasFunction(0x23C030u)) {
        auto targetFn = runtime->lookupFunction(0x23C030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D60u; }
        if (ctx->pc != 0x239D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStop__12CMenuKeyFuncFv_0x23c030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D60u; }
        if (ctx->pc != 0x239D60u) { return; }
    }
    ctx->pc = 0x239D60u;
label_239d60:
    // 0x239d60: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x239D60u;
    {
        const bool branch_taken_0x239d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d60) {
            ctx->pc = 0x239D88u;
            goto label_239d88;
        }
    }
    ctx->pc = 0x239D68u;
    // 0x239d68: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x239d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x239d6c: 0xa62300ec  sh          $v1, 0xEC($s1)
    ctx->pc = 0x239d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 236), (uint16_t)GPR_U32(ctx, 3));
    // 0x239d70: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x239d70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x239d74: 0xa62300ee  sh          $v1, 0xEE($s1)
    ctx->pc = 0x239d74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 238), (uint16_t)GPR_U32(ctx, 3));
    // 0x239d78: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x239d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239d7c: 0xa62300f0  sh          $v1, 0xF0($s1)
    ctx->pc = 0x239d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x239d80: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x239d80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x239d84: 0xa62300f2  sh          $v1, 0xF2($s1)
    ctx->pc = 0x239d84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 3));
label_239d88:
    // 0x239d88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x239d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239d8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239d98: 0x3e00008  jr          $ra
    ctx->pc = 0x239D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D98u;
            // 0x239d9c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239DA0u;
}
