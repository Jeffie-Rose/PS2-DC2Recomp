#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMesWin__6ClsMesFv
// Address: 0x15b2c0 - 0x15bbc8
void DrawMesWin__6ClsMesFv_0x15b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMesWin__6ClsMesFv_0x15b2c0");
#endif

    switch (ctx->pc) {
        case 0x15b2f0u: goto label_15b2f0;
        case 0x15b358u: goto label_15b358;
        case 0x15b360u: goto label_15b360;
        case 0x15b370u: goto label_15b370;
        case 0x15b38cu: goto label_15b38c;
        case 0x15b3d8u: goto label_15b3d8;
        case 0x15b3e4u: goto label_15b3e4;
        case 0x15b3f0u: goto label_15b3f0;
        case 0x15b400u: goto label_15b400;
        case 0x15b484u: goto label_15b484;
        case 0x15b498u: goto label_15b498;
        case 0x15b4acu: goto label_15b4ac;
        case 0x15b4c0u: goto label_15b4c0;
        case 0x15b4c8u: goto label_15b4c8;
        case 0x15b4dcu: goto label_15b4dc;
        case 0x15b4e4u: goto label_15b4e4;
        case 0x15b528u: goto label_15b528;
        case 0x15b538u: goto label_15b538;
        case 0x15b56cu: goto label_15b56c;
        case 0x15b598u: goto label_15b598;
        case 0x15b5b0u: goto label_15b5b0;
        case 0x15b5c4u: goto label_15b5c4;
        case 0x15b5d4u: goto label_15b5d4;
        case 0x15b5e8u: goto label_15b5e8;
        case 0x15b5fcu: goto label_15b5fc;
        case 0x15b60cu: goto label_15b60c;
        case 0x15b620u: goto label_15b620;
        case 0x15b630u: goto label_15b630;
        case 0x15b644u: goto label_15b644;
        case 0x15b650u: goto label_15b650;
        case 0x15b66cu: goto label_15b66c;
        case 0x15b684u: goto label_15b684;
        case 0x15b6d4u: goto label_15b6d4;
        case 0x15b6f4u: goto label_15b6f4;
        case 0x15b704u: goto label_15b704;
        case 0x15b71cu: goto label_15b71c;
        case 0x15b734u: goto label_15b734;
        case 0x15b748u: goto label_15b748;
        case 0x15b758u: goto label_15b758;
        case 0x15b76cu: goto label_15b76c;
        case 0x15b794u: goto label_15b794;
        case 0x15b79cu: goto label_15b79c;
        case 0x15b7c4u: goto label_15b7c4;
        case 0x15b7ccu: goto label_15b7cc;
        case 0x15b85cu: goto label_15b85c;
        case 0x15ba04u: goto label_15ba04;
        case 0x15ba0cu: goto label_15ba0c;
        case 0x15ba34u: goto label_15ba34;
        case 0x15ba3cu: goto label_15ba3c;
        case 0x15ba70u: goto label_15ba70;
        case 0x15ba78u: goto label_15ba78;
        case 0x15ba9cu: goto label_15ba9c;
        case 0x15baa4u: goto label_15baa4;
        case 0x15bb10u: goto label_15bb10;
        case 0x15bb40u: goto label_15bb40;
        case 0x15bb4cu: goto label_15bb4c;
        case 0x15bb58u: goto label_15bb58;
        case 0x15bb7cu: goto label_15bb7c;
        case 0x15bb88u: goto label_15bb88;
        case 0x15bb94u: goto label_15bb94;
        case 0x15bba0u: goto label_15bba0;
        default: break;
    }

    ctx->pc = 0x15b2c0u;

    // 0x15b2c0: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x15b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x15b2c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15b2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15b2c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15b2cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15b2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15b2d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15b2d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b2d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b2dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b2e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b2e4: 0x8c8500b0  lw          $a1, 0xB0($a0)
    ctx->pc = 0x15b2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x15b2e8: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x15B2E8u;
    SET_GPR_U32(ctx, 31, 0x15B2F0u);
    ctx->pc = 0x15B2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2E8u;
            // 0x15b2ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2F0u; }
        if (ctx->pc != 0x15B2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2F0u; }
        if (ctx->pc != 0x15B2F0u) { return; }
    }
    ctx->pc = 0x15B2F0u;
label_15b2f0:
    // 0x15b2f0: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x15b2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x15b2f4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b2f8: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x15b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x15b2fc: 0xa3a2032a  sb          $v0, 0x32A($sp)
    ctx->pc = 0x15b2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 810), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b300: 0xa3a20329  sb          $v0, 0x329($sp)
    ctx->pc = 0x15b300u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 809), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b304: 0xa3a20328  sb          $v0, 0x328($sp)
    ctx->pc = 0x15b304u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 808), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b308: 0x92221800  lbu         $v0, 0x1800($s1)
    ctx->pc = 0x15b308u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b30c: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x15b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x15b310: 0x211fc  dsll32      $v0, $v0, 7
    ctx->pc = 0x15b310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 7));
    // 0x15b314: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B314u;
    {
        const bool branch_taken_0x15b314 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15B318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B314u;
            // 0x15b318: 0x211ff  dsra32      $v0, $v0, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b314) {
            ctx->pc = 0x15B324u;
            goto label_15b324;
        }
    }
    ctx->pc = 0x15B31Cu;
    // 0x15b31c: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x15b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x15b320: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x15b320u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_15b324:
    // 0x15b324: 0xa3a2032b  sb          $v0, 0x32B($sp)
    ctx->pc = 0x15b324u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 811), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b328: 0xa3a00332  sb          $zero, 0x332($sp)
    ctx->pc = 0x15b328u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 818), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b32c: 0xa3a00331  sb          $zero, 0x331($sp)
    ctx->pc = 0x15b32cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 817), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b330: 0xa3a00330  sb          $zero, 0x330($sp)
    ctx->pc = 0x15b330u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 816), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b334: 0x92221800  lbu         $v0, 0x1800($s1)
    ctx->pc = 0x15b334u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b338: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15b338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b33c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B33Cu;
    {
        const bool branch_taken_0x15b33c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15B340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B33Cu;
            // 0x15b340: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b33c) {
            ctx->pc = 0x15B34Cu;
            goto label_15b34c;
        }
    }
    ctx->pc = 0x15B344u;
    // 0x15b344: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x15b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x15b348: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x15b348u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_15b34c:
    // 0x15b34c: 0xa3a20333  sb          $v0, 0x333($sp)
    ctx->pc = 0x15b34cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 819), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b350: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x15B350u;
    SET_GPR_U32(ctx, 31, 0x15B358u);
    ctx->pc = 0x15B354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B350u;
            // 0x15b354: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B358u; }
        if (ctx->pc != 0x15B358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B358u; }
        if (ctx->pc != 0x15B358u) { return; }
    }
    ctx->pc = 0x15B358u;
label_15b358:
    // 0x15b358: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x15B358u;
    SET_GPR_U32(ctx, 31, 0x15B360u);
    ctx->pc = 0x15B35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B358u;
            // 0x15b35c: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B360u; }
        if (ctx->pc != 0x15B360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B360u; }
        if (ctx->pc != 0x15B360u) { return; }
    }
    ctx->pc = 0x15B360u;
label_15b360:
    // 0x15b360: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x15b360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x15b364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b368: 0xc054514  jal         func_151450
    ctx->pc = 0x15B368u;
    SET_GPR_U32(ctx, 31, 0x15B370u);
    ctx->pc = 0x15B36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B368u;
            // 0x15b36c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B370u; }
        if (ctx->pc != 0x15B370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B370u; }
        if (ctx->pc != 0x15B370u) { return; }
    }
    ctx->pc = 0x15B370u;
label_15b370:
    // 0x15b370: 0x8e2417e4  lw          $a0, 0x17E4($s1)
    ctx->pc = 0x15b370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6116)));
    // 0x15b374: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15b374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b378: 0x10830209  beq         $a0, $v1, . + 4 + (0x209 << 2)
    ctx->pc = 0x15B378u;
    {
        const bool branch_taken_0x15b378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15B37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B378u;
            // 0x15b37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b378) {
            ctx->pc = 0x15BBA0u;
            goto label_15bba0;
        }
    }
    ctx->pc = 0x15B380u;
    // 0x15b380: 0x27a50338  addiu       $a1, $sp, 0x338
    ctx->pc = 0x15b380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
    // 0x15b384: 0xc056bfc  jal         func_15AFF0
    ctx->pc = 0x15B384u;
    SET_GPR_U32(ctx, 31, 0x15B38Cu);
    ctx->pc = 0x15B388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B384u;
            // 0x15b388: 0x27a6033c  addiu       $a2, $sp, 0x33C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 828));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AFF0u;
    if (runtime->hasFunction(0x15AFF0u)) {
        auto targetFn = runtime->lookupFunction(0x15AFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B38Cu; }
        if (ctx->pc != 0x15B38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCenteringXY__6ClsMesFPiPi_0x15aff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B38Cu; }
        if (ctx->pc != 0x15B38Cu) { return; }
    }
    ctx->pc = 0x15B38Cu;
