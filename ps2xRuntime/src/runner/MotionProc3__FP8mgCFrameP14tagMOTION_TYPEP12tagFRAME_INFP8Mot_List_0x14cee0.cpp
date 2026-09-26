#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MotionProc3__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFP8Mot_List
// Address: 0x14cee0 - 0x14d2a4
void MotionProc3__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFP8Mot_List_0x14cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionProc3__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFP8Mot_List_0x14cee0");
#endif

    switch (ctx->pc) {
        case 0x14cf2cu: goto label_14cf2c;
        case 0x14cf3cu: goto label_14cf3c;
        case 0x14cf58u: goto label_14cf58;
        case 0x14cf98u: goto label_14cf98;
        case 0x14cfc4u: goto label_14cfc4;
        case 0x14cfdcu: goto label_14cfdc;
        case 0x14d02cu: goto label_14d02c;
        case 0x14d080u: goto label_14d080;
        case 0x14d090u: goto label_14d090;
        case 0x14d0a4u: goto label_14d0a4;
        case 0x14d0c8u: goto label_14d0c8;
        case 0x14d0dcu: goto label_14d0dc;
        case 0x14d0e8u: goto label_14d0e8;
        case 0x14d0f4u: goto label_14d0f4;
        case 0x14d100u: goto label_14d100;
        case 0x14d120u: goto label_14d120;
        case 0x14d134u: goto label_14d134;
        case 0x14d140u: goto label_14d140;
        case 0x14d154u: goto label_14d154;
        case 0x14d164u: goto label_14d164;
        case 0x14d170u: goto label_14d170;
        case 0x14d18cu: goto label_14d18c;
        case 0x14d20cu: goto label_14d20c;
        case 0x14d22cu: goto label_14d22c;
        case 0x14d254u: goto label_14d254;
        default: break;
    }

    ctx->pc = 0x14cee0u;

    // 0x14cee0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x14cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x14cee4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x14cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14cee8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14ceec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14cef0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14cef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14cef4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14cef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14cef8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14cef8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cefc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14cefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14cf00: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x14cf00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14cf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14cf08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14cf08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14cf10: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x14cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x14cf14: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CF14u;
    {
        const bool branch_taken_0x14cf14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14CF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF14u;
            // 0x14cf18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf14) {
            ctx->pc = 0x14CF24u;
            goto label_14cf24;
        }
    }
    ctx->pc = 0x14CF1Cu;
    // 0x14cf1c: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x14CF1Cu;
    {
        const bool branch_taken_0x14cf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF1Cu;
            // 0x14cf20: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf1c) {
            ctx->pc = 0x14D280u;
            goto label_14d280;
        }
    }
    ctx->pc = 0x14CF24u;
label_14cf24:
    // 0x14cf24: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x14CF24u;
    SET_GPR_U32(ctx, 31, 0x14CF2Cu);
    ctx->pc = 0x14CF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF24u;
            // 0x14cf28: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF2Cu; }
        if (ctx->pc != 0x14CF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF2Cu; }
        if (ctx->pc != 0x14CF2Cu) { return; }
    }
    ctx->pc = 0x14CF2Cu;
label_14cf2c:
    // 0x14cf2c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14cf30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14cf30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf34: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x14CF34u;
    SET_GPR_U32(ctx, 31, 0x14CF3Cu);
    ctx->pc = 0x14CF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF34u;
            // 0x14cf38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF3Cu; }
        if (ctx->pc != 0x14CF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF3Cu; }
        if (ctx->pc != 0x14CF3Cu) { return; }
    }
    ctx->pc = 0x14CF3Cu;
label_14cf3c:
    // 0x14cf3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14cf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf40: 0x8f8288dc  lw          $v0, -0x7724($gp)
    ctx->pc = 0x14cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936796)));
    // 0x14cf44: 0x10500066  beq         $v0, $s0, . + 4 + (0x66 << 2)
    ctx->pc = 0x14CF44u;
    {
        const bool branch_taken_0x14cf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x14CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF44u;
            // 0x14cf48: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf44) {
            ctx->pc = 0x14D0E0u;
            goto label_14d0e0;
        }
    }
    ctx->pc = 0x14CF4Cu;
    // 0x14cf4c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14cf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14cf50: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x14CF50u;
    SET_GPR_U32(ctx, 31, 0x14CF58u);
    ctx->pc = 0x14CF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF50u;
            // 0x14cf54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF58u; }
        if (ctx->pc != 0x14CF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF58u; }
        if (ctx->pc != 0x14CF58u) { return; }
    }
    ctx->pc = 0x14CF58u;
