#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__8CPowGageFv
// Address: 0x2e9180 - 0x2e9558
void Draw__8CPowGageFv_0x2e9180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__8CPowGageFv_0x2e9180");
#endif

    switch (ctx->pc) {
        case 0x2e91a4u: goto label_2e91a4;
        case 0x2e91b4u: goto label_2e91b4;
        case 0x2e91c0u: goto label_2e91c0;
        case 0x2e91ccu: goto label_2e91cc;
        case 0x2e91d8u: goto label_2e91d8;
        case 0x2e91e4u: goto label_2e91e4;
        case 0x2e91f0u: goto label_2e91f0;
        case 0x2e9200u: goto label_2e9200;
        case 0x2e920cu: goto label_2e920c;
        case 0x2e9218u: goto label_2e9218;
        case 0x2e9224u: goto label_2e9224;
        case 0x2e9230u: goto label_2e9230;
        case 0x2e9248u: goto label_2e9248;
        case 0x2e927cu: goto label_2e927c;
        case 0x2e92e8u: goto label_2e92e8;
        case 0x2e9314u: goto label_2e9314;
        case 0x2e9360u: goto label_2e9360;
        case 0x2e939cu: goto label_2e939c;
        case 0x2e93d8u: goto label_2e93d8;
        case 0x2e9414u: goto label_2e9414;
        case 0x2e9418u: goto label_2e9418;
        case 0x2e9460u: goto label_2e9460;
        case 0x2e94acu: goto label_2e94ac;
        case 0x2e94e8u: goto label_2e94e8;
        case 0x2e953cu: goto label_2e953c;
        case 0x2e9544u: goto label_2e9544;
        default: break;
    }

    ctx->pc = 0x2e9180u;

    // 0x2e9180: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2e9180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2e9184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e9188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e918c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e918cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9190: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e9190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e9194: 0x106000eb  beqz        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x2E9194u;
    {
        const bool branch_taken_0x2e9194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9194u;
            // 0x2e9198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9194) {
            ctx->pc = 0x2E9544u;
            goto label_2e9544;
        }
    }
    ctx->pc = 0x2E919Cu;
    // 0x2e919c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2E919Cu;
    SET_GPR_U32(ctx, 31, 0x2E91A4u);
    ctx->pc = 0x2E91A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E919Cu;
            // 0x2e91a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91A4u; }
        if (ctx->pc != 0x2E91A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91A4u; }
        if (ctx->pc != 0x2E91A4u) { return; }
    }
    ctx->pc = 0x2E91A4u;
label_2e91a4:
    // 0x2e91a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e91a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e91a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e91a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e91ac: 0xc04d104  jal         func_134410
    ctx->pc = 0x2E91ACu;
    SET_GPR_U32(ctx, 31, 0x2E91B4u);
    ctx->pc = 0x2E91B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91ACu;
            // 0x2e91b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91B4u; }
        if (ctx->pc != 0x2E91B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91B4u; }
        if (ctx->pc != 0x2E91B4u) { return; }
    }
    ctx->pc = 0x2E91B4u;
label_2e91b4:
    // 0x2e91b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e91b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e91b8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2E91B8u;
    SET_GPR_U32(ctx, 31, 0x2E91C0u);
    ctx->pc = 0x2E91BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91B8u;
            // 0x2e91bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91C0u; }
        if (ctx->pc != 0x2E91C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91C0u; }
        if (ctx->pc != 0x2E91C0u) { return; }
    }
    ctx->pc = 0x2E91C0u;
label_2e91c0:
    // 0x2e91c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e91c4: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2E91C4u;
    SET_GPR_U32(ctx, 31, 0x2E91CCu);
    ctx->pc = 0x2E91C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91C4u;
            // 0x2e91c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91CCu; }
        if (ctx->pc != 0x2E91CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91CCu; }
        if (ctx->pc != 0x2E91CCu) { return; }
    }
    ctx->pc = 0x2E91CCu;