label_15b38c:
    // 0x15b38c: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x15b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x15b390: 0x27b302a4  addiu       $s3, $sp, 0x2A4
    ctx->pc = 0x15b390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 676));
    // 0x15b394: 0x8fa30338  lw          $v1, 0x338($sp)
    ctx->pc = 0x15b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x15b398: 0x27b502a8  addiu       $s5, $sp, 0x2A8
    ctx->pc = 0x15b398u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
    // 0x15b39c: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x15b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
    // 0x15b3a0: 0x27b402ac  addiu       $s4, $sp, 0x2AC
    ctx->pc = 0x15b3a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
    // 0x15b3a4: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x15b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x15b3a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b3ac: 0xafa302a0  sw          $v1, 0x2A0($sp)
    ctx->pc = 0x15b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 3));
    // 0x15b3b0: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x15b3b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b3b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15b3bc: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x15b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x15b3c0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x15b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x15b3c4: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x15b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15b3c8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x15b3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x15b3cc: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x15b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b3d0: 0xc056c50  jal         func_15B140
    ctx->pc = 0x15B3D0u;
    SET_GPR_U32(ctx, 31, 0x15B3D8u);
    ctx->pc = 0x15B3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3D0u;
            // 0x15b3d4: 0x27a602b0  addiu       $a2, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B140u;
    if (runtime->hasFunction(0x15B140u)) {
        auto targetFn = runtime->lookupFunction(0x15B140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3D8u; }
        if (ctx->pc != 0x15B3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcWindowOutRectFromInRect__Fi4RECTP4RECT_0x15b140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3D8u; }
        if (ctx->pc != 0x15B3D8u) { return; }
    }
    ctx->pc = 0x15B3D8u;
label_15b3d8:
    // 0x15b3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b3dc: 0xc056c38  jal         func_15B0E0
    ctx->pc = 0x15B3DCu;
    SET_GPR_U32(ctx, 31, 0x15B3E4u);
    ctx->pc = 0x15B3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3DCu;
            // 0x15b3e0: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B0E0u;
    if (runtime->hasFunction(0x15B0E0u)) {
        auto targetFn = runtime->lookupFunction(0x15B0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3E4u; }
        if (ctx->pc != 0x15B3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetOuterRectXYFromFukidashiPos__6ClsMesFP4RECT_0x15b0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3E4u; }
        if (ctx->pc != 0x15B3E4u) { return; }
    }
    ctx->pc = 0x15B3E4u;
label_15b3e4:
    // 0x15b3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b3e8: 0xc056c20  jal         func_15B080
    ctx->pc = 0x15B3E8u;
    SET_GPR_U32(ctx, 31, 0x15B3F0u);
    ctx->pc = 0x15B3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3E8u;
            // 0x15b3ec: 0x27a502b0  addiu       $a1, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B080u;
    if (runtime->hasFunction(0x15B080u)) {
        auto targetFn = runtime->lookupFunction(0x15B080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3F0u; }
        if (ctx->pc != 0x15B3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAbsWinData__6ClsMesFP4RECT_0x15b080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3F0u; }
        if (ctx->pc != 0x15B3F0u) { return; }
    }
    ctx->pc = 0x15B3F0u;
label_15b3f0:
    // 0x15b3f0: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x15b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b3f4: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x15b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15b3f8: 0xc056c80  jal         func_15B200
    ctx->pc = 0x15B3F8u;
    SET_GPR_U32(ctx, 31, 0x15B400u);
    ctx->pc = 0x15B3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3F8u;
            // 0x15b3fc: 0x27a602a0  addiu       $a2, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B200u;
    if (runtime->hasFunction(0x15B200u)) {
        auto targetFn = runtime->lookupFunction(0x15B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B400u; }
        if (ctx->pc != 0x15B400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcWindowInRectFromOutRect__Fi4RECTP4RECT_0x15b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B400u; }
        if (ctx->pc != 0x15B400u) { return; }
    }
    ctx->pc = 0x15B400u;
label_15b400:
    // 0x15b400: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x15b400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x15b404: 0x27b202b4  addiu       $s2, $sp, 0x2B4
    ctx->pc = 0x15b404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
    // 0x15b408: 0x27a502c4  addiu       $a1, $sp, 0x2C4
    ctx->pc = 0x15b408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
    // 0x15b40c: 0x27b602b8  addiu       $s6, $sp, 0x2B8
    ctx->pc = 0x15b40cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
    // 0x15b410: 0x27b002bc  addiu       $s0, $sp, 0x2BC
    ctx->pc = 0x15b410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
    // 0x15b414: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x15b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x15b418: 0xafa302c0  sw          $v1, 0x2C0($sp)
    ctx->pc = 0x15b418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 3));
    // 0x15b41c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b420: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x15b420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x15b424: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15b424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x15b428: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x15b428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x15b42c: 0xafa302c8  sw          $v1, 0x2C8($sp)
    ctx->pc = 0x15b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 3));
    // 0x15b430: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b434: 0xafa302cc  sw          $v1, 0x2CC($sp)
    ctx->pc = 0x15b434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 3));
    // 0x15b438: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x15b438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b43c: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x15b43cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x15b440: 0x10200106  beqz        $at, . + 4 + (0x106 << 2)
    ctx->pc = 0x15B440u;
    {
        const bool branch_taken_0x15b440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B440u;
            // 0x15b444: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b440) {
            ctx->pc = 0x15B85Cu;
            goto label_15b85c;
        }
    }
    ctx->pc = 0x15B448u;
    // 0x15b448: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15b448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15b44c: 0x24842b40  addiu       $a0, $a0, 0x2B40
    ctx->pc = 0x15b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11072));
    // 0x15b450: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15b454: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15b454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15b458: 0x600008  jr          $v1
    ctx->pc = 0x15B458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B460u: goto label_15b460;
            case 0x15B518u: goto label_15b518;
            case 0x15B540u: goto label_15b540;
            case 0x15B5A0u: goto label_15b5a0;
            case 0x15B5F0u: goto label_15b5f0;
            case 0x15B674u: goto label_15b674;
            case 0x15B724u: goto label_15b724;
            case 0x15B774u: goto label_15b774;
            case 0x15B85Cu: goto label_15b85c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B460u;
label_15b460:
    // 0x15b460: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x15b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x15b464: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15b464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b46c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15b46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b470: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15b470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b474: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x15b474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
    // 0x15b478: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x15b478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x15b47c: 0xc054798  jal         func_151E60
    ctx->pc = 0x15B47Cu;
    SET_GPR_U32(ctx, 31, 0x15B484u);
    ctx->pc = 0x15B480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B47Cu;
            // 0x15b480: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151E60u;
    if (runtime->hasFunction(0x151E60u)) {
        auto targetFn = runtime->lookupFunction(0x151E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B484u; }
        if (ctx->pc != 0x15B484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFukidashi__6ClsMesFiii_0x151e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B484u; }
        if (ctx->pc != 0x15B484u) { return; }
    }
    ctx->pc = 0x15B484u;
label_15b484:
    // 0x15b484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b48c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15b48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b490: 0xc054798  jal         func_151E60
    ctx->pc = 0x15B490u;
    SET_GPR_U32(ctx, 31, 0x15B498u);
    ctx->pc = 0x15B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B490u;
            // 0x15b494: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151E60u;
    if (runtime->hasFunction(0x151E60u)) {
        auto targetFn = runtime->lookupFunction(0x151E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B498u; }
        if (ctx->pc != 0x15B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFukidashi__6ClsMesFiii_0x151e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B498u; }
        if (ctx->pc != 0x15B498u) { return; }
    }
    ctx->pc = 0x15B498u;
label_15b498:
    // 0x15b498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15b498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15b4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b4a4: 0xc054798  jal         func_151E60
    ctx->pc = 0x15B4A4u;
    SET_GPR_U32(ctx, 31, 0x15B4ACu);
    ctx->pc = 0x15B4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4A4u;
            // 0x15b4a8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151E60u;
    if (runtime->hasFunction(0x151E60u)) {
        auto targetFn = runtime->lookupFunction(0x151E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4ACu; }
        if (ctx->pc != 0x15B4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFukidashi__6ClsMesFiii_0x151e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4ACu; }
        if (ctx->pc != 0x15B4ACu) { return; }
    }
    ctx->pc = 0x15B4ACu;
label_15b4ac:
    // 0x15b4ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15b4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4b8: 0xc054798  jal         func_151E60
    ctx->pc = 0x15B4B8u;
    SET_GPR_U32(ctx, 31, 0x15B4C0u);
    ctx->pc = 0x15B4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4B8u;
            // 0x15b4bc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151E60u;
    if (runtime->hasFunction(0x151E60u)) {
        auto targetFn = runtime->lookupFunction(0x151E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4C0u; }
        if (ctx->pc != 0x15B4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFukidashi__6ClsMesFiii_0x151e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4C0u; }
        if (ctx->pc != 0x15B4C0u) { return; }
    }
    ctx->pc = 0x15B4C0u;
