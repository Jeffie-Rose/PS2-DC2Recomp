#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SubMapLoadStep__Fv
// Address: 0x1abc40 - 0x1abcf0
void SubMapLoadStep__Fv_0x1abc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SubMapLoadStep__Fv_0x1abc40");
#endif

    switch (ctx->pc) {
        case 0x1abc58u: goto label_1abc58;
        case 0x1abc80u: goto label_1abc80;
        case 0x1abc88u: goto label_1abc88;
        case 0x1abc98u: goto label_1abc98;
        case 0x1abca0u: goto label_1abca0;
        case 0x1abcacu: goto label_1abcac;
        case 0x1abcbcu: goto label_1abcbc;
        case 0x1abcc8u: goto label_1abcc8;
        case 0x1abcd4u: goto label_1abcd4;
        default: break;
    }

    ctx->pc = 0x1abc40u;

    // 0x1abc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1abc44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1abc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1abc48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abc4c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1abc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1abc50: 0xc0a170c  jal         func_285C30
    ctx->pc = 0x1ABC50u;
    SET_GPR_U32(ctx, 31, 0x1ABC58u);
    ctx->pc = 0x1ABC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC50u;
            // 0x1abc54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285C30u;
    if (runtime->hasFunction(0x285C30u)) {
        auto targetFn = runtime->lookupFunction(0x285C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC58u; }
        if (ctx->pc != 0x1ABC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapBGStep__6CSceneFP17SCN_LOADMAP_INFO2_0x285c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC58u; }
        if (ctx->pc != 0x1ABC58u) { return; }
    }
    ctx->pc = 0x1ABC58u;
label_1abc58:
    // 0x1abc58: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1ABC58u;
    {
        const bool branch_taken_0x1abc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC58u;
            // 0x1abc5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc58) {
            ctx->pc = 0x1ABCE0u;
            goto label_1abce0;
        }
    }
    ctx->pc = 0x1ABC60u;
    // 0x1abc60: 0x8f828c84  lw          $v0, -0x737C($gp)
    ctx->pc = 0x1abc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
    // 0x1abc64: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1ABC64u;
    {
        const bool branch_taken_0x1abc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC64u;
            // 0x1abc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc64) {
            ctx->pc = 0x1ABCE0u;
            goto label_1abce0;
        }
    }
    ctx->pc = 0x1ABC6Cu;
    // 0x1abc6c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1abc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1abc70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1abc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1abc74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1abc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abc78: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x1ABC78u;
    SET_GPR_U32(ctx, 31, 0x1ABC80u);
    ctx->pc = 0x1ABC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC78u;
            // 0x1abc7c: 0xaf808c84  sw          $zero, -0x737C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC80u; }
        if (ctx->pc != 0x1ABC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC80u; }
        if (ctx->pc != 0x1ABC80u) { return; }
    }
    ctx->pc = 0x1ABC80u;
label_1abc80:
    // 0x1abc80: 0xc0b7b08  jal         func_2DEC20
    ctx->pc = 0x1ABC80u;
    SET_GPR_U32(ctx, 31, 0x1ABC88u);
    ctx->pc = 0x2DEC20u;
    if (runtime->hasFunction(0x2DEC20u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC88u; }
        if (ctx->pc != 0x1ABC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSubMapNo__Fv_0x2dec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC88u; }
        if (ctx->pc != 0x1ABC88u) { return; }
    }
    ctx->pc = 0x1ABC88u;
label_1abc88:
    // 0x1abc88: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1abc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1abc8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1abc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc90: 0xc0b2824  jal         func_2CA090
    ctx->pc = 0x1ABC90u;
    SET_GPR_U32(ctx, 31, 0x1ABC98u);
    ctx->pc = 0x1ABC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC90u;
            // 0x1abc94: 0x2406005e  addiu       $a2, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA090u;
    if (runtime->hasFunction(0x2CA090u)) {
        auto targetFn = runtime->lookupFunction(0x2CA090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC98u; }
        if (ctx->pc != 0x1ABC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSubVillager__6CSceneFii_0x2ca090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC98u; }
        if (ctx->pc != 0x1ABC98u) { return; }
    }
    ctx->pc = 0x1ABC98u;
