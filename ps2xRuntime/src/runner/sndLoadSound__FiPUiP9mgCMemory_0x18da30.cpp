#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndLoadSound__FiPUiP9mgCMemory
// Address: 0x18da30 - 0x18def4
void sndLoadSound__FiPUiP9mgCMemory_0x18da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndLoadSound__FiPUiP9mgCMemory_0x18da30");
#endif

    switch (ctx->pc) {
        case 0x18da80u: goto label_18da80;
        case 0x18daa8u: goto label_18daa8;
        case 0x18dadcu: goto label_18dadc;
        case 0x18db08u: goto label_18db08;
        case 0x18db3cu: goto label_18db3c;
        case 0x18db64u: goto label_18db64;
        case 0x18db78u: goto label_18db78;
        case 0x18db80u: goto label_18db80;
        case 0x18dbb8u: goto label_18dbb8;
        case 0x18dbc0u: goto label_18dbc0;
        case 0x18dbe0u: goto label_18dbe0;
        case 0x18dc14u: goto label_18dc14;
        case 0x18dc1cu: goto label_18dc1c;
        case 0x18dc70u: goto label_18dc70;
        case 0x18dcc4u: goto label_18dcc4;
        case 0x18dcf0u: goto label_18dcf0;
        case 0x18dd00u: goto label_18dd00;
        case 0x18dd10u: goto label_18dd10;
        case 0x18dd34u: goto label_18dd34;
        case 0x18dd44u: goto label_18dd44;
        case 0x18dd88u: goto label_18dd88;
        case 0x18ddbcu: goto label_18ddbc;
        case 0x18ddccu: goto label_18ddcc;
        case 0x18dde8u: goto label_18dde8;
        case 0x18ddfcu: goto label_18ddfc;
        case 0x18de08u: goto label_18de08;
        case 0x18de30u: goto label_18de30;
        case 0x18de68u: goto label_18de68;
        case 0x18dea4u: goto label_18dea4;
        case 0x18deb8u: goto label_18deb8;
        case 0x18dec0u: goto label_18dec0;
        default: break;
    }

    ctx->pc = 0x18da30u;

    // 0x18da30: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x18da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x18da34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x18da34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18da38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18da3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18da40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18da40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18da44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18da44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18da48: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18da48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18da4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18da50: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18da50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18da54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18da58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18da58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18da5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18da5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18da60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18da60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18da64: 0x8f828038  lw          $v0, -0x7FC8($gp)
    ctx->pc = 0x18da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934584)));
    // 0x18da68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DA68u;
    {
        const bool branch_taken_0x18da68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA68u;
            // 0x18da6c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da68) {
            ctx->pc = 0x18DA78u;
            goto label_18da78;
        }
    }
    ctx->pc = 0x18DA70u;
    // 0x18da70: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x18DA70u;
    {
        const bool branch_taken_0x18da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA70u;
            // 0x18da74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da70) {
            ctx->pc = 0x18DEC4u;
            goto label_18dec4;
        }
    }
    ctx->pc = 0x18DA78u;
label_18da78:
    // 0x18da78: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18DA78u;
    SET_GPR_U32(ctx, 31, 0x18DA80u);
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA80u; }
        if (ctx->pc != 0x18DA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA80u; }
        if (ctx->pc != 0x18DA80u) { return; }
    }
    ctx->pc = 0x18DA80u;
label_18da80:
    // 0x18da80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18da80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da84: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DA84u;
    {
        const bool branch_taken_0x18da84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA84u;
            // 0x18da88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da84) {
            ctx->pc = 0x18DA94u;
            goto label_18da94;
        }
    }
    ctx->pc = 0x18DA8Cu;
    // 0x18da8c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x18DA8Cu;
    {
        const bool branch_taken_0x18da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA8Cu;
            // 0x18da90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18da8c) {
            ctx->pc = 0x18DEC4u;
            goto label_18dec4;
        }
    }
    ctx->pc = 0x18DA94u;
label_18da94:
    // 0x18da94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18da94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da98: 0xafa2046c  sw          $v0, 0x46C($sp)
    ctx->pc = 0x18da98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1132), GPR_U32(ctx, 2));
    // 0x18da9c: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x18da9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x18daa0: 0xc063638  jal         func_18D8E0
    ctx->pc = 0x18DAA0u;
    SET_GPR_U32(ctx, 31, 0x18DAA8u);
    ctx->pc = 0x18DAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAA0u;
            // 0x18daa4: 0x27a7046c  addiu       $a3, $sp, 0x46C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D8E0u;
    if (runtime->hasFunction(0x18D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DAA8u; }
        if (ctx->pc != 0x18DAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCSndPortNo__FiPiPiPi_0x18d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DAA8u; }
        if (ctx->pc != 0x18DAA8u) { return; }
    }
    ctx->pc = 0x18DAA8u;
