#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHK_INTERSECTION_POINT__FP12RS_STACKDATAi
// Address: 0x2681e0 - 0x26862c
void ps2__CHK_INTERSECTION_POINT__FP12RS_STACKDATAi_0x2681e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHK_INTERSECTION_POINT__FP12RS_STACKDATAi_0x2681e0");
#endif

    switch (ctx->pc) {
        case 0x268218u: goto label_268218;
        case 0x268228u: goto label_268228;
        case 0x268234u: goto label_268234;
        case 0x268244u: goto label_268244;
        case 0x268258u: goto label_268258;
        case 0x26826cu: goto label_26826c;
        case 0x26827cu: goto label_26827c;
        case 0x268288u: goto label_268288;
        case 0x2682f4u: goto label_2682f4;
        case 0x268344u: goto label_268344;
        case 0x26834cu: goto label_26834c;
        case 0x26836cu: goto label_26836c;
        case 0x26838cu: goto label_26838c;
        case 0x2683a0u: goto label_2683a0;
        case 0x2683b0u: goto label_2683b0;
        case 0x2683d8u: goto label_2683d8;
        case 0x2683ecu: goto label_2683ec;
        case 0x26841cu: goto label_26841c;
        case 0x268440u: goto label_268440;
        case 0x268468u: goto label_268468;
        case 0x26847cu: goto label_26847c;
        case 0x26848cu: goto label_26848c;
        case 0x2684ccu: goto label_2684cc;
        case 0x2684e8u: goto label_2684e8;
        case 0x268500u: goto label_268500;
        case 0x268518u: goto label_268518;
        case 0x268528u: goto label_268528;
        case 0x268538u: goto label_268538;
        case 0x268548u: goto label_268548;
        case 0x26855cu: goto label_26855c;
        case 0x268574u: goto label_268574;
        case 0x268584u: goto label_268584;
        case 0x268594u: goto label_268594;
        case 0x2685a4u: goto label_2685a4;
        case 0x2685b4u: goto label_2685b4;
        case 0x2685c4u: goto label_2685c4;
        case 0x2685d4u: goto label_2685d4;
        case 0x2685e8u: goto label_2685e8;
        default: break;
    }

    ctx->pc = 0x2681e0u;

    // 0x2681e0: 0x27bdaec0  addiu       $sp, $sp, -0x5140
    ctx->pc = 0x2681e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294946496));
    // 0x2681e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2681e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2681e8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2681e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2681ec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2681ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2681f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2681f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2681f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2681f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2681f8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2681f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2681fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2681fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x268200: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x268200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x268204: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x268204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x268208: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x268208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26820c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x268210: 0xc097e18  jal         func_25F860
    ctx->pc = 0x268210u;
    SET_GPR_U32(ctx, 31, 0x268218u);
    ctx->pc = 0x268214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268210u;
            // 0x268214: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268218u; }
        if (ctx->pc != 0x268218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268218u; }
        if (ctx->pc != 0x268218u) { return; }
    }
    ctx->pc = 0x268218u;
label_268218:
    // 0x268218: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x268218u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26821c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x268220: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x268220u;
    SET_GPR_U32(ctx, 31, 0x268228u);
    ctx->pc = 0x268224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268220u;
            // 0x268224: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268228u; }
        if (ctx->pc != 0x268228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268228u; }
        if (ctx->pc != 0x268228u) { return; }
    }
    ctx->pc = 0x268228u;
label_268228:
    // 0x268228: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x268228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x26822c: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26822Cu;
    SET_GPR_U32(ctx, 31, 0x268234u);
    ctx->pc = 0x268230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26822Cu;
            // 0x268230: 0x26850018  addiu       $a1, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268234u; }
        if (ctx->pc != 0x268234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268234u; }
        if (ctx->pc != 0x268234u) { return; }
    }
    ctx->pc = 0x268234u;
label_268234:
    // 0x268234: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x268234u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x268238: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26823c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26823Cu;
    SET_GPR_U32(ctx, 31, 0x268244u);
    ctx->pc = 0x268240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26823Cu;
            // 0x268240: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268244u; }
        if (ctx->pc != 0x268244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268244u; }
        if (ctx->pc != 0x268244u) { return; }
    }
    ctx->pc = 0x268244u;
