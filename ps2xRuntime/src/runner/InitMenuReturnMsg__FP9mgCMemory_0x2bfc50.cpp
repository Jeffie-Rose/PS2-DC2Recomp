#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitMenuReturnMsg__FP9mgCMemory
// Address: 0x2bfc50 - 0x2bfd2c
void InitMenuReturnMsg__FP9mgCMemory_0x2bfc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitMenuReturnMsg__FP9mgCMemory_0x2bfc50");
#endif

    switch (ctx->pc) {
        case 0x2bfc70u: goto label_2bfc70;
        case 0x2bfc7cu: goto label_2bfc7c;
        case 0x2bfc8cu: goto label_2bfc8c;
        case 0x2bfca8u: goto label_2bfca8;
        case 0x2bfcb0u: goto label_2bfcb0;
        case 0x2bfcc0u: goto label_2bfcc0;
        case 0x2bfcccu: goto label_2bfccc;
        case 0x2bfce4u: goto label_2bfce4;
        case 0x2bfcecu: goto label_2bfcec;
        case 0x2bfd18u: goto label_2bfd18;
        default: break;
    }

    ctx->pc = 0x2bfc50u;

    // 0x2bfc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bfc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bfc54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bfc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bfc58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bfc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bfc5c: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2bfc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2bfc60: 0x1860002d  blez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2BFC60u;
    {
        const bool branch_taken_0x2bfc60 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2BFC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC60u;
            // 0x2bfc64: 0xaf809c5c  sw          $zero, -0x63A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc60) {
            ctx->pc = 0x2BFD18u;
            goto label_2bfd18;
        }
    }
    ctx->pc = 0x2BFC68u;
    // 0x2bfc68: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BFC68u;
    SET_GPR_U32(ctx, 31, 0x2BFC70u);
    ctx->pc = 0x2BFC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC68u;
            // 0x2bfc6c: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC70u; }
        if (ctx->pc != 0x2BFC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC70u; }
        if (ctx->pc != 0x2BFC70u) { return; }
    }
    ctx->pc = 0x2BFC70u;
label_2bfc70:
    // 0x2bfc70: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x2bfc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x2bfc74: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2BFC74u;
    SET_GPR_U32(ctx, 31, 0x2BFC7Cu);
    ctx->pc = 0x2BFC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC74u;
            // 0x2bfc78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC7Cu; }
        if (ctx->pc != 0x2BFC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC7Cu; }
        if (ctx->pc != 0x2BFC7Cu) { return; }
    }
    ctx->pc = 0x2BFC7Cu;
label_2bfc7c:
    // 0x2bfc7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFC7Cu;
    {
        const bool branch_taken_0x2bfc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfc7c) {
            ctx->pc = 0x2BFC8Cu;
            goto label_2bfc8c;
        }
    }
    ctx->pc = 0x2BFC84u;
    // 0x2bfc84: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x2BFC84u;
    SET_GPR_U32(ctx, 31, 0x2BFC8Cu);
    ctx->pc = 0x2BFC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC84u;
            // 0x2bfc88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC8Cu; }
        if (ctx->pc != 0x2BFC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC8Cu; }
        if (ctx->pc != 0x2BFC8Cu) { return; }
    }
    ctx->pc = 0x2BFC8Cu;
label_2bfc8c:
    // 0x2bfc8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2bfc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2bfc90: 0xaf829c5c  sw          $v0, -0x63A4($gp)
    ctx->pc = 0x2bfc90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941788), GPR_U32(ctx, 2));
    // 0x2bfc94: 0x8c23d624  lw          $v1, -0x29DC($at)
    ctx->pc = 0x2bfc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2bfc98: 0xac431b2c  sw          $v1, 0x1B2C($v0)
    ctx->pc = 0x2bfc98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
    // 0x2bfc9c: 0x8f829c5c  lw          $v0, -0x63A4($gp)
    ctx->pc = 0x2bfc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
    // 0x2bfca0: 0xc065a18  jal         func_196860
    ctx->pc = 0x2BFCA0u;
    SET_GPR_U32(ctx, 31, 0x2BFCA8u);
    ctx->pc = 0x2BFCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFCA0u;
            // 0x2bfca4: 0xac4021d4  sw          $zero, 0x21D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCA8u; }
        if (ctx->pc != 0x2BFCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCA8u; }
        if (ctx->pc != 0x2BFCA8u) { return; }
    }
    ctx->pc = 0x2BFCA8u;
label_2bfca8:
    // 0x2bfca8: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x2BFCA8u;
    SET_GPR_U32(ctx, 31, 0x2BFCB0u);
    ctx->pc = 0x2BFCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFCA8u;
            // 0x2bfcac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCB0u; }
        if (ctx->pc != 0x2BFCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCB0u; }
        if (ctx->pc != 0x2BFCB0u) { return; }
    }
    ctx->pc = 0x2BFCB0u;