label_18daa8:
    // 0x18daa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DAA8u;
    {
        const bool branch_taken_0x18daa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAA8u;
            // 0x18daac: 0x32c200ff  andi        $v0, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18daa8) {
            ctx->pc = 0x18DAB8u;
            goto label_18dab8;
        }
    }
    ctx->pc = 0x18DAB0u;
    // 0x18dab0: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x18DAB0u;
    {
        const bool branch_taken_0x18dab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAB0u;
            // 0x18dab4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dab0) {
            ctx->pc = 0x18DEC4u;
            goto label_18dec4;
        }
    }
    ctx->pc = 0x18DAB8u;
label_18dab8:
    // 0x18dab8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18dabc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18dabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dac0: 0x2f600  sll         $fp, $v0, 24
    ctx->pc = 0x18dac0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x18dac4: 0x24a54aa0  addiu       $a1, $a1, 0x4AA0
    ctx->pc = 0x18dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19104));
    // 0x18dac8: 0x27a60470  addiu       $a2, $sp, 0x470
    ctx->pc = 0x18dac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x18dacc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18daccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dad0: 0x27a80474  addiu       $t0, $sp, 0x474
    ctx->pc = 0x18dad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1140));
    // 0x18dad4: 0xc052788  jal         func_149E20
    ctx->pc = 0x18DAD4u;
    SET_GPR_U32(ctx, 31, 0x18DADCu);
    ctx->pc = 0x18DAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAD4u;
            // 0x18dad8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DADCu; }
        if (ctx->pc != 0x18DADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DADCu; }
        if (ctx->pc != 0x18DADCu) { return; }
    }
    ctx->pc = 0x18DADCu;
label_18dadc:
    // 0x18dadc: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DADCu;
    {
        const bool branch_taken_0x18dadc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18DAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DADCu;
            // 0x18dae0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dadc) {
            ctx->pc = 0x18DAECu;
            goto label_18daec;
        }
    }
    ctx->pc = 0x18DAE4u;
    // 0x18dae4: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x18DAE4u;
    {
        const bool branch_taken_0x18dae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAE4u;
            // 0x18dae8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dae4) {
            ctx->pc = 0x18DEC4u;
            goto label_18dec4;
        }
    }
    ctx->pc = 0x18DAECu;
label_18daec:
    // 0x18daec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18daecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18daf0: 0x24a54a68  addiu       $a1, $a1, 0x4A68
    ctx->pc = 0x18daf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19048));
    // 0x18daf4: 0x27a60478  addiu       $a2, $sp, 0x478
    ctx->pc = 0x18daf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1144));
    // 0x18daf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18daf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dafc: 0x27a8047c  addiu       $t0, $sp, 0x47C
    ctx->pc = 0x18dafcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1148));
    // 0x18db00: 0xc052788  jal         func_149E20
    ctx->pc = 0x18DB00u;
    SET_GPR_U32(ctx, 31, 0x18DB08u);
    ctx->pc = 0x18DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB00u;
            // 0x18db04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB08u; }
        if (ctx->pc != 0x18DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB08u; }
        if (ctx->pc != 0x18DB08u) { return; }
    }
    ctx->pc = 0x18DB08u;
label_18db08:
    // 0x18db08: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DB08u;
    {
        const bool branch_taken_0x18db08 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18DB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB08u;
            // 0x18db0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db08) {
            ctx->pc = 0x18DB18u;
            goto label_18db18;
        }
    }
    ctx->pc = 0x18DB10u;
    // 0x18db10: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x18DB10u;
    {
        const bool branch_taken_0x18db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB10u;
            // 0x18db14: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db10) {
            ctx->pc = 0x18DEC8u;
            goto label_18dec8;
        }
    }
    ctx->pc = 0x18DB18u;
label_18db18:
    // 0x18db18: 0x8e170008  lw          $s7, 0x8($s0)
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18db1c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18db20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18db20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db24: 0x24a54aa8  addiu       $a1, $a1, 0x4AA8
    ctx->pc = 0x18db24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19112));
    // 0x18db28: 0x27a60480  addiu       $a2, $sp, 0x480
    ctx->pc = 0x18db28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x18db2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18db2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18db30: 0x27a80488  addiu       $t0, $sp, 0x488
    ctx->pc = 0x18db30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1160));
    // 0x18db34: 0xc052788  jal         func_149E20
    ctx->pc = 0x18DB34u;
    SET_GPR_U32(ctx, 31, 0x18DB3Cu);
    ctx->pc = 0x18DB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB34u;
            // 0x18db38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB3Cu; }
        if (ctx->pc != 0x18DB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB3Cu; }
        if (ctx->pc != 0x18DB3Cu) { return; }
    }
    ctx->pc = 0x18DB3Cu;
