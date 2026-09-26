#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DivSpriteScreen__FR11mgCDrawPrim
// Address: 0x3077f0 - 0x307ad0
void DivSpriteScreen__FR11mgCDrawPrim_0x3077f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DivSpriteScreen__FR11mgCDrawPrim_0x3077f0");
#endif

    switch (ctx->pc) {
        case 0x30784cu: goto label_30784c;
        case 0x3078e8u: goto label_3078e8;
        case 0x3078fcu: goto label_3078fc;
        case 0x30790cu: goto label_30790c;
        case 0x307920u: goto label_307920;
        case 0x307930u: goto label_307930;
        case 0x307978u: goto label_307978;
        case 0x30798cu: goto label_30798c;
        case 0x3079b8u: goto label_3079b8;
        case 0x3079dcu: goto label_3079dc;
        case 0x3079e4u: goto label_3079e4;
        case 0x307a18u: goto label_307a18;
        case 0x307aa0u: goto label_307aa0;
        default: break;
    }

    ctx->pc = 0x3077f0u;

    // 0x3077f0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3077f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3077f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3077f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3077f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3077f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3077fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3077fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x307800: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x307800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x307804: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x307804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x307808: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x307808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30780c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x307810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x307814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x307814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x307818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30781c: 0x8382a184  lb          $v0, -0x5E7C($gp)
    ctx->pc = 0x30781cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943108)));
    // 0x307820: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307820u;
    {
        const bool branch_taken_0x307820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307820u;
            // 0x307824: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307820) {
            ctx->pc = 0x307834u;
            goto label_307834;
        }
    }
    ctx->pc = 0x307828u;
    // 0x307828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x307828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30782c: 0xaf80a180  sw          $zero, -0x5E80($gp)
    ctx->pc = 0x30782cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943104), GPR_U32(ctx, 0));
    // 0x307830: 0xa382a184  sb          $v0, -0x5E7C($gp)
    ctx->pc = 0x307830u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943108), (uint8_t)GPR_U32(ctx, 2));
label_307834:
    // 0x307834: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x307834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307838: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x307838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30783c: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x30783cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x307840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x307840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307844: 0xc04d224  jal         func_134890
    ctx->pc = 0x307844u;
    SET_GPR_U32(ctx, 31, 0x30784Cu);
    ctx->pc = 0x307848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307844u;
            // 0x307848: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134890u;
    if (runtime->hasFunction(0x134890u)) {
        auto targetFn = runtime->lookupFunction(0x134890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30784Cu; }
        if (ctx->pc != 0x30784Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFiUiUii_0x134890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30784Cu; }
        if (ctx->pc != 0x30784Cu) { return; }
    }
    ctx->pc = 0x30784Cu;
label_30784c:
    // 0x30784c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30784cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x307850: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x307850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x307854: 0x2442a400  addiu       $v0, $v0, -0x5C00
    ctx->pc = 0x307854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943744));
    // 0x307858: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x307858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30785c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x30785cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307860: 0x2463dab0  addiu       $v1, $v1, -0x2550
    ctx->pc = 0x307860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957744));
    // 0x307864: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x307864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x307868: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x307868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x30786c: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x30786cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x307870: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x307870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x307874: 0x8f898798  lw          $t1, -0x7868($gp)
    ctx->pc = 0x307874u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x307878: 0x3446aaab  ori         $a2, $v0, 0xAAAB
    ctx->pc = 0x307878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x30787c: 0x8f88879c  lw          $t0, -0x7864($gp)
    ctx->pc = 0x30787cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x307880: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x307880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x307884: 0x8f878784  lw          $a3, -0x787C($gp)
    ctx->pc = 0x307884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x307888: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x307888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x30788c: 0x8f9e8780  lw          $fp, -0x7880($gp)
    ctx->pc = 0x30788cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x307890: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x307890u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x307894: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x307894u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x307898: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x307898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x30789c: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x30789cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3078a0: 0xafa800c4  sw          $t0, 0xC4($sp)
    ctx->pc = 0x3078a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 8));
    // 0x3078a4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3078a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3078a8: 0x3010  mfhi        $a2
    ctx->pc = 0x3078a8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x3078ac: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x3078acu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x3078b0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3078b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3078b4: 0x618c3  sra         $v1, $a2, 3
    ctx->pc = 0x3078b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 3));
    // 0x3078b8: 0x678021  addu        $s0, $v1, $a3
    ctx->pc = 0x3078b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3078bc: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x3078bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3078c0: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x3078c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x3078c4: 0x0  nop
    ctx->pc = 0x3078c4u;
    // NOP
    // 0x3078c8: 0x1010  mfhi        $v0
    ctx->pc = 0x3078c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3078cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3078ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3078d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3078d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3078d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3078d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3078d8: 0x0  nop
    ctx->pc = 0x3078d8u;
    // NOP
    // 0x3078dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3078dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3078e0: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x3078E0u;
    SET_GPR_U32(ctx, 31, 0x3078E8u);
    ctx->pc = 0x3078E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3078E0u;
            // 0x3078e4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078E8u; }
        if (ctx->pc != 0x3078E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3078E8u; }
        if (ctx->pc != 0x3078E8u) { return; }
    }
    ctx->pc = 0x3078E8u;
