#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditPlaceEffect__FP10CEditPartsPf
// Address: 0x2fac20 - 0x2fadc8
void EditPlaceEffect__FP10CEditPartsPf_0x2fac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditPlaceEffect__FP10CEditPartsPf_0x2fac20");
#endif

    switch (ctx->pc) {
        case 0x2fac20u: goto label_2fac20;
        case 0x2fac24u: goto label_2fac24;
        case 0x2fac28u: goto label_2fac28;
        case 0x2fac2cu: goto label_2fac2c;
        case 0x2fac30u: goto label_2fac30;
        case 0x2fac34u: goto label_2fac34;
        case 0x2fac38u: goto label_2fac38;
        case 0x2fac3cu: goto label_2fac3c;
        case 0x2fac40u: goto label_2fac40;
        case 0x2fac44u: goto label_2fac44;
        case 0x2fac48u: goto label_2fac48;
        case 0x2fac4cu: goto label_2fac4c;
        case 0x2fac50u: goto label_2fac50;
        case 0x2fac54u: goto label_2fac54;
        case 0x2fac58u: goto label_2fac58;
        case 0x2fac5cu: goto label_2fac5c;
        case 0x2fac60u: goto label_2fac60;
        case 0x2fac64u: goto label_2fac64;
        case 0x2fac68u: goto label_2fac68;
        case 0x2fac6cu: goto label_2fac6c;
        case 0x2fac70u: goto label_2fac70;
        case 0x2fac74u: goto label_2fac74;
        case 0x2fac78u: goto label_2fac78;
        case 0x2fac7cu: goto label_2fac7c;
        case 0x2fac80u: goto label_2fac80;
        case 0x2fac84u: goto label_2fac84;
        case 0x2fac88u: goto label_2fac88;
        case 0x2fac8cu: goto label_2fac8c;
        case 0x2fac90u: goto label_2fac90;
        case 0x2fac94u: goto label_2fac94;
        case 0x2fac98u: goto label_2fac98;
        case 0x2fac9cu: goto label_2fac9c;
        case 0x2faca0u: goto label_2faca0;
        case 0x2faca4u: goto label_2faca4;
        case 0x2faca8u: goto label_2faca8;
        case 0x2facacu: goto label_2facac;
        case 0x2facb0u: goto label_2facb0;
        case 0x2facb4u: goto label_2facb4;
        case 0x2facb8u: goto label_2facb8;
        case 0x2facbcu: goto label_2facbc;
        case 0x2facc0u: goto label_2facc0;
        case 0x2facc4u: goto label_2facc4;
        case 0x2facc8u: goto label_2facc8;
        case 0x2facccu: goto label_2faccc;
        case 0x2facd0u: goto label_2facd0;
        case 0x2facd4u: goto label_2facd4;
        case 0x2facd8u: goto label_2facd8;
        case 0x2facdcu: goto label_2facdc;
        case 0x2face0u: goto label_2face0;
        case 0x2face4u: goto label_2face4;
        case 0x2face8u: goto label_2face8;
        case 0x2facecu: goto label_2facec;
        case 0x2facf0u: goto label_2facf0;
        case 0x2facf4u: goto label_2facf4;
        case 0x2facf8u: goto label_2facf8;
        case 0x2facfcu: goto label_2facfc;
        case 0x2fad00u: goto label_2fad00;
        case 0x2fad04u: goto label_2fad04;
        case 0x2fad08u: goto label_2fad08;
        case 0x2fad0cu: goto label_2fad0c;
        case 0x2fad10u: goto label_2fad10;
        case 0x2fad14u: goto label_2fad14;
        case 0x2fad18u: goto label_2fad18;
        case 0x2fad1cu: goto label_2fad1c;
        case 0x2fad20u: goto label_2fad20;
        case 0x2fad24u: goto label_2fad24;
        case 0x2fad28u: goto label_2fad28;
        case 0x2fad2cu: goto label_2fad2c;
        case 0x2fad30u: goto label_2fad30;
        case 0x2fad34u: goto label_2fad34;
        case 0x2fad38u: goto label_2fad38;
        case 0x2fad3cu: goto label_2fad3c;
        case 0x2fad40u: goto label_2fad40;
        case 0x2fad44u: goto label_2fad44;
        case 0x2fad48u: goto label_2fad48;
        case 0x2fad4cu: goto label_2fad4c;
        case 0x2fad50u: goto label_2fad50;
        case 0x2fad54u: goto label_2fad54;
        case 0x2fad58u: goto label_2fad58;
        case 0x2fad5cu: goto label_2fad5c;
        case 0x2fad60u: goto label_2fad60;
        case 0x2fad64u: goto label_2fad64;
        case 0x2fad68u: goto label_2fad68;
        case 0x2fad6cu: goto label_2fad6c;
        case 0x2fad70u: goto label_2fad70;
        case 0x2fad74u: goto label_2fad74;
        case 0x2fad78u: goto label_2fad78;
        case 0x2fad7cu: goto label_2fad7c;
        case 0x2fad80u: goto label_2fad80;
        case 0x2fad84u: goto label_2fad84;
        case 0x2fad88u: goto label_2fad88;
        case 0x2fad8cu: goto label_2fad8c;
        case 0x2fad90u: goto label_2fad90;
        case 0x2fad94u: goto label_2fad94;
        case 0x2fad98u: goto label_2fad98;
        case 0x2fad9cu: goto label_2fad9c;
        case 0x2fada0u: goto label_2fada0;
        case 0x2fada4u: goto label_2fada4;
        case 0x2fada8u: goto label_2fada8;
        case 0x2fadacu: goto label_2fadac;
        case 0x2fadb0u: goto label_2fadb0;
        case 0x2fadb4u: goto label_2fadb4;
        case 0x2fadb8u: goto label_2fadb8;
        case 0x2fadbcu: goto label_2fadbc;
        case 0x2fadc0u: goto label_2fadc0;
        case 0x2fadc4u: goto label_2fadc4;
        default: break;
    }

    ctx->pc = 0x2fac20u;

