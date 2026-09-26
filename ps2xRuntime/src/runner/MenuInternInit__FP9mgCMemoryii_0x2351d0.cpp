#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInternInit__FP9mgCMemoryii
// Address: 0x2351d0 - 0x23574c
void MenuInternInit__FP9mgCMemoryii_0x2351d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInternInit__FP9mgCMemoryii_0x2351d0");
#endif

    switch (ctx->pc) {
        case 0x235210u: goto label_235210;
        case 0x23521cu: goto label_23521c;
        case 0x23523cu: goto label_23523c;
        case 0x23525cu: goto label_23525c;
        case 0x235264u: goto label_235264;
        case 0x235280u: goto label_235280;
        case 0x23528cu: goto label_23528c;
        case 0x235298u: goto label_235298;
        case 0x2352a8u: goto label_2352a8;
        case 0x2352b4u: goto label_2352b4;
        case 0x2352f0u: goto label_2352f0;
        case 0x235300u: goto label_235300;
        case 0x235308u: goto label_235308;
        case 0x235318u: goto label_235318;
        case 0x23532cu: goto label_23532c;
        case 0x235358u: goto label_235358;
        case 0x235374u: goto label_235374;
        case 0x235388u: goto label_235388;
        case 0x235398u: goto label_235398;
        case 0x2353d8u: goto label_2353d8;
        case 0x2353e8u: goto label_2353e8;
        case 0x235408u: goto label_235408;
        case 0x235430u: goto label_235430;
        case 0x235488u: goto label_235488;
        case 0x235494u: goto label_235494;
        case 0x2354a8u: goto label_2354a8;
        case 0x2354f8u: goto label_2354f8;
        case 0x23550cu: goto label_23550c;
        case 0x235530u: goto label_235530;
        case 0x235558u: goto label_235558;
        case 0x235588u: goto label_235588;
        case 0x23559cu: goto label_23559c;
        case 0x2355acu: goto label_2355ac;
        case 0x2355e4u: goto label_2355e4;
        case 0x2355f8u: goto label_2355f8;
        case 0x235608u: goto label_235608;
        case 0x235640u: goto label_235640;
        case 0x235654u: goto label_235654;
        case 0x23565cu: goto label_23565c;
        case 0x23567cu: goto label_23567c;
        case 0x2356b4u: goto label_2356b4;
        case 0x2356c8u: goto label_2356c8;
        case 0x2356d0u: goto label_2356d0;
        case 0x235704u: goto label_235704;
        case 0x23572cu: goto label_23572c;
        default: break;
    }

    ctx->pc = 0x2351d0u;

    // 0x2351d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2351d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2351d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2351d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2351d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2351d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2351dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2351dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2351e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2351e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2351e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2351e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2351e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2351e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2351ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2351f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2351f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351f4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2351F4u;
    {
        const bool branch_taken_0x2351f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2351F4u;
            // 0x2351f8: 0xac20d62c  sw          $zero, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351f4) {
            ctx->pc = 0x235210u;
            goto label_235210;
        }
    }
    ctx->pc = 0x2351FCu;
    // 0x2351fc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2351fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235200: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235204: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x235204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x235208: 0xc08b2e8  jal         func_22CBA0
    ctx->pc = 0x235208u;
    SET_GPR_U32(ctx, 31, 0x235210u);
    ctx->pc = 0x23520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235208u;
            // 0x23520c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CBA0u;
    if (runtime->hasFunction(0x22CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x22CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235210u; }
        if (ctx->pc != 0x235210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCapture__FiP9mgCMemoryi_0x22cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235210u; }
        if (ctx->pc != 0x235210u) { return; }
    }
    ctx->pc = 0x235210u;
label_235210:
    // 0x235210: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x235210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x235214: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x235214u;
    SET_GPR_U32(ctx, 31, 0x23521Cu);
    ctx->pc = 0x235218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235214u;
            // 0x235218: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23521Cu; }
        if (ctx->pc != 0x23521Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23521Cu; }
        if (ctx->pc != 0x23521Cu) { return; }
    }
    ctx->pc = 0x23521Cu;
label_23521c:
    // 0x23521c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23521Cu;
    {
        const bool branch_taken_0x23521c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23521Cu;
            // 0x235220: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23521c) {
            ctx->pc = 0x235228u;
            goto label_235228;
        }
    }
    ctx->pc = 0x235224u;
    // 0x235224: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x235224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235228:
    // 0x235228: 0x2442d550  addiu       $v0, $v0, -0x2AB0
    ctx->pc = 0x235228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956368));
    // 0x23522c: 0xaf8294cc  sw          $v0, -0x6B34($gp)
    ctx->pc = 0x23522cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939852), GPR_U32(ctx, 2));
    // 0x235230: 0x8f8494cc  lw          $a0, -0x6B34($gp)
    ctx->pc = 0x235230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x235234: 0xc08d5d4  jal         func_235750
    ctx->pc = 0x235234u;
    SET_GPR_U32(ctx, 31, 0x23523Cu);
    ctx->pc = 0x235238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235234u;
            // 0x235238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235750u;
    if (runtime->hasFunction(0x235750u)) {
        auto targetFn = runtime->lookupFunction(0x235750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23523Cu; }
        if (ctx->pc != 0x23523Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CMenuInterFi_0x235750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23523Cu; }
        if (ctx->pc != 0x23523Cu) { return; }
    }
    ctx->pc = 0x23523Cu;
