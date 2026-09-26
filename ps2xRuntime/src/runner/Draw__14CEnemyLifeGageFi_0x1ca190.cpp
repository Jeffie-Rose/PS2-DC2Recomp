#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__14CEnemyLifeGageFi
// Address: 0x1ca190 - 0x1ca7c0
void Draw__14CEnemyLifeGageFi_0x1ca190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__14CEnemyLifeGageFi_0x1ca190");
#endif

    switch (ctx->pc) {
        case 0x1ca1f4u: goto label_1ca1f4;
        case 0x1ca208u: goto label_1ca208;
        case 0x1ca210u: goto label_1ca210;
        case 0x1ca220u: goto label_1ca220;
        case 0x1ca228u: goto label_1ca228;
        case 0x1ca234u: goto label_1ca234;
        case 0x1ca240u: goto label_1ca240;
        case 0x1ca24cu: goto label_1ca24c;
        case 0x1ca264u: goto label_1ca264;
        case 0x1ca284u: goto label_1ca284;
        case 0x1ca28cu: goto label_1ca28c;
        case 0x1ca2acu: goto label_1ca2ac;
        case 0x1ca2dcu: goto label_1ca2dc;
        case 0x1ca2e4u: goto label_1ca2e4;
        case 0x1ca2f4u: goto label_1ca2f4;
        case 0x1ca2fcu: goto label_1ca2fc;
        case 0x1ca308u: goto label_1ca308;
        case 0x1ca314u: goto label_1ca314;
        case 0x1ca320u: goto label_1ca320;
        case 0x1ca32cu: goto label_1ca32c;
        case 0x1ca35cu: goto label_1ca35c;
        case 0x1ca378u: goto label_1ca378;
        case 0x1ca38cu: goto label_1ca38c;
        case 0x1ca3a4u: goto label_1ca3a4;
        case 0x1ca3b8u: goto label_1ca3b8;
        case 0x1ca3d0u: goto label_1ca3d0;
        case 0x1ca3e4u: goto label_1ca3e4;
        case 0x1ca3fcu: goto label_1ca3fc;
        case 0x1ca410u: goto label_1ca410;
        case 0x1ca418u: goto label_1ca418;
        case 0x1ca428u: goto label_1ca428;
        case 0x1ca43cu: goto label_1ca43c;
        case 0x1ca444u: goto label_1ca444;
        case 0x1ca450u: goto label_1ca450;
        case 0x1ca45cu: goto label_1ca45c;
        case 0x1ca468u: goto label_1ca468;
        case 0x1ca474u: goto label_1ca474;
        case 0x1ca48cu: goto label_1ca48c;
        case 0x1ca4f4u: goto label_1ca4f4;
        case 0x1ca528u: goto label_1ca528;
        case 0x1ca53cu: goto label_1ca53c;
        case 0x1ca550u: goto label_1ca550;
        case 0x1ca564u: goto label_1ca564;
        case 0x1ca578u: goto label_1ca578;
        case 0x1ca58cu: goto label_1ca58c;
        case 0x1ca5ccu: goto label_1ca5cc;
        case 0x1ca5ecu: goto label_1ca5ec;
        case 0x1ca600u: goto label_1ca600;
        case 0x1ca618u: goto label_1ca618;
        case 0x1ca62cu: goto label_1ca62c;
        case 0x1ca644u: goto label_1ca644;
        case 0x1ca658u: goto label_1ca658;
        case 0x1ca670u: goto label_1ca670;
        case 0x1ca684u: goto label_1ca684;
        case 0x1ca69cu: goto label_1ca69c;
        case 0x1ca6b0u: goto label_1ca6b0;
        case 0x1ca6c8u: goto label_1ca6c8;
        case 0x1ca6dcu: goto label_1ca6dc;
        case 0x1ca6e4u: goto label_1ca6e4;
        case 0x1ca6f8u: goto label_1ca6f8;
        case 0x1ca700u: goto label_1ca700;
        case 0x1ca70cu: goto label_1ca70c;
        case 0x1ca718u: goto label_1ca718;
        case 0x1ca724u: goto label_1ca724;
        case 0x1ca73cu: goto label_1ca73c;
        case 0x1ca748u: goto label_1ca748;
        case 0x1ca760u: goto label_1ca760;
        case 0x1ca778u: goto label_1ca778;
        case 0x1ca794u: goto label_1ca794;
        default: break;
    }

    ctx->pc = 0x1ca190u;

    // 0x1ca190: 0x27bdfc00  addiu       $sp, $sp, -0x400
    ctx->pc = 0x1ca190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966272));
    // 0x1ca194: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ca194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ca198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca19c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ca19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ca1a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ca1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ca1a4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ca1a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ca1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ca1ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ca1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ca1b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ca1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ca1b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca1c0: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1ca1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca1c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca1c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca1c8: 0x0  nop
    ctx->pc = 0x1ca1c8u;
    // NOP
    // 0x1ca1cc: 0x45010171  bc1t        . + 4 + (0x171 << 2)
    ctx->pc = 0x1CA1CCu;
    {
        const bool branch_taken_0x1ca1cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1CCu;
            // 0x1ca1d0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1cc) {
            ctx->pc = 0x1CA794u;
            goto label_1ca794;
        }
    }
    ctx->pc = 0x1CA1D4u;
    // 0x1ca1d4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1ca1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1ca1d8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA1D8u;
    {
        const bool branch_taken_0x1ca1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1D8u;
            // 0x1ca1dc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1d8) {
            ctx->pc = 0x1CA1ECu;
            goto label_1ca1ec;
        }
    }
    ctx->pc = 0x1CA1E0u;
    // 0x1ca1e0: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1ca1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1ca1e4: 0x1060016b  beqz        $v1, . + 4 + (0x16B << 2)
    ctx->pc = 0x1CA1E4u;
    {
        const bool branch_taken_0x1ca1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1e4) {
            ctx->pc = 0x1CA794u;
            goto label_1ca794;
        }
    }
    ctx->pc = 0x1CA1ECu;