label_18db3c:
    // 0x18db3c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18DB3Cu;
    {
        const bool branch_taken_0x18db3c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18DB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB3Cu;
            // 0x18db40: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db3c) {
            ctx->pc = 0x18DB48u;
            goto label_18db48;
        }
    }
    ctx->pc = 0x18DB44u;
    // 0x18db44: 0xafa00488  sw          $zero, 0x488($sp)
    ctx->pc = 0x18db44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1160), GPR_U32(ctx, 0));
label_18db48:
    // 0x18db48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18db48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db4c: 0x24a54ab0  addiu       $a1, $a1, 0x4AB0
    ctx->pc = 0x18db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19120));
    // 0x18db50: 0x27a60484  addiu       $a2, $sp, 0x484
    ctx->pc = 0x18db50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1156));
    // 0x18db54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18db54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18db58: 0x27a8048c  addiu       $t0, $sp, 0x48C
    ctx->pc = 0x18db58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1164));
    // 0x18db5c: 0xc052788  jal         func_149E20
    ctx->pc = 0x18DB5Cu;
    SET_GPR_U32(ctx, 31, 0x18DB64u);
    ctx->pc = 0x18DB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB5Cu;
            // 0x18db60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB64u; }
        if (ctx->pc != 0x18DB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB64u; }
        if (ctx->pc != 0x18DB64u) { return; }
    }
    ctx->pc = 0x18DB64u;
label_18db64:
    // 0x18db64: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18DB64u;
    {
        const bool branch_taken_0x18db64 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x18db64) {
            ctx->pc = 0x18DB70u;
            goto label_18db70;
        }
    }
    ctx->pc = 0x18DB6Cu;
    // 0x18db6c: 0xafa0048c  sw          $zero, 0x48C($sp)
    ctx->pc = 0x18db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1164), GPR_U32(ctx, 0));
label_18db70:
    // 0x18db70: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18DB70u;
    SET_GPR_U32(ctx, 31, 0x18DB78u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB78u; }
        if (ctx->pc != 0x18DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB78u; }
        if (ctx->pc != 0x18DB78u) { return; }
    }
    ctx->pc = 0x18DB78u;
label_18db78:
    // 0x18db78: 0xc063588  jal         func_18D620
    ctx->pc = 0x18DB78u;
    SET_GPR_U32(ctx, 31, 0x18DB80u);
    ctx->pc = 0x18D620u;
    if (runtime->hasFunction(0x18D620u)) {
        auto targetFn = runtime->lookupFunction(0x18D620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB80u; }
        if (ctx->pc != 0x18DB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CSndStepWait__Fv_0x18d620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB80u; }
        if (ctx->pc != 0x18DB80u) { return; }
    }
    ctx->pc = 0x18DB80u;
label_18db80:
    // 0x18db80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18db84: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18DB84u;
    {
        const bool branch_taken_0x18db84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB84u;
            // 0x18db88: 0x28410010  slti        $at, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db84) {
            ctx->pc = 0x18DBD0u;
            goto label_18dbd0;
        }
    }
    ctx->pc = 0x18DB8Cu;
    // 0x18db8c: 0x8fa90488  lw          $t1, 0x488($sp)
    ctx->pc = 0x18db8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1160)));
    // 0x18db90: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18DB90u;
    {
        const bool branch_taken_0x18db90 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db90) {
            ctx->pc = 0x18DBB8u;
            goto label_18dbb8;
        }
    }
    ctx->pc = 0x18DB98u;
    // 0x18db98: 0x8fa7048c  lw          $a3, 0x48C($sp)
    ctx->pc = 0x18db98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1164)));
    // 0x18db9c: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DB9Cu;
    {
        const bool branch_taken_0x18db9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db9c) {
            ctx->pc = 0x18DBB8u;
            goto label_18dbb8;
        }
    }
    ctx->pc = 0x18DBA4u;
    // 0x18dba4: 0x8fa60484  lw          $a2, 0x484($sp)
    ctx->pc = 0x18dba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1156)));
    // 0x18dba8: 0x8fa80480  lw          $t0, 0x480($sp)
    ctx->pc = 0x18dba8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x18dbac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18dbb0: 0xc0628e4  jal         func_18A390
    ctx->pc = 0x18DBB0u;
    SET_GPR_U32(ctx, 31, 0x18DBB8u);
    ctx->pc = 0x18DBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBB0u;
            // 0x18dbb4: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A390u;
    if (runtime->hasFunction(0x18A390u)) {
        auto targetFn = runtime->lookupFunction(0x18A390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBB8u; }
        if (ctx->pc != 0x18DBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadHdBd__6CSoundFiiiii_0x18a390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBB8u; }
        if (ctx->pc != 0x18DBB8u) { return; }
    }
    ctx->pc = 0x18DBB8u;
