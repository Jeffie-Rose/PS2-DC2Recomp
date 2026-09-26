#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MotionProc2__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFP8Mot_List
// Address: 0x14cb60 - 0x14ced4
void MotionProc2__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFP8Mot_List_0x14cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionProc2__FP8mgCFrameP14tagMOTION_TYPEP12tagFRAME_INFP8Mot_List_0x14cb60");
#endif

    switch (ctx->pc) {
        case 0x14cba8u: goto label_14cba8;
        case 0x14cbb8u: goto label_14cbb8;
        case 0x14cbd4u: goto label_14cbd4;
        case 0x14cc00u: goto label_14cc00;
        case 0x14cc30u: goto label_14cc30;
        case 0x14cc40u: goto label_14cc40;
        case 0x14cc54u: goto label_14cc54;
        case 0x14cc78u: goto label_14cc78;
        case 0x14cc8cu: goto label_14cc8c;
        case 0x14cc98u: goto label_14cc98;
        case 0x14cca4u: goto label_14cca4;
        case 0x14ccb0u: goto label_14ccb0;
        case 0x14ccd0u: goto label_14ccd0;
        case 0x14cce4u: goto label_14cce4;
        case 0x14ccf0u: goto label_14ccf0;
        case 0x14cd04u: goto label_14cd04;
        case 0x14cd14u: goto label_14cd14;
        case 0x14cd1cu: goto label_14cd1c;
        case 0x14cd94u: goto label_14cd94;
        case 0x14cdc4u: goto label_14cdc4;
        case 0x14ce68u: goto label_14ce68;
        default: break;
    }

    ctx->pc = 0x14cb60u;

    // 0x14cb60: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x14cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x14cb64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14cb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14cb68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14cb6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14cb70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14cb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14cb74: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14cb74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14cb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14cb7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14cb7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14cb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14cb84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14cb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14cb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14cb8c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x14cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x14cb90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB90u;
    {
        const bool branch_taken_0x14cb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB90u;
            // 0x14cb94: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb90) {
            ctx->pc = 0x14CBA0u;
            goto label_14cba0;
        }
    }
    ctx->pc = 0x14CB98u;
    // 0x14cb98: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x14CB98u;
    {
        const bool branch_taken_0x14cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB98u;
            // 0x14cb9c: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb98) {
            ctx->pc = 0x14CEB0u;
            goto label_14ceb0;
        }
    }
    ctx->pc = 0x14CBA0u;
label_14cba0:
    // 0x14cba0: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x14CBA0u;
    SET_GPR_U32(ctx, 31, 0x14CBA8u);
    ctx->pc = 0x14CBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBA0u;
            // 0x14cba4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBA8u; }
        if (ctx->pc != 0x14CBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBA8u; }
        if (ctx->pc != 0x14CBA8u) { return; }
    }
    ctx->pc = 0x14CBA8u;
label_14cba8:
    // 0x14cba8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x14cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14cbac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14cbacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbb0: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x14CBB0u;
    SET_GPR_U32(ctx, 31, 0x14CBB8u);
    ctx->pc = 0x14CBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBB0u;
            // 0x14cbb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBB8u; }
        if (ctx->pc != 0x14CBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBB8u; }
        if (ctx->pc != 0x14CBB8u) { return; }
    }
    ctx->pc = 0x14CBB8u;
label_14cbb8:
    // 0x14cbb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14cbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbbc: 0x8f8288dc  lw          $v0, -0x7724($gp)
    ctx->pc = 0x14cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936796)));
    // 0x14cbc0: 0x10500033  beq         $v0, $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x14CBC0u;
    {
        const bool branch_taken_0x14cbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x14CBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBC0u;
            // 0x14cbc4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cbc0) {
            ctx->pc = 0x14CC90u;
            goto label_14cc90;
        }
    }
    ctx->pc = 0x14CBC8u;
    // 0x14cbc8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x14cbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14cbcc: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x14CBCCu;
    SET_GPR_U32(ctx, 31, 0x14CBD4u);
    ctx->pc = 0x14CBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBCCu;
            // 0x14cbd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBD4u; }
        if (ctx->pc != 0x14CBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBD4u; }
        if (ctx->pc != 0x14CBD4u) { return; }
    }
    ctx->pc = 0x14CBD4u;