label_1ca1ec:
    // 0x1ca1ec: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1CA1ECu;
    SET_GPR_U32(ctx, 31, 0x1CA1F4u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1F4u; }
        if (ctx->pc != 0x1CA1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1F4u; }
        if (ctx->pc != 0x1CA1F4u) { return; }
    }
    ctx->pc = 0x1CA1F4u;
label_1ca1f4:
    // 0x1ca1f4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x1ca1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ca1f8: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1CA1F8u;
    {
        const bool branch_taken_0x1ca1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1F8u;
            // 0x1ca1fc: 0x27a403f0  addiu       $a0, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1f8) {
            ctx->pc = 0x1CA420u;
            goto label_1ca420;
        }
    }
    ctx->pc = 0x1CA200u;
    // 0x1ca200: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1CA200u;
    SET_GPR_U32(ctx, 31, 0x1CA208u);
    ctx->pc = 0x1CA204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA200u;
            // 0x1ca204: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA208u; }
        if (ctx->pc != 0x1CA208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA208u; }
        if (ctx->pc != 0x1CA208u) { return; }
    }
    ctx->pc = 0x1CA208u;
label_1ca208:
    // 0x1ca208: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1CA208u;
    SET_GPR_U32(ctx, 31, 0x1CA210u);
    ctx->pc = 0x1CA20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA208u;
            // 0x1ca20c: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA210u; }
        if (ctx->pc != 0x1CA210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA210u; }
        if (ctx->pc != 0x1CA210u) { return; }
    }
    ctx->pc = 0x1CA210u;
label_1ca210:
    // 0x1ca210: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca218: 0xc04d104  jal         func_134410
    ctx->pc = 0x1CA218u;
    SET_GPR_U32(ctx, 31, 0x1CA220u);
    ctx->pc = 0x1CA21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA218u;
            // 0x1ca21c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA220u; }
        if (ctx->pc != 0x1CA220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA220u; }
        if (ctx->pc != 0x1CA220u) { return; }
    }
    ctx->pc = 0x1CA220u;
label_1ca220:
    // 0x1ca220: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1CA220u;
    SET_GPR_U32(ctx, 31, 0x1CA228u);
    ctx->pc = 0x1CA224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA220u;
            // 0x1ca224: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA228u; }
        if (ctx->pc != 0x1CA228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA228u; }
        if (ctx->pc != 0x1CA228u) { return; }
    }
    ctx->pc = 0x1CA228u;
label_1ca228:
    // 0x1ca228: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca22c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1CA22Cu;
    SET_GPR_U32(ctx, 31, 0x1CA234u);
    ctx->pc = 0x1CA230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA22Cu;
            // 0x1ca230: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA234u; }
        if (ctx->pc != 0x1CA234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA234u; }
        if (ctx->pc != 0x1CA234u) { return; }
    }
    ctx->pc = 0x1CA234u;
label_1ca234:
    // 0x1ca234: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca238: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1CA238u;
    SET_GPR_U32(ctx, 31, 0x1CA240u);
    ctx->pc = 0x1CA23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA238u;
            // 0x1ca23c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA240u; }
        if (ctx->pc != 0x1CA240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA240u; }
        if (ctx->pc != 0x1CA240u) { return; }
    }
    ctx->pc = 0x1CA240u;
label_1ca240:
    // 0x1ca240: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1ca240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1ca244: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1CA244u;
    SET_GPR_U32(ctx, 31, 0x1CA24Cu);
    ctx->pc = 0x1CA248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA244u;
            // 0x1ca248: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA24Cu; }
        if (ctx->pc != 0x1CA24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA24Cu; }
        if (ctx->pc != 0x1CA24Cu) { return; }
    }
    ctx->pc = 0x1CA24Cu;
label_1ca24c:
    // 0x1ca24c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ca24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ca250: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca254: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ca254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca258: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ca258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca25c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA25Cu;
    SET_GPR_U32(ctx, 31, 0x1CA264u);
    ctx->pc = 0x1CA260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA25Cu;
            // 0x1ca260: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA264u; }
        if (ctx->pc != 0x1CA264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA264u; }
        if (ctx->pc != 0x1CA264u) { return; }
    }
    ctx->pc = 0x1CA264u;
label_1ca264:
    // 0x1ca264: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x1ca264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1ca268: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca26c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ca26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ca270: 0x24060174  addiu       $a2, $zero, 0x174
    ctx->pc = 0x1ca270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x1ca274: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1ca274u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca278: 0x240900d2  addiu       $t1, $zero, 0xD2
    ctx->pc = 0x1ca278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x1ca27c: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CA27Cu;
    SET_GPR_U32(ctx, 31, 0x1CA284u);
    ctx->pc = 0x1CA280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA27Cu;
            // 0x1ca280: 0x240a0092  addiu       $t2, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA284u; }
        if (ctx->pc != 0x1CA284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA284u; }
        if (ctx->pc != 0x1CA284u) { return; }
    }
    ctx->pc = 0x1CA284u;
