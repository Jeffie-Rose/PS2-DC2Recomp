#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemInfoCursorDraw__FRi
// Address: 0x24dc50 - 0x24e180
void MenuItemInfoCursorDraw__FRi_0x24dc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemInfoCursorDraw__FRi_0x24dc50");
#endif

    switch (ctx->pc) {
        case 0x24dca4u: goto label_24dca4;
        case 0x24dcd0u: goto label_24dcd0;
        case 0x24dce0u: goto label_24dce0;
        case 0x24dcf8u: goto label_24dcf8;
        case 0x24dd10u: goto label_24dd10;
        case 0x24dd28u: goto label_24dd28;
        case 0x24dd40u: goto label_24dd40;
        case 0x24dd48u: goto label_24dd48;
        case 0x24dd54u: goto label_24dd54;
        case 0x24dd60u: goto label_24dd60;
        case 0x24dd6cu: goto label_24dd6c;
        case 0x24dd78u: goto label_24dd78;
        case 0x24dd90u: goto label_24dd90;
        case 0x24dde0u: goto label_24dde0;
        case 0x24ddecu: goto label_24ddec;
        case 0x24de18u: goto label_24de18;
        case 0x24de2cu: goto label_24de2c;
        case 0x24de50u: goto label_24de50;
        case 0x24de74u: goto label_24de74;
        case 0x24de88u: goto label_24de88;
        case 0x24dea4u: goto label_24dea4;
        case 0x24deb8u: goto label_24deb8;
        case 0x24def4u: goto label_24def4;
        case 0x24df18u: goto label_24df18;
        case 0x24df2cu: goto label_24df2c;
        case 0x24df64u: goto label_24df64;
        case 0x24df78u: goto label_24df78;
        case 0x24df80u: goto label_24df80;
        case 0x24df8cu: goto label_24df8c;
        case 0x24df98u: goto label_24df98;
        case 0x24dfb0u: goto label_24dfb0;
        case 0x24dffcu: goto label_24dffc;
        case 0x24e010u: goto label_24e010;
        case 0x24e06cu: goto label_24e06c;
        case 0x24e080u: goto label_24e080;
        case 0x24e0c8u: goto label_24e0c8;
        case 0x24e0dcu: goto label_24e0dc;
        case 0x24e0ecu: goto label_24e0ec;
        case 0x24e100u: goto label_24e100;
        case 0x24e110u: goto label_24e110;
        case 0x24e124u: goto label_24e124;
        case 0x24e134u: goto label_24e134;
        case 0x24e148u: goto label_24e148;
        case 0x24e150u: goto label_24e150;
        default: break;
    }

    ctx->pc = 0x24dc50u;

    // 0x24dc50: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x24dc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x24dc54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24dc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24dc58: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24dc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24dc5c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x24dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x24dc60: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x24dc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x24dc64: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24dc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x24dc68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24dc6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24dc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24dc70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24dc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24dc74: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x24dc74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24dc78: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x24dc78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24dc7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x24dc7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24dc80: 0x9023dab0  lbu         $v1, -0x2550($at)
    ctx->pc = 0x24dc80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294957744)));
    // 0x24dc84: 0x10600132  beqz        $v1, . + 4 + (0x132 << 2)
    ctx->pc = 0x24DC84u;
    {
        const bool branch_taken_0x24dc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC84u;
            // 0x24dc88: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc84) {
            ctx->pc = 0x24E150u;
            goto label_24e150;
        }
    }
    ctx->pc = 0x24DC8Cu;
    // 0x24dc8c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x24dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x24dc90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24dc90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24dc94: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x24dc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x24dc98: 0x24a5abf0  addiu       $a1, $a1, -0x5410
    ctx->pc = 0x24dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945776));
    // 0x24dc9c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x24DC9Cu;
    SET_GPR_U32(ctx, 31, 0x24DCA4u);
    ctx->pc = 0x24DCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DC9Cu;
            // 0x24dca0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DCA4u; }
        if (ctx->pc != 0x24DCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DCA4u; }
        if (ctx->pc != 0x24DCA4u) { return; }
    }
    ctx->pc = 0x24DCA4u;
