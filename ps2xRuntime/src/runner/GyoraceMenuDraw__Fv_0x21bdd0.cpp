#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GyoraceMenuDraw__Fv
// Address: 0x21bdd0 - 0x21c760
void GyoraceMenuDraw__Fv_0x21bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GyoraceMenuDraw__Fv_0x21bdd0");
#endif

    switch (ctx->pc) {
        case 0x21be18u: goto label_21be18;
        case 0x21be28u: goto label_21be28;
        case 0x21be6cu: goto label_21be6c;
        case 0x21be8cu: goto label_21be8c;
        case 0x21beb0u: goto label_21beb0;
        case 0x21bed0u: goto label_21bed0;
        case 0x21bef4u: goto label_21bef4;
        case 0x21bf10u: goto label_21bf10;
        case 0x21bf24u: goto label_21bf24;
        case 0x21bf38u: goto label_21bf38;
        case 0x21bf5cu: goto label_21bf5c;
        case 0x21bf74u: goto label_21bf74;
        case 0x21bfa4u: goto label_21bfa4;
        case 0x21bfc4u: goto label_21bfc4;
        case 0x21bfdcu: goto label_21bfdc;
        case 0x21c00cu: goto label_21c00c;
        case 0x21c024u: goto label_21c024;
        case 0x21c02cu: goto label_21c02c;
        case 0x21c040u: goto label_21c040;
        case 0x21c0ecu: goto label_21c0ec;
        case 0x21c104u: goto label_21c104;
        case 0x21c12cu: goto label_21c12c;
        case 0x21c18cu: goto label_21c18c;
        case 0x21c194u: goto label_21c194;
        case 0x21c1bcu: goto label_21c1bc;
        case 0x21c1d0u: goto label_21c1d0;
        case 0x21c210u: goto label_21c210;
        case 0x21c230u: goto label_21c230;
        case 0x21c238u: goto label_21c238;
        case 0x21c23cu: goto label_21c23c;
        case 0x21c254u: goto label_21c254;
        case 0x21c280u: goto label_21c280;
        case 0x21c2a0u: goto label_21c2a0;
        case 0x21c2a8u: goto label_21c2a8;
        case 0x21c2e4u: goto label_21c2e4;
        case 0x21c2ecu: goto label_21c2ec;
        case 0x21c32cu: goto label_21c32c;
        case 0x21c340u: goto label_21c340;
        case 0x21c348u: goto label_21c348;
        case 0x21c368u: goto label_21c368;
        case 0x21c370u: goto label_21c370;
        case 0x21c378u: goto label_21c378;
        case 0x21c380u: goto label_21c380;
        case 0x21c394u: goto label_21c394;
        case 0x21c3d4u: goto label_21c3d4;
        case 0x21c3dcu: goto label_21c3dc;
        case 0x21c428u: goto label_21c428;
        case 0x21c448u: goto label_21c448;
        case 0x21c474u: goto label_21c474;
        case 0x21c498u: goto label_21c498;
        case 0x21c4acu: goto label_21c4ac;
        case 0x21c4d0u: goto label_21c4d0;
        case 0x21c4f0u: goto label_21c4f0;
        case 0x21c554u: goto label_21c554;
        case 0x21c578u: goto label_21c578;
        case 0x21c5a0u: goto label_21c5a0;
        case 0x21c5a8u: goto label_21c5a8;
        case 0x21c60cu: goto label_21c60c;
        case 0x21c614u: goto label_21c614;
        case 0x21c684u: goto label_21c684;
        case 0x21c6a4u: goto label_21c6a4;
        case 0x21c6d8u: goto label_21c6d8;
        case 0x21c704u: goto label_21c704;
        case 0x21c710u: goto label_21c710;
        default: break;
    }

    ctx->pc = 0x21bdd0u;

    // 0x21bdd0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x21bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x21bdd4: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x21bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x21bdd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21bddc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21bddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x21bde0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21bde4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21bde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21bde8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21bde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21bdec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21bdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21bdf0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x21bdf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21bdf4: 0x878392c8  lh          $v1, -0x6D38($gp)
    ctx->pc = 0x21bdf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21bdf8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21BDF8u;
    {
        const bool branch_taken_0x21bdf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21BDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BDF8u;
            // 0x21bdfc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdf8) {
            ctx->pc = 0x21BE20u;
            goto label_21be20;
        }
    }
    ctx->pc = 0x21BE00u;
    // 0x21be00: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BE00u;
    {
        const bool branch_taken_0x21be00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21be00) {
            ctx->pc = 0x21BE10u;
            goto label_21be10;
        }
    }
    ctx->pc = 0x21BE08u;
    // 0x21be08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21BE08u;
    {
        const bool branch_taken_0x21be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BE08u;
            // 0x21be0c: 0x8f828780  lw          $v0, -0x7880($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be08) {
            ctx->pc = 0x21BE30u;
            goto label_21be30;
        }
    }
    ctx->pc = 0x21BE10u;
label_21be10:
    // 0x21be10: 0xc0c2d40  jal         func_30B500
    ctx->pc = 0x21BE10u;
    SET_GPR_U32(ctx, 31, 0x21BE18u);
    ctx->pc = 0x30B500u;
    if (runtime->hasFunction(0x30B500u)) {
        auto targetFn = runtime->lookupFunction(0x30B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE18u; }
        if (ctx->pc != 0x21BE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistDraw__Fv_0x30b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE18u; }
        if (ctx->pc != 0x21BE18u) { return; }
    }
    ctx->pc = 0x21BE18u;
label_21be18:
    // 0x21be18: 0x1000023e  b           . + 4 + (0x23E << 2)
    ctx->pc = 0x21BE18u;
    {
        const bool branch_taken_0x21be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BE18u;
            // 0x21be1c: 0x8f8392dc  lw          $v1, -0x6D24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be18) {
            ctx->pc = 0x21C714u;
            goto label_21c714;
        }
    }
    ctx->pc = 0x21BE20u;
label_21be20:
    // 0x21be20: 0xc0b161c  jal         func_2C5870
    ctx->pc = 0x21BE20u;
    SET_GPR_U32(ctx, 31, 0x21BE28u);
    ctx->pc = 0x2C5870u;
    if (runtime->hasFunction(0x2C5870u)) {
        auto targetFn = runtime->lookupFunction(0x2C5870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE28u; }
        if (ctx->pc != 0x21BE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSaveDraw__Fv_0x2c5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE28u; }
        if (ctx->pc != 0x21BE28u) { return; }
    }
    ctx->pc = 0x21BE28u;
label_21be28:
    // 0x21be28: 0x10000239  b           . + 4 + (0x239 << 2)
    ctx->pc = 0x21BE28u;
    {
        const bool branch_taken_0x21be28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21be28) {
            ctx->pc = 0x21C710u;
            goto label_21c710;
        }
    }
    ctx->pc = 0x21BE30u;
label_21be30:
    // 0x21be30: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x21be30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x21be34: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x21be34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x21be38: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BE38u;
    {
        const bool branch_taken_0x21be38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21BE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BE38u;
            // 0x21be3c: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be38) {
            ctx->pc = 0x21BE48u;
            goto label_21be48;
        }
    }
    ctx->pc = 0x21BE40u;
    // 0x21be40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21be40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21be44: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x21be44u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_21be48:
    // 0x21be48: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x21be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x21be4c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BE4Cu;
    {
        const bool branch_taken_0x21be4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21BE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BE4Cu;
            // 0x21be50: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be4c) {
            ctx->pc = 0x21BE5Cu;
            goto label_21be5c;
        }
    }
    ctx->pc = 0x21BE54u;
    // 0x21be54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21be58: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x21be58u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
label_21be5c:
    // 0x21be5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x21be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21be60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21be60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be64: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21BE64u;
    SET_GPR_U32(ctx, 31, 0x21BE6Cu);
    ctx->pc = 0x21BE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BE64u;
            // 0x21be68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE6Cu; }
        if (ctx->pc != 0x21BE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE6Cu; }
        if (ctx->pc != 0x21BE6Cu) { return; }
    }
    ctx->pc = 0x21BE6Cu;
label_21be6c:
    // 0x21be6c: 0x8f878780  lw          $a3, -0x7880($gp)
    ctx->pc = 0x21be6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x21be70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21be74: 0x8f888784  lw          $t0, -0x787C($gp)
    ctx->pc = 0x21be74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x21be78: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21be78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21be7c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x21be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x21be80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21be80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be84: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21BE84u;
    SET_GPR_U32(ctx, 31, 0x21BE8Cu);
    ctx->pc = 0x21BE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BE84u;
            // 0x21be88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE8Cu; }
        if (ctx->pc != 0x21BE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE8Cu; }
        if (ctx->pc != 0x21BE8Cu) { return; }
    }
    ctx->pc = 0x21BE8Cu;