label_268244:
    // 0x268244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268248: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x268248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26824c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x26824cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x268250: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x268250u;
    SET_GPR_U32(ctx, 31, 0x268258u);
    ctx->pc = 0x268254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268250u;
            // 0x268254: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268258u; }
        if (ctx->pc != 0x268258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268258u; }
        if (ctx->pc != 0x268258u) { return; }
    }
    ctx->pc = 0x268258u;
label_268258:
    // 0x268258: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x268258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x26825c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26825cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x268260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x268260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268264: 0xc041c1e  jal         func_107078
    ctx->pc = 0x268264u;
    SET_GPR_U32(ctx, 31, 0x26826Cu);
    ctx->pc = 0x268268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268264u;
            // 0x268268: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26826Cu; }
        if (ctx->pc != 0x26826Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26826Cu; }
        if (ctx->pc != 0x26826Cu) { return; }
    }
    ctx->pc = 0x26826Cu;
label_26826c:
    // 0x26826c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x26826cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x268270: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x268270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x268274: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x268274u;
    SET_GPR_U32(ctx, 31, 0x26827Cu);
    ctx->pc = 0x268278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268274u;
            // 0x268278: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26827Cu; }
        if (ctx->pc != 0x26827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26827Cu; }
        if (ctx->pc != 0x26827Cu) { return; }
    }
    ctx->pc = 0x26827Cu;
label_26827c:
    // 0x26827c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x26827cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x268280: 0xc04c018  jal         func_130060
    ctx->pc = 0x268280u;
    SET_GPR_U32(ctx, 31, 0x268288u);
    ctx->pc = 0x268284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268280u;
            // 0x268284: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268288u; }
        if (ctx->pc != 0x268288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268288u; }
        if (ctx->pc != 0x268288u) { return; }
    }
    ctx->pc = 0x268288u;
label_268288:
    // 0x268288: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x268288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x26828c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26828cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x268290: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x268290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x268294: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x268294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x268298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26829c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x26829cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2682a0: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x2682a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2682a4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x2682a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2682a8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2682a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2682ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2682acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2682b0: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x2682b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x2682b4: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x2682b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x2682b8: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x2682b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2682bc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2682bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2682c0: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x2682c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2682c4: 0xc7a400e4  lwc1        $f4, 0xE4($sp)
    ctx->pc = 0x2682c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2682c8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2682c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2682cc: 0xc7a500e8  lwc1        $f5, 0xE8($sp)
    ctx->pc = 0x2682ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2682d0: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x2682d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2682d4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2682d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2682d8: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x2682d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2682dc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2682dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2682e0: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x2682e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2682e4: 0x46022801  sub.s       $f0, $f5, $f2
    ctx->pc = 0x2682e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x2682e8: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x2682e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2682ec: 0xc0b1ed4  jal         func_2C7B50
    ctx->pc = 0x2682ECu;
    SET_GPR_U32(ctx, 31, 0x2682F4u);
    ctx->pc = 0x2682F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2682ECu;
            // 0x2682f0: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2682F4u; }
        if (ctx->pc != 0x2682F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2682F4u; }
        if (ctx->pc != 0x2682F4u) { return; }
    }
    ctx->pc = 0x2682F4u;
label_2682f4:
    // 0x2682f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2682f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2682f8: 0x2a010100  slti        $at, $s0, 0x100
    ctx->pc = 0x2682f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2682fc: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x2682FCu;
    {
        const bool branch_taken_0x2682fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x268300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2682FCu;
            // 0x268300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2682fc) {
            ctx->pc = 0x2683FCu;
            goto label_2683fc;
        }
    }
    ctx->pc = 0x268304u;
    // 0x268304: 0x1622003d  bne         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x268304u;
    {
        const bool branch_taken_0x268304 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x268304) {
            ctx->pc = 0x2683FCu;
            goto label_2683fc;
        }
    }
    ctx->pc = 0x26830Cu;
    // 0x26830c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x26830cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x268310: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x268310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x268314: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268314u;
    {
        const bool branch_taken_0x268314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268314) {
            ctx->pc = 0x268324u;
            goto label_268324;
        }
    }
    ctx->pc = 0x26831Cu;
    // 0x26831c: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x26831Cu;
    {
        const bool branch_taken_0x26831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26831Cu;
            // 0x268320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26831c) {
            ctx->pc = 0x2685FCu;
            goto label_2685fc;
        }
    }
    ctx->pc = 0x268324u;
