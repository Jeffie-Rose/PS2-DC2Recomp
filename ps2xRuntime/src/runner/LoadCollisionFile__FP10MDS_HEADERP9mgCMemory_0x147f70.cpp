#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadCollisionFile__FP10MDS_HEADERP9mgCMemory
// Address: 0x147f70 - 0x1481a0
void LoadCollisionFile__FP10MDS_HEADERP9mgCMemory_0x147f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadCollisionFile__FP10MDS_HEADERP9mgCMemory_0x147f70");
#endif

    switch (ctx->pc) {
        case 0x147f70u: goto label_147f70;
        case 0x147f74u: goto label_147f74;
        case 0x147f78u: goto label_147f78;
        case 0x147f7cu: goto label_147f7c;
        case 0x147f80u: goto label_147f80;
        case 0x147f84u: goto label_147f84;
        case 0x147f88u: goto label_147f88;
        case 0x147f8cu: goto label_147f8c;
        case 0x147f90u: goto label_147f90;
        case 0x147f94u: goto label_147f94;
        case 0x147f98u: goto label_147f98;
        case 0x147f9cu: goto label_147f9c;
        case 0x147fa0u: goto label_147fa0;
        case 0x147fa4u: goto label_147fa4;
        case 0x147fa8u: goto label_147fa8;
        case 0x147facu: goto label_147fac;
        case 0x147fb0u: goto label_147fb0;
        case 0x147fb4u: goto label_147fb4;
        case 0x147fb8u: goto label_147fb8;
        case 0x147fbcu: goto label_147fbc;
        case 0x147fc0u: goto label_147fc0;
        case 0x147fc4u: goto label_147fc4;
        case 0x147fc8u: goto label_147fc8;
        case 0x147fccu: goto label_147fcc;
        case 0x147fd0u: goto label_147fd0;
        case 0x147fd4u: goto label_147fd4;
        case 0x147fd8u: goto label_147fd8;
        case 0x147fdcu: goto label_147fdc;
        case 0x147fe0u: goto label_147fe0;
        case 0x147fe4u: goto label_147fe4;
        case 0x147fe8u: goto label_147fe8;
        case 0x147fecu: goto label_147fec;
        case 0x147ff0u: goto label_147ff0;
        case 0x147ff4u: goto label_147ff4;
        case 0x147ff8u: goto label_147ff8;
        case 0x147ffcu: goto label_147ffc;
        case 0x148000u: goto label_148000;
        case 0x148004u: goto label_148004;
        case 0x148008u: goto label_148008;
        case 0x14800cu: goto label_14800c;
        case 0x148010u: goto label_148010;
        case 0x148014u: goto label_148014;
        case 0x148018u: goto label_148018;
        case 0x14801cu: goto label_14801c;
        case 0x148020u: goto label_148020;
        case 0x148024u: goto label_148024;
        case 0x148028u: goto label_148028;
        case 0x14802cu: goto label_14802c;
        case 0x148030u: goto label_148030;
        case 0x148034u: goto label_148034;
        case 0x148038u: goto label_148038;
        case 0x14803cu: goto label_14803c;
        case 0x148040u: goto label_148040;
        case 0x148044u: goto label_148044;
        case 0x148048u: goto label_148048;
        case 0x14804cu: goto label_14804c;
        case 0x148050u: goto label_148050;
        case 0x148054u: goto label_148054;
        case 0x148058u: goto label_148058;
        case 0x14805cu: goto label_14805c;
        case 0x148060u: goto label_148060;
        case 0x148064u: goto label_148064;
        case 0x148068u: goto label_148068;
        case 0x14806cu: goto label_14806c;
        case 0x148070u: goto label_148070;
        case 0x148074u: goto label_148074;
        case 0x148078u: goto label_148078;
        case 0x14807cu: goto label_14807c;
        case 0x148080u: goto label_148080;
        case 0x148084u: goto label_148084;
        case 0x148088u: goto label_148088;
        case 0x14808cu: goto label_14808c;
        case 0x148090u: goto label_148090;
        case 0x148094u: goto label_148094;
        case 0x148098u: goto label_148098;
        case 0x14809cu: goto label_14809c;
        case 0x1480a0u: goto label_1480a0;
        case 0x1480a4u: goto label_1480a4;
        case 0x1480a8u: goto label_1480a8;
        case 0x1480acu: goto label_1480ac;
        case 0x1480b0u: goto label_1480b0;
        case 0x1480b4u: goto label_1480b4;
        case 0x1480b8u: goto label_1480b8;
        case 0x1480bcu: goto label_1480bc;
        case 0x1480c0u: goto label_1480c0;
        case 0x1480c4u: goto label_1480c4;
        case 0x1480c8u: goto label_1480c8;
        case 0x1480ccu: goto label_1480cc;
        case 0x1480d0u: goto label_1480d0;
        case 0x1480d4u: goto label_1480d4;
        case 0x1480d8u: goto label_1480d8;
        case 0x1480dcu: goto label_1480dc;
        case 0x1480e0u: goto label_1480e0;
        case 0x1480e4u: goto label_1480e4;
        case 0x1480e8u: goto label_1480e8;
        case 0x1480ecu: goto label_1480ec;
        case 0x1480f0u: goto label_1480f0;
        case 0x1480f4u: goto label_1480f4;
        case 0x1480f8u: goto label_1480f8;
        case 0x1480fcu: goto label_1480fc;
        case 0x148100u: goto label_148100;
        case 0x148104u: goto label_148104;
        case 0x148108u: goto label_148108;
        case 0x14810cu: goto label_14810c;
        case 0x148110u: goto label_148110;
        case 0x148114u: goto label_148114;
        case 0x148118u: goto label_148118;
        case 0x14811cu: goto label_14811c;
        case 0x148120u: goto label_148120;
        case 0x148124u: goto label_148124;
        case 0x148128u: goto label_148128;
        case 0x14812cu: goto label_14812c;
        case 0x148130u: goto label_148130;
        case 0x148134u: goto label_148134;
        case 0x148138u: goto label_148138;
        case 0x14813cu: goto label_14813c;
        case 0x148140u: goto label_148140;
        case 0x148144u: goto label_148144;
        case 0x148148u: goto label_148148;
        case 0x14814cu: goto label_14814c;
        case 0x148150u: goto label_148150;
        case 0x148154u: goto label_148154;
        case 0x148158u: goto label_148158;
        case 0x14815cu: goto label_14815c;
        case 0x148160u: goto label_148160;
        case 0x148164u: goto label_148164;
        case 0x148168u: goto label_148168;
        case 0x14816cu: goto label_14816c;
        case 0x148170u: goto label_148170;
        case 0x148174u: goto label_148174;
        case 0x148178u: goto label_148178;
        case 0x14817cu: goto label_14817c;
        case 0x148180u: goto label_148180;
        case 0x148184u: goto label_148184;
        case 0x148188u: goto label_148188;
        case 0x14818cu: goto label_14818c;
        case 0x148190u: goto label_148190;
        case 0x148194u: goto label_148194;
        case 0x148198u: goto label_148198;
        case 0x14819cu: goto label_14819c;
        default: break;
    }

    ctx->pc = 0x147f70u;

