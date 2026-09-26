#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufRestartDMA__FP5ViBuf
// Address: 0x29a310 - 0x29a630
void viBufRestartDMA__FP5ViBuf_0x29a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufRestartDMA__FP5ViBuf_0x29a310");
#endif

    switch (ctx->pc) {
        case 0x29a378u: goto label_29a378;
        case 0x29a43cu: goto label_29a43c;
        case 0x29a448u: goto label_29a448;
        case 0x29a568u: goto label_29a568;
        case 0x29a578u: goto label_29a578;
        case 0x29a5a0u: goto label_29a5a0;
        case 0x29a5ecu: goto label_29a5ec;
        case 0x29a608u: goto label_29a608;
        default: break;
    }

    ctx->pc = 0x29a310u;

    // 0x29a310: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29a314: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29a318: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29a31c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29a31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29a320: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29a320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29a324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29a328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29a32c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a330: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x29a330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x29a334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a338: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x29a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x29a33c: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x29a33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x29a340: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x29a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x29a344: 0x8c950020  lw          $s5, 0x20($a0)
    ctx->pc = 0x29a344u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x29a348: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x29a348u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x29a34c: 0x3111007f  andi        $s1, $t0, 0x7F
    ctx->pc = 0x29a34cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
    // 0x29a350: 0x30c70003  andi        $a3, $a2, 0x3
    ctx->pc = 0x29a350u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x29a354: 0x34540100  ori         $s4, $v0, 0x100
    ctx->pc = 0x29a354u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x29a358: 0x83202  srl         $a2, $t0, 8
    ctx->pc = 0x29a358u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x29a35c: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x29a35cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x29a360: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x29a360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x29a364: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x29a364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x29a368: 0x669821  addu        $s3, $v1, $a2
    ctx->pc = 0x29a368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29a36c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x29a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a370: 0xc044048  jal         func_110120
    ctx->pc = 0x29A370u;
    SET_GPR_U32(ctx, 31, 0x29A378u);
    ctx->pc = 0x29A374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A370u;
            // 0x29a374: 0xa39023  subu        $s2, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A378u; }
        if (ctx->pc != 0x29A378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A378u; }
        if (ctx->pc != 0x29A378u) { return; }
    }
    ctx->pc = 0x29A378u;
label_29a378:
    // 0x29a378: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a37c: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x29a37cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29a380: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x29A380u;
    {
        const bool branch_taken_0x29a380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a380) {
            ctx->pc = 0x29A430u;
            goto label_29a430;
        }
    }
    ctx->pc = 0x29A388u;
    // 0x29a388: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x29a388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29a38c: 0x921023  subu        $v0, $a0, $s2
    ctx->pc = 0x29a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x29a390: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29a390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29a394: 0x29902  srl         $s3, $v0, 4
    ctx->pc = 0x29a394u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x29a398: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x29a398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29a39c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x29a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x29a3a0: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x29a3a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29a3a4: 0x712c0  sll         $v0, $a3, 11
    ctx->pc = 0x29a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x29a3a8: 0x66a824  and         $s5, $v1, $a2
    ctx->pc = 0x29a3a8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x29a3ac: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A3ACu;
    {
        const bool branch_taken_0x29a3ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x29A3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3ACu;
            // 0x29a3b0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3ac) {
            ctx->pc = 0x29A3C8u;
            goto label_29a3c8;
        }
    }
    ctx->pc = 0x29A3B4u;
    // 0x29a3b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29a3b8: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A3B8u;
    {
        const bool branch_taken_0x29a3b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29A3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3B8u;
            // 0x29a3bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3b8) {
            ctx->pc = 0x29A3CCu;
            goto label_29a3cc;
        }
    }
    ctx->pc = 0x29A3C0u;
    // 0x29a3c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A3C0u;
    {
        const bool branch_taken_0x29a3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3C0u;
            // 0x29a3c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3c0) {
            ctx->pc = 0x29A3CCu;
            goto label_29a3cc;
        }
    }
    ctx->pc = 0x29A3C8u;
label_29a3c8:
    // 0x29a3c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a3cc:
    // 0x29a3cc: 0x21f00  sll         $v1, $v0, 28
    ctx->pc = 0x29a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x29a3d0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x29a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x29a3d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29a3d8: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x29a3d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x29a3dc: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x29a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29a3e0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x29a3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x29a3e4: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x29a3e4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a3e8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29a3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29a3ec: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A3ECu;
    {
        const bool branch_taken_0x29a3ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A3ECu;
            // 0x29a3f0: 0x34740100  ori         $s4, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3ec) {
            ctx->pc = 0x29A3F8u;
            goto label_29a3f8;
        }
    }
    ctx->pc = 0x29A3F4u;
    // 0x29a3f4: 0x1cd  break       0, 7
    ctx->pc = 0x29a3f4u;
    runtime->handleBreak(rdram, ctx);
