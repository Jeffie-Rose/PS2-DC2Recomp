#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEnd__9CShopMenuFv
// Address: 0x292140 - 0x292528
void InitEnd__9CShopMenuFv_0x292140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEnd__9CShopMenuFv_0x292140");
#endif

    switch (ctx->pc) {
        case 0x292180u: goto label_292180;
        case 0x292188u: goto label_292188;
        case 0x2921b4u: goto label_2921b4;
        case 0x2921d8u: goto label_2921d8;
        case 0x2921e4u: goto label_2921e4;
        case 0x292210u: goto label_292210;
        case 0x292228u: goto label_292228;
        case 0x292230u: goto label_292230;
        case 0x29224cu: goto label_29224c;
        case 0x292264u: goto label_292264;
        case 0x292288u: goto label_292288;
        case 0x2922a0u: goto label_2922a0;
        case 0x2922b8u: goto label_2922b8;
        case 0x2922ccu: goto label_2922cc;
        case 0x2922e0u: goto label_2922e0;
        case 0x2922f8u: goto label_2922f8;
        case 0x292308u: goto label_292308;
        case 0x292314u: goto label_292314;
        case 0x292338u: goto label_292338;
        case 0x292348u: goto label_292348;
        case 0x292378u: goto label_292378;
        case 0x292388u: goto label_292388;
        case 0x292398u: goto label_292398;
        case 0x2923a4u: goto label_2923a4;
        case 0x2923b8u: goto label_2923b8;
        case 0x2923c0u: goto label_2923c0;
        case 0x2923c8u: goto label_2923c8;
        case 0x2923d0u: goto label_2923d0;
        case 0x2923d8u: goto label_2923d8;
        case 0x2923e0u: goto label_2923e0;
        case 0x292408u: goto label_292408;
        case 0x292414u: goto label_292414;
        case 0x292420u: goto label_292420;
        case 0x292444u: goto label_292444;
        case 0x29245cu: goto label_29245c;
        case 0x29247cu: goto label_29247c;
        case 0x292484u: goto label_292484;
        case 0x292494u: goto label_292494;
        case 0x2924a4u: goto label_2924a4;
        case 0x2924c4u: goto label_2924c4;
        case 0x2924e8u: goto label_2924e8;
        case 0x2924f4u: goto label_2924f4;
        default: break;
    }

    ctx->pc = 0x292140u;

    // 0x292140: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x292140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x292144: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x292144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x292148: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x292148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29214c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29214cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x292150: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x292150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x292154: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x292154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x292158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29215c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292164: 0x8c93013c  lw          $s3, 0x13C($a0)
    ctx->pc = 0x292164u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x292168: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x292168u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x29216c: 0x8c95001c  lw          $s5, 0x1C($a0)
    ctx->pc = 0x29216cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x292170: 0x12600063  beqz        $s3, . + 4 + (0x63 << 2)
    ctx->pc = 0x292170u;
    {
        const bool branch_taken_0x292170 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x292174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292170u;
            // 0x292174: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292170) {
            ctx->pc = 0x292300u;
            goto label_292300;
        }
    }
    ctx->pc = 0x292178u;
    // 0x292178: 0xc064220  jal         func_190880
    ctx->pc = 0x292178u;
    SET_GPR_U32(ctx, 31, 0x292180u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292180u; }
        if (ctx->pc != 0x292180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292180u; }
        if (ctx->pc != 0x292180u) { return; }
    }
    ctx->pc = 0x292180u;
label_292180:
    // 0x292180: 0xc094414  jal         func_251050
    ctx->pc = 0x292180u;
    SET_GPR_U32(ctx, 31, 0x292188u);
    ctx->pc = 0x292184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292180u;
            // 0x292184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251050u;
    if (runtime->hasFunction(0x251050u)) {
        auto targetFn = runtime->lookupFunction(0x251050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292188u; }
        if (ctx->pc != 0x292188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowChapter__FP9CSaveData_0x251050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292188u; }
        if (ctx->pc != 0x292188u) { return; }
    }
    ctx->pc = 0x292188u;
