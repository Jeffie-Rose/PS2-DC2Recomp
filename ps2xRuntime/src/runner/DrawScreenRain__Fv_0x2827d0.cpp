#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawScreenRain__Fv
// Address: 0x2827d0 - 0x2829d8
void DrawScreenRain__Fv_0x2827d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawScreenRain__Fv_0x2827d0");
#endif

    switch (ctx->pc) {
        case 0x2827fcu: goto label_2827fc;
        case 0x28280cu: goto label_28280c;
        case 0x282818u: goto label_282818;
        case 0x282824u: goto label_282824;
        case 0x282830u: goto label_282830;
        case 0x282840u: goto label_282840;
        case 0x28284cu: goto label_28284c;
        case 0x282858u: goto label_282858;
        case 0x282864u: goto label_282864;
        case 0x282870u: goto label_282870;
        case 0x28287cu: goto label_28287c;
        case 0x282888u: goto label_282888;
        case 0x282894u: goto label_282894;
        case 0x282898u: goto label_282898;
        case 0x2828d4u: goto label_2828d4;
        case 0x2828f4u: goto label_2828f4;
        case 0x282904u: goto label_282904;
        case 0x282914u: goto label_282914;
        case 0x282920u: goto label_282920;
        case 0x282928u: goto label_282928;
        case 0x282934u: goto label_282934;
        case 0x28293cu: goto label_28293c;
        case 0x282958u: goto label_282958;
        case 0x28296cu: goto label_28296c;
        case 0x282984u: goto label_282984;
        case 0x282998u: goto label_282998;
        case 0x2829b0u: goto label_2829b0;
        default: break;
    }

    ctx->pc = 0x2827d0u;

    // 0x2827d0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2827d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2827d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2827d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2827d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2827d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2827dc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2827dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2827e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2827e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2827e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2827e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2827e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2827e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2827ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2827ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2827f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2827f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2827f4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2827F4u;
    SET_GPR_U32(ctx, 31, 0x2827FCu);
    ctx->pc = 0x2827F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2827F4u;
            // 0x2827f8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2827FCu; }
        if (ctx->pc != 0x2827FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2827FCu; }
        if (ctx->pc != 0x2827FCu) { return; }
    }
    ctx->pc = 0x2827FCu;
label_2827fc:
    // 0x2827fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2827fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282804: 0xc04d104  jal         func_134410
    ctx->pc = 0x282804u;
    SET_GPR_U32(ctx, 31, 0x28280Cu);
    ctx->pc = 0x282808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282804u;
            // 0x282808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28280Cu; }
        if (ctx->pc != 0x28280Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28280Cu; }
        if (ctx->pc != 0x28280Cu) { return; }
    }
    ctx->pc = 0x28280Cu;
label_28280c:
    // 0x28280c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282810: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x282810u;
    SET_GPR_U32(ctx, 31, 0x282818u);
    ctx->pc = 0x282814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282810u;
            // 0x282814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282818u; }
        if (ctx->pc != 0x282818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282818u; }
        if (ctx->pc != 0x282818u) { return; }
    }
    ctx->pc = 0x282818u;
label_282818:
    // 0x282818: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28281c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x28281Cu;
    SET_GPR_U32(ctx, 31, 0x282824u);
    ctx->pc = 0x282820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28281Cu;
            // 0x282820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282824u; }
        if (ctx->pc != 0x282824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282824u; }
        if (ctx->pc != 0x282824u) { return; }
    }
    ctx->pc = 0x282824u;
label_282824:
    // 0x282824: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282828: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x282828u;
    SET_GPR_U32(ctx, 31, 0x282830u);
    ctx->pc = 0x28282Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282828u;
            // 0x28282c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282830u; }
        if (ctx->pc != 0x282830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282830u; }
        if (ctx->pc != 0x282830u) { return; }
    }
    ctx->pc = 0x282830u;
label_282830:
    // 0x282830: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x282834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282838: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x282838u;
    SET_GPR_U32(ctx, 31, 0x282840u);
    ctx->pc = 0x28283Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282838u;
            // 0x28283c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282840u; }
        if (ctx->pc != 0x282840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282840u; }
        if (ctx->pc != 0x282840u) { return; }
    }
    ctx->pc = 0x282840u;
label_282840:
    // 0x282840: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282844: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x282844u;
    SET_GPR_U32(ctx, 31, 0x28284Cu);
    ctx->pc = 0x282848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282844u;
            // 0x282848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28284Cu; }
        if (ctx->pc != 0x28284Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28284Cu; }
        if (ctx->pc != 0x28284Cu) { return; }
    }
    ctx->pc = 0x28284Cu;
label_28284c:
    // 0x28284c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28284cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282850: 0xc04d424  jal         func_135090
    ctx->pc = 0x282850u;
    SET_GPR_U32(ctx, 31, 0x282858u);
    ctx->pc = 0x282854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282850u;
            // 0x282854: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282858u; }
        if (ctx->pc != 0x282858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282858u; }
        if (ctx->pc != 0x282858u) { return; }
    }
    ctx->pc = 0x282858u;