label_2fac20:
    // 0x2fac20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2fac24:
    // 0x2fac24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fac24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fac28:
    // 0x2fac28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2fac2c:
    // 0x2fac2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fac2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fac30:
    // 0x2fac30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2fac34:
    // 0x2fac34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2fac38:
    // 0x2fac38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2fac38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fac3c:
    // 0x2fac3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2fac40:
    // 0x2fac40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fac40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fac44:
    // 0x2fac44: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2fac44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2fac48:
    // 0x2fac48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fac48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fac4c:
    // 0x2fac4c: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2fac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_2fac50:
    // 0x2fac50: 0x24639370  addiu       $v1, $v1, -0x6C90
    ctx->pc = 0x2fac50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939504));
label_2fac54:
    // 0x2fac54: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x2fac54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2fac58:
    // 0x2fac58: 0x8d020070  lw          $v0, 0x70($t0)
    ctx->pc = 0x2fac58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 112)));
label_2fac5c:
    // 0x2fac5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2fac60:
    if (ctx->pc == 0x2FAC60u) {
        ctx->pc = 0x2FAC60u;
            // 0x2fac60: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x2FAC64u;
        goto label_2fac64;
    }
    ctx->pc = 0x2FAC5Cu;
    {
        const bool branch_taken_0x2fac5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAC5Cu;
            // 0x2fac60: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac5c) {
            ctx->pc = 0x2FAC6Cu;
            goto label_2fac6c;
        }
    }
    ctx->pc = 0x2FAC64u;
label_2fac64:
    // 0x2fac64: 0x1000000c  b           . + 4 + (0xC << 2)
label_2fac68:
    if (ctx->pc == 0x2FAC68u) {
        ctx->pc = 0x2FAC68u;
            // 0x2fac68: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2FAC6Cu;
        goto label_2fac6c;
    }
    ctx->pc = 0x2FAC64u;
    {
        const bool branch_taken_0x2fac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAC64u;
            // 0x2fac68: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac64) {
            ctx->pc = 0x2FAC98u;
            goto label_2fac98;
        }
    }
    ctx->pc = 0x2FAC6Cu;
label_2fac6c:
    // 0x2fac6c: 0x8d020088  lw          $v0, 0x88($t0)
    ctx->pc = 0x2fac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
label_2fac70:
    // 0x2fac70: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x2fac70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2fac74:
    // 0x2fac74: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2fac78:
    if (ctx->pc == 0x2FAC78u) {
        ctx->pc = 0x2FAC7Cu;
        goto label_2fac7c;
    }
    ctx->pc = 0x2FAC74u;
    {
        const bool branch_taken_0x2fac74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fac74) {
            ctx->pc = 0x2FAC84u;
            goto label_2fac84;
        }
    }
    ctx->pc = 0x2FAC7Cu;