label_3078e8:
    // 0x3078e8: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x3078e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x3078ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3078ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078f0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3078f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078f4: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3078F4u;
    {
        const bool branch_taken_0x3078f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3078F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3078F4u;
            // 0x3078f8: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078f4) {
            ctx->pc = 0x307A44u;
            goto label_307a44;
        }
    }
    ctx->pc = 0x3078FCu;
label_3078fc:
    // 0x3078fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3078fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307900: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307904: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x307904u;
    {
        const bool branch_taken_0x307904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307904u;
            // 0x307908: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307904) {
            ctx->pc = 0x307A24u;
            goto label_307a24;
        }
    }
    ctx->pc = 0x30790Cu;
label_30790c:
    // 0x30790c: 0x0  nop
    ctx->pc = 0x30790cu;
    // NOP
    // 0x307910: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x307910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x307914: 0xc78ca180  lwc1        $f12, -0x5E80($gp)
    ctx->pc = 0x307914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x307918: 0xc041ca2  jal         func_107288
    ctx->pc = 0x307918u;
    SET_GPR_U32(ctx, 31, 0x307920u);
    ctx->pc = 0x30791Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307918u;
            // 0x30791c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107288u;
    if (runtime->hasFunction(0x107288u)) {
        auto targetFn = runtime->lookupFunction(0x107288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307920u; }
        if (ctx->pc != 0x307920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x107288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307920u; }
        if (ctx->pc != 0x307920u) { return; }
    }
    ctx->pc = 0x307920u;
label_307920:
    // 0x307920: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x307920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x307924: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x307924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x307928: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x307928u;
    SET_GPR_U32(ctx, 31, 0x307930u);
    ctx->pc = 0x30792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307928u;
            // 0x30792c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307930u; }
        if (ctx->pc != 0x307930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307930u; }
        if (ctx->pc != 0x307930u) { return; }
    }
    ctx->pc = 0x307930u;
label_307930:
    // 0x307930: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x307930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x307934: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x307934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x307938: 0x2442a410  addiu       $v0, $v0, -0x5BF0
    ctx->pc = 0x307938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943760));
    // 0x30793c: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x30793cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x307940: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x307940u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307944: 0x2463a420  addiu       $v1, $v1, -0x5BE0
    ctx->pc = 0x307944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943776));
    // 0x307948: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x307948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x30794c: 0x27b30134  addiu       $s3, $sp, 0x134
    ctx->pc = 0x30794cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x307950: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x307950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307954: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x307954u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x307958: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x307958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30795c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30795cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307960: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x307960u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x307964: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x307964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307968: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x307968u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x30796c: 0xafb70130  sw          $s7, 0x130($sp)
    ctx->pc = 0x30796cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 23));
    // 0x307970: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x307970u;
    SET_GPR_U32(ctx, 31, 0x307978u);
    ctx->pc = 0x307974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307970u;
            // 0x307974: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307978u; }
        if (ctx->pc != 0x307978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307978u; }
        if (ctx->pc != 0x307978u) { return; }
    }
    ctx->pc = 0x307978u;
label_307978:
    // 0x307978: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x307978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30797c: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x30797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x307980: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x307980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x307984: 0xc0a248c  jal         func_289230
    ctx->pc = 0x307984u;
    SET_GPR_U32(ctx, 31, 0x30798Cu);
    ctx->pc = 0x307988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307984u;
            // 0x307988: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30798Cu; }
        if (ctx->pc != 0x30798Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30798Cu; }
        if (ctx->pc != 0x30798Cu) { return; }
    }
    ctx->pc = 0x30798Cu;
label_30798c:
    // 0x30798c: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x30798cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x307990: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x307990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307994: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x307994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x307998: 0x27b50124  addiu       $s5, $sp, 0x124
    ctx->pc = 0x307998u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x30799c: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x30799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x3079a0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3079a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3079a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3079a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3079a8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x3079a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3079ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3079acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3079b0: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x3079B0u;
    SET_GPR_U32(ctx, 31, 0x3079B8u);
    ctx->pc = 0x3079B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3079B0u;
            // 0x3079b4: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3079B8u; }
        if (ctx->pc != 0x3079B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3079B8u; }
        if (ctx->pc != 0x3079B8u) { return; }
    }
    ctx->pc = 0x3079B8u;