label_292188:
    // 0x292188: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x292188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29218c: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29218Cu;
    {
        const bool branch_taken_0x29218c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x292190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29218Cu;
            // 0x292190: 0x2a210009  slti        $at, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29218c) {
            ctx->pc = 0x29219Cu;
            goto label_29219c;
        }
    }
    ctx->pc = 0x292194u;
    // 0x292194: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x292194u;
    {
        const bool branch_taken_0x292194 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x292194) {
            ctx->pc = 0x2921A0u;
            goto label_2921a0;
        }
    }
    ctx->pc = 0x29219Cu;
label_29219c:
    // 0x29219c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29219cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2921a0:
    // 0x2921a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2921a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2921a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2921a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2921a8: 0x24a5d9e0  addiu       $a1, $a1, -0x2620
    ctx->pc = 0x2921a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957536));
    // 0x2921ac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2921ACu;
    SET_GPR_U32(ctx, 31, 0x2921B4u);
    ctx->pc = 0x2921B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2921ACu;
            // 0x2921b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921B4u; }
        if (ctx->pc != 0x2921B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921B4u; }
        if (ctx->pc != 0x2921B4u) { return; }
    }
    ctx->pc = 0x2921B4u;
label_2921b4:
    // 0x2921b4: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2921b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2921b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2921b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2921bc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2921BCu;
    {
        const bool branch_taken_0x2921bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2921bc) {
            ctx->pc = 0x2921D8u;
            goto label_2921d8;
        }
    }
    ctx->pc = 0x2921C4u;
    // 0x2921c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2921c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2921c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2921c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2921ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2921d0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2921D0u;
    SET_GPR_U32(ctx, 31, 0x2921D8u);
    ctx->pc = 0x2921D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2921D0u;
            // 0x2921d4: 0x24a5da00  addiu       $a1, $a1, -0x2600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921D8u; }
        if (ctx->pc != 0x2921D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921D8u; }
        if (ctx->pc != 0x2921D8u) { return; }
    }
    ctx->pc = 0x2921D8u;
label_2921d8:
    // 0x2921d8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2921d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2921dc: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2921DCu;
    SET_GPR_U32(ctx, 31, 0x2921E4u);
    ctx->pc = 0x2921E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2921DCu;
            // 0x2921e0: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921E4u; }
        if (ctx->pc != 0x2921E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921E4u; }
        if (ctx->pc != 0x2921E4u) { return; }
    }
    ctx->pc = 0x2921E4u;
label_2921e4:
    // 0x2921e4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2921e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2921e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2921e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2921ec: 0x8c235304  lw          $v1, 0x5304($at)
    ctx->pc = 0x2921ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21252)));
    // 0x2921f0: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x2921f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2921f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2921f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921f8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2921f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2921fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2921fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x292200: 0x8c225300  lw          $v0, 0x5300($at)
    ctx->pc = 0x292200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21248)));
    // 0x292204: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x292204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292208: 0xc0524dc  jal         func_149370
    ctx->pc = 0x292208u;
    SET_GPR_U32(ctx, 31, 0x292210u);
    ctx->pc = 0x29220Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292208u;
            // 0x29220c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292210u; }
        if (ctx->pc != 0x292210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292210u; }
        if (ctx->pc != 0x292210u) { return; }
    }
    ctx->pc = 0x292210u;
label_292210:
    // 0x292210: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292210u;
    {
        const bool branch_taken_0x292210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292210) {
            ctx->pc = 0x292228u;
            goto label_292228;
        }
    }
    ctx->pc = 0x292218u;
    // 0x292218: 0x8f849840  lw          $a0, -0x67C0($gp)
    ctx->pc = 0x292218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x29221c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x29221cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x292220: 0xc0a4768  jal         func_291DA0
    ctx->pc = 0x292220u;
    SET_GPR_U32(ctx, 31, 0x292228u);
    ctx->pc = 0x292224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292220u;
            // 0x292224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291DA0u;
    if (runtime->hasFunction(0x291DA0u)) {
        auto targetFn = runtime->lookupFunction(0x291DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292228u; }
        if (ctx->pc != 0x292228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeShopList__5CShopFPci_0x291da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292228u; }
        if (ctx->pc != 0x292228u) { return; }
    }
    ctx->pc = 0x292228u;