label_24dca4:
    // 0x24dca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24dca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dca8: 0x12000129  beqz        $s0, . + 4 + (0x129 << 2)
    ctx->pc = 0x24DCA8u;
    {
        const bool branch_taken_0x24dca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DCA8u;
            // 0x24dcac: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dca8) {
            ctx->pc = 0x24E150u;
            goto label_24e150;
        }
    }
    ctx->pc = 0x24DCB0u;
    // 0x24dcb0: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x24dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x24dcb4: 0xc420dab8  lwc1        $f0, -0x2548($at)
    ctx->pc = 0x24dcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294957752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24dcb8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x24dcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x24dcbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24dcbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24dcc0: 0x0  nop
    ctx->pc = 0x24dcc0u;
    // NOP
    // 0x24dcc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24dcc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24dcc8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x24DCC8u;
    SET_GPR_U32(ctx, 31, 0x24DCD0u);
    ctx->pc = 0x24DCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DCC8u;
            // 0x24dccc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DCD0u; }
        if (ctx->pc != 0x24DCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DCD0u; }
        if (ctx->pc != 0x24DCD0u) { return; }
    }
    ctx->pc = 0x24DCD0u;
label_24dcd0:
    // 0x24dcd0: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x24dcd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24dcd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x24dcd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x24dcd8: 0xc08878c  jal         func_221E30
    ctx->pc = 0x24DCD8u;
    SET_GPR_U32(ctx, 31, 0x24DCE0u);
    ctx->pc = 0x24DCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DCD8u;
            // 0x24dcdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DCE0u; }
        if (ctx->pc != 0x24DCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DCE0u; }
        if (ctx->pc != 0x24DCE0u) { return; }
    }
    ctx->pc = 0x24DCE0u;
label_24dce0:
    // 0x24dce0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24dce4: 0x2405018c  addiu       $a1, $zero, 0x18C
    ctx->pc = 0x24dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 396));
    // 0x24dce8: 0x240600ca  addiu       $a2, $zero, 0xCA
    ctx->pc = 0x24dce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x24dcec: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x24dcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x24dcf0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24DCF0u;
    SET_GPR_U32(ctx, 31, 0x24DCF8u);
    ctx->pc = 0x24DCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DCF0u;
            // 0x24dcf4: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DCF8u; }
        if (ctx->pc != 0x24DCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DCF8u; }
        if (ctx->pc != 0x24DCF8u) { return; }
    }
    ctx->pc = 0x24DCF8u;
label_24dcf8:
    // 0x24dcf8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24dcfc: 0x2405018c  addiu       $a1, $zero, 0x18C
    ctx->pc = 0x24dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 396));
    // 0x24dd00: 0x240600e5  addiu       $a2, $zero, 0xE5
    ctx->pc = 0x24dd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x24dd04: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x24dd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x24dd08: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24DD08u;
    SET_GPR_U32(ctx, 31, 0x24DD10u);
    ctx->pc = 0x24DD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD08u;
            // 0x24dd0c: 0x2408ffe3  addiu       $t0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD10u; }
        if (ctx->pc != 0x24DD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD10u; }
        if (ctx->pc != 0x24DD10u) { return; }
    }
    ctx->pc = 0x24DD10u;
label_24dd10:
    // 0x24dd10: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24dd14: 0x240501a2  addiu       $a1, $zero, 0x1A2
    ctx->pc = 0x24dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
    // 0x24dd18: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x24dd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x24dd1c: 0x2407ffea  addiu       $a3, $zero, -0x16
    ctx->pc = 0x24dd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
    // 0x24dd20: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24DD20u;
    SET_GPR_U32(ctx, 31, 0x24DD28u);
    ctx->pc = 0x24DD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD20u;
            // 0x24dd24: 0x2408001e  addiu       $t0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD28u; }
        if (ctx->pc != 0x24DD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD28u; }
        if (ctx->pc != 0x24DD28u) { return; }
    }
    ctx->pc = 0x24DD28u;
label_24dd28:
    // 0x24dd28: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x24dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24dd2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24dd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24dd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd34: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x24dd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x24dd38: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x24DD38u;
    SET_GPR_U32(ctx, 31, 0x24DD40u);
    ctx->pc = 0x24DD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD38u;
            // 0x24dd3c: 0x24080029  addiu       $t0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD40u; }
        if (ctx->pc != 0x24DD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD40u; }
        if (ctx->pc != 0x24DD40u) { return; }
    }
    ctx->pc = 0x24DD40u;
label_24dd40:
    // 0x24dd40: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x24DD40u;
    SET_GPR_U32(ctx, 31, 0x24DD48u);
    ctx->pc = 0x24DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD40u;
            // 0x24dd44: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD48u; }
        if (ctx->pc != 0x24DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD48u; }
        if (ctx->pc != 0x24DD48u) { return; }
    }
    ctx->pc = 0x24DD48u;