label_1abc98:
    // 0x1abc98: 0xc0b258c  jal         func_2C9630
    ctx->pc = 0x1ABC98u;
    SET_GPR_U32(ctx, 31, 0x1ABCA0u);
    ctx->pc = 0x1ABC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC98u;
            // 0x1abc9c: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9630u;
    if (runtime->hasFunction(0x2C9630u)) {
        auto targetFn = runtime->lookupFunction(0x2C9630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCA0u; }
        if (ctx->pc != 0x1ABCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreLoadVillagerEnd__6CSceneFv_0x2c9630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCA0u; }
        if (ctx->pc != 0x1ABCA0u) { return; }
    }
    ctx->pc = 0x1ABCA0u;
label_1abca0:
    // 0x1abca0: 0x8f848c88  lw          $a0, -0x7378($gp)
    ctx->pc = 0x1abca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
    // 0x1abca4: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x1ABCA4u;
    SET_GPR_U32(ctx, 31, 0x1ABCACu);
    ctx->pc = 0x1ABCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCA4u;
            // 0x1abca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCACu; }
        if (ctx->pc != 0x1ABCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCACu; }
        if (ctx->pc != 0x1ABCACu) { return; }
    }
    ctx->pc = 0x1ABCACu;
label_1abcac:
    // 0x1abcac: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1abcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1abcb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1abcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcb4: 0xc0a0f30  jal         func_283CC0
    ctx->pc = 0x1ABCB4u;
    SET_GPR_U32(ctx, 31, 0x1ABCBCu);
    ctx->pc = 0x1ABCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCB4u;
            // 0x1abcb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283CC0u;
    if (runtime->hasFunction(0x283CC0u)) {
        auto targetFn = runtime->lookupFunction(0x283CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCBCu; }
        if (ctx->pc != 0x1ABCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapID__6CSceneFPc_0x283cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCBCu; }
        if (ctx->pc != 0x1ABCBCu) { return; }
    }
    ctx->pc = 0x1ABCBCu;
label_1abcbc:
    // 0x1abcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcc0: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1ABCC0u;
    SET_GPR_U32(ctx, 31, 0x1ABCC8u);
    ctx->pc = 0x1ABCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCC0u;
            // 0x1abcc4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCC8u; }
        if (ctx->pc != 0x1ABCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCC8u; }
        if (ctx->pc != 0x1ABCC8u) { return; }
    }
    ctx->pc = 0x1ABCC8u;
label_1abcc8:
    // 0x1abcc8: 0x8f848c88  lw          $a0, -0x7378($gp)
    ctx->pc = 0x1abcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
    // 0x1abccc: 0xc0c638c  jal         func_318E30
    ctx->pc = 0x1ABCCCu;
    SET_GPR_U32(ctx, 31, 0x1ABCD4u);
    ctx->pc = 0x1ABCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCCCu;
            // 0x1abcd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318E30u;
    if (runtime->hasFunction(0x318E30u)) {
        auto targetFn = runtime->lookupFunction(0x318E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCD4u; }
        if (ctx->pc != 0x1ABCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMapInitEvent__FiP8CEditMap_0x318e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCD4u; }
        if (ctx->pc != 0x1ABCD4u) { return; }
    }
    ctx->pc = 0x1ABCD4u;
label_1abcd4:
    // 0x1abcd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1abcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1abcd8: 0xaf828c88  sw          $v0, -0x7378($gp)
    ctx->pc = 0x1abcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937736), GPR_U32(ctx, 2));
    // 0x1abcdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abcdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abce0:
    // 0x1abce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1abce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abce8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCE8u;
            // 0x1abcec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABCF0u;
}