label_15b4c0:
    // 0x15b4c0: 0xc05644c  jal         func_159130
    ctx->pc = 0x15B4C0u;
    SET_GPR_U32(ctx, 31, 0x15B4C8u);
    ctx->pc = 0x15B4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4C0u;
            // 0x15b4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159130u;
    if (runtime->hasFunction(0x159130u)) {
        auto targetFn = runtime->lookupFunction(0x159130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4C8u; }
        if (ctx->pc != 0x15B4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFukidashiShadow__6ClsMesFv_0x159130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4C8u; }
        if (ctx->pc != 0x15B4C8u) { return; }
    }
    ctx->pc = 0x15B4C8u;
label_15b4c8:
    // 0x15b4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b4d4: 0xc054798  jal         func_151E60
    ctx->pc = 0x15B4D4u;
    SET_GPR_U32(ctx, 31, 0x15B4DCu);
    ctx->pc = 0x15B4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4D4u;
            // 0x15b4d8: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151E60u;
    if (runtime->hasFunction(0x151E60u)) {
        auto targetFn = runtime->lookupFunction(0x151E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4DCu; }
        if (ctx->pc != 0x15B4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFukidashi__6ClsMesFiii_0x151e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4DCu; }
        if (ctx->pc != 0x15B4DCu) { return; }
    }
    ctx->pc = 0x15B4DCu;
label_15b4dc:
    // 0x15b4dc: 0xc054914  jal         func_152450
    ctx->pc = 0x15B4DCu;
    SET_GPR_U32(ctx, 31, 0x15B4E4u);
    ctx->pc = 0x15B4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4DCu;
            // 0x15b4e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152450u;
    if (runtime->hasFunction(0x152450u)) {
        auto targetFn = runtime->lookupFunction(0x152450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4E4u; }
        if (ctx->pc != 0x15B4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMesWinXYFromFukidashiXY__6ClsMesFv_0x152450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4E4u; }
        if (ctx->pc != 0x15B4E4u) { return; }
    }
    ctx->pc = 0x15B4E4u;
label_15b4e4:
    // 0x15b4e4: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x15b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x15b4e8: 0x8fa40338  lw          $a0, 0x338($sp)
    ctx->pc = 0x15b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x15b4ec: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x15b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
    // 0x15b4f0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15b4f4: 0xafa402a0  sw          $a0, 0x2A0($sp)
    ctx->pc = 0x15b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 4));
    // 0x15b4f8: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x15b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x15b4fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b500: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x15b500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x15b504: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x15b508: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x15b508u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x15b50c: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x15b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15b510: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x15B510u;
    {
        const bool branch_taken_0x15b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B510u;
            // 0x15b514: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b510) {
            ctx->pc = 0x15B85Cu;
            goto label_15b85c;
        }
    }
    ctx->pc = 0x15B518u;
label_15b518:
    // 0x15b518: 0xc62c0188  lwc1        $f12, 0x188($s1)
    ctx->pc = 0x15b518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b51c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x15b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15b520: 0xc0564c4  jal         func_159310
    ctx->pc = 0x15B520u;
    SET_GPR_U32(ctx, 31, 0x15B528u);
    ctx->pc = 0x15B524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B520u;
            // 0x15b524: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159310u;
    if (runtime->hasFunction(0x159310u)) {
        auto targetFn = runtime->lookupFunction(0x159310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B528u; }
        if (ctx->pc != 0x15B528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcRectScale__F4RECTfP4RECT_0x159310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B528u; }
        if (ctx->pc != 0x15B528u) { return; }
    }
    ctx->pc = 0x15B528u;
label_15b528:
    // 0x15b528: 0x92261800  lbu         $a2, 0x1800($s1)
    ctx->pc = 0x15b528u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b52c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x15b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x15b530: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x15B530u;
    SET_GPR_U32(ctx, 31, 0x15B538u);
    ctx->pc = 0x15B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B530u;
            // 0x15b534: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (runtime->hasFunction(0x2D67F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D67F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B538u; }
        if (ctx->pc != 0x15B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MyMenuHelpWinDraw__FP11mgCDrawPrim4RECTi_0x2d67f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B538u; }
        if (ctx->pc != 0x15B538u) { return; }
    }
    ctx->pc = 0x15B538u;
label_15b538:
    // 0x15b538: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x15B538u;
    {
        const bool branch_taken_0x15b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B538u;
            // 0x15b53c: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b538) {
            ctx->pc = 0x15B860u;
            goto label_15b860;
        }
    }
    ctx->pc = 0x15B540u;
label_15b540:
    // 0x15b540: 0x8fa702c0  lw          $a3, 0x2C0($sp)
    ctx->pc = 0x15b540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x15b544: 0x27a80330  addiu       $t0, $sp, 0x330
    ctx->pc = 0x15b544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x15b548: 0x8e2601a8  lw          $a2, 0x1A8($s1)
    ctx->pc = 0x15b548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x15b54c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b550: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15b554: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x15b554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b558: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x15b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x15b55c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b560: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x15b560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x15b564: 0xc0b5ad8  jal         func_2D6B60
    ctx->pc = 0x15B564u;
    SET_GPR_U32(ctx, 31, 0x15B56Cu);
    ctx->pc = 0x15B568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B564u;
            // 0x15b568: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B60u;
    if (runtime->hasFunction(0x2D6B60u)) {
        auto targetFn = runtime->lookupFunction(0x2D6B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B56Cu; }
        if (ctx->pc != 0x15B56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MyMenuFloatingWinDraw__FP11mgCDrawPrim4RECTiiP10RGBAQ_TYPEP10RGBAQ_TYPE_0x2d6b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B56Cu; }
        if (ctx->pc != 0x15B56Cu) { return; }
    }
    ctx->pc = 0x15B56Cu;
label_15b56c:
    // 0x15b56c: 0x8fa702b0  lw          $a3, 0x2B0($sp)
    ctx->pc = 0x15b56cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x15b570: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b574: 0x8e2601a8  lw          $a2, 0x1A8($s1)
    ctx->pc = 0x15b574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x15b578: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x15b578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15b57c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b580: 0x27a80328  addiu       $t0, $sp, 0x328
    ctx->pc = 0x15b580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
    // 0x15b584: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x15b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x15b588: 0x262901b0  addiu       $t1, $s1, 0x1B0
    ctx->pc = 0x15b588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x15b58c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b590: 0xc0b5ad8  jal         func_2D6B60
    ctx->pc = 0x15B590u;
    SET_GPR_U32(ctx, 31, 0x15B598u);
    ctx->pc = 0x15B594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B590u;
            // 0x15b594: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6B60u;
    if (runtime->hasFunction(0x2D6B60u)) {
        auto targetFn = runtime->lookupFunction(0x2D6B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B598u; }
        if (ctx->pc != 0x15B598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MyMenuFloatingWinDraw__FP11mgCDrawPrim4RECTiiP10RGBAQ_TYPEP10RGBAQ_TYPE_0x2d6b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B598u; }
        if (ctx->pc != 0x15B598u) { return; }
    }
    ctx->pc = 0x15B598u;
label_15b598:
    // 0x15b598: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x15B598u;
    {
        const bool branch_taken_0x15b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b598) {
            ctx->pc = 0x15B85Cu;
            goto label_15b85c;
        }
    }
    ctx->pc = 0x15B5A0u;
label_15b5a0:
    // 0x15b5a0: 0xc62c0188  lwc1        $f12, 0x188($s1)
    ctx->pc = 0x15b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b5a4: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x15b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x15b5a8: 0xc0564c4  jal         func_159310
    ctx->pc = 0x15B5A8u;
    SET_GPR_U32(ctx, 31, 0x15B5B0u);
    ctx->pc = 0x15B5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5A8u;
            // 0x15b5ac: 0x27a502e0  addiu       $a1, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159310u;
    if (runtime->hasFunction(0x159310u)) {
        auto targetFn = runtime->lookupFunction(0x159310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5B0u; }
        if (ctx->pc != 0x15B5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcRectScale__F4RECTfP4RECT_0x159310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5B0u; }
        if (ctx->pc != 0x15B5B0u) { return; }
    }
    ctx->pc = 0x15B5B0u;
label_15b5b0:
    // 0x15b5b0: 0x92271800  lbu         $a3, 0x1800($s1)
    ctx->pc = 0x15b5b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b5b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b5b8: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x15b5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x15b5bc: 0xc0b5d0c  jal         func_2D7430
    ctx->pc = 0x15B5BCu;
    SET_GPR_U32(ctx, 31, 0x15B5C4u);
    ctx->pc = 0x15B5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5BCu;
            // 0x15b5c0: 0x27a60330  addiu       $a2, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7430u;
    if (runtime->hasFunction(0x2D7430u)) {
        auto targetFn = runtime->lookupFunction(0x2D7430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5C4u; }
        if (ctx->pc != 0x15B5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_1__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5C4u; }
        if (ctx->pc != 0x15B5C4u) { return; }
    }
    ctx->pc = 0x15B5C4u;