label_24dd48:
    // 0x24dd48: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24dd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24dd4c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x24DD4Cu;
    SET_GPR_U32(ctx, 31, 0x24DD54u);
    ctx->pc = 0x24DD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD4Cu;
            // 0x24dd50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD54u; }
        if (ctx->pc != 0x24DD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD54u; }
        if (ctx->pc != 0x24DD54u) { return; }
    }
    ctx->pc = 0x24DD54u;
label_24dd54:
    // 0x24dd54: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24dd58: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x24DD58u;
    SET_GPR_U32(ctx, 31, 0x24DD60u);
    ctx->pc = 0x24DD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD58u;
            // 0x24dd5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD60u; }
        if (ctx->pc != 0x24DD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD60u; }
        if (ctx->pc != 0x24DD60u) { return; }
    }
    ctx->pc = 0x24DD60u;
label_24dd60:
    // 0x24dd60: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24dd64: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x24DD64u;
    SET_GPR_U32(ctx, 31, 0x24DD6Cu);
    ctx->pc = 0x24DD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD64u;
            // 0x24dd68: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD6Cu; }
        if (ctx->pc != 0x24DD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD6Cu; }
        if (ctx->pc != 0x24DD6Cu) { return; }
    }
    ctx->pc = 0x24DD6Cu;
label_24dd6c:
    // 0x24dd6c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24dd70: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x24DD70u;
    SET_GPR_U32(ctx, 31, 0x24DD78u);
    ctx->pc = 0x24DD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD70u;
            // 0x24dd74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD78u; }
        if (ctx->pc != 0x24DD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD78u; }
        if (ctx->pc != 0x24DD78u) { return; }
    }
    ctx->pc = 0x24DD78u;
label_24dd78:
    // 0x24dd78: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24dd7c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24dd80: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24dd80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24dd84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd88: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24DD88u;
    SET_GPR_U32(ctx, 31, 0x24DD90u);
    ctx->pc = 0x24DD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD88u;
            // 0x24dd8c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD90u; }
        if (ctx->pc != 0x24DD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD90u; }
        if (ctx->pc != 0x24DD90u) { return; }
    }
    ctx->pc = 0x24DD90u;
label_24dd90:
    // 0x24dd90: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24dd94: 0x84430110  lh          $v1, 0x110($v0)
    ctx->pc = 0x24dd94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x24dd98: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DD98u;
    {
        const bool branch_taken_0x24dd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DD98u;
            // 0x24dd9c: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd98) {
            ctx->pc = 0x24DDB0u;
            goto label_24ddb0;
        }
    }
    ctx->pc = 0x24DDA0u;
    // 0x24dda0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dda4: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x24DDA4u;
    {
        const bool branch_taken_0x24dda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24dda4) {
            ctx->pc = 0x24DEB8u;
            goto label_24deb8;
        }
    }
    ctx->pc = 0x24DDACu;
    // 0x24ddac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x24ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_24ddb0:
    // 0x24ddb0: 0x3c0340f0  lui         $v1, 0x40F0
    ctx->pc = 0x24ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16624 << 16));
    // 0x24ddb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ddb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ddb8: 0x24120036  addiu       $s2, $zero, 0x36
    ctx->pc = 0x24ddb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x24ddbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24ddbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ddc0: 0x0  nop
    ctx->pc = 0x24ddc0u;
    // NOP
    // 0x24ddc4: 0x46140582  mul.s       $f22, $f0, $f20
    ctx->pc = 0x24ddc4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x24ddc8: 0x3c0242b6  lui         $v0, 0x42B6
    ctx->pc = 0x24ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17078 << 16));
    // 0x24ddcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ddccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ddd0: 0x0  nop
    ctx->pc = 0x24ddd0u;
    // NOP
    // 0x24ddd4: 0x46140d42  mul.s       $f21, $f1, $f20
    ctx->pc = 0x24ddd4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x24ddd8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24DDD8u;
    SET_GPR_U32(ctx, 31, 0x24DDE0u);
    ctx->pc = 0x24DDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DDD8u;
            // 0x24dddc: 0x46160301  sub.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DDE0u; }
        if (ctx->pc != 0x24DDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DDE0u; }
        if (ctx->pc != 0x24DDE0u) { return; }
    }
    ctx->pc = 0x24DDE0u;