label_18dbb8:
    // 0x18dbb8: 0xc063560  jal         func_18D580
    ctx->pc = 0x18DBB8u;
    SET_GPR_U32(ctx, 31, 0x18DBC0u);
    ctx->pc = 0x18D580u;
    if (runtime->hasFunction(0x18D580u)) {
        auto targetFn = runtime->lookupFunction(0x18D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBC0u; }
        if (ctx->pc != 0x18DBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitTransBd__Fv_0x18d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBC0u; }
        if (ctx->pc != 0x18DBC0u) { return; }
    }
    ctx->pc = 0x18DBC0u;
label_18dbc0:
    // 0x18dbc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18dbc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18dbc8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18DBC8u;
    {
        const bool branch_taken_0x18dbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBC8u;
            // 0x18dbcc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbc8) {
            ctx->pc = 0x18DC28u;
            goto label_18dc28;
        }
    }
    ctx->pc = 0x18DBD0u;
label_18dbd0:
    // 0x18dbd0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DBD0u;
    {
        const bool branch_taken_0x18dbd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dbd0) {
            ctx->pc = 0x18DBE8u;
            goto label_18dbe8;
        }
    }
    ctx->pc = 0x18DBD8u;
    // 0x18dbd8: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18DBD8u;
    SET_GPR_U32(ctx, 31, 0x18DBE0u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBE0u; }
        if (ctx->pc != 0x18DBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DBE0u; }
        if (ctx->pc != 0x18DBE0u) { return; }
    }
    ctx->pc = 0x18DBE0u;
label_18dbe0:
    // 0x18dbe0: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x18DBE0u;
    {
        const bool branch_taken_0x18dbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBE0u;
            // 0x18dbe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbe0) {
            ctx->pc = 0x18DEC4u;
            goto label_18dec4;
        }
    }
    ctx->pc = 0x18DBE8u;
label_18dbe8:
    // 0x18dbe8: 0x8fa90488  lw          $t1, 0x488($sp)
    ctx->pc = 0x18dbe8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1160)));
    // 0x18dbec: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18DBECu;
    {
        const bool branch_taken_0x18dbec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbec) {
            ctx->pc = 0x18DC14u;
            goto label_18dc14;
        }
    }
    ctx->pc = 0x18DBF4u;
    // 0x18dbf4: 0x8fa7048c  lw          $a3, 0x48C($sp)
    ctx->pc = 0x18dbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1164)));
    // 0x18dbf8: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DBF8u;
    {
        const bool branch_taken_0x18dbf8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dbf8) {
            ctx->pc = 0x18DC14u;
            goto label_18dc14;
        }
    }
    ctx->pc = 0x18DC00u;
    // 0x18dc00: 0x8fa60484  lw          $a2, 0x484($sp)
    ctx->pc = 0x18dc00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1156)));
    // 0x18dc04: 0x8fa80480  lw          $t0, 0x480($sp)
    ctx->pc = 0x18dc04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x18dc08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18dc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18dc0c: 0xc062a68  jal         func_18A9A0
    ctx->pc = 0x18DC0Cu;
    SET_GPR_U32(ctx, 31, 0x18DC14u);
    ctx->pc = 0x18DC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC0Cu;
            // 0x18dc10: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9A0u;
    if (runtime->hasFunction(0x18A9A0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC14u; }
        if (ctx->pc != 0x18DC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadHdBdAdd__6CSoundFiiiii_0x18a9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC14u; }
        if (ctx->pc != 0x18DC14u) { return; }
    }
    ctx->pc = 0x18DC14u;
label_18dc14:
    // 0x18dc14: 0xc063560  jal         func_18D580
    ctx->pc = 0x18DC14u;
    SET_GPR_U32(ctx, 31, 0x18DC1Cu);
    ctx->pc = 0x18D580u;
    if (runtime->hasFunction(0x18D580u)) {
        auto targetFn = runtime->lookupFunction(0x18D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC1Cu; }
        if (ctx->pc != 0x18DC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitTransBd__Fv_0x18d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC1Cu; }
        if (ctx->pc != 0x18DC1Cu) { return; }
    }
    ctx->pc = 0x18DC1Cu;