label_1ca284:
    // 0x1ca284: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ca284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca288: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ca288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca28c:
    // 0x1ca28c: 0x26250032  addiu       $a1, $s1, 0x32
    ctx->pc = 0x1ca28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 50));
    // 0x1ca290: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca294: 0x24060174  addiu       $a2, $zero, 0x174
    ctx->pc = 0x1ca294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x1ca298: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ca298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ca29c: 0x24080022  addiu       $t0, $zero, 0x22
    ctx->pc = 0x1ca29cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1ca2a0: 0x240900f4  addiu       $t1, $zero, 0xF4
    ctx->pc = 0x1ca2a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x1ca2a4: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CA2A4u;
    SET_GPR_U32(ctx, 31, 0x1CA2ACu);
    ctx->pc = 0x1CA2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2A4u;
            // 0x1ca2a8: 0x240a0092  addiu       $t2, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2ACu; }
        if (ctx->pc != 0x1CA2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2ACu; }
        if (ctx->pc != 0x1CA2ACu) { return; }
    }
    ctx->pc = 0x1CA2ACu;
label_1ca2ac:
    // 0x1ca2ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ca2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ca2b0: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x1ca2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1ca2b4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CA2B4u;
    {
        const bool branch_taken_0x1ca2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2B4u;
            // 0x1ca2b8: 0x2631000a  addiu       $s1, $s1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2b4) {
            ctx->pc = 0x1CA28Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca28c;
        }
    }
    ctx->pc = 0x1CA2BCu;
    // 0x1ca2bc: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x1ca2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1ca2c0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca2c4: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1ca2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1ca2c8: 0x24060174  addiu       $a2, $zero, 0x174
    ctx->pc = 0x1ca2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x1ca2cc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1ca2ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2d0: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x1ca2d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1ca2d4: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1CA2D4u;
    SET_GPR_U32(ctx, 31, 0x1CA2DCu);
    ctx->pc = 0x1CA2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2D4u;
            // 0x1ca2d8: 0x240a0092  addiu       $t2, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2DCu; }
        if (ctx->pc != 0x1CA2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2DCu; }
        if (ctx->pc != 0x1CA2DCu) { return; }
    }
    ctx->pc = 0x1CA2DCu;
label_1ca2dc:
    // 0x1ca2dc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1CA2DCu;
    SET_GPR_U32(ctx, 31, 0x1CA2E4u);
    ctx->pc = 0x1CA2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2DCu;
            // 0x1ca2e0: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2E4u; }
        if (ctx->pc != 0x1CA2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2E4u; }
        if (ctx->pc != 0x1CA2E4u) { return; }
    }
    ctx->pc = 0x1CA2E4u;
label_1ca2e4:
    // 0x1ca2e4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca2e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2ec: 0xc04d104  jal         func_134410
    ctx->pc = 0x1CA2ECu;
    SET_GPR_U32(ctx, 31, 0x1CA2F4u);
    ctx->pc = 0x1CA2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2ECu;
            // 0x1ca2f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2F4u; }
        if (ctx->pc != 0x1CA2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2F4u; }
        if (ctx->pc != 0x1CA2F4u) { return; }
    }
    ctx->pc = 0x1CA2F4u;
label_1ca2f4:
    // 0x1ca2f4: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1CA2F4u;
    SET_GPR_U32(ctx, 31, 0x1CA2FCu);
    ctx->pc = 0x1CA2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2F4u;
            // 0x1ca2f8: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2FCu; }
        if (ctx->pc != 0x1CA2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2FCu; }
        if (ctx->pc != 0x1CA2FCu) { return; }
    }
    ctx->pc = 0x1CA2FCu;
label_1ca2fc:
    // 0x1ca2fc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca300: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1CA300u;
    SET_GPR_U32(ctx, 31, 0x1CA308u);
    ctx->pc = 0x1CA304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA300u;
            // 0x1ca304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA308u; }
        if (ctx->pc != 0x1CA308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA308u; }
        if (ctx->pc != 0x1CA308u) { return; }
    }
    ctx->pc = 0x1CA308u;
label_1ca308:
    // 0x1ca308: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca30c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1CA30Cu;
    SET_GPR_U32(ctx, 31, 0x1CA314u);
    ctx->pc = 0x1CA310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA30Cu;
            // 0x1ca310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA314u; }
        if (ctx->pc != 0x1CA314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA314u; }
        if (ctx->pc != 0x1CA314u) { return; }
    }
    ctx->pc = 0x1CA314u;
label_1ca314:
    // 0x1ca314: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca318: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x1CA318u;
    SET_GPR_U32(ctx, 31, 0x1CA320u);
    ctx->pc = 0x1CA31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA318u;
            // 0x1ca31c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA320u; }
        if (ctx->pc != 0x1CA320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA320u; }
        if (ctx->pc != 0x1CA320u) { return; }
    }
    ctx->pc = 0x1CA320u;
label_1ca320:
    // 0x1ca320: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca324: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1CA324u;
    SET_GPR_U32(ctx, 31, 0x1CA32Cu);
    ctx->pc = 0x1CA328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA324u;
            // 0x1ca328: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA32Cu; }
        if (ctx->pc != 0x1CA32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA32Cu; }
        if (ctx->pc != 0x1CA32Cu) { return; }
    }
    ctx->pc = 0x1CA32Cu;
label_1ca32c:
    // 0x1ca32c: 0xc6830014  lwc1        $f3, 0x14($s4)
    ctx->pc = 0x1ca32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca330: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x1ca330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x1ca334: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x1ca334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca33c: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1ca33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca340: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1ca340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ca344: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ca344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ca348: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1ca348u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1ca34c: 0x0  nop
    ctx->pc = 0x1ca34cu;
    // NOP
    // 0x1ca350: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ca350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ca354: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1CA354u;
    SET_GPR_U32(ctx, 31, 0x1CA35Cu);
    ctx->pc = 0x1CA358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA354u;
            // 0x1ca358: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA35Cu; }
        if (ctx->pc != 0x1CA35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA35Cu; }
        if (ctx->pc != 0x1CA35Cu) { return; }
    }
    ctx->pc = 0x1CA35Cu;