label_292228:
    // 0x292228: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x292228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29222c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29222cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292230:
    // 0x292230: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x292230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x292234: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x292234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292238: 0x24424030  addiu       $v0, $v0, 0x4030
    ctx->pc = 0x292238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x29223c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x292240: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x292240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292244: 0xc052734  jal         func_149CD0
    ctx->pc = 0x292244u;
    SET_GPR_U32(ctx, 31, 0x29224Cu);
    ctx->pc = 0x292248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292244u;
            // 0x292248: 0x27a600e8  addiu       $a2, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29224Cu; }
        if (ctx->pc != 0x29224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29224Cu; }
        if (ctx->pc != 0x29224Cu) { return; }
    }
    ctx->pc = 0x29224Cu;
label_29224c:
    // 0x29224c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29224cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292254: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x292254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x292258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29225c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x29225Cu;
    SET_GPR_U32(ctx, 31, 0x292264u);
    ctx->pc = 0x292260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29225Cu;
            // 0x292260: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292264u; }
        if (ctx->pc != 0x292264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292264u; }
        if (ctx->pc != 0x292264u) { return; }
    }
    ctx->pc = 0x292264u;
label_292264:
    // 0x292264: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x292264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x292268: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x292268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x29226c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29226Cu;
    {
        const bool branch_taken_0x29226c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29226Cu;
            // 0x292270: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29226c) {
            ctx->pc = 0x292230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292230;
        }
    }
    ctx->pc = 0x292274u;
    // 0x292274: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x292278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29227c: 0x24a5da18  addiu       $a1, $a1, -0x25E8
    ctx->pc = 0x29227cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957592));
    // 0x292280: 0xc04b414  jal         func_12D050
    ctx->pc = 0x292280u;
    SET_GPR_U32(ctx, 31, 0x292288u);
    ctx->pc = 0x292284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292280u;
            // 0x292284: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292288u; }
        if (ctx->pc != 0x292288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292288u; }
        if (ctx->pc != 0x292288u) { return; }
    }
    ctx->pc = 0x292288u;
label_292288:
    // 0x292288: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29228c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29228cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292290: 0xaf829844  sw          $v0, -0x67BC($gp)
    ctx->pc = 0x292290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940740), GPR_U32(ctx, 2));
    // 0x292294: 0x24a5da20  addiu       $a1, $a1, -0x25E0
    ctx->pc = 0x292294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957600));
    // 0x292298: 0xc04b414  jal         func_12D050
    ctx->pc = 0x292298u;
    SET_GPR_U32(ctx, 31, 0x2922A0u);
    ctx->pc = 0x29229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292298u;
            // 0x29229c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922A0u; }
        if (ctx->pc != 0x2922A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922A0u; }
        if (ctx->pc != 0x2922A0u) { return; }
    }
    ctx->pc = 0x2922A0u;
label_2922a0:
    // 0x2922a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2922a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2922a4: 0xaf829848  sw          $v0, -0x67B8($gp)
    ctx->pc = 0x2922a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940744), GPR_U32(ctx, 2));
    // 0x2922a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2922a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922ac: 0x24a5da28  addiu       $a1, $a1, -0x25D8
    ctx->pc = 0x2922acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957608));
    // 0x2922b0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2922B0u;
    SET_GPR_U32(ctx, 31, 0x2922B8u);
    ctx->pc = 0x2922B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2922B0u;
            // 0x2922b4: 0x27a600e8  addiu       $a2, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922B8u; }
        if (ctx->pc != 0x2922B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922B8u; }
        if (ctx->pc != 0x2922B8u) { return; }
    }
    ctx->pc = 0x2922B8u;