label_2bfcb0:
    // 0x2bfcb0: 0x8f849c5c  lw          $a0, -0x63A4($gp)
    ctx->pc = 0x2bfcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
    // 0x2bfcb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bfcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfcb8: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2BFCB8u;
    SET_GPR_U32(ctx, 31, 0x2BFCC0u);
    ctx->pc = 0x2BFCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFCB8u;
            // 0x2bfcbc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCC0u; }
        if (ctx->pc != 0x2BFCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCC0u; }
        if (ctx->pc != 0x2BFCC0u) { return; }
    }
    ctx->pc = 0x2BFCC0u;
label_2bfcc0:
    // 0x2bfcc0: 0x8f849c5c  lw          $a0, -0x63A4($gp)
    ctx->pc = 0x2bfcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
    // 0x2bfcc4: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2BFCC4u;
    SET_GPR_U32(ctx, 31, 0x2BFCCCu);
    ctx->pc = 0x2BFCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFCC4u;
            // 0x2bfcc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCCCu; }
        if (ctx->pc != 0x2BFCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCCCu; }
        if (ctx->pc != 0x2BFCCCu) { return; }
    }
    ctx->pc = 0x2BFCCCu;
label_2bfccc:
    // 0x2bfccc: 0x8f829c5c  lw          $v0, -0x63A4($gp)
    ctx->pc = 0x2bfcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
    // 0x2bfcd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bfcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bfcd4: 0xac4317e4  sw          $v1, 0x17E4($v0)
    ctx->pc = 0x2bfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6116), GPR_U32(ctx, 3));
    // 0x2bfcd8: 0x8f849c5c  lw          $a0, -0x63A4($gp)
    ctx->pc = 0x2bfcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
    // 0x2bfcdc: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2BFCDCu;
    SET_GPR_U32(ctx, 31, 0x2BFCE4u);
    ctx->pc = 0x2BFCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFCDCu;
            // 0x2bfce0: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCE4u; }
        if (ctx->pc != 0x2BFCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCE4u; }
        if (ctx->pc != 0x2BFCE4u) { return; }
    }
    ctx->pc = 0x2BFCE4u;
label_2bfce4:
    // 0x2bfce4: 0xc087898  jal         func_21E260
    ctx->pc = 0x2BFCE4u;
    SET_GPR_U32(ctx, 31, 0x2BFCECu);
    ctx->pc = 0x2BFCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFCE4u;
            // 0x2bfce8: 0x8f849c5c  lw          $a0, -0x63A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCECu; }
        if (ctx->pc != 0x2BFCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFCECu; }
        if (ctx->pc != 0x2BFCECu) { return; }
    }
    ctx->pc = 0x2BFCECu;
label_2bfcec:
    // 0x2bfcec: 0x8f849c5c  lw          $a0, -0x63A4($gp)
    ctx->pc = 0x2bfcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941788)));
    // 0x2bfcf0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2bfcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2bfcf4: 0x24020188  addiu       $v0, $zero, 0x188
    ctx->pc = 0x2bfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x2bfcf8: 0x8c8500d8  lw          $a1, 0xD8($a0)
    ctx->pc = 0x2bfcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2bfcfc: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x2bfcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x2bfd00: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x2bfd00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bfd04: 0x24c8001a  addiu       $t0, $a2, 0x1A
    ctx->pc = 0x2bfd04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 26));
    // 0x2bfd08: 0x72843  sra         $a1, $a3, 1
    ctx->pc = 0x2bfd08u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
    // 0x2bfd0c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x2bfd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bfd10: 0xc0876a0  jal         func_21DA80
    ctx->pc = 0x2BFD10u;
    SET_GPR_U32(ctx, 31, 0x2BFD18u);
    ctx->pc = 0x2BFD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD10u;
            // 0x2bfd14: 0x483023  subu        $a2, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA80u;
    if (runtime->hasFunction(0x21DA80u)) {
        auto targetFn = runtime->lookupFunction(0x21DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD18u; }
        if (ctx->pc != 0x2BFD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFiiii_0x21da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFD18u; }
        if (ctx->pc != 0x2BFD18u) { return; }
    }
    ctx->pc = 0x2BFD18u;
label_2bfd18:
    // 0x2bfd18: 0xa3809c60  sb          $zero, -0x63A0($gp)
    ctx->pc = 0x2bfd18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941792), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfd1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bfd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfd20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfd24: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFD24u;
            // 0x2bfd28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFD2Cu;
}
