#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MySetPrim__FP11mgCDrawPrimii
// Address: 0x151450 - 0x151640
void MySetPrim__FP11mgCDrawPrimii_0x151450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MySetPrim__FP11mgCDrawPrimii_0x151450");
#endif

    switch (ctx->pc) {
        case 0x15147cu: goto label_15147c;
        case 0x1514bcu: goto label_1514bc;
        case 0x1514c8u: goto label_1514c8;
        case 0x1514d4u: goto label_1514d4;
        case 0x1514e4u: goto label_1514e4;
        case 0x1514f0u: goto label_1514f0;
        case 0x1514fcu: goto label_1514fc;
        case 0x151508u: goto label_151508;
        case 0x151514u: goto label_151514;
        case 0x151520u: goto label_151520;
        case 0x15152cu: goto label_15152c;
        case 0x15153cu: goto label_15153c;
        case 0x151548u: goto label_151548;
        case 0x151554u: goto label_151554;
        case 0x151560u: goto label_151560;
        case 0x151574u: goto label_151574;
        case 0x151584u: goto label_151584;
        case 0x151594u: goto label_151594;
        case 0x1515a0u: goto label_1515a0;
        case 0x1515acu: goto label_1515ac;
        case 0x1515b8u: goto label_1515b8;
        case 0x1515ccu: goto label_1515cc;
        case 0x1515dcu: goto label_1515dc;
        case 0x1515ecu: goto label_1515ec;
        case 0x1515f8u: goto label_1515f8;
        case 0x151604u: goto label_151604;
        case 0x151610u: goto label_151610;
        case 0x15161cu: goto label_15161c;
        case 0x151628u: goto label_151628;
        default: break;
    }

    ctx->pc = 0x151450u;

    // 0x151450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x151454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x151454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x151458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15145c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151460: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x151460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151468: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x151468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15146c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15146cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151474: 0xc04d104  jal         func_134410
    ctx->pc = 0x151474u;
    SET_GPR_U32(ctx, 31, 0x15147Cu);
    ctx->pc = 0x151478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151474u;
            // 0x151478: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15147Cu; }
        if (ctx->pc != 0x15147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15147Cu; }
        if (ctx->pc != 0x15147Cu) { return; }
    }
    ctx->pc = 0x15147Cu;
label_15147c:
    // 0x15147c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x15147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x151480: 0x12230058  beq         $s1, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x151480u;
    {
        const bool branch_taken_0x151480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x151484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151480u;
            // 0x151484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151480) {
            ctx->pc = 0x1515E4u;
            goto label_1515e4;
        }
    }
    ctx->pc = 0x151488u;
    // 0x151488: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x151488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15148c: 0x1223003f  beq         $s1, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x15148Cu;
    {
        const bool branch_taken_0x15148c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x151490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15148Cu;
            // 0x151490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15148c) {
            ctx->pc = 0x15158Cu;
            goto label_15158c;
        }
    }
    ctx->pc = 0x151494u;
    // 0x151494: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x151494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x151498: 0x12230026  beq         $s1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x151498u;
    {
        const bool branch_taken_0x151498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x15149Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151498u;
            // 0x15149c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151498) {
            ctx->pc = 0x151534u;
            goto label_151534;
        }
    }
    ctx->pc = 0x1514A0u;
    // 0x1514a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1514a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1514a4: 0x12250003  beq         $s1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1514A4u;
    {
        const bool branch_taken_0x1514a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x1514A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1514A4u;
            // 0x1514a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514a4) {
            ctx->pc = 0x1514B4u;
            goto label_1514b4;
        }
    }
    ctx->pc = 0x1514ACu;
    // 0x1514ac: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1514ACu;
    {
        const bool branch_taken_0x1514ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1514ACu;
            // 0x1514b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514ac) {
            ctx->pc = 0x15162Cu;
            goto label_15162c;
        }
    }
    ctx->pc = 0x1514B4u;
label_1514b4:
    // 0x1514b4: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1514B4u;
    SET_GPR_U32(ctx, 31, 0x1514BCu);
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514BCu; }
        if (ctx->pc != 0x1514BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514BCu; }
        if (ctx->pc != 0x1514BCu) { return; }
    }
    ctx->pc = 0x1514BCu;