label_24dde0:
    // 0x24dde0: 0x27b300b4  addiu       $s3, $sp, 0xB4
    ctx->pc = 0x24dde0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x24dde4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24dde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dde8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x24dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_24ddec:
    // 0x24ddec: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x24ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x24ddf0: 0x2442dab0  addiu       $v0, $v0, -0x2550
    ctx->pc = 0x24ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957744));
    // 0x24ddf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24ddf8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x24ddf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x24ddfc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24DDFCu;
    {
        const bool branch_taken_0x24ddfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ddfc) {
            ctx->pc = 0x24DE2Cu;
            goto label_24de2c;
        }
    }
    ctx->pc = 0x24DE04u;
    // 0x24de04: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x24de04u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24de08: 0x0  nop
    ctx->pc = 0x24de08u;
    // NOP
    // 0x24de0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24de0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24de10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24DE10u;
    SET_GPR_U32(ctx, 31, 0x24DE18u);
    ctx->pc = 0x24DE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE10u;
            // 0x24de14: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE18u; }
        if (ctx->pc != 0x24DE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE18u; }
        if (ctx->pc != 0x24DE18u) { return; }
    }
    ctx->pc = 0x24DE18u;
label_24de18:
    // 0x24de18: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x24de18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x24de1c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24de20: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x24de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24de24: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x24DE24u;
    SET_GPR_U32(ctx, 31, 0x24DE2Cu);
    ctx->pc = 0x24DE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE24u;
            // 0x24de28: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE2Cu; }
        if (ctx->pc != 0x24DE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE2Cu; }
        if (ctx->pc != 0x24DE2Cu) { return; }
    }
    ctx->pc = 0x24DE2Cu;
label_24de2c:
    // 0x24de2c: 0x0  nop
    ctx->pc = 0x24de2cu;
    // NOP
    // 0x24de30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24de30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24de34: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x24de34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24de38: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x24DE38u;
    {
        const bool branch_taken_0x24de38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE38u;
            // 0x24de3c: 0x2652002a  addiu       $s2, $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de38) {
            ctx->pc = 0x24DDECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ddec;
        }
    }
    ctx->pc = 0x24DE40u;
    // 0x24de40: 0x3c024393  lui         $v0, 0x4393
    ctx->pc = 0x24de40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17299 << 16));
    // 0x24de44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24de44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24de48: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24DE48u;
    SET_GPR_U32(ctx, 31, 0x24DE50u);
    ctx->pc = 0x24DE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE48u;
            // 0x24de4c: 0x46160301  sub.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE50u; }
        if (ctx->pc != 0x24DE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE50u; }
        if (ctx->pc != 0x24DE50u) { return; }
    }
    ctx->pc = 0x24DE50u;
label_24de50:
    // 0x24de50: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x24de50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x24de54: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24de54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24de58: 0x9022dab4  lbu         $v0, -0x254C($at)
    ctx->pc = 0x24de58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294957748)));
    // 0x24de5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24DE5Cu;
    {
        const bool branch_taken_0x24de5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24de5c) {
            ctx->pc = 0x24DE88u;
            goto label_24de88;
        }
    }
    ctx->pc = 0x24DE64u;
    // 0x24de64: 0x3c024238  lui         $v0, 0x4238
    ctx->pc = 0x24de64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16952 << 16));
    // 0x24de68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24de68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24de6c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24DE6Cu;
    SET_GPR_U32(ctx, 31, 0x24DE74u);
    ctx->pc = 0x24DE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE6Cu;
            // 0x24de70: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE74u; }
        if (ctx->pc != 0x24DE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE74u; }
        if (ctx->pc != 0x24DE74u) { return; }
    }
    ctx->pc = 0x24DE74u;
label_24de74:
    // 0x24de74: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x24de74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x24de78: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24de78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24de7c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x24de7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24de80: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x24DE80u;
    SET_GPR_U32(ctx, 31, 0x24DE88u);
    ctx->pc = 0x24DE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE80u;
            // 0x24de84: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE88u; }
        if (ctx->pc != 0x24DE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DE88u; }
        if (ctx->pc != 0x24DE88u) { return; }
    }
    ctx->pc = 0x24DE88u;
label_24de88:
    // 0x24de88: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24de88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24de8c: 0x9022dab5  lbu         $v0, -0x254B($at)
    ctx->pc = 0x24de8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294957749)));
    // 0x24de90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24DE90u;
    {
        const bool branch_taken_0x24de90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE90u;
            // 0x24de94: 0x3c024334  lui         $v0, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de90) {
            ctx->pc = 0x24DEB8u;
            goto label_24deb8;
        }
    }
    ctx->pc = 0x24DE98u;
    // 0x24de98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24de98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24de9c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24DE9Cu;
    SET_GPR_U32(ctx, 31, 0x24DEA4u);
    ctx->pc = 0x24DEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DE9Cu;
            // 0x24dea0: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DEA4u; }
        if (ctx->pc != 0x24DEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DEA4u; }
        if (ctx->pc != 0x24DEA4u) { return; }
    }
    ctx->pc = 0x24DEA4u;