label_2e91cc:
    // 0x2e91cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e91d0: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2E91D0u;
    SET_GPR_U32(ctx, 31, 0x2E91D8u);
    ctx->pc = 0x2E91D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91D0u;
            // 0x2e91d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91D8u; }
        if (ctx->pc != 0x2E91D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91D8u; }
        if (ctx->pc != 0x2E91D8u) { return; }
    }
    ctx->pc = 0x2E91D8u;
label_2e91d8:
    // 0x2e91d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e91d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e91dc: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x2E91DCu;
    SET_GPR_U32(ctx, 31, 0x2E91E4u);
    ctx->pc = 0x2E91E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91DCu;
            // 0x2e91e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91E4u; }
        if (ctx->pc != 0x2E91E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91E4u; }
        if (ctx->pc != 0x2E91E4u) { return; }
    }
    ctx->pc = 0x2E91E4u;
label_2e91e4:
    // 0x2e91e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e91e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e91e8: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x2E91E8u;
    SET_GPR_U32(ctx, 31, 0x2E91F0u);
    ctx->pc = 0x2E91ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91E8u;
            // 0x2e91ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91F0u; }
        if (ctx->pc != 0x2E91F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E91F0u; }
        if (ctx->pc != 0x2E91F0u) { return; }
    }
    ctx->pc = 0x2E91F0u;
label_2e91f0:
    // 0x2e91f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e91f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e91f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e91f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e91f8: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x2E91F8u;
    SET_GPR_U32(ctx, 31, 0x2E9200u);
    ctx->pc = 0x2E91FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E91F8u;
            // 0x2e91fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9200u; }
        if (ctx->pc != 0x2E9200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9200u; }
        if (ctx->pc != 0x2E9200u) { return; }
    }
    ctx->pc = 0x2E9200u;
label_2e9200:
    // 0x2e9200: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e9200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9204: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2E9204u;
    SET_GPR_U32(ctx, 31, 0x2E920Cu);
    ctx->pc = 0x2E9208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9204u;
            // 0x2e9208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E920Cu; }
        if (ctx->pc != 0x2E920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E920Cu; }
        if (ctx->pc != 0x2E920Cu) { return; }
    }
    ctx->pc = 0x2E920Cu;
label_2e920c:
    // 0x2e920c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e920cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9210: 0xc04d44c  jal         func_135130
    ctx->pc = 0x2E9210u;
    SET_GPR_U32(ctx, 31, 0x2E9218u);
    ctx->pc = 0x2E9214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9210u;
            // 0x2e9214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9218u; }
        if (ctx->pc != 0x2E9218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9218u; }
        if (ctx->pc != 0x2E9218u) { return; }
    }
    ctx->pc = 0x2E9218u;
label_2e9218:
    // 0x2e9218: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e9218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e921c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2E921Cu;
    SET_GPR_U32(ctx, 31, 0x2E9224u);
    ctx->pc = 0x2E9220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E921Cu;
            // 0x2e9220: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9224u; }
        if (ctx->pc != 0x2E9224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9224u; }
        if (ctx->pc != 0x2E9224u) { return; }
    }
    ctx->pc = 0x2E9224u;
label_2e9224:
    // 0x2e9224: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2e9224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e9228: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2E9228u;
    SET_GPR_U32(ctx, 31, 0x2E9230u);
    ctx->pc = 0x2E922Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9228u;
            // 0x2e922c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9230u; }
        if (ctx->pc != 0x2E9230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9230u; }
        if (ctx->pc != 0x2E9230u) { return; }
    }
    ctx->pc = 0x2E9230u;
label_2e9230:
    // 0x2e9230: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2e9230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e9234: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e9234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9238: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2e9238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e923c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2e923cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9240: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2E9240u;
    SET_GPR_U32(ctx, 31, 0x2E9248u);
    ctx->pc = 0x2E9244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9240u;
            // 0x2e9244: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9248u; }
        if (ctx->pc != 0x2E9248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9248u; }
        if (ctx->pc != 0x2E9248u) { return; }
    }
    ctx->pc = 0x2E9248u;
