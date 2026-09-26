#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgCopyFrame__FP8mgCFrameP9mgCMemoryi
// Address: 0x133870 - 0x133ae4
void mgCopyFrame__FP8mgCFrameP9mgCMemoryi_0x133870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgCopyFrame__FP8mgCFrameP9mgCMemoryi_0x133870");
#endif

    switch (ctx->pc) {
        case 0x13390cu: goto label_13390c;
        case 0x13391cu: goto label_13391c;
        case 0x133970u: goto label_133970;
        case 0x13398cu: goto label_13398c;
        case 0x1339acu: goto label_1339ac;
        case 0x1339bcu: goto label_1339bc;
        case 0x1339f4u: goto label_1339f4;
        case 0x133a10u: goto label_133a10;
        case 0x133a38u: goto label_133a38;
        case 0x133a70u: goto label_133a70;
        case 0x133ab4u: goto label_133ab4;
        default: break;
    }

    ctx->pc = 0x133870u;

    // 0x133870: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x133870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x133874: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x133874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x133878: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x133878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13387c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x133880: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x133880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x133884: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x133888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13388c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x133890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133894: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133898: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x133898u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13389c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13389cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338a0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1338a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338a4: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1338A4u;
    {
        const bool branch_taken_0x1338a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338a4) {
            ctx->pc = 0x1338B4u;
            goto label_1338b4;
        }
    }
    ctx->pc = 0x1338ACu;
    // 0x1338ac: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1338ACu;
    {
        const bool branch_taken_0x1338ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1338ac) {
            ctx->pc = 0x1338C0u;
            goto label_1338c0;
        }
    }
    ctx->pc = 0x1338B4u;
label_1338b4:
    // 0x1338b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1338b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338b8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1338B8u;
    {
        const bool branch_taken_0x1338b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338b8) {
            ctx->pc = 0x133AB4u;
            goto label_133ab4;
        }
    }
    ctx->pc = 0x1338C0u;
label_1338c0:
    // 0x1338c0: 0x8ed40064  lw          $s4, 0x64($s6)
    ctx->pc = 0x1338c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x1338c4: 0x8ed30068  lw          $s3, 0x68($s6)
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x1338c8: 0x1a800074  blez        $s4, . + 4 + (0x74 << 2)
    ctx->pc = 0x1338C8u;
    {
        const bool branch_taken_0x1338c8 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1338c8) {
            ctx->pc = 0x133A9Cu;
            goto label_133a9c;
        }
    }
    ctx->pc = 0x1338D0u;
    // 0x1338d0: 0x12600072  beqz        $s3, . + 4 + (0x72 << 2)
    ctx->pc = 0x1338D0u;
    {
        const bool branch_taken_0x1338d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338d0) {
            ctx->pc = 0x133A9Cu;
            goto label_133a9c;
        }
    }
    ctx->pc = 0x1338D8u;
    // 0x1338d8: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x1338d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1338dc: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x1338dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x1338e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1338E0u;
    {
        const bool branch_taken_0x1338e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338e0) {
            ctx->pc = 0x1338F8u;
            goto label_1338f8;
        }
    }
    ctx->pc = 0x1338E8u;
    // 0x1338e8: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x1338e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x1338ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1338ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1338f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1338F0u;
    {
        const bool branch_taken_0x1338f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338f0) {
            ctx->pc = 0x1338FCu;
            goto label_1338fc;
        }
    }
    ctx->pc = 0x1338F8u;
label_1338f8:
    // 0x1338f8: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x1338f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
label_1338fc:
    // 0x1338fc: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1338fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x133900: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133904: 0xc04e748  jal         func_139D20
    ctx->pc = 0x133904u;
    SET_GPR_U32(ctx, 31, 0x13390Cu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13390Cu; }
        if (ctx->pc != 0x13390Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13390Cu; }
        if (ctx->pc != 0x13390Cu) { return; }
    }
    ctx->pc = 0x13390Cu;
label_13390c:
    // 0x13390c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133914: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x133914u;
    SET_GPR_U32(ctx, 31, 0x13391Cu);
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13391Cu; }
        if (ctx->pc != 0x13391Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13391Cu; }
        if (ctx->pc != 0x13391Cu) { return; }
    }
    ctx->pc = 0x13391Cu;