label_15b5c4:
    // 0x15b5c4: 0xc62c0188  lwc1        $f12, 0x188($s1)
    ctx->pc = 0x15b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b5c8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x15b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15b5cc: 0xc0564c4  jal         func_159310
    ctx->pc = 0x15B5CCu;
    SET_GPR_U32(ctx, 31, 0x15B5D4u);
    ctx->pc = 0x15B5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5CCu;
            // 0x15b5d0: 0x27a502e0  addiu       $a1, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159310u;
    if (runtime->hasFunction(0x159310u)) {
        auto targetFn = runtime->lookupFunction(0x159310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5D4u; }
        if (ctx->pc != 0x15B5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcRectScale__F4RECTfP4RECT_0x159310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5D4u; }
        if (ctx->pc != 0x15B5D4u) { return; }
    }
    ctx->pc = 0x15B5D4u;
label_15b5d4:
    // 0x15b5d4: 0x92271800  lbu         $a3, 0x1800($s1)
    ctx->pc = 0x15b5d4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b5d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b5dc: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x15b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x15b5e0: 0xc0b5d0c  jal         func_2D7430
    ctx->pc = 0x15B5E0u;
    SET_GPR_U32(ctx, 31, 0x15B5E8u);
    ctx->pc = 0x15B5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5E0u;
            // 0x15b5e4: 0x27a60328  addiu       $a2, $sp, 0x328 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7430u;
    if (runtime->hasFunction(0x2D7430u)) {
        auto targetFn = runtime->lookupFunction(0x2D7430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5E8u; }
        if (ctx->pc != 0x15B5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_1__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5E8u; }
        if (ctx->pc != 0x15B5E8u) { return; }
    }
    ctx->pc = 0x15B5E8u;
label_15b5e8:
    // 0x15b5e8: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x15B5E8u;
    {
        const bool branch_taken_0x15b5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b5e8) {
            ctx->pc = 0x15B85Cu;
            goto label_15b85c;
        }
    }
    ctx->pc = 0x15B5F0u;
label_15b5f0:
    // 0x15b5f0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x15b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15b5f4: 0xc0b5868  jal         func_2D61A0
    ctx->pc = 0x15B5F4u;
    SET_GPR_U32(ctx, 31, 0x15B5FCu);
    ctx->pc = 0x15B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5F4u;
            // 0x15b5f8: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D61A0u;
    if (runtime->hasFunction(0x2D61A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D61A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5FCu; }
        if (ctx->pc != 0x15B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OffsetYesNoWin__FP4RECTP4RECT_0x2d61a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5FCu; }
        if (ctx->pc != 0x15B5FCu) { return; }
    }
    ctx->pc = 0x15B5FCu;
label_15b5fc:
    // 0x15b5fc: 0xc62c0188  lwc1        $f12, 0x188($s1)
    ctx->pc = 0x15b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b600: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x15b600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x15b604: 0xc0564c4  jal         func_159310
    ctx->pc = 0x15B604u;
    SET_GPR_U32(ctx, 31, 0x15B60Cu);
    ctx->pc = 0x15B608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B604u;
            // 0x15b608: 0x27a502f0  addiu       $a1, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159310u;
    if (runtime->hasFunction(0x159310u)) {
        auto targetFn = runtime->lookupFunction(0x159310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B60Cu; }
        if (ctx->pc != 0x15B60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcRectScale__F4RECTfP4RECT_0x159310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B60Cu; }
        if (ctx->pc != 0x15B60Cu) { return; }
    }
    ctx->pc = 0x15B60Cu;
label_15b60c:
    // 0x15b60c: 0x92271800  lbu         $a3, 0x1800($s1)
    ctx->pc = 0x15b60cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b610: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b614: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x15b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x15b618: 0xc0b5870  jal         func_2D61C0
    ctx->pc = 0x15B618u;
    SET_GPR_U32(ctx, 31, 0x15B620u);
    ctx->pc = 0x15B61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B618u;
            // 0x15b61c: 0x27a60330  addiu       $a2, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D61C0u;
    if (runtime->hasFunction(0x2D61C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D61C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B620u; }
        if (ctx->pc != 0x15B620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_yesno__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d61c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B620u; }
        if (ctx->pc != 0x15B620u) { return; }
    }
    ctx->pc = 0x15B620u;
label_15b620:
    // 0x15b620: 0xc62c0188  lwc1        $f12, 0x188($s1)
    ctx->pc = 0x15b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b624: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15b628: 0xc0564c4  jal         func_159310
    ctx->pc = 0x15B628u;
    SET_GPR_U32(ctx, 31, 0x15B630u);
    ctx->pc = 0x15B62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B628u;
            // 0x15b62c: 0x27a502f0  addiu       $a1, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159310u;
    if (runtime->hasFunction(0x159310u)) {
        auto targetFn = runtime->lookupFunction(0x159310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B630u; }
        if (ctx->pc != 0x15B630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcRectScale__F4RECTfP4RECT_0x159310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B630u; }
        if (ctx->pc != 0x15B630u) { return; }
    }
    ctx->pc = 0x15B630u;
label_15b630:
    // 0x15b630: 0x92271800  lbu         $a3, 0x1800($s1)
    ctx->pc = 0x15b630u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b634: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b638: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x15b638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x15b63c: 0xc0b5870  jal         func_2D61C0
    ctx->pc = 0x15B63Cu;
    SET_GPR_U32(ctx, 31, 0x15B644u);
    ctx->pc = 0x15B640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B63Cu;
            // 0x15b640: 0x27a60328  addiu       $a2, $sp, 0x328 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D61C0u;
    if (runtime->hasFunction(0x2D61C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D61C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B644u; }
        if (ctx->pc != 0x15B644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_yesno__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d61c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B644u; }
        if (ctx->pc != 0x15B644u) { return; }
    }
    ctx->pc = 0x15B644u;
label_15b644:
    // 0x15b644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b648: 0xc056504  jal         func_159410
    ctx->pc = 0x15B648u;
    SET_GPR_U32(ctx, 31, 0x15B650u);
    ctx->pc = 0x15B64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B648u;
            // 0x15b64c: 0x27a502f0  addiu       $a1, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159410u;
    if (runtime->hasFunction(0x159410u)) {
        auto targetFn = runtime->lookupFunction(0x159410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B650u; }
        if (ctx->pc != 0x15B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSelectCursorPos__6ClsMesF4RECT_0x159410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B650u; }
        if (ctx->pc != 0x15B650u) { return; }
    }
    ctx->pc = 0x15B650u;
label_15b650:
    // 0x15b650: 0x8e251b04  lw          $a1, 0x1B04($s1)
    ctx->pc = 0x15b650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6916)));
    // 0x15b654: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b658: 0x8e261b08  lw          $a2, 0x1B08($s1)
    ctx->pc = 0x15b658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6920)));
    // 0x15b65c: 0x8e271b0c  lw          $a3, 0x1B0C($s1)
    ctx->pc = 0x15b65cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6924)));
    // 0x15b660: 0x8e281b10  lw          $t0, 0x1B10($s1)
    ctx->pc = 0x15b660u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6928)));
    // 0x15b664: 0xc056518  jal         func_159460
    ctx->pc = 0x15B664u;
    SET_GPR_U32(ctx, 31, 0x15B66Cu);
    ctx->pc = 0x15B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B664u;
            // 0x15b668: 0x27a90328  addiu       $t1, $sp, 0x328 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159460u;
    if (runtime->hasFunction(0x159460u)) {
        auto targetFn = runtime->lookupFunction(0x159460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B66Cu; }
        if (ctx->pc != 0x15B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawYesNo__FP11mgCDrawPrimiiiiP10RGBAQ_TYPE_0x159460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B66Cu; }
        if (ctx->pc != 0x15B66Cu) { return; }
    }
    ctx->pc = 0x15B66Cu;
label_15b66c:
    // 0x15b66c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x15B66Cu;
    {
        const bool branch_taken_0x15b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b66c) {
            ctx->pc = 0x15B85Cu;
            goto label_15b85c;
        }
    }
    ctx->pc = 0x15B674u;
label_15b674:
    // 0x15b674: 0xc62c0188  lwc1        $f12, 0x188($s1)
    ctx->pc = 0x15b674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b678: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x15b678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x15b67c: 0xc0564c4  jal         func_159310
    ctx->pc = 0x15B67Cu;
    SET_GPR_U32(ctx, 31, 0x15B684u);
    ctx->pc = 0x15B680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B67Cu;
            // 0x15b680: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159310u;
    if (runtime->hasFunction(0x159310u)) {
        auto targetFn = runtime->lookupFunction(0x159310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B684u; }
        if (ctx->pc != 0x15B684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcRectScale__F4RECTfP4RECT_0x159310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B684u; }
        if (ctx->pc != 0x15B684u) { return; }
    }
    ctx->pc = 0x15B684u;