label_29a3f8:
    // 0x29a3f8: 0x1810  mfhi        $v1
    ctx->pc = 0x29a3f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29a3fc: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x29a3fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x29a400: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x29A400u;
    {
        const bool branch_taken_0x29a400 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A400u;
            // 0x29a404: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a400) {
            ctx->pc = 0x29A41Cu;
            goto label_29a41c;
        }
    }
    ctx->pc = 0x29A408u;
    // 0x29a408: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a40c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x29a40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a410: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x29A410u;
    {
        const bool branch_taken_0x29a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a410) {
            ctx->pc = 0x29A52Cu;
            goto label_29a52c;
        }
    }
    ctx->pc = 0x29A418u;
    // 0x29a418: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x29a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_29a41c:
    // 0x29a41c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x29a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x29a420: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29a424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29a428: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x29A428u;
    {
        const bool branch_taken_0x29a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A428u;
            // 0x29a42c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a428) {
            ctx->pc = 0x29A52Cu;
            goto label_29a52c;
        }
    }
    ctx->pc = 0x29A430u;
label_29a430:
    // 0x29a430: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x29a430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29a434: 0xc0a66ec  jal         func_299BB0
    ctx->pc = 0x29A434u;
    SET_GPR_U32(ctx, 31, 0x29A43Cu);
    ctx->pc = 0x29A438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A434u;
            // 0x29a438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299BB0u;
    if (runtime->hasFunction(0x299BB0u)) {
        auto targetFn = runtime->lookupFunction(0x299BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A43Cu; }
        if (ctx->pc != 0x29A43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex__FP5ViBufPv_0x299bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A43Cu; }
        if (ctx->pc != 0x29A43Cu) { return; }
    }
    ctx->pc = 0x29A43Cu;
label_29a43c:
    // 0x29a43c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29a43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a440: 0xc0a66ec  jal         func_299BB0
    ctx->pc = 0x29A440u;
    SET_GPR_U32(ctx, 31, 0x29A448u);
    ctx->pc = 0x29A444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A440u;
            // 0x29a444: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299BB0u;
    if (runtime->hasFunction(0x299BB0u)) {
        auto targetFn = runtime->lookupFunction(0x299BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A448u; }
        if (ctx->pc != 0x29A448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex__FP5ViBufPv_0x299bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A448u; }
        if (ctx->pc != 0x29A448u) { return; }
    }
    ctx->pc = 0x29A448u;
label_29a448:
    // 0x29a448: 0x10c20038  beq         $a2, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x29A448u;
    {
        const bool branch_taken_0x29a448 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x29A44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A448u;
            // 0x29a44c: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a448) {
            ctx->pc = 0x29A52Cu;
            goto label_29a52c;
        }
    }
    ctx->pc = 0x29A450u;
    // 0x29a450: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x29a450u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a454: 0x346affff  ori         $t2, $v1, 0xFFFF
    ctx->pc = 0x29a454u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x29a458: 0x63ac0  sll         $a3, $a2, 11
    ctx->pc = 0x29a458u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x29a45c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a460: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x29a460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29a464: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x29a464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29a468: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x29a468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a46c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x29a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29a470: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x29a470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29a474: 0xf23823  subu        $a3, $a3, $s2
    ctx->pc = 0x29a474u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x29a478: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x29a478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x29a47c: 0x79902  srl         $s3, $a3, 4
    ctx->pc = 0x29a47cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x29a480: 0x10aa824  and         $s5, $t0, $t2
    ctx->pc = 0x29a480u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x29a484: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x29a484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29a488: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A488u;
    {
        const bool branch_taken_0x29a488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A488u;
            // 0x29a48c: 0xe4001a  div         $zero, $a3, $a0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a488) {
            ctx->pc = 0x29A494u;
            goto label_29a494;
        }
    }
    ctx->pc = 0x29A490u;
    // 0x29a490: 0x1cd  break       0, 7
    ctx->pc = 0x29a490u;
    runtime->handleBreak(rdram, ctx);