label_23523c:
    // 0x23523c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23523cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x235240: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235240u;
    {
        const bool branch_taken_0x235240 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x235240) {
            ctx->pc = 0x235254u;
            goto label_235254;
        }
    }
    ctx->pc = 0x235248u;
    // 0x235248: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x235248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x23524c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23524Cu;
    {
        const bool branch_taken_0x23524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23524Cu;
            // 0x235250: 0xac400054  sw          $zero, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23524c) {
            ctx->pc = 0x235274u;
            goto label_235274;
        }
    }
    ctx->pc = 0x235254u;
label_235254:
    // 0x235254: 0xc08ca88  jal         func_232A20
    ctx->pc = 0x235254u;
    SET_GPR_U32(ctx, 31, 0x23525Cu);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23525Cu; }
        if (ctx->pc != 0x23525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23525Cu; }
        if (ctx->pc != 0x23525Cu) { return; }
    }
    ctx->pc = 0x23525Cu;
label_23525c:
    // 0x23525c: 0xc08d208  jal         func_234820
    ctx->pc = 0x23525Cu;
    SET_GPR_U32(ctx, 31, 0x235264u);
    ctx->pc = 0x235260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23525Cu;
            // 0x235260: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234820u;
    if (runtime->hasFunction(0x234820u)) {
        auto targetFn = runtime->lookupFunction(0x234820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235264u; }
        if (ctx->pc != 0x235264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonMenuModeID__Fv_0x234820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235264u; }
        if (ctx->pc != 0x235264u) { return; }
    }
    ctx->pc = 0x235264u;
label_235264:
    // 0x235264: 0x8f8394cc  lw          $v1, -0x6B34($gp)
    ctx->pc = 0x235264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x235268: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x235268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x23526c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x23526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235270: 0xac510054  sw          $s1, 0x54($v0)
    ctx->pc = 0x235270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 17));
label_235274:
    // 0x235274: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x235274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235278: 0xc08cb18  jal         func_232C60
    ctx->pc = 0x235278u;
    SET_GPR_U32(ctx, 31, 0x235280u);
    ctx->pc = 0x23527Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235278u;
            // 0x23527c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C60u;
    if (runtime->hasFunction(0x232C60u)) {
        auto targetFn = runtime->lookupFunction(0x232C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235280u; }
        if (ctx->pc != 0x235280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainImageDataEnter__Fi_0x232c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235280u; }
        if (ctx->pc != 0x235280u) { return; }
    }
    ctx->pc = 0x235280u;
label_235280:
    // 0x235280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235284: 0xc04e748  jal         func_139D20
    ctx->pc = 0x235284u;
    SET_GPR_U32(ctx, 31, 0x23528Cu);
    ctx->pc = 0x235288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235284u;
            // 0x235288: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23528Cu; }
        if (ctx->pc != 0x23528Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23528Cu; }
        if (ctx->pc != 0x23528Cu) { return; }
    }
    ctx->pc = 0x23528Cu;
label_23528c:
    // 0x23528c: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x23528cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x235290: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x235290u;
    SET_GPR_U32(ctx, 31, 0x235298u);
    ctx->pc = 0x235294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235290u;
            // 0x235294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235298u; }
        if (ctx->pc != 0x235298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235298u; }
        if (ctx->pc != 0x235298u) { return; }
    }
    ctx->pc = 0x235298u;
label_235298:
    // 0x235298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235298u;
    {
        const bool branch_taken_0x235298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235298u;
            // 0x23529c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235298) {
            ctx->pc = 0x2352A8u;
            goto label_2352a8;
        }
    }
    ctx->pc = 0x2352A0u;
    // 0x2352a0: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x2352A0u;
    SET_GPR_U32(ctx, 31, 0x2352A8u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2352A8u; }
        if (ctx->pc != 0x2352A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2352A8u; }
        if (ctx->pc != 0x2352A8u) { return; }
    }
    ctx->pc = 0x2352A8u;
label_2352a8:
    // 0x2352a8: 0xaf8294d0  sw          $v0, -0x6B30($gp)
    ctx->pc = 0x2352a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939856), GPR_U32(ctx, 2));
    // 0x2352ac: 0xc08d1d0  jal         func_234740
    ctx->pc = 0x2352ACu;
    SET_GPR_U32(ctx, 31, 0x2352B4u);
    ctx->pc = 0x2352B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2352ACu;
            // 0x2352b0: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234740u;
    if (runtime->hasFunction(0x234740u)) {
        auto targetFn = runtime->lookupFunction(0x234740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2352B4u; }
        if (ctx->pc != 0x2352B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainPosCfgBuffer__FPi_0x234740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2352B4u; }
        if (ctx->pc != 0x2352B4u) { return; }
    }
    ctx->pc = 0x2352B4u;