label_14cf58:
    // 0x14cf58: 0xaf8288dc  sw          $v0, -0x7724($gp)
    ctx->pc = 0x14cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936796), GPR_U32(ctx, 2));
    // 0x14cf5c: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x14cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x14cf60: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x14cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x14cf64: 0xaf8288f0  sw          $v0, -0x7710($gp)
    ctx->pc = 0x14cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 2));
    // 0x14cf68: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x14cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x14cf6c: 0xaf828900  sw          $v0, -0x7700($gp)
    ctx->pc = 0x14cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936832), GPR_U32(ctx, 2));
    // 0x14cf70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14cf74: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14cf78: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x14cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x14cf7c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x14cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14cf80: 0x2ca10191  sltiu       $at, $a1, 0x191
    ctx->pc = 0x14cf80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)401) ? 1 : 0);
    // 0x14cf84: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CF84u;
    {
        const bool branch_taken_0x14cf84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF84u;
            // 0x14cf88: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cf84) {
            ctx->pc = 0x14CF98u;
            goto label_14cf98;
        }
    }
    ctx->pc = 0x14CF8Cu;
    // 0x14cf8c: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x14cf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x14cf90: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x14CF90u;
    SET_GPR_U32(ctx, 31, 0x14CF98u);
    ctx->pc = 0x14CF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF90u;
            // 0x14cf94: 0x248428a0  addiu       $a0, $a0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF98u; }
        if (ctx->pc != 0x14CF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF98u; }
        if (ctx->pc != 0x14CF98u) { return; }
    }
    ctx->pc = 0x14CF98u;
label_14cf98:
    // 0x14cf98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14cf9c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14cfa0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x14cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x14cfa4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14cfa8: 0x2ca10321  sltiu       $at, $a1, 0x321
    ctx->pc = 0x14cfa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)801) ? 1 : 0);
    // 0x14cfac: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CFACu;
    {
        const bool branch_taken_0x14cfac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cfac) {
            ctx->pc = 0x14CFC4u;
            goto label_14cfc4;
        }
    }
    ctx->pc = 0x14CFB4u;
    // 0x14cfb4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x14cfb8: 0x24060320  addiu       $a2, $zero, 0x320
    ctx->pc = 0x14cfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x14cfbc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x14CFBCu;
    SET_GPR_U32(ctx, 31, 0x14CFC4u);
    ctx->pc = 0x14CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFBCu;
            // 0x14cfc0: 0x248428d0  addiu       $a0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CFC4u; }
        if (ctx->pc != 0x14CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CFC4u; }
        if (ctx->pc != 0x14CFC4u) { return; }
    }
    ctx->pc = 0x14CFC4u;
label_14cfc4:
    // 0x14cfc4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x14cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x14cfc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14cfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cfcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14cfccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cfd0: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x14cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    // 0x14cfd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14CFD4u;
    {
        const bool branch_taken_0x14cfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFD4u;
            // 0x14cfd8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cfd4) {
            ctx->pc = 0x14CFF4u;
            goto label_14cff4;
        }
    }
    ctx->pc = 0x14CFDCu;
label_14cfdc:
    // 0x14cfdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14cfe0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14cfe4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x14cfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x14cfe8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14cfec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x14cff0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x14cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_14cff4:
    // 0x14cff4: 0x0  nop
    ctx->pc = 0x14cff4u;
    // NOP
    // 0x14cff8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14cffc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14d000: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x14d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x14d004: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d008: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x14d008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14d00c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x14D00Cu;
    {
        const bool branch_taken_0x14d00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D00Cu;
            // 0x14d010: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d00c) {
            ctx->pc = 0x14CFDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14cfdc;
        }
    }
    ctx->pc = 0x14D014u;
    // 0x14d014: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x14d014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x14d018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14d01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d020: 0x2484efc0  addiu       $a0, $a0, -0x1040
    ctx->pc = 0x14d020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
    // 0x14d024: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14D024u;
    {
        const bool branch_taken_0x14d024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D024u;
            // 0x14d028: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d024) {
            ctx->pc = 0x14D044u;
            goto label_14d044;
        }
    }
    ctx->pc = 0x14D02Cu;
