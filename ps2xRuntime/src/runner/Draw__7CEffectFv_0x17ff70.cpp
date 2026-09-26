#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__7CEffectFv
// Address: 0x17ff70 - 0x180124
void Draw__7CEffectFv_0x17ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__7CEffectFv_0x17ff70");
#endif

    switch (ctx->pc) {
        case 0x17ff88u: goto label_17ff88;
        case 0x17ffa0u: goto label_17ffa0;
        case 0x17ffacu: goto label_17ffac;
        case 0x17ffb8u: goto label_17ffb8;
        case 0x17ffc8u: goto label_17ffc8;
        case 0x17ffd4u: goto label_17ffd4;
        case 0x17ffecu: goto label_17ffec;
        case 0x180008u: goto label_180008;
        case 0x180018u: goto label_180018;
        case 0x180024u: goto label_180024;
        case 0x180030u: goto label_180030;
        case 0x18003cu: goto label_18003c;
        case 0x180048u: goto label_180048;
        case 0x180074u: goto label_180074;
        case 0x180084u: goto label_180084;
        case 0x180098u: goto label_180098;
        case 0x1800b0u: goto label_1800b0;
        case 0x1800bcu: goto label_1800bc;
        case 0x1800ccu: goto label_1800cc;
        case 0x1800d8u: goto label_1800d8;
        case 0x180100u: goto label_180100;
        case 0x18010cu: goto label_18010c;
        case 0x180114u: goto label_180114;
        default: break;
    }

    ctx->pc = 0x17ff70u;

    // 0x17ff70: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x17ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x17ff74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ff78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ff7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ff7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff80: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x17FF80u;
    SET_GPR_U32(ctx, 31, 0x17FF88u);
    ctx->pc = 0x17FF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF80u;
            // 0x17ff84: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF88u; }
        if (ctx->pc != 0x17FF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF88u; }
        if (ctx->pc != 0x17FF88u) { return; }
    }
    ctx->pc = 0x17FF88u;
label_17ff88:
    // 0x17ff88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ff8c: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x17FF8Cu;
    {
        const bool branch_taken_0x17ff8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF8Cu;
            // 0x17ff90: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff8c) {
            ctx->pc = 0x180114u;
            goto label_180114;
        }
    }
    ctx->pc = 0x17FF94u;
    // 0x17ff94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ff94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff98: 0xc04d104  jal         func_134410
    ctx->pc = 0x17FF98u;
    SET_GPR_U32(ctx, 31, 0x17FFA0u);
    ctx->pc = 0x17FF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF98u;
            // 0x17ff9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFA0u; }
        if (ctx->pc != 0x17FFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFA0u; }
        if (ctx->pc != 0x17FFA0u) { return; }
    }
    ctx->pc = 0x17FFA0u;
label_17ffa0:
    // 0x17ffa0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ffa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ffa4: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x17FFA4u;
    SET_GPR_U32(ctx, 31, 0x17FFACu);
    ctx->pc = 0x17FFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFA4u;
            // 0x17ffa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFACu; }
        if (ctx->pc != 0x17FFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFACu; }
        if (ctx->pc != 0x17FFACu) { return; }
    }
    ctx->pc = 0x17FFACu;
label_17ffac:
    // 0x17ffac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ffb0: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x17FFB0u;
    SET_GPR_U32(ctx, 31, 0x17FFB8u);
    ctx->pc = 0x17FFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFB0u;
            // 0x17ffb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFB8u; }
        if (ctx->pc != 0x17FFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFB8u; }
        if (ctx->pc != 0x17FFB8u) { return; }
    }
    ctx->pc = 0x17FFB8u;
label_17ffb8:
    // 0x17ffb8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ffbc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17ffc0: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x17FFC0u;
    SET_GPR_U32(ctx, 31, 0x17FFC8u);
    ctx->pc = 0x17FFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFC0u;
            // 0x17ffc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFC8u; }
        if (ctx->pc != 0x17FFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFC8u; }
        if (ctx->pc != 0x17FFC8u) { return; }
    }
    ctx->pc = 0x17FFC8u;
label_17ffc8:
    // 0x17ffc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ffcc: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x17FFCCu;
    SET_GPR_U32(ctx, 31, 0x17FFD4u);
    ctx->pc = 0x17FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFCCu;
            // 0x17ffd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFD4u; }
        if (ctx->pc != 0x17FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFD4u; }
        if (ctx->pc != 0x17FFD4u) { return; }
    }
    ctx->pc = 0x17FFD4u;
