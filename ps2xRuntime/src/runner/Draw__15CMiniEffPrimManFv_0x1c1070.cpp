#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__15CMiniEffPrimManFv
// Address: 0x1c1070 - 0x1c1150
void Draw__15CMiniEffPrimManFv_0x1c1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__15CMiniEffPrimManFv_0x1c1070");
#endif

    switch (ctx->pc) {
        case 0x1c10a0u: goto label_1c10a0;
        case 0x1c10a8u: goto label_1c10a8;
        case 0x1c10b4u: goto label_1c10b4;
        case 0x1c10c0u: goto label_1c10c0;
        case 0x1c10ccu: goto label_1c10cc;
        case 0x1c10d8u: goto label_1c10d8;
        case 0x1c10e4u: goto label_1c10e4;
        case 0x1c10f0u: goto label_1c10f0;
        case 0x1c10fcu: goto label_1c10fc;
        case 0x1c1108u: goto label_1c1108;
        case 0x1c1110u: goto label_1c1110;
        case 0x1c111cu: goto label_1c111c;
        case 0x1c1138u: goto label_1c1138;
        default: break;
    }

    ctx->pc = 0x1c1070u;

    // 0x1c1070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1074: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c1078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c107c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1084: 0x8c830800  lw          $v1, 0x800($a0)
    ctx->pc = 0x1c1084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2048)));
    // 0x1c1088: 0x1860002b  blez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C1088u;
    {
        const bool branch_taken_0x1c1088 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1088u;
            // 0x1c108c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1088) {
            ctx->pc = 0x1C1138u;
            goto label_1c1138;
        }
    }
    ctx->pc = 0x1C1090u;
    // 0x1c1090: 0x26440810  addiu       $a0, $s2, 0x810
    ctx->pc = 0x1c1090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
    // 0x1c1094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1098: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C1098u;
    SET_GPR_U32(ctx, 31, 0x1C10A0u);
    ctx->pc = 0x1C109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1098u;
            // 0x1c109c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10A0u; }
        if (ctx->pc != 0x1C10A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10A0u; }
        if (ctx->pc != 0x1C10A0u) { return; }
    }
    ctx->pc = 0x1C10A0u;
label_1c10a0:
    // 0x1c10a0: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C10A0u;
    SET_GPR_U32(ctx, 31, 0x1C10A8u);
    ctx->pc = 0x1C10A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10A0u;
            // 0x1c10a4: 0x26440810  addiu       $a0, $s2, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10A8u; }
        if (ctx->pc != 0x1C10A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10A8u; }
        if (ctx->pc != 0x1C10A8u) { return; }
    }
    ctx->pc = 0x1C10A8u;
label_1c10a8:
    // 0x1c10a8: 0x26440810  addiu       $a0, $s2, 0x810
    ctx->pc = 0x1c10a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
    // 0x1c10ac: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C10ACu;
    SET_GPR_U32(ctx, 31, 0x1C10B4u);
    ctx->pc = 0x1C10B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10ACu;
            // 0x1c10b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10B4u; }
        if (ctx->pc != 0x1C10B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10B4u; }
        if (ctx->pc != 0x1C10B4u) { return; }
    }
    ctx->pc = 0x1C10B4u;
label_1c10b4:
    // 0x1c10b4: 0x26440810  addiu       $a0, $s2, 0x810
    ctx->pc = 0x1c10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
    // 0x1c10b8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C10B8u;
    SET_GPR_U32(ctx, 31, 0x1C10C0u);
    ctx->pc = 0x1C10BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10B8u;
            // 0x1c10bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10C0u; }
        if (ctx->pc != 0x1C10C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10C0u; }
        if (ctx->pc != 0x1C10C0u) { return; }
    }
    ctx->pc = 0x1C10C0u;
label_1c10c0:
    // 0x1c10c0: 0x26440810  addiu       $a0, $s2, 0x810
    ctx->pc = 0x1c10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
    // 0x1c10c4: 0xc04d424  jal         func_135090
    ctx->pc = 0x1C10C4u;
    SET_GPR_U32(ctx, 31, 0x1C10CCu);
    ctx->pc = 0x1C10C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10C4u;
            // 0x1c10c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10CCu; }
        if (ctx->pc != 0x1C10CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10CCu; }
        if (ctx->pc != 0x1C10CCu) { return; }
    }
    ctx->pc = 0x1C10CCu;