label_2352b4:
    // 0x2352b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2352b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2352b8: 0x8e470024  lw          $a3, 0x24($s2)
    ctx->pc = 0x2352b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2352bc: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2352bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2352c0: 0x3c01fffc  lui         $at, 0xFFFC
    ctx->pc = 0x2352c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65532 << 16));
    // 0x2352c4: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2352c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2352c8: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x2352c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x2352cc: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x2352ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2352d0: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x2352d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2352d4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2352d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2352d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2352d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2352dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2352dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2352e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2352e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2352e4: 0x419821  addu        $s3, $v0, $at
    ctx->pc = 0x2352e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2352e8: 0xc049c18  jal         func_127060
    ctx->pc = 0x2352E8u;
    SET_GPR_U32(ctx, 31, 0x2352F0u);
    ctx->pc = 0x2352ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2352E8u;
            // 0x2352ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2352F0u; }
        if (ctx->pc != 0x2352F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2352F0u; }
        if (ctx->pc != 0x2352F0u) { return; }
    }
    ctx->pc = 0x2352F0u;
label_2352f0:
    // 0x2352f0: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x2352f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2352f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2352f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2352f8: 0xc094f98  jal         func_253E60
    ctx->pc = 0x2352F8u;
    SET_GPR_U32(ctx, 31, 0x235300u);
    ctx->pc = 0x2352FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2352F8u;
            // 0x2352fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235300u; }
        if (ctx->pc != 0x235300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235300u; }
        if (ctx->pc != 0x235300u) { return; }
    }
    ctx->pc = 0x235300u;
label_235300:
    // 0x235300: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x235300u;
    SET_GPR_U32(ctx, 31, 0x235308u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235308u; }
        if (ctx->pc != 0x235308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235308u; }
        if (ctx->pc != 0x235308u) { return; }
    }
    ctx->pc = 0x235308u;
label_235308:
    // 0x235308: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x235308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x23530c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23530cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235310: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x235310u;
    SET_GPR_U32(ctx, 31, 0x235318u);
    ctx->pc = 0x235314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235310u;
            // 0x235314: 0x24a5a938  addiu       $a1, $a1, -0x56C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235318u; }
        if (ctx->pc != 0x235318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235318u; }
        if (ctx->pc != 0x235318u) { return; }
    }
    ctx->pc = 0x235318u;
label_235318:
    // 0x235318: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x235318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x23531c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23531cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235320: 0xaf8294dc  sw          $v0, -0x6B24($gp)
    ctx->pc = 0x235320u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939868), GPR_U32(ctx, 2));
    // 0x235324: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x235324u;
    SET_GPR_U32(ctx, 31, 0x23532Cu);
    ctx->pc = 0x235328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235324u;
            // 0x235328: 0x24a5a948  addiu       $a1, $a1, -0x56B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23532Cu; }
        if (ctx->pc != 0x23532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23532Cu; }
        if (ctx->pc != 0x23532Cu) { return; }
    }
    ctx->pc = 0x23532Cu;
label_23532c:
    // 0x23532c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23532Cu;
    {
        const bool branch_taken_0x23532c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23532Cu;
            // 0x235330: 0xaf8294e0  sw          $v0, -0x6B20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23532c) {
            ctx->pc = 0x235348u;
            goto label_235348;
        }
    }
    ctx->pc = 0x235334u;
    // 0x235334: 0x8f8294e0  lw          $v0, -0x6B20($gp)
    ctx->pc = 0x235334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939872)));
    // 0x235338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235338u;
    {
        const bool branch_taken_0x235338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235338) {
            ctx->pc = 0x235348u;
            goto label_235348;
        }
    }
    ctx->pc = 0x235340u;
    // 0x235340: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x235340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x235344: 0xaf8094e0  sw          $zero, -0x6B20($gp)
    ctx->pc = 0x235344u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939872), GPR_U32(ctx, 0));
label_235348:
    // 0x235348: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x235348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x23534c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23534cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235350: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x235350u;
    SET_GPR_U32(ctx, 31, 0x235358u);
    ctx->pc = 0x235354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235350u;
            // 0x235354: 0x24a5a958  addiu       $a1, $a1, -0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235358u; }
        if (ctx->pc != 0x235358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235358u; }
        if (ctx->pc != 0x235358u) { return; }
    }
    ctx->pc = 0x235358u;
label_235358:
    // 0x235358: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x235358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x23535c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23535cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235360: 0xaf829518  sw          $v0, -0x6AE8($gp)
    ctx->pc = 0x235360u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939928), GPR_U32(ctx, 2));
    // 0x235364: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x235364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x235368: 0x24a5a760  addiu       $a1, $a1, -0x58A0
    ctx->pc = 0x235368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944608));
    // 0x23536c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x23536Cu;
    SET_GPR_U32(ctx, 31, 0x235374u);
    ctx->pc = 0x235370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23536Cu;
            // 0x235370: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235374u; }
        if (ctx->pc != 0x235374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235374u; }
        if (ctx->pc != 0x235374u) { return; }
    }
    ctx->pc = 0x235374u;