label_2fac7c:
    // 0x2fac7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fac7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fac80:
    // 0x2fac80: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2fac80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2fac84:
    // 0x2fac84: 0x0  nop
    ctx->pc = 0x2fac84u;
    // NOP
label_2fac88:
    // 0x2fac88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2fac88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2fac8c:
    // 0x2fac8c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x2fac8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_2fac90:
    // 0x2fac90: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2fac94:
    if (ctx->pc == 0x2FAC94u) {
        ctx->pc = 0x2FAC94u;
            // 0x2fac94: 0x24e70100  addiu       $a3, $a3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
        ctx->pc = 0x2FAC98u;
        goto label_2fac98;
    }
    ctx->pc = 0x2FAC90u;
    {
        const bool branch_taken_0x2fac90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAC90u;
            // 0x2fac94: 0x24e70100  addiu       $a3, $a3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac90) {
            ctx->pc = 0x2FAC54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fac54;
        }
    }
    ctx->pc = 0x2FAC98u;
label_2fac98:
    // 0x2fac98: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2fac9c:
    if (ctx->pc == 0x2FAC9Cu) {
        ctx->pc = 0x2FAC9Cu;
            // 0x2fac9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FACA0u;
        goto label_2faca0;
    }
    ctx->pc = 0x2FAC98u;
    {
        const bool branch_taken_0x2fac98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAC98u;
            // 0x2fac9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac98) {
            ctx->pc = 0x2FACA8u;
            goto label_2faca8;
        }
    }
    ctx->pc = 0x2FACA0u;
label_2faca0:
    // 0x2faca0: 0x10000042  b           . + 4 + (0x42 << 2)
label_2faca4:
    if (ctx->pc == 0x2FACA4u) {
        ctx->pc = 0x2FACA4u;
            // 0x2faca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FACA8u;
        goto label_2faca8;
    }
    ctx->pc = 0x2FACA0u;
    {
        const bool branch_taken_0x2faca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FACA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FACA0u;
            // 0x2faca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faca0) {
            ctx->pc = 0x2FADACu;
            goto label_2fadac;
        }
    }
    ctx->pc = 0x2FACA8u;
label_2faca8:
    // 0x2faca8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2facac:
    if (ctx->pc == 0x2FACACu) {
        ctx->pc = 0x2FACACu;
            // 0x2facac: 0xaf829f64  sw          $v0, -0x609C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942564), GPR_U32(ctx, 2));
        ctx->pc = 0x2FACB0u;
        goto label_2facb0;
    }
    ctx->pc = 0x2FACA8u;
    {
        const bool branch_taken_0x2faca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FACA8u;
            // 0x2facac: 0xaf829f64  sw          $v0, -0x609C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faca8) {
            ctx->pc = 0x2FACC0u;
            goto label_2facc0;
        }
    }
    ctx->pc = 0x2FACB0u;
label_2facb0:
    // 0x2facb0: 0xc059c74  jal         func_1671D0
label_2facb4:
    if (ctx->pc == 0x2FACB4u) {
        ctx->pc = 0x2FACB4u;
            // 0x2facb4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2FACB8u;
        goto label_2facb8;
    }
    ctx->pc = 0x2FACB0u;
    SET_GPR_U32(ctx, 31, 0x2FACB8u);
    ctx->pc = 0x2FACB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FACB0u;
            // 0x2facb4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1671D0u;
    if (runtime->hasFunction(0x1671D0u)) {
        auto targetFn = runtime->lookupFunction(0x1671D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FACB8u; }
        if (ctx->pc != 0x2FACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBBox__9CMapPartsFP9mgVu0FBOX_0x1671d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FACB8u; }
        if (ctx->pc != 0x2FACB8u) { return; }
    }
    ctx->pc = 0x2FACB8u;
label_2facb8:
    // 0x2facb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2facbc:
    if (ctx->pc == 0x2FACBCu) {
        ctx->pc = 0x2FACBCu;
            // 0x2facbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2FACC0u;
        goto label_2facc0;
    }
    ctx->pc = 0x2FACB8u;
    {
        const bool branch_taken_0x2facb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FACB8u;
            // 0x2facbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2facb8) {
            ctx->pc = 0x2FACC8u;
            goto label_2facc8;
        }
    }
    ctx->pc = 0x2FACC0u;