label_1514bc:
    // 0x1514bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1514bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514c0: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1514C0u;
    SET_GPR_U32(ctx, 31, 0x1514C8u);
    ctx->pc = 0x1514C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1514C0u;
            // 0x1514c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514C8u; }
        if (ctx->pc != 0x1514C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514C8u; }
        if (ctx->pc != 0x1514C8u) { return; }
    }
    ctx->pc = 0x1514C8u;
label_1514c8:
    // 0x1514c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1514c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514cc: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1514CCu;
    SET_GPR_U32(ctx, 31, 0x1514D4u);
    ctx->pc = 0x1514D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1514CCu;
            // 0x1514d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514D4u; }
        if (ctx->pc != 0x1514D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514D4u; }
        if (ctx->pc != 0x1514D4u) { return; }
    }
    ctx->pc = 0x1514D4u;
label_1514d4:
    // 0x1514d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1514d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1514d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1514dc: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x1514DCu;
    SET_GPR_U32(ctx, 31, 0x1514E4u);
    ctx->pc = 0x1514E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1514DCu;
            // 0x1514e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514E4u; }
        if (ctx->pc != 0x1514E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514E4u; }
        if (ctx->pc != 0x1514E4u) { return; }
    }
    ctx->pc = 0x1514E4u;
label_1514e4:
    // 0x1514e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1514e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514e8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1514E8u;
    SET_GPR_U32(ctx, 31, 0x1514F0u);
    ctx->pc = 0x1514ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1514E8u;
            // 0x1514ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514F0u; }
        if (ctx->pc != 0x1514F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514F0u; }
        if (ctx->pc != 0x1514F0u) { return; }
    }
    ctx->pc = 0x1514F0u;
label_1514f0:
    // 0x1514f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1514f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514f4: 0xc04d424  jal         func_135090
    ctx->pc = 0x1514F4u;
    SET_GPR_U32(ctx, 31, 0x1514FCu);
    ctx->pc = 0x1514F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1514F4u;
            // 0x1514f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514FCu; }
        if (ctx->pc != 0x1514FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1514FCu; }
        if (ctx->pc != 0x1514FCu) { return; }
    }
    ctx->pc = 0x1514FCu;
label_1514fc:
    // 0x1514fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1514fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151500: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x151500u;
    SET_GPR_U32(ctx, 31, 0x151508u);
    ctx->pc = 0x151504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151500u;
            // 0x151504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151508u; }
        if (ctx->pc != 0x151508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151508u; }
        if (ctx->pc != 0x151508u) { return; }
    }
    ctx->pc = 0x151508u;
label_151508:
    // 0x151508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15150c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x15150Cu;
    SET_GPR_U32(ctx, 31, 0x151514u);
    ctx->pc = 0x151510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15150Cu;
            // 0x151510: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151514u; }
        if (ctx->pc != 0x151514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151514u; }
        if (ctx->pc != 0x151514u) { return; }
    }
    ctx->pc = 0x151514u;
label_151514:
    // 0x151514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151518: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x151518u;
    SET_GPR_U32(ctx, 31, 0x151520u);
    ctx->pc = 0x15151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151518u;
            // 0x15151c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151520u; }
        if (ctx->pc != 0x151520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151520u; }
        if (ctx->pc != 0x151520u) { return; }
    }
    ctx->pc = 0x151520u;
label_151520:
    // 0x151520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151524: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x151524u;
    SET_GPR_U32(ctx, 31, 0x15152Cu);
    ctx->pc = 0x151528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151524u;
            // 0x151528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15152Cu; }
        if (ctx->pc != 0x15152Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15152Cu; }
        if (ctx->pc != 0x15152Cu) { return; }
    }
    ctx->pc = 0x15152Cu;
label_15152c:
    // 0x15152c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x15152Cu;
    {
        const bool branch_taken_0x15152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15152c) {
            ctx->pc = 0x151628u;
            goto label_151628;
        }
    }
    ctx->pc = 0x151534u;
label_151534:
    // 0x151534: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x151534u;
    SET_GPR_U32(ctx, 31, 0x15153Cu);
    ctx->pc = 0x151538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151534u;
            // 0x151538: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15153Cu; }
        if (ctx->pc != 0x15153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15153Cu; }
        if (ctx->pc != 0x15153Cu) { return; }
    }
    ctx->pc = 0x15153Cu;