label_2922b8:
    // 0x2922b8: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2922b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2922bc: 0x3c0601f0  lui         $a2, 0x1F0
    ctx->pc = 0x2922bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)496 << 16));
    // 0x2922c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2922c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922c4: 0xc094f98  jal         func_253E60
    ctx->pc = 0x2922C4u;
    SET_GPR_U32(ctx, 31, 0x2922CCu);
    ctx->pc = 0x2922C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2922C4u;
            // 0x2922c8: 0x24c652e0  addiu       $a2, $a2, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922CCu; }
        if (ctx->pc != 0x2922CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922CCu; }
        if (ctx->pc != 0x2922CCu) { return; }
    }
    ctx->pc = 0x2922CCu;
label_2922cc:
    // 0x2922cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2922ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2922d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2922d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922d4: 0x24a5da38  addiu       $a1, $a1, -0x25C8
    ctx->pc = 0x2922d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957624));
    // 0x2922d8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2922D8u;
    SET_GPR_U32(ctx, 31, 0x2922E0u);
    ctx->pc = 0x2922DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2922D8u;
            // 0x2922dc: 0x2686000c  addiu       $a2, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922E0u; }
        if (ctx->pc != 0x2922E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922E0u; }
        if (ctx->pc != 0x2922E0u) { return; }
    }
    ctx->pc = 0x2922E0u;
label_2922e0:
    // 0x2922e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2922e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2922e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2922e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922e8: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2922e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x2922ec: 0x24a5da48  addiu       $a1, $a1, -0x25B8
    ctx->pc = 0x2922ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957640));
    // 0x2922f0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2922F0u;
    SET_GPR_U32(ctx, 31, 0x2922F8u);
    ctx->pc = 0x2922F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2922F0u;
            // 0x2922f4: 0x27a600e8  addiu       $a2, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922F8u; }
        if (ctx->pc != 0x2922F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2922F8u; }
        if (ctx->pc != 0x2922F8u) { return; }
    }
    ctx->pc = 0x2922F8u;
label_2922f8:
    // 0x2922f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2922f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2922fc: 0xac22e3b0  sw          $v0, -0x1C50($at)
    ctx->pc = 0x2922fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960048), GPR_U32(ctx, 2));
label_292300:
    // 0x292300: 0xc04e640  jal         func_139900
    ctx->pc = 0x292300u;
    SET_GPR_U32(ctx, 31, 0x292308u);
    ctx->pc = 0x292304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292300u;
            // 0x292304: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292308u; }
        if (ctx->pc != 0x292308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292308u; }
        if (ctx->pc != 0x292308u) { return; }
    }
    ctx->pc = 0x292308u;
label_292308:
    // 0x292308: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x292308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29230c: 0xc04e780  jal         func_139E00
    ctx->pc = 0x29230Cu;
    SET_GPR_U32(ctx, 31, 0x292314u);
    ctx->pc = 0x292310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29230Cu;
            // 0x292310: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292314u; }
        if (ctx->pc != 0x292314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292314u; }
        if (ctx->pc != 0x292314u) { return; }
    }
    ctx->pc = 0x292314u;
label_292314:
    // 0x292314: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x292314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x292318: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x292318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29231c: 0x8c235304  lw          $v1, 0x5304($at)
    ctx->pc = 0x29231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21252)));
    // 0x292320: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x292320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x292324: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x292324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x292328: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x292328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29232c: 0x8c225300  lw          $v0, 0x5300($at)
    ctx->pc = 0x29232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21248)));
    // 0x292330: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x292330u;
    SET_GPR_U32(ctx, 31, 0x292338u);
    ctx->pc = 0x292334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292330u;
            // 0x292334: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292338u; }
        if (ctx->pc != 0x292338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292338u; }
        if (ctx->pc != 0x292338u) { return; }
    }
    ctx->pc = 0x292338u;