label_1ca35c:
    // 0x1ca35c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ca35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca360: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca364: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ca364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca368: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1ca368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ca36c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca370: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA370u;
    SET_GPR_U32(ctx, 31, 0x1CA378u);
    ctx->pc = 0x1CA374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA370u;
            // 0x1ca374: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA378u; }
        if (ctx->pc != 0x1CA378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA378u; }
        if (ctx->pc != 0x1CA378u) { return; }
    }
    ctx->pc = 0x1CA378u;
label_1ca378:
    // 0x1ca378: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca37c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1ca37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ca380: 0x24060185  addiu       $a2, $zero, 0x185
    ctx->pc = 0x1ca380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
    // 0x1ca384: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA384u;
    SET_GPR_U32(ctx, 31, 0x1CA38Cu);
    ctx->pc = 0x1CA388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA384u;
            // 0x1ca388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA38Cu; }
        if (ctx->pc != 0x1CA38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA38Cu; }
        if (ctx->pc != 0x1CA38Cu) { return; }
    }
    ctx->pc = 0x1CA38Cu;
label_1ca38c:
    // 0x1ca38c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ca38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca390: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca394: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ca394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca398: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca39c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA39Cu;
    SET_GPR_U32(ctx, 31, 0x1CA3A4u);
    ctx->pc = 0x1CA3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA39Cu;
            // 0x1ca3a0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3A4u; }
        if (ctx->pc != 0x1CA3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3A4u; }
        if (ctx->pc != 0x1CA3A4u) { return; }
    }
    ctx->pc = 0x1CA3A4u;
label_1ca3a4:
    // 0x1ca3a4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1ca3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ca3a8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca3ac: 0x24060185  addiu       $a2, $zero, 0x185
    ctx->pc = 0x1ca3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
    // 0x1ca3b0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA3B0u;
    SET_GPR_U32(ctx, 31, 0x1CA3B8u);
    ctx->pc = 0x1CA3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3B0u;
            // 0x1ca3b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3B8u; }
        if (ctx->pc != 0x1CA3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3B8u; }
        if (ctx->pc != 0x1CA3B8u) { return; }
    }
    ctx->pc = 0x1CA3B8u;
label_1ca3b8:
    // 0x1ca3b8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca3bc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ca3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca3c0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1ca3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ca3c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3c8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA3C8u;
    SET_GPR_U32(ctx, 31, 0x1CA3D0u);
    ctx->pc = 0x1CA3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3C8u;
            // 0x1ca3cc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3D0u; }
        if (ctx->pc != 0x1CA3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3D0u; }
        if (ctx->pc != 0x1CA3D0u) { return; }
    }
    ctx->pc = 0x1CA3D0u;
label_1ca3d0:
    // 0x1ca3d0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca3d4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1ca3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ca3d8: 0x24060189  addiu       $a2, $zero, 0x189
    ctx->pc = 0x1ca3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
    // 0x1ca3dc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA3DCu;
    SET_GPR_U32(ctx, 31, 0x1CA3E4u);
    ctx->pc = 0x1CA3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3DCu;
            // 0x1ca3e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3E4u; }
        if (ctx->pc != 0x1CA3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3E4u; }
        if (ctx->pc != 0x1CA3E4u) { return; }
    }
    ctx->pc = 0x1CA3E4u;
label_1ca3e4:
    // 0x1ca3e4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ca3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca3e8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca3ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ca3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca3f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3f4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA3F4u;
    SET_GPR_U32(ctx, 31, 0x1CA3FCu);
    ctx->pc = 0x1CA3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3F4u;
            // 0x1ca3f8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3FCu; }
        if (ctx->pc != 0x1CA3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3FCu; }
        if (ctx->pc != 0x1CA3FCu) { return; }
    }
    ctx->pc = 0x1CA3FCu;
label_1ca3fc:
    // 0x1ca3fc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1ca3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ca400: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1ca400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1ca404: 0x24060189  addiu       $a2, $zero, 0x189
    ctx->pc = 0x1ca404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
    // 0x1ca408: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA408u;
    SET_GPR_U32(ctx, 31, 0x1CA410u);
    ctx->pc = 0x1CA40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA408u;
            // 0x1ca40c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA410u; }
        if (ctx->pc != 0x1CA410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA410u; }
        if (ctx->pc != 0x1CA410u) { return; }
    }
    ctx->pc = 0x1CA410u;
label_1ca410:
    // 0x1ca410: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1CA410u;
    SET_GPR_U32(ctx, 31, 0x1CA418u);
    ctx->pc = 0x1CA414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA410u;
            // 0x1ca414: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA418u; }
        if (ctx->pc != 0x1CA418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA418u; }
        if (ctx->pc != 0x1CA418u) { return; }
    }
    ctx->pc = 0x1CA418u;
label_1ca418:
    // 0x1ca418: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1CA418u;
    {
        const bool branch_taken_0x1ca418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA418u;
            // 0x1ca41c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca418) {
            ctx->pc = 0x1CA798u;
            goto label_1ca798;
        }
    }
    ctx->pc = 0x1CA420u;