label_268324:
    // 0x268324: 0x8c53007c  lw          $s3, 0x7C($v0)
    ctx->pc = 0x268324u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x268328: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x268328u;
    {
        const bool branch_taken_0x268328 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x26832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268328u;
            // 0x26832c: 0x27a45120  addiu       $a0, $sp, 0x5120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268328) {
            ctx->pc = 0x268338u;
            goto label_268338;
        }
    }
    ctx->pc = 0x268330u;
    // 0x268330: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x268330u;
    {
        const bool branch_taken_0x268330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268330u;
            // 0x268334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268330) {
            ctx->pc = 0x2685FCu;
            goto label_2685fc;
        }
    }
    ctx->pc = 0x268338u;
label_268338:
    // 0x268338: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x268338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x26833c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x26833Cu;
    SET_GPR_U32(ctx, 31, 0x268344u);
    ctx->pc = 0x268340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26833Cu;
            // 0x268340: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268344u; }
        if (ctx->pc != 0x268344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268344u; }
        if (ctx->pc != 0x268344u) { return; }
    }
    ctx->pc = 0x268344u;
label_268344:
    // 0x268344: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x268344u;
    SET_GPR_U32(ctx, 31, 0x26834Cu);
    ctx->pc = 0x268348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268344u;
            // 0x268348: 0x27a45120  addiu       $a0, $sp, 0x5120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26834Cu; }
        if (ctx->pc != 0x26834Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26834Cu; }
        if (ctx->pc != 0x26834Cu) { return; }
    }
    ctx->pc = 0x26834Cu;
label_26834c:
    // 0x26834c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x26834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x268350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x268350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268354: 0x0  nop
    ctx->pc = 0x268354u;
    // NOP
    // 0x268358: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x268358u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26835c: 0x0  nop
    ctx->pc = 0x26835cu;
    // NOP
    // 0x268360: 0x0  nop
    ctx->pc = 0x268360u;
    // NOP
    // 0x268364: 0xc0a248c  jal         func_289230
    ctx->pc = 0x268364u;
    SET_GPR_U32(ctx, 31, 0x26836Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26836Cu; }
        if (ctx->pc != 0x26836Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26836Cu; }
        if (ctx->pc != 0x26836Cu) { return; }
    }
    ctx->pc = 0x26836Cu;
label_26836c:
    // 0x26836c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x26836cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x268370: 0x27a45120  addiu       $a0, $sp, 0x5120
    ctx->pc = 0x268370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
    // 0x268374: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x268374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x268378: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x268378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26837c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x26837cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268380: 0x27a25110  addiu       $v0, $sp, 0x5110
    ctx->pc = 0x268380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20752));
    // 0x268384: 0xc041be0  jal         func_106F80
    ctx->pc = 0x268384u;
    SET_GPR_U32(ctx, 31, 0x26838Cu);
    ctx->pc = 0x268388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268384u;
            // 0x268388: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26838Cu; }
        if (ctx->pc != 0x26838Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26838Cu; }
        if (ctx->pc != 0x26838Cu) { return; }
    }
    ctx->pc = 0x26838Cu;
label_26838c:
    // 0x26838c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x26838cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x268390: 0x27a45120  addiu       $a0, $sp, 0x5120
    ctx->pc = 0x268390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
    // 0x268394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x268394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268398: 0xc041c4a  jal         func_107128
    ctx->pc = 0x268398u;
    SET_GPR_U32(ctx, 31, 0x2683A0u);
    ctx->pc = 0x26839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268398u;
            // 0x26839c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2683A0u; }
        if (ctx->pc != 0x2683A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2683A0u; }
        if (ctx->pc != 0x2683A0u) { return; }
    }
    ctx->pc = 0x2683A0u;