label_2e9248:
    // 0x2e9248: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2e9248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e924c: 0x3c0343a2  lui         $v1, 0x43A2
    ctx->pc = 0x2e924cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17314 << 16));
    // 0x2e9250: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e9254: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e9254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e9258: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2e9258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2e925c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e925cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9260: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2e9260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e9264: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2e9264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2e9268: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e9268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e926c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2e926cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e9270: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e9270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9274: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E9274u;
    SET_GPR_U32(ctx, 31, 0x2E927Cu);
    ctx->pc = 0x2E9278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9274u;
            // 0x2e9278: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E927Cu; }
        if (ctx->pc != 0x2E927Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E927Cu; }
        if (ctx->pc != 0x2E927Cu) { return; }
    }
    ctx->pc = 0x2E927Cu;
label_2e927c:
    // 0x2e927c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2e927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e9280: 0x3c024382  lui         $v0, 0x4382
    ctx->pc = 0x2e9280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17282 << 16));
    // 0x2e9284: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e9284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e9288: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2e9288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e928c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2e928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9290: 0x3c0242d0  lui         $v0, 0x42D0
    ctx->pc = 0x2e9290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17104 << 16));
    // 0x2e9294: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2e9294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e9298: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x2e9298u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2e929c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e929cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e92a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e92a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e92a4: 0x0  nop
    ctx->pc = 0x2e92a4u;
    // NOP
    // 0x2e92a8: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x2e92a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2e92ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e92acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e92b0: 0x46007003  div.s       $f0, $f14, $f0
    ctx->pc = 0x2e92b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[14], ctx->f[0]); }
    // 0x2e92b4: 0x0  nop
    ctx->pc = 0x2e92b4u;
    // NOP
    // 0x2e92b8: 0x0  nop
    ctx->pc = 0x2e92b8u;
    // NOP
    // 0x2e92bc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E92BCu;
    {
        const bool branch_taken_0x2e92bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E92C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92BCu;
            // 0x2e92c0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92bc) {
            ctx->pc = 0x2E92F0u;
            goto label_2e92f0;
        }
    }
    ctx->pc = 0x2E92C4u;
    // 0x2e92c4: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e92c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e92c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e92cc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2e92ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e92d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e92d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e92d4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e92d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e92d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2e92d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e92dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e92dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e92e0: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E92E0u;
    SET_GPR_U32(ctx, 31, 0x2E92E8u);
    ctx->pc = 0x2E92E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92E0u;
            // 0x2e92e4: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E92E8u; }
        if (ctx->pc != 0x2E92E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E92E8u; }
        if (ctx->pc != 0x2E92E8u) { return; }
    }
    ctx->pc = 0x2E92E8u;
label_2e92e8:
    // 0x2e92e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E92E8u;
    {
        const bool branch_taken_0x2e92e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E92E8u;
            // 0x2e92ec: 0xc6020010  lwc1        $f2, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92e8) {
            ctx->pc = 0x2E9318u;
            goto label_2e9318;
        }
    }
    ctx->pc = 0x2E92F0u;
label_2e92f0:
    // 0x2e92f0: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e92f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e92f4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e92f8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e92f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e92fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e92fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9300: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2e9300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2e9304: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2e9304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e9308: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e9308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e930c: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E930Cu;
    SET_GPR_U32(ctx, 31, 0x2E9314u);
    ctx->pc = 0x2E9310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E930Cu;
            // 0x2e9310: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9314u; }
        if (ctx->pc != 0x2E9314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9314u; }
        if (ctx->pc != 0x2E9314u) { return; }
    }
    ctx->pc = 0x2E9314u;
