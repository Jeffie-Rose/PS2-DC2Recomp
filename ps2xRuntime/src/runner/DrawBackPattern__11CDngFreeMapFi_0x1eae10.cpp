#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawBackPattern__11CDngFreeMapFi
// Address: 0x1eae10 - 0x1eaf6c
void DrawBackPattern__11CDngFreeMapFi_0x1eae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawBackPattern__11CDngFreeMapFi_0x1eae10");
#endif

    switch (ctx->pc) {
        case 0x1eae30u: goto label_1eae30;
        case 0x1eae68u: goto label_1eae68;
        case 0x1eae74u: goto label_1eae74;
        case 0x1eae80u: goto label_1eae80;
        case 0x1eae8cu: goto label_1eae8c;
        case 0x1eaea4u: goto label_1eaea4;
        case 0x1eaeb8u: goto label_1eaeb8;
        case 0x1eaeccu: goto label_1eaecc;
        case 0x1eaed4u: goto label_1eaed4;
        case 0x1eaf00u: goto label_1eaf00;
        case 0x1eaf20u: goto label_1eaf20;
        default: break;
    }

    ctx->pc = 0x1eae10u;

    // 0x1eae10: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1eae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1eae14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eae18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eae1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eae20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1eae20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eae24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae28: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1EAE28u;
    SET_GPR_U32(ctx, 31, 0x1EAE30u);
    ctx->pc = 0x1EAE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE28u;
            // 0x1eae2c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE30u; }
        if (ctx->pc != 0x1EAE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE30u; }
        if (ctx->pc != 0x1EAE30u) { return; }
    }
    ctx->pc = 0x1EAE30u;
label_1eae30:
    // 0x1eae30: 0x8604000c  lh          $a0, 0xC($s0)
    ctx->pc = 0x1eae30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eae34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eae38: 0x14830026  bne         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EAE38u;
    {
        const bool branch_taken_0x1eae38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eae38) {
            ctx->pc = 0x1EAED4u;
            goto label_1eaed4;
        }
    }
    ctx->pc = 0x1EAE40u;
    // 0x1eae40: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1eae40u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eae44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eae44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eae48: 0x0  nop
    ctx->pc = 0x1eae48u;
    // NOP
    // 0x1eae4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1eae4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eae50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eae50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eae54: 0x0  nop
    ctx->pc = 0x1eae54u;
    // NOP
    // 0x1eae58: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x1EAE58u;
    {
        const bool branch_taken_0x1eae58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EAE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE58u;
            // 0x1eae5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae58) {
            ctx->pc = 0x1EAF58u;
            goto label_1eaf58;
        }
    }
    ctx->pc = 0x1EAE60u;
    // 0x1eae60: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1EAE60u;
    SET_GPR_U32(ctx, 31, 0x1EAE68u);
    ctx->pc = 0x1EAE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE60u;
            // 0x1eae64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE68u; }
        if (ctx->pc != 0x1EAE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE68u; }
        if (ctx->pc != 0x1EAE68u) { return; }
    }
    ctx->pc = 0x1EAE68u;
label_1eae68:
    // 0x1eae68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1eae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eae6c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1EAE6Cu;
    SET_GPR_U32(ctx, 31, 0x1EAE74u);
    ctx->pc = 0x1EAE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE6Cu;
            // 0x1eae70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE74u; }
        if (ctx->pc != 0x1EAE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE74u; }
        if (ctx->pc != 0x1EAE74u) { return; }
    }
    ctx->pc = 0x1EAE74u;
label_1eae74:
    // 0x1eae74: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1eae74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eae78: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x1EAE78u;
    SET_GPR_U32(ctx, 31, 0x1EAE80u);
    ctx->pc = 0x1EAE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE78u;
            // 0x1eae7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE80u; }
        if (ctx->pc != 0x1EAE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE80u; }
        if (ctx->pc != 0x1EAE80u) { return; }
    }
    ctx->pc = 0x1EAE80u;
label_1eae80:
    // 0x1eae80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1eae80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eae84: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EAE84u;
    SET_GPR_U32(ctx, 31, 0x1EAE8Cu);
    ctx->pc = 0x1EAE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE84u;
            // 0x1eae88: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE8Cu; }
        if (ctx->pc != 0x1EAE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE8Cu; }
        if (ctx->pc != 0x1EAE8Cu) { return; }
    }
    ctx->pc = 0x1EAE8Cu;