label_17ffd4:
    // 0x17ffd4: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x17ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x17ffd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ffdc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FFDCu;
    {
        const bool branch_taken_0x17ffdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFDCu;
            // 0x17ffe0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffdc) {
            ctx->pc = 0x17FFF4u;
            goto label_17fff4;
        }
    }
    ctx->pc = 0x17FFE4u;
    // 0x17ffe4: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x17FFE4u;
    SET_GPR_U32(ctx, 31, 0x17FFECu);
    ctx->pc = 0x17FFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFE4u;
            // 0x17ffe8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFECu; }
        if (ctx->pc != 0x17FFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFECu; }
        if (ctx->pc != 0x17FFECu) { return; }
    }
    ctx->pc = 0x17FFECu;
label_17ffec:
    // 0x17ffec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17FFECu;
    {
        const bool branch_taken_0x17ffec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFECu;
            // 0x17fff0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffec) {
            ctx->pc = 0x18001Cu;
            goto label_18001c;
        }
    }
    ctx->pc = 0x17FFF4u;
label_17fff4:
    // 0x17fff4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FFF4u;
    {
        const bool branch_taken_0x17fff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFF4u;
            // 0x17fff8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fff4) {
            ctx->pc = 0x180010u;
            goto label_180010;
        }
    }
    ctx->pc = 0x17FFFCu;
    // 0x17fffc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180000: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x180000u;
    SET_GPR_U32(ctx, 31, 0x180008u);
    ctx->pc = 0x180004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180000u;
            // 0x180004: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180008u; }
        if (ctx->pc != 0x180008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180008u; }
        if (ctx->pc != 0x180008u) { return; }
    }
    ctx->pc = 0x180008u;
label_180008:
    // 0x180008: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x180008u;
    {
        const bool branch_taken_0x180008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180008) {
            ctx->pc = 0x180018u;
            goto label_180018;
        }
    }
    ctx->pc = 0x180010u;
label_180010:
    // 0x180010: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x180010u;
    SET_GPR_U32(ctx, 31, 0x180018u);
    ctx->pc = 0x180014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180010u;
            // 0x180014: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180018u; }
        if (ctx->pc != 0x180018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180018u; }
        if (ctx->pc != 0x180018u) { return; }
    }
    ctx->pc = 0x180018u;
label_180018:
    // 0x180018: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x180018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18001c:
    // 0x18001c: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x18001Cu;
    SET_GPR_U32(ctx, 31, 0x180024u);
    ctx->pc = 0x180020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18001Cu;
            // 0x180020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180024u; }
        if (ctx->pc != 0x180024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180024u; }
        if (ctx->pc != 0x180024u) { return; }
    }
    ctx->pc = 0x180024u;
label_180024:
    // 0x180024: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x180024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180028: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x180028u;
    SET_GPR_U32(ctx, 31, 0x180030u);
    ctx->pc = 0x18002Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180028u;
            // 0x18002c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180030u; }
        if (ctx->pc != 0x180030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180030u; }
        if (ctx->pc != 0x180030u) { return; }
    }
    ctx->pc = 0x180030u;
label_180030:
    // 0x180030: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x180030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180034: 0xc04d424  jal         func_135090
    ctx->pc = 0x180034u;
    SET_GPR_U32(ctx, 31, 0x18003Cu);
    ctx->pc = 0x180038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180034u;
            // 0x180038: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18003Cu; }
        if (ctx->pc != 0x18003Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18003Cu; }
        if (ctx->pc != 0x18003Cu) { return; }
    }
    ctx->pc = 0x18003Cu;
label_18003c:
    // 0x18003c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180040: 0xc04d44c  jal         func_135130
    ctx->pc = 0x180040u;
    SET_GPR_U32(ctx, 31, 0x180048u);
    ctx->pc = 0x180044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180040u;
            // 0x180044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180048u; }
        if (ctx->pc != 0x180048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180048u; }
        if (ctx->pc != 0x180048u) { return; }
    }
    ctx->pc = 0x180048u;
label_180048:
    // 0x180048: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x180048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18004c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x18004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x180050: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x180050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180054: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x180054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x180058: 0xc60d0058  lwc1        $f13, 0x58($s0)
    ctx->pc = 0x180058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18005c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x18005cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x180060: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x180060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180068: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x180068u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x18006c: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x18006Cu;
    SET_GPR_U32(ctx, 31, 0x180074u);
    ctx->pc = 0x180070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18006Cu;
            // 0x180070: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180074u; }
        if (ctx->pc != 0x180074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180074u; }
        if (ctx->pc != 0x180074u) { return; }
    }
    ctx->pc = 0x180074u;