label_15153c:
    // 0x15153c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15153cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151540: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x151540u;
    SET_GPR_U32(ctx, 31, 0x151548u);
    ctx->pc = 0x151544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151540u;
            // 0x151544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151548u; }
        if (ctx->pc != 0x151548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151548u; }
        if (ctx->pc != 0x151548u) { return; }
    }
    ctx->pc = 0x151548u;
label_151548:
    // 0x151548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15154c: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x15154Cu;
    SET_GPR_U32(ctx, 31, 0x151554u);
    ctx->pc = 0x151550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15154Cu;
            // 0x151550: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151554u; }
        if (ctx->pc != 0x151554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151554u; }
        if (ctx->pc != 0x151554u) { return; }
    }
    ctx->pc = 0x151554u;
label_151554:
    // 0x151554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151558: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x151558u;
    SET_GPR_U32(ctx, 31, 0x151560u);
    ctx->pc = 0x15155Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151558u;
            // 0x15155c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151560u; }
        if (ctx->pc != 0x151560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151560u; }
        if (ctx->pc != 0x151560u) { return; }
    }
    ctx->pc = 0x151560u;
label_151560:
    // 0x151560: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x151560u;
    {
        const bool branch_taken_0x151560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x151564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151560u;
            // 0x151564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151560) {
            ctx->pc = 0x15157Cu;
            goto label_15157c;
        }
    }
    ctx->pc = 0x151568u;
    // 0x151568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15156c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x15156Cu;
    SET_GPR_U32(ctx, 31, 0x151574u);
    ctx->pc = 0x151570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15156Cu;
            // 0x151570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151574u; }
        if (ctx->pc != 0x151574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151574u; }
        if (ctx->pc != 0x151574u) { return; }
    }
    ctx->pc = 0x151574u;
label_151574:
    // 0x151574: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x151574u;
    {
        const bool branch_taken_0x151574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151574) {
            ctx->pc = 0x151628u;
            goto label_151628;
        }
    }
    ctx->pc = 0x15157Cu;
label_15157c:
    // 0x15157c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x15157Cu;
    SET_GPR_U32(ctx, 31, 0x151584u);
    ctx->pc = 0x151580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15157Cu;
            // 0x151580: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151584u; }
        if (ctx->pc != 0x151584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151584u; }
        if (ctx->pc != 0x151584u) { return; }
    }
    ctx->pc = 0x151584u;
label_151584:
    // 0x151584: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x151584u;
    {
        const bool branch_taken_0x151584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151584) {
            ctx->pc = 0x151628u;
            goto label_151628;
        }
    }
    ctx->pc = 0x15158Cu;
label_15158c:
    // 0x15158c: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x15158Cu;
    SET_GPR_U32(ctx, 31, 0x151594u);
    ctx->pc = 0x151590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15158Cu;
            // 0x151590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151594u; }
        if (ctx->pc != 0x151594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151594u; }
        if (ctx->pc != 0x151594u) { return; }
    }
    ctx->pc = 0x151594u;
label_151594:
    // 0x151594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151598: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x151598u;
    SET_GPR_U32(ctx, 31, 0x1515A0u);
    ctx->pc = 0x15159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151598u;
            // 0x15159c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515A0u; }
        if (ctx->pc != 0x1515A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515A0u; }
        if (ctx->pc != 0x1515A0u) { return; }
    }
    ctx->pc = 0x1515A0u;
label_1515a0:
    // 0x1515a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1515a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515a4: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1515A4u;
    SET_GPR_U32(ctx, 31, 0x1515ACu);
    ctx->pc = 0x1515A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1515A4u;
            // 0x1515a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515ACu; }
        if (ctx->pc != 0x1515ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515ACu; }
        if (ctx->pc != 0x1515ACu) { return; }
    }
    ctx->pc = 0x1515ACu;
label_1515ac:
    // 0x1515ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1515acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515b0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1515B0u;
    SET_GPR_U32(ctx, 31, 0x1515B8u);
    ctx->pc = 0x1515B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1515B0u;
            // 0x1515b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515B8u; }
        if (ctx->pc != 0x1515B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515B8u; }
        if (ctx->pc != 0x1515B8u) { return; }
    }
    ctx->pc = 0x1515B8u;