label_18dc1c:
    // 0x18dc1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18dc20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18dc24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x18dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_18dc28:
    // 0x18dc28: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x18dc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x18dc2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18dc30: 0x6e00005  bltz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DC30u;
    {
        const bool branch_taken_0x18dc30 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x18DC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC30u;
            // 0x18dc34: 0x3c2f025  or          $fp, $fp, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc30) {
            ctx->pc = 0x18DC48u;
            goto label_18dc48;
        }
    }
    ctx->pc = 0x18DC38u;
    // 0x18dc38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18dc3c: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x18dc3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18dc40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DC40u;
    {
        const bool branch_taken_0x18dc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC40u;
            // 0x18dc44: 0x1710c0  sll         $v0, $s7, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc40) {
            ctx->pc = 0x18DC50u;
            goto label_18dc50;
        }
    }
    ctx->pc = 0x18DC48u;
label_18dc48:
    // 0x18dc48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18DC48u;
    {
        const bool branch_taken_0x18dc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC48u;
            // 0x18dc4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc48) {
            ctx->pc = 0x18DC60u;
            goto label_18dc60;
        }
    }
    ctx->pc = 0x18DC50u;
label_18dc50:
    // 0x18dc50: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x18dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x18dc54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18dc58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18dc5c: 0x2451000c  addiu       $s1, $v0, 0xC
    ctx->pc = 0x18dc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_18dc60:
    // 0x18dc60: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DC60u;
    {
        const bool branch_taken_0x18dc60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dc60) {
            ctx->pc = 0x18DC78u;
            goto label_18dc78;
        }
    }
    ctx->pc = 0x18DC68u;
    // 0x18dc68: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18DC68u;
    SET_GPR_U32(ctx, 31, 0x18DC70u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC70u; }
        if (ctx->pc != 0x18DC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC70u; }
        if (ctx->pc != 0x18DC70u) { return; }
    }
    ctx->pc = 0x18DC70u;
label_18dc70:
    // 0x18dc70: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x18DC70u;
    {
        const bool branch_taken_0x18dc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC70u;
            // 0x18dc74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc70) {
            ctx->pc = 0x18DEC4u;
            goto label_18dec4;
        }
    }
    ctx->pc = 0x18DC78u;
label_18dc78:
    // 0x18dc78: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x18DC78u;
    {
        const bool branch_taken_0x18dc78 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dc78) {
            ctx->pc = 0x18DCA4u;
            goto label_18dca4;
        }
    }
    ctx->pc = 0x18DC80u;
    // 0x18dc80: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x18dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18dc84: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DC84u;
    {
        const bool branch_taken_0x18dc84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x18dc84) {
            ctx->pc = 0x18DCA4u;
            goto label_18dca4;
        }
    }
    ctx->pc = 0x18DC8Cu;
    // 0x18dc8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18dc90: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DC90u;
    {
        const bool branch_taken_0x18dc90 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x18dc90) {
            ctx->pc = 0x18DCA4u;
            goto label_18dca4;
        }
    }
    ctx->pc = 0x18DC98u;
    // 0x18dc98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18dc9c: 0x16c20032  bne         $s6, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x18DC9Cu;
    {
        const bool branch_taken_0x18dc9c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dc9c) {
            ctx->pc = 0x18DD68u;
            goto label_18dd68;
        }
    }
    ctx->pc = 0x18DCA4u;
label_18dca4:
    // 0x18dca4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18dca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18dca8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcac: 0x24a54ab8  addiu       $a1, $a1, 0x4AB8
    ctx->pc = 0x18dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19128));
    // 0x18dcb0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x18dcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18dcb4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x18dcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18dcb8: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x18dcb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x18dcbc: 0xc052788  jal         func_149E20
    ctx->pc = 0x18DCBCu;
    SET_GPR_U32(ctx, 31, 0x18DCC4u);
    ctx->pc = 0x18DCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCBCu;
            // 0x18dcc0: 0x27a901a0  addiu       $t1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCC4u; }
        if (ctx->pc != 0x18DCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCC4u; }
        if (ctx->pc != 0x18DCC4u) { return; }
    }
    ctx->pc = 0x18DCC4u;
label_18dcc4:
    // 0x18dcc4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x18dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x18dcc8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x18dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18dccc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18dcd0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x18dcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x18dcd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DCD4u;
    {
        const bool branch_taken_0x18dcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCD4u;
            // 0x18dcd8: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcd4) {
            ctx->pc = 0x18DCE4u;
            goto label_18dce4;
        }
    }
    ctx->pc = 0x18DCDCu;
    // 0x18dcdc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x18dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18dce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18dce4:
    // 0x18dce4: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x18dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x18dce8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x18DCE8u;
    SET_GPR_U32(ctx, 31, 0x18DCF0u);
    ctx->pc = 0x18DCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCE8u;
            // 0x18dcec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCF0u; }
        if (ctx->pc != 0x18DCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCF0u; }
        if (ctx->pc != 0x18DCF0u) { return; }
    }
    ctx->pc = 0x18DCF0u;
