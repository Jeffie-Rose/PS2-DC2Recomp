#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHK_INTERSECTION_POINT_PIPE__FP12RS_STACKDATAi
// Address: 0x268630 - 0x268aa8
void ps2__CHK_INTERSECTION_POINT_PIPE__FP12RS_STACKDATAi_0x268630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHK_INTERSECTION_POINT_PIPE__FP12RS_STACKDATAi_0x268630");
#endif

    switch (ctx->pc) {
        case 0x26866cu: goto label_26866c;
        case 0x26867cu: goto label_26867c;
        case 0x268688u: goto label_268688;
        case 0x268698u: goto label_268698;
        case 0x2686a8u: goto label_2686a8;
        case 0x2686bcu: goto label_2686bc;
        case 0x2686d0u: goto label_2686d0;
        case 0x2686e0u: goto label_2686e0;
        case 0x2686ecu: goto label_2686ec;
        case 0x268758u: goto label_268758;
        case 0x2687a8u: goto label_2687a8;
        case 0x2687b0u: goto label_2687b0;
        case 0x2687d0u: goto label_2687d0;
        case 0x2687f0u: goto label_2687f0;
        case 0x268804u: goto label_268804;
        case 0x268814u: goto label_268814;
        case 0x26883cu: goto label_26883c;
        case 0x268850u: goto label_268850;
        case 0x26887cu: goto label_26887c;
        case 0x2688b0u: goto label_2688b0;
        case 0x2688e0u: goto label_2688e0;
        case 0x2688f4u: goto label_2688f4;
        case 0x268904u: goto label_268904;
        case 0x268944u: goto label_268944;
        case 0x268960u: goto label_268960;
        case 0x268978u: goto label_268978;
        case 0x268990u: goto label_268990;
        case 0x2689a0u: goto label_2689a0;
        case 0x2689b0u: goto label_2689b0;
        case 0x2689c0u: goto label_2689c0;
        case 0x2689d4u: goto label_2689d4;
        case 0x2689ecu: goto label_2689ec;
        case 0x2689fcu: goto label_2689fc;
        case 0x268a0cu: goto label_268a0c;
        case 0x268a1cu: goto label_268a1c;
        case 0x268a2cu: goto label_268a2c;
        case 0x268a3cu: goto label_268a3c;
        case 0x268a4cu: goto label_268a4c;
        case 0x268a60u: goto label_268a60;
        default: break;
    }

    ctx->pc = 0x268630u;

    // 0x268630: 0x27bdad80  addiu       $sp, $sp, -0x5280
    ctx->pc = 0x268630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294946176));
    // 0x268634: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x268634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x268638: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x268638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x26863c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x26863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x268640: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x268640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x268644: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x268644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x268648: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x268648u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26864c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x26864cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x268650: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x268650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x268654: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x268654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x268658: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x268658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26865c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x268660: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x268660u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x268664: 0xc097e18  jal         func_25F860
    ctx->pc = 0x268664u;
    SET_GPR_U32(ctx, 31, 0x26866Cu);
    ctx->pc = 0x268668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268664u;
            // 0x268668: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26866Cu; }
        if (ctx->pc != 0x26866Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26866Cu; }
        if (ctx->pc != 0x26866Cu) { return; }
    }
    ctx->pc = 0x26866Cu;
label_26866c:
    // 0x26866c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26866cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268670: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x268670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x268674: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x268674u;
    SET_GPR_U32(ctx, 31, 0x26867Cu);
    ctx->pc = 0x268678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268674u;
            // 0x268678: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26867Cu; }
        if (ctx->pc != 0x26867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26867Cu; }
        if (ctx->pc != 0x26867Cu) { return; }
    }
    ctx->pc = 0x26867Cu;