label_2facc0:
    // 0x2facc0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2facc4:
    if (ctx->pc == 0x2FACC4u) {
        ctx->pc = 0x2FACC4u;
            // 0x2facc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FACC8u;
        goto label_2facc8;
    }
    ctx->pc = 0x2FACC0u;
    {
        const bool branch_taken_0x2facc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FACC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FACC0u;
            // 0x2facc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2facc0) {
            ctx->pc = 0x2FADACu;
            goto label_2fadac;
        }
    }
    ctx->pc = 0x2FACC8u;
label_2facc8:
    // 0x2facc8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2facc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2faccc:
    // 0x2faccc: 0xc041c3e  jal         func_1070F8
label_2facd0:
    if (ctx->pc == 0x2FACD0u) {
        ctx->pc = 0x2FACD0u;
            // 0x2facd0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2FACD4u;
        goto label_2facd4;
    }
    ctx->pc = 0x2FACCCu;
    SET_GPR_U32(ctx, 31, 0x2FACD4u);
    ctx->pc = 0x2FACD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FACCCu;
            // 0x2facd0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FACD4u; }
        if (ctx->pc != 0x2FACD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FACD4u; }
        if (ctx->pc != 0x2FACD4u) { return; }
    }
    ctx->pc = 0x2FACD4u;
label_2facd4:
    // 0x2facd4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2facd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2facd8:
    // 0x2facd8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2facd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2facdc:
    // 0x2facdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2facdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2face0:
    // 0x2face0: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x2face0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_2face4:
    // 0x2face4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2face4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2face8:
    // 0x2face8: 0x27a20074  addiu       $v0, $sp, 0x74
    ctx->pc = 0x2face8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_2facec:
    // 0x2facec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2facecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2facf0:
    // 0x2facf0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2facf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2facf4:
    // 0x2facf4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2facf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2facf8:
    // 0x2facf8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2facf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2facfc:
    // 0x2facfc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2facfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2fad00:
    // 0x2fad00: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2fad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fad04:
    // 0x2fad04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fad04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2fad08:
    // 0x2fad08: 0xc04c000  jal         func_130000
label_2fad0c:
    if (ctx->pc == 0x2FAD0Cu) {
        ctx->pc = 0x2FAD0Cu;
            // 0x2fad0c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x2FAD10u;
        goto label_2fad10;
    }
    ctx->pc = 0x2FAD08u;
    SET_GPR_U32(ctx, 31, 0x2FAD10u);
    ctx->pc = 0x2FAD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAD08u;
            // 0x2fad0c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130000u;
    if (runtime->hasFunction(0x130000u)) {
        auto targetFn = runtime->lookupFunction(0x130000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAD10u; }
        if (ctx->pc != 0x2FAD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPf_0x130000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAD10u; }
        if (ctx->pc != 0x2FAD10u) { return; }
    }
    ctx->pc = 0x2FAD10u;
label_2fad10:
    // 0x2fad10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fad10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2fad14:
    // 0x2fad14: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2fad14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2fad18:
    // 0x2fad18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fad18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fad1c:
    // 0x2fad1c: 0x0  nop
    ctx->pc = 0x2fad1cu;
    // NOP
label_2fad20:
    // 0x2fad20: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2fad20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fad24:
    // 0x2fad24: 0x0  nop
    ctx->pc = 0x2fad24u;
    // NOP
label_2fad28:
    // 0x2fad28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2fad2c:
    if (ctx->pc == 0x2FAD2Cu) {
        ctx->pc = 0x2FAD2Cu;
            // 0x2fad2c: 0x3c0340b1  lui         $v1, 0x40B1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16561 << 16));
        ctx->pc = 0x2FAD30u;
        goto label_2fad30;
    }
    ctx->pc = 0x2FAD28u;
    {
        const bool branch_taken_0x2fad28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FAD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAD28u;
            // 0x2fad2c: 0x3c0340b1  lui         $v1, 0x40B1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16561 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad28) {
            ctx->pc = 0x2FAD34u;
            goto label_2fad34;
        }
    }
    ctx->pc = 0x2FAD30u;
label_2fad30:
    // 0x2fad30: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fad30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2fad34:
    // 0x2fad34: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2fad38:
    // 0x2fad38: 0x3463c71c  ori         $v1, $v1, 0xC71C
    ctx->pc = 0x2fad38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50972);