label_18dcf0:
    // 0x18dcf0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x18dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18dcf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18dcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcf8: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x18DCF8u;
    SET_GPR_U32(ctx, 31, 0x18DD00u);
    ctx->pc = 0x18DCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCF8u;
            // 0x18dcfc: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD00u; }
        if (ctx->pc != 0x18DD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD00u; }
        if (ctx->pc != 0x18DD00u) { return; }
    }
    ctx->pc = 0x18DD00u;
label_18dd00:
    // 0x18dd00: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x18dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x18dd04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18dd04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18DD08u;
    {
        const bool branch_taken_0x18dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD08u;
            // 0x18dd0c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd08) {
            ctx->pc = 0x18DD58u;
            goto label_18dd58;
        }
    }
    ctx->pc = 0x18DD10u;
label_18dd10:
    // 0x18dd10: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x18dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x18dd14: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x18dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x18dd18: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x18dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x18dd1c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x18dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x18dd20: 0x8c4600a0  lw          $a2, 0xA0($v0)
    ctx->pc = 0x18dd20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x18dd24: 0x8c470120  lw          $a3, 0x120($v0)
    ctx->pc = 0x18dd24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x18dd28: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x18dd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18dd2c: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x18DD2Cu;
    SET_GPR_U32(ctx, 31, 0x18DD34u);
    ctx->pc = 0x18DD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD2Cu;
            // 0x18dd30: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (runtime->hasFunction(0x18AC80u)) {
        auto targetFn = runtime->lookupFunction(0x18AC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD34u; }
        if (ctx->pc != 0x18DD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeq__6CSoundFiii_0x18ac80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD34u; }
        if (ctx->pc != 0x18DD34u) { return; }
    }
    ctx->pc = 0x18DD34u;
label_18dd34:
    // 0x18dd34: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x18dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x18dd38: 0x8c4401a0  lw          $a0, 0x1A0($v0)
    ctx->pc = 0x18dd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x18dd3c: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x18DD3Cu;
    SET_GPR_U32(ctx, 31, 0x18DD44u);
    ctx->pc = 0x18DD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD3Cu;
            // 0x18dd40: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD44u; }
        if (ctx->pc != 0x18DD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD44u; }
        if (ctx->pc != 0x18DD44u) { return; }
    }
    ctx->pc = 0x18DD44u;
label_18dd44:
    // 0x18dd44: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x18dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x18dd48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18dd48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18dd4c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x18dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x18dd50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18dd54: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18dd54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18dd58:
    // 0x18dd58: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x18dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18dd5c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18dd5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18dd60: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18DD60u;
    {
        const bool branch_taken_0x18dd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dd60) {
            ctx->pc = 0x18DD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18dd10;
        }
    }
    ctx->pc = 0x18DD68u;
label_18dd68:
    // 0x18dd68: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x18dd6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18dd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd70: 0x24a54ac0  addiu       $a1, $a1, 0x4AC0
    ctx->pc = 0x18dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19136));
    // 0x18dd74: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x18dd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x18dd78: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x18dd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18dd7c: 0x27a802e0  addiu       $t0, $sp, 0x2E0
    ctx->pc = 0x18dd7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x18dd80: 0xc052788  jal         func_149E20
    ctx->pc = 0x18DD80u;
    SET_GPR_U32(ctx, 31, 0x18DD88u);
    ctx->pc = 0x18DD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD80u;
            // 0x18dd84: 0x27a903a0  addiu       $t1, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149E20u;
    if (runtime->hasFunction(0x149E20u)) {
        auto targetFn = runtime->lookupFunction(0x149E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD88u; }
        if (ctx->pc != 0x18DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFileExt__FPUiPcPPUiiPiPPc_0x149e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD88u; }
        if (ctx->pc != 0x18DD88u) { return; }
    }
    ctx->pc = 0x18DD88u;