label_147f70:
    // 0x147f70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x147f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_147f74:
    // 0x147f74: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x147f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_147f78:
    // 0x147f78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x147f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_147f7c:
    // 0x147f7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x147f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_147f80:
    // 0x147f80: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x147f80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147f84:
    // 0x147f84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x147f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_147f88:
    // 0x147f88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x147f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_147f8c:
    // 0x147f8c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x147f8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_147f90:
    // 0x147f90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x147f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_147f94:
    // 0x147f94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_147f98:
    // 0x147f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_147f9c:
    // 0x147f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_147fa0:
    // 0x147fa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x147fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147fa4:
    // 0x147fa4: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x147fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_147fa8:
    // 0x147fa8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_147fac:
    if (ctx->pc == 0x147FACu) {
        ctx->pc = 0x147FACu;
            // 0x147fac: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x147FB0u;
        goto label_147fb0;
    }
    ctx->pc = 0x147FA8u;
    {
        const bool branch_taken_0x147fa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x147FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147FA8u;
            // 0x147fac: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fa8) {
            ctx->pc = 0x147FB8u;
            goto label_147fb8;
        }
    }
    ctx->pc = 0x147FB0u;
label_147fb0:
    // 0x147fb0: 0x10000070  b           . + 4 + (0x70 << 2)