label_1eae8c:
    // 0x1eae8c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1eae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eae90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eae90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eae94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eae98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae9c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EAE9Cu;
    SET_GPR_U32(ctx, 31, 0x1EAEA4u);
    ctx->pc = 0x1EAEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE9Cu;
            // 0x1eaea0: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEA4u; }
        if (ctx->pc != 0x1EAEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEA4u; }
        if (ctx->pc != 0x1EAEA4u) { return; }
    }
    ctx->pc = 0x1EAEA4u;
label_1eaea4:
    // 0x1eaea4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1eaea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eaea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eaea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaeac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eaeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaeb0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1EAEB0u;
    SET_GPR_U32(ctx, 31, 0x1EAEB8u);
    ctx->pc = 0x1EAEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEB0u;
            // 0x1eaeb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEB8u; }
        if (ctx->pc != 0x1EAEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAEB8u; }
        if (ctx->pc != 0x1EAEB8u) { return; }
    }
    ctx->pc = 0x1EAEB8u;
label_1eaeb8:
    // 0x1eaeb8: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x1eaeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1eaebc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1eaebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eaec0: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x1eaec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1eaec4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1EAEC4u;
    SET_GPR_U32(ctx, 31, 0x1EAECCu);
    ctx->pc = 0x1EAEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEC4u;
            // 0x1eaec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAECCu; }
        if (ctx->pc != 0x1EAECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAECCu; }
        if (ctx->pc != 0x1EAECCu) { return; }
    }
    ctx->pc = 0x1EAECCu;
label_1eaecc:
    // 0x1eaecc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EAECCu;
    SET_GPR_U32(ctx, 31, 0x1EAED4u);
    ctx->pc = 0x1EAED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAECCu;
            // 0x1eaed0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAED4u; }
        if (ctx->pc != 0x1EAED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAED4u; }
        if (ctx->pc != 0x1EAED4u) { return; }
    }
    ctx->pc = 0x1EAED4u;
label_1eaed4:
    // 0x1eaed4: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x1eaed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eaed8: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EAED8u;
    {
        const bool branch_taken_0x1eaed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaed8) {
            ctx->pc = 0x1EAF58u;
            goto label_1eaf58;
        }
    }
    ctx->pc = 0x1EAEE0u;
    // 0x1eaee0: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x1eaee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1eaee4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EAEE4u;
    {
        const bool branch_taken_0x1eaee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEE4u;
            // 0x1eaee8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaee4) {
            ctx->pc = 0x1EAF58u;
            goto label_1eaf58;
        }
    }
    ctx->pc = 0x1EAEECu;
    // 0x1eaeec: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1eaeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1eaef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eaef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaef4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1eaef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eaef8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1EAEF8u;
    SET_GPR_U32(ctx, 31, 0x1EAF00u);
    ctx->pc = 0x1EAEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAEF8u;
            // 0x1eaefc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF00u; }
        if (ctx->pc != 0x1EAF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF00u; }
        if (ctx->pc != 0x1EAF00u) { return; }
    }
    ctx->pc = 0x1EAF00u;
label_1eaf00:
    // 0x1eaf00: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x1eaf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eaf04: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x1eaf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1eaf08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1eaf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eaf0c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1eaf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1eaf10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1eaf10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eaf14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eaf14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaf18: 0xc088f58  jal         func_223D60
    ctx->pc = 0x1EAF18u;
    SET_GPR_U32(ctx, 31, 0x1EAF20u);
    ctx->pc = 0x1EAF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF18u;
            // 0x1eaf1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D60u;
    if (runtime->hasFunction(0x223D60u)) {
        auto targetFn = runtime->lookupFunction(0x223D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF20u; }
        if (ctx->pc != 0x1EAF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect_i_iPUc_0x223d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAF20u; }
        if (ctx->pc != 0x1EAF20u) { return; }
    }
    ctx->pc = 0x1EAF20u;
label_1eaf20:
    // 0x1eaf20: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x1eaf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eaf24: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1eaf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1eaf28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1eaf28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eaf2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eaf2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eaf30: 0x0  nop
    ctx->pc = 0x1eaf30u;
    // NOP
    // 0x1eaf34: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1eaf34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1eaf38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eaf38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eaf3c: 0x0  nop
    ctx->pc = 0x1eaf3cu;
    // NOP
    // 0x1eaf40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAF40u;
    {
        const bool branch_taken_0x1eaf40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EAF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF40u;
            // 0x1eaf44: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf40) {
            ctx->pc = 0x1EAF58u;
            goto label_1eaf58;
        }
    }
    ctx->pc = 0x1EAF48u;
    // 0x1eaf48: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1eaf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaf4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eaf4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eaf50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eaf50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eaf54: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1eaf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1eaf58:
    // 0x1eaf58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eaf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eaf5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eaf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaf60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eaf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaf64: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF64u;
            // 0x1eaf68: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAF6Cu;
}