label_26867c:
    // 0x26867c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x26867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x268680: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x268680u;
    SET_GPR_U32(ctx, 31, 0x268688u);
    ctx->pc = 0x268684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268680u;
            // 0x268684: 0x26850018  addiu       $a1, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268688u; }
        if (ctx->pc != 0x268688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268688u; }
        if (ctx->pc != 0x268688u) { return; }
    }
    ctx->pc = 0x268688u;
label_268688:
    // 0x268688: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x268688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x26868c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268690: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x268690u;
    SET_GPR_U32(ctx, 31, 0x268698u);
    ctx->pc = 0x268694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268690u;
            // 0x268694: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268698u; }
        if (ctx->pc != 0x268698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268698u; }
        if (ctx->pc != 0x268698u) { return; }
    }
    ctx->pc = 0x268698u;
label_268698:
    // 0x268698: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26869c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26869cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2686a0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2686A0u;
    SET_GPR_U32(ctx, 31, 0x2686A8u);
    ctx->pc = 0x2686A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2686A0u;
            // 0x2686a4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686A8u; }
        if (ctx->pc != 0x2686A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686A8u; }
        if (ctx->pc != 0x2686A8u) { return; }
    }
    ctx->pc = 0x2686A8u;
label_2686a8:
    // 0x2686a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2686a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2686ac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2686acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2686b0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2686b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2686b4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2686B4u;
    SET_GPR_U32(ctx, 31, 0x2686BCu);
    ctx->pc = 0x2686B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2686B4u;
            // 0x2686b8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686BCu; }
        if (ctx->pc != 0x2686BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686BCu; }
        if (ctx->pc != 0x2686BCu) { return; }
    }
    ctx->pc = 0x2686BCu;
label_2686bc:
    // 0x2686bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2686bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2686c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2686c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2686c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2686c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2686c8: 0xc041c1e  jal         func_107078
    ctx->pc = 0x2686C8u;
    SET_GPR_U32(ctx, 31, 0x2686D0u);
    ctx->pc = 0x2686CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2686C8u;
            // 0x2686cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686D0u; }
        if (ctx->pc != 0x2686D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686D0u; }
        if (ctx->pc != 0x2686D0u) { return; }
    }
    ctx->pc = 0x2686D0u;
label_2686d0:
    // 0x2686d0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2686d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2686d4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2686d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2686d8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2686D8u;
    SET_GPR_U32(ctx, 31, 0x2686E0u);
    ctx->pc = 0x2686DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2686D8u;
            // 0x2686dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686E0u; }
        if (ctx->pc != 0x2686E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686E0u; }
        if (ctx->pc != 0x2686E0u) { return; }
    }
    ctx->pc = 0x2686E0u;
label_2686e0:
    // 0x2686e0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2686e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2686e4: 0xc04c018  jal         func_130060
    ctx->pc = 0x2686E4u;
    SET_GPR_U32(ctx, 31, 0x2686ECu);
    ctx->pc = 0x2686E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2686E4u;
            // 0x2686e8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686ECu; }
        if (ctx->pc != 0x2686ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2686ECu; }
        if (ctx->pc != 0x2686ECu) { return; }
    }
    ctx->pc = 0x2686ECu;
label_2686ec:
    // 0x2686ec: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2686ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2686f0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2686f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2686f4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2686f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2686f8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2686f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2686fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2686fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268700: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x268700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x268704: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x268704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268708: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x268708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26870c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x26870cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x268710: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x268710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x268714: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x268714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x268718: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x268718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x26871c: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x26871cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x268720: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x268720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x268724: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x268724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x268728: 0xc7a400e4  lwc1        $f4, 0xE4($sp)
    ctx->pc = 0x268728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26872c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x26872cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x268730: 0xc7a500e8  lwc1        $f5, 0xE8($sp)
    ctx->pc = 0x268730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268734: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x268734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x268738: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x268738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x26873c: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x26873cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x268740: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x268740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x268744: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x268744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x268748: 0x46022801  sub.s       $f0, $f5, $f2
    ctx->pc = 0x268748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x26874c: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x26874cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x268750: 0xc0b1ed4  jal         func_2C7B50
    ctx->pc = 0x268750u;
    SET_GPR_U32(ctx, 31, 0x268758u);
    ctx->pc = 0x268754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268750u;
            // 0x268754: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268758u; }
        if (ctx->pc != 0x268758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268758u; }
        if (ctx->pc != 0x268758u) { return; }
    }
    ctx->pc = 0x268758u;