label_21be8c:
    // 0x21be8c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x21be8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21be90: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x21be90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x21be94: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x21be94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21be98: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x21be98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21be9c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x21be9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bea0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x21bea0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bea4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x21bea4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bea8: 0xc088fc0  jal         func_223F00
    ctx->pc = 0x21BEA8u;
    SET_GPR_U32(ctx, 31, 0x21BEB0u);
    ctx->pc = 0x21BEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BEA8u;
            // 0x21beac: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223F00u;
    if (runtime->hasFunction(0x223F00u)) {
        auto targetFn = runtime->lookupFunction(0x223F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BEB0u; }
        if (ctx->pc != 0x21BEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuMainFrmImg__FRi9mgRect_i_9mgRect_i_iiiii_0x223f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BEB0u; }
        if (ctx->pc != 0x21BEB0u) { return; }
    }
    ctx->pc = 0x21BEB0u;
label_21beb0:
    // 0x21beb0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x21beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x21beb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x21beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21beb8: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x21beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x21bebc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21bec0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21bec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bec4: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x21bec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21bec8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21BEC8u;
    SET_GPR_U32(ctx, 31, 0x21BED0u);
    ctx->pc = 0x21BECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BEC8u;
            // 0x21becc: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BED0u; }
        if (ctx->pc != 0x21BED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BED0u; }
        if (ctx->pc != 0x21BED0u) { return; }
    }
    ctx->pc = 0x21BED0u;
label_21bed0:
    // 0x21bed0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x21bed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21bed4: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x21bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x21bed8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21bedc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x21bedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21bee0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x21bee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bee4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x21bee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bee8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x21bee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21beec: 0xc088fc0  jal         func_223F00
    ctx->pc = 0x21BEECu;
    SET_GPR_U32(ctx, 31, 0x21BEF4u);
    ctx->pc = 0x21BEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BEECu;
            // 0x21bef0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223F00u;
    if (runtime->hasFunction(0x223F00u)) {
        auto targetFn = runtime->lookupFunction(0x223F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BEF4u; }
        if (ctx->pc != 0x21BEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuMainFrmImg__FRi9mgRect_i_9mgRect_i_iiiii_0x223f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BEF4u; }
        if (ctx->pc != 0x21BEF4u) { return; }
    }
    ctx->pc = 0x21BEF4u;
label_21bef4:
    // 0x21bef4: 0x8f8392c4  lw          $v1, -0x6D3C($gp)
    ctx->pc = 0x21bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21bef8: 0x10600210  beqz        $v1, . + 4 + (0x210 << 2)
    ctx->pc = 0x21BEF8u;
    {
        const bool branch_taken_0x21bef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BEF8u;
            // 0x21befc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bef8) {
            ctx->pc = 0x21C73Cu;
            goto label_21c73c;
        }
    }
    ctx->pc = 0x21BF00u;
    // 0x21bf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf04: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x21bf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x21bf08: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x21BF08u;
    SET_GPR_U32(ctx, 31, 0x21BF10u);
    ctx->pc = 0x21BF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF08u;
            // 0x21bf0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF10u; }
        if (ctx->pc != 0x21BF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF10u; }
        if (ctx->pc != 0x21BF10u) { return; }
    }
    ctx->pc = 0x21BF10u;
label_21bf10:
    // 0x21bf10: 0x9382929c  lbu         $v0, -0x6D64($gp)
    ctx->pc = 0x21bf10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939292)));
    // 0x21bf14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BF14u;
    {
        const bool branch_taken_0x21bf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bf14) {
            ctx->pc = 0x21BF24u;
            goto label_21bf24;
        }
    }
    ctx->pc = 0x21BF1Cu;
    // 0x21bf1c: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x21BF1Cu;
    SET_GPR_U32(ctx, 31, 0x21BF24u);
    ctx->pc = 0x21BF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF1Cu;
            // 0x21bf20: 0x8f849298  lw          $a0, -0x6D68($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF24u; }
        if (ctx->pc != 0x21BF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF24u; }
        if (ctx->pc != 0x21BF24u) { return; }
    }
    ctx->pc = 0x21BF24u;
label_21bf24:
    // 0x21bf24: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21bf24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21bf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf2c: 0x8c25c9c4  lw          $a1, -0x363C($at)
    ctx->pc = 0x21bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953412)));
    // 0x21bf30: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x21BF30u;
    SET_GPR_U32(ctx, 31, 0x21BF38u);
    ctx->pc = 0x21BF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF30u;
            // 0x21bf34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF38u; }
        if (ctx->pc != 0x21BF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF38u; }
        if (ctx->pc != 0x21BF38u) { return; }
    }
    ctx->pc = 0x21BF38u;
label_21bf38:
    // 0x21bf38: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x21bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x21bf3c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21BF3Cu;
    {
        const bool branch_taken_0x21bf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bf3c) {
            ctx->pc = 0x21BFACu;
            goto label_21bfac;
        }
    }
    ctx->pc = 0x21BF44u;
    // 0x21bf44: 0x8f8492c4  lw          $a0, -0x6D3C($gp)
    ctx->pc = 0x21bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21bf48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf4c: 0x24060116  addiu       $a2, $zero, 0x116
    ctx->pc = 0x21bf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x21bf50: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x21bf50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21bf54: 0xc0871d8  jal         func_21C760
    ctx->pc = 0x21BF54u;
    SET_GPR_U32(ctx, 31, 0x21BF5Cu);
    ctx->pc = 0x21BF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF54u;
            // 0x21bf58: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C760u;
    if (runtime->hasFunction(0x21C760u)) {
        auto targetFn = runtime->lookupFunction(0x21C760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF5Cu; }
        if (ctx->pc != 0x21BF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameTitle__FP10mgCTextureiiii_0x21c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF5Cu; }
        if (ctx->pc != 0x21BF5Cu) { return; }
    }
    ctx->pc = 0x21BF5Cu;
label_21bf5c:
    // 0x21bf5c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x21bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21bf60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf64: 0x2406009e  addiu       $a2, $zero, 0x9E
    ctx->pc = 0x21bf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x21bf68: 0x2407006c  addiu       $a3, $zero, 0x6C
    ctx->pc = 0x21bf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x21bf6c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21BF6Cu;
    SET_GPR_U32(ctx, 31, 0x21BF74u);
    ctx->pc = 0x21BF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF6Cu;
            // 0x21bf70: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF74u; }
        if (ctx->pc != 0x21BF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BF74u; }
        if (ctx->pc != 0x21BF74u) { return; }
    }
    ctx->pc = 0x21BF74u;
label_21bf74:
    // 0x21bf74: 0x8f8492c4  lw          $a0, -0x6D3C($gp)
    ctx->pc = 0x21bf74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21bf78: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x21bf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21bf7c: 0x3c034398  lui         $v1, 0x4398
    ctx->pc = 0x21bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17304 << 16));
    // 0x21bf80: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x21bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x21bf84: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x21bf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x21bf88: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x21bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21bf8c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x21bf8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21bf90: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21bf90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21bf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21bf98: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x21bf98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf9c: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x21BF9Cu;
    SET_GPR_U32(ctx, 31, 0x21BFA4u);
    ctx->pc = 0x21BFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BF9Cu;
            // 0x21bfa0: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BFA4u; }
        if (ctx->pc != 0x21BFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BFA4u; }
        if (ctx->pc != 0x21BFA4u) { return; }
    }
    ctx->pc = 0x21BFA4u;
label_21bfa4:
    // 0x21bfa4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x21BFA4u;
    {
        const bool branch_taken_0x21bfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21BFA4u;
            // 0x21bfa8: 0x8f8492c4  lw          $a0, -0x6D3C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfa4) {
            ctx->pc = 0x21C010u;
            goto label_21c010;
        }
    }
    ctx->pc = 0x21BFACu;
label_21bfac:
    // 0x21bfac: 0x8f8492c4  lw          $a0, -0x6D3C($gp)
    ctx->pc = 0x21bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21bfb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfb4: 0x24060116  addiu       $a2, $zero, 0x116
    ctx->pc = 0x21bfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x21bfb8: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x21bfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21bfbc: 0xc0871d8  jal         func_21C760
    ctx->pc = 0x21BFBCu;
    SET_GPR_U32(ctx, 31, 0x21BFC4u);
    ctx->pc = 0x21BFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BFBCu;
            // 0x21bfc0: 0x240800a8  addiu       $t0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C760u;
    if (runtime->hasFunction(0x21C760u)) {
        auto targetFn = runtime->lookupFunction(0x21C760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BFC4u; }
        if (ctx->pc != 0x21BFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameTitle__FP10mgCTextureiiii_0x21c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BFC4u; }
        if (ctx->pc != 0x21BFC4u) { return; }
    }
    ctx->pc = 0x21BFC4u;