label_14d02c:
    // 0x14d02c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d030: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14d030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14d034: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x14d034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x14d038: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14d038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14d03c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x14d040: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x14d040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_14d044:
    // 0x14d044: 0x0  nop
    ctx->pc = 0x14d044u;
    // NOP
    // 0x14d048: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14d048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14d04c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14d050: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x14d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x14d054: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14d058: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x14d058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14d05c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x14D05Cu;
    {
        const bool branch_taken_0x14d05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D05Cu;
            // 0x14d060: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d05c) {
            ctx->pc = 0x14D02Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d02c;
        }
    }
    ctx->pc = 0x14D064u;
    // 0x14d064: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x14d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x14d068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d06c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14d06cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14d070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d074: 0x24a5f110  addiu       $a1, $a1, -0xEF0
    ctx->pc = 0x14d074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963472));
    // 0x14d078: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x14D078u;
    SET_GPR_U32(ctx, 31, 0x14D080u);
    ctx->pc = 0x14D07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D078u;
            // 0x14d07c: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D080u; }
        if (ctx->pc != 0x14D080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D080u; }
        if (ctx->pc != 0x14D080u) { return; }
    }
    ctx->pc = 0x14D080u;
label_14d080:
    // 0x14d080: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14d080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14d084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d088: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x14D088u;
    SET_GPR_U32(ctx, 31, 0x14D090u);
    ctx->pc = 0x14D08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D088u;
            // 0x14d08c: 0x24a5f190  addiu       $a1, $a1, -0xE70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D090u; }
        if (ctx->pc != 0x14D090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D090u; }
        if (ctx->pc != 0x14D090u) { return; }
    }
    ctx->pc = 0x14D090u;
label_14d090:
    // 0x14d090: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x14d090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x14d094: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14d094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14d098: 0x2484f150  addiu       $a0, $a0, -0xEB0
    ctx->pc = 0x14d098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963536));
    // 0x14d09c: 0xc041c02  jal         func_107008
    ctx->pc = 0x14D09Cu;
    SET_GPR_U32(ctx, 31, 0x14D0A4u);
    ctx->pc = 0x14D0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D09Cu;
            // 0x14d0a0: 0x24a5f110  addiu       $a1, $a1, -0xEF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107008u;
    if (runtime->hasFunction(0x107008u)) {
        auto targetFn = runtime->lookupFunction(0x107008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0A4u; }
        if (ctx->pc != 0x14D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InversMatrix_0x107008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0A4u; }
        if (ctx->pc != 0x14D0A4u) { return; }
    }
    ctx->pc = 0x14D0A4u;
label_14d0a4:
    // 0x14d0a4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14d0a8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x14d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x14d0ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14d0b0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14d0b4: 0x2484f1d0  addiu       $a0, $a0, -0xE30
    ctx->pc = 0x14d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963664));
    // 0x14d0b8: 0x24a5f190  addiu       $a1, $a1, -0xE70
    ctx->pc = 0x14d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
    // 0x14d0bc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x14d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x14d0c0: 0xc04c094  jal         func_130250
    ctx->pc = 0x14D0C0u;
    SET_GPR_U32(ctx, 31, 0x14D0C8u);
    ctx->pc = 0x14D0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0C0u;
            // 0x14d0c4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0C8u; }
        if (ctx->pc != 0x14D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0C8u; }
        if (ctx->pc != 0x14D0C8u) { return; }
    }
    ctx->pc = 0x14D0C8u;
label_14d0c8:
    // 0x14d0c8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x14d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x14d0cc: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14d0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14d0d0: 0x2484f210  addiu       $a0, $a0, -0xDF0
    ctx->pc = 0x14d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963728));
    // 0x14d0d4: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x14D0D4u;
    SET_GPR_U32(ctx, 31, 0x14D0DCu);
    ctx->pc = 0x14D0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0D4u;
            // 0x14d0d8: 0x24a5f1d0  addiu       $a1, $a1, -0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0DCu; }
        if (ctx->pc != 0x14D0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0DCu; }
        if (ctx->pc != 0x14D0DCu) { return; }
    }
    ctx->pc = 0x14D0DCu;
label_14d0dc:
    // 0x14d0dc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14d0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_14d0e0:
    // 0x14d0e0: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x14D0E0u;
    SET_GPR_U32(ctx, 31, 0x14D0E8u);
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0E8u; }
        if (ctx->pc != 0x14D0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0E8u; }
        if (ctx->pc != 0x14D0E8u) { return; }
    }
    ctx->pc = 0x14D0E8u;
label_14d0e8:
    // 0x14d0e8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x14d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x14d0ec: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x14D0ECu;
    SET_GPR_U32(ctx, 31, 0x14D0F4u);
    ctx->pc = 0x14D0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0ECu;
            // 0x14d0f0: 0x2484f110  addiu       $a0, $a0, -0xEF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0F4u; }
        if (ctx->pc != 0x14D0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0F4u; }
        if (ctx->pc != 0x14D0F4u) { return; }
    }
    ctx->pc = 0x14D0F4u;