label_147fb4:
    if (ctx->pc == 0x147FB4u) {
        ctx->pc = 0x147FB4u;
            // 0x147fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147FB8u;
        goto label_147fb8;
    }
    ctx->pc = 0x147FB0u;
    {
        const bool branch_taken_0x147fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147FB0u;
            // 0x147fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fb0) {
            ctx->pc = 0x148174u;
            goto label_148174;
        }
    }
    ctx->pc = 0x147FB8u;
label_147fb8:
    // 0x147fb8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x147fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_147fbc:
    // 0x147fbc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x147fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_147fc0:
    // 0x147fc0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x147fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_147fc4:
    // 0x147fc4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x147fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_147fc8:
    // 0x147fc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_147fcc:
    if (ctx->pc == 0x147FCCu) {
        ctx->pc = 0x147FCCu;
            // 0x147fcc: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x147FD0u;
        goto label_147fd0;
    }
    ctx->pc = 0x147FC8u;
    {
        const bool branch_taken_0x147fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147FC8u;
            // 0x147fcc: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fc8) {
            ctx->pc = 0x147FD8u;
            goto label_147fd8;
        }
    }
    ctx->pc = 0x147FD0u;
label_147fd0:
    // 0x147fd0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x147fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_147fd4:
    // 0x147fd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x147fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_147fd8:
    // 0x147fd8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x147fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_147fdc:
    // 0x147fdc: 0xc04e748  jal         func_139D20
label_147fe0:
    if (ctx->pc == 0x147FE0u) {
        ctx->pc = 0x147FE0u;
            // 0x147fe0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147FE4u;
        goto label_147fe4;
    }
    ctx->pc = 0x147FDCu;
    SET_GPR_U32(ctx, 31, 0x147FE4u);
    ctx->pc = 0x147FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147FDCu;
            // 0x147fe0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147FE4u; }
        if (ctx->pc != 0x147FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147FE4u; }
        if (ctx->pc != 0x147FE4u) { return; }
    }
    ctx->pc = 0x147FE4u;
label_147fe4:
    // 0x147fe4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x147fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_147fe8:
    // 0x147fe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x147fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_147fec:
    // 0x147fec: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x147fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_147ff0:
    // 0x147ff0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x147ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_147ff4:
    // 0x147ff4: 0xc04e63c  jal         func_1398F0
label_147ff8:
    if (ctx->pc == 0x147FF8u) {
        ctx->pc = 0x147FF8u;
            // 0x147ff8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x147FFCu;
        goto label_147ffc;
    }
    ctx->pc = 0x147FF4u;
    SET_GPR_U32(ctx, 31, 0x147FFCu);
    ctx->pc = 0x147FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147FF4u;
            // 0x147ff8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147FFCu; }
        if (ctx->pc != 0x147FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147FFCu; }
        if (ctx->pc != 0x147FFCu) { return; }
    }
    ctx->pc = 0x147FFCu;
label_147ffc:
    // 0x147ffc: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x147ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_148000:
    // 0x148000: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x148000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_148004:
    // 0x148004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_148008:
    // 0x148008: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x148008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
label_14800c:
    // 0x14800c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14800cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148010:
    // 0x148010: 0xc0400bc  jal         func_1002F0