label_268758:
    // 0x268758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26875c: 0x2a010100  slti        $at, $s0, 0x100
    ctx->pc = 0x26875cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x268760: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x268760u;
    {
        const bool branch_taken_0x268760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x268764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268760u;
            // 0x268764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268760) {
            ctx->pc = 0x268860u;
            goto label_268860;
        }
    }
    ctx->pc = 0x268768u;
    // 0x268768: 0x1622003d  bne         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x268768u;
    {
        const bool branch_taken_0x268768 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x268768) {
            ctx->pc = 0x268860u;
            goto label_268860;
        }
    }
    ctx->pc = 0x268770u;
    // 0x268770: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x268770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x268774: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x268774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x268778: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268778u;
    {
        const bool branch_taken_0x268778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268778) {
            ctx->pc = 0x268788u;
            goto label_268788;
        }
    }
    ctx->pc = 0x268780u;
    // 0x268780: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x268780u;
    {
        const bool branch_taken_0x268780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268780u;
            // 0x268784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268780) {
            ctx->pc = 0x268A74u;
            goto label_268a74;
        }
    }
    ctx->pc = 0x268788u;
label_268788:
    // 0x268788: 0x8c53007c  lw          $s3, 0x7C($v0)
    ctx->pc = 0x268788u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x26878c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x26878Cu;
    {
        const bool branch_taken_0x26878c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x268790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26878Cu;
            // 0x268790: 0x27a45120  addiu       $a0, $sp, 0x5120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26878c) {
            ctx->pc = 0x26879Cu;
            goto label_26879c;
        }
    }
    ctx->pc = 0x268794u;
    // 0x268794: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x268794u;
    {
        const bool branch_taken_0x268794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268794u;
            // 0x268798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268794) {
            ctx->pc = 0x268A74u;
            goto label_268a74;
        }
    }
    ctx->pc = 0x26879Cu;
label_26879c:
    // 0x26879c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x26879cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2687a0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2687A0u;
    SET_GPR_U32(ctx, 31, 0x2687A8u);
    ctx->pc = 0x2687A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2687A0u;
            // 0x2687a4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687A8u; }
        if (ctx->pc != 0x2687A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687A8u; }
        if (ctx->pc != 0x2687A8u) { return; }
    }
    ctx->pc = 0x2687A8u;
label_2687a8:
    // 0x2687a8: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x2687A8u;
    SET_GPR_U32(ctx, 31, 0x2687B0u);
    ctx->pc = 0x2687ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2687A8u;
            // 0x2687ac: 0x27a45120  addiu       $a0, $sp, 0x5120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687B0u; }
        if (ctx->pc != 0x2687B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687B0u; }
        if (ctx->pc != 0x2687B0u) { return; }
    }
    ctx->pc = 0x2687B0u;
label_2687b0:
    // 0x2687b0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2687b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2687b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2687b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2687b8: 0x0  nop
    ctx->pc = 0x2687b8u;
    // NOP
    // 0x2687bc: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2687bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2687c0: 0x0  nop
    ctx->pc = 0x2687c0u;
    // NOP
    // 0x2687c4: 0x0  nop
    ctx->pc = 0x2687c4u;
    // NOP
    // 0x2687c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2687C8u;
    SET_GPR_U32(ctx, 31, 0x2687D0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687D0u; }
        if (ctx->pc != 0x2687D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687D0u; }
        if (ctx->pc != 0x2687D0u) { return; }
    }
    ctx->pc = 0x2687D0u;