label_14cbd4:
    // 0x14cbd4: 0xaf8288dc  sw          $v0, -0x7724($gp)
    ctx->pc = 0x14cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936796), GPR_U32(ctx, 2));
    // 0x14cbd8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x14cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x14cbdc: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x14cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x14cbe0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x14cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x14cbe4: 0xaf8288e0  sw          $v0, -0x7720($gp)
    ctx->pc = 0x14cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936800), GPR_U32(ctx, 2));
    // 0x14cbe8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14cbec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14cbf0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x14cbf4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14cbf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14CBF8u;
    {
        const bool branch_taken_0x14cbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBF8u;
            // 0x14cbfc: 0x2463bdc0  addiu       $v1, $v1, -0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cbf8) {
            ctx->pc = 0x14CC0Cu;
            goto label_14cc0c;
        }
    }
    ctx->pc = 0x14CC00u;
label_14cc00:
    // 0x14cc00: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x14cc00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14cc04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14cc08: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x14cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_14cc0c:
    // 0x14cc0c: 0x0  nop
    ctx->pc = 0x14cc0cu;
    // NOP
    // 0x14cc10: 0x0  nop
    ctx->pc = 0x14cc10u;
    // NOP
    // 0x14cc14: 0x0  nop
    ctx->pc = 0x14cc14u;
    // NOP
    // 0x14cc18: 0x1c40fff9  bgtz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14CC18u;
    {
        const bool branch_taken_0x14cc18 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x14cc18) {
            ctx->pc = 0x14CC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14cc00;
        }
    }
    ctx->pc = 0x14CC20u;
    // 0x14cc20: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14cc20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14cc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc28: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x14CC28u;
    SET_GPR_U32(ctx, 31, 0x14CC30u);
    ctx->pc = 0x14CC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC28u;
            // 0x14cc2c: 0x24a5efd0  addiu       $a1, $a1, -0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC30u; }
        if (ctx->pc != 0x14CC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC30u; }
        if (ctx->pc != 0x14CC30u) { return; }
    }
    ctx->pc = 0x14CC30u;
label_14cc30:
    // 0x14cc30: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14cc30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14cc34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14cc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc38: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x14CC38u;
    SET_GPR_U32(ctx, 31, 0x14CC40u);
    ctx->pc = 0x14CC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC38u;
            // 0x14cc3c: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC40u; }
        if (ctx->pc != 0x14CC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC40u; }
        if (ctx->pc != 0x14CC40u) { return; }
    }
    ctx->pc = 0x14CC40u;
label_14cc40:
    // 0x14cc40: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x14cc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x14cc44: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14cc44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14cc48: 0x2484f010  addiu       $a0, $a0, -0xFF0
    ctx->pc = 0x14cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963216));
    // 0x14cc4c: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x14CC4Cu;
    SET_GPR_U32(ctx, 31, 0x14CC54u);
    ctx->pc = 0x14CC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC4Cu;
            // 0x14cc50: 0x24a5efd0  addiu       $a1, $a1, -0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC54u; }
        if (ctx->pc != 0x14CC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC54u; }
        if (ctx->pc != 0x14CC54u) { return; }
    }
    ctx->pc = 0x14CC54u;
label_14cc54:
    // 0x14cc54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14cc58: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x14cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x14cc5c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14cc60: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14cc60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14cc64: 0x2484f090  addiu       $a0, $a0, -0xF70
    ctx->pc = 0x14cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963344));
    // 0x14cc68: 0x24a5f050  addiu       $a1, $a1, -0xFB0
    ctx->pc = 0x14cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    // 0x14cc6c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x14cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x14cc70: 0xc04c094  jal         func_130250
    ctx->pc = 0x14CC70u;
    SET_GPR_U32(ctx, 31, 0x14CC78u);
    ctx->pc = 0x14CC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC70u;
            // 0x14cc74: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC78u; }
        if (ctx->pc != 0x14CC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC78u; }
        if (ctx->pc != 0x14CC78u) { return; }
    }
    ctx->pc = 0x14CC78u;