label_21bfc4:
    // 0x21bfc4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x21bfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21bfc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfcc: 0x2406009e  addiu       $a2, $zero, 0x9E
    ctx->pc = 0x21bfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x21bfd0: 0x24070074  addiu       $a3, $zero, 0x74
    ctx->pc = 0x21bfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x21bfd4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21BFD4u;
    SET_GPR_U32(ctx, 31, 0x21BFDCu);
    ctx->pc = 0x21BFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21BFD4u;
            // 0x21bfd8: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BFDCu; }
        if (ctx->pc != 0x21BFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BFDCu; }
        if (ctx->pc != 0x21BFDCu) { return; }
    }
    ctx->pc = 0x21BFDCu;
label_21bfdc:
    // 0x21bfdc: 0x8f8492c4  lw          $a0, -0x6D3C($gp)
    ctx->pc = 0x21bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21bfe0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x21bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21bfe4: 0x3c034398  lui         $v1, 0x4398
    ctx->pc = 0x21bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17304 << 16));
    // 0x21bfe8: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x21bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x21bfec: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x21bfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x21bff0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x21bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21bff4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x21bff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21bff8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21bff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bffc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21bffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21c000: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x21c000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c004: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x21C004u;
    SET_GPR_U32(ctx, 31, 0x21C00Cu);
    ctx->pc = 0x21C008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C004u;
            // 0x21c008: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C00Cu; }
        if (ctx->pc != 0x21C00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C00Cu; }
        if (ctx->pc != 0x21C00Cu) { return; }
    }
    ctx->pc = 0x21C00Cu;
label_21c00c:
    // 0x21c00c: 0x8f8492c4  lw          $a0, -0x6D3C($gp)
    ctx->pc = 0x21c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
label_21c010:
    // 0x21c010: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x21c010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x21c014: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x21c014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x21c018: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21c018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c01c: 0xc087220  jal         func_21C880
    ctx->pc = 0x21C01Cu;
    SET_GPR_U32(ctx, 31, 0x21C024u);
    ctx->pc = 0x21C020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C01Cu;
            // 0x21c020: 0x240800be  addiu       $t0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C880u;
    if (runtime->hasFunction(0x21C880u)) {
        auto targetFn = runtime->lookupFunction(0x21C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C024u; }
        if (ctx->pc != 0x21C024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameListFix__FP10mgCTextureiiii_0x21c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C024u; }
        if (ctx->pc != 0x21C024u) { return; }
    }
    ctx->pc = 0x21C024u;
label_21c024:
    // 0x21c024: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21c024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c028: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21c028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c02c:
    // 0x21c02c: 0x8f8492c4  lw          $a0, -0x6D3C($gp)
    ctx->pc = 0x21c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21c030: 0x2646007e  addiu       $a2, $s2, 0x7E
    ctx->pc = 0x21c030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 126));
    // 0x21c034: 0x2405010a  addiu       $a1, $zero, 0x10A
    ctx->pc = 0x21c034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x21c038: 0xc08734c  jal         func_21CD30
    ctx->pc = 0x21C038u;
    SET_GPR_U32(ctx, 31, 0x21C040u);
    ctx->pc = 0x21C03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C038u;
            // 0x21c03c: 0x240700dc  addiu       $a3, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CD30u;
    if (runtime->hasFunction(0x21CD30u)) {
        auto targetFn = runtime->lookupFunction(0x21CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C040u; }
        if (ctx->pc != 0x21C040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameUnderLine__FP10mgCTextureiii_0x21cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C040u; }
        if (ctx->pc != 0x21C040u) { return; }
    }
    ctx->pc = 0x21C040u;
label_21c040:
    // 0x21c040: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21c040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21c044: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x21c044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21c048: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21C048u;
    {
        const bool branch_taken_0x21c048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C048u;
            // 0x21c04c: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c048) {
            ctx->pc = 0x21C02Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c02c;
        }
    }
    ctx->pc = 0x21C050u;
    // 0x21c050: 0x878392c8  lh          $v1, -0x6D38($gp)
    ctx->pc = 0x21c050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21c054: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x21c054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x21c058: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21C058u;
    {
        const bool branch_taken_0x21c058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C058u;
            // 0x21c05c: 0x3c024208  lui         $v0, 0x4208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c058) {
            ctx->pc = 0x21C0B8u;
            goto label_21c0b8;
        }
    }
    ctx->pc = 0x21C060u;
    // 0x21c060: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x21c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x21c064: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x21C064u;
    {
        const bool branch_taken_0x21c064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C064u;
            // 0x21c068: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c064) {
            ctx->pc = 0x21C0B4u;
            goto label_21c0b4;
        }
    }
    ctx->pc = 0x21C06Cu;
    // 0x21c06c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21C06Cu;
    {
        const bool branch_taken_0x21c06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C06Cu;
            // 0x21c070: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c06c) {
            ctx->pc = 0x21C0B4u;
            goto label_21c0b4;
        }
    }
    ctx->pc = 0x21C074u;
    // 0x21c074: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21C074u;
    {
        const bool branch_taken_0x21c074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C074u;
            // 0x21c078: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c074) {
            ctx->pc = 0x21C0B4u;
            goto label_21c0b4;
        }
    }
    ctx->pc = 0x21C07Cu;
    // 0x21c07c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21C07Cu;
    {
        const bool branch_taken_0x21c07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C07Cu;
            // 0x21c080: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c07c) {
            ctx->pc = 0x21C0B4u;
            goto label_21c0b4;
        }
    }
    ctx->pc = 0x21C084u;
    // 0x21c084: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21C084u;
    {
        const bool branch_taken_0x21c084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C084u;
            // 0x21c088: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c084) {
            ctx->pc = 0x21C0B4u;
            goto label_21c0b4;
        }
    }
    ctx->pc = 0x21C08Cu;
    // 0x21c08c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C08Cu;
    {
        const bool branch_taken_0x21c08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C08Cu;
            // 0x21c090: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c08c) {
            ctx->pc = 0x21C0B4u;
            goto label_21c0b4;
        }
    }
    ctx->pc = 0x21C094u;
    // 0x21c094: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C094u;
    {
        const bool branch_taken_0x21c094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C094u;
            // 0x21c098: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c094) {
            ctx->pc = 0x21C0B4u;
            goto label_21c0b4;
        }
    }
    ctx->pc = 0x21C09Cu;
    // 0x21c09c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C09Cu;
    {
        const bool branch_taken_0x21c09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C09Cu;
            // 0x21c0a0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c09c) {
            ctx->pc = 0x21C0B4u;
            goto label_21c0b4;
        }
    }
    ctx->pc = 0x21C0A4u;
    // 0x21c0a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C0A4u;
    {
        const bool branch_taken_0x21c0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21c0a4) {
            ctx->pc = 0x21C0B4u;
            goto label_21c0b4;
        }
    }
    ctx->pc = 0x21C0ACu;
    // 0x21c0ac: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x21C0ACu;
    {
        const bool branch_taken_0x21c0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c0ac) {
            ctx->pc = 0x21C32Cu;
            goto label_21c32c;
        }
    }
    ctx->pc = 0x21C0B4u;
label_21c0b4:
    // 0x21c0b4: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x21c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
label_21c0b8:
    // 0x21c0b8: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x21c0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21c0bc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x21c0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21c0c0: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x21c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x21c0c4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C0C4u;
    {
        const bool branch_taken_0x21c0c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21C0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C0C4u;
            // 0x21c0c8: 0x240800e4  addiu       $t0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c0c4) {
            ctx->pc = 0x21C0DCu;
            goto label_21c0dc;
        }
    }
    ctx->pc = 0x21C0CCu;
    // 0x21c0cc: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x21c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x21c0d0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x21c0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21c0d4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x21c0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21c0d8: 0x240800ea  addiu       $t0, $zero, 0xEA
    ctx->pc = 0x21c0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