label_235374:
    // 0x235374: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x235374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x235378: 0xaf829528  sw          $v0, -0x6AD8($gp)
    ctx->pc = 0x235378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939944), GPR_U32(ctx, 2));
    // 0x23537c: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x23537cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x235380: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x235380u;
    SET_GPR_U32(ctx, 31, 0x235388u);
    ctx->pc = 0x235384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235380u;
            // 0x235384: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235388u; }
        if (ctx->pc != 0x235388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235388u; }
        if (ctx->pc != 0x235388u) { return; }
    }
    ctx->pc = 0x235388u;
label_235388:
    // 0x235388: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x235388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23538c: 0x8c24ca44  lw          $a0, -0x35BC($at)
    ctx->pc = 0x23538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x235390: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x235390u;
    SET_GPR_U32(ctx, 31, 0x235398u);
    ctx->pc = 0x235394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235390u;
            // 0x235394: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235398u; }
        if (ctx->pc != 0x235398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235398u; }
        if (ctx->pc != 0x235398u) { return; }
    }
    ctx->pc = 0x235398u;
label_235398:
    // 0x235398: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x235398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23539c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2353a0: 0x8c22ca44  lw          $v0, -0x35BC($at)
    ctx->pc = 0x2353a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x2353a4: 0xac401ac8  sw          $zero, 0x1AC8($v0)
    ctx->pc = 0x2353a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6856), GPR_U32(ctx, 0));
    // 0x2353a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2353a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2353ac: 0x8c22ca44  lw          $v0, -0x35BC($at)
    ctx->pc = 0x2353acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
    // 0x2353b0: 0xac431acc  sw          $v1, 0x1ACC($v0)
    ctx->pc = 0x2353b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6860), GPR_U32(ctx, 3));
    // 0x2353b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2353b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2353b8: 0x8c22cb30  lw          $v0, -0x34D0($at)
    ctx->pc = 0x2353b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953776)));
    // 0x2353bc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2353bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2353c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2353c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2353c4: 0x8c22cb34  lw          $v0, -0x34CC($at)
    ctx->pc = 0x2353c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953780)));
    // 0x2353c8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2353c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2353cc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2353ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2353d0: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x2353D0u;
    SET_GPR_U32(ctx, 31, 0x2353D8u);
    ctx->pc = 0x2353D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2353D0u;
            // 0x2353d4: 0xa38094d4  sb          $zero, -0x6B2C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939860), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2353D8u; }
        if (ctx->pc != 0x2353D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2353D8u; }
        if (ctx->pc != 0x2353D8u) { return; }
    }
    ctx->pc = 0x2353D8u;
label_2353d8:
    // 0x2353d8: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2353d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2353dc: 0x24050171  addiu       $a1, $zero, 0x171
    ctx->pc = 0x2353dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
    // 0x2353e0: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x2353E0u;
    SET_GPR_U32(ctx, 31, 0x2353E8u);
    ctx->pc = 0x2353E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2353E0u;
            // 0x2353e4: 0xa3809530  sb          $zero, -0x6AD0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939952), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2353E8u; }
        if (ctx->pc != 0x2353E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2353E8u; }
        if (ctx->pc != 0x2353E8u) { return; }
    }
    ctx->pc = 0x2353E8u;
label_2353e8:
    // 0x2353e8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2353e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2353ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2353ECu;
    {
        const bool branch_taken_0x2353ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2353F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2353ECu;
            // 0x2353f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353ec) {
            ctx->pc = 0x2353F8u;
            goto label_2353f8;
        }
    }
    ctx->pc = 0x2353F4u;
    // 0x2353f4: 0xa3829530  sb          $v0, -0x6AD0($gp)
    ctx->pc = 0x2353f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939952), (uint8_t)GPR_U32(ctx, 2));
label_2353f8:
    // 0x2353f8: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2353f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2353fc: 0x24050167  addiu       $a1, $zero, 0x167
    ctx->pc = 0x2353fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 359));
    // 0x235400: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x235400u;
    SET_GPR_U32(ctx, 31, 0x235408u);
    ctx->pc = 0x235404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235400u;
            // 0x235404: 0xa3809538  sb          $zero, -0x6AC8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939960), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235408u; }
        if (ctx->pc != 0x235408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235408u; }
        if (ctx->pc != 0x235408u) { return; }
    }
    ctx->pc = 0x235408u;
label_235408:
    // 0x235408: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x235408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23540c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23540Cu;
    {
        const bool branch_taken_0x23540c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x235410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23540Cu;
            // 0x235410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23540c) {
            ctx->pc = 0x235418u;
            goto label_235418;
        }
    }
    ctx->pc = 0x235414u;
    // 0x235414: 0xa3829538  sb          $v0, -0x6AC8($gp)
    ctx->pc = 0x235414u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939960), (uint8_t)GPR_U32(ctx, 2));