label_18dd88:
    // 0x18dd88: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x18dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x18dd8c: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x18dd8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x18dd90: 0x1a400017  blez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x18DD90u;
    {
        const bool branch_taken_0x18dd90 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x18DD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD90u;
            // 0x18dd94: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd90) {
            ctx->pc = 0x18DDF0u;
            goto label_18ddf0;
        }
    }
    ctx->pc = 0x18DD98u;
    // 0x18dd98: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x18dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x18dd9c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x18dd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x18dda0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DDA0u;
    {
        const bool branch_taken_0x18dda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDA0u;
            // 0x18dda4: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dda0) {
            ctx->pc = 0x18DDB0u;
            goto label_18ddb0;
        }
    }
    ctx->pc = 0x18DDA8u;
    // 0x18dda8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x18dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18ddac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18ddb0:
    // 0x18ddb0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x18ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x18ddb4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x18DDB4u;
    SET_GPR_U32(ctx, 31, 0x18DDBCu);
    ctx->pc = 0x18DDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDB4u;
            // 0x18ddb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDBCu; }
        if (ctx->pc != 0x18DDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDBCu; }
        if (ctx->pc != 0x18DDBCu) { return; }
    }
    ctx->pc = 0x18DDBCu;
label_18ddbc:
    // 0x18ddbc: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x18ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x18ddc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ddc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddc4: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x18DDC4u;
    SET_GPR_U32(ctx, 31, 0x18DDCCu);
    ctx->pc = 0x18DDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDC4u;
            // 0x18ddc8: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDCCu; }
        if (ctx->pc != 0x18DDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDCCu; }
        if (ctx->pc != 0x18DDCCu) { return; }
    }
    ctx->pc = 0x18DDCCu;
label_18ddcc:
    // 0x18ddcc: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x18ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x18ddd0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18ddd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ddd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddd8: 0x24a5df00  addiu       $a1, $a1, -0x2100
    ctx->pc = 0x18ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958848));
    // 0x18dddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18dddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dde0: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x18DDE0u;
    SET_GPR_U32(ctx, 31, 0x18DDE8u);
    ctx->pc = 0x18DDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDE0u;
            // 0x18dde4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDE8u; }
        if (ctx->pc != 0x18DDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DDE8u; }
        if (ctx->pc != 0x18DDE8u) { return; }
    }
    ctx->pc = 0x18DDE8u;
label_18dde8:
    // 0x18dde8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x18dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x18ddec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18ddecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ddf0:
    // 0x18ddf0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18ddf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ddf4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18DDF4u;
    {
        const bool branch_taken_0x18ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DDF4u;
            // 0x18ddf8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ddf4) {
            ctx->pc = 0x18DE3Cu;
            goto label_18de3c;
        }
    }
    ctx->pc = 0x18DDFCu;
label_18ddfc:
    // 0x18ddfc: 0x8c4403a0  lw          $a0, 0x3A0($v0)
    ctx->pc = 0x18ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 928)));
    // 0x18de00: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x18DE00u;
    SET_GPR_U32(ctx, 31, 0x18DE08u);
    ctx->pc = 0x18DE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE00u;
            // 0x18de04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE08u; }
        if (ctx->pc != 0x18DE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE08u; }
        if (ctx->pc != 0x18DE08u) { return; }
    }
    ctx->pc = 0x18DE08u;
label_18de08:
    // 0x18de08: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x18de08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18de0c: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x18de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x18de10: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18de10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de14: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x18de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x18de18: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18de18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x18de1c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x18de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18de20: 0x8c650220  lw          $a1, 0x220($v1)
    ctx->pc = 0x18de20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x18de24: 0x8c6602e0  lw          $a2, 0x2E0($v1)
    ctx->pc = 0x18de24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 736)));
    // 0x18de28: 0xc062d4c  jal         func_18B530
    ctx->pc = 0x18DE28u;
    SET_GPR_U32(ctx, 31, 0x18DE30u);
    ctx->pc = 0x18DE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE28u;
            // 0x18de2c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B530u;
    if (runtime->hasFunction(0x18B530u)) {
        auto targetFn = runtime->lookupFunction(0x18B530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE30u; }
        if (ctx->pc != 0x18DE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSMF__13sndCSeSeqDataFPciP9mgCMemory_0x18b530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE30u; }
        if (ctx->pc != 0x18DE30u) { return; }
    }
    ctx->pc = 0x18DE30u;