label_13391c:
    // 0x13391c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13391cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133920: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133920u;
    {
        const bool branch_taken_0x133920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x133920) {
            ctx->pc = 0x133934u;
            goto label_133934;
        }
    }
    ctx->pc = 0x133928u;
    // 0x133928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13392c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x13392Cu;
    {
        const bool branch_taken_0x13392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13392c) {
            ctx->pc = 0x133AB4u;
            goto label_133ab4;
        }
    }
    ctx->pc = 0x133934u;
label_133934:
    // 0x133934: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x133934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x133938: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x133938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x13393c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13393cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x133940: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x133940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x133944: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133944u;
    {
        const bool branch_taken_0x133944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133944) {
            ctx->pc = 0x13395Cu;
            goto label_13395c;
        }
    }
    ctx->pc = 0x13394Cu;
    // 0x13394c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x13394cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x133950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133954: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x133954u;
    {
        const bool branch_taken_0x133954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133954) {
            ctx->pc = 0x133960u;
            goto label_133960;
        }
    }
    ctx->pc = 0x13395Cu;
label_13395c:
    // 0x13395c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x13395cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_133960:
    // 0x133960: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x133960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x133964: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133968: 0xc04e748  jal         func_139D20
    ctx->pc = 0x133968u;
    SET_GPR_U32(ctx, 31, 0x133970u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133970u; }
        if (ctx->pc != 0x133970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133970u; }
        if (ctx->pc != 0x133970u) { return; }
    }
    ctx->pc = 0x133970u;
label_133970:
    // 0x133970: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x133970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x133974: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x133974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x133978: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x133978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13397c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x13397cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x133980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133984: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x133984u;
    SET_GPR_U32(ctx, 31, 0x13398Cu);
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13398Cu; }
        if (ctx->pc != 0x13398Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13398Cu; }
        if (ctx->pc != 0x13398Cu) { return; }
    }
    ctx->pc = 0x13398Cu;
label_13398c:
    // 0x13398c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133990: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x133990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x133994: 0x24a56490  addiu       $a1, $a1, 0x6490
    ctx->pc = 0x133994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25744));
    // 0x133998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13399c: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x13399cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1339a0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1339a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339a4: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x1339A4u;
    SET_GPR_U32(ctx, 31, 0x1339ACu);
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1339ACu; }
        if (ctx->pc != 0x1339ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1339ACu; }
        if (ctx->pc != 0x1339ACu) { return; }
    }
    ctx->pc = 0x1339ACu;
label_1339ac:
    // 0x1339ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1339acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1339b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1339B4u;
    {
        const bool branch_taken_0x1339b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339b4) {
            ctx->pc = 0x1339F8u;
            goto label_1339f8;
        }
    }
    ctx->pc = 0x1339BCu;
label_1339bc:
    // 0x1339bc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1339bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1339c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1339c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1339c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1339c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1339c8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1339c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1339cc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1339ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1339d0: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x1339d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1339d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1339d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1339d8: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x1339d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1339dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1339dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1339e0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1339e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339e4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1339e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339e8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1339e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339ec: 0xc04cd00  jal         func_133400
    ctx->pc = 0x1339ECu;
    SET_GPR_U32(ctx, 31, 0x1339F4u);
    ctx->pc = 0x133400u;
    if (runtime->hasFunction(0x133400u)) {
        auto targetFn = runtime->lookupFunction(0x133400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1339F4u; }
        if (ctx->pc != 0x1339F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyFrame__FP8mgCFrameP8mgCFrameP9mgCMemoryiPP8mgCFrame_0x133400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1339F4u; }
        if (ctx->pc != 0x1339F4u) { return; }
    }
    ctx->pc = 0x1339F4u;
label_1339f4:
    // 0x1339f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1339f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1339f8:
    // 0x1339f8: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x1339f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1339fc: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1339FCu;
    {
        const bool branch_taken_0x1339fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1339fc) {
            ctx->pc = 0x1339BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1339bc;
        }
    }
    ctx->pc = 0x133A04u;
    // 0x133a04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x133a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a08: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x133A08u;
    {
        const bool branch_taken_0x133a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a08) {
            ctx->pc = 0x133A74u;
            goto label_133a74;
        }
    }
    ctx->pc = 0x133A10u;