label_14cc78:
    // 0x14cc78: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x14cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x14cc7c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14cc80: 0x2484f0d0  addiu       $a0, $a0, -0xF30
    ctx->pc = 0x14cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963408));
    // 0x14cc84: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x14CC84u;
    SET_GPR_U32(ctx, 31, 0x14CC8Cu);
    ctx->pc = 0x14CC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC84u;
            // 0x14cc88: 0x24a5f090  addiu       $a1, $a1, -0xF70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC8Cu; }
        if (ctx->pc != 0x14CC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC8Cu; }
        if (ctx->pc != 0x14CC8Cu) { return; }
    }
    ctx->pc = 0x14CC8Cu;
label_14cc8c:
    // 0x14cc8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_14cc90:
    // 0x14cc90: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x14CC90u;
    SET_GPR_U32(ctx, 31, 0x14CC98u);
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC98u; }
        if (ctx->pc != 0x14CC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC98u; }
        if (ctx->pc != 0x14CC98u) { return; }
    }
    ctx->pc = 0x14CC98u;
label_14cc98:
    // 0x14cc98: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x14cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x14cc9c: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x14CC9Cu;
    SET_GPR_U32(ctx, 31, 0x14CCA4u);
    ctx->pc = 0x14CCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC9Cu;
            // 0x14cca0: 0x2484efd0  addiu       $a0, $a0, -0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCA4u; }
        if (ctx->pc != 0x14CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCA4u; }
        if (ctx->pc != 0x14CCA4u) { return; }
    }
    ctx->pc = 0x14CCA4u;
label_14cca4:
    // 0x14cca4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14cca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cca8: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x14CCA8u;
    SET_GPR_U32(ctx, 31, 0x14CCB0u);
    ctx->pc = 0x14CCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCA8u;
            // 0x14ccac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCB0u; }
        if (ctx->pc != 0x14CCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCB0u; }
        if (ctx->pc != 0x14CCB0u) { return; }
    }
    ctx->pc = 0x14CCB0u;
label_14ccb0:
    // 0x14ccb0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14ccb4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14ccb8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ccbc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x14ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x14ccc0: 0x24a5f050  addiu       $a1, $a1, -0xFB0
    ctx->pc = 0x14ccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    // 0x14ccc4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x14ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x14ccc8: 0xc04c094  jal         func_130250
    ctx->pc = 0x14CCC8u;
    SET_GPR_U32(ctx, 31, 0x14CCD0u);
    ctx->pc = 0x14CCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCC8u;
            // 0x14cccc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCD0u; }
        if (ctx->pc != 0x14CCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCD0u; }
        if (ctx->pc != 0x14CCD0u) { return; }
    }
    ctx->pc = 0x14CCD0u;
label_14ccd0:
    // 0x14ccd0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14ccd4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14ccd8: 0x24a5f0d0  addiu       $a1, $a1, -0xF30
    ctx->pc = 0x14ccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963408));
    // 0x14ccdc: 0xc04c094  jal         func_130250
    ctx->pc = 0x14CCDCu;
    SET_GPR_U32(ctx, 31, 0x14CCE4u);
    ctx->pc = 0x14CCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCDCu;
            // 0x14cce0: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCE4u; }
        if (ctx->pc != 0x14CCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCE4u; }
        if (ctx->pc != 0x14CCE4u) { return; }
    }
    ctx->pc = 0x14CCE4u;
label_14cce4:
    // 0x14cce4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x14cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14cce8: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x14CCE8u;
    SET_GPR_U32(ctx, 31, 0x14CCF0u);
    ctx->pc = 0x14CCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCE8u;
            // 0x14ccec: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCF0u; }
        if (ctx->pc != 0x14CCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCF0u; }
        if (ctx->pc != 0x14CCF0u) { return; }
    }
    ctx->pc = 0x14CCF0u;