label_292338:
    // 0x292338: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x292338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29233c: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x29233cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x292340: 0xc04e748  jal         func_139D20
    ctx->pc = 0x292340u;
    SET_GPR_U32(ctx, 31, 0x292348u);
    ctx->pc = 0x292344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292340u;
            // 0x292344: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292348u; }
        if (ctx->pc != 0x292348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292348u; }
        if (ctx->pc != 0x292348u) { return; }
    }
    ctx->pc = 0x292348u;
label_292348:
    // 0x292348: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x292348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x29234c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29234cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x292350: 0x8c235304  lw          $v1, 0x5304($at)
    ctx->pc = 0x292350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21252)));
    // 0x292354: 0x2484da60  addiu       $a0, $a0, -0x25A0
    ctx->pc = 0x292354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957664));
    // 0x292358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x292358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29235c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29235cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292360: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x292360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x292364: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x292364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x292368: 0x8c225300  lw          $v0, 0x5300($at)
    ctx->pc = 0x292368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21248)));
    // 0x29236c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x29236cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292370: 0xc0524dc  jal         func_149370
    ctx->pc = 0x292370u;
    SET_GPR_U32(ctx, 31, 0x292378u);
    ctx->pc = 0x292374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292370u;
            // 0x292374: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292378u; }
        if (ctx->pc != 0x292378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292378u; }
        if (ctx->pc != 0x292378u) { return; }
    }
    ctx->pc = 0x292378u;
label_292378:
    // 0x292378: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x292378u;
    {
        const bool branch_taken_0x292378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29237Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292378u;
            // 0x29237c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292378) {
            ctx->pc = 0x29239Cu;
            goto label_29239c;
        }
    }
    ctx->pc = 0x292380u;
    // 0x292380: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x292380u;
    SET_GPR_U32(ctx, 31, 0x292388u);
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292388u; }
        if (ctx->pc != 0x292388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292388u; }
        if (ctx->pc != 0x292388u) { return; }
    }
    ctx->pc = 0x292388u;
label_292388:
    // 0x292388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29238c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29238cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x292390: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x292390u;
    SET_GPR_U32(ctx, 31, 0x292398u);
    ctx->pc = 0x292394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292390u;
            // 0x292394: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292398u; }
        if (ctx->pc != 0x292398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292398u; }
        if (ctx->pc != 0x292398u) { return; }
    }
    ctx->pc = 0x292398u;
label_292398:
    // 0x292398: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x292398u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
label_29239c:
    // 0x29239c: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x29239Cu;
    SET_GPR_U32(ctx, 31, 0x2923A4u);
    ctx->pc = 0x2923A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29239Cu;
            // 0x2923a0: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923A4u; }
        if (ctx->pc != 0x2923A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923A4u; }
        if (ctx->pc != 0x2923A4u) { return; }
    }
    ctx->pc = 0x2923A4u;
label_2923a4:
    // 0x2923a4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2923a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2923a8: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x2923a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x2923ac: 0x24a552e0  addiu       $a1, $a1, 0x52E0
    ctx->pc = 0x2923acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21216));
    // 0x2923b0: 0xc08b18c  jal         func_22C630
    ctx->pc = 0x2923B0u;
    SET_GPR_U32(ctx, 31, 0x2923B8u);
    ctx->pc = 0x2923B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2923B0u;
            // 0x2923b4: 0xaf958308  sw          $s5, -0x7CF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935304), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C630u;
    if (runtime->hasFunction(0x22C630u)) {
        auto targetFn = runtime->lookupFunction(0x22C630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923B8u; }
        if (ctx->pc != 0x2923B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocPallet__18CMenuPosDataManageFP9mgCMemory_0x22c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923B8u; }
        if (ctx->pc != 0x2923B8u) { return; }
    }
    ctx->pc = 0x2923B8u;
label_2923b8:
    // 0x2923b8: 0xc08b2a8  jal         func_22CAA0
    ctx->pc = 0x2923B8u;
    SET_GPR_U32(ctx, 31, 0x2923C0u);
    ctx->pc = 0x2923BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2923B8u;
            // 0x2923bc: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CAA0u;
    if (runtime->hasFunction(0x22CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x22CAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923C0u; }
        if (ctx->pc != 0x2923C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchTransPalletNo__18CMenuPosDataManageFv_0x22caa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923C0u; }
        if (ctx->pc != 0x2923C0u) { return; }
    }
    ctx->pc = 0x2923C0u;