label_133a10:
    // 0x133a10: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x133a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x133a14: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x133a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x133a18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133a1c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x133a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x133a20: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x133A20u;
    {
        const bool branch_taken_0x133a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a20) {
            ctx->pc = 0x133A70u;
            goto label_133a70;
        }
    }
    ctx->pc = 0x133A28u;
    // 0x133a28: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x133a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x133a2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x133a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a30: 0xc04ddd4  jal         func_137750
    ctx->pc = 0x133A30u;
    SET_GPR_U32(ctx, 31, 0x133A38u);
    ctx->pc = 0x137750u;
    if (runtime->hasFunction(0x137750u)) {
        auto targetFn = runtime->lookupFunction(0x137750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A38u; }
        if (ctx->pc != 0x133A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrameID__8mgCFrameFPc_0x137750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A38u; }
        if (ctx->pc != 0x133A38u) { return; }
    }
    ctx->pc = 0x133A38u;
label_133a38:
    // 0x133a38: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x133A38u;
    {
        const bool branch_taken_0x133a38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x133a38) {
            ctx->pc = 0x133A70u;
            goto label_133a70;
        }
    }
    ctx->pc = 0x133A40u;
    // 0x133a40: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x133a40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x133a44: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x133A44u;
    {
        const bool branch_taken_0x133a44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a44) {
            ctx->pc = 0x133A70u;
            goto label_133a70;
        }
    }
    ctx->pc = 0x133A4Cu;
    // 0x133a4c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x133a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x133a50: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x133a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x133a54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x133a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x133a58: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x133a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x133a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x133a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133a60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x133a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x133a64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x133a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133a68: 0xc04dab8  jal         func_136AE0
    ctx->pc = 0x133A68u;
    SET_GPR_U32(ctx, 31, 0x133A70u);
    ctx->pc = 0x136AE0u;
    if (runtime->hasFunction(0x136AE0u)) {
        auto targetFn = runtime->lookupFunction(0x136AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A70u; }
        if (ctx->pc != 0x133A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParent__8mgCFrameFP8mgCFrame_0x136ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A70u; }
        if (ctx->pc != 0x133A70u) { return; }
    }
    ctx->pc = 0x133A70u;
label_133a70:
    // 0x133a70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x133a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_133a74:
    // 0x133a74: 0x0  nop
    ctx->pc = 0x133a74u;
    // NOP
    // 0x133a78: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x133a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x133a7c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x133A7Cu;
    {
        const bool branch_taken_0x133a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133a7c) {
            ctx->pc = 0x133A10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_133a10;
        }
    }
    ctx->pc = 0x133A84u;
    // 0x133a84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x133a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133a88: 0xac500068  sw          $s0, 0x68($v0)
    ctx->pc = 0x133a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 16));
    // 0x133a8c: 0xac540064  sw          $s4, 0x64($v0)
    ctx->pc = 0x133a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 20));
    // 0x133a90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x133a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133a94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x133A94u;
    {
        const bool branch_taken_0x133a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a94) {
            ctx->pc = 0x133AB4u;
            goto label_133ab4;
        }
    }
    ctx->pc = 0x133A9Cu;
label_133a9c:
    // 0x133a9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x133a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133aa0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x133aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133aa4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x133aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133aa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133aac: 0xc04cdd8  jal         func_133760
    ctx->pc = 0x133AACu;
    SET_GPR_U32(ctx, 31, 0x133AB4u);
    ctx->pc = 0x133760u;
    if (runtime->hasFunction(0x133760u)) {
        auto targetFn = runtime->lookupFunction(0x133760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133AB4u; }
        if (ctx->pc != 0x133AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyFrameSub__FP8mgCFrameP9mgCMemoryiPP8mgCFrame_0x133760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133AB4u; }
        if (ctx->pc != 0x133AB4u) { return; }
    }
    ctx->pc = 0x133AB4u;
label_133ab4:
    // 0x133ab4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x133ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133ab8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x133ab8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x133abc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x133abcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x133ac0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x133ac0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133ac4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133ac8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133ac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133ad8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x133ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x133adc: 0x3e00008  jr          $ra
    ctx->pc = 0x133ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133AE4u;
}