label_148014:
    if (ctx->pc == 0x148014u) {
        ctx->pc = 0x148014u;
            // 0x148014: 0x24070120  addiu       $a3, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->pc = 0x148018u;
        goto label_148018;
    }
    ctx->pc = 0x148010u;
    SET_GPR_U32(ctx, 31, 0x148018u);
    ctx->pc = 0x148014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148010u;
            // 0x148014: 0x24070120  addiu       $a3, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148018u; }
        if (ctx->pc != 0x148018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148018u; }
        if (ctx->pc != 0x148018u) { return; }
    }
    ctx->pc = 0x148018u;
label_148018:
    // 0x148018: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x148018u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14801c:
    // 0x14801c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14801cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148020:
    // 0x148020: 0x1000004f  b           . + 4 + (0x4F << 2)
label_148024:
    if (ctx->pc == 0x148024u) {
        ctx->pc = 0x148024u;
            // 0x148024: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x148028u;
        goto label_148028;
    }
    ctx->pc = 0x148020u;
    {
        const bool branch_taken_0x148020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148020u;
            // 0x148024: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148020) {
            ctx->pc = 0x148160u;
            goto label_148160;
        }
    }
    ctx->pc = 0x148028u;
label_148028:
    // 0x148028: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x148028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14802c:
    // 0x14802c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x14802cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_148030:
    // 0x148030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x148030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_148034:
    // 0x148034: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x148034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_148038:
    // 0x148038: 0x320f809  jalr        $t9
label_14803c:
    if (ctx->pc == 0x14803Cu) {
        ctx->pc = 0x14803Cu;
            // 0x14803c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x148040u;
        goto label_148040;
    }
    ctx->pc = 0x148038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x148040u);
        ctx->pc = 0x14803Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148038u;
            // 0x14803c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x148040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x148040u; }
            if (ctx->pc != 0x148040u) { return; }
        }
        }
    }
    ctx->pc = 0x148040u;
label_148040:
    // 0x148040: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x148040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148044:
    // 0x148044: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x148044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148048:
    // 0x148048: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x148048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_14804c:
    // 0x14804c: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x14804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_148050:
    // 0x148050: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x148050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_148054:
    // 0x148054: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x148054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_148058:
    // 0x148058: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x148058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_14805c:
    // 0x14805c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x14805cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_148060:
    // 0x148060: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x148060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_148064:
    // 0x148064: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x148064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_148068:
    // 0x148068: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x148068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14806c:
    // 0x14806c: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x14806cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_148070:
    // 0x148070: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x148070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_148074:
    // 0x148074: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x148074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_148078:
    // 0x148078: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x148078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14807c:
    // 0x14807c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_148080:
    if (ctx->pc == 0x148080u) {
        ctx->pc = 0x148080u;
            // 0x148080: 0xe4c00030  swc1        $f0, 0x30($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
        ctx->pc = 0x148084u;
        goto label_148084;
    }
    ctx->pc = 0x14807Cu;
    {
        const bool branch_taken_0x14807c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14807Cu;
            // 0x148080: 0xe4c00030  swc1        $f0, 0x30($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14807c) {
            ctx->pc = 0x148048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148048;
        }
    }
    ctx->pc = 0x148084u;
label_148084:
    // 0x148084: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x148084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_148088:
    // 0x148088: 0xc04d964  jal         func_136590
label_14808c:
    if (ctx->pc == 0x14808Cu) {
        ctx->pc = 0x14808Cu;
            // 0x14808c: 0x26450008  addiu       $a1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x148090u;
        goto label_148090;
    }
    ctx->pc = 0x148088u;
    SET_GPR_U32(ctx, 31, 0x148090u);
    ctx->pc = 0x14808Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148088u;
            // 0x14808c: 0x26450008  addiu       $a1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136590u;
    if (runtime->hasFunction(0x136590u)) {
        auto targetFn = runtime->lookupFunction(0x136590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148090u; }
        if (ctx->pc != 0x148090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__8mgCFrameFPc_0x136590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148090u; }
        if (ctx->pc != 0x148090u) { return; }
    }
    ctx->pc = 0x148090u;