label_2e9314:
    // 0x2e9314: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2e9314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e9318:
    // 0x2e9318: 0x3c0242d0  lui         $v0, 0x42D0
    ctx->pc = 0x2e9318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17104 << 16));
    // 0x2e931c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2e931cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e9320: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e9320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9324: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2e9324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e9328: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2e9328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e932c: 0x3c02419c  lui         $v0, 0x419C
    ctx->pc = 0x2e932cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16796 << 16));
    // 0x2e9330: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x2e9330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2e9334: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9338: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2e9338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e933c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2e933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9340: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2e9340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e9344: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e9344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e9348: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e9348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e934c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e934cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e9350: 0x46020b82  mul.s       $f14, $f1, $f2
    ctx->pc = 0x2e9350u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e9354: 0x46032300  add.s       $f12, $f4, $f3
    ctx->pc = 0x2e9354u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2e9358: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E9358u;
    SET_GPR_U32(ctx, 31, 0x2E9360u);
    ctx->pc = 0x2E935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9358u;
            // 0x2e935c: 0x46007b40  add.s       $f13, $f15, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9360u; }
        if (ctx->pc != 0x2E9360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9360u; }
        if (ctx->pc != 0x2E9360u) { return; }
    }
    ctx->pc = 0x2E9360u;
label_2e9360:
    // 0x2e9360: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2e9360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9364: 0x3c0242d0  lui         $v0, 0x42D0
    ctx->pc = 0x2e9364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17104 << 16));
    // 0x2e9368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e936c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9370: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e9370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e9374: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2e9374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e9378: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2e9378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2e937c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2e937cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e9380: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e9380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e9384: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2e9384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e9388: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2e9388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e938c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e9390: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e9390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e9394: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E9394u;
    SET_GPR_U32(ctx, 31, 0x2E939Cu);
    ctx->pc = 0x2E9398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9394u;
            // 0x2e9398: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E939Cu; }
        if (ctx->pc != 0x2E939Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E939Cu; }
        if (ctx->pc != 0x2E939Cu) { return; }
    }
    ctx->pc = 0x2E939Cu;
label_2e939c:
    // 0x2e939c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2e939cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e93a0: 0x3c02431c  lui         $v0, 0x431C
    ctx->pc = 0x2e93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17180 << 16));
    // 0x2e93a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e93a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e93a8: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x2e93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x2e93ac: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e93acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e93b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e93b4: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2e93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2e93b8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2e93b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2e93bc: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2e93bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e93c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e93c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e93c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e93c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e93c8: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e93c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e93cc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e93ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e93d0: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E93D0u;
    SET_GPR_U32(ctx, 31, 0x2E93D8u);
    ctx->pc = 0x2E93D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E93D0u;
            // 0x2e93d4: 0x2408001c  addiu       $t0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E93D8u; }
        if (ctx->pc != 0x2E93D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E93D8u; }
        if (ctx->pc != 0x2E93D8u) { return; }
    }
    ctx->pc = 0x2E93D8u;
label_2e93d8:
    // 0x2e93d8: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x2e93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x2e93dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e93dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e93e0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e93e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e93e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e93e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e93e8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2e93e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e93ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e93ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e93f0: 0x3c02431c  lui         $v0, 0x431C
    ctx->pc = 0x2e93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17180 << 16));
    // 0x2e93f4: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2e93f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e93f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e93f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e93fc: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x2e93fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e9400: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e9400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e9404: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2e9404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2e9408: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e9408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e940c: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E940Cu;
    SET_GPR_U32(ctx, 31, 0x2E9414u);
    ctx->pc = 0x2E9410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E940Cu;
            // 0x2e9410: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9414u; }
        if (ctx->pc != 0x2E9414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9414u; }
        if (ctx->pc != 0x2E9414u) { return; }
    }
    ctx->pc = 0x2E9414u;