label_2683a0:
    // 0x2683a0: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x2683a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2683a4: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x2683A4u;
    {
        const bool branch_taken_0x2683a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2683A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2683A4u;
            // 0x2683a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683a4) {
            ctx->pc = 0x2683FCu;
            goto label_2683fc;
        }
    }
    ctx->pc = 0x2683ACu;
    // 0x2683ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2683acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2683b0:
    // 0x2683b0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2683b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2683b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2683b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2683b8: 0x504023  subu        $t0, $v0, $s0
    ctx->pc = 0x2683b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2683bc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2683bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2683c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2683c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2683c4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2683c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2683c8: 0x27a55110  addiu       $a1, $sp, 0x5110
    ctx->pc = 0x2683c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20752));
    // 0x2683cc: 0x24460110  addiu       $a2, $v0, 0x110
    ctx->pc = 0x2683ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x2683d0: 0xc0a3248  jal         func_28C920
    ctx->pc = 0x2683D0u;
    SET_GPR_U32(ctx, 31, 0x2683D8u);
    ctx->pc = 0x2683D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2683D0u;
            // 0x2683d4: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C920u;
    if (runtime->hasFunction(0x28C920u)) {
        auto targetFn = runtime->lookupFunction(0x28C920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2683D8u; }
        if (ctx->pc != 0x2683D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupCollision__19CTreasureBoxManagerFPfP6CCPoly9mgVu0FBOXi_0x28c920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2683D8u; }
        if (ctx->pc != 0x2683D8u) { return; }
    }
    ctx->pc = 0x2683D8u;
label_2683d8:
    // 0x2683d8: 0x27a45110  addiu       $a0, $sp, 0x5110
    ctx->pc = 0x2683d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20752));
    // 0x2683dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2683dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2683e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2683e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2683e4: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2683E4u;
    SET_GPR_U32(ctx, 31, 0x2683ECu);
    ctx->pc = 0x2683E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2683E4u;
            // 0x2683e8: 0x27a65120  addiu       $a2, $sp, 0x5120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2683ECu; }
        if (ctx->pc != 0x2683ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2683ECu; }
        if (ctx->pc != 0x2683ECu) { return; }
    }
    ctx->pc = 0x2683ECu;
label_2683ec:
    // 0x2683ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2683ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2683f0: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x2683f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2683f4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2683F4u;
    {
        const bool branch_taken_0x2683f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2683F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2683F4u;
            // 0x2683f8: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683f4) {
            ctx->pc = 0x2683B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2683b0;
        }
    }
    ctx->pc = 0x2683FCu;
label_2683fc:
    // 0x2683fc: 0x0  nop
    ctx->pc = 0x2683fcu;
    // NOP
    // 0x268400: 0x2a010101  slti        $at, $s0, 0x101
    ctx->pc = 0x268400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x268404: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x268404u;
    {
        const bool branch_taken_0x268404 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x268408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268404u;
            // 0x268408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268404) {
            ctx->pc = 0x268420u;
            goto label_268420;
        }
    }
    ctx->pc = 0x26840Cu;
    // 0x26840c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x26840cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x268410: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268414: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x268414u;
    SET_GPR_U32(ctx, 31, 0x26841Cu);
    ctx->pc = 0x268418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268414u;
            // 0x268418: 0x2484c7d0  addiu       $a0, $a0, -0x3830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26841Cu; }
        if (ctx->pc != 0x26841Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26841Cu; }
        if (ctx->pc != 0x26841Cu) { return; }
    }
    ctx->pc = 0x26841Cu;
label_26841c:
    // 0x26841c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26841cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268420:
    // 0x268420: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x268420u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268424: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x268424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x268428: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x268428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26842c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26842cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268430: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x268430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x268434: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x268434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x268438: 0xc053794  jal         func_14DE50
    ctx->pc = 0x268438u;
    SET_GPR_U32(ctx, 31, 0x268440u);
    ctx->pc = 0x26843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268438u;
            // 0x26843c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268440u; }
        if (ctx->pc != 0x268440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268440u; }
        if (ctx->pc != 0x268440u) { return; }
    }
    ctx->pc = 0x268440u;