label_148090:
    // 0x148090: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x148090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_148094:
    // 0x148094: 0xc04dd64  jal         func_137590
label_148098:
    if (ctx->pc == 0x148098u) {
        ctx->pc = 0x148098u;
            // 0x148098: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x14809Cu;
        goto label_14809c;
    }
    ctx->pc = 0x148094u;
    SET_GPR_U32(ctx, 31, 0x14809Cu);
    ctx->pc = 0x148098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148094u;
            // 0x148098: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14809Cu; }
        if (ctx->pc != 0x14809Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14809Cu; }
        if (ctx->pc != 0x14809Cu) { return; }
    }
    ctx->pc = 0x14809Cu;
label_14809c:
    // 0x14809c: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x14809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1480a0:
    // 0x1480a0: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
label_1480a4:
    if (ctx->pc == 0x1480A4u) {
        ctx->pc = 0x1480A4u;
            // 0x1480a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1480A8u;
        goto label_1480a8;
    }
    ctx->pc = 0x1480A0u;
    {
        const bool branch_taken_0x1480a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1480A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1480A0u;
            // 0x1480a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1480a0) {
            ctx->pc = 0x1480B8u;
            goto label_1480b8;
        }
    }
    ctx->pc = 0x1480A8u;
label_1480a8:
    // 0x1480a8: 0xc04dab8  jal         func_136AE0
label_1480ac:
    if (ctx->pc == 0x1480ACu) {
        ctx->pc = 0x1480ACu;
            // 0x1480ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1480B0u;
        goto label_1480b0;
    }
    ctx->pc = 0x1480A8u;
    SET_GPR_U32(ctx, 31, 0x1480B0u);
    ctx->pc = 0x1480ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1480A8u;
            // 0x1480ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136AE0u;
    if (runtime->hasFunction(0x136AE0u)) {
        auto targetFn = runtime->lookupFunction(0x136AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480B0u; }
        if (ctx->pc != 0x1480B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParent__8mgCFrameFP8mgCFrame_0x136ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480B0u; }
        if (ctx->pc != 0x1480B0u) { return; }
    }
    ctx->pc = 0x1480B0u;
label_1480b0:
    // 0x1480b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1480b4:
    if (ctx->pc == 0x1480B4u) {
        ctx->pc = 0x1480B8u;
        goto label_1480b8;
    }
    ctx->pc = 0x1480B0u;
    {
        const bool branch_taken_0x1480b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1480b0) {
            ctx->pc = 0x1480D0u;
            goto label_1480d0;
        }
    }
    ctx->pc = 0x1480B8u;
label_1480b8:
    // 0x1480b8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1480b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1480bc:
    // 0x1480bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1480bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1480c0:
    // 0x1480c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1480c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1480c4:
    // 0x1480c4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1480c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1480c8:
    // 0x1480c8: 0xc04dab8  jal         func_136AE0
label_1480cc:
    if (ctx->pc == 0x1480CCu) {
        ctx->pc = 0x1480CCu;
            // 0x1480cc: 0x2c22821  addu        $a1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->pc = 0x1480D0u;
        goto label_1480d0;
    }
    ctx->pc = 0x1480C8u;
    SET_GPR_U32(ctx, 31, 0x1480D0u);
    ctx->pc = 0x1480CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1480C8u;
            // 0x1480cc: 0x2c22821  addu        $a1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136AE0u;
    if (runtime->hasFunction(0x136AE0u)) {
        auto targetFn = runtime->lookupFunction(0x136AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480D0u; }
        if (ctx->pc != 0x1480D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParent__8mgCFrameFP8mgCFrame_0x136ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480D0u; }
        if (ctx->pc != 0x1480D0u) { return; }
    }
    ctx->pc = 0x1480D0u;