label_15b684:
    // 0x15b684: 0x8e2700c4  lw          $a3, 0xC4($s1)
    ctx->pc = 0x15b684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x15b688: 0x8e261b14  lw          $a2, 0x1B14($s1)
    ctx->pc = 0x15b688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6932)));
    // 0x15b68c: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x15b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
    // 0x15b690: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x15b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b694: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x15b694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15b698: 0x2a843  sra         $s5, $v0, 1
    ctx->pc = 0x15b698u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15b69c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15b6a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B6A0u;
    {
        const bool branch_taken_0x15b6a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15B6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6A0u;
            // 0x15b6a4: 0x24630007  addiu       $v1, $v1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b6a0) {
            ctx->pc = 0x15B6B0u;
            goto label_15b6b0;
        }
    }
    ctx->pc = 0x15B6A8u;
    // 0x15b6a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b6ac: 0x2a843  sra         $s5, $v0, 1
    ctx->pc = 0x15b6acu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 1));
label_15b6b0:
    // 0x15b6b0: 0x8fb40304  lw          $s4, 0x304($sp)
    ctx->pc = 0x15b6b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x15b6b4: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x15b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b6b8: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x15b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x15b6bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x15b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b6c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b6c4: 0x0  nop
    ctx->pc = 0x15b6c4u;
    // NOP
    // 0x15b6c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15b6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15b6cc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15B6CCu;
    SET_GPR_U32(ctx, 31, 0x15B6D4u);
    ctx->pc = 0x15B6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6CCu;
            // 0x15b6d0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6D4u; }
        if (ctx->pc != 0x15B6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6D4u; }
        if (ctx->pc != 0x15B6D4u) { return; }
    }
    ctx->pc = 0x15B6D4u;
label_15b6d4:
    // 0x15b6d4: 0x92281800  lbu         $t0, 0x1800($s1)
    ctx->pc = 0x15b6d4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b6d8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15b6dc: 0x2a2a021  addu        $s4, $s5, $v0
    ctx->pc = 0x15b6dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15b6e0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b6e4: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x15b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x15b6e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15b6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6ec: 0xc0b5e08  jal         func_2D7820
    ctx->pc = 0x15B6ECu;
    SET_GPR_U32(ctx, 31, 0x15B6F4u);
    ctx->pc = 0x15B6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6ECu;
            // 0x15b6f0: 0x27a70330  addiu       $a3, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7820u;
    if (runtime->hasFunction(0x2D7820u)) {
        auto targetFn = runtime->lookupFunction(0x2D7820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6F4u; }
        if (ctx->pc != 0x15B6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_3__FP11mgCDrawPrim4RECTiP10RGBAQ_TYPEi_0x2d7820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6F4u; }
        if (ctx->pc != 0x15B6F4u) { return; }
    }
    ctx->pc = 0x15B6F4u;
label_15b6f4:
    // 0x15b6f4: 0xc62c0188  lwc1        $f12, 0x188($s1)
    ctx->pc = 0x15b6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b6f8: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x15b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15b6fc: 0xc0564c4  jal         func_159310
    ctx->pc = 0x15B6FCu;
    SET_GPR_U32(ctx, 31, 0x15B704u);
    ctx->pc = 0x15B700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6FCu;
            // 0x15b700: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159310u;
    if (runtime->hasFunction(0x159310u)) {
        auto targetFn = runtime->lookupFunction(0x159310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B704u; }
        if (ctx->pc != 0x15B704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcRectScale__F4RECTfP4RECT_0x159310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B704u; }
        if (ctx->pc != 0x15B704u) { return; }
    }
    ctx->pc = 0x15B704u;
label_15b704:
    // 0x15b704: 0x92281800  lbu         $t0, 0x1800($s1)
    ctx->pc = 0x15b704u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b708: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15b708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b70c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b710: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x15b710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x15b714: 0xc0b5e08  jal         func_2D7820
    ctx->pc = 0x15B714u;
    SET_GPR_U32(ctx, 31, 0x15B71Cu);
    ctx->pc = 0x15B718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B714u;
            // 0x15b718: 0x27a70328  addiu       $a3, $sp, 0x328 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7820u;
    if (runtime->hasFunction(0x2D7820u)) {
        auto targetFn = runtime->lookupFunction(0x2D7820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B71Cu; }
        if (ctx->pc != 0x15B71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_3__FP11mgCDrawPrim4RECTiP10RGBAQ_TYPEi_0x2d7820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B71Cu; }
        if (ctx->pc != 0x15B71Cu) { return; }
    }
    ctx->pc = 0x15B71Cu;
label_15b71c:
    // 0x15b71c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x15B71Cu;
    {
        const bool branch_taken_0x15b71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b71c) {
            ctx->pc = 0x15B85Cu;
            goto label_15b85c;
        }
    }
    ctx->pc = 0x15B724u;
label_15b724:
    // 0x15b724: 0xc62c0188  lwc1        $f12, 0x188($s1)
    ctx->pc = 0x15b724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b728: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x15b728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x15b72c: 0xc0564c4  jal         func_159310
    ctx->pc = 0x15B72Cu;
    SET_GPR_U32(ctx, 31, 0x15B734u);
    ctx->pc = 0x15B730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B72Cu;
            // 0x15b730: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159310u;
    if (runtime->hasFunction(0x159310u)) {
        auto targetFn = runtime->lookupFunction(0x159310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B734u; }
        if (ctx->pc != 0x15B734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcRectScale__F4RECTfP4RECT_0x159310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B734u; }
        if (ctx->pc != 0x15B734u) { return; }
    }
    ctx->pc = 0x15B734u;
label_15b734:
    // 0x15b734: 0x92271800  lbu         $a3, 0x1800($s1)
    ctx->pc = 0x15b734u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b738: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b73c: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x15b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x15b740: 0xc0b5f98  jal         func_2D7E60
    ctx->pc = 0x15B740u;
    SET_GPR_U32(ctx, 31, 0x15B748u);
    ctx->pc = 0x15B744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B740u;
            // 0x15b744: 0x27a60330  addiu       $a2, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7E60u;
    if (runtime->hasFunction(0x2D7E60u)) {
        auto targetFn = runtime->lookupFunction(0x2D7E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B748u; }
        if (ctx->pc != 0x15B748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_4__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B748u; }
        if (ctx->pc != 0x15B748u) { return; }
    }
    ctx->pc = 0x15B748u;
label_15b748:
    // 0x15b748: 0xc62c0188  lwc1        $f12, 0x188($s1)
    ctx->pc = 0x15b748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b74c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x15b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15b750: 0xc0564c4  jal         func_159310
    ctx->pc = 0x15B750u;
    SET_GPR_U32(ctx, 31, 0x15B758u);
    ctx->pc = 0x15B754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B750u;
            // 0x15b754: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159310u;
    if (runtime->hasFunction(0x159310u)) {
        auto targetFn = runtime->lookupFunction(0x159310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B758u; }
        if (ctx->pc != 0x15B758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcRectScale__F4RECTfP4RECT_0x159310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B758u; }
        if (ctx->pc != 0x15B758u) { return; }
    }
    ctx->pc = 0x15B758u;
label_15b758:
    // 0x15b758: 0x92271800  lbu         $a3, 0x1800($s1)
    ctx->pc = 0x15b758u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6144)));
    // 0x15b75c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b760: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x15b760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x15b764: 0xc0b5f98  jal         func_2D7E60
    ctx->pc = 0x15B764u;
    SET_GPR_U32(ctx, 31, 0x15B76Cu);
    ctx->pc = 0x15B768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B764u;
            // 0x15b768: 0x27a60328  addiu       $a2, $sp, 0x328 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7E60u;
    if (runtime->hasFunction(0x2D7E60u)) {
        auto targetFn = runtime->lookupFunction(0x2D7E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B76Cu; }
        if (ctx->pc != 0x15B76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_4__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B76Cu; }
        if (ctx->pc != 0x15B76Cu) { return; }
    }
    ctx->pc = 0x15B76Cu;
label_15b76c:
    // 0x15b76c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x15B76Cu;
    {
        const bool branch_taken_0x15b76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b76c) {
            ctx->pc = 0x15B85Cu;
            goto label_15b85c;
        }
    }
    ctx->pc = 0x15B774u;
label_15b774:
    // 0x15b774: 0xc62000d8  lwc1        $f0, 0xD8($s1)
    ctx->pc = 0x15b774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b778: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x15b778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x15b77c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x15b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x15b780: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15b780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b784: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x15b784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x15b788: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15b788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15b78c: 0xc0565b8  jal         func_1596E0
    ctx->pc = 0x15B78Cu;
    SET_GPR_U32(ctx, 31, 0x15B794u);
    ctx->pc = 0x15B790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B78Cu;
            // 0x15b790: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1596E0u;
    if (runtime->hasFunction(0x1596E0u)) {
        auto targetFn = runtime->lookupFunction(0x1596E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B794u; }
        if (ctx->pc != 0x15B794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcAutoPosSet__Fffff_0x1596e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B794u; }
        if (ctx->pc != 0x15B794u) { return; }
    }
    ctx->pc = 0x15B794u;