label_2687d0:
    // 0x2687d0: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x2687d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2687d4: 0x27a45120  addiu       $a0, $sp, 0x5120
    ctx->pc = 0x2687d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
    // 0x2687d8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2687d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2687dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2687dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2687e0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2687e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2687e4: 0x27a25110  addiu       $v0, $sp, 0x5110
    ctx->pc = 0x2687e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20752));
    // 0x2687e8: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2687E8u;
    SET_GPR_U32(ctx, 31, 0x2687F0u);
    ctx->pc = 0x2687ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2687E8u;
            // 0x2687ec: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687F0u; }
        if (ctx->pc != 0x2687F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2687F0u; }
        if (ctx->pc != 0x2687F0u) { return; }
    }
    ctx->pc = 0x2687F0u;
label_2687f0:
    // 0x2687f0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2687f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2687f4: 0x27a45120  addiu       $a0, $sp, 0x5120
    ctx->pc = 0x2687f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
    // 0x2687f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2687f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2687fc: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2687FCu;
    SET_GPR_U32(ctx, 31, 0x268804u);
    ctx->pc = 0x268800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2687FCu;
            // 0x268800: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268804u; }
        if (ctx->pc != 0x268804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268804u; }
        if (ctx->pc != 0x268804u) { return; }
    }
    ctx->pc = 0x268804u;
label_268804:
    // 0x268804: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x268804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x268808: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x268808u;
    {
        const bool branch_taken_0x268808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26880Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268808u;
            // 0x26880c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268808) {
            ctx->pc = 0x268860u;
            goto label_268860;
        }
    }
    ctx->pc = 0x268810u;
    // 0x268810: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x268810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_268814:
    // 0x268814: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x268814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x268818: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x268818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26881c: 0x504023  subu        $t0, $v0, $s0
    ctx->pc = 0x26881cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x268820: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x268820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x268824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x268824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268828: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x268828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x26882c: 0x27a55110  addiu       $a1, $sp, 0x5110
    ctx->pc = 0x26882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20752));
    // 0x268830: 0x24460110  addiu       $a2, $v0, 0x110
    ctx->pc = 0x268830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x268834: 0xc0a3248  jal         func_28C920
    ctx->pc = 0x268834u;
    SET_GPR_U32(ctx, 31, 0x26883Cu);
    ctx->pc = 0x268838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268834u;
            // 0x268838: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C920u;
    if (runtime->hasFunction(0x28C920u)) {
        auto targetFn = runtime->lookupFunction(0x28C920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26883Cu; }
        if (ctx->pc != 0x26883Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupCollision__19CTreasureBoxManagerFPfP6CCPoly9mgVu0FBOXi_0x28c920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26883Cu; }
        if (ctx->pc != 0x26883Cu) { return; }
    }
    ctx->pc = 0x26883Cu;
label_26883c:
    // 0x26883c: 0x27a45110  addiu       $a0, $sp, 0x5110
    ctx->pc = 0x26883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20752));
    // 0x268840: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x268840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x268844: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x268844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268848: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x268848u;
    SET_GPR_U32(ctx, 31, 0x268850u);
    ctx->pc = 0x26884Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268848u;
            // 0x26884c: 0x27a65120  addiu       $a2, $sp, 0x5120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268850u; }
        if (ctx->pc != 0x268850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268850u; }
        if (ctx->pc != 0x268850u) { return; }
    }
    ctx->pc = 0x268850u;
label_268850:
    // 0x268850: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x268850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x268854: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x268854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x268858: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x268858u;
    {
        const bool branch_taken_0x268858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26885Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268858u;
            // 0x26885c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268858) {
            ctx->pc = 0x268814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268814;
        }
    }
    ctx->pc = 0x268860u;