label_1480d0:
    // 0x1480d0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1480d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1480d4:
    // 0x1480d4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1480d8:
    if (ctx->pc == 0x1480D8u) {
        ctx->pc = 0x1480D8u;
            // 0x1480d8: 0x2e29021  addu        $s2, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->pc = 0x1480DCu;
        goto label_1480dc;
    }
    ctx->pc = 0x1480D4u;
    {
        const bool branch_taken_0x1480d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1480D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1480D4u;
            // 0x1480d8: 0x2e29021  addu        $s2, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1480d4) {
            ctx->pc = 0x148154u;
            goto label_148154;
        }
    }
    ctx->pc = 0x1480DCu;
label_1480dc:
    // 0x1480dc: 0xc04bc8c  jal         func_12F230
label_1480e0:
    if (ctx->pc == 0x1480E0u) {
        ctx->pc = 0x1480E0u;
            // 0x1480e0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1480E4u;
        goto label_1480e4;
    }
    ctx->pc = 0x1480DCu;
    SET_GPR_U32(ctx, 31, 0x1480E4u);
    ctx->pc = 0x1480E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1480DCu;
            // 0x1480e0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480E4u; }
        if (ctx->pc != 0x1480E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480E4u; }
        if (ctx->pc != 0x1480E4u) { return; }
    }
    ctx->pc = 0x1480E4u;
label_1480e4:
    // 0x1480e4: 0xc04bc8c  jal         func_12F230
label_1480e8:
    if (ctx->pc == 0x1480E8u) {
        ctx->pc = 0x1480E8u;
            // 0x1480e8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1480ECu;
        goto label_1480ec;
    }
    ctx->pc = 0x1480E4u;
    SET_GPR_U32(ctx, 31, 0x1480ECu);
    ctx->pc = 0x1480E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1480E4u;
            // 0x1480e8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480ECu; }
        if (ctx->pc != 0x1480ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480ECu; }
        if (ctx->pc != 0x1480ECu) { return; }
    }
    ctx->pc = 0x1480ECu;
label_1480ec:
    // 0x1480ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1480ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1480f0:
    // 0x1480f0: 0xc052080  jal         func_148200
label_1480f4:
    if (ctx->pc == 0x1480F4u) {
        ctx->pc = 0x1480F4u;
            // 0x1480f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1480F8u;
        goto label_1480f8;
    }
    ctx->pc = 0x1480F0u;
    SET_GPR_U32(ctx, 31, 0x1480F8u);
    ctx->pc = 0x1480F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1480F0u;
            // 0x1480f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148200u;
    if (runtime->hasFunction(0x148200u)) {
        auto targetFn = runtime->lookupFunction(0x148200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480F8u; }
        if (ctx->pc != 0x1480F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateCollisionMDT__FPUiP9mgCMemory_0x148200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480F8u; }
        if (ctx->pc != 0x1480F8u) { return; }
    }
    ctx->pc = 0x1480F8u;
label_1480f8:
    // 0x1480f8: 0xae620114  sw          $v0, 0x114($s3)
    ctx->pc = 0x1480f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
label_1480fc:
    // 0x1480fc: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x1480fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_148100:
    // 0x148100: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_148104:
    if (ctx->pc == 0x148104u) {
        ctx->pc = 0x148108u;
        goto label_148108;
    }
    ctx->pc = 0x148100u;
    {
        const bool branch_taken_0x148100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148100) {
            ctx->pc = 0x148124u;
            goto label_148124;
        }
    }
    ctx->pc = 0x148108u;
label_148108:
    // 0x148108: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x148108u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_14810c:
    // 0x14810c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x14810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_148110:
    // 0x148110: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x148110u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_148114:
    // 0x148114: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x148114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_148118:
    // 0x148118: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x148118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_14811c:
    // 0x14811c: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x14811cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_148120:
    // 0x148120: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x148120u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_148124:
    // 0x148124: 0x0  nop
    ctx->pc = 0x148124u;
    // NOP
label_148128:
    // 0x148128: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x148128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14812c:
    // 0x14812c: 0xc04e748  jal         func_139D20