label_1ca420:
    // 0x1ca420: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x1CA420u;
    SET_GPR_U32(ctx, 31, 0x1CA428u);
    ctx->pc = 0x1CA424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA420u;
            // 0x1ca424: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA428u; }
        if (ctx->pc != 0x1CA428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA428u; }
        if (ctx->pc != 0x1CA428u) { return; }
    }
    ctx->pc = 0x1CA428u;
label_1ca428:
    // 0x1ca428: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x1CA428u;
    {
        const bool branch_taken_0x1ca428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA428u;
            // 0x1ca42c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca428) {
            ctx->pc = 0x1CA794u;
            goto label_1ca794;
        }
    }
    ctx->pc = 0x1CA430u;
    // 0x1ca430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca434: 0xc04d104  jal         func_134410
    ctx->pc = 0x1CA434u;
    SET_GPR_U32(ctx, 31, 0x1CA43Cu);
    ctx->pc = 0x1CA438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA434u;
            // 0x1ca438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA43Cu; }
        if (ctx->pc != 0x1CA43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA43Cu; }
        if (ctx->pc != 0x1CA43Cu) { return; }
    }
    ctx->pc = 0x1CA43Cu;
label_1ca43c:
    // 0x1ca43c: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1CA43Cu;
    SET_GPR_U32(ctx, 31, 0x1CA444u);
    ctx->pc = 0x1CA440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA43Cu;
            // 0x1ca440: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA444u; }
        if (ctx->pc != 0x1CA444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA444u; }
        if (ctx->pc != 0x1CA444u) { return; }
    }
    ctx->pc = 0x1CA444u;
label_1ca444:
    // 0x1ca444: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca448: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1CA448u;
    SET_GPR_U32(ctx, 31, 0x1CA450u);
    ctx->pc = 0x1CA44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA448u;
            // 0x1ca44c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA450u; }
        if (ctx->pc != 0x1CA450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA450u; }
        if (ctx->pc != 0x1CA450u) { return; }
    }
    ctx->pc = 0x1CA450u;
label_1ca450:
    // 0x1ca450: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca454: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1CA454u;
    SET_GPR_U32(ctx, 31, 0x1CA45Cu);
    ctx->pc = 0x1CA458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA454u;
            // 0x1ca458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA45Cu; }
        if (ctx->pc != 0x1CA45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA45Cu; }
        if (ctx->pc != 0x1CA45Cu) { return; }
    }
    ctx->pc = 0x1CA45Cu;
label_1ca45c:
    // 0x1ca45c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca460: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x1CA460u;
    SET_GPR_U32(ctx, 31, 0x1CA468u);
    ctx->pc = 0x1CA464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA460u;
            // 0x1ca464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA468u; }
        if (ctx->pc != 0x1CA468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA468u; }
        if (ctx->pc != 0x1CA468u) { return; }
    }
    ctx->pc = 0x1CA468u;
label_1ca468:
    // 0x1ca468: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca46c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1CA46Cu;
    SET_GPR_U32(ctx, 31, 0x1CA474u);
    ctx->pc = 0x1CA470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA46Cu;
            // 0x1ca470: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA474u; }
        if (ctx->pc != 0x1CA474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA474u; }
        if (ctx->pc != 0x1CA474u) { return; }
    }
    ctx->pc = 0x1CA474u;
label_1ca474:
    // 0x1ca474: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1ca474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ca478: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca47c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1ca47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ca480: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ca480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca484: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA484u;
    SET_GPR_U32(ctx, 31, 0x1CA48Cu);
    ctx->pc = 0x1CA488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA484u;
            // 0x1ca488: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA48Cu; }
        if (ctx->pc != 0x1CA48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA48Cu; }
        if (ctx->pc != 0x1CA48Cu) { return; }
    }
    ctx->pc = 0x1CA48Cu;
label_1ca48c:
    // 0x1ca48c: 0x8fa303f0  lw          $v1, 0x3F0($sp)
    ctx->pc = 0x1ca48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1ca490: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA490u;
    {
        const bool branch_taken_0x1ca490 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CA494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA490u;
            // 0x1ca494: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca490) {
            ctx->pc = 0x1CA4A0u;
            goto label_1ca4a0;
        }
    }
    ctx->pc = 0x1CA498u;
    // 0x1ca498: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ca498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ca49c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ca49cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ca4a0:
    // 0x1ca4a0: 0xafa203f0  sw          $v0, 0x3F0($sp)
    ctx->pc = 0x1ca4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 2));
    // 0x1ca4a4: 0x27b603f4  addiu       $s6, $sp, 0x3F4
    ctx->pc = 0x1ca4a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1012));
    // 0x1ca4a8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1ca4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ca4ac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA4ACu;
    {
        const bool branch_taken_0x1ca4ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CA4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4ACu;
            // 0x1ca4b0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4ac) {
            ctx->pc = 0x1CA4BCu;
            goto label_1ca4bc;
        }
    }
    ctx->pc = 0x1CA4B4u;
    // 0x1ca4b4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ca4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ca4b8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ca4b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ca4bc:
    // 0x1ca4bc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1ca4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1ca4c0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1ca4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ca4c4: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1ca4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1ca4c8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1ca4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1ca4cc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1ca4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ca4d0: 0x28410059  slti        $at, $v0, 0x59
    ctx->pc = 0x1ca4d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x1ca4d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA4D4u;
    {
        const bool branch_taken_0x1ca4d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4D4u;
            // 0x1ca4d8: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4d4) {
            ctx->pc = 0x1CA4E0u;
            goto label_1ca4e0;
        }
    }
    ctx->pc = 0x1CA4DCu;
    // 0x1ca4dc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1ca4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1ca4e0:
    // 0x1ca4e0: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1ca4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca4e4: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x1ca4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x1ca4e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca4ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1CA4ECu;
    SET_GPR_U32(ctx, 31, 0x1CA4F4u);
    ctx->pc = 0x1CA4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4ECu;
            // 0x1ca4f0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA4F4u; }
        if (ctx->pc != 0x1CA4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA4F4u; }
        if (ctx->pc != 0x1CA4F4u) { return; }
    }
    ctx->pc = 0x1CA4F4u;