label_29a494:
    // 0x29a494: 0x8e08001c  lw          $t0, 0x1C($s0)
    ctx->pc = 0x29a494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x29a498: 0x4810  mfhi        $t1
    ctx->pc = 0x29a498u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x29a49c: 0x43ac0  sll         $a3, $a0, 11
    ctx->pc = 0x29a49cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x29a4a0: 0x94ac0  sll         $t1, $t1, 11
    ctx->pc = 0x29a4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
    // 0x29a4a4: 0x695821  addu        $t3, $v1, $t1
    ctx->pc = 0x29a4a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29a4a8: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x29a4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x29a4ac: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A4ACu;
    {
        const bool branch_taken_0x29a4ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A4ACu;
            // 0x29a4b0: 0x107001b  divu        $zero, $t0, $a3 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4ac) {
            ctx->pc = 0x29A4B8u;
            goto label_29a4b8;
        }
    }
    ctx->pc = 0x29A4B4u;
    // 0x29a4b4: 0x1cd  break       0, 7
    ctx->pc = 0x29a4b4u;
    runtime->handleBreak(rdram, ctx);
label_29a4b8:
    // 0x29a4b8: 0x5010  mfhi        $t2
    ctx->pc = 0x29a4b8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x29a4bc: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x29a4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29a4c0: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x29a4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x29a4c4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x29a4c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4c8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x29a4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a4cc: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x29a4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x29a4d0: 0xe51823  subu        $v1, $a3, $a1
    ctx->pc = 0x29a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x29a4d4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x29a4d4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29a4d8: 0x14b2826  xor         $a1, $t2, $t3
    ctx->pc = 0x29a4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 11));
    // 0x29a4dc: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x29a4dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29a4e0: 0x125600a  movz        $t4, $t1, $a1
    ctx->pc = 0x29a4e0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9));
    // 0x29a4e4: 0x8293c  dsll32      $a1, $t0, 4
    ctx->pc = 0x29a4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 4));
    // 0x29a4e8: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x29a4e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x29a4ec: 0xc1f00  sll         $v1, $t4, 28
    ctx->pc = 0x29a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
    // 0x29a4f0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x29a4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x29a4f4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A4F4u;
    {
        const bool branch_taken_0x29a4f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A4F4u;
            // 0x29a4f8: 0x34740100  ori         $s4, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4f4) {
            ctx->pc = 0x29A500u;
            goto label_29a500;
        }
    }
    ctx->pc = 0x29A4FCu;
    // 0x29a4fc: 0x1cd  break       0, 7
    ctx->pc = 0x29a4fcu;
    runtime->handleBreak(rdram, ctx);
label_29a500:
    // 0x29a500: 0x1810  mfhi        $v1
    ctx->pc = 0x29a500u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29a504: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x29a504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x29a508: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A508u;
    {
        const bool branch_taken_0x29a508 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a508) {
            ctx->pc = 0x29A51Cu;
            goto label_29a51c;
        }
    }
    ctx->pc = 0x29A510u;
    // 0x29a510: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x29a510u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x29a514: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A514u;
    {
        const bool branch_taken_0x29a514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a514) {
            ctx->pc = 0x29A52Cu;
            goto label_29a52c;
        }
    }
    ctx->pc = 0x29A51Cu;
label_29a51c:
    // 0x29a51c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x29a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x29a520: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29a524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29a528: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x29a528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_29a52c:
    // 0x29a52c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x29a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x29a530: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29A530u;
    {
        const bool branch_taken_0x29a530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a530) {
            ctx->pc = 0x29A568u;
            goto label_29a568;
        }
    }
    ctx->pc = 0x29A538u;
    // 0x29a538: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x29a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x29a53c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29A53Cu;
    {
        const bool branch_taken_0x29a53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a53c) {
            ctx->pc = 0x29A568u;
            goto label_29a568;
        }
    }
    ctx->pc = 0x29A544u;
    // 0x29a544: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x29a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x29a548: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a54c: 0xac22b010  sw          $v0, -0x4FF0($at)
    ctx->pc = 0x29a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946832), GPR_U32(ctx, 2));
    // 0x29a550: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x29a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x29a554: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a558: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x29a558u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 2));
    // 0x29a55c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x29a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x29a560: 0xc0a66fc  jal         func_299BF0
    ctx->pc = 0x29A560u;
    SET_GPR_U32(ctx, 31, 0x29A568u);
    ctx->pc = 0x29A564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A560u;
            // 0x29a564: 0x34440100  ori         $a0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
    ctx->pc = 0x299BF0u;
    if (runtime->hasFunction(0x299BF0u)) {
        auto targetFn = runtime->lookupFunction(0x299BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A568u; }
        if (ctx->pc != 0x29A568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR__FUi_0x299bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A568u; }
        if (ctx->pc != 0x29A568u) { return; }
    }
    ctx->pc = 0x29A568u;