label_24dea4:
    // 0x24dea4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x24dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x24dea8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24deac: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x24deacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24deb0: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x24DEB0u;
    SET_GPR_U32(ctx, 31, 0x24DEB8u);
    ctx->pc = 0x24DEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DEB0u;
            // 0x24deb4: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DEB8u; }
        if (ctx->pc != 0x24DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DEB8u; }
        if (ctx->pc != 0x24DEB8u) { return; }
    }
    ctx->pc = 0x24DEB8u;
label_24deb8:
    // 0x24deb8: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24debc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24dec0: 0x84630110  lh          $v1, 0x110($v1)
    ctx->pc = 0x24dec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x24dec4: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x24DEC4u;
    {
        const bool branch_taken_0x24dec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DEC4u;
            // 0x24dec8: 0x3c0240f0  lui         $v0, 0x40F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dec4) {
            ctx->pc = 0x24DF78u;
            goto label_24df78;
        }
    }
    ctx->pc = 0x24DECCu;
    // 0x24decc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x24deccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x24ded0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ded0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ded4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24ded4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ded8: 0x0  nop
    ctx->pc = 0x24ded8u;
    // NOP
    // 0x24dedc: 0x46140d42  mul.s       $f21, $f1, $f20
    ctx->pc = 0x24dedcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x24dee0: 0x3c02439b  lui         $v0, 0x439B
    ctx->pc = 0x24dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17307 << 16));
    // 0x24dee4: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x24dee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x24dee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24deec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24DEECu;
    SET_GPR_U32(ctx, 31, 0x24DEF4u);
    ctx->pc = 0x24DEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DEECu;
            // 0x24def0: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DEF4u; }
        if (ctx->pc != 0x24DEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DEF4u; }
        if (ctx->pc != 0x24DEF4u) { return; }
    }
    ctx->pc = 0x24DEF4u;
label_24def4:
    // 0x24def4: 0x27b100b4  addiu       $s1, $sp, 0xB4
    ctx->pc = 0x24def4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x24def8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24def8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24defc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x24defcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x24df00: 0x9022dab4  lbu         $v0, -0x254C($at)
    ctx->pc = 0x24df00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294957748)));
    // 0x24df04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24DF04u;
    {
        const bool branch_taken_0x24df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DF04u;
            // 0x24df08: 0x3c024326  lui         $v0, 0x4326 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17190 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df04) {
            ctx->pc = 0x24DF2Cu;
            goto label_24df2c;
        }
    }
    ctx->pc = 0x24DF0Cu;
    // 0x24df0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24df0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24df10: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24DF10u;
    SET_GPR_U32(ctx, 31, 0x24DF18u);
    ctx->pc = 0x24DF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DF10u;
            // 0x24df14: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF18u; }
        if (ctx->pc != 0x24DF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF18u; }
        if (ctx->pc != 0x24DF18u) { return; }
    }
    ctx->pc = 0x24DF18u;
label_24df18:
    // 0x24df18: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x24df18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x24df1c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24df20: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x24df20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24df24: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x24DF24u;
    SET_GPR_U32(ctx, 31, 0x24DF2Cu);
    ctx->pc = 0x24DF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DF24u;
            // 0x24df28: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF2Cu; }
        if (ctx->pc != 0x24DF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF2Cu; }
        if (ctx->pc != 0x24DF2Cu) { return; }
    }
    ctx->pc = 0x24DF2Cu;
label_24df2c:
    // 0x24df2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24df30: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24df30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24df34: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x24df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x24df38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x24df38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x24df3c: 0x9022dab5  lbu         $v0, -0x254B($at)
    ctx->pc = 0x24df3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294957749)));
    // 0x24df40: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24DF40u;
    {
        const bool branch_taken_0x24df40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DF40u;
            // 0x24df44: 0x3c034326  lui         $v1, 0x4326 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17190 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df40) {
            ctx->pc = 0x24DF78u;
            goto label_24df78;
        }
    }
    ctx->pc = 0x24DF48u;
    // 0x24df48: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x24df48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x24df4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24df4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24df50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24df50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24df54: 0x0  nop
    ctx->pc = 0x24df54u;
    // NOP
    // 0x24df58: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x24df58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x24df5c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24DF5Cu;
    SET_GPR_U32(ctx, 31, 0x24DF64u);
    ctx->pc = 0x24DF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DF5Cu;
            // 0x24df60: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF64u; }
        if (ctx->pc != 0x24DF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF64u; }
        if (ctx->pc != 0x24DF64u) { return; }
    }
    ctx->pc = 0x24DF64u;