label_235418:
    // 0x235418: 0x8f838ad4  lw          $v1, -0x752C($gp)
    ctx->pc = 0x235418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x23541c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23541cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235420: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x235420u;
    {
        const bool branch_taken_0x235420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x235424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235420u;
            // 0x235424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235420) {
            ctx->pc = 0x235444u;
            goto label_235444;
        }
    }
    ctx->pc = 0x235428u;
    // 0x235428: 0xc064268  jal         func_1909A0
    ctx->pc = 0x235428u;
    SET_GPR_U32(ctx, 31, 0x235430u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235430u; }
        if (ctx->pc != 0x235430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235430u; }
        if (ctx->pc != 0x235430u) { return; }
    }
    ctx->pc = 0x235430u;
label_235430:
    // 0x235430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x235430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x235434: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x235434u;
    {
        const bool branch_taken_0x235434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235434u;
            // 0x235438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235434) {
            ctx->pc = 0x235440u;
            goto label_235440;
        }
    }
    ctx->pc = 0x23543Cu;
    // 0x23543c: 0xa3829538  sb          $v0, -0x6AC8($gp)
    ctx->pc = 0x23543cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939960), (uint8_t)GPR_U32(ctx, 2));
label_235440:
    // 0x235440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235444:
    // 0x235444: 0xa3829534  sb          $v0, -0x6ACC($gp)
    ctx->pc = 0x235444u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939956), (uint8_t)GPR_U32(ctx, 2));
    // 0x235448: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235448u;
    {
        const bool branch_taken_0x235448 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235448u;
            // 0x23544c: 0xa382953c  sb          $v0, -0x6AC4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939964), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235448) {
            ctx->pc = 0x235458u;
            goto label_235458;
        }
    }
    ctx->pc = 0x235450u;
    // 0x235450: 0xa3809534  sb          $zero, -0x6ACC($gp)
    ctx->pc = 0x235450u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939956), (uint8_t)GPR_U32(ctx, 0));
    // 0x235454: 0xa380953c  sb          $zero, -0x6AC4($gp)
    ctx->pc = 0x235454u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939964), (uint8_t)GPR_U32(ctx, 0));
label_235458:
    // 0x235458: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x235458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23545c: 0x1222009f  beq         $s1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x23545Cu;
    {
        const bool branch_taken_0x23545c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23545c) {
            ctx->pc = 0x2356DCu;
            goto label_2356dc;
        }
    }
    ctx->pc = 0x235464u;
    // 0x235464: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x235464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x235468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23546c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x23546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x235470: 0x27858330  addiu       $a1, $gp, -0x7CD0
    ctx->pc = 0x235470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935344));
    // 0x235474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x235474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235478: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x235478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x23547c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235480: 0xc094470  jal         func_2511C0
    ctx->pc = 0x235480u;
    SET_GPR_U32(ctx, 31, 0x235488u);
    ctx->pc = 0x235484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235480u;
            // 0x235484: 0xaf8294c8  sw          $v0, -0x6B38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2511C0u;
    if (runtime->hasFunction(0x2511C0u)) {
        auto targetFn = runtime->lookupFunction(0x2511C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235488u; }
        if (ctx->pc != 0x235488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCommonReadData__FP9mgCMemoryPPci_0x2511c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235488u; }
        if (ctx->pc != 0x235488u) { return; }
    }
    ctx->pc = 0x235488u;
label_235488:
    // 0x235488: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23548c: 0xc08900c  jal         func_224030
    ctx->pc = 0x23548Cu;
    SET_GPR_U32(ctx, 31, 0x235494u);
    ctx->pc = 0x235490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23548Cu;
            // 0x235490: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235494u; }
        if (ctx->pc != 0x235494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235494u; }
        if (ctx->pc != 0x235494u) { return; }
    }
    ctx->pc = 0x235494u;
label_235494:
    // 0x235494: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x235494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x235498: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x235498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23549c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x23549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2354a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2354A0u;
    {
        const bool branch_taken_0x2354a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2354A0u;
            // 0x2354a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354a0) {
            ctx->pc = 0x2354B0u;
            goto label_2354b0;
        }
    }
    ctx->pc = 0x2354A8u;