label_1ca4f4:
    // 0x1ca4f4: 0x8fa303f0  lw          $v1, 0x3F0($sp)
    ctx->pc = 0x1ca4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1ca4f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ca4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4fc: 0x8ed30000  lw          $s3, 0x0($s6)
    ctx->pc = 0x1ca4fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ca500: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca508: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ca508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ca50c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1ca50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ca510: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x1ca510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1ca514: 0x24750002  addiu       $s5, $v1, 0x2
    ctx->pc = 0x1ca514u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ca518: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ca518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca51c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ca51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca520: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA520u;
    SET_GPR_U32(ctx, 31, 0x1CA528u);
    ctx->pc = 0x1CA524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA520u;
            // 0x1ca524: 0x26720004  addiu       $s2, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA528u; }
        if (ctx->pc != 0x1CA528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA528u; }
        if (ctx->pc != 0x1CA528u) { return; }
    }
    ctx->pc = 0x1CA528u;
label_1ca528:
    // 0x1ca528: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca52c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca530: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ca530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca534: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA534u;
    SET_GPR_U32(ctx, 31, 0x1CA53Cu);
    ctx->pc = 0x1CA538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA534u;
            // 0x1ca538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA53Cu; }
        if (ctx->pc != 0x1CA53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA53Cu; }
        if (ctx->pc != 0x1CA53Cu) { return; }
    }
    ctx->pc = 0x1CA53Cu;
label_1ca53c:
    // 0x1ca53c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca540: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ca540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca544: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ca544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca548: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA548u;
    SET_GPR_U32(ctx, 31, 0x1CA550u);
    ctx->pc = 0x1CA54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA548u;
            // 0x1ca54c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA550u; }
        if (ctx->pc != 0x1CA550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA550u; }
        if (ctx->pc != 0x1CA550u) { return; }
    }
    ctx->pc = 0x1CA550u;
label_1ca550:
    // 0x1ca550: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ca550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca554: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca558: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ca558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca55c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA55Cu;
    SET_GPR_U32(ctx, 31, 0x1CA564u);
    ctx->pc = 0x1CA560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA55Cu;
            // 0x1ca560: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA564u; }
        if (ctx->pc != 0x1CA564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA564u; }
        if (ctx->pc != 0x1CA564u) { return; }
    }
    ctx->pc = 0x1CA564u;
label_1ca564:
    // 0x1ca564: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ca564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca568: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca56c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca570: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA570u;
    SET_GPR_U32(ctx, 31, 0x1CA578u);
    ctx->pc = 0x1CA574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA570u;
            // 0x1ca574: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA578u; }
        if (ctx->pc != 0x1CA578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA578u; }
        if (ctx->pc != 0x1CA578u) { return; }
    }
    ctx->pc = 0x1CA578u;
label_1ca578:
    // 0x1ca578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca57c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ca57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca580: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca584: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA584u;
    SET_GPR_U32(ctx, 31, 0x1CA58Cu);
    ctx->pc = 0x1CA588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA584u;
            // 0x1ca588: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA58Cu; }
        if (ctx->pc != 0x1CA58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA58Cu; }
        if (ctx->pc != 0x1CA58Cu) { return; }
    }
    ctx->pc = 0x1CA58Cu;
label_1ca58c:
    // 0x1ca58c: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x1ca58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca590: 0x8fa303f0  lw          $v1, 0x3F0($sp)
    ctx->pc = 0x1ca590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1ca594: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x1ca594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca598: 0x8ed30000  lw          $s3, 0x0($s6)
    ctx->pc = 0x1ca598u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ca59c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ca59cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca5a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ca5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ca5a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ca5a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ca5a8: 0x708823  subu        $s1, $v1, $s0
    ctx->pc = 0x1ca5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ca5ac: 0x2675fffe  addiu       $s5, $s3, -0x2
    ctx->pc = 0x1ca5acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x1ca5b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ca5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ca5b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ca5b8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1ca5b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1ca5bc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ca5bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ca5c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ca5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca5c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1CA5C4u;
    SET_GPR_U32(ctx, 31, 0x1CA5CCu);
    ctx->pc = 0x1CA5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5C4u;
            // 0x1ca5c8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5CCu; }
        if (ctx->pc != 0x1CA5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5CCu; }
        if (ctx->pc != 0x1CA5CCu) { return; }
    }
    ctx->pc = 0x1CA5CCu;
label_1ca5cc:
    // 0x1ca5cc: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1ca5ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ca5d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca5d4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ca5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca5d8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1ca5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ca5dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca5dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca5e0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ca5e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ca5e4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA5E4u;
    SET_GPR_U32(ctx, 31, 0x1CA5ECu);
    ctx->pc = 0x1CA5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5E4u;
            // 0x1ca5e8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5ECu; }
        if (ctx->pc != 0x1CA5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5ECu; }
        if (ctx->pc != 0x1CA5ECu) { return; }
    }
    ctx->pc = 0x1CA5ECu;
label_1ca5ec:
    // 0x1ca5ec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca5f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca5f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ca5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca5f8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA5F8u;
    SET_GPR_U32(ctx, 31, 0x1CA600u);
    ctx->pc = 0x1CA5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5F8u;
            // 0x1ca5fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA600u; }
        if (ctx->pc != 0x1CA600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA600u; }
        if (ctx->pc != 0x1CA600u) { return; }
    }
    ctx->pc = 0x1CA600u;
