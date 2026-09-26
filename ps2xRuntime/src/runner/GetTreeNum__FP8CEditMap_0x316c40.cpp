#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTreeNum__FP8CEditMap
// Address: 0x316c40 - 0x316d10
void GetTreeNum__FP8CEditMap_0x316c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTreeNum__FP8CEditMap_0x316c40");
#endif

    switch (ctx->pc) {
        case 0x316c64u: goto label_316c64;
        case 0x316c7cu: goto label_316c7c;
        case 0x316c94u: goto label_316c94;
        case 0x316cacu: goto label_316cac;
        case 0x316cc4u: goto label_316cc4;
        case 0x316cdcu: goto label_316cdc;
        case 0x316cf4u: goto label_316cf4;
        default: break;
    }

    ctx->pc = 0x316c40u;

    // 0x316c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x316c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x316c44: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x316c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x316c48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x316c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x316c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x316c54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x316c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x316c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c5c: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x316C5Cu;
    SET_GPR_U32(ctx, 31, 0x316C64u);
    ctx->pc = 0x316C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316C5Cu;
            // 0x316c60: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C64u; }
        if (ctx->pc != 0x316C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C64u; }
        if (ctx->pc != 0x316C64u) { return; }
    }
    ctx->pc = 0x316C64u;
label_316c64:
    // 0x316c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c6c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x316c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x316c70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c74: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x316C74u;
    SET_GPR_U32(ctx, 31, 0x316C7Cu);
    ctx->pc = 0x316C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316C74u;
            // 0x316c78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C7Cu; }
        if (ctx->pc != 0x316C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C7Cu; }
        if (ctx->pc != 0x316C7Cu) { return; }
    }
    ctx->pc = 0x316C7Cu;
label_316c7c:
    // 0x316c7c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x316c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x316c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c84: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x316c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x316c88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c8c: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x316C8Cu;
    SET_GPR_U32(ctx, 31, 0x316C94u);
    ctx->pc = 0x316C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316C8Cu;
            // 0x316c90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C94u; }
        if (ctx->pc != 0x316C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316C94u; }
        if (ctx->pc != 0x316C94u) { return; }
    }
    ctx->pc = 0x316C94u;
label_316c94:
    // 0x316c94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x316c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x316c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c9c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x316c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x316ca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ca4: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x316CA4u;
    SET_GPR_U32(ctx, 31, 0x316CACu);
    ctx->pc = 0x316CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316CA4u;
            // 0x316ca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CACu; }
        if (ctx->pc != 0x316CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CACu; }
        if (ctx->pc != 0x316CACu) { return; }
    }
    ctx->pc = 0x316CACu;
label_316cac:
    // 0x316cac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x316cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x316cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316cb4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x316cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x316cb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316cbc: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x316CBCu;
    SET_GPR_U32(ctx, 31, 0x316CC4u);
    ctx->pc = 0x316CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316CBCu;
            // 0x316cc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CC4u; }
        if (ctx->pc != 0x316CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CC4u; }
        if (ctx->pc != 0x316CC4u) { return; }
    }
    ctx->pc = 0x316CC4u;
label_316cc4:
    // 0x316cc4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x316cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x316cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ccc: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x316cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x316cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316cd4: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x316CD4u;
    SET_GPR_U32(ctx, 31, 0x316CDCu);
    ctx->pc = 0x316CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316CD4u;
            // 0x316cd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CDCu; }
        if (ctx->pc != 0x316CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CDCu; }
        if (ctx->pc != 0x316CDCu) { return; }
    }
    ctx->pc = 0x316CDCu;
label_316cdc:
    // 0x316cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ce0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x316ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x316ce4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x316ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x316ce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x316ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316cec: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x316CECu;
    SET_GPR_U32(ctx, 31, 0x316CF4u);
    ctx->pc = 0x316CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316CECu;
            // 0x316cf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CF4u; }
        if (ctx->pc != 0x316CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316CF4u; }
        if (ctx->pc != 0x316CF4u) { return; }
    }
    ctx->pc = 0x316CF4u;
label_316cf4:
    // 0x316cf4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x316cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x316cf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x316cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316cfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x316cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316d08: 0x3e00008  jr          $ra
    ctx->pc = 0x316D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316D08u;
            // 0x316d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316D10u;
}