label_2fad3c:
    // 0x2fad3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fad3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fad40:
    // 0x2fad40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fad40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fad44:
    // 0x2fad44: 0x0  nop
    ctx->pc = 0x2fad44u;
    // NOP
label_2fad48:
    // 0x2fad48: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2fad48u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_2fad4c:
    // 0x2fad4c: 0x0  nop
    ctx->pc = 0x2fad4cu;
    // NOP
label_2fad50:
    // 0x2fad50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fad50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2fad54:
    // 0x2fad54: 0xc0a248c  jal         func_289230
label_2fad58:
    if (ctx->pc == 0x2FAD58u) {
        ctx->pc = 0x2FAD58u;
            // 0x2fad58: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2FAD5Cu;
        goto label_2fad5c;
    }
    ctx->pc = 0x2FAD54u;
    SET_GPR_U32(ctx, 31, 0x2FAD5Cu);
    ctx->pc = 0x2FAD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAD54u;
            // 0x2fad58: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAD5Cu; }
        if (ctx->pc != 0x2FAD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAD5Cu; }
        if (ctx->pc != 0x2FAD5Cu) { return; }
    }
    ctx->pc = 0x2FAD5Cu;
label_2fad5c:
    // 0x2fad5c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2fad5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2fad60:
    // 0x2fad60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fad60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fad64:
    // 0x2fad64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fad64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fad68:
    // 0x2fad68: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2fad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2fad6c:
    // 0x2fad6c: 0xc0bec34  jal         func_2FB0D0
label_2fad70:
    if (ctx->pc == 0x2FAD70u) {
        ctx->pc = 0x2FAD70u;
            // 0x2fad70: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x2FAD74u;
        goto label_2fad74;
    }
    ctx->pc = 0x2FAD6Cu;
    SET_GPR_U32(ctx, 31, 0x2FAD74u);
    ctx->pc = 0x2FAD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAD6Cu;
            // 0x2fad70: 0xe6340000  swc1        $f20, 0x0($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0D0u;
    if (runtime->hasFunction(0x2FB0D0u)) {
        auto targetFn = runtime->lookupFunction(0x2FB0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAD74u; }
        if (ctx->pc != 0x2FAD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParamInit__11CStarEffectFPfi_0x2fb0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAD74u; }
        if (ctx->pc != 0x2FAD74u) { return; }
    }
    ctx->pc = 0x2FAD74u;
label_2fad74:
    // 0x2fad74: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2fad74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fad78:
    // 0x2fad78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fad78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fad7c:
    // 0x2fad7c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2fad7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2fad80:
    // 0x2fad80: 0x320f809  jalr        $t9
label_2fad84:
    if (ctx->pc == 0x2FAD84u) {
        ctx->pc = 0x2FAD84u;
            // 0x2fad84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAD88u;
        goto label_2fad88;
    }
    ctx->pc = 0x2FAD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FAD88u);
        ctx->pc = 0x2FAD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAD80u;
            // 0x2fad84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FAD88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FAD88u; }
            if (ctx->pc != 0x2FAD88u) { return; }
        }
        }
    }
    ctx->pc = 0x2FAD88u;
label_2fad88:
    // 0x2fad88: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2fad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_2fad8c:
    // 0x2fad8c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2fad90:
    // 0x2fad90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fad90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fad94:
    // 0x2fad94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fad94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fad98:
    // 0x2fad98: 0x0  nop
    ctx->pc = 0x2fad98u;
    // NOP
label_2fad9c:
    // 0x2fad9c: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x2fad9cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_2fada0:
    // 0x2fada0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fada4:
    // 0x2fada4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fada4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2fada8:
    // 0x2fada8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2fada8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_2fadac:
    // 0x2fadac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fadacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fadb0:
    // 0x2fadb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2fadb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2fadb4:
    // 0x2fadb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2fadb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fadb8:
    // 0x2fadb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fadb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fadbc:
    // 0x2fadbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fadbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fadc0:
    // 0x2fadc0: 0x3e00008  jr          $ra
label_2fadc4:
    if (ctx->pc == 0x2FADC4u) {
        ctx->pc = 0x2FADC4u;
            // 0x2fadc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2FADC8u;
        goto label_fallthrough_0x2fadc0;
    }
    ctx->pc = 0x2FADC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FADC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FADC0u;
            // 0x2fadc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fadc0:
    ctx->pc = 0x2FADC8u;
}