label_268440:
    // 0x268440: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268444: 0x6200014  bltz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x268444u;
    {
        const bool branch_taken_0x268444 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x268448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268444u;
            // 0x268448: 0x22a2fff7  addi        $v0, $s5, -0x9 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294967287, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x268444) {
            ctx->pc = 0x268498u;
            goto label_268498;
        }
    }
    ctx->pc = 0x26844Cu;
    // 0x26844c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x26844cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x268450: 0x27a45130  addiu       $a0, $sp, 0x5130
    ctx->pc = 0x268450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20784));
    // 0x268454: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x268454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x268458: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x268458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26845c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26845cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x268460: 0xc041be0  jal         func_106F80
    ctx->pc = 0x268460u;
    SET_GPR_U32(ctx, 31, 0x268468u);
    ctx->pc = 0x268464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268460u;
            // 0x268464: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268468u; }
        if (ctx->pc != 0x268468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268468u; }
        if (ctx->pc != 0x268468u) { return; }
    }
    ctx->pc = 0x268468u;
label_268468:
    // 0x268468: 0x27a45130  addiu       $a0, $sp, 0x5130
    ctx->pc = 0x268468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20784));
    // 0x26846c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x26846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x268470: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x268470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x268474: 0xc04bdd8  jal         func_12F760
    ctx->pc = 0x268474u;
    SET_GPR_U32(ctx, 31, 0x26847Cu);
    ctx->pc = 0x268478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268474u;
            // 0x268478: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F760u;
    if (runtime->hasFunction(0x12F760u)) {
        auto targetFn = runtime->lookupFunction(0x12F760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26847Cu; }
        if (ctx->pc != 0x26847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgReflectionPlane__FPfPfPfPf_0x12f760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26847Cu; }
        if (ctx->pc != 0x26847Cu) { return; }
    }
    ctx->pc = 0x26847Cu;
label_26847c:
    // 0x26847c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x26847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x268480: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x268480u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x268484: 0xc041be0  jal         func_106F80
    ctx->pc = 0x268484u;
    SET_GPR_U32(ctx, 31, 0x26848Cu);
    ctx->pc = 0x268488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268484u;
            // 0x268488: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26848Cu; }
        if (ctx->pc != 0x26848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26848Cu; }
        if (ctx->pc != 0x26848Cu) { return; }
    }
    ctx->pc = 0x26848Cu;
label_26848c:
    // 0x26848c: 0x86160044  lh          $s6, 0x44($s0)
    ctx->pc = 0x26848cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x268490: 0x0  nop
    ctx->pc = 0x268490u;
    // NOP
    // 0x268494: 0x22a2fff7  addi        $v0, $s5, -0x9
    ctx->pc = 0x268494u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294967287, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_268498:
    // 0x268498: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x268498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x26849c: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x26849Cu;
    {
        const bool branch_taken_0x26849c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2684A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26849Cu;
            // 0x2684a0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26849c) {
            ctx->pc = 0x2685F0u;
            goto label_2685f0;
        }
    }
    ctx->pc = 0x2684A4u;
    // 0x2684a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2684a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2684a8: 0x2463c810  addiu       $v1, $v1, -0x37F0
    ctx->pc = 0x2684a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952976));
    // 0x2684ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2684acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2684b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2684b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2684b4: 0x400008  jr          $v0
    ctx->pc = 0x2684B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2684BCu: goto label_2684bc;
            case 0x268508u: goto label_268508;
            case 0x268564u: goto label_268564;
            case 0x2685F0u: goto label_2685f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2684BCu;
label_2684bc:
    // 0x2684bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2684bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2684c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684c4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2684C4u;
    SET_GPR_U32(ctx, 31, 0x2684CCu);
    ctx->pc = 0x2684C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2684C4u;
            // 0x2684c8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2684CCu; }
        if (ctx->pc != 0x2684CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2684CCu; }
        if (ctx->pc != 0x2684CCu) { return; }
    }
    ctx->pc = 0x2684CCu;
label_2684cc:
    // 0x2684cc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2684ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2684d0: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2684D0u;
    {
        const bool branch_taken_0x2684d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2684D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2684D0u;
            // 0x2684d4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684d0) {
            ctx->pc = 0x2684ECu;
            goto label_2684ec;
        }
    }
    ctx->pc = 0x2684D8u;
    // 0x2684d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2684d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2684dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684e0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2684E0u;
    SET_GPR_U32(ctx, 31, 0x2684E8u);
    ctx->pc = 0x2684E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2684E0u;
            // 0x2684e4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2684E8u; }
        if (ctx->pc != 0x2684E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2684E8u; }
        if (ctx->pc != 0x2684E8u) { return; }
    }
    ctx->pc = 0x2684E8u;