label_2354a8:
    // 0x2354a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2354a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2354ac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2354acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2354b0:
    // 0x2354b0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2354b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2354b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2354b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2354b8: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2354b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2354bc: 0x1020fffa  beqz        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2354BCu;
    {
        const bool branch_taken_0x2354bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2354bc) {
            ctx->pc = 0x2354A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2354a8;
        }
    }
    ctx->pc = 0x2354C4u;
    // 0x2354c4: 0xdf828338  ld          $v0, -0x7CC8($gp)
    ctx->pc = 0x2354c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935352)));
    // 0x2354c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2354c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2354cc: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2354ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2354d0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2354d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2354d4: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2354d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2354d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2354d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354dc: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2354dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2354e0: 0xdf828340  ld          $v0, -0x7CC0($gp)
    ctx->pc = 0x2354e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935360)));
    // 0x2354e4: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2354e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2354e8: 0xdf828348  ld          $v0, -0x7CB8($gp)
    ctx->pc = 0x2354e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935368)));
    // 0x2354ec: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2354ECu;
    {
        const bool branch_taken_0x2354ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2354ECu;
            // 0x2354f0: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354ec) {
            ctx->pc = 0x235540u;
            goto label_235540;
        }
    }
    ctx->pc = 0x2354F4u;
    // 0x2354f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2354f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2354f8:
    // 0x2354f8: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x2354f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x2354fc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2354fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x235500: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x235500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x235504: 0xc08ab80  jal         func_22AE00
    ctx->pc = 0x235504u;
    SET_GPR_U32(ctx, 31, 0x23550Cu);
    ctx->pc = 0x235508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235504u;
            // 0x235508: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE00u;
    if (runtime->hasFunction(0x22AE00u)) {
        auto targetFn = runtime->lookupFunction(0x22AE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23550Cu; }
        if (ctx->pc != 0x23550Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainIconChar__Fi_0x22ae00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23550Cu; }
        if (ctx->pc != 0x23550Cu) { return; }
    }
    ctx->pc = 0x23550Cu;
label_23550c:
    // 0x23550c: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x23550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x235510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235514: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x235514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x235518: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x235518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x23551c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x23551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x235520: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x235520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x235524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235528: 0xc08abfc  jal         func_22AFF0
    ctx->pc = 0x235528u;
    SET_GPR_U32(ctx, 31, 0x235530u);
    ctx->pc = 0x23552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235528u;
            // 0x23552c: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AFF0u;
    if (runtime->hasFunction(0x22AFF0u)) {
        auto targetFn = runtime->lookupFunction(0x22AFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235530u; }
        if (ctx->pc != 0x235530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFormPos__14CPosDataManageFPcPi_0x22aff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235530u; }
        if (ctx->pc != 0x235530u) { return; }
    }
    ctx->pc = 0x235530u;
label_235530:
    // 0x235530: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x235530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x235534: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x235534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x235538: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x235538u;
    {
        const bool branch_taken_0x235538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23553Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235538u;
            // 0x23553c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235538) {
            ctx->pc = 0x2354F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2354f8;
        }
    }
    ctx->pc = 0x235540u;
label_235540:
    // 0x235540: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x235540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x235544: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x235544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235548: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x235548u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x23554c: 0x24a5a960  addiu       $a1, $a1, -0x56A0
    ctx->pc = 0x23554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945120));
    // 0x235550: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x235550u;
    SET_GPR_U32(ctx, 31, 0x235558u);
    ctx->pc = 0x235554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235550u;
            // 0x235554: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235558u; }
        if (ctx->pc != 0x235558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235558u; }
        if (ctx->pc != 0x235558u) { return; }
    }
    ctx->pc = 0x235558u;
label_235558:
    // 0x235558: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x235558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23555c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x23555Cu;
    {
        const bool branch_taken_0x23555c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23555c) {
            ctx->pc = 0x23559Cu;
            goto label_23559c;
        }
    }
    ctx->pc = 0x235564u;
    // 0x235564: 0x93829530  lbu         $v0, -0x6AD0($gp)
    ctx->pc = 0x235564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939952)));
    // 0x235568: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235568u;
    {
        const bool branch_taken_0x235568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23556Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235568u;
            // 0x23556c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235568) {
            ctx->pc = 0x235578u;
            goto label_235578;
        }
    }
    ctx->pc = 0x235570u;
    // 0x235570: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x235570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235574: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x235574u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_235578:
    // 0x235578: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x235578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23557c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235580: 0xc08968c  jal         func_225A30
    ctx->pc = 0x235580u;
    SET_GPR_U32(ctx, 31, 0x235588u);
    ctx->pc = 0x235584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235580u;
            // 0x235584: 0x24a5a968  addiu       $a1, $a1, -0x5698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235588u; }
        if (ctx->pc != 0x235588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235588u; }
        if (ctx->pc != 0x235588u) { return; }
    }
    ctx->pc = 0x235588u;
label_235588:
    // 0x235588: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x235588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23558c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23558cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235590: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x235590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235594: 0xc08968c  jal         func_225A30
    ctx->pc = 0x235594u;
    SET_GPR_U32(ctx, 31, 0x23559Cu);
    ctx->pc = 0x235598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235594u;
            // 0x235598: 0x24a5a970  addiu       $a1, $a1, -0x5690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23559Cu; }
        if (ctx->pc != 0x23559Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23559Cu; }
        if (ctx->pc != 0x23559Cu) { return; }
    }
    ctx->pc = 0x23559Cu;
label_23559c:
    // 0x23559c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x23559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2355a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2355a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2355a4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2355A4u;
    SET_GPR_U32(ctx, 31, 0x2355ACu);
    ctx->pc = 0x2355A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2355A4u;
            // 0x2355a8: 0x24a5a978  addiu       $a1, $a1, -0x5688 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2355ACu; }
        if (ctx->pc != 0x2355ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2355ACu; }
        if (ctx->pc != 0x2355ACu) { return; }
    }
    ctx->pc = 0x2355ACu;