label_15b794:
    // 0x15b794: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15B794u;
    SET_GPR_U32(ctx, 31, 0x15B79Cu);
    ctx->pc = 0x15B798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B794u;
            // 0x15b798: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B79Cu; }
        if (ctx->pc != 0x15B79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B79Cu; }
        if (ctx->pc != 0x15B79Cu) { return; }
    }
    ctx->pc = 0x15B79Cu;
label_15b79c:
    // 0x15b79c: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x15b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x15b7a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15b7a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b7a4: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x15b7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b7a8: 0x3c0243d0  lui         $v0, 0x43D0
    ctx->pc = 0x15b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17360 << 16));
    // 0x15b7ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15b7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15b7b0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x15b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x15b7b4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x15b7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x15b7b8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x15b7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x15b7bc: 0xc0565b8  jal         func_1596E0
    ctx->pc = 0x15B7BCu;
    SET_GPR_U32(ctx, 31, 0x15B7C4u);
    ctx->pc = 0x15B7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B7BCu;
            // 0x15b7c0: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1596E0u;
    if (runtime->hasFunction(0x1596E0u)) {
        auto targetFn = runtime->lookupFunction(0x1596E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B7C4u; }
        if (ctx->pc != 0x15B7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcAutoPosSet__Fffff_0x1596e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B7C4u; }
        if (ctx->pc != 0x15B7C4u) { return; }
    }
    ctx->pc = 0x15B7C4u;
label_15b7c4:
    // 0x15b7c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15B7C4u;
    SET_GPR_U32(ctx, 31, 0x15B7CCu);
    ctx->pc = 0x15B7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B7C4u;
            // 0x15b7c8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B7CCu; }
        if (ctx->pc != 0x15B7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B7CCu; }
        if (ctx->pc != 0x15B7CCu) { return; }
    }
    ctx->pc = 0x15B7CCu;
label_15b7cc:
    // 0x15b7cc: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x15b7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
    // 0x15b7d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b7d4: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x15b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x15b7d8: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x15b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x15b7dc: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x15b7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x15b7e0: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x15b7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x15b7e4: 0x27a80328  addiu       $t0, $sp, 0x328
    ctx->pc = 0x15b7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
    // 0x15b7e8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x15b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x15b7ec: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x15b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15b7f0: 0xafa302b0  sw          $v1, 0x2B0($sp)
    ctx->pc = 0x15b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 3));
    // 0x15b7f4: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x15b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x15b7f8: 0x2463fff3  addiu       $v1, $v1, -0xD
    ctx->pc = 0x15b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x15b7fc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15b800: 0x8e2700c0  lw          $a3, 0xC0($s1)
    ctx->pc = 0x15b800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x15b804: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x15b804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x15b808: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x15b808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x15b80c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15b810: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15b810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15b814: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x15b814u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x15b818: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x15b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15b81c: 0x2463001a  addiu       $v1, $v1, 0x1A
    ctx->pc = 0x15b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26));
    // 0x15b820: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15b820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x15b824: 0x8e260154  lw          $a2, 0x154($s1)
    ctx->pc = 0x15b824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x15b828: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x15b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x15b82c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x15b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15b830: 0xae2301a8  sw          $v1, 0x1A8($s1)
    ctx->pc = 0x15b830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 3));
    // 0x15b834: 0xae2201ac  sw          $v0, 0x1AC($s1)
    ctx->pc = 0x15b834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
    // 0x15b838: 0x8fa702b0  lw          $a3, 0x2B0($sp)
    ctx->pc = 0x15b838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x15b83c: 0x8e2601a8  lw          $a2, 0x1A8($s1)
    ctx->pc = 0x15b83cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x15b840: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b844: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x15b844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x15b848: 0x8e290150  lw          $t1, 0x150($s1)
    ctx->pc = 0x15b848u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x15b84c: 0x8e2a0130  lw          $t2, 0x130($s1)
    ctx->pc = 0x15b84cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b850: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b854: 0xc0b6094  jal         func_2D8250
    ctx->pc = 0x15B854u;
    SET_GPR_U32(ctx, 31, 0x15B85Cu);
    ctx->pc = 0x15B858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B854u;
            // 0x15b858: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8250u;
    if (runtime->hasFunction(0x2D8250u)) {
        auto targetFn = runtime->lookupFunction(0x2D8250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B85Cu; }
        if (ctx->pc != 0x15B85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDQFukidashi__FP11mgCDrawPrim4RECTiiP10RGBAQ_TYPEii_0x2d8250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B85Cu; }
        if (ctx->pc != 0x15B85Cu) { return; }
    }
    ctx->pc = 0x15B85Cu;
label_15b85c:
    // 0x15b85c: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x15b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_15b860:
    // 0x15b860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b864: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15B864u;
    {
        const bool branch_taken_0x15b864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15b864) {
            ctx->pc = 0x15B898u;
            goto label_15b898;
        }
    }
    ctx->pc = 0x15B86Cu;
    // 0x15b86c: 0x8e23018c  lw          $v1, 0x18C($s1)
    ctx->pc = 0x15b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x15b870: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15B870u;
    {
        const bool branch_taken_0x15b870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b870) {
            ctx->pc = 0x15B898u;
            goto label_15b898;
        }
    }
    ctx->pc = 0x15B878u;
    // 0x15b878: 0xc6210188  lwc1        $f1, 0x188($s1)
    ctx->pc = 0x15b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b87c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15b880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b884: 0x0  nop
    ctx->pc = 0x15b884u;
    // NOP
    // 0x15b888: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15b888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b88c: 0x0  nop
    ctx->pc = 0x15b88cu;
    // NOP
    // 0x15b890: 0x450100c3  bc1t        . + 4 + (0xC3 << 2)
    ctx->pc = 0x15B890u;
    {
        const bool branch_taken_0x15b890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b890) {
            ctx->pc = 0x15BBA0u;
            goto label_15bba0;
        }
    }
    ctx->pc = 0x15B898u;
label_15b898:
    // 0x15b898: 0x8e2217dc  lw          $v0, 0x17DC($s1)
    ctx->pc = 0x15b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6108)));
    // 0x15b89c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b8a0: 0xae2217dc  sw          $v0, 0x17DC($s1)
    ctx->pc = 0x15b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6108), GPR_U32(ctx, 2));
    // 0x15b8a4: 0x8e240190  lw          $a0, 0x190($s1)
    ctx->pc = 0x15b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x15b8a8: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x15b8a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x15b8ac: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x15B8ACu;
    {
        const bool branch_taken_0x15b8ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b8ac) {
            ctx->pc = 0x15B8F4u;
            goto label_15b8f4;
        }
    }
    ctx->pc = 0x15B8B4u;
    // 0x15b8b4: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x15b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x15b8b8: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15b8b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x15b8bc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B8BCu;
    {
        const bool branch_taken_0x15b8bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b8bc) {
            ctx->pc = 0x15B8D0u;
            goto label_15b8d0;
        }
    }
    ctx->pc = 0x15B8C4u;
    // 0x15b8c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15b8c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15B8C8u;
    {
        const bool branch_taken_0x15b8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B8C8u;
            // 0x15b8cc: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8c8) {
            ctx->pc = 0x15B934u;
            goto label_15b934;
        }
    }
    ctx->pc = 0x15B8D0u;
label_15b8d0:
    // 0x15b8d0: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x15b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b8d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15b8d8: 0x24424690  addiu       $v0, $v0, 0x4690
    ctx->pc = 0x15b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18064));
    // 0x15b8dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15b8e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b8e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b8e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15b8ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15B8ECu;
    {
        const bool branch_taken_0x15b8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B8ECu;
            // 0x15b8f0: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8ec) {
            ctx->pc = 0x15B934u;
            goto label_15b934;
        }
    }
    ctx->pc = 0x15B8F4u;
label_15b8f4:
    // 0x15b8f4: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x15b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x15b8f8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x15b8f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b8fc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15B8FCu;
    {
        const bool branch_taken_0x15b8fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8fc) {
            ctx->pc = 0x15B92Cu;
            goto label_15b92c;
        }
    }
    ctx->pc = 0x15B904u;
    // 0x15b904: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x15b904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b908: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15b908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15b90c: 0x24424690  addiu       $v0, $v0, 0x4690
    ctx->pc = 0x15b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18064));
    // 0x15b910: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x15b914: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15b914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15b918: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15b918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15b91c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b920: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b924: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B924u;
    {
        const bool branch_taken_0x15b924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B924u;
            // 0x15b928: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b924) {
            ctx->pc = 0x15B934u;
            goto label_15b934;
        }
    }
    ctx->pc = 0x15B92Cu;
label_15b92c:
    // 0x15b92c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x15b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x15b930: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x15b930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
label_15b934:
    // 0x15b934: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x15b934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x15b938: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x15b938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x15b93c: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x15B93Cu;
    {
        const bool branch_taken_0x15b93c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b93c) {
            ctx->pc = 0x15B984u;
            goto label_15b984;
        }
    }
    ctx->pc = 0x15B944u;
    // 0x15b944: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x15b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x15b948: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15b948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x15b94c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B94Cu;
    {
        const bool branch_taken_0x15b94c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b94c) {
            ctx->pc = 0x15B960u;
            goto label_15b960;
        }
    }
    ctx->pc = 0x15B954u;
    // 0x15b954: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15b958: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15B958u;
    {
        const bool branch_taken_0x15b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B958u;
            // 0x15b95c: 0xae2200bc  sw          $v0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b958) {
            ctx->pc = 0x15B9C4u;
            goto label_15b9c4;
        }
    }
    ctx->pc = 0x15B960u;