label_21c0dc:
    // 0x21c0dc: 0x8f8492c4  lw          $a0, -0x6D3C($gp)
    ctx->pc = 0x21c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21c0e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21c0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c0e4: 0xc0871d8  jal         func_21C760
    ctx->pc = 0x21C0E4u;
    SET_GPR_U32(ctx, 31, 0x21C0ECu);
    ctx->pc = 0x21C0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C0E4u;
            // 0x21c0e8: 0x2407001a  addiu       $a3, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21C760u;
    if (runtime->hasFunction(0x21C760u)) {
        auto targetFn = runtime->lookupFunction(0x21C760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C0ECu; }
        if (ctx->pc != 0x21C0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameTitle__FP10mgCTextureiiii_0x21c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C0ECu; }
        if (ctx->pc != 0x21C0ECu) { return; }
    }
    ctx->pc = 0x21C0ECu;
label_21c0ec:
    // 0x21c0ec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x21c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x21c0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0f4: 0x240600d2  addiu       $a2, $zero, 0xD2
    ctx->pc = 0x21c0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x21c0f8: 0x240700ca  addiu       $a3, $zero, 0xCA
    ctx->pc = 0x21c0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x21c0fc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C0FCu;
    SET_GPR_U32(ctx, 31, 0x21C104u);
    ctx->pc = 0x21C100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C0FCu;
            // 0x21c100: 0x2408001a  addiu       $t0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C104u; }
        if (ctx->pc != 0x21C104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C104u; }
        if (ctx->pc != 0x21C104u) { return; }
    }
    ctx->pc = 0x21C104u;
label_21c104:
    // 0x21c104: 0x8f8492c4  lw          $a0, -0x6D3C($gp)
    ctx->pc = 0x21c104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21c108: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x21c108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21c10c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x21c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x21c110: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x21c110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x21c114: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21c114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21c118: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21c118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c11c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21c11cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21c120: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x21c120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c124: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x21C124u;
    SET_GPR_U32(ctx, 31, 0x21C12Cu);
    ctx->pc = 0x21C128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C124u;
            // 0x21c128: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C12Cu; }
        if (ctx->pc != 0x21C12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C12Cu; }
        if (ctx->pc != 0x21C12Cu) { return; }
    }
    ctx->pc = 0x21C12Cu;
label_21c12c:
    // 0x21c12c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x21c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21c130: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x21c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x21c134: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x21c134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x21c138: 0x27b20084  addiu       $s2, $sp, 0x84
    ctx->pc = 0x21c138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x21c13c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x21c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x21c140: 0x240300e4  addiu       $v1, $zero, 0xE4
    ctx->pc = 0x21c140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x21c144: 0x27b30088  addiu       $s3, $sp, 0x88
    ctx->pc = 0x21c144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x21c148: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x21c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x21c14c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x21c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x21c150: 0x278492f8  addiu       $a0, $gp, -0x6D08
    ctx->pc = 0x21c150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939384));
    // 0x21c154: 0xc78092bc  lwc1        $f0, -0x6D44($gp)
    ctx->pc = 0x21c154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c158: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x21c158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x21c15c: 0x3c024084  lui         $v0, 0x4084
    ctx->pc = 0x21c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16516 << 16));
    // 0x21c160: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x21c160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x21c164: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c168: 0x8f8592fc  lw          $a1, -0x6D04($gp)
    ctx->pc = 0x21c168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x21c16c: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x21c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x21c170: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21c174: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21c174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21c178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21c178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21c17c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21c180: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21c180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21c184: 0xc094514  jal         func_251450
    ctx->pc = 0x21C184u;
    SET_GPR_U32(ctx, 31, 0x21C18Cu);
    ctx->pc = 0x21C188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C184u;
            // 0x21c188: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C18Cu; }
        if (ctx->pc != 0x21C18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C18Cu; }
        if (ctx->pc != 0x21C18Cu) { return; }
    }
    ctx->pc = 0x21C18Cu;
label_21c18c:
    // 0x21c18c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21C18Cu;
    SET_GPR_U32(ctx, 31, 0x21C194u);
    ctx->pc = 0x21C190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C18Cu;
            // 0x21c190: 0xc78c92f8  lwc1        $f12, -0x6D08($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C194u; }
        if (ctx->pc != 0x21C194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C194u; }
        if (ctx->pc != 0x21C194u) { return; }
    }
    ctx->pc = 0x21C194u;
label_21c194:
    // 0x21c194: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x21c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x21c198: 0xc78092f4  lwc1        $f0, -0x6D0C($gp)
    ctx->pc = 0x21c198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c19c: 0x3c0241a8  lui         $v0, 0x41A8
    ctx->pc = 0x21c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16808 << 16));
    // 0x21c1a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21c1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21c1a4: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x21c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
    // 0x21c1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c1ac: 0x0  nop
    ctx->pc = 0x21c1acu;
    // NOP
    // 0x21c1b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21c1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21c1b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21C1B4u;
    SET_GPR_U32(ctx, 31, 0x21C1BCu);
    ctx->pc = 0x21C1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C1B4u;
            // 0x21c1b8: 0x46001300  add.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C1BCu; }
        if (ctx->pc != 0x21C1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C1BCu; }
        if (ctx->pc != 0x21C1BCu) { return; }
    }
    ctx->pc = 0x21C1BCu;
label_21c1bc:
    // 0x21c1bc: 0x8f8492c4  lw          $a0, -0x6D3C($gp)
    ctx->pc = 0x21c1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21c1c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21c1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c1c4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x21c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21c1c8: 0xc0872a8  jal         func_21CAA0
    ctx->pc = 0x21C1C8u;
    SET_GPR_U32(ctx, 31, 0x21C1D0u);
    ctx->pc = 0x21C1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C1C8u;
            // 0x21c1cc: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CAA0u;
    if (runtime->hasFunction(0x21CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x21CAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C1D0u; }
        if (ctx->pc != 0x21C1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameScrlList__FP10mgCTexturePiPi_0x21caa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C1D0u; }
        if (ctx->pc != 0x21C1D0u) { return; }
    }
    ctx->pc = 0x21C1D0u;
label_21c1d0:
    // 0x21c1d0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x21c1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21c1d4: 0x3c024382  lui         $v0, 0x4382
    ctx->pc = 0x21c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17282 << 16));
    // 0x21c1d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21c1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21c1dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x21c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x21c1e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c1e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c1e4: 0x8fb40080  lw          $s4, 0x80($sp)
    ctx->pc = 0x21c1e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21c1e8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x21c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x21c1ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x21c1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21c1f0: 0x24d20012  addiu       $s2, $a2, 0x12
    ctx->pc = 0x21c1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 18));
    // 0x21c1f4: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x21c1f4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c1f8: 0x0  nop
    ctx->pc = 0x21c1f8u;
    // NOP
    // 0x21c1fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21c1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21c200: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x21c200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x21c204: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c208: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21C208u;
    SET_GPR_U32(ctx, 31, 0x21C210u);
    ctx->pc = 0x21C20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C208u;
            // 0x21c20c: 0x46030301  sub.s       $f12, $f0, $f3 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C210u; }
        if (ctx->pc != 0x21C210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C210u; }
        if (ctx->pc != 0x21C210u) { return; }
    }
    ctx->pc = 0x21C210u;
label_21c210:
    // 0x21c210: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x21c210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21c214: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21c214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c218: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x21c218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c21c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x21c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x21c220: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21c220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c224: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x21c224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x21c228: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C228u;
    SET_GPR_U32(ctx, 31, 0x21C230u);
    ctx->pc = 0x21C22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C228u;
            // 0x21c22c: 0x24470024  addiu       $a3, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C230u; }
        if (ctx->pc != 0x21C230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C230u; }
        if (ctx->pc != 0x21C230u) { return; }
    }
    ctx->pc = 0x21C230u;
label_21c230:
    // 0x21c230: 0xc088050  jal         func_220140
    ctx->pc = 0x21C230u;
    SET_GPR_U32(ctx, 31, 0x21C238u);
    ctx->pc = 0x21C234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C230u;
            // 0x21c234: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C238u; }
        if (ctx->pc != 0x21C238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C238u; }
        if (ctx->pc != 0x21C238u) { return; }
    }
    ctx->pc = 0x21C238u;
label_21c238:
    // 0x21c238: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21c238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c23c:
    // 0x21c23c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21c240: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21c240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c244: 0x8f8492c4  lw          $a0, -0x6D3C($gp)
    ctx->pc = 0x21c244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939332)));
    // 0x21c248: 0x240700ba  addiu       $a3, $zero, 0xBA
    ctx->pc = 0x21c248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x21c24c: 0xc08734c  jal         func_21CD30
    ctx->pc = 0x21C24Cu;
    SET_GPR_U32(ctx, 31, 0x21C254u);
    ctx->pc = 0x21C250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C24Cu;
            // 0x21c250: 0x2445000e  addiu       $a1, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CD30u;
    if (runtime->hasFunction(0x21CD30u)) {
        auto targetFn = runtime->lookupFunction(0x21CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C254u; }
        if (ctx->pc != 0x21C254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSubGameUnderLine__FP10mgCTextureiii_0x21cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C254u; }
        if (ctx->pc != 0x21C254u) { return; }
    }
    ctx->pc = 0x21C254u;