label_1ca600:
    // 0x1ca600: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ca600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca604: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca608: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ca608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca60c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca60cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca610: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA610u;
    SET_GPR_U32(ctx, 31, 0x1CA618u);
    ctx->pc = 0x1CA614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA610u;
            // 0x1ca614: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA618u; }
        if (ctx->pc != 0x1CA618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA618u; }
        if (ctx->pc != 0x1CA618u) { return; }
    }
    ctx->pc = 0x1CA618u;
label_1ca618:
    // 0x1ca618: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca61c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ca61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca620: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ca620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca624: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA624u;
    SET_GPR_U32(ctx, 31, 0x1CA62Cu);
    ctx->pc = 0x1CA628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA624u;
            // 0x1ca628: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA62Cu; }
        if (ctx->pc != 0x1CA62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA62Cu; }
        if (ctx->pc != 0x1CA62Cu) { return; }
    }
    ctx->pc = 0x1CA62Cu;
label_1ca62c:
    // 0x1ca62c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca630: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ca630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca634: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1ca634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ca638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca63c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA63Cu;
    SET_GPR_U32(ctx, 31, 0x1CA644u);
    ctx->pc = 0x1CA640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA63Cu;
            // 0x1ca640: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA644u; }
        if (ctx->pc != 0x1CA644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA644u; }
        if (ctx->pc != 0x1CA644u) { return; }
    }
    ctx->pc = 0x1CA644u;
label_1ca644:
    // 0x1ca644: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca64c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ca64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca650: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA650u;
    SET_GPR_U32(ctx, 31, 0x1CA658u);
    ctx->pc = 0x1CA654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA650u;
            // 0x1ca654: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA658u; }
        if (ctx->pc != 0x1CA658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA658u; }
        if (ctx->pc != 0x1CA658u) { return; }
    }
    ctx->pc = 0x1CA658u;
label_1ca658:
    // 0x1ca658: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca65c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ca65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca660: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1ca660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ca664: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca668: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA668u;
    SET_GPR_U32(ctx, 31, 0x1CA670u);
    ctx->pc = 0x1CA66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA668u;
            // 0x1ca66c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA670u; }
        if (ctx->pc != 0x1CA670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA670u; }
        if (ctx->pc != 0x1CA670u) { return; }
    }
    ctx->pc = 0x1CA670u;
label_1ca670:
    // 0x1ca670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca674: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca678: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ca678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca67c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA67Cu;
    SET_GPR_U32(ctx, 31, 0x1CA684u);
    ctx->pc = 0x1CA680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA67Cu;
            // 0x1ca680: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA684u; }
        if (ctx->pc != 0x1CA684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA684u; }
        if (ctx->pc != 0x1CA684u) { return; }
    }
    ctx->pc = 0x1CA684u;
label_1ca684:
    // 0x1ca684: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ca684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca688: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca68c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ca68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca690: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca694: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA694u;
    SET_GPR_U32(ctx, 31, 0x1CA69Cu);
    ctx->pc = 0x1CA698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA694u;
            // 0x1ca698: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA69Cu; }
        if (ctx->pc != 0x1CA69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA69Cu; }
        if (ctx->pc != 0x1CA69Cu) { return; }
    }
    ctx->pc = 0x1CA69Cu;
label_1ca69c:
    // 0x1ca69c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ca69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6a0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca6a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ca6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6a8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA6A8u;
    SET_GPR_U32(ctx, 31, 0x1CA6B0u);
    ctx->pc = 0x1CA6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6A8u;
            // 0x1ca6ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6B0u; }
        if (ctx->pc != 0x1CA6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6B0u; }
        if (ctx->pc != 0x1CA6B0u) { return; }
    }
    ctx->pc = 0x1CA6B0u;
label_1ca6b0:
    // 0x1ca6b0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ca6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ca6b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca6b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ca6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6c0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA6C0u;
    SET_GPR_U32(ctx, 31, 0x1CA6C8u);
    ctx->pc = 0x1CA6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6C0u;
            // 0x1ca6c4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6C8u; }
        if (ctx->pc != 0x1CA6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6C8u; }
        if (ctx->pc != 0x1CA6C8u) { return; }
    }
    ctx->pc = 0x1CA6C8u;
label_1ca6c8:
    // 0x1ca6c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ca6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ca6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6d0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca6d4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1CA6D4u;
    SET_GPR_U32(ctx, 31, 0x1CA6DCu);
    ctx->pc = 0x1CA6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6D4u;
            // 0x1ca6d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6DCu; }
        if (ctx->pc != 0x1CA6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6DCu; }
        if (ctx->pc != 0x1CA6DCu) { return; }
    }
    ctx->pc = 0x1CA6DCu;
label_1ca6dc:
    // 0x1ca6dc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1CA6DCu;
    SET_GPR_U32(ctx, 31, 0x1CA6E4u);
    ctx->pc = 0x1CA6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6DCu;
            // 0x1ca6e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6E4u; }
        if (ctx->pc != 0x1CA6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6E4u; }
        if (ctx->pc != 0x1CA6E4u) { return; }
    }
    ctx->pc = 0x1CA6E4u;