label_1515b8:
    // 0x1515b8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1515B8u;
    {
        const bool branch_taken_0x1515b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1515BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1515B8u;
            // 0x1515bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515b8) {
            ctx->pc = 0x1515D4u;
            goto label_1515d4;
        }
    }
    ctx->pc = 0x1515C0u;
    // 0x1515c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1515c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515c4: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1515C4u;
    SET_GPR_U32(ctx, 31, 0x1515CCu);
    ctx->pc = 0x1515C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1515C4u;
            // 0x1515c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515CCu; }
        if (ctx->pc != 0x1515CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515CCu; }
        if (ctx->pc != 0x1515CCu) { return; }
    }
    ctx->pc = 0x1515CCu;
label_1515cc:
    // 0x1515cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1515CCu;
    {
        const bool branch_taken_0x1515cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1515cc) {
            ctx->pc = 0x151628u;
            goto label_151628;
        }
    }
    ctx->pc = 0x1515D4u;
label_1515d4:
    // 0x1515d4: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1515D4u;
    SET_GPR_U32(ctx, 31, 0x1515DCu);
    ctx->pc = 0x1515D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1515D4u;
            // 0x1515d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515DCu; }
        if (ctx->pc != 0x1515DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515DCu; }
        if (ctx->pc != 0x1515DCu) { return; }
    }
    ctx->pc = 0x1515DCu;
label_1515dc:
    // 0x1515dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1515DCu;
    {
        const bool branch_taken_0x1515dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1515dc) {
            ctx->pc = 0x151628u;
            goto label_151628;
        }
    }
    ctx->pc = 0x1515E4u;
label_1515e4:
    // 0x1515e4: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1515E4u;
    SET_GPR_U32(ctx, 31, 0x1515ECu);
    ctx->pc = 0x1515E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1515E4u;
            // 0x1515e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515ECu; }
        if (ctx->pc != 0x1515ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515ECu; }
        if (ctx->pc != 0x1515ECu) { return; }
    }
    ctx->pc = 0x1515ECu;
label_1515ec:
    // 0x1515ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1515ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515f0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1515F0u;
    SET_GPR_U32(ctx, 31, 0x1515F8u);
    ctx->pc = 0x1515F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1515F0u;
            // 0x1515f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515F8u; }
        if (ctx->pc != 0x1515F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1515F8u; }
        if (ctx->pc != 0x1515F8u) { return; }
    }
    ctx->pc = 0x1515F8u;
label_1515f8:
    // 0x1515f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1515f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1515fc: 0xc04d424  jal         func_135090
    ctx->pc = 0x1515FCu;
    SET_GPR_U32(ctx, 31, 0x151604u);
    ctx->pc = 0x151600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1515FCu;
            // 0x151600: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151604u; }
        if (ctx->pc != 0x151604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151604u; }
        if (ctx->pc != 0x151604u) { return; }
    }
    ctx->pc = 0x151604u;
label_151604:
    // 0x151604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151608: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x151608u;
    SET_GPR_U32(ctx, 31, 0x151610u);
    ctx->pc = 0x15160Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151608u;
            // 0x15160c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151610u; }
        if (ctx->pc != 0x151610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151610u; }
        if (ctx->pc != 0x151610u) { return; }
    }
    ctx->pc = 0x151610u;
label_151610:
    // 0x151610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151614: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x151614u;
    SET_GPR_U32(ctx, 31, 0x15161Cu);
    ctx->pc = 0x151618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151614u;
            // 0x151618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15161Cu; }
        if (ctx->pc != 0x15161Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15161Cu; }
        if (ctx->pc != 0x15161Cu) { return; }
    }
    ctx->pc = 0x15161Cu;
label_15161c:
    // 0x15161c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15161cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151620: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x151620u;
    SET_GPR_U32(ctx, 31, 0x151628u);
    ctx->pc = 0x151624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151620u;
            // 0x151624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151628u; }
        if (ctx->pc != 0x151628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151628u; }
        if (ctx->pc != 0x151628u) { return; }
    }
    ctx->pc = 0x151628u;
label_151628:
    // 0x151628: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15162c:
    // 0x15162c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15162cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151638: 0x3e00008  jr          $ra
    ctx->pc = 0x151638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15163Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151638u;
            // 0x15163c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151640u;
}