label_2684e8:
    // 0x2684e8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2684e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2684ec:
    // 0x2684ec: 0x16a20043  bne         $s5, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2684ECu;
    {
        const bool branch_taken_0x2684ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2684F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2684ECu;
            // 0x2684f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684ec) {
            ctx->pc = 0x2685FCu;
            goto label_2685fc;
        }
    }
    ctx->pc = 0x2684F4u;
    // 0x2684f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2684f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684f8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2684F8u;
    SET_GPR_U32(ctx, 31, 0x268500u);
    ctx->pc = 0x2684FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2684F8u;
            // 0x2684fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268500u; }
        if (ctx->pc != 0x268500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268500u; }
        if (ctx->pc != 0x268500u) { return; }
    }
    ctx->pc = 0x268500u;
label_268500:
    // 0x268500: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x268500u;
    {
        const bool branch_taken_0x268500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268500) {
            ctx->pc = 0x2685F8u;
            goto label_2685f8;
        }
    }
    ctx->pc = 0x268508u;
label_268508:
    // 0x268508: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x268508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26850c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268510: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268510u;
    SET_GPR_U32(ctx, 31, 0x268518u);
    ctx->pc = 0x268514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268510u;
            // 0x268514: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268518u; }
        if (ctx->pc != 0x268518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268518u; }
        if (ctx->pc != 0x268518u) { return; }
    }
    ctx->pc = 0x268518u;
label_268518:
    // 0x268518: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x268518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26851c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268520: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268520u;
    SET_GPR_U32(ctx, 31, 0x268528u);
    ctx->pc = 0x268524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268520u;
            // 0x268524: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268528u; }
        if (ctx->pc != 0x268528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268528u; }
        if (ctx->pc != 0x268528u) { return; }
    }
    ctx->pc = 0x268528u;
label_268528:
    // 0x268528: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x268528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26852c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26852cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268530: 0xc097e54  jal         func_25F950
    ctx->pc = 0x268530u;
    SET_GPR_U32(ctx, 31, 0x268538u);
    ctx->pc = 0x268534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268530u;
            // 0x268534: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268538u; }
        if (ctx->pc != 0x268538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268538u; }
        if (ctx->pc != 0x268538u) { return; }
    }
    ctx->pc = 0x268538u;
label_268538:
    // 0x268538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26853c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26853cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268540: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x268540u;
    SET_GPR_U32(ctx, 31, 0x268548u);
    ctx->pc = 0x268544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268540u;
            // 0x268544: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268548u; }
        if (ctx->pc != 0x268548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268548u; }
        if (ctx->pc != 0x268548u) { return; }
    }
    ctx->pc = 0x268548u;
label_268548:
    // 0x268548: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x268548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26854c: 0x16a2002a  bne         $s5, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26854Cu;
    {
        const bool branch_taken_0x26854c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x268550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26854Cu;
            // 0x268550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26854c) {
            ctx->pc = 0x2685F8u;
            goto label_2685f8;
        }
    }
    ctx->pc = 0x268554u;
    // 0x268554: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x268554u;
    SET_GPR_U32(ctx, 31, 0x26855Cu);
    ctx->pc = 0x268558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268554u;
            // 0x268558: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26855Cu; }
        if (ctx->pc != 0x26855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26855Cu; }
        if (ctx->pc != 0x26855Cu) { return; }
    }
    ctx->pc = 0x26855Cu;
label_26855c:
    // 0x26855c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x26855Cu;
    {
        const bool branch_taken_0x26855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26855c) {
            ctx->pc = 0x2685F8u;
            goto label_2685f8;
        }
    }
    ctx->pc = 0x268564u;
label_268564:
    // 0x268564: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x268564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26856c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26856Cu;
    SET_GPR_U32(ctx, 31, 0x268574u);
    ctx->pc = 0x268570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26856Cu;
            // 0x268570: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268574u; }
        if (ctx->pc != 0x268574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268574u; }
        if (ctx->pc != 0x268574u) { return; }
    }
    ctx->pc = 0x268574u;