label_24df64:
    // 0x24df64: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x24df64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x24df68: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24df68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24df6c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x24df6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24df70: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x24DF70u;
    SET_GPR_U32(ctx, 31, 0x24DF78u);
    ctx->pc = 0x24DF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DF70u;
            // 0x24df74: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF78u; }
        if (ctx->pc != 0x24DF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF78u; }
        if (ctx->pc != 0x24DF78u) { return; }
    }
    ctx->pc = 0x24DF78u;
label_24df78:
    // 0x24df78: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x24DF78u;
    SET_GPR_U32(ctx, 31, 0x24DF80u);
    ctx->pc = 0x24DF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DF78u;
            // 0x24df7c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF80u; }
        if (ctx->pc != 0x24DF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF80u; }
        if (ctx->pc != 0x24DF80u) { return; }
    }
    ctx->pc = 0x24DF80u;
label_24df80:
    // 0x24df80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24df80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24df84: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x24DF84u;
    SET_GPR_U32(ctx, 31, 0x24DF8Cu);
    ctx->pc = 0x24DF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DF84u;
            // 0x24df88: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF8Cu; }
        if (ctx->pc != 0x24DF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF8Cu; }
        if (ctx->pc != 0x24DF8Cu) { return; }
    }
    ctx->pc = 0x24DF8Cu;
label_24df8c:
    // 0x24df8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24df8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24df90: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x24DF90u;
    SET_GPR_U32(ctx, 31, 0x24DF98u);
    ctx->pc = 0x24DF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DF90u;
            // 0x24df94: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF98u; }
        if (ctx->pc != 0x24DF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DF98u; }
        if (ctx->pc != 0x24DF98u) { return; }
    }
    ctx->pc = 0x24DF98u;
label_24df98:
    // 0x24df98: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24df98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24df9c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24dfa0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24dfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfa4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24dfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfa8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x24DFA8u;
    SET_GPR_U32(ctx, 31, 0x24DFB0u);
    ctx->pc = 0x24DFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DFA8u;
            // 0x24dfac: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DFB0u; }
        if (ctx->pc != 0x24DFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DFB0u; }
        if (ctx->pc != 0x24DFB0u) { return; }
    }
    ctx->pc = 0x24DFB0u;
label_24dfb0:
    // 0x24dfb0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24dfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24dfb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24dfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dfb8: 0x9022dab6  lbu         $v0, -0x254A($at)
    ctx->pc = 0x24dfb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294957750)));
    // 0x24dfbc: 0x14460062  bne         $v0, $a2, . + 4 + (0x62 << 2)
    ctx->pc = 0x24DFBCu;
    {
        const bool branch_taken_0x24dfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x24DFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DFBCu;
            // 0x24dfc0: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfbc) {
            ctx->pc = 0x24E148u;
            goto label_24e148;
        }
    }
    ctx->pc = 0x24DFC4u;
    // 0x24dfc4: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x24dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x24dfc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24dfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24dfcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24dfccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dfd0: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24dfd4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x24dfd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x24dfd8: 0x84430110  lh          $v1, 0x110($v0)
    ctx->pc = 0x24dfd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x24dfdc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DFDCu;
    {
        const bool branch_taken_0x24dfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DFDCu;
            // 0x24dfe0: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfdc) {
            ctx->pc = 0x24DFECu;
            goto label_24dfec;
        }
    }
    ctx->pc = 0x24DFE4u;
    // 0x24dfe4: 0x1466000c  bne         $v1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x24DFE4u;
    {
        const bool branch_taken_0x24dfe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x24DFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24DFE4u;
            // 0x24dfe8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfe4) {
            ctx->pc = 0x24E018u;
            goto label_24e018;
        }
    }
    ctx->pc = 0x24DFECu;
label_24dfec:
    // 0x24dfec: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x24dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x24dff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dff4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24DFF4u;
    SET_GPR_U32(ctx, 31, 0x24DFFCu);
    ctx->pc = 0x24DFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24DFF4u;
            // 0x24dff8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DFFCu; }
        if (ctx->pc != 0x24DFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DFFCu; }
        if (ctx->pc != 0x24DFFCu) { return; }
    }
    ctx->pc = 0x24DFFCu;