label_2355ac:
    // 0x2355ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2355acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355b0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2355B0u;
    {
        const bool branch_taken_0x2355b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2355b0) {
            ctx->pc = 0x2355F8u;
            goto label_2355f8;
        }
    }
    ctx->pc = 0x2355B8u;
    // 0x2355b8: 0x93829538  lbu         $v0, -0x6AC8($gp)
    ctx->pc = 0x2355b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939960)));
    // 0x2355bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2355bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2355c0: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x2355c0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2355c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2355C4u;
    {
        const bool branch_taken_0x2355c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2355C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2355C4u;
            // 0x2355c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355c4) {
            ctx->pc = 0x2355D4u;
            goto label_2355d4;
        }
    }
    ctx->pc = 0x2355CCu;
    // 0x2355cc: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x2355ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2355d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2355d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2355d4:
    // 0x2355d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2355d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2355d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2355d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355dc: 0xc08968c  jal         func_225A30
    ctx->pc = 0x2355DCu;
    SET_GPR_U32(ctx, 31, 0x2355E4u);
    ctx->pc = 0x2355E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2355DCu;
            // 0x2355e0: 0x24a5a968  addiu       $a1, $a1, -0x5698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2355E4u; }
        if (ctx->pc != 0x2355E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2355E4u; }
        if (ctx->pc != 0x2355E4u) { return; }
    }
    ctx->pc = 0x2355E4u;
label_2355e4:
    // 0x2355e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2355e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2355e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2355e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2355ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2355f0: 0xc08968c  jal         func_225A30
    ctx->pc = 0x2355F0u;
    SET_GPR_U32(ctx, 31, 0x2355F8u);
    ctx->pc = 0x2355F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2355F0u;
            // 0x2355f4: 0x24a5a970  addiu       $a1, $a1, -0x5690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2355F8u; }
        if (ctx->pc != 0x2355F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2355F8u; }
        if (ctx->pc != 0x2355F8u) { return; }
    }
    ctx->pc = 0x2355F8u;
label_2355f8:
    // 0x2355f8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2355f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2355fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2355fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235600: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x235600u;
    SET_GPR_U32(ctx, 31, 0x235608u);
    ctx->pc = 0x235604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235600u;
            // 0x235604: 0x24a5a980  addiu       $a1, $a1, -0x5680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235608u; }
        if (ctx->pc != 0x235608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235608u; }
        if (ctx->pc != 0x235608u) { return; }
    }
    ctx->pc = 0x235608u;
label_235608:
    // 0x235608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x235608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23560c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x23560Cu;
    {
        const bool branch_taken_0x23560c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23560c) {
            ctx->pc = 0x23566Cu;
            goto label_23566c;
        }
    }
    ctx->pc = 0x235614u;
    // 0x235614: 0x93829534  lbu         $v0, -0x6ACC($gp)
    ctx->pc = 0x235614u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939956)));
    // 0x235618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x235618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23561c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x23561cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x235620: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235620u;
    {
        const bool branch_taken_0x235620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235620u;
            // 0x235624: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235620) {
            ctx->pc = 0x235630u;
            goto label_235630;
        }
    }
    ctx->pc = 0x235628u;
    // 0x235628: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x235628u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23562c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23562cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235630:
    // 0x235630: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x235630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235638: 0xc08968c  jal         func_225A30
    ctx->pc = 0x235638u;
    SET_GPR_U32(ctx, 31, 0x235640u);
    ctx->pc = 0x23563Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235638u;
            // 0x23563c: 0x24a5a968  addiu       $a1, $a1, -0x5698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235640u; }
        if (ctx->pc != 0x235640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235640u; }
        if (ctx->pc != 0x235640u) { return; }
    }
    ctx->pc = 0x235640u;
label_235640:
    // 0x235640: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x235640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235644: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x235644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23564c: 0xc08968c  jal         func_225A30
    ctx->pc = 0x23564Cu;
    SET_GPR_U32(ctx, 31, 0x235654u);
    ctx->pc = 0x235650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23564Cu;
            // 0x235650: 0x24a5a970  addiu       $a1, $a1, -0x5690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235654u; }
        if (ctx->pc != 0x235654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235654u; }
        if (ctx->pc != 0x235654u) { return; }
    }
    ctx->pc = 0x235654u;
label_235654:
    // 0x235654: 0xc08ca88  jal         func_232A20
    ctx->pc = 0x235654u;
    SET_GPR_U32(ctx, 31, 0x23565Cu);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23565Cu; }
        if (ctx->pc != 0x23565Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23565Cu; }
        if (ctx->pc != 0x23565Cu) { return; }
    }
    ctx->pc = 0x23565Cu;
label_23565c:
    // 0x23565c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235660: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x235660u;
    {
        const bool branch_taken_0x235660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x235660) {
            ctx->pc = 0x23566Cu;
            goto label_23566c;
        }
    }
    ctx->pc = 0x235668u;
    // 0x235668: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x235668u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_23566c:
    // 0x23566c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x23566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x235670: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x235670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235674: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x235674u;
    SET_GPR_U32(ctx, 31, 0x23567Cu);
    ctx->pc = 0x235678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235674u;
            // 0x235678: 0x24a5a988  addiu       $a1, $a1, -0x5678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23567Cu; }
        if (ctx->pc != 0x23567Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23567Cu; }
        if (ctx->pc != 0x23567Cu) { return; }
    }
    ctx->pc = 0x23567Cu;