label_2923c0:
    // 0x2923c0: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x2923C0u;
    SET_GPR_U32(ctx, 31, 0x2923C8u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923C8u; }
        if (ctx->pc != 0x2923C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923C8u; }
        if (ctx->pc != 0x2923C8u) { return; }
    }
    ctx->pc = 0x2923C8u;
label_2923c8:
    // 0x2923c8: 0xc0a4790  jal         func_291E40
    ctx->pc = 0x2923C8u;
    SET_GPR_U32(ctx, 31, 0x2923D0u);
    ctx->pc = 0x2923CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2923C8u;
            // 0x2923cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291E40u;
    if (runtime->hasFunction(0x291E40u)) {
        auto targetFn = runtime->lookupFunction(0x291E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923D0u; }
        if (ctx->pc != 0x2923D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachForm__9CShopMenuFv_0x291e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923D0u; }
        if (ctx->pc != 0x2923D0u) { return; }
    }
    ctx->pc = 0x2923D0u;
label_2923d0:
    // 0x2923d0: 0xc08791c  jal         func_21E470
    ctx->pc = 0x2923D0u;
    SET_GPR_U32(ctx, 31, 0x2923D8u);
    ctx->pc = 0x2923D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2923D0u;
            // 0x2923d4: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E470u;
    if (runtime->hasFunction(0x21E470u)) {
        auto targetFn = runtime->lookupFunction(0x21E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923D8u; }
        if (ctx->pc != 0x2923D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachForm__13CMenuMoveItemFv_0x21e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923D8u; }
        if (ctx->pc != 0x2923D8u) { return; }
    }
    ctx->pc = 0x2923D8u;
label_2923d8:
    // 0x2923d8: 0xc068644  jal         func_1A1910
    ctx->pc = 0x2923D8u;
    SET_GPR_U32(ctx, 31, 0x2923E0u);
    ctx->pc = 0x2923DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2923D8u;
            // 0x2923dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923E0u; }
        if (ctx->pc != 0x2923E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923E0u; }
        if (ctx->pc != 0x2923E0u) { return; }
    }
    ctx->pc = 0x2923E0u;
label_2923e0:
    // 0x2923e0: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x2923e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
    // 0x2923e4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2923e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2923e8: 0x3485aaab  ori         $a1, $a0, 0xAAAB
    ctx->pc = 0x2923e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x2923ec: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2923ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2923f0: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x2923f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2923f4: 0x8e8401b4  lw          $a0, 0x1B4($s4)
    ctx->pc = 0x2923f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x2923f8: 0x8e8501b8  lw          $a1, 0x1B8($s4)
    ctx->pc = 0x2923f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x2923fc: 0x1010  mfhi        $v0
    ctx->pc = 0x2923fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x292400: 0xc089b7c  jal         func_226DF0
    ctx->pc = 0x292400u;
    SET_GPR_U32(ctx, 31, 0x292408u);
    ctx->pc = 0x292404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292400u;
            // 0x292404: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226DF0u;
    if (runtime->hasFunction(0x226DF0u)) {
        auto targetFn = runtime->lookupFunction(0x226DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292408u; }
        if (ctx->pc != 0x292408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdSetInfo__Fiiii_0x226df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292408u; }
        if (ctx->pc != 0x292408u) { return; }
    }
    ctx->pc = 0x292408u;
label_292408:
    // 0x292408: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29240c: 0xc0a4810  jal         func_292040
    ctx->pc = 0x29240Cu;
    SET_GPR_U32(ctx, 31, 0x292414u);
    ctx->pc = 0x292410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29240Cu;
            // 0x292410: 0xa38093f8  sb          $zero, -0x6C08($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939640), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292040u;
    if (runtime->hasFunction(0x292040u)) {
        auto targetFn = runtime->lookupFunction(0x292040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292414u; }
        if (ctx->pc != 0x292414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataScrlBar__9CShopMenuFv_0x292040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292414u; }
        if (ctx->pc != 0x292414u) { return; }
    }
    ctx->pc = 0x292414u;