label_21c254:
    // 0x21c254: 0x2631001a  addiu       $s1, $s1, 0x1A
    ctx->pc = 0x21c254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 26));
    // 0x21c258: 0x2a21019b  slti        $at, $s1, 0x19B
    ctx->pc = 0x21c258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)411) ? 1 : 0);
    // 0x21c25c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C25Cu;
    {
        const bool branch_taken_0x21c25c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c25c) {
            ctx->pc = 0x21C274u;
            goto label_21c274;
        }
    }
    ctx->pc = 0x21C264u;
    // 0x21c264: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21c264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21c268: 0x2a420040  slti        $v0, $s2, 0x40
    ctx->pc = 0x21c268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x21c26c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x21C26Cu;
    {
        const bool branch_taken_0x21c26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c26c) {
            ctx->pc = 0x21C23Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21c23c;
        }
    }
    ctx->pc = 0x21C274u;
label_21c274:
    // 0x21c274: 0x0  nop
    ctx->pc = 0x21c274u;
    // NOP
    // 0x21c278: 0xc088070  jal         func_2201C0
    ctx->pc = 0x21C278u;
    SET_GPR_U32(ctx, 31, 0x21C280u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C280u; }
        if (ctx->pc != 0x21C280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C280u; }
        if (ctx->pc != 0x21C280u) { return; }
    }
    ctx->pc = 0x21C280u;
label_21c280:
    // 0x21c280: 0xc78092dc  lwc1        $f0, -0x6D24($gp)
    ctx->pc = 0x21c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c284: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x21c284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x21c288: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x21c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x21c28c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c290: 0x0  nop
    ctx->pc = 0x21c290u;
    // NOP
    // 0x21c294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21c294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21c298: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x21C298u;
    SET_GPR_U32(ctx, 31, 0x21C2A0u);
    ctx->pc = 0x21C29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C298u;
            // 0x21c29c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2A0u; }
        if (ctx->pc != 0x21C2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2A0u; }
        if (ctx->pc != 0x21C2A0u) { return; }
    }
    ctx->pc = 0x21C2A0u;
label_21c2a0:
    // 0x21c2a0: 0xc047964  jal         func_11E590
    ctx->pc = 0x21C2A0u;
    SET_GPR_U32(ctx, 31, 0x21C2A8u);
    ctx->pc = 0x21C2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C2A0u;
            // 0x21c2a4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2A8u; }
        if (ctx->pc != 0x21C2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2A8u; }
        if (ctx->pc != 0x21C2A8u) { return; }
    }
    ctx->pc = 0x21C2A8u;
label_21c2a8:
    // 0x21c2a8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x21c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x21c2ac: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x21c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x21c2b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21c2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21c2b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21c2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c2b8: 0x0  nop
    ctx->pc = 0x21c2b8u;
    // NOP
    // 0x21c2bc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x21c2bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21c2c0: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x21c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x21c2c4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x21c2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x21c2c8: 0xc78092dc  lwc1        $f0, -0x6D24($gp)
    ctx->pc = 0x21c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c2cc: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x21c2ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21c2d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c2d4: 0x0  nop
    ctx->pc = 0x21c2d4u;
    // NOP
    // 0x21c2d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21c2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21c2dc: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x21C2DCu;
    SET_GPR_U32(ctx, 31, 0x21C2E4u);
    ctx->pc = 0x21C2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C2DCu;
            // 0x21c2e0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2E4u; }
        if (ctx->pc != 0x21C2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2E4u; }
        if (ctx->pc != 0x21C2E4u) { return; }
    }
    ctx->pc = 0x21C2E4u;
label_21c2e4:
    // 0x21c2e4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x21C2E4u;
    SET_GPR_U32(ctx, 31, 0x21C2ECu);
    ctx->pc = 0x21C2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C2E4u;
            // 0x21c2e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2ECu; }
        if (ctx->pc != 0x21C2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C2ECu; }
        if (ctx->pc != 0x21C2ECu) { return; }
    }
    ctx->pc = 0x21C2ECu;
label_21c2ec:
    // 0x21c2ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21c2f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21c2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21c2f4: 0xc78192d8  lwc1        $f1, -0x6D28($gp)
    ctx->pc = 0x21c2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21c2f8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x21c2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21c2fc: 0x938292d4  lbu         $v0, -0x6D2C($gp)
    ctx->pc = 0x21c2fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939348)));
    // 0x21c300: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21C300u;
    {
        const bool branch_taken_0x21c300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C300u;
            // 0x21c304: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c300) {
            ctx->pc = 0x21C32Cu;
            goto label_21c32c;
        }
    }
    ctx->pc = 0x21C308u;
    // 0x21c308: 0x8f8492c0  lw          $a0, -0x6D40($gp)
    ctx->pc = 0x21c308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939328)));
    // 0x21c30c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x21c30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21c310: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x21c310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x21c314: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21c314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c318: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21c318u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21c31c: 0x24a5ce50  addiu       $a1, $a1, -0x31B0
    ctx->pc = 0x21c31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954576));
    // 0x21c320: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x21c320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c324: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x21C324u;
    SET_GPR_U32(ctx, 31, 0x21C32Cu);
    ctx->pc = 0x21C328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C324u;
            // 0x21c328: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C32Cu; }
        if (ctx->pc != 0x21C32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C32Cu; }
        if (ctx->pc != 0x21C32Cu) { return; }
    }
    ctx->pc = 0x21C32Cu;
label_21c32c:
    // 0x21c32c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21c32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21c330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c334: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x21c334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x21c338: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x21C338u;
    SET_GPR_U32(ctx, 31, 0x21C340u);
    ctx->pc = 0x21C33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C338u;
            // 0x21c33c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C340u; }
        if (ctx->pc != 0x21C340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C340u; }
        if (ctx->pc != 0x21C340u) { return; }
    }
    ctx->pc = 0x21C340u;
label_21c340:
    // 0x21c340: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x21C340u;
    SET_GPR_U32(ctx, 31, 0x21C348u);
    ctx->pc = 0x21C344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C340u;
            // 0x21c344: 0x8f8492a4  lw          $a0, -0x6D5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C348u; }
        if (ctx->pc != 0x21C348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C348u; }
        if (ctx->pc != 0x21C348u) { return; }
    }
    ctx->pc = 0x21C348u;
label_21c348:
    // 0x21c348: 0x938392ac  lbu         $v1, -0x6D54($gp)
    ctx->pc = 0x21c348u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21c34c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21C34Cu;
    {
        const bool branch_taken_0x21c34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C34Cu;
            // 0x21c350: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c34c) {
            ctx->pc = 0x21C380u;
            goto label_21c380;
        }
    }
    ctx->pc = 0x21C354u;
    // 0x21c354: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x21c354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21c358: 0x2406006d  addiu       $a2, $zero, 0x6D
    ctx->pc = 0x21c358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x21c35c: 0x240700d2  addiu       $a3, $zero, 0xD2
    ctx->pc = 0x21c35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x21c360: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C360u;
    SET_GPR_U32(ctx, 31, 0x21C368u);
    ctx->pc = 0x21C364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C360u;
            // 0x21c364: 0x24080158  addiu       $t0, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C368u; }
        if (ctx->pc != 0x21C368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C368u; }
        if (ctx->pc != 0x21C368u) { return; }
    }
    ctx->pc = 0x21C368u;
label_21c368:
    // 0x21c368: 0xc088050  jal         func_220140
    ctx->pc = 0x21C368u;
    SET_GPR_U32(ctx, 31, 0x21C370u);
    ctx->pc = 0x21C36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C368u;
            // 0x21c36c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C370u; }
        if (ctx->pc != 0x21C370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C370u; }
        if (ctx->pc != 0x21C370u) { return; }
    }
    ctx->pc = 0x21C370u;
label_21c370:
    // 0x21c370: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x21C370u;
    SET_GPR_U32(ctx, 31, 0x21C378u);
    ctx->pc = 0x21C374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C370u;
            // 0x21c374: 0x8f8492a8  lw          $a0, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C378u; }
        if (ctx->pc != 0x21C378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C378u; }
        if (ctx->pc != 0x21C378u) { return; }
    }
    ctx->pc = 0x21C378u;