label_14d0f4:
    // 0x14d0f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14d0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0f8: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x14D0F8u;
    SET_GPR_U32(ctx, 31, 0x14D100u);
    ctx->pc = 0x14D0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0F8u;
            // 0x14d0fc: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D100u; }
        if (ctx->pc != 0x14D100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D100u; }
        if (ctx->pc != 0x14D100u) { return; }
    }
    ctx->pc = 0x14D100u;
label_14d100:
    // 0x14d100: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14d100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14d104: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14d104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14d108: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14d108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14d10c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x14d10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x14d110: 0x24a5f190  addiu       $a1, $a1, -0xE70
    ctx->pc = 0x14d110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
    // 0x14d114: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x14d114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x14d118: 0xc04c094  jal         func_130250
    ctx->pc = 0x14D118u;
    SET_GPR_U32(ctx, 31, 0x14D120u);
    ctx->pc = 0x14D11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D118u;
            // 0x14d11c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D120u; }
        if (ctx->pc != 0x14D120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D120u; }
        if (ctx->pc != 0x14D120u) { return; }
    }
    ctx->pc = 0x14D120u;
label_14d120:
    // 0x14d120: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14d120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14d124: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14d128: 0x24a5f210  addiu       $a1, $a1, -0xDF0
    ctx->pc = 0x14d128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
    // 0x14d12c: 0xc04c094  jal         func_130250
    ctx->pc = 0x14D12Cu;
    SET_GPR_U32(ctx, 31, 0x14D134u);
    ctx->pc = 0x14D130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D12Cu;
            // 0x14d130: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D134u; }
        if (ctx->pc != 0x14D134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D134u; }
        if (ctx->pc != 0x14D134u) { return; }
    }
    ctx->pc = 0x14D134u;
label_14d134:
    // 0x14d134: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x14d134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x14d138: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x14D138u;
    SET_GPR_U32(ctx, 31, 0x14D140u);
    ctx->pc = 0x14D13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D138u;
            // 0x14d13c: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D140u; }
        if (ctx->pc != 0x14D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D140u; }
        if (ctx->pc != 0x14D140u) { return; }
    }
    ctx->pc = 0x14D140u;
label_14d140:
    // 0x14d140: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14d140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14d144: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x14d144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14d148: 0x24a5f150  addiu       $a1, $a1, -0xEB0
    ctx->pc = 0x14d148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    // 0x14d14c: 0xc04c094  jal         func_130250
    ctx->pc = 0x14D14Cu;
    SET_GPR_U32(ctx, 31, 0x14D154u);
    ctx->pc = 0x14D150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D14Cu;
            // 0x14d150: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D154u; }
        if (ctx->pc != 0x14D154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D154u; }
        if (ctx->pc != 0x14D154u) { return; }
    }
    ctx->pc = 0x14D154u;
label_14d154:
    // 0x14d154: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14d154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14d158: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x14d158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14d15c: 0xc04c094  jal         func_130250
    ctx->pc = 0x14D15Cu;
    SET_GPR_U32(ctx, 31, 0x14D164u);
    ctx->pc = 0x14D160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D15Cu;
            // 0x14d160: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D164u; }
        if (ctx->pc != 0x14D164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D164u; }
        if (ctx->pc != 0x14D164u) { return; }
    }
    ctx->pc = 0x14D164u;
label_14d164:
    // 0x14d164: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14d164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14d168: 0xc041c60  jal         func_107180
    ctx->pc = 0x14D168u;
    SET_GPR_U32(ctx, 31, 0x14D170u);
    ctx->pc = 0x14D16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D168u;
            // 0x14d16c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D170u; }
        if (ctx->pc != 0x14D170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D170u; }
        if (ctx->pc != 0x14D170u) { return; }
    }
    ctx->pc = 0x14D170u;
label_14d170:
    // 0x14d170: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x14d170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x14d174: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14d174u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d178: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x14d178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x14d17c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14d17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d180: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x14d180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x14d184: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x14D184u;
    {
        const bool branch_taken_0x14d184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D184u;
            // 0x14d188: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d184) {
            ctx->pc = 0x14D264u;
            goto label_14d264;
        }
    }
    ctx->pc = 0x14D18Cu;