label_180074:
    // 0x180074: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x180074u;
    {
        const bool branch_taken_0x180074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180074u;
            // 0x180078: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180074) {
            ctx->pc = 0x180114u;
            goto label_180114;
        }
    }
    ctx->pc = 0x18007Cu;
    // 0x18007c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x18007Cu;
    SET_GPR_U32(ctx, 31, 0x180084u);
    ctx->pc = 0x180080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18007Cu;
            // 0x180080: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180084u; }
        if (ctx->pc != 0x180084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180084u; }
        if (ctx->pc != 0x180084u) { return; }
    }
    ctx->pc = 0x180084u;
label_180084:
    // 0x180084: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x180084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180088: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x180088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x18008c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18008cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180090: 0xc0a248c  jal         func_289230
    ctx->pc = 0x180090u;
    SET_GPR_U32(ctx, 31, 0x180098u);
    ctx->pc = 0x180094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180090u;
            // 0x180094: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180098u; }
        if (ctx->pc != 0x180098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180098u; }
        if (ctx->pc != 0x180098u) { return; }
    }
    ctx->pc = 0x180098u;
label_180098:
    // 0x180098: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x180098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18009c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x18009cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1800a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1800a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1800a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800a8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1800A8u;
    SET_GPR_U32(ctx, 31, 0x1800B0u);
    ctx->pc = 0x1800ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800A8u;
            // 0x1800ac: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800B0u; }
        if (ctx->pc != 0x1800B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800B0u; }
        if (ctx->pc != 0x1800B0u) { return; }
    }
    ctx->pc = 0x1800B0u;
label_1800b0:
    // 0x1800b0: 0x8e050144  lw          $a1, 0x144($s0)
    ctx->pc = 0x1800b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x1800b4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1800B4u;
    SET_GPR_U32(ctx, 31, 0x1800BCu);
    ctx->pc = 0x1800B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800B4u;
            // 0x1800b8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800BCu; }
        if (ctx->pc != 0x1800BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800BCu; }
        if (ctx->pc != 0x1800BCu) { return; }
    }
    ctx->pc = 0x1800BCu;
label_1800bc:
    // 0x1800bc: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1800bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1800c0: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x1800c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1800c4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1800C4u;
    SET_GPR_U32(ctx, 31, 0x1800CCu);
    ctx->pc = 0x1800C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800C4u;
            // 0x1800c8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800CCu; }
        if (ctx->pc != 0x1800CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800CCu; }
        if (ctx->pc != 0x1800CCu) { return; }
    }
    ctx->pc = 0x1800CCu;
label_1800cc:
    // 0x1800cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1800ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1800d0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1800D0u;
    SET_GPR_U32(ctx, 31, 0x1800D8u);
    ctx->pc = 0x1800D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800D0u;
            // 0x1800d4: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800D8u; }
        if (ctx->pc != 0x1800D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800D8u; }
        if (ctx->pc != 0x1800D8u) { return; }
    }
    ctx->pc = 0x1800D8u;
label_1800d8:
    // 0x1800d8: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x1800d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1800dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1800dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1800e0: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1800e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1800e4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1800e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1800e8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1800e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1800ec: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1800ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1800f0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1800f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1800f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1800f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1800f8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1800F8u;
    SET_GPR_U32(ctx, 31, 0x180100u);
    ctx->pc = 0x1800FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800F8u;
            // 0x1800fc: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180100u; }
        if (ctx->pc != 0x180100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180100u; }
        if (ctx->pc != 0x180100u) { return; }
    }
    ctx->pc = 0x180100u;
label_180100:
    // 0x180100: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x180100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x180104: 0xc04d318  jal         func_134C60
    ctx->pc = 0x180104u;
    SET_GPR_U32(ctx, 31, 0x18010Cu);
    ctx->pc = 0x180108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180104u;
            // 0x180108: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18010Cu; }
        if (ctx->pc != 0x18010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18010Cu; }
        if (ctx->pc != 0x18010Cu) { return; }
    }
    ctx->pc = 0x18010Cu;
label_18010c:
    // 0x18010c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x18010Cu;
    SET_GPR_U32(ctx, 31, 0x180114u);
    ctx->pc = 0x180110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18010Cu;
            // 0x180110: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180114u; }
        if (ctx->pc != 0x180114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180114u; }
        if (ctx->pc != 0x180114u) { return; }
    }
    ctx->pc = 0x180114u;
label_180114:
    // 0x180114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18011c: 0x3e00008  jr          $ra
    ctx->pc = 0x18011Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18011Cu;
            // 0x180120: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180124u;
}