label_21c378:
    // 0x21c378: 0xc088070  jal         func_2201C0
    ctx->pc = 0x21C378u;
    SET_GPR_U32(ctx, 31, 0x21C380u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C380u; }
        if (ctx->pc != 0x21C380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C380u; }
        if (ctx->pc != 0x21C380u) { return; }
    }
    ctx->pc = 0x21C380u;
label_21c380:
    // 0x21c380: 0x938392b4  lbu         $v1, -0x6D4C($gp)
    ctx->pc = 0x21c380u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939316)));
    // 0x21c384: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x21C384u;
    {
        const bool branch_taken_0x21c384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c384) {
            ctx->pc = 0x21C3DCu;
            goto label_21c3dc;
        }
    }
    ctx->pc = 0x21C38Cu;
    // 0x21c38c: 0xc087690  jal         func_21DA40
    ctx->pc = 0x21C38Cu;
    SET_GPR_U32(ctx, 31, 0x21C394u);
    ctx->pc = 0x21C390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C38Cu;
            // 0x21c390: 0x8f8492a4  lw          $a0, -0x6D5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939300)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C394u; }
        if (ctx->pc != 0x21C394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C394u; }
        if (ctx->pc != 0x21C394u) { return; }
    }
    ctx->pc = 0x21C394u;
label_21c394:
    // 0x21c394: 0x878492c8  lh          $a0, -0x6D38($gp)
    ctx->pc = 0x21c394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21c398: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x21c398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x21c39c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21C39Cu;
    {
        const bool branch_taken_0x21c39c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x21C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C39Cu;
            // 0x21c3a0: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c39c) {
            ctx->pc = 0x21C3D4u;
            goto label_21c3d4;
        }
    }
    ctx->pc = 0x21C3A4u;
    // 0x21c3a4: 0x24050118  addiu       $a1, $zero, 0x118
    ctx->pc = 0x21c3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x21c3a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c3ac: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x21c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x21c3b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x21c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x21c3b4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C3B4u;
    {
        const bool branch_taken_0x21c3b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3B4u;
            // 0x21c3b8: 0x24660030  addiu       $a2, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3b4) {
            ctx->pc = 0x21C3C4u;
            goto label_21c3c4;
        }
    }
    ctx->pc = 0x21C3BCu;
    // 0x21c3bc: 0x24a5ffc8  addiu       $a1, $a1, -0x38
    ctx->pc = 0x21c3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967240));
    // 0x21c3c0: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x21c3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
label_21c3c4:
    // 0x21c3c4: 0x8f8492b0  lw          $a0, -0x6D50($gp)
    ctx->pc = 0x21c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939312)));
    // 0x21c3c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x21c3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c3cc: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x21C3CCu;
    SET_GPR_U32(ctx, 31, 0x21C3D4u);
    ctx->pc = 0x21C3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3CCu;
            // 0x21c3d0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3D4u; }
        if (ctx->pc != 0x21C3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3D4u; }
        if (ctx->pc != 0x21C3D4u) { return; }
    }
    ctx->pc = 0x21C3D4u;
label_21c3d4:
    // 0x21c3d4: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x21C3D4u;
    SET_GPR_U32(ctx, 31, 0x21C3DCu);
    ctx->pc = 0x21C3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3D4u;
            // 0x21c3d8: 0x8f8492b0  lw          $a0, -0x6D50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939312)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3DCu; }
        if (ctx->pc != 0x21C3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C3DCu; }
        if (ctx->pc != 0x21C3DCu) { return; }
    }
    ctx->pc = 0x21C3DCu;
label_21c3dc:
    // 0x21c3dc: 0x878492c8  lh          $a0, -0x6D38($gp)
    ctx->pc = 0x21c3dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21c3e0: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x21c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x21c3e4: 0x8f929314  lw          $s2, -0x6CEC($gp)
    ctx->pc = 0x21c3e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939412)));
    // 0x21c3e8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x21C3E8u;
    {
        const bool branch_taken_0x21c3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3E8u;
            // 0x21c3ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3e8) {
            ctx->pc = 0x21C420u;
            goto label_21c420;
        }
    }
    ctx->pc = 0x21C3F0u;
    // 0x21c3f0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x21c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x21c3f4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21C3F4u;
    {
        const bool branch_taken_0x21c3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3F4u;
            // 0x21c3f8: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3f4) {
            ctx->pc = 0x21C420u;
            goto label_21c420;
        }
    }
    ctx->pc = 0x21C3FCu;
    // 0x21c3fc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C3FCu;
    {
        const bool branch_taken_0x21c3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C3FCu;
            // 0x21c400: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3fc) {
            ctx->pc = 0x21C420u;
            goto label_21c420;
        }
    }
    ctx->pc = 0x21C404u;
    // 0x21c404: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C404u;
    {
        const bool branch_taken_0x21c404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C404u;
            // 0x21c408: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c404) {
            ctx->pc = 0x21C420u;
            goto label_21c420;
        }
    }
    ctx->pc = 0x21C40Cu;
    // 0x21c40c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C40Cu;
    {
        const bool branch_taken_0x21c40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21c40c) {
            ctx->pc = 0x21C41Cu;
            goto label_21c41c;
        }
    }
    ctx->pc = 0x21C414u;
    // 0x21c414: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x21C414u;
    {
        const bool branch_taken_0x21c414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C414u;
            // 0x21c418: 0x878492c8  lh          $a0, -0x6D38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c414) {
            ctx->pc = 0x21C4F4u;
            goto label_21c4f4;
        }
    }
    ctx->pc = 0x21C41Cu;
label_21c41c:
    // 0x21c41c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21c41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21c420:
    // 0x21c420: 0xc08b050  jal         func_22C140
    ctx->pc = 0x21C420u;
    SET_GPR_U32(ctx, 31, 0x21C428u);
    ctx->pc = 0x21C424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C420u;
            // 0x21c424: 0x8f849308  lw          $a0, -0x6CF8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C140u;
    if (runtime->hasFunction(0x22C140u)) {
        auto targetFn = runtime->lookupFunction(0x22C140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C428u; }
        if (ctx->pc != 0x21C428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuItemBrdPosStep__Fi_0x22c140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C428u; }
        if (ctx->pc != 0x21C428u) { return; }
    }
    ctx->pc = 0x21C428u;
label_21c428:
    // 0x21c428: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c42c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x21c42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x21c430: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x21c430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x21c434: 0x26470105  addiu       $a3, $s2, 0x105
    ctx->pc = 0x21c434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 261));
    // 0x21c438: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x21c438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21c43c: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x21c43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x21c440: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C440u;
    SET_GPR_U32(ctx, 31, 0x21C448u);
    ctx->pc = 0x21C444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C440u;
            // 0x21c444: 0x24080128  addiu       $t0, $zero, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C448u; }
        if (ctx->pc != 0x21C448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C448u; }
        if (ctx->pc != 0x21C448u) { return; }
    }
    ctx->pc = 0x21C448u;
label_21c448:
    // 0x21c448: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x21c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x21c44c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x21c44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x21c450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c454: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x21c454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21c458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c45c: 0x240600f4  addiu       $a2, $zero, 0xF4
    ctx->pc = 0x21c45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x21c460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21c460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21c464: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x21c464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21c468: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x21c468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21c46c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21C46Cu;
    SET_GPR_U32(ctx, 31, 0x21C474u);
    ctx->pc = 0x21C470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C46Cu;
            // 0x21c470: 0xe4207900  swc1        $f0, 0x7900($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30976), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C474u; }
        if (ctx->pc != 0x21C474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C474u; }
        if (ctx->pc != 0x21C474u) { return; }
    }
    ctx->pc = 0x21C474u;
label_21c474:
    // 0x21c474: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x21c474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21c478: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x21c478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x21c47c: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x21c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x21c480: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x21c480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21c484: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x21c484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x21c488: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x21c488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c48c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x21c48cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c490: 0xc089e40  jal         func_227900
    ctx->pc = 0x21C490u;
    SET_GPR_U32(ctx, 31, 0x21C498u);
    ctx->pc = 0x21C494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C490u;
            // 0x21c494: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227900u;
    if (runtime->hasFunction(0x227900u)) {
        auto targetFn = runtime->lookupFunction(0x227900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C498u; }
        if (ctx->pc != 0x21C498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdDraw__FPf9mgRect_i_Riiiii_0x227900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C498u; }
        if (ctx->pc != 0x21C498u) { return; }
    }
    ctx->pc = 0x21C498u;