label_29a568:
    // 0x29a568: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a56c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29A56Cu;
    {
        const bool branch_taken_0x29a56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A56Cu;
            // 0x29a570: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a56c) {
            ctx->pc = 0x29A5C0u;
            goto label_29a5c0;
        }
    }
    ctx->pc = 0x29A574u;
    // 0x29a574: 0x34432010  ori         $v1, $v0, 0x2010
    ctx->pc = 0x29a574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_29a578:
    // 0x29a578: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a57c: 0x0  nop
    ctx->pc = 0x29a57cu;
    // NOP
    // 0x29a580: 0x0  nop
    ctx->pc = 0x29a580u;
    // NOP
    // 0x29a584: 0x0  nop
    ctx->pc = 0x29a584u;
    // NOP
    // 0x29a588: 0x0  nop
    ctx->pc = 0x29a588u;
    // NOP
    // 0x29a58c: 0x0  nop
    ctx->pc = 0x29a58cu;
    // NOP
    // 0x29a590: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29A590u;
    {
        const bool branch_taken_0x29a590 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x29a590) {
            ctx->pc = 0x29A578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29a578;
        }
    }
    ctx->pc = 0x29A598u;
    // 0x29a598: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x29a598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x29a59c: 0xac312000  sw          $s1, 0x2000($at)
    ctx->pc = 0x29a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 17));
label_29a5a0:
    // 0x29a5a0: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x29a5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x29a5a4: 0x8c222010  lw          $v0, 0x2010($at)
    ctx->pc = 0x29a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8208)));
    // 0x29a5a8: 0x0  nop
    ctx->pc = 0x29a5a8u;
    // NOP
    // 0x29a5ac: 0x0  nop
    ctx->pc = 0x29a5acu;
    // NOP
    // 0x29a5b0: 0x0  nop
    ctx->pc = 0x29a5b0u;
    // NOP
    // 0x29a5b4: 0x0  nop
    ctx->pc = 0x29a5b4u;
    // NOP
    // 0x29a5b8: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29A5B8u;
    {
        const bool branch_taken_0x29a5b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x29a5b8) {
            ctx->pc = 0x29A5A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29a5a0;
        }
    }
    ctx->pc = 0x29A5C0u;
label_29a5c0:
    // 0x29a5c0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a5c4: 0xac32b410  sw          $s2, -0x4BF0($at)
    ctx->pc = 0x29a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947856), GPR_U32(ctx, 18));
    // 0x29a5c8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a5cc: 0xac35b430  sw          $s5, -0x4BD0($at)
    ctx->pc = 0x29a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 21));
    // 0x29a5d0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a5d4: 0xac33b420  sw          $s3, -0x4BE0($at)
    ctx->pc = 0x29a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947872), GPR_U32(ctx, 19));
    // 0x29a5d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x29a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29a5dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A5DCu;
    {
        const bool branch_taken_0x29a5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A5DCu;
            // 0x29a5e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5dc) {
            ctx->pc = 0x29A5ECu;
            goto label_29a5ec;
        }
    }
    ctx->pc = 0x29A5E4u;
    // 0x29a5e4: 0xc0a6718  jal         func_299C60
    ctx->pc = 0x29A5E4u;
    SET_GPR_U32(ctx, 31, 0x29A5ECu);
    ctx->pc = 0x299C60u;
    if (runtime->hasFunction(0x299C60u)) {
        auto targetFn = runtime->lookupFunction(0x299C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A5ECu; }
        if (ctx->pc != 0x29A5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR__FUi_0x299c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A5ECu; }
        if (ctx->pc != 0x29A5ECu) { return; }
    }
    ctx->pc = 0x29A5ECu;
label_29a5ec:
    // 0x29a5ec: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x29a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x29a5f0: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x29a5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x29a5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a5f8: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x29a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 3));
    // 0x29a5fc: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x29a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x29a600: 0xc044040  jal         func_110100
    ctx->pc = 0x29A600u;
    SET_GPR_U32(ctx, 31, 0x29A608u);
    ctx->pc = 0x29A604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A600u;
            // 0x29a604: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A608u; }
        if (ctx->pc != 0x29A608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A608u; }
        if (ctx->pc != 0x29A608u) { return; }
    }
    ctx->pc = 0x29A608u;
label_29a608:
    // 0x29a608: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29a608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29a60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a610: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29a610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29a614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29a618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a61c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29a61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a628: 0x3e00008  jr          $ra
    ctx->pc = 0x29A628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A628u;
            // 0x29a62c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A630u;
}