label_18de30:
    // 0x18de30: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x18de30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x18de34: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x18de34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x18de38: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x18de38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_18de3c:
    // 0x18de3c: 0x0  nop
    ctx->pc = 0x18de3cu;
    // NOP
    // 0x18de40: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x18de40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x18de44: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x18de44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18de48: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18DE48u;
    {
        const bool branch_taken_0x18de48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE48u;
            // 0x18de4c: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de48) {
            ctx->pc = 0x18DDFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ddfc;
        }
    }
    ctx->pc = 0x18DE50u;
    // 0x18de50: 0x8fa6046c  lw          $a2, 0x46C($sp)
    ctx->pc = 0x18de50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1132)));
    // 0x18de54: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x18DE54u;
    {
        const bool branch_taken_0x18de54 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x18de54) {
            ctx->pc = 0x18DE8Cu;
            goto label_18de8c;
        }
    }
    ctx->pc = 0x18DE5Cu;
    // 0x18de5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18de60: 0xc0628b0  jal         func_18A2C0
    ctx->pc = 0x18DE60u;
    SET_GPR_U32(ctx, 31, 0x18DE68u);
    ctx->pc = 0x18DE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE60u;
            // 0x18de64: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A2C0u;
    if (runtime->hasFunction(0x18A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE68u; }
        if (ctx->pc != 0x18DE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVol__6CSoundFii_0x18a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DE68u; }
        if (ctx->pc != 0x18DE68u) { return; }
    }
    ctx->pc = 0x18DE68u;
label_18de68:
    // 0x18de68: 0x6c00008  bltz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x18DE68u;
    {
        const bool branch_taken_0x18de68 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x18DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE68u;
            // 0x18de6c: 0x2ac10011  slti        $at, $s6, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de68) {
            ctx->pc = 0x18DE8Cu;
            goto label_18de8c;
        }
    }
    ctx->pc = 0x18DE70u;
    // 0x18de70: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DE70u;
    {
        const bool branch_taken_0x18de70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE70u;
            // 0x18de74: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18de70) {
            ctx->pc = 0x18DE8Cu;
            goto label_18de8c;
        }
    }
    ctx->pc = 0x18DE78u;
    // 0x18de78: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x18de78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x18de7c: 0x24427640  addiu       $v0, $v0, 0x7640
    ctx->pc = 0x18de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30272));
    // 0x18de80: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x18de80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x18de84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18de88: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x18de88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_18de8c:
    // 0x18de8c: 0x8fa60470  lw          $a2, 0x470($sp)
    ctx->pc = 0x18de8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x18de90: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x18de90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de94: 0x8fa70474  lw          $a3, 0x474($sp)
    ctx->pc = 0x18de94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1140)));
    // 0x18de98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18de98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18de9c: 0xc063ec0  jal         func_18FB00
    ctx->pc = 0x18DE9Cu;
    SET_GPR_U32(ctx, 31, 0x18DEA4u);
    ctx->pc = 0x18DEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE9Cu;
            // 0x18dea0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18FB00u;
    if (runtime->hasFunction(0x18FB00u)) {
        auto targetFn = runtime->lookupFunction(0x18FB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEA4u; }
        if (ctx->pc != 0x18DEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeInfoTxt__11sndPortInfoFiPciP9mgCMemory_0x18fb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEA4u; }
        if (ctx->pc != 0x18DEA4u) { return; }
    }
    ctx->pc = 0x18DEA4u;
label_18dea4:
    // 0x18dea4: 0x8fa60478  lw          $a2, 0x478($sp)
    ctx->pc = 0x18dea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1144)));
    // 0x18dea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18deac: 0x8fa7047c  lw          $a3, 0x47C($sp)
    ctx->pc = 0x18deacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1148)));
    // 0x18deb0: 0xc063fe0  jal         func_18FF80
    ctx->pc = 0x18DEB0u;
    SET_GPR_U32(ctx, 31, 0x18DEB8u);
    ctx->pc = 0x18DEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEB0u;
            // 0x18deb4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18FF80u;
    if (runtime->hasFunction(0x18FF80u)) {
        auto targetFn = runtime->lookupFunction(0x18FF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEB8u; }
        if (ctx->pc != 0x18DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadVolInfoTxt__11sndPortInfoFiPci_0x18ff80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEB8u; }
        if (ctx->pc != 0x18DEB8u) { return; }
    }
    ctx->pc = 0x18DEB8u;
label_18deb8:
    // 0x18deb8: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18DEB8u;
    SET_GPR_U32(ctx, 31, 0x18DEC0u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEC0u; }
        if (ctx->pc != 0x18DEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DEC0u; }
        if (ctx->pc != 0x18DEC0u) { return; }
    }
    ctx->pc = 0x18DEC0u;
label_18dec0:
    // 0x18dec0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x18dec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_18dec4:
    // 0x18dec4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x18dec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_18dec8:
    // 0x18dec8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18dec8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18decc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18deccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ded0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18ded0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ded4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18ded4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ded8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18ded8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18dedc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18dedcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18dee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18dee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18dee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18dee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18deec: 0x3e00008  jr          $ra
    ctx->pc = 0x18DEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DEECu;
            // 0x18def0: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DEF4u;
}