label_24dffc:
    // 0x24dffc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x24dffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x24e000: 0x3c02433e  lui         $v0, 0x433E
    ctx->pc = 0x24e000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17214 << 16));
    // 0x24e004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e008: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24E008u;
    SET_GPR_U32(ctx, 31, 0x24E010u);
    ctx->pc = 0x24E00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E008u;
            // 0x24e00c: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E010u; }
        if (ctx->pc != 0x24E010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E010u; }
        if (ctx->pc != 0x24E010u) { return; }
    }
    ctx->pc = 0x24E010u;
label_24e010:
    // 0x24e010: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24E010u;
    {
        const bool branch_taken_0x24e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E010u;
            // 0x24e014: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e010) {
            ctx->pc = 0x24E084u;
            goto label_24e084;
        }
    }
    ctx->pc = 0x24E018u;
label_24e018:
    // 0x24e018: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E018u;
    {
        const bool branch_taken_0x24e018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E018u;
            // 0x24e01c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e018) {
            ctx->pc = 0x24E028u;
            goto label_24e028;
        }
    }
    ctx->pc = 0x24E020u;
    // 0x24e020: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E020u;
    {
        const bool branch_taken_0x24e020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E020u;
            // 0x24e024: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e020) {
            ctx->pc = 0x24E03Cu;
            goto label_24e03c;
        }
    }
    ctx->pc = 0x24E028u;
label_24e028:
    // 0x24e028: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x24e028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24e02c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x24e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x24e030: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x24e030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x24e034: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24E034u;
    {
        const bool branch_taken_0x24e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E034u;
            // 0x24e038: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e034) {
            ctx->pc = 0x24E084u;
            goto label_24e084;
        }
    }
    ctx->pc = 0x24E03Cu;
label_24e03c:
    // 0x24e03c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E03Cu;
    {
        const bool branch_taken_0x24e03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E03Cu;
            // 0x24e040: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e03c) {
            ctx->pc = 0x24E058u;
            goto label_24e058;
        }
    }
    ctx->pc = 0x24E044u;
    // 0x24e044: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x24e044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x24e048: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x24e048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x24e04c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x24e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x24e050: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24E050u;
    {
        const bool branch_taken_0x24e050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E050u;
            // 0x24e054: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e050) {
            ctx->pc = 0x24E084u;
            goto label_24e084;
        }
    }
    ctx->pc = 0x24E058u;
label_24e058:
    // 0x24e058: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E058u;
    {
        const bool branch_taken_0x24e058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E058u;
            // 0x24e05c: 0x3c02428c  lui         $v0, 0x428C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e058) {
            ctx->pc = 0x24E084u;
            goto label_24e084;
        }
    }
    ctx->pc = 0x24E060u;
    // 0x24e060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e064: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24E064u;
    SET_GPR_U32(ctx, 31, 0x24E06Cu);
    ctx->pc = 0x24E068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E064u;
            // 0x24e068: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E06Cu; }
        if (ctx->pc != 0x24E06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E06Cu; }
        if (ctx->pc != 0x24E06Cu) { return; }
    }
    ctx->pc = 0x24E06Cu;
label_24e06c:
    // 0x24e06c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x24e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x24e070: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x24e070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
    // 0x24e074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24e074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e078: 0xc0a248c  jal         func_289230
    ctx->pc = 0x24E078u;
    SET_GPR_U32(ctx, 31, 0x24E080u);
    ctx->pc = 0x24E07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E078u;
            // 0x24e07c: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E080u; }
        if (ctx->pc != 0x24E080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E080u; }
        if (ctx->pc != 0x24E080u) { return; }
    }
    ctx->pc = 0x24E080u;
label_24e080:
    // 0x24e080: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x24e080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_24e084:
    // 0x24e084: 0x8fa900b0  lw          $t1, 0xB0($sp)
    ctx->pc = 0x24e084u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24e088: 0x27b40084  addiu       $s4, $sp, 0x84
    ctx->pc = 0x24e088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x24e08c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x24e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x24e090: 0x27b300b4  addiu       $s3, $sp, 0xB4
    ctx->pc = 0x24e090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x24e094: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x24e094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e098: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24e098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24e09c: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x24e09cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24e0a0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x24e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24e0a4: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x24e0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24e0a8: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x24e0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x24e0ac: 0x1228021  addu        $s0, $t1, $v0
    ctx->pc = 0x24e0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x24e0b0: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x24e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x24e0b4: 0xa69021  addu        $s2, $a1, $a2
    ctx->pc = 0x24e0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x24e0b8: 0x1078821  addu        $s1, $t0, $a3
    ctx->pc = 0x24e0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x24e0bc: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x24e0bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24e0c0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x24E0C0u;
    SET_GPR_U32(ctx, 31, 0x24E0C8u);
    ctx->pc = 0x24E0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E0C0u;
            // 0x24e0c4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E0C8u; }
        if (ctx->pc != 0x24E0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E0C8u; }
        if (ctx->pc != 0x24E0C8u) { return; }
    }
    ctx->pc = 0x24E0C8u;
