#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPARTS__FP9SPI_STACKi
// Address: 0x161c90 - 0x161d28
void mapPARTS__FP9SPI_STACKi_0x161c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPARTS__FP9SPI_STACKi_0x161c90");
#endif

    switch (ctx->pc) {
        case 0x161cacu: goto label_161cac;
        case 0x161cb8u: goto label_161cb8;
        case 0x161cc4u: goto label_161cc4;
        case 0x161cd4u: goto label_161cd4;
        case 0x161ce0u: goto label_161ce0;
        case 0x161cecu: goto label_161cec;
        case 0x161cfcu: goto label_161cfc;
        case 0x161d08u: goto label_161d08;
        default: break;
    }

    ctx->pc = 0x161c90u;

    // 0x161c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x161c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161ca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ca4: 0xc05878c  jal         func_161E30
    ctx->pc = 0x161CA4u;
    SET_GPR_U32(ctx, 31, 0x161CACu);
    ctx->pc = 0x161CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CA4u;
            // 0x161ca8: 0x24040330  addiu       $a0, $zero, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CACu; }
        if (ctx->pc != 0x161CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CACu; }
        if (ctx->pc != 0x161CACu) { return; }
    }
    ctx->pc = 0x161CACu;
label_161cac:
    // 0x161cac: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x161cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x161cb0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x161CB0u;
    SET_GPR_U32(ctx, 31, 0x161CB8u);
    ctx->pc = 0x161CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CB0u;
            // 0x161cb4: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CB8u; }
        if (ctx->pc != 0x161CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CB8u; }
        if (ctx->pc != 0x161CB8u) { return; }
    }
    ctx->pc = 0x161CB8u;
label_161cb8:
    // 0x161cb8: 0x24040330  addiu       $a0, $zero, 0x330
    ctx->pc = 0x161cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x161cbc: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x161CBCu;
    SET_GPR_U32(ctx, 31, 0x161CC4u);
    ctx->pc = 0x161CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CBCu;
            // 0x161cc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CC4u; }
        if (ctx->pc != 0x161CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CC4u; }
        if (ctx->pc != 0x161CC4u) { return; }
    }
    ctx->pc = 0x161CC4u;
label_161cc4:
    // 0x161cc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161CC4u;
    {
        const bool branch_taken_0x161cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161CC4u;
            // 0x161cc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161cc4) {
            ctx->pc = 0x161CD4u;
            goto label_161cd4;
        }
    }
    ctx->pc = 0x161CCCu;
    // 0x161ccc: 0xc058750  jal         func_161D40
    ctx->pc = 0x161CCCu;
    SET_GPR_U32(ctx, 31, 0x161CD4u);
    ctx->pc = 0x161D40u;
    if (runtime->hasFunction(0x161D40u)) {
        auto targetFn = runtime->lookupFunction(0x161D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CD4u; }
        if (ctx->pc != 0x161CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__17CList_9CMapParts_Fv_0x161d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CD4u; }
        if (ctx->pc != 0x161CD4u) { return; }
    }
    ctx->pc = 0x161CD4u;
label_161cd4:
    // 0x161cd4: 0xaf828918  sw          $v0, -0x76E8($gp)
    ctx->pc = 0x161cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936856), GPR_U32(ctx, 2));
    // 0x161cd8: 0xc05874c  jal         func_161D30
    ctx->pc = 0x161CD8u;
    SET_GPR_U32(ctx, 31, 0x161CE0u);
    ctx->pc = 0x161CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CD8u;
            // 0x161cdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CE0u; }
        if (ctx->pc != 0x161CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CE0u; }
        if (ctx->pc != 0x161CE0u) { return; }
    }
    ctx->pc = 0x161CE0u;
label_161ce0:
    // 0x161ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ce4: 0xc05191c  jal         func_146470
    ctx->pc = 0x161CE4u;
    SET_GPR_U32(ctx, 31, 0x161CECu);
    ctx->pc = 0x161CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CE4u;
            // 0x161ce8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CECu; }
        if (ctx->pc != 0x161CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CECu; }
        if (ctx->pc != 0x161CECu) { return; }
    }
    ctx->pc = 0x161CECu;
label_161cec:
    // 0x161cec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161cf4: 0xc0598d8  jal         func_166360
    ctx->pc = 0x161CF4u;
    SET_GPR_U32(ctx, 31, 0x161CFCu);
    ctx->pc = 0x161CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CF4u;
            // 0x161cf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166360u;
    if (runtime->hasFunction(0x166360u)) {
        auto targetFn = runtime->lookupFunction(0x166360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CFCu; }
        if (ctx->pc != 0x161CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__9CMapPartsFPc_0x166360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CFCu; }
        if (ctx->pc != 0x161CFCu) { return; }
    }
    ctx->pc = 0x161CFCu;
label_161cfc:
    // 0x161cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d00: 0xc0598f0  jal         func_1663C0
    ctx->pc = 0x161D00u;
    SET_GPR_U32(ctx, 31, 0x161D08u);
    ctx->pc = 0x161D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D00u;
            // 0x161d04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1663C0u;
    if (runtime->hasFunction(0x1663C0u)) {
        auto targetFn = runtime->lookupFunction(0x1663C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D08u; }
        if (ctx->pc != 0x161D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartsName__9CMapPartsFPc_0x1663c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D08u; }
        if (ctx->pc != 0x161D08u) { return; }
    }
    ctx->pc = 0x161D08u;
label_161d08:
    // 0x161d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161d0c: 0xaf808930  sw          $zero, -0x76D0($gp)
    ctx->pc = 0x161d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 0));
    // 0x161d10: 0xaf828948  sw          $v0, -0x76B8($gp)
    ctx->pc = 0x161d10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 2));
    // 0x161d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161d20: 0x3e00008  jr          $ra
    ctx->pc = 0x161D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161D20u;
            // 0x161d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161D28u;
}