label_15b960:
    // 0x15b960: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x15b960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b964: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15b964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15b968: 0x24424694  addiu       $v0, $v0, 0x4694
    ctx->pc = 0x15b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18068));
    // 0x15b96c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15b970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b978: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15b97c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x15B97Cu;
    {
        const bool branch_taken_0x15b97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B97Cu;
            // 0x15b980: 0xae2200bc  sw          $v0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b97c) {
            ctx->pc = 0x15B9C4u;
            goto label_15b9c4;
        }
    }
    ctx->pc = 0x15B984u;
label_15b984:
    // 0x15b984: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x15b984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x15b988: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x15b988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b98c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15B98Cu;
    {
        const bool branch_taken_0x15b98c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b98c) {
            ctx->pc = 0x15B9BCu;
            goto label_15b9bc;
        }
    }
    ctx->pc = 0x15B994u;
    // 0x15b994: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x15b994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b998: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15b998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15b99c: 0x24424694  addiu       $v0, $v0, 0x4694
    ctx->pc = 0x15b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18068));
    // 0x15b9a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15b9a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15b9a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15b9ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b9b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b9b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B9B4u;
    {
        const bool branch_taken_0x15b9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9B4u;
            // 0x15b9b8: 0xae2200bc  sw          $v0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9b4) {
            ctx->pc = 0x15B9C4u;
            goto label_15b9c4;
        }
    }
    ctx->pc = 0x15B9BCu;
label_15b9bc:
    // 0x15b9bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15b9c0: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x15b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
label_15b9c4:
    // 0x15b9c4: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x15b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b9c8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15b9cc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B9CCu;
    {
        const bool branch_taken_0x15b9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15B9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9CCu;
            // 0x15b9d0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9cc) {
            ctx->pc = 0x15B9E4u;
            goto label_15b9e4;
        }
    }
    ctx->pc = 0x15B9D4u;
    // 0x15b9d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B9D4u;
    {
        const bool branch_taken_0x15b9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9D4u;
            // 0x15b9d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9d4) {
            ctx->pc = 0x15B9E4u;
            goto label_15b9e4;
        }
    }
    ctx->pc = 0x15B9DCu;
    // 0x15b9dc: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x15B9DCu;
    {
        const bool branch_taken_0x15b9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b9dc) {
            ctx->pc = 0x15BA40u;
            goto label_15ba40;
        }
    }
    ctx->pc = 0x15B9E4u;
label_15b9e4:
    // 0x15b9e4: 0xc62000d8  lwc1        $f0, 0xD8($s1)
    ctx->pc = 0x15b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b9e8: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x15b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x15b9ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15b9f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15b9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b9f4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x15b9f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15b9f8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x15b9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x15b9fc: 0xc0565b8  jal         func_1596E0
    ctx->pc = 0x15B9FCu;
    SET_GPR_U32(ctx, 31, 0x15BA04u);
    ctx->pc = 0x15BA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9FCu;
            // 0x15ba00: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1596E0u;
    if (runtime->hasFunction(0x1596E0u)) {
        auto targetFn = runtime->lookupFunction(0x1596E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA04u; }
        if (ctx->pc != 0x15BA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcAutoPosSet__Fffff_0x1596e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA04u; }
        if (ctx->pc != 0x15BA04u) { return; }
    }
    ctx->pc = 0x15BA04u;
label_15ba04:
    // 0x15ba04: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15BA04u;
    SET_GPR_U32(ctx, 31, 0x15BA0Cu);
    ctx->pc = 0x15BA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA04u;
            // 0x15ba08: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA0Cu; }
        if (ctx->pc != 0x15BA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA0Cu; }
        if (ctx->pc != 0x15BA0Cu) { return; }
    }
    ctx->pc = 0x15BA0Cu;
label_15ba0c:
    // 0x15ba0c: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x15ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x15ba10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ba10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ba14: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x15ba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ba18: 0x3c0243d0  lui         $v0, 0x43D0
    ctx->pc = 0x15ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17360 << 16));
    // 0x15ba1c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15ba1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ba20: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x15ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x15ba24: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x15ba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x15ba28: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x15ba28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x15ba2c: 0xc0565b8  jal         func_1596E0
    ctx->pc = 0x15BA2Cu;
    SET_GPR_U32(ctx, 31, 0x15BA34u);
    ctx->pc = 0x15BA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA2Cu;
            // 0x15ba30: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1596E0u;
    if (runtime->hasFunction(0x1596E0u)) {
        auto targetFn = runtime->lookupFunction(0x1596E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA34u; }
        if (ctx->pc != 0x15BA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcAutoPosSet__Fffff_0x1596e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA34u; }
        if (ctx->pc != 0x15BA34u) { return; }
    }
    ctx->pc = 0x15BA34u;
label_15ba34:
    // 0x15ba34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15BA34u;
    SET_GPR_U32(ctx, 31, 0x15BA3Cu);
    ctx->pc = 0x15BA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA34u;
            // 0x15ba38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA3Cu; }
        if (ctx->pc != 0x15BA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA3Cu; }
        if (ctx->pc != 0x15BA3Cu) { return; }
    }
    ctx->pc = 0x15BA3Cu;
label_15ba3c:
    // 0x15ba3c: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x15ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
label_15ba40:
    // 0x15ba40: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x15ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15ba44: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x15ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15ba48: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15BA48u;
    {
        const bool branch_taken_0x15ba48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ba48) {
            ctx->pc = 0x15BAA8u;
            goto label_15baa8;
        }
    }
    ctx->pc = 0x15BA50u;
    // 0x15ba50: 0xc62000d8  lwc1        $f0, 0xD8($s1)
    ctx->pc = 0x15ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ba54: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x15ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x15ba58: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15ba5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ba5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ba60: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x15ba60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ba64: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x15ba64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x15ba68: 0xc0565b8  jal         func_1596E0
    ctx->pc = 0x15BA68u;
    SET_GPR_U32(ctx, 31, 0x15BA70u);
    ctx->pc = 0x15BA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA68u;
            // 0x15ba6c: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1596E0u;
    if (runtime->hasFunction(0x1596E0u)) {
        auto targetFn = runtime->lookupFunction(0x1596E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA70u; }
        if (ctx->pc != 0x15BA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcAutoPosSet__Fffff_0x1596e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA70u; }
        if (ctx->pc != 0x15BA70u) { return; }
    }
    ctx->pc = 0x15BA70u;
label_15ba70:
    // 0x15ba70: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15BA70u;
    SET_GPR_U32(ctx, 31, 0x15BA78u);
    ctx->pc = 0x15BA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA70u;
            // 0x15ba74: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA78u; }
        if (ctx->pc != 0x15BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA78u; }
        if (ctx->pc != 0x15BA78u) { return; }
    }
    ctx->pc = 0x15BA78u;
label_15ba78:
    // 0x15ba78: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x15ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x15ba7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ba7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ba80: 0xc62000dc  lwc1        $f0, 0xDC($s1)
    ctx->pc = 0x15ba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ba84: 0x3c0243d0  lui         $v0, 0x43D0
    ctx->pc = 0x15ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17360 << 16));
    // 0x15ba88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15ba88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ba8c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15ba90: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x15ba90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x15ba94: 0xc0565b8  jal         func_1596E0
    ctx->pc = 0x15BA94u;
    SET_GPR_U32(ctx, 31, 0x15BA9Cu);
    ctx->pc = 0x15BA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA94u;
            // 0x15ba98: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1596E0u;
    if (runtime->hasFunction(0x1596E0u)) {
        auto targetFn = runtime->lookupFunction(0x1596E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA9Cu; }
        if (ctx->pc != 0x15BA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcAutoPosSet__Fffff_0x1596e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA9Cu; }
        if (ctx->pc != 0x15BA9Cu) { return; }
    }
    ctx->pc = 0x15BA9Cu;
label_15ba9c:
    // 0x15ba9c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15BA9Cu;
    SET_GPR_U32(ctx, 31, 0x15BAA4u);
    ctx->pc = 0x15BAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA9Cu;
            // 0x15baa0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAA4u; }
        if (ctx->pc != 0x15BAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BAA4u; }
        if (ctx->pc != 0x15BAA4u) { return; }
    }
    ctx->pc = 0x15BAA4u;
label_15baa4:
    // 0x15baa4: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x15baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