label_3079b8:
    // 0x3079b8: 0x2de1821  addu        $v1, $s6, $fp
    ctx->pc = 0x3079b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x3079bc: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x3079bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3079c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3079c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3079c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3079c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3079c8: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x3079c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x3079cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3079ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3079d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3079d4: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x3079D4u;
    SET_GPR_U32(ctx, 31, 0x3079DCu);
    ctx->pc = 0x3079D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3079D4u;
            // 0x3079d8: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3079DCu; }
        if (ctx->pc != 0x3079DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3079DCu; }
        if (ctx->pc != 0x3079DCu) { return; }
    }
    ctx->pc = 0x3079DCu;
label_3079dc:
    // 0x3079dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3079DCu;
    SET_GPR_U32(ctx, 31, 0x3079E4u);
    ctx->pc = 0x3079E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3079DCu;
            // 0x3079e0: 0xc7ac00d0  lwc1        $f12, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3079E4u; }
        if (ctx->pc != 0x3079E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3079E4u; }
        if (ctx->pc != 0x3079E4u) { return; }
    }
    ctx->pc = 0x3079E4u;
label_3079e4:
    // 0x3079e4: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x3079e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3079e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3079e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079ec: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3079ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3079f0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x3079f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3079f4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3079f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3079f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3079f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3079fc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x3079fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x307a00: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x307a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x307a04: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x307a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x307a08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x307a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307a0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x307a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x307a10: 0xc04d2b8  jal         func_134AE0
    ctx->pc = 0x307A10u;
    SET_GPR_U32(ctx, 31, 0x307A18u);
    ctx->pc = 0x307A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307A10u;
            // 0x307a14: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AE0u;
    if (runtime->hasFunction(0x134AE0u)) {
        auto targetFn = runtime->lookupFunction(0x134AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A18u; }
        if (ctx->pc != 0x307A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data__11mgCDrawPrimFPi_0x134ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A18u; }
        if (ctx->pc != 0x307A18u) { return; }
    }
    ctx->pc = 0x307A18u;
label_307a18:
    // 0x307a18: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x307a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x307a1c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x307a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x307a20: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x307a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_307a24:
    // 0x307a24: 0x0  nop
    ctx->pc = 0x307a24u;
    // NOP
    // 0x307a28: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x307a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x307a2c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x307a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x307a30: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x307A30u;
    {
        const bool branch_taken_0x307a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307a30) {
            ctx->pc = 0x30790Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30790c;
        }
    }
    ctx->pc = 0x307A38u;
    // 0x307a38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x307a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x307a3c: 0x2deb021  addu        $s6, $s6, $fp
    ctx->pc = 0x307a3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x307a40: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x307a40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_307a44:
    // 0x307a44: 0x0  nop
    ctx->pc = 0x307a44u;
    // NOP
    // 0x307a48: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x307a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x307a4c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x307a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x307a50: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x307A50u;
    {
        const bool branch_taken_0x307a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307A50u;
            // 0x307a54: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a50) {
            ctx->pc = 0x3078FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3078fc;
        }
    }
    ctx->pc = 0x307A58u;
    // 0x307a58: 0xc782a180  lwc1        $f2, -0x5E80($gp)
    ctx->pc = 0x307a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x307a5c: 0x3c0239e4  lui         $v0, 0x39E4
    ctx->pc = 0x307a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14820 << 16));
    // 0x307a60: 0x3443c388  ori         $v1, $v0, 0xC388
    ctx->pc = 0x307a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x307a64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x307a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307a68: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x307a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x307a6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x307a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x307a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x307a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307a74: 0x0  nop
    ctx->pc = 0x307a74u;
    // NOP
    // 0x307a78: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x307a78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x307a7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x307a7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307a80: 0x0  nop
    ctx->pc = 0x307a80u;
    // NOP
    // 0x307a84: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x307A84u;
    {
        const bool branch_taken_0x307a84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x307A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307A84u;
            // 0x307a88: 0xe781a180  swc1        $f1, -0x5E80($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a84) {
            ctx->pc = 0x307A98u;
            goto label_307a98;
        }
    }
    ctx->pc = 0x307A8Cu;
    // 0x307a8c: 0x3c02c0c9  lui         $v0, 0xC0C9
    ctx->pc = 0x307a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49353 << 16));
    // 0x307a90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x307a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x307a94: 0xaf82a180  sw          $v0, -0x5E80($gp)
    ctx->pc = 0x307a94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943104), GPR_U32(ctx, 2));
label_307a98:
    // 0x307a98: 0xc04d250  jal         func_134940
    ctx->pc = 0x307A98u;
    SET_GPR_U32(ctx, 31, 0x307AA0u);
    ctx->pc = 0x307A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307A98u;
            // 0x307a9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307AA0u; }
        if (ctx->pc != 0x307AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307AA0u; }
        if (ctx->pc != 0x307AA0u) { return; }
    }
    ctx->pc = 0x307AA0u;
label_307aa0:
    // 0x307aa0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x307aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x307aa4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x307aa4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x307aa8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x307aa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x307aac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x307aacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x307ab0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x307ab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x307ab4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x307ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307ab8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x307ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307abc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x307abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307ac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x307ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x307AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307AC8u;
            // 0x307acc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x307AD0u;
}