label_148130:
    if (ctx->pc == 0x148130u) {
        ctx->pc = 0x148130u;
            // 0x148130: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x148134u;
        goto label_148134;
    }
    ctx->pc = 0x14812Cu;
    SET_GPR_U32(ctx, 31, 0x148134u);
    ctx->pc = 0x148130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14812Cu;
            // 0x148130: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148134u; }
        if (ctx->pc != 0x148134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148134u; }
        if (ctx->pc != 0x148134u) { return; }
    }
    ctx->pc = 0x148134u;
label_148134:
    // 0x148134: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x148134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_148138:
    // 0x148138: 0xc04e638  jal         func_1398E0
label_14813c:
    if (ctx->pc == 0x14813Cu) {
        ctx->pc = 0x14813Cu;
            // 0x14813c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x148140u;
        goto label_148140;
    }
    ctx->pc = 0x148138u;
    SET_GPR_U32(ctx, 31, 0x148140u);
    ctx->pc = 0x14813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148138u;
            // 0x14813c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148140u; }
        if (ctx->pc != 0x148140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148140u; }
        if (ctx->pc != 0x148140u) { return; }
    }
    ctx->pc = 0x148140u;
label_148140:
    // 0x148140: 0xae6200f0  sw          $v0, 0xF0($s3)
    ctx->pc = 0x148140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 2));
label_148144:
    // 0x148144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x148144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_148148:
    // 0x148148: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x148148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_14814c:
    // 0x14814c: 0xc04d97c  jal         func_1365F0
label_148150:
    if (ctx->pc == 0x148150u) {
        ctx->pc = 0x148150u;
            // 0x148150: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x148154u;
        goto label_148154;
    }
    ctx->pc = 0x14814Cu;
    SET_GPR_U32(ctx, 31, 0x148154u);
    ctx->pc = 0x148150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14814Cu;
            // 0x148150: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365F0u;
    if (runtime->hasFunction(0x1365F0u)) {
        auto targetFn = runtime->lookupFunction(0x1365F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148154u; }
        if (ctx->pc != 0x148154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBBox__8mgCFrameFPfPf_0x1365f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148154u; }
        if (ctx->pc != 0x148154u) { return; }
    }
    ctx->pc = 0x148154u;
label_148154:
    // 0x148154: 0x0  nop
    ctx->pc = 0x148154u;
    // NOP
label_148158:
    // 0x148158: 0x26940120  addiu       $s4, $s4, 0x120
    ctx->pc = 0x148158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
label_14815c:
    // 0x14815c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14815cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_148160:
    // 0x148160: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x148160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_148164:
    // 0x148164: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x148164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_148168:
    // 0x148168: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_14816c:
    if (ctx->pc == 0x14816Cu) {
        ctx->pc = 0x14816Cu;
            // 0x14816c: 0x2d49821  addu        $s3, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->pc = 0x148170u;
        goto label_148170;
    }
    ctx->pc = 0x148168u;
    {
        const bool branch_taken_0x148168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148168u;
            // 0x14816c: 0x2d49821  addu        $s3, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148168) {
            ctx->pc = 0x148028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148028;
        }
    }
    ctx->pc = 0x148170u;
label_148170:
    // 0x148170: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x148170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_148174:
    // 0x148174: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x148174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_148178:
    // 0x148178: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x148178u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14817c:
    // 0x14817c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14817cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_148180:
    // 0x148180: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x148180u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_148184:
    // 0x148184: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x148184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_148188:
    // 0x148188: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14818c:
    // 0x14818c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14818cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_148190:
    // 0x148190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148194:
    // 0x148194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_148198:
    // 0x148198: 0x3e00008  jr          $ra
label_14819c:
    if (ctx->pc == 0x14819Cu) {
        ctx->pc = 0x14819Cu;
            // 0x14819c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1481A0u;
        goto label_fallthrough_0x148198;
    }
    ctx->pc = 0x148198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14819Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148198u;
            // 0x14819c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x148198:
    ctx->pc = 0x1481A0u;
}