label_282858:
    // 0x282858: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28285c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x28285Cu;
    SET_GPR_U32(ctx, 31, 0x282864u);
    ctx->pc = 0x282860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28285Cu;
            // 0x282860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282864u; }
        if (ctx->pc != 0x282864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282864u; }
        if (ctx->pc != 0x282864u) { return; }
    }
    ctx->pc = 0x282864u;
label_282864:
    // 0x282864: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282868: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x282868u;
    SET_GPR_U32(ctx, 31, 0x282870u);
    ctx->pc = 0x28286Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282868u;
            // 0x28286c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282870u; }
        if (ctx->pc != 0x282870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282870u; }
        if (ctx->pc != 0x282870u) { return; }
    }
    ctx->pc = 0x282870u;
label_282870:
    // 0x282870: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282874: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x282874u;
    SET_GPR_U32(ctx, 31, 0x28287Cu);
    ctx->pc = 0x282878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282874u;
            // 0x282878: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28287Cu; }
        if (ctx->pc != 0x28287Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28287Cu; }
        if (ctx->pc != 0x28287Cu) { return; }
    }
    ctx->pc = 0x28287Cu;
label_28287c:
    // 0x28287c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28287cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282880: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x282880u;
    SET_GPR_U32(ctx, 31, 0x282888u);
    ctx->pc = 0x282884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282880u;
            // 0x282884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282888u; }
        if (ctx->pc != 0x282888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282888u; }
        if (ctx->pc != 0x282888u) { return; }
    }
    ctx->pc = 0x282888u;
label_282888:
    // 0x282888: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28288c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x28288Cu;
    SET_GPR_U32(ctx, 31, 0x282894u);
    ctx->pc = 0x282890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28288Cu;
            // 0x282890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282894u; }
        if (ctx->pc != 0x282894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282894u; }
        if (ctx->pc != 0x282894u) { return; }
    }
    ctx->pc = 0x282894u;
label_282894:
    // 0x282894: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x282894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282898:
    // 0x282898: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x282898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x28289c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28289Cu;
    {
        const bool branch_taken_0x28289c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2828A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28289Cu;
            // 0x2828a0: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28289c) {
            ctx->pc = 0x2828ACu;
            goto label_2828ac;
        }
    }
    ctx->pc = 0x2828A4u;
    // 0x2828a4: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x2828a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2828a8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2828a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_2828ac:
    // 0x2828ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2828acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2828b0: 0x0  nop
    ctx->pc = 0x2828b0u;
    // NOP
    // 0x2828b4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x2828b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2828b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2828B8u;
    {
        const bool branch_taken_0x2828b8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2828BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2828B8u;
            // 0x2828bc: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828b8) {
            ctx->pc = 0x2828C8u;
            goto label_2828c8;
        }
    }
    ctx->pc = 0x2828C0u;
    // 0x2828c0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2828c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2828c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2828c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2828c8:
    // 0x2828c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2828c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2828cc: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x2828CCu;
    SET_GPR_U32(ctx, 31, 0x2828D4u);
    ctx->pc = 0x2828D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2828CCu;
            // 0x2828d0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828D4u; }
        if (ctx->pc != 0x2828D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828D4u; }
        if (ctx->pc != 0x2828D4u) { return; }
    }
    ctx->pc = 0x2828D4u;
label_2828d4:
    // 0x2828d4: 0x3c02bd49  lui         $v0, 0xBD49
    ctx->pc = 0x2828d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48457 << 16));
    // 0x2828d8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2828d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2828dc: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2828dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2828e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2828e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2828e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2828e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2828e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2828e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2828ec: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x2828ECu;
    SET_GPR_U32(ctx, 31, 0x2828F4u);
    ctx->pc = 0x2828F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2828ECu;
            // 0x2828f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828F4u; }
        if (ctx->pc != 0x2828F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828F4u; }
        if (ctx->pc != 0x2828F4u) { return; }
    }
    ctx->pc = 0x2828F4u;
label_2828f4:
    // 0x2828f4: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x2828f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2828f8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2828f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2828fc: 0xc0a04d4  jal         func_281350
    ctx->pc = 0x2828FCu;
    SET_GPR_U32(ctx, 31, 0x282904u);
    ctx->pc = 0x282900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2828FCu;
            // 0x282900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281350u;
    if (runtime->hasFunction(0x281350u)) {
        auto targetFn = runtime->lookupFunction(0x281350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282904u; }
        if (ctx->pc != 0x282904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        i_rand__Fii_0x281350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282904u; }
        if (ctx->pc != 0x282904u) { return; }
    }
    ctx->pc = 0x282904u;