label_24e0c8:
    // 0x24e0c8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x24e0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24e0cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24e0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24e0d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24e0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0d4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x24E0D4u;
    SET_GPR_U32(ctx, 31, 0x24E0DCu);
    ctx->pc = 0x24E0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E0D4u;
            // 0x24e0d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E0DCu; }
        if (ctx->pc != 0x24E0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E0DCu; }
        if (ctx->pc != 0x24E0DCu) { return; }
    }
    ctx->pc = 0x24E0DCu;
label_24e0dc:
    // 0x24e0dc: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x24e0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24e0e0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x24e0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24e0e4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x24E0E4u;
    SET_GPR_U32(ctx, 31, 0x24E0ECu);
    ctx->pc = 0x24E0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E0E4u;
            // 0x24e0e8: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E0ECu; }
        if (ctx->pc != 0x24E0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E0ECu; }
        if (ctx->pc != 0x24E0ECu) { return; }
    }
    ctx->pc = 0x24E0ECu;
label_24e0ec:
    // 0x24e0ec: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x24e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24e0f0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24e0f4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x24e0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24e0f8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x24E0F8u;
    SET_GPR_U32(ctx, 31, 0x24E100u);
    ctx->pc = 0x24E0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E0F8u;
            // 0x24e0fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E100u; }
        if (ctx->pc != 0x24E100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E100u; }
        if (ctx->pc != 0x24E100u) { return; }
    }
    ctx->pc = 0x24E100u;
label_24e100:
    // 0x24e100: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x24e100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24e104: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24e104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24e108: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x24E108u;
    SET_GPR_U32(ctx, 31, 0x24E110u);
    ctx->pc = 0x24E10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E108u;
            // 0x24e10c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E110u; }
        if (ctx->pc != 0x24E110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E110u; }
        if (ctx->pc != 0x24E110u) { return; }
    }
    ctx->pc = 0x24E110u;
label_24e110:
    // 0x24e110: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x24e110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24e114: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24e118: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24e118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e11c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x24E11Cu;
    SET_GPR_U32(ctx, 31, 0x24E124u);
    ctx->pc = 0x24E120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E11Cu;
            // 0x24e120: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E124u; }
        if (ctx->pc != 0x24E124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E124u; }
        if (ctx->pc != 0x24E124u) { return; }
    }
    ctx->pc = 0x24E124u;
label_24e124:
    // 0x24e124: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24e124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e128: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x24e128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e12c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x24E12Cu;
    SET_GPR_U32(ctx, 31, 0x24E134u);
    ctx->pc = 0x24E130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E12Cu;
            // 0x24e130: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E134u; }
        if (ctx->pc != 0x24E134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E134u; }
        if (ctx->pc != 0x24E134u) { return; }
    }
    ctx->pc = 0x24E134u;
label_24e134:
    // 0x24e134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24e134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e138: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24e138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e13c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24e140: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x24E140u;
    SET_GPR_U32(ctx, 31, 0x24E148u);
    ctx->pc = 0x24E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E140u;
            // 0x24e144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E148u; }
        if (ctx->pc != 0x24E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E148u; }
        if (ctx->pc != 0x24E148u) { return; }
    }
    ctx->pc = 0x24E148u;
label_24e148:
    // 0x24e148: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x24E148u;
    SET_GPR_U32(ctx, 31, 0x24E150u);
    ctx->pc = 0x24E14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E148u;
            // 0x24e14c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E150u; }
        if (ctx->pc != 0x24E150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E150u; }
        if (ctx->pc != 0x24E150u) { return; }
    }
    ctx->pc = 0x24E150u;
label_24e150:
    // 0x24e150: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24e150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e154: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x24e154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24e158: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x24e158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e15c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x24e15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24e160: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x24e160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e164: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x24e164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24e168: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24e168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e16c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24e16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e170: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24e170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24e174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e178: 0x3e00008  jr          $ra
    ctx->pc = 0x24E178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E178u;
            // 0x24e17c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24E180u;
}