label_15baa8:
    // 0x15baa8: 0x8e231b30  lw          $v1, 0x1B30($s1)
    ctx->pc = 0x15baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6960)));
    // 0x15baac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bab0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15BAB0u;
    {
        const bool branch_taken_0x15bab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15BAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAB0u;
            // 0x15bab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bab0) {
            ctx->pc = 0x15BB08u;
            goto label_15bb08;
        }
    }
    ctx->pc = 0x15BAB8u;
    // 0x15bab8: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x15bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x15babc: 0xae221b34  sw          $v0, 0x1B34($s1)
    ctx->pc = 0x15babcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6964), GPR_U32(ctx, 2));
    // 0x15bac0: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x15bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x15bac4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15bac8: 0xae221b38  sw          $v0, 0x1B38($s1)
    ctx->pc = 0x15bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6968), GPR_U32(ctx, 2));
    // 0x15bacc: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x15baccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x15bad0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BAD0u;
    {
        const bool branch_taken_0x15bad0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15bad0) {
            ctx->pc = 0x15BAE0u;
            goto label_15bae0;
        }
    }
    ctx->pc = 0x15BAD8u;
    // 0x15bad8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BAD8u;
    {
        const bool branch_taken_0x15bad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAD8u;
            // 0x15badc: 0xae221b3c  sw          $v0, 0x1B3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bad8) {
            ctx->pc = 0x15BAE8u;
            goto label_15bae8;
        }
    }
    ctx->pc = 0x15BAE0u;
label_15bae0:
    // 0x15bae0: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x15bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x15bae4: 0xae221b3c  sw          $v0, 0x1B3C($s1)
    ctx->pc = 0x15bae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6972), GPR_U32(ctx, 2));
label_15bae8:
    // 0x15bae8: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x15bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x15baec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BAECu;
    {
        const bool branch_taken_0x15baec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15baec) {
            ctx->pc = 0x15BAFCu;
            goto label_15bafc;
        }
    }
    ctx->pc = 0x15BAF4u;
    // 0x15baf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BAF4u;
    {
        const bool branch_taken_0x15baf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAF4u;
            // 0x15baf8: 0xae221b40  sw          $v0, 0x1B40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15baf4) {
            ctx->pc = 0x15BB04u;
            goto label_15bb04;
        }
    }
    ctx->pc = 0x15BAFCu;
label_15bafc:
    // 0x15bafc: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x15bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x15bb00: 0xae221b40  sw          $v0, 0x1B40($s1)
    ctx->pc = 0x15bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6976), GPR_U32(ctx, 2));
label_15bb04:
    // 0x15bb04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15bb08:
    // 0x15bb08: 0xc0547f4  jal         func_151FD0
    ctx->pc = 0x15BB08u;
    SET_GPR_U32(ctx, 31, 0x15BB10u);
    ctx->pc = 0x151FD0u;
    if (runtime->hasFunction(0x151FD0u)) {
        auto targetFn = runtime->lookupFunction(0x151FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB10u; }
        if (ctx->pc != 0x15BB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCaptionOff__6ClsMesFv_0x151fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB10u; }
        if (ctx->pc != 0x15BB10u) { return; }
    }
    ctx->pc = 0x15BB10u;
label_15bb10:
    // 0x15bb10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BB10u;
    {
        const bool branch_taken_0x15bb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB10u;
            // 0x15bb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb10) {
            ctx->pc = 0x15BB38u;
            goto label_15bb38;
        }
    }
    ctx->pc = 0x15BB18u;
    // 0x15bb18: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x15bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15bb1c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x15bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15bb20: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BB20u;
    {
        const bool branch_taken_0x15bb20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15BB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB20u;
            // 0x15bb24: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb20) {
            ctx->pc = 0x15BB34u;
            goto label_15bb34;
        }
    }
    ctx->pc = 0x15BB28u;
    // 0x15bb28: 0x8c23e564  lw          $v1, -0x1A9C($at)
    ctx->pc = 0x15bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960484)));
    // 0x15bb2c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x15BB2Cu;
    {
        const bool branch_taken_0x15bb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bb2c) {
            ctx->pc = 0x15BBA0u;
            goto label_15bba0;
        }
    }
    ctx->pc = 0x15BB34u;
label_15bb34:
    // 0x15bb34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15bb38:
    // 0x15bb38: 0xc056688  jal         func_159A20
    ctx->pc = 0x15BB38u;
    SET_GPR_U32(ctx, 31, 0x15BB40u);
    ctx->pc = 0x159A20u;
    if (runtime->hasFunction(0x159A20u)) {
        auto targetFn = runtime->lookupFunction(0x159A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB40u; }
        if (ctx->pc != 0x15BB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFont__6ClsMesFv_0x159a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB40u; }
        if (ctx->pc != 0x15BB40u) { return; }
    }
    ctx->pc = 0x15BB40u;
label_15bb40:
    // 0x15bb40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb44: 0xc056848  jal         func_15A120
    ctx->pc = 0x15BB44u;
    SET_GPR_U32(ctx, 31, 0x15BB4Cu);
    ctx->pc = 0x15BB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB44u;
            // 0x15bb48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A120u;
    if (runtime->hasFunction(0x15A120u)) {
        auto targetFn = runtime->lookupFunction(0x15A120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB4Cu; }
        if (ctx->pc != 0x15BB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepSelectCursor__6ClsMesFi_0x15a120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB4Cu; }
        if (ctx->pc != 0x15BB4Cu) { return; }
    }
    ctx->pc = 0x15BB4Cu;
label_15bb4c:
    // 0x15bb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb50: 0xc056920  jal         func_15A480
    ctx->pc = 0x15BB50u;
    SET_GPR_U32(ctx, 31, 0x15BB58u);
    ctx->pc = 0x15BB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB50u;
            // 0x15bb54: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A480u;
    if (runtime->hasFunction(0x15A480u)) {
        auto targetFn = runtime->lookupFunction(0x15A480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB58u; }
        if (ctx->pc != 0x15BB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSelectCursor__6ClsMesFP11mgCDrawPrim_0x15a480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB58u; }
        if (ctx->pc != 0x15BB58u) { return; }
    }
    ctx->pc = 0x15BB58u;
label_15bb58:
    // 0x15bb58: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x15bb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x15bb5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb60: 0x8fa802b0  lw          $t0, 0x2B0($sp)
    ctx->pc = 0x15bb60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x15bb64: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x15bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x15bb68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15bb6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15bb70: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x15bb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x15bb74: 0xc056b40  jal         func_15AD00
    ctx->pc = 0x15BB74u;
    SET_GPR_U32(ctx, 31, 0x15BB7Cu);
    ctx->pc = 0x15BB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB74u;
            // 0x15bb78: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AD00u;
    if (runtime->hasFunction(0x15AD00u)) {
        auto targetFn = runtime->lookupFunction(0x15AD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB7Cu; }
        if (ctx->pc != 0x15BB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawPushButton__6ClsMesFP11mgCDrawPrimii_0x15ad00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB7Cu; }
        if (ctx->pc != 0x15BB7Cu) { return; }
    }
    ctx->pc = 0x15BB7Cu;
label_15bb7c:
    // 0x15bb7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb80: 0xc0569cc  jal         func_15A730
    ctx->pc = 0x15BB80u;
    SET_GPR_U32(ctx, 31, 0x15BB88u);
    ctx->pc = 0x15BB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB80u;
            // 0x15bb84: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A730u;
    if (runtime->hasFunction(0x15A730u)) {
        auto targetFn = runtime->lookupFunction(0x15A730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB88u; }
        if (ctx->pc != 0x15BB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEquipment__6ClsMesFP11mgCDrawPrim_0x15a730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB88u; }
        if (ctx->pc != 0x15BB88u) { return; }
    }
    ctx->pc = 0x15BB88u;
label_15bb88:
    // 0x15bb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb8c: 0xc056a2c  jal         func_15A8B0
    ctx->pc = 0x15BB8Cu;
    SET_GPR_U32(ctx, 31, 0x15BB94u);
    ctx->pc = 0x15BB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB8Cu;
            // 0x15bb90: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A8B0u;
    if (runtime->hasFunction(0x15A8B0u)) {
        auto targetFn = runtime->lookupFunction(0x15A8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB94u; }
        if (ctx->pc != 0x15BB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawCross__6ClsMesFP11mgCDrawPrim_0x15a8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BB94u; }
        if (ctx->pc != 0x15BB94u) { return; }
    }
    ctx->pc = 0x15BB94u;
label_15bb94:
    // 0x15bb94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb98: 0xc056a8c  jal         func_15AA30
    ctx->pc = 0x15BB98u;
    SET_GPR_U32(ctx, 31, 0x15BBA0u);
    ctx->pc = 0x15BB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BB98u;
            // 0x15bb9c: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AA30u;
    if (runtime->hasFunction(0x15AA30u)) {
        auto targetFn = runtime->lookupFunction(0x15AA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BBA0u; }
        if (ctx->pc != 0x15BBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawRightDelta__6ClsMesFP11mgCDrawPrim_0x15aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BBA0u; }
        if (ctx->pc != 0x15BBA0u) { return; }
    }
    ctx->pc = 0x15BBA0u;
label_15bba0:
    // 0x15bba0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15bba4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15bba4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15bba8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15bba8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bbac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15bbacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bbb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15bbb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bbb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bbb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bbb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bbb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bbbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bbbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBC0u;
            // 0x15bbc4: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BBC8u;
}