label_14d18c:
    // 0x14d18c: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x14d18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x14d190: 0x2442f250  addiu       $v0, $v0, -0xDB0
    ctx->pc = 0x14d190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x14d194: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14d194u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d19c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x14d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x14d1a0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x14d1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x14d1a4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14d1a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14d1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14d1ac: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x14d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x14d1b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14d1b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d1b8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x14d1b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14d1bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d1bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d1c0: 0x0  nop
    ctx->pc = 0x14d1c0u;
    // NOP
    // 0x14d1c4: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x14D1C4u;
    {
        const bool branch_taken_0x14d1c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D1C4u;
            // 0x14d1c8: 0xe7a10240  swc1        $f1, 0x240($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1c4) {
            ctx->pc = 0x14D254u;
            goto label_14d254;
        }
    }
    ctx->pc = 0x14D1CCu;
    // 0x14d1cc: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x14d1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x14d1d0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x14d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x14d1d4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14d1d8: 0x2463bdc0  addiu       $v1, $v1, -0x4240
    ctx->pc = 0x14d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
    // 0x14d1dc: 0x8f8288f0  lw          $v0, -0x7710($gp)
    ctx->pc = 0x14d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936816)));
    // 0x14d1e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14d1e4: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x14d1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x14d1e8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x14d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x14d1ec: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x14d1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14d1f0: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x14d1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x14d1f4: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x14d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d1f8: 0x79100  sll         $s2, $a3, 4
    ctx->pc = 0x14d1f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x14d1fc: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x14d1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14d200: 0x524021  addu        $t0, $v0, $s2
    ctx->pc = 0x14d200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x14d204: 0xc0532c8  jal         func_14CB20
    ctx->pc = 0x14D204u;
    SET_GPR_U32(ctx, 31, 0x14D20Cu);
    ctx->pc = 0x14D208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D204u;
            // 0x14d208: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CB20u;
    if (runtime->hasFunction(0x14CB20u)) {
        auto targetFn = runtime->lookupFunction(0x14CB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D20Cu; }
        if (ctx->pc != 0x14D20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        testVUnew__FPA4_fPfPfPfPf_0x14cb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D20Cu; }
        if (ctx->pc != 0x14D20Cu) { return; }
    }
    ctx->pc = 0x14D20Cu;
label_14d20c:
    // 0x14d20c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14d210: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x14d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x14d214: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x14d214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14d218: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14d218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14d21c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x14d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x14d220: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x14d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14d224: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x14D224u;
    SET_GPR_U32(ctx, 31, 0x14D22Cu);
    ctx->pc = 0x14D228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D224u;
            // 0x14d228: 0x523021  addu        $a2, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D22Cu; }
        if (ctx->pc != 0x14D22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D22Cu; }
        if (ctx->pc != 0x14D22Cu) { return; }
    }
    ctx->pc = 0x14D22Cu;
label_14d22c:
    // 0x14d22c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14d230: 0xc7ac0240  lwc1        $f12, 0x240($sp)
    ctx->pc = 0x14d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14d234: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x14d234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
    // 0x14d238: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x14d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x14d23c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14d240: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x14d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x14d244: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x14d244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14d248: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x14d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14d24c: 0xc041e8a  jal         func_107A28
    ctx->pc = 0x14D24Cu;
    SET_GPR_U32(ctx, 31, 0x14D254u);
    ctx->pc = 0x14D250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D24Cu;
            // 0x14d250: 0x523021  addu        $a2, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D254u; }
        if (ctx->pc != 0x14D254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D254u; }
        if (ctx->pc != 0x14D254u) { return; }
    }
    ctx->pc = 0x14D254u;
label_14d254:
    // 0x14d254: 0x0  nop
    ctx->pc = 0x14d254u;
    // NOP
    // 0x14d258: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x14d258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14d25c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14d25cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x14d260: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14d260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_14d264:
    // 0x14d264: 0x0  nop
    ctx->pc = 0x14d264u;
    // NOP
    // 0x14d268: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x14d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14d26c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x14d26cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14d270: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x14D270u;
    {
        const bool branch_taken_0x14d270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D270u;
            // 0x14d274: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d270) {
            ctx->pc = 0x14D18Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d18c;
        }
    }
    ctx->pc = 0x14D278u;
    // 0x14d278: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x14d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x14d27c: 0x0  nop
    ctx->pc = 0x14d27cu;
    // NOP
label_14d280:
    // 0x14d280: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14d280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14d284: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14d284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d288: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14d288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d28c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14d28cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d29c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D29Cu;
            // 0x14d2a0: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D2A4u;
}