label_2e9414:
    // 0x2e9414: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e9414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9418:
    // 0x2e9418: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2e9418u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e941c: 0x3c02430f  lui         $v0, 0x430F
    ctx->pc = 0x2e941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17167 << 16));
    // 0x2e9420: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2e9420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9424: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x2e9424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
    // 0x2e9428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e942c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9430: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2e9430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e9434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9438: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x2e9438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e943c: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x2e943cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e9440: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e9440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e9444: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e9444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e9448: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x2e9448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x2e944c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2e944cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e9450: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2e9450u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2e9454: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e9454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e9458: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E9458u;
    SET_GPR_U32(ctx, 31, 0x2E9460u);
    ctx->pc = 0x2E945Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9458u;
            // 0x2e945c: 0x4600731d  msub.s      $f12, $f14, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9460u; }
        if (ctx->pc != 0x2E9460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9460u; }
        if (ctx->pc != 0x2E9460u) { return; }
    }
    ctx->pc = 0x2E9460u;
label_2e9460:
    // 0x2e9460: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e9460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e9464: 0x2a220017  slti        $v0, $s1, 0x17
    ctx->pc = 0x2e9464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x2e9468: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2E9468u;
    {
        const bool branch_taken_0x2e9468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9468) {
            ctx->pc = 0x2E9418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9418;
        }
    }
    ctx->pc = 0x2E9470u;
    // 0x2e9470: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2e9470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9474: 0x3c0242d0  lui         $v0, 0x42D0
    ctx->pc = 0x2e9474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17104 << 16));
    // 0x2e9478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e947c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9480: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e9480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e9484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9488: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e9488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e948c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2e948cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e9490: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e9490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e9494: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2e9494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e9498: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x2e9498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2e949c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2e949cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2e94a0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e94a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e94a4: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E94A4u;
    SET_GPR_U32(ctx, 31, 0x2E94ACu);
    ctx->pc = 0x2E94A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E94A4u;
            // 0x2e94a8: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94ACu; }
        if (ctx->pc != 0x2E94ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94ACu; }
        if (ctx->pc != 0x2E94ACu) { return; }
    }
    ctx->pc = 0x2E94ACu;
label_2e94ac:
    // 0x2e94ac: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2e94acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e94b0: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x2e94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x2e94b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e94b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e94b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e94b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e94bc: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e94bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e94c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e94c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e94c4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2e94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2e94c8: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2e94c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e94cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e94ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e94d0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2e94d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e94d4: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x2e94d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2e94d8: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2e94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2e94dc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e94dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e94e0: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E94E0u;
    SET_GPR_U32(ctx, 31, 0x2E94E8u);
    ctx->pc = 0x2E94E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E94E0u;
            // 0x2e94e4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94E8u; }
        if (ctx->pc != 0x2E94E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E94E8u; }
        if (ctx->pc != 0x2E94E8u) { return; }
    }
    ctx->pc = 0x2E94E8u;
label_2e94e8:
    // 0x2e94e8: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x2e94e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e94ec: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x2e94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
    // 0x2e94f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e94f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e94f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e94f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e94f8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2e94f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e94fc: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x2e94fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2e9500: 0x3c0242d0  lui         $v0, 0x42D0
    ctx->pc = 0x2e9500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17104 << 16));
    // 0x2e9504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e950c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2e950cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e9510: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e9510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e9514: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x2e9514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2e9518: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e9518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e951c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e9520: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2e9520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2e9524: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e9524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e9528: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e9528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e952c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9530: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e9530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e9534: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2E9534u;
    SET_GPR_U32(ctx, 31, 0x2E953Cu);
    ctx->pc = 0x2E9538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9534u;
            // 0x2e9538: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E953Cu; }
        if (ctx->pc != 0x2E953Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E953Cu; }
        if (ctx->pc != 0x2E953Cu) { return; }
    }
    ctx->pc = 0x2E953Cu;
label_2e953c:
    // 0x2e953c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2E953Cu;
    SET_GPR_U32(ctx, 31, 0x2E9544u);
    ctx->pc = 0x2E9540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E953Cu;
            // 0x2e9540: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9544u; }
        if (ctx->pc != 0x2E9544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9544u; }
        if (ctx->pc != 0x2E9544u) { return; }
    }
    ctx->pc = 0x2E9544u;
label_2e9544:
    // 0x2e9544: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e9544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e954c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e954cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9550: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9550u;
            // 0x2e9554: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9558u;
}