label_292414:
    // 0x292414: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x292414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x292418: 0xc04e780  jal         func_139E00
    ctx->pc = 0x292418u;
    SET_GPR_U32(ctx, 31, 0x292420u);
    ctx->pc = 0x29241Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292418u;
            // 0x29241c: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292420u; }
        if (ctx->pc != 0x292420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292420u; }
        if (ctx->pc != 0x292420u) { return; }
    }
    ctx->pc = 0x292420u;
label_292420:
    // 0x292420: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x292420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x292424: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x292424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x292428: 0x8c235304  lw          $v1, 0x5304($at)
    ctx->pc = 0x292428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21252)));
    // 0x29242c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x29242cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x292430: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x292430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x292434: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x292434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x292438: 0x8c225300  lw          $v0, 0x5300($at)
    ctx->pc = 0x292438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21248)));
    // 0x29243c: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x29243Cu;
    SET_GPR_U32(ctx, 31, 0x292444u);
    ctx->pc = 0x292440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29243Cu;
            // 0x292440: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292444u; }
        if (ctx->pc != 0x292444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292444u; }
        if (ctx->pc != 0x292444u) { return; }
    }
    ctx->pc = 0x292444u;
label_292444:
    // 0x292444: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x292444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x292448: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x292448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29244c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29244cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x292450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292454: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x292454u;
    SET_GPR_U32(ctx, 31, 0x29245Cu);
    ctx->pc = 0x292458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292454u;
            // 0x292458: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29245Cu; }
        if (ctx->pc != 0x29245Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29245Cu; }
        if (ctx->pc != 0x29245Cu) { return; }
    }
    ctx->pc = 0x29245Cu;
label_29245c:
    // 0x29245c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292460: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x292464: 0xa282020c  sb          $v0, 0x20C($s4)
    ctx->pc = 0x292464u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 524), (uint8_t)GPR_U32(ctx, 2));
    // 0x292468: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x292468u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x29246c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x29246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x292470: 0x24a5da78  addiu       $a1, $a1, -0x2588
    ctx->pc = 0x292470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957688));
    // 0x292474: 0xc08ac48  jal         func_22B120
    ctx->pc = 0x292474u;
    SET_GPR_U32(ctx, 31, 0x29247Cu);
    ctx->pc = 0x292478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292474u;
            // 0x292478: 0x24c6da80  addiu       $a2, $a2, -0x2580 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B120u;
    if (runtime->hasFunction(0x22B120u)) {
        auto targetFn = runtime->lookupFunction(0x22B120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29247Cu; }
        if (ctx->pc != 0x29247Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormReLink__14CPosDataManageFPcPc_0x22b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29247Cu; }
        if (ctx->pc != 0x29247Cu) { return; }
    }
    ctx->pc = 0x29247Cu;
label_29247c:
    // 0x29247c: 0xc08fa80  jal         func_23EA00
    ctx->pc = 0x29247Cu;
    SET_GPR_U32(ctx, 31, 0x292484u);
    ctx->pc = 0x292480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29247Cu;
            // 0x292480: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA00u;
    if (runtime->hasFunction(0x23EA00u)) {
        auto targetFn = runtime->lookupFunction(0x23EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292484u; }
        if (ctx->pc != 0x292484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitHaveData__12CMenuKeyFuncFv_0x23ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292484u; }
        if (ctx->pc != 0x292484u) { return; }
    }
    ctx->pc = 0x292484u;