label_23567c:
    // 0x23567c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23567cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235680: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x235680u;
    {
        const bool branch_taken_0x235680 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x235680) {
            ctx->pc = 0x2356DCu;
            goto label_2356dc;
        }
    }
    ctx->pc = 0x235688u;
    // 0x235688: 0x9382953c  lbu         $v0, -0x6AC4($gp)
    ctx->pc = 0x235688u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939964)));
    // 0x23568c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235690: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x235690u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x235694: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235694u;
    {
        const bool branch_taken_0x235694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235694u;
            // 0x235698: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235694) {
            ctx->pc = 0x2356A4u;
            goto label_2356a4;
        }
    }
    ctx->pc = 0x23569Cu;
    // 0x23569c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x23569cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2356a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2356a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2356a4:
    // 0x2356a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2356a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2356a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2356a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2356ac: 0xc08968c  jal         func_225A30
    ctx->pc = 0x2356ACu;
    SET_GPR_U32(ctx, 31, 0x2356B4u);
    ctx->pc = 0x2356B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2356ACu;
            // 0x2356b0: 0x24a5a968  addiu       $a1, $a1, -0x5698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2356B4u; }
        if (ctx->pc != 0x2356B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2356B4u; }
        if (ctx->pc != 0x2356B4u) { return; }
    }
    ctx->pc = 0x2356B4u;
label_2356b4:
    // 0x2356b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2356b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2356b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2356b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2356bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2356bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2356c0: 0xc08968c  jal         func_225A30
    ctx->pc = 0x2356C0u;
    SET_GPR_U32(ctx, 31, 0x2356C8u);
    ctx->pc = 0x2356C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2356C0u;
            // 0x2356c4: 0x24a5a970  addiu       $a1, $a1, -0x5690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2356C8u; }
        if (ctx->pc != 0x2356C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2356C8u; }
        if (ctx->pc != 0x2356C8u) { return; }
    }
    ctx->pc = 0x2356C8u;
label_2356c8:
    // 0x2356c8: 0xc08ca88  jal         func_232A20
    ctx->pc = 0x2356C8u;
    SET_GPR_U32(ctx, 31, 0x2356D0u);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2356D0u; }
        if (ctx->pc != 0x2356D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2356D0u; }
        if (ctx->pc != 0x2356D0u) { return; }
    }
    ctx->pc = 0x2356D0u;
label_2356d0:
    // 0x2356d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2356D0u;
    {
        const bool branch_taken_0x2356d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2356d0) {
            ctx->pc = 0x2356DCu;
            goto label_2356dc;
        }
    }
    ctx->pc = 0x2356D8u;
    // 0x2356d8: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x2356d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_2356dc:
    // 0x2356dc: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x2356dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x2356e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2356e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2356e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2356e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2356e8: 0xa0440015  sb          $a0, 0x15($v0)
    ctx->pc = 0x2356e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 4));
    // 0x2356ec: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x2356ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
    // 0x2356f0: 0xa4440010  sh          $a0, 0x10($v0)
    ctx->pc = 0x2356f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x2356f4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2356f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2356f8: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x2356f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x2356fc: 0xc08ef58  jal         func_23BD60
    ctx->pc = 0x2356FCu;
    SET_GPR_U32(ctx, 31, 0x235704u);
    ctx->pc = 0x235700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2356FCu;
            // 0x235700: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BD60u;
    if (runtime->hasFunction(0x23BD60u)) {
        auto targetFn = runtime->lookupFunction(0x23BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235704u; }
        if (ctx->pc != 0x235704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachFuncData__12CMenuKeyFuncFv_0x23bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235704u; }
        if (ctx->pc != 0x235704u) { return; }
    }
    ctx->pc = 0x235704u;
label_235704:
    // 0x235704: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x235704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235708: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x235708u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x23570c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x23570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235710: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x235710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x235714: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235714u;
    {
        const bool branch_taken_0x235714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235714) {
            ctx->pc = 0x235720u;
            goto label_235720;
        }
    }
    ctx->pc = 0x23571Cu;
    // 0x23571c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x23571cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_235720:
    // 0x235720: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x235720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235724: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x235724u;
    SET_GPR_U32(ctx, 31, 0x23572Cu);
    ctx->pc = 0x235728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235724u;
            // 0x235728: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23572Cu; }
        if (ctx->pc != 0x23572Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23572Cu; }
        if (ctx->pc != 0x23572Cu) { return; }
    }
    ctx->pc = 0x23572Cu;
label_23572c:
    // 0x23572c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23572cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235734: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x235734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x235738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23573c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23573cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235744: 0x3e00008  jr          $ra
    ctx->pc = 0x235744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235744u;
            // 0x235748: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23574Cu;
}