label_268860:
    // 0x268860: 0x2a010101  slti        $at, $s0, 0x101
    ctx->pc = 0x268860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x268864: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x268864u;
    {
        const bool branch_taken_0x268864 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x268868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268864u;
            // 0x268868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268864) {
            ctx->pc = 0x268880u;
            goto label_268880;
        }
    }
    ctx->pc = 0x26886Cu;
    // 0x26886c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x26886cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x268870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268874: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x268874u;
    SET_GPR_U32(ctx, 31, 0x26887Cu);
    ctx->pc = 0x268878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268874u;
            // 0x268878: 0x2484c7d0  addiu       $a0, $a0, -0x3830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26887Cu; }
        if (ctx->pc != 0x26887Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26887Cu; }
        if (ctx->pc != 0x26887Cu) { return; }
    }
    ctx->pc = 0x26887Cu;
label_26887c:
    // 0x26887c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26887cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268880:
    // 0x268880: 0x27b200bc  addiu       $s2, $sp, 0xBC
    ctx->pc = 0x268880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x268884: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x268884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x268888: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x268888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x26888c: 0xe6550000  swc1        $f21, 0x0($s2)
    ctx->pc = 0x26888cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x268890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268894: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x268894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x268898: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x268898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26889c: 0x27a95130  addiu       $t1, $sp, 0x5130
    ctx->pc = 0x26889cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 20784));
    // 0x2688a0: 0x27aa5170  addiu       $t2, $sp, 0x5170
    ctx->pc = 0x2688a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20848));
    // 0x2688a4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2688a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2688a8: 0xc053b3c  jal         func_14ECF0
    ctx->pc = 0x2688A8u;
    SET_GPR_U32(ctx, 31, 0x2688B0u);
    ctx->pc = 0x2688ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2688A8u;
            // 0x2688ac: 0xffb70000  sd          $s7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF0u;
    if (runtime->hasFunction(0x14ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688B0u; }
        if (ctx->pc != 0x2688B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688B0u; }
        if (ctx->pc != 0x2688B0u) { return; }
    }
    ctx->pc = 0x2688B0u;
label_2688b0:
    // 0x2688b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2688b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2688b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2688b8: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2688B8u;
    {
        const bool branch_taken_0x2688b8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2688BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2688B8u;
            // 0x2688bc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688b8) {
            ctx->pc = 0x26890Cu;
            goto label_26890c;
        }
    }
    ctx->pc = 0x2688C0u;
    // 0x2688c0: 0x8fa35130  lw          $v1, 0x5130($sp)
    ctx->pc = 0x2688c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20784)));
    // 0x2688c4: 0x27a45270  addiu       $a0, $sp, 0x5270
    ctx->pc = 0x2688c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 21104));
    // 0x2688c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2688c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2688cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2688ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2688d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2688d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2688d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2688d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2688d8: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2688D8u;
    SET_GPR_U32(ctx, 31, 0x2688E0u);
    ctx->pc = 0x2688DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2688D8u;
            // 0x2688dc: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688E0u; }
        if (ctx->pc != 0x2688E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688E0u; }
        if (ctx->pc != 0x2688E0u) { return; }
    }
    ctx->pc = 0x2688E0u;
label_2688e0:
    // 0x2688e0: 0x27a45270  addiu       $a0, $sp, 0x5270
    ctx->pc = 0x2688e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 21104));
    // 0x2688e4: 0x27a55170  addiu       $a1, $sp, 0x5170
    ctx->pc = 0x2688e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20848));
    // 0x2688e8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2688e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2688ec: 0xc04bdd8  jal         func_12F760
    ctx->pc = 0x2688ECu;
    SET_GPR_U32(ctx, 31, 0x2688F4u);
    ctx->pc = 0x2688F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2688ECu;
            // 0x2688f0: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F760u;
    if (runtime->hasFunction(0x12F760u)) {
        auto targetFn = runtime->lookupFunction(0x12F760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688F4u; }
        if (ctx->pc != 0x2688F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgReflectionPlane__FPfPfPfPf_0x12f760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2688F4u; }
        if (ctx->pc != 0x2688F4u) { return; }
    }
    ctx->pc = 0x2688F4u;