label_14ccf0:
    // 0x14ccf0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x14ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x14ccf4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14ccf8: 0x24a5f010  addiu       $a1, $a1, -0xFF0
    ctx->pc = 0x14ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963216));
    // 0x14ccfc: 0xc04c094  jal         func_130250
    ctx->pc = 0x14CCFCu;
    SET_GPR_U32(ctx, 31, 0x14CD04u);
    ctx->pc = 0x14CD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCFCu;
            // 0x14cd00: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD04u; }
        if (ctx->pc != 0x14CD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD04u; }
        if (ctx->pc != 0x14CD04u) { return; }
    }
    ctx->pc = 0x14CD04u;
label_14cd04:
    // 0x14cd04: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14cd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14cd08: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x14cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14cd0c: 0xc04c094  jal         func_130250
    ctx->pc = 0x14CD0Cu;
    SET_GPR_U32(ctx, 31, 0x14CD14u);
    ctx->pc = 0x14CD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD0Cu;
            // 0x14cd10: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD14u; }
        if (ctx->pc != 0x14CD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD14u; }
        if (ctx->pc != 0x14CD14u) { return; }
    }
    ctx->pc = 0x14CD14u;
label_14cd14:
    // 0x14cd14: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x14CD14u;
    {
        const bool branch_taken_0x14cd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD14u;
            // 0x14cd18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd14) {
            ctx->pc = 0x14CE94u;
            goto label_14ce94;
        }
    }
    ctx->pc = 0x14CD1Cu;
label_14cd1c:
    // 0x14cd1c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x14cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14cd20: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x14cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x14cd24: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x14cd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14cd28: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x14cd28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14cd2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14cd2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14cd30: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x14cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14cd34: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x14cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14cd38: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x14cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14cd3c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14cd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cd40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14cd40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14cd44: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x14cd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x14cd48: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x14cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14cd4c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14cd50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14cd54: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14CD54u;
    {
        const bool branch_taken_0x14cd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14CD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD54u;
            // 0x14cd58: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd54) {
            ctx->pc = 0x14CD9Cu;
            goto label_14cd9c;
        }
    }
    ctx->pc = 0x14CD5Cu;
    // 0x14cd5c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x14cd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14cd60: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x14cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x14cd64: 0x8f8288e0  lw          $v0, -0x7720($gp)
    ctx->pc = 0x14cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
    // 0x14cd68: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x14cd68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x14cd6c: 0x2463bdc0  addiu       $v1, $v1, -0x4240
    ctx->pc = 0x14cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950336));
    // 0x14cd70: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x14cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14cd74: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x14cd74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14cd78: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x14cd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14cd7c: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x14cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x14cd80: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x14cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14cd84: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x14cd84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14cd88: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x14cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14cd8c: 0xc0532c8  jal         func_14CB20
    ctx->pc = 0x14CD8Cu;
    SET_GPR_U32(ctx, 31, 0x14CD94u);
    ctx->pc = 0x14CD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD8Cu;
            // 0x14cd90: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CB20u;
    if (runtime->hasFunction(0x14CB20u)) {
        auto targetFn = runtime->lookupFunction(0x14CB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD94u; }
        if (ctx->pc != 0x14CD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        testVUnew__FPA4_fPfPfPfPf_0x14cb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD94u; }
        if (ctx->pc != 0x14CD94u) { return; }
    }
    ctx->pc = 0x14CD94u;
label_14cd94:
    // 0x14cd94: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14CD94u;
    {
        const bool branch_taken_0x14cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd94) {
            ctx->pc = 0x14CE90u;
            goto label_14ce90;
        }
    }
    ctx->pc = 0x14CD9Cu;