label_292484:
    // 0x292484: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x292484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x292488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x292488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29248c: 0xc08fa94  jal         func_23EA50
    ctx->pc = 0x29248Cu;
    SET_GPR_U32(ctx, 31, 0x292494u);
    ctx->pc = 0x292490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29248Cu;
            // 0x292490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA50u;
    if (runtime->hasFunction(0x23EA50u)) {
        auto targetFn = runtime->lookupFunction(0x23EA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292494u; }
        if (ctx->pc != 0x292494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHaveItemInfo__12CMenuKeyFuncFii_0x23ea50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292494u; }
        if (ctx->pc != 0x292494u) { return; }
    }
    ctx->pc = 0x292494u;
label_292494:
    // 0x292494: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x292494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x292498: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29249c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x29249Cu;
    SET_GPR_U32(ctx, 31, 0x2924A4u);
    ctx->pc = 0x2924A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29249Cu;
            // 0x2924a0: 0x24a5da90  addiu       $a1, $a1, -0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2924A4u; }
        if (ctx->pc != 0x2924A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2924A4u; }
        if (ctx->pc != 0x2924A4u) { return; }
    }
    ctx->pc = 0x2924A4u;
label_2924a4:
    // 0x2924a4: 0x8783983c  lh          $v1, -0x67C4($gp)
    ctx->pc = 0x2924a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x2924a8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2924a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2924ac: 0x24424040  addiu       $v0, $v0, 0x4040
    ctx->pc = 0x2924acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16448));
    // 0x2924b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2924b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2924b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2924b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2924b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2924b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2924bc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2924BCu;
    SET_GPR_U32(ctx, 31, 0x2924C4u);
    ctx->pc = 0x2924C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2924BCu;
            // 0x2924c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2924C4u; }
        if (ctx->pc != 0x2924C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2924C4u; }
        if (ctx->pc != 0x2924C4u) { return; }
    }
    ctx->pc = 0x2924C4u;
label_2924c4:
    // 0x2924c4: 0x8f829840  lw          $v0, -0x67C0($gp)
    ctx->pc = 0x2924c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940736)));
    // 0x2924c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2924c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2924cc: 0x8c30ca44  lw          $s0, -0x35BC($at)
    ctx->pc = 0x2924ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x2924d0: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x2924d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2924d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2924d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2924d8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2924d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2924dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2924dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2924e0: 0xc0876ec  jal         func_21DBB0
    ctx->pc = 0x2924E0u;
    SET_GPR_U32(ctx, 31, 0x2924E8u);
    ctx->pc = 0x2924E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2924E0u;
            // 0x2924e4: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2924E8u; }
        if (ctx->pc != 0x2924E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2924E8u; }
        if (ctx->pc != 0x2924E8u) { return; }
    }
    ctx->pc = 0x2924E8u;
label_2924e8:
    // 0x2924e8: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x2924e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2924ec: 0xc05571c  jal         func_155C70
    ctx->pc = 0x2924ECu;
    SET_GPR_U32(ctx, 31, 0x2924F4u);
    ctx->pc = 0x2924F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2924ECu;
            // 0x2924f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155C70u;
    if (runtime->hasFunction(0x155C70u)) {
        auto targetFn = runtime->lookupFunction(0x155C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2924F4u; }
        if (ctx->pc != 0x2924F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMesWidth_system__6ClsMesFi_0x155c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2924F4u; }
        if (ctx->pc != 0x2924F4u) { return; }
    }
    ctx->pc = 0x2924F4u;
label_2924f4:
    // 0x2924f4: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x2924f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2924f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2924f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2924fc: 0xa68401e0  sh          $a0, 0x1E0($s4)
    ctx->pc = 0x2924fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 480), (uint16_t)GPR_U32(ctx, 4));
    // 0x292500: 0xa68301e2  sh          $v1, 0x1E2($s4)
    ctx->pc = 0x292500u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 482), (uint16_t)GPR_U32(ctx, 3));
    // 0x292504: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x292504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x292508: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x292508u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29250c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29250cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292510: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x292510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292514: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x292514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29251c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29251cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292520: 0x3e00008  jr          $ra
    ctx->pc = 0x292520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292520u;
            // 0x292524: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x292528u;
}