label_2688f4:
    // 0x2688f4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2688f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2688f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2688f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2688fc: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2688FCu;
    SET_GPR_U32(ctx, 31, 0x268904u);
    ctx->pc = 0x268900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2688FCu;
            // 0x268900: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268904u; }
        if (ctx->pc != 0x268904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268904u; }
        if (ctx->pc != 0x268904u) { return; }
    }
    ctx->pc = 0x268904u;
label_268904:
    // 0x268904: 0x86160044  lh          $s6, 0x44($s0)
    ctx->pc = 0x268904u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x268908: 0x0  nop
    ctx->pc = 0x268908u;
    // NOP
label_26890c:
    // 0x26890c: 0x22a2fff6  addi        $v0, $s5, -0xA
    ctx->pc = 0x26890cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294967286, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x268910: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x268910u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x268914: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x268914u;
    {
        const bool branch_taken_0x268914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x268918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268914u;
            // 0x268918: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268914) {
            ctx->pc = 0x268A68u;
            goto label_268a68;
        }
    }
    ctx->pc = 0x26891Cu;
    // 0x26891c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26891cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x268920: 0x2463c830  addiu       $v1, $v1, -0x37D0
    ctx->pc = 0x268920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953008));
    // 0x268924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268928: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x268928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26892c: 0x400008  jr          $v0
    ctx->pc = 0x26892Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268934u: goto label_268934;
            case 0x268980u: goto label_268980;
            case 0x2689DCu: goto label_2689dc;
            case 0x268A68u: goto label_268a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268934u;
label_268934:
    // 0x268934: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268938: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x268938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26893c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26893Cu;
    SET_GPR_U32(ctx, 31, 0x268944u);
    ctx->pc = 0x268940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26893Cu;
            // 0x268940: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268944u; }
        if (ctx->pc != 0x268944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268944u; }
        if (ctx->pc != 0x268944u) { return; }
    }
    ctx->pc = 0x268944u;
label_268944:
    // 0x268944: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x268944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x268948: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x268948u;
    {
        const bool branch_taken_0x268948 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x26894Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268948u;
            // 0x26894c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268948) {
            ctx->pc = 0x268964u;
            goto label_268964;
        }
    }
    ctx->pc = 0x268950u;
    // 0x268950: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268954: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x268954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268958: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x268958u;
    SET_GPR_U32(ctx, 31, 0x268960u);
    ctx->pc = 0x26895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268958u;
            // 0x26895c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268960u; }
        if (ctx->pc != 0x268960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268960u; }
        if (ctx->pc != 0x268960u) { return; }
    }
    ctx->pc = 0x268960u;
label_268960:
    // 0x268960: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x268960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_268964:
    // 0x268964: 0x16a20043  bne         $s5, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x268964u;
    {
        const bool branch_taken_0x268964 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x268968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268964u;
            // 0x268968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268964) {
            ctx->pc = 0x268A74u;
            goto label_268a74;
        }
    }
    ctx->pc = 0x26896Cu;
    // 0x26896c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268970: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268970u;
    SET_GPR_U32(ctx, 31, 0x268978u);
    ctx->pc = 0x268974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268970u;
            // 0x268974: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268978u; }
        if (ctx->pc != 0x268978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268978u; }
        if (ctx->pc != 0x268978u) { return; }
    }
    ctx->pc = 0x268978u;
label_268978:
    // 0x268978: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x268978u;
    {
        const bool branch_taken_0x268978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268978) {
            ctx->pc = 0x268A70u;
            goto label_268a70;
        }
    }
    ctx->pc = 0x268980u;
label_268980:
    // 0x268980: 0xc7ac5170  lwc1        $f12, 0x5170($sp)
    ctx->pc = 0x268980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268988: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268988u;
    SET_GPR_U32(ctx, 31, 0x268990u);
    ctx->pc = 0x26898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268988u;
            // 0x26898c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268990u; }
        if (ctx->pc != 0x268990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268990u; }
        if (ctx->pc != 0x268990u) { return; }
    }
    ctx->pc = 0x268990u;