label_1ca6e4:
    // 0x1ca6e4: 0x16e0002b  bnez        $s7, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CA6E4u;
    {
        const bool branch_taken_0x1ca6e4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6E4u;
            // 0x1ca6e8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6e4) {
            ctx->pc = 0x1CA794u;
            goto label_1ca794;
        }
    }
    ctx->pc = 0x1CA6ECu;
    // 0x1ca6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca6f0: 0xc04d104  jal         func_134410
    ctx->pc = 0x1CA6F0u;
    SET_GPR_U32(ctx, 31, 0x1CA6F8u);
    ctx->pc = 0x1CA6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6F0u;
            // 0x1ca6f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6F8u; }
        if (ctx->pc != 0x1CA6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6F8u; }
        if (ctx->pc != 0x1CA6F8u) { return; }
    }
    ctx->pc = 0x1CA6F8u;
label_1ca6f8:
    // 0x1ca6f8: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1CA6F8u;
    SET_GPR_U32(ctx, 31, 0x1CA700u);
    ctx->pc = 0x1CA6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA6F8u;
            // 0x1ca6fc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA700u; }
        if (ctx->pc != 0x1CA700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA700u; }
        if (ctx->pc != 0x1CA700u) { return; }
    }
    ctx->pc = 0x1CA700u;
label_1ca700:
    // 0x1ca700: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca704: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1CA704u;
    SET_GPR_U32(ctx, 31, 0x1CA70Cu);
    ctx->pc = 0x1CA708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA704u;
            // 0x1ca708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA70Cu; }
        if (ctx->pc != 0x1CA70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA70Cu; }
        if (ctx->pc != 0x1CA70Cu) { return; }
    }
    ctx->pc = 0x1CA70Cu;
label_1ca70c:
    // 0x1ca70c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca710: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1CA710u;
    SET_GPR_U32(ctx, 31, 0x1CA718u);
    ctx->pc = 0x1CA714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA710u;
            // 0x1ca714: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA718u; }
        if (ctx->pc != 0x1CA718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA718u; }
        if (ctx->pc != 0x1CA718u) { return; }
    }
    ctx->pc = 0x1CA718u;
label_1ca718:
    // 0x1ca718: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca71c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1CA71Cu;
    SET_GPR_U32(ctx, 31, 0x1CA724u);
    ctx->pc = 0x1CA720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA71Cu;
            // 0x1ca720: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA724u; }
        if (ctx->pc != 0x1CA724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA724u; }
        if (ctx->pc != 0x1CA724u) { return; }
    }
    ctx->pc = 0x1CA724u;
label_1ca724:
    // 0x1ca724: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ca724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ca728: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ca728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca72c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ca72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca730: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ca730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca734: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1CA734u;
    SET_GPR_U32(ctx, 31, 0x1CA73Cu);
    ctx->pc = 0x1CA738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA734u;
            // 0x1ca738: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA73Cu; }
        if (ctx->pc != 0x1CA73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA73Cu; }
        if (ctx->pc != 0x1CA73Cu) { return; }
    }
    ctx->pc = 0x1CA73Cu;
label_1ca73c:
    // 0x1ca73c: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1ca73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1ca740: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1CA740u;
    SET_GPR_U32(ctx, 31, 0x1CA748u);
    ctx->pc = 0x1CA744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA740u;
            // 0x1ca744: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA748u; }
        if (ctx->pc != 0x1CA748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA748u; }
        if (ctx->pc != 0x1CA748u) { return; }
    }
    ctx->pc = 0x1CA748u;
label_1ca748:
    // 0x1ca748: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1ca748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ca74c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ca74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca750: 0x8fa303f0  lw          $v1, 0x3F0($sp)
    ctx->pc = 0x1ca750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1ca754: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ca754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca758: 0x2453fff4  addiu       $s3, $v0, -0xC
    ctx->pc = 0x1ca758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1ca75c: 0x708023  subu        $s0, $v1, $s0
    ctx->pc = 0x1ca75cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1ca760:
    // 0x1ca760: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1ca760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1ca764: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1ca764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ca768: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1ca768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1ca76c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ca76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca770: 0xc0727cc  jal         func_1C9F30
    ctx->pc = 0x1CA770u;
    SET_GPR_U32(ctx, 31, 0x1CA778u);
    ctx->pc = 0x1CA774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA770u;
            // 0x1ca774: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9F30u;
    if (runtime->hasFunction(0x1C9F30u)) {
        auto targetFn = runtime->lookupFunction(0x1C9F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA778u; }
        if (ctx->pc != 0x1CA778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__13CEnemyGekirinFP10CPreSpriteii_0x1c9f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA778u; }
        if (ctx->pc != 0x1CA778u) { return; }
    }
    ctx->pc = 0x1CA778u;
label_1ca778:
    // 0x1ca778: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ca778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ca77c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1ca77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ca780: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1ca780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ca784: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CA784u;
    {
        const bool branch_taken_0x1ca784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA784u;
            // 0x1ca788: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca784) {
            ctx->pc = 0x1CA760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca760;
        }
    }
    ctx->pc = 0x1CA78Cu;
    // 0x1ca78c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1CA78Cu;
    SET_GPR_U32(ctx, 31, 0x1CA794u);
    ctx->pc = 0x1CA790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA78Cu;
            // 0x1ca790: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA794u; }
        if (ctx->pc != 0x1CA794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA794u; }
        if (ctx->pc != 0x1CA794u) { return; }
    }
    ctx->pc = 0x1CA794u;
label_1ca794:
    // 0x1ca794: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ca794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ca798:
    // 0x1ca798: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ca798u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca79c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ca79cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ca7a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ca7a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca7a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ca7a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca7a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ca7a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca7ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca7b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca7b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca7b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA7B8u;
            // 0x1ca7bc: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA7C0u;
}