label_14cd9c:
    // 0x14cd9c: 0x0  nop
    ctx->pc = 0x14cd9cu;
    // NOP
    // 0x14cda0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14cda4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x14cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x14cda8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x14cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x14cdac: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x14cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14cdb0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x14cdb4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x14cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x14cdb8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14cdbc: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x14CDBCu;
    SET_GPR_U32(ctx, 31, 0x14CDC4u);
    ctx->pc = 0x14CDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CDBCu;
            // 0x14cdc0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CDC4u; }
        if (ctx->pc != 0x14CDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CDC4u; }
        if (ctx->pc != 0x14CDC4u) { return; }
    }
    ctx->pc = 0x14CDC4u;
label_14cdc4:
    // 0x14cdc4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x14cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x14cdc8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x14cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x14cdcc: 0x133100  sll         $a2, $s3, 4
    ctx->pc = 0x14cdccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x14cdd0: 0x2442bdc0  addiu       $v0, $v0, -0x4240
    ctx->pc = 0x14cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950336));
    // 0x14cdd4: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x14cdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14cdd8: 0xafa001fc  sw          $zero, 0x1FC($sp)
    ctx->pc = 0x14cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 0));
    // 0x14cddc: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x14cddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cde0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x14cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x14cde4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x14cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14cde8: 0x2442bdc4  addiu       $v0, $v0, -0x423C
    ctx->pc = 0x14cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950340));
    // 0x14cdec: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x14cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14cdf0: 0x2463bdc8  addiu       $v1, $v1, -0x4238
    ctx->pc = 0x14cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950344));
    // 0x14cdf4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x14cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x14cdf8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14cdfc: 0x2442bdcc  addiu       $v0, $v0, -0x4234
    ctx->pc = 0x14cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950348));
    // 0x14ce00: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14ce04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ce04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14ce08: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14ce08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x14ce0c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x14ce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ce10: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x14ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ce14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14ce18: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14ce18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14ce1c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x14ce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ce20: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x14ce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ce24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14ce28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14ce28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14ce2c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x14ce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ce30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14ce34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14ce38: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14ce38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x14ce3c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x14ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ce40: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14ce40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce44: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14ce44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14ce48: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14ce48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14ce4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce50: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x14ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ce54: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14ce54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14ce58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14ce58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14ce5c: 0x8f8288e0  lw          $v0, -0x7720($gp)
    ctx->pc = 0x14ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
    // 0x14ce60: 0xc041e82  jal         func_107A08
    ctx->pc = 0x14CE60u;
    SET_GPR_U32(ctx, 31, 0x14CE68u);
    ctx->pc = 0x14CE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE60u;
            // 0x14ce64: 0x462021  addu        $a0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE68u; }
        if (ctx->pc != 0x14CE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE68u; }
        if (ctx->pc != 0x14CE68u) { return; }
    }
    ctx->pc = 0x14CE68u;
label_14ce68:
    // 0x14ce68: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x14ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x14ce6c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x14ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x14ce70: 0x2442bdcc  addiu       $v0, $v0, -0x4234
    ctx->pc = 0x14ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950348));
    // 0x14ce74: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x14ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ce78: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x14ce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ce7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ce80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ce80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ce84: 0x0  nop
    ctx->pc = 0x14ce84u;
    // NOP
    // 0x14ce88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ce88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14ce8c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14ce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_14ce90:
    // 0x14ce90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14ce90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14ce94:
    // 0x14ce94: 0x0  nop
    ctx->pc = 0x14ce94u;
    // NOP
    // 0x14ce98: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14ce9c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x14ce9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14cea0: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x14CEA0u;
    {
        const bool branch_taken_0x14cea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cea0) {
            ctx->pc = 0x14CD1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14cd1c;
        }
    }
    ctx->pc = 0x14CEA8u;
    // 0x14cea8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x14cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14ceac: 0x0  nop
    ctx->pc = 0x14ceacu;
    // NOP
label_14ceb0:
    // 0x14ceb0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14ceb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ceb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14ceb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ceb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14ceb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14cebc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14cebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14cec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14cec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14cec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14cec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14cec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cecc: 0x3e00008  jr          $ra
    ctx->pc = 0x14CECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CECCu;
            // 0x14ced0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14CED4u;
}