label_1c10cc:
    // 0x1c10cc: 0x26440810  addiu       $a0, $s2, 0x810
    ctx->pc = 0x1c10ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
    // 0x1c10d0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C10D0u;
    SET_GPR_U32(ctx, 31, 0x1C10D8u);
    ctx->pc = 0x1C10D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10D0u;
            // 0x1c10d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10D8u; }
        if (ctx->pc != 0x1C10D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10D8u; }
        if (ctx->pc != 0x1C10D8u) { return; }
    }
    ctx->pc = 0x1C10D8u;
label_1c10d8:
    // 0x1c10d8: 0x26440810  addiu       $a0, $s2, 0x810
    ctx->pc = 0x1c10d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
    // 0x1c10dc: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C10DCu;
    SET_GPR_U32(ctx, 31, 0x1C10E4u);
    ctx->pc = 0x1C10E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10DCu;
            // 0x1c10e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10E4u; }
        if (ctx->pc != 0x1C10E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10E4u; }
        if (ctx->pc != 0x1C10E4u) { return; }
    }
    ctx->pc = 0x1C10E4u;
label_1c10e4:
    // 0x1c10e4: 0x26440810  addiu       $a0, $s2, 0x810
    ctx->pc = 0x1c10e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
    // 0x1c10e8: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C10E8u;
    SET_GPR_U32(ctx, 31, 0x1C10F0u);
    ctx->pc = 0x1C10ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10E8u;
            // 0x1c10ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10F0u; }
        if (ctx->pc != 0x1C10F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10F0u; }
        if (ctx->pc != 0x1C10F0u) { return; }
    }
    ctx->pc = 0x1C10F0u;
label_1c10f0:
    // 0x1c10f0: 0x26440810  addiu       $a0, $s2, 0x810
    ctx->pc = 0x1c10f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
    // 0x1c10f4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C10F4u;
    SET_GPR_U32(ctx, 31, 0x1C10FCu);
    ctx->pc = 0x1C10F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10F4u;
            // 0x1c10f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10FCu; }
        if (ctx->pc != 0x1C10FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C10FCu; }
        if (ctx->pc != 0x1C10FCu) { return; }
    }
    ctx->pc = 0x1C10FCu;
label_1c10fc:
    // 0x1c10fc: 0x8f858e90  lw          $a1, -0x7170($gp)
    ctx->pc = 0x1c10fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
    // 0x1c1100: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C1100u;
    SET_GPR_U32(ctx, 31, 0x1C1108u);
    ctx->pc = 0x1C1104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1100u;
            // 0x1c1104: 0x26440810  addiu       $a0, $s2, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1108u; }
        if (ctx->pc != 0x1C1108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1108u; }
        if (ctx->pc != 0x1C1108u) { return; }
    }
    ctx->pc = 0x1C1108u;
label_1c1108:
    // 0x1c1108: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c110c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c110cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1110:
    // 0x1c1110: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x1c1110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1c1114: 0xc070388  jal         func_1C0E20
    ctx->pc = 0x1C1114u;
    SET_GPR_U32(ctx, 31, 0x1C111Cu);
    ctx->pc = 0x1C1118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1114u;
            // 0x1c1118: 0x26450810  addiu       $a1, $s2, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0E20u;
    if (runtime->hasFunction(0x1C0E20u)) {
        auto targetFn = runtime->lookupFunction(0x1C0E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C111Cu; }
        if (ctx->pc != 0x1C111Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CMiniEffPrimFP10CPreSprite_0x1c0e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C111Cu; }
        if (ctx->pc != 0x1C111Cu) { return; }
    }
    ctx->pc = 0x1C111Cu;
label_1c111c:
    // 0x1c111c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c111cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c1120: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1c1120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c1124: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x1c1124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c1128: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C1128u;
    {
        const bool branch_taken_0x1c1128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1128) {
            ctx->pc = 0x1C1110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1110;
        }
    }
    ctx->pc = 0x1C1130u;
    // 0x1c1130: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C1130u;
    SET_GPR_U32(ctx, 31, 0x1C1138u);
    ctx->pc = 0x1C1134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1130u;
            // 0x1c1134: 0x26440810  addiu       $a0, $s2, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1138u; }
        if (ctx->pc != 0x1C1138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1138u; }
        if (ctx->pc != 0x1C1138u) { return; }
    }
    ctx->pc = 0x1C1138u;
label_1c1138:
    // 0x1c1138: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c113c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c113cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1148: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C114Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1148u;
            // 0x1c114c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1150u;
}