label_268990:
    // 0x268990: 0xc7ac5174  lwc1        $f12, 0x5174($sp)
    ctx->pc = 0x268990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268994: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268998: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268998u;
    SET_GPR_U32(ctx, 31, 0x2689A0u);
    ctx->pc = 0x26899Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268998u;
            // 0x26899c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689A0u; }
        if (ctx->pc != 0x2689A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689A0u; }
        if (ctx->pc != 0x2689A0u) { return; }
    }
    ctx->pc = 0x2689A0u;
label_2689a0:
    // 0x2689a0: 0xc7ac5178  lwc1        $f12, 0x5178($sp)
    ctx->pc = 0x2689a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2689a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2689a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689a8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2689A8u;
    SET_GPR_U32(ctx, 31, 0x2689B0u);
    ctx->pc = 0x2689ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2689A8u;
            // 0x2689ac: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689B0u; }
        if (ctx->pc != 0x2689B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689B0u; }
        if (ctx->pc != 0x2689B0u) { return; }
    }
    ctx->pc = 0x2689B0u;
label_2689b0:
    // 0x2689b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2689b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2689b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689b8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2689B8u;
    SET_GPR_U32(ctx, 31, 0x2689C0u);
    ctx->pc = 0x2689BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2689B8u;
            // 0x2689bc: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689C0u; }
        if (ctx->pc != 0x2689C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689C0u; }
        if (ctx->pc != 0x2689C0u) { return; }
    }
    ctx->pc = 0x2689C0u;
label_2689c0:
    // 0x2689c0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2689c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2689c4: 0x16a2002a  bne         $s5, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2689C4u;
    {
        const bool branch_taken_0x2689c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2689C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2689C4u;
            // 0x2689c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2689c4) {
            ctx->pc = 0x268A70u;
            goto label_268a70;
        }
    }
    ctx->pc = 0x2689CCu;
    // 0x2689cc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2689CCu;
    SET_GPR_U32(ctx, 31, 0x2689D4u);
    ctx->pc = 0x2689D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2689CCu;
            // 0x2689d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689D4u; }
        if (ctx->pc != 0x2689D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689D4u; }
        if (ctx->pc != 0x2689D4u) { return; }
    }
    ctx->pc = 0x2689D4u;
label_2689d4:
    // 0x2689d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2689D4u;
    {
        const bool branch_taken_0x2689d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2689d4) {
            ctx->pc = 0x268A70u;
            goto label_268a70;
        }
    }
    ctx->pc = 0x2689DCu;
label_2689dc:
    // 0x2689dc: 0xc7ac5170  lwc1        $f12, 0x5170($sp)
    ctx->pc = 0x2689dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2689e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2689e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689e4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2689E4u;
    SET_GPR_U32(ctx, 31, 0x2689ECu);
    ctx->pc = 0x2689E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2689E4u;
            // 0x2689e8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689ECu; }
        if (ctx->pc != 0x2689ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689ECu; }
        if (ctx->pc != 0x2689ECu) { return; }
    }
    ctx->pc = 0x2689ECu;
label_2689ec:
    // 0x2689ec: 0xc7ac5174  lwc1        $f12, 0x5174($sp)
    ctx->pc = 0x2689ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2689f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2689f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689f4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2689F4u;
    SET_GPR_U32(ctx, 31, 0x2689FCu);
    ctx->pc = 0x2689F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2689F4u;
            // 0x2689f8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689FCu; }
        if (ctx->pc != 0x2689FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2689FCu; }
        if (ctx->pc != 0x2689FCu) { return; }
    }
    ctx->pc = 0x2689FCu;