label_268574:
    // 0x268574: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x268574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268578: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26857c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26857Cu;
    SET_GPR_U32(ctx, 31, 0x268584u);
    ctx->pc = 0x268580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26857Cu;
            // 0x268580: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268584u; }
        if (ctx->pc != 0x268584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268584u; }
        if (ctx->pc != 0x268584u) { return; }
    }
    ctx->pc = 0x268584u;
label_268584:
    // 0x268584: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x268584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26858c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26858Cu;
    SET_GPR_U32(ctx, 31, 0x268594u);
    ctx->pc = 0x268590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26858Cu;
            // 0x268590: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268594u; }
        if (ctx->pc != 0x268594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268594u; }
        if (ctx->pc != 0x268594u) { return; }
    }
    ctx->pc = 0x268594u;
label_268594:
    // 0x268594: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x268594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268598: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26859c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26859Cu;
    SET_GPR_U32(ctx, 31, 0x2685A4u);
    ctx->pc = 0x2685A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26859Cu;
            // 0x2685a0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685A4u; }
        if (ctx->pc != 0x2685A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685A4u; }
        if (ctx->pc != 0x2685A4u) { return; }
    }
    ctx->pc = 0x2685A4u;
label_2685a4:
    // 0x2685a4: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x2685a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2685a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2685a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685ac: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2685ACu;
    SET_GPR_U32(ctx, 31, 0x2685B4u);
    ctx->pc = 0x2685B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2685ACu;
            // 0x2685b0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685B4u; }
        if (ctx->pc != 0x2685B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685B4u; }
        if (ctx->pc != 0x2685B4u) { return; }
    }
    ctx->pc = 0x2685B4u;
label_2685b4:
    // 0x2685b4: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x2685b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2685b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2685b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685bc: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2685BCu;
    SET_GPR_U32(ctx, 31, 0x2685C4u);
    ctx->pc = 0x2685C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2685BCu;
            // 0x2685c0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685C4u; }
        if (ctx->pc != 0x2685C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685C4u; }
        if (ctx->pc != 0x2685C4u) { return; }
    }
    ctx->pc = 0x2685C4u;
label_2685c4:
    // 0x2685c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2685c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2685c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685cc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2685CCu;
    SET_GPR_U32(ctx, 31, 0x2685D4u);
    ctx->pc = 0x2685D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2685CCu;
            // 0x2685d0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685D4u; }
        if (ctx->pc != 0x2685D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685D4u; }
        if (ctx->pc != 0x2685D4u) { return; }
    }
    ctx->pc = 0x2685D4u;
label_2685d4:
    // 0x2685d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2685d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2685d8: 0x16a20007  bne         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2685D8u;
    {
        const bool branch_taken_0x2685d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2685DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2685D8u;
            // 0x2685dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685d8) {
            ctx->pc = 0x2685F8u;
            goto label_2685f8;
        }
    }
    ctx->pc = 0x2685E0u;
    // 0x2685e0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2685E0u;
    SET_GPR_U32(ctx, 31, 0x2685E8u);
    ctx->pc = 0x2685E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2685E0u;
            // 0x2685e4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685E8u; }
        if (ctx->pc != 0x2685E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2685E8u; }
        if (ctx->pc != 0x2685E8u) { return; }
    }
    ctx->pc = 0x2685E8u;
label_2685e8:
    // 0x2685e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2685E8u;
    {
        const bool branch_taken_0x2685e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2685e8) {
            ctx->pc = 0x2685F8u;
            goto label_2685f8;
        }
    }
    ctx->pc = 0x2685F0u;
label_2685f0:
    // 0x2685f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2685F0u;
    {
        const bool branch_taken_0x2685f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2685F0u;
            // 0x2685f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685f0) {
            ctx->pc = 0x2685FCu;
            goto label_2685fc;
        }
    }
    ctx->pc = 0x2685F8u;
label_2685f8:
    // 0x2685f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2685f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2685fc:
    // 0x2685fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2685fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x268600: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x268600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x268604: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x268604u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x268608: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x268608u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26860c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x26860cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x268610: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x268610u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268614: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x268614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268618: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x268618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26861c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26861cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x268620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268624: 0x3e00008  jr          $ra
    ctx->pc = 0x268624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268624u;
            // 0x268628: 0x27bd5140  addiu       $sp, $sp, 0x5140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26862Cu;
}