label_21c498:
    // 0x21c498: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21c498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21c49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4a0: 0x24a5a3e0  addiu       $a1, $a1, -0x5C20
    ctx->pc = 0x21c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943712));
    // 0x21c4a4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x21C4A4u;
    SET_GPR_U32(ctx, 31, 0x21C4ACu);
    ctx->pc = 0x21C4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C4A4u;
            // 0x21c4a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4ACu; }
        if (ctx->pc != 0x21C4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4ACu; }
        if (ctx->pc != 0x21C4ACu) { return; }
    }
    ctx->pc = 0x21C4ACu;
label_21c4ac:
    // 0x21c4ac: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x21c4acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x21c4b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21c4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4b4: 0x27a4012c  addiu       $a0, $sp, 0x12C
    ctx->pc = 0x21c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x21c4b8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x21c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21c4bc: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x21c4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x21c4c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21c4c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4c4: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x21c4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x21c4c8: 0xc089f7c  jal         func_227DF0
    ctx->pc = 0x21C4C8u;
    SET_GPR_U32(ctx, 31, 0x21C4D0u);
    ctx->pc = 0x21C4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C4C8u;
            // 0x21c4cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227DF0u;
    if (runtime->hasFunction(0x227DF0u)) {
        auto targetFn = runtime->lookupFunction(0x227DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4D0u; }
        if (ctx->pc != 0x21C4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemModeItemDraw__FRi9mgRect_i_PfP18MENUFORMPARTS_TYPEP10mgCTexture9mgRect_i_i_0x227df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4D0u; }
        if (ctx->pc != 0x21C4D0u) { return; }
    }
    ctx->pc = 0x21C4D0u;
label_21c4d0:
    // 0x21c4d0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x21c4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21c4d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4d8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x21c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21c4dc: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x21c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x21c4e0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x21c4e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4e4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x21c4e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c4e8: 0xc089b94  jal         func_226E50
    ctx->pc = 0x21C4E8u;
    SET_GPR_U32(ctx, 31, 0x21C4F0u);
    ctx->pc = 0x21C4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C4E8u;
            // 0x21c4ec: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226E50u;
    if (runtime->hasFunction(0x226E50u)) {
        auto targetFn = runtime->lookupFunction(0x226E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4F0u; }
        if (ctx->pc != 0x21C4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdFrameDraw__FiiRiiiii_0x226e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C4F0u; }
        if (ctx->pc != 0x21C4F0u) { return; }
    }
    ctx->pc = 0x21C4F0u;
label_21c4f0:
    // 0x21c4f0: 0x878492c8  lh          $a0, -0x6D38($gp)
    ctx->pc = 0x21c4f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939336)));
label_21c4f4:
    // 0x21c4f4: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x21c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x21c4f8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C4F8u;
    {
        const bool branch_taken_0x21c4f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C4F8u;
            // 0x21c4fc: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c4f8) {
            ctx->pc = 0x21C520u;
            goto label_21c520;
        }
    }
    ctx->pc = 0x21C500u;
    // 0x21c500: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C500u;
    {
        const bool branch_taken_0x21c500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C500u;
            // 0x21c504: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c500) {
            ctx->pc = 0x21C520u;
            goto label_21c520;
        }
    }
    ctx->pc = 0x21C508u;
    // 0x21c508: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C508u;
    {
        const bool branch_taken_0x21c508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C508u;
            // 0x21c50c: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c508) {
            ctx->pc = 0x21C520u;
            goto label_21c520;
        }
    }
    ctx->pc = 0x21C510u;
    // 0x21c510: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C510u;
    {
        const bool branch_taken_0x21c510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21c510) {
            ctx->pc = 0x21C520u;
            goto label_21c520;
        }
    }
    ctx->pc = 0x21C518u;
    // 0x21c518: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21C518u;
    {
        const bool branch_taken_0x21c518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c518) {
            ctx->pc = 0x21C578u;
            goto label_21c578;
        }
    }
    ctx->pc = 0x21C520u;
label_21c520:
    // 0x21c520: 0x938392a0  lbu         $v1, -0x6D60($gp)
    ctx->pc = 0x21c520u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939296)));
    // 0x21c524: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x21C524u;
    {
        const bool branch_taken_0x21c524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c524) {
            ctx->pc = 0x21C578u;
            goto label_21c578;
        }
    }
    ctx->pc = 0x21C52Cu;
    // 0x21c52c: 0x8f839294  lw          $v1, -0x6D6C($gp)
    ctx->pc = 0x21c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939284)));
    // 0x21c530: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x21C530u;
    {
        const bool branch_taken_0x21c530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c530) {
            ctx->pc = 0x21C578u;
            goto label_21c578;
        }
    }
    ctx->pc = 0x21C538u;
    // 0x21c538: 0x8f8391d0  lw          $v1, -0x6E30($gp)
    ctx->pc = 0x21c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x21c53c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x21C53Cu;
    {
        const bool branch_taken_0x21c53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c53c) {
            ctx->pc = 0x21C578u;
            goto label_21c578;
        }
    }
    ctx->pc = 0x21C544u;
    // 0x21c544: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x21c544u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c54c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x21C54Cu;
    SET_GPR_U32(ctx, 31, 0x21C554u);
    ctx->pc = 0x21C550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C54Cu;
            // 0x21c550: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C554u; }
        if (ctx->pc != 0x21C554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C554u; }
        if (ctx->pc != 0x21C554u) { return; }
    }
    ctx->pc = 0x21C554u;
label_21c554:
    // 0x21c554: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x21c554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x21c558: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x21c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x21c55c: 0x8f8691d0  lw          $a2, -0x6E30($gp)
    ctx->pc = 0x21c55cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x21c560: 0x8f879294  lw          $a3, -0x6D6C($gp)
    ctx->pc = 0x21c560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939284)));
    // 0x21c564: 0x2463feb6  addiu       $v1, $v1, -0x14A
    ctx->pc = 0x21c564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966966));
    // 0x21c568: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x21c568u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x21c56c: 0x2445ff72  addiu       $a1, $v0, -0x8E
    ctx->pc = 0x21c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967154));
    // 0x21c570: 0xc084794  jal         func_211E50
    ctx->pc = 0x21C570u;
    SET_GPR_U32(ctx, 31, 0x21C578u);
    ctx->pc = 0x21C574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C570u;
            // 0x21c574: 0x2464000a  addiu       $a0, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211E50u;
    if (runtime->hasFunction(0x211E50u)) {
        auto targetFn = runtime->lookupFunction(0x211E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C578u; }
        if (ctx->pc != 0x21C578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFishParam__FiiP10mgCTextureP13CGameDataUsed_0x211e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C578u; }
        if (ctx->pc != 0x21C578u) { return; }
    }
    ctx->pc = 0x21C578u;
label_21c578:
    // 0x21c578: 0x12200057  beqz        $s1, . + 4 + (0x57 << 2)
    ctx->pc = 0x21C578u;
    {
        const bool branch_taken_0x21c578 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c578) {
            ctx->pc = 0x21C6D8u;
            goto label_21c6d8;
        }
    }
    ctx->pc = 0x21C580u;
    // 0x21c580: 0xc78092dc  lwc1        $f0, -0x6D24($gp)
    ctx->pc = 0x21c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c584: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x21c584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x21c588: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x21c588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x21c58c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c590: 0x0  nop
    ctx->pc = 0x21c590u;
    // NOP
    // 0x21c594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21c594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21c598: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x21C598u;
    SET_GPR_U32(ctx, 31, 0x21C5A0u);
    ctx->pc = 0x21C59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C598u;
            // 0x21c59c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C5A0u; }
        if (ctx->pc != 0x21C5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C5A0u; }
        if (ctx->pc != 0x21C5A0u) { return; }
    }
    ctx->pc = 0x21C5A0u;
label_21c5a0:
    // 0x21c5a0: 0xc047964  jal         func_11E590
    ctx->pc = 0x21C5A0u;
    SET_GPR_U32(ctx, 31, 0x21C5A8u);
    ctx->pc = 0x21C5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C5A0u;
            // 0x21c5a4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C5A8u; }
        if (ctx->pc != 0x21C5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C5A8u; }
        if (ctx->pc != 0x21C5A8u) { return; }
    }
    ctx->pc = 0x21C5A8u;