label_2689fc:
    // 0x2689fc: 0xc7ac5178  lwc1        $f12, 0x5178($sp)
    ctx->pc = 0x2689fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268a00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a04: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268A04u;
    SET_GPR_U32(ctx, 31, 0x268A0Cu);
    ctx->pc = 0x268A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268A04u;
            // 0x268a08: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A0Cu; }
        if (ctx->pc != 0x268A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A0Cu; }
        if (ctx->pc != 0x268A0Cu) { return; }
    }
    ctx->pc = 0x268A0Cu;
label_268a0c:
    // 0x268a0c: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x268a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268a10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a14: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268A14u;
    SET_GPR_U32(ctx, 31, 0x268A1Cu);
    ctx->pc = 0x268A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268A14u;
            // 0x268a18: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A1Cu; }
        if (ctx->pc != 0x268A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A1Cu; }
        if (ctx->pc != 0x268A1Cu) { return; }
    }
    ctx->pc = 0x268A1Cu;
label_268a1c:
    // 0x268a1c: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x268a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268a20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a24: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268A24u;
    SET_GPR_U32(ctx, 31, 0x268A2Cu);
    ctx->pc = 0x268A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268A24u;
            // 0x268a28: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A2Cu; }
        if (ctx->pc != 0x268A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A2Cu; }
        if (ctx->pc != 0x268A2Cu) { return; }
    }
    ctx->pc = 0x268A2Cu;
label_268a2c:
    // 0x268a2c: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x268a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268a30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a34: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268A34u;
    SET_GPR_U32(ctx, 31, 0x268A3Cu);
    ctx->pc = 0x268A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268A34u;
            // 0x268a38: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A3Cu; }
        if (ctx->pc != 0x268A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A3Cu; }
        if (ctx->pc != 0x268A3Cu) { return; }
    }
    ctx->pc = 0x268A3Cu;
label_268a3c:
    // 0x268a3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x268a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a44: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x268A44u;
    SET_GPR_U32(ctx, 31, 0x268A4Cu);
    ctx->pc = 0x268A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268A44u;
            // 0x268a48: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A4Cu; }
        if (ctx->pc != 0x268A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A4Cu; }
        if (ctx->pc != 0x268A4Cu) { return; }
    }
    ctx->pc = 0x268A4Cu;
label_268a4c:
    // 0x268a4c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x268a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x268a50: 0x16a20007  bne         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x268A50u;
    {
        const bool branch_taken_0x268a50 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x268A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268A50u;
            // 0x268a54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a50) {
            ctx->pc = 0x268A70u;
            goto label_268a70;
        }
    }
    ctx->pc = 0x268A58u;
    // 0x268a58: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x268A58u;
    SET_GPR_U32(ctx, 31, 0x268A60u);
    ctx->pc = 0x268A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268A58u;
            // 0x268a5c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A60u; }
        if (ctx->pc != 0x268A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268A60u; }
        if (ctx->pc != 0x268A60u) { return; }
    }
    ctx->pc = 0x268A60u;
label_268a60:
    // 0x268a60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x268A60u;
    {
        const bool branch_taken_0x268a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268a60) {
            ctx->pc = 0x268A70u;
            goto label_268a70;
        }
    }
    ctx->pc = 0x268A68u;
label_268a68:
    // 0x268a68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268A68u;
    {
        const bool branch_taken_0x268a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268A68u;
            // 0x268a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a68) {
            ctx->pc = 0x268A74u;
            goto label_268a74;
        }
    }
    ctx->pc = 0x268A70u;
label_268a70:
    // 0x268a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268a74:
    // 0x268a74: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x268a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x268a78: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x268a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x268a7c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x268a7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x268a80: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x268a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x268a84: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x268a84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x268a88: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x268a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268a8c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x268a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x268a90: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x268a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268a94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x268a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268a98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x268a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268a9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x268a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x268AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268AA0u;
            // 0x268aa4: 0x27bd5280  addiu       $sp, $sp, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 21120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268AA8u;
}