label_282904:
    // 0x282904: 0x8f858784  lw          $a1, -0x787C($gp)
    ctx->pc = 0x282904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x282908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x282908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28290c: 0xc0a04d4  jal         func_281350
    ctx->pc = 0x28290Cu;
    SET_GPR_U32(ctx, 31, 0x282914u);
    ctx->pc = 0x282910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28290Cu;
            // 0x282910: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281350u;
    if (runtime->hasFunction(0x281350u)) {
        auto targetFn = runtime->lookupFunction(0x281350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282914u; }
        if (ctx->pc != 0x282914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        i_rand__Fii_0x281350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282914u; }
        if (ctx->pc != 0x282914u) { return; }
    }
    ctx->pc = 0x282914u;
label_282914:
    // 0x282914: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x282914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282918: 0xc047a42  jal         func_11E908
    ctx->pc = 0x282918u;
    SET_GPR_U32(ctx, 31, 0x282920u);
    ctx->pc = 0x28291Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282918u;
            // 0x28291c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282920u; }
        if (ctx->pc != 0x282920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282920u; }
        if (ctx->pc != 0x282920u) { return; }
    }
    ctx->pc = 0x282920u;
label_282920:
    // 0x282920: 0xc0a248c  jal         func_289230
    ctx->pc = 0x282920u;
    SET_GPR_U32(ctx, 31, 0x282928u);
    ctx->pc = 0x282924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282920u;
            // 0x282924: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282928u; }
        if (ctx->pc != 0x282928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282928u; }
        if (ctx->pc != 0x282928u) { return; }
    }
    ctx->pc = 0x282928u;
label_282928:
    // 0x282928: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x282928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x28292c: 0xc047964  jal         func_11E590
    ctx->pc = 0x28292Cu;
    SET_GPR_U32(ctx, 31, 0x282934u);
    ctx->pc = 0x282930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28292Cu;
            // 0x282930: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282934u; }
        if (ctx->pc != 0x282934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282934u; }
        if (ctx->pc != 0x282934u) { return; }
    }
    ctx->pc = 0x282934u;
label_282934:
    // 0x282934: 0xc0a248c  jal         func_289230
    ctx->pc = 0x282934u;
    SET_GPR_U32(ctx, 31, 0x28293Cu);
    ctx->pc = 0x282938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282934u;
            // 0x282938: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28293Cu; }
        if (ctx->pc != 0x28293Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28293Cu; }
        if (ctx->pc != 0x28293Cu) { return; }
    }
    ctx->pc = 0x28293Cu;
label_28293c:
    // 0x28293c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x28293cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282940: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x282940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x282944: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28294c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x28294cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282950: 0xc04d320  jal         func_134C80
    ctx->pc = 0x282950u;
    SET_GPR_U32(ctx, 31, 0x282958u);
    ctx->pc = 0x282954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282950u;
            // 0x282954: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282958u; }
        if (ctx->pc != 0x282958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282958u; }
        if (ctx->pc != 0x282958u) { return; }
    }
    ctx->pc = 0x282958u;
label_282958:
    // 0x282958: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x282958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28295c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28295cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282960: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282964: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x282964u;
    SET_GPR_U32(ctx, 31, 0x28296Cu);
    ctx->pc = 0x282968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282964u;
            // 0x282968: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28296Cu; }
        if (ctx->pc != 0x28296Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28296Cu; }
        if (ctx->pc != 0x28296Cu) { return; }
    }
    ctx->pc = 0x28296Cu;
label_28296c:
    // 0x28296c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x28296cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282970: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x282970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282974: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x282974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282978: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x282978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28297c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x28297Cu;
    SET_GPR_U32(ctx, 31, 0x282984u);
    ctx->pc = 0x282980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28297Cu;
            // 0x282980: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282984u; }
        if (ctx->pc != 0x282984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282984u; }
        if (ctx->pc != 0x282984u) { return; }
    }
    ctx->pc = 0x282984u;
label_282984:
    // 0x282984: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x282984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282988: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x282988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28298c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x282990: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x282990u;
    SET_GPR_U32(ctx, 31, 0x282998u);
    ctx->pc = 0x282994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282990u;
            // 0x282994: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282998u; }
        if (ctx->pc != 0x282998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282998u; }
        if (ctx->pc != 0x282998u) { return; }
    }
    ctx->pc = 0x282998u;
label_282998:
    // 0x282998: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x282998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28299c: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x28299cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2829a0: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2829A0u;
    {
        const bool branch_taken_0x2829a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2829A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829A0u;
            // 0x2829a4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829a0) {
            ctx->pc = 0x282898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282898;
        }
    }
    ctx->pc = 0x2829A8u;
    // 0x2829a8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2829A8u;
    SET_GPR_U32(ctx, 31, 0x2829B0u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2829B0u; }
        if (ctx->pc != 0x2829B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2829B0u; }
        if (ctx->pc != 0x2829B0u) { return; }
    }
    ctx->pc = 0x2829B0u;
label_2829b0:
    // 0x2829b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2829b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2829b4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2829b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2829b8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2829b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2829bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2829bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2829c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2829c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2829c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2829c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2829c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2829c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2829cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2829ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2829d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2829D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2829D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2829D0u;
            // 0x2829d4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2829D8u;
}