label_21c5a8:
    // 0x21c5a8: 0x8f859304  lw          $a1, -0x6CFC($gp)
    ctx->pc = 0x21c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939396)));
    // 0x21c5ac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x21c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21c5b0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x21c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x21c5b4: 0x2643ffee  addiu       $v1, $s2, -0x12
    ctx->pc = 0x21c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967278));
    // 0x21c5b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c5bc: 0x0  nop
    ctx->pc = 0x21c5bcu;
    // NOP
    // 0x21c5c0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x21c5c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c5c4: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x21c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x21c5c8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x21c5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x21c5cc: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x21c5ccu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21c5d0: 0xc78092dc  lwc1        $f0, -0x6D24($gp)
    ctx->pc = 0x21c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c5d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c5d8: 0x0  nop
    ctx->pc = 0x21c5d8u;
    // NOP
    // 0x21c5dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21c5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21c5e0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x21c5e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c5e4: 0x2010  mfhi        $a0
    ctx->pc = 0x21c5e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x21c5e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x21c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21c5ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21c5f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21c5f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c5f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c5fc: 0x0  nop
    ctx->pc = 0x21c5fcu;
    // NOP
    // 0x21c600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21c600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21c604: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x21C604u;
    SET_GPR_U32(ctx, 31, 0x21C60Cu);
    ctx->pc = 0x21C608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C604u;
            // 0x21c608: 0x46020500  add.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C60Cu; }
        if (ctx->pc != 0x21C60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C60Cu; }
        if (ctx->pc != 0x21C60Cu) { return; }
    }
    ctx->pc = 0x21C60Cu;
label_21c60c:
    // 0x21c60c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x21C60Cu;
    SET_GPR_U32(ctx, 31, 0x21C614u);
    ctx->pc = 0x21C610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C60Cu;
            // 0x21c610: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C614u; }
        if (ctx->pc != 0x21C614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C614u; }
        if (ctx->pc != 0x21C614u) { return; }
    }
    ctx->pc = 0x21C614u;
label_21c614:
    // 0x21c614: 0x8f879304  lw          $a3, -0x6CFC($gp)
    ctx->pc = 0x21c614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939396)));
    // 0x21c618: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21c618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21c61c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21c61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21c620: 0x8f839308  lw          $v1, -0x6CF8($gp)
    ctx->pc = 0x21c620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939400)));
    // 0x21c624: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21c624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21c628: 0x278492e0  addiu       $a0, $gp, -0x6D20
    ctx->pc = 0x21c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939360));
    // 0x21c62c: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x21c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x21c630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c634: 0x3446aaab  ori         $a2, $v0, 0xAAAB
    ctx->pc = 0x21c634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x21c638: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21c638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21c63c: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x21c63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x21c640: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21c640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21c644: 0x46006842  mul.s       $f1, $f13, $f0
    ctx->pc = 0x21c644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x21c648: 0x1010  mfhi        $v0
    ctx->pc = 0x21c648u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21c64c: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x21c64cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x21c650: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21c654: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x21c654u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c658: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21c658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c65c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x21c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c660: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21c660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c664: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c668: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x21c668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x21c66c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x21c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x21c670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21c670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c674: 0x0  nop
    ctx->pc = 0x21c674u;
    // NOP
    // 0x21c678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21c678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21c67c: 0xc094514  jal         func_251450
    ctx->pc = 0x21C67Cu;
    SET_GPR_U32(ctx, 31, 0x21C684u);
    ctx->pc = 0x21C680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C67Cu;
            // 0x21c680: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C684u; }
        if (ctx->pc != 0x21C684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C684u; }
        if (ctx->pc != 0x21C684u) { return; }
    }
    ctx->pc = 0x21C684u;
label_21c684:
    // 0x21c684: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x21c684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21c688: 0x278492e4  addiu       $a0, $gp, -0x6D1C
    ctx->pc = 0x21c688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939364));
    // 0x21c68c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x21c68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x21c690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c694: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21c694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21c698: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21c698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21c69c: 0xc094514  jal         func_251450
    ctx->pc = 0x21C69Cu;
    SET_GPR_U32(ctx, 31, 0x21C6A4u);
    ctx->pc = 0x21C6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C69Cu;
            // 0x21c6a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C6A4u; }
        if (ctx->pc != 0x21C6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C6A4u; }
        if (ctx->pc != 0x21C6A4u) { return; }
    }
    ctx->pc = 0x21C6A4u;
label_21c6a4:
    // 0x21c6a4: 0x2a4100e1  slti        $at, $s2, 0xE1
    ctx->pc = 0x21c6a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x21c6a8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x21C6A8u;
    {
        const bool branch_taken_0x21c6a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c6a8) {
            ctx->pc = 0x21C6D8u;
            goto label_21c6d8;
        }
    }
    ctx->pc = 0x21C6B0u;
    // 0x21c6b0: 0x8f8492c0  lw          $a0, -0x6D40($gp)
    ctx->pc = 0x21c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939328)));
    // 0x21c6b4: 0xc78c92e0  lwc1        $f12, -0x6D20($gp)
    ctx->pc = 0x21c6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21c6b8: 0xc78d92e4  lwc1        $f13, -0x6D1C($gp)
    ctx->pc = 0x21c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21c6bc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x21c6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21c6c0: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x21c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x21c6c4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21c6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6c8: 0x24a5ce50  addiu       $a1, $a1, -0x31B0
    ctx->pc = 0x21c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954576));
    // 0x21c6cc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x21c6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6d0: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x21C6D0u;
    SET_GPR_U32(ctx, 31, 0x21C6D8u);
    ctx->pc = 0x21C6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C6D0u;
            // 0x21c6d4: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C6D8u; }
        if (ctx->pc != 0x21C6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C6D8u; }
        if (ctx->pc != 0x21C6D8u) { return; }
    }
    ctx->pc = 0x21C6D8u;
label_21c6d8:
    // 0x21c6d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21c6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21c6dc: 0x8c23ca40  lw          $v1, -0x35C0($at)
    ctx->pc = 0x21c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x21c6e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x21C6E0u;
    {
        const bool branch_taken_0x21c6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c6e0) {
            ctx->pc = 0x21C710u;
            goto label_21c710;
        }
    }
    ctx->pc = 0x21C6E8u;
    // 0x21c6e8: 0x938392d0  lbu         $v1, -0x6D30($gp)
    ctx->pc = 0x21c6e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939344)));
    // 0x21c6ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C6ECu;
    {
        const bool branch_taken_0x21c6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C6ECu;
            // 0x21c6f0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6ec) {
            ctx->pc = 0x21C710u;
            goto label_21c710;
        }
    }
    ctx->pc = 0x21C6F4u;
    // 0x21c6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6f8: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x21c6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x21c6fc: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x21C6FCu;
    SET_GPR_U32(ctx, 31, 0x21C704u);
    ctx->pc = 0x21C700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C6FCu;
            // 0x21c700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C704u; }
        if (ctx->pc != 0x21C704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C704u; }
        if (ctx->pc != 0x21C704u) { return; }
    }
    ctx->pc = 0x21C704u;
label_21c704:
    // 0x21c704: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21c704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21c708: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x21C708u;
    SET_GPR_U32(ctx, 31, 0x21C710u);
    ctx->pc = 0x21C70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C708u;
            // 0x21c70c: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C710u; }
        if (ctx->pc != 0x21C710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C710u; }
        if (ctx->pc != 0x21C710u) { return; }
    }
    ctx->pc = 0x21C710u;
label_21c710:
    // 0x21c710: 0x8f8392dc  lw          $v1, -0x6D24($gp)
    ctx->pc = 0x21c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
label_21c714:
    // 0x21c714: 0x3c010393  lui         $at, 0x393
    ctx->pc = 0x21c714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)915 << 16));
    // 0x21c718: 0x34218701  ori         $at, $at, 0x8701
    ctx->pc = 0x21c718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34561);
    // 0x21c71c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21c720: 0xaf8392dc  sw          $v1, -0x6D24($gp)
    ctx->pc = 0x21c720u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939356), GPR_U32(ctx, 3));
    // 0x21c724: 0x8f8392dc  lw          $v1, -0x6D24($gp)
    ctx->pc = 0x21c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
    // 0x21c728: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x21c728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x21c72c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21C72Cu;
    {
        const bool branch_taken_0x21c72c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c72c) {
            ctx->pc = 0x21C738u;
            goto label_21c738;
        }
    }
    ctx->pc = 0x21C734u;
    // 0x21c734: 0xaf8092dc  sw          $zero, -0x6D24($gp)
    ctx->pc = 0x21c734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939356), GPR_U32(ctx, 0));
label_21c738:
    // 0x21c738: 0xaf8092fc  sw          $zero, -0x6D04($gp)
    ctx->pc = 0x21c738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 0));
label_21c73c:
    // 0x21c73c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21c73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21c740: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x21c740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21c744: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x21c744u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21c748: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21c748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c74c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21c74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c750: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21c750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c754: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21c754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c758: 0x3e00008  jr          $ra
    ctx->pc = 0x21C758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C758u;
            // 0x21c75c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C760u;
}
