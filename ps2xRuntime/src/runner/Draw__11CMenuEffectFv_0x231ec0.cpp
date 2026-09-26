#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__11CMenuEffectFv
// Address: 0x231ec0 - 0x2328b4
void Draw__11CMenuEffectFv_0x231ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__11CMenuEffectFv_0x231ec0");
#endif

    switch (ctx->pc) {
        case 0x231f20u: goto label_231f20;
        case 0x231f28u: goto label_231f28;
        case 0x231f3cu: goto label_231f3c;
        case 0x231f48u: goto label_231f48;
        case 0x231f54u: goto label_231f54;
        case 0x231f60u: goto label_231f60;
        case 0x231f70u: goto label_231f70;
        case 0x231f7cu: goto label_231f7c;
        case 0x231f88u: goto label_231f88;
        case 0x231f94u: goto label_231f94;
        case 0x231fa0u: goto label_231fa0;
        case 0x231facu: goto label_231fac;
        case 0x231fe8u: goto label_231fe8;
        case 0x232000u: goto label_232000;
        case 0x232018u: goto label_232018;
        case 0x232030u: goto label_232030;
        case 0x232048u: goto label_232048;
        case 0x232060u: goto label_232060;
        case 0x23207cu: goto label_23207c;
        case 0x2320e0u: goto label_2320e0;
        case 0x2320ecu: goto label_2320ec;
        case 0x2320f8u: goto label_2320f8;
        case 0x2320fcu: goto label_2320fc;
        case 0x232104u: goto label_232104;
        case 0x232110u: goto label_232110;
        case 0x232130u: goto label_232130;
        case 0x232168u: goto label_232168;
        case 0x23217cu: goto label_23217c;
        case 0x23219cu: goto label_23219c;
        case 0x2321c0u: goto label_2321c0;
        case 0x2321dcu: goto label_2321dc;
        case 0x232200u: goto label_232200;
        case 0x232220u: goto label_232220;
        case 0x232244u: goto label_232244;
        case 0x232260u: goto label_232260;
        case 0x232284u: goto label_232284;
        case 0x23229cu: goto label_23229c;
        case 0x2322a8u: goto label_2322a8;
        case 0x2322b4u: goto label_2322b4;
        case 0x2322c4u: goto label_2322c4;
        case 0x2322ccu: goto label_2322cc;
        case 0x2322d4u: goto label_2322d4;
        case 0x2322ecu: goto label_2322ec;
        case 0x2322fcu: goto label_2322fc;
        case 0x232310u: goto label_232310;
        case 0x232320u: goto label_232320;
        case 0x232344u: goto label_232344;
        case 0x232370u: goto label_232370;
        case 0x23239cu: goto label_23239c;
        case 0x2323acu: goto label_2323ac;
        case 0x2323bcu: goto label_2323bc;
        case 0x2323c4u: goto label_2323c4;
        case 0x2323dcu: goto label_2323dc;
        case 0x2323e4u: goto label_2323e4;
        case 0x2323f0u: goto label_2323f0;
        case 0x232408u: goto label_232408;
        case 0x23241cu: goto label_23241c;
        case 0x232424u: goto label_232424;
        case 0x23244cu: goto label_23244c;
        case 0x232460u: goto label_232460;
        case 0x23246cu: goto label_23246c;
        case 0x232478u: goto label_232478;
        case 0x232484u: goto label_232484;
        case 0x232490u: goto label_232490;
        case 0x2324b0u: goto label_2324b0;
        case 0x2324ccu: goto label_2324cc;
        case 0x2324e4u: goto label_2324e4;
        case 0x232504u: goto label_232504;
        case 0x23251cu: goto label_23251c;
        case 0x232534u: goto label_232534;
        case 0x23254cu: goto label_23254c;
        case 0x232570u: goto label_232570;
        case 0x232590u: goto label_232590;
        case 0x2325b0u: goto label_2325b0;
        case 0x2325e0u: goto label_2325e0;
        case 0x2325f8u: goto label_2325f8;
        case 0x232604u: goto label_232604;
        case 0x232610u: goto label_232610;
        case 0x232618u: goto label_232618;
        case 0x23262cu: goto label_23262c;
        case 0x23264cu: goto label_23264c;
        case 0x23266cu: goto label_23266c;
        case 0x2326c8u: goto label_2326c8;
        case 0x2326ecu: goto label_2326ec;
        case 0x232714u: goto label_232714;
        case 0x232780u: goto label_232780;
        case 0x232788u: goto label_232788;
        case 0x2327c8u: goto label_2327c8;
        case 0x2327e0u: goto label_2327e0;
        case 0x2327f0u: goto label_2327f0;
        case 0x232828u: goto label_232828;
        case 0x232848u: goto label_232848;
        case 0x232868u: goto label_232868;
        case 0x232888u: goto label_232888;
        default: break;
    }

    ctx->pc = 0x231ec0u;

    // 0x231ec0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x231ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x231ec4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x231ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x231ec8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x231ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x231ecc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x231eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x231ed0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x231ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x231ed4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x231ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x231ed8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x231ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x231edc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x231edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x231ee0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x231ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x231ee4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x231ee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x231ee8: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x231ee8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x231eec: 0x10600266  beqz        $v1, . + 4 + (0x266 << 2)
    ctx->pc = 0x231EECu;
    {
        const bool branch_taken_0x231eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231EECu;
            // 0x231ef0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231eec) {
            ctx->pc = 0x232888u;
            goto label_232888;
        }
    }
    ctx->pc = 0x231EF4u;
    // 0x231ef4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x231ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x231ef8: 0x10600263  beqz        $v1, . + 4 + (0x263 << 2)
    ctx->pc = 0x231EF8u;
    {
        const bool branch_taken_0x231ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231ef8) {
            ctx->pc = 0x232888u;
            goto label_232888;
        }
    }
    ctx->pc = 0x231F00u;
    // 0x231f00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x231f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x231f04: 0x10600260  beqz        $v1, . + 4 + (0x260 << 2)
    ctx->pc = 0x231F04u;
    {
        const bool branch_taken_0x231f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x231f04) {
            ctx->pc = 0x232888u;
            goto label_232888;
        }
    }
    ctx->pc = 0x231F0Cu;
    // 0x231f0c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x231f0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231f10: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x231f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x231f14: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x231f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x231f18: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x231F18u;
    SET_GPR_U32(ctx, 31, 0x231F20u);
    ctx->pc = 0x231F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F18u;
            // 0x231f1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F20u; }
        if (ctx->pc != 0x231F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F20u; }
        if (ctx->pc != 0x231F20u) { return; }
    }
    ctx->pc = 0x231F20u;
label_231f20:
    // 0x231f20: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x231F20u;
    SET_GPR_U32(ctx, 31, 0x231F28u);
    ctx->pc = 0x231F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F20u;
            // 0x231f24: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F28u; }
        if (ctx->pc != 0x231F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F28u; }
        if (ctx->pc != 0x231F28u) { return; }
    }
    ctx->pc = 0x231F28u;
label_231f28:
    // 0x231f28: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x231f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x231f2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x231f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f34: 0xc04d104  jal         func_134410
    ctx->pc = 0x231F34u;
    SET_GPR_U32(ctx, 31, 0x231F3Cu);
    ctx->pc = 0x231F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F34u;
            // 0x231f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F3Cu; }
        if (ctx->pc != 0x231F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F3Cu; }
        if (ctx->pc != 0x231F3Cu) { return; }
    }
    ctx->pc = 0x231F3Cu;
label_231f3c:
    // 0x231f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f40: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x231F40u;
    SET_GPR_U32(ctx, 31, 0x231F48u);
    ctx->pc = 0x231F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F40u;
            // 0x231f44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F48u; }
        if (ctx->pc != 0x231F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F48u; }
        if (ctx->pc != 0x231F48u) { return; }
    }
    ctx->pc = 0x231F48u;
label_231f48:
    // 0x231f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f4c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x231F4Cu;
    SET_GPR_U32(ctx, 31, 0x231F54u);
    ctx->pc = 0x231F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F4Cu;
            // 0x231f50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F54u; }
        if (ctx->pc != 0x231F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F54u; }
        if (ctx->pc != 0x231F54u) { return; }
    }
    ctx->pc = 0x231F54u;
label_231f54:
    // 0x231f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f58: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x231F58u;
    SET_GPR_U32(ctx, 31, 0x231F60u);
    ctx->pc = 0x231F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F58u;
            // 0x231f5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F60u; }
        if (ctx->pc != 0x231F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F60u; }
        if (ctx->pc != 0x231F60u) { return; }
    }
    ctx->pc = 0x231F60u;
label_231f60:
    // 0x231f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231f68: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x231F68u;
    SET_GPR_U32(ctx, 31, 0x231F70u);
    ctx->pc = 0x231F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F68u;
            // 0x231f6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F70u; }
        if (ctx->pc != 0x231F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F70u; }
        if (ctx->pc != 0x231F70u) { return; }
    }
    ctx->pc = 0x231F70u;
label_231f70:
    // 0x231f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f74: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x231F74u;
    SET_GPR_U32(ctx, 31, 0x231F7Cu);
    ctx->pc = 0x231F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F74u;
            // 0x231f78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F7Cu; }
        if (ctx->pc != 0x231F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F7Cu; }
        if (ctx->pc != 0x231F7Cu) { return; }
    }
    ctx->pc = 0x231F7Cu;
label_231f7c:
    // 0x231f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f80: 0xc04d424  jal         func_135090
    ctx->pc = 0x231F80u;
    SET_GPR_U32(ctx, 31, 0x231F88u);
    ctx->pc = 0x231F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F80u;
            // 0x231f84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F88u; }
        if (ctx->pc != 0x231F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F88u; }
        if (ctx->pc != 0x231F88u) { return; }
    }
    ctx->pc = 0x231F88u;
label_231f88:
    // 0x231f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f8c: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x231F8Cu;
    SET_GPR_U32(ctx, 31, 0x231F94u);
    ctx->pc = 0x231F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F8Cu;
            // 0x231f90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F94u; }
        if (ctx->pc != 0x231F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231F94u; }
        if (ctx->pc != 0x231F94u) { return; }
    }
    ctx->pc = 0x231F94u;
label_231f94:
    // 0x231f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f98: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x231F98u;
    SET_GPR_U32(ctx, 31, 0x231FA0u);
    ctx->pc = 0x231F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231F98u;
            // 0x231f9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231FA0u; }
        if (ctx->pc != 0x231FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231FA0u; }
        if (ctx->pc != 0x231FA0u) { return; }
    }
    ctx->pc = 0x231FA0u;
label_231fa0:
    // 0x231fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fa4: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x231FA4u;
    SET_GPR_U32(ctx, 31, 0x231FACu);
    ctx->pc = 0x231FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231FA4u;
            // 0x231fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231FACu; }
        if (ctx->pc != 0x231FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231FACu; }
        if (ctx->pc != 0x231FACu) { return; }
    }
    ctx->pc = 0x231FACu;
label_231fac:
    // 0x231fac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x231facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x231fb0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x231fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x231fb4: 0x24420870  addiu       $v0, $v0, 0x870
    ctx->pc = 0x231fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x231fb8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x231fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x231fbc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x231fbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231fc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x231fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231fc4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x231fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x231fc8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x231fc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x231fcc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x231fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x231fd0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x231fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x231fd4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x231fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x231fd8: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x231fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x231fdc: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x231fdcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x231fe0: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x231FE0u;
    SET_GPR_U32(ctx, 31, 0x231FE8u);
    ctx->pc = 0x231FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231FE0u;
            // 0x231fe4: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231FE8u; }
        if (ctx->pc != 0x231FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231FE8u; }
        if (ctx->pc != 0x231FE8u) { return; }
    }
    ctx->pc = 0x231FE8u;
label_231fe8:
    // 0x231fe8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x231fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x231fec: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x231fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x231ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x231ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ff4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x231ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x231ff8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x231FF8u;
    SET_GPR_U32(ctx, 31, 0x232000u);
    ctx->pc = 0x231FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231FF8u;
            // 0x231ffc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232000u; }
        if (ctx->pc != 0x232000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232000u; }
        if (ctx->pc != 0x232000u) { return; }
    }
    ctx->pc = 0x232000u;
label_232000:
    // 0x232000: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x232000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x232004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23200c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23200cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232010: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x232010u;
    SET_GPR_U32(ctx, 31, 0x232018u);
    ctx->pc = 0x232014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232010u;
            // 0x232014: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232018u; }
        if (ctx->pc != 0x232018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232018u; }
        if (ctx->pc != 0x232018u) { return; }
    }
    ctx->pc = 0x232018u;
label_232018:
    // 0x232018: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x232018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x23201c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x232024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232028: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x232028u;
    SET_GPR_U32(ctx, 31, 0x232030u);
    ctx->pc = 0x23202Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232028u;
            // 0x23202c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232030u; }
        if (ctx->pc != 0x232030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232030u; }
        if (ctx->pc != 0x232030u) { return; }
    }
    ctx->pc = 0x232030u;
label_232030:
    // 0x232030: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x232030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x232034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23203c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23203cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232040: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x232040u;
    SET_GPR_U32(ctx, 31, 0x232048u);
    ctx->pc = 0x232044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232040u;
            // 0x232044: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232048u; }
        if (ctx->pc != 0x232048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232048u; }
        if (ctx->pc != 0x232048u) { return; }
    }
    ctx->pc = 0x232048u;
label_232048:
    // 0x232048: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x232048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x23204c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23204cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232054: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x232054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232058: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x232058u;
    SET_GPR_U32(ctx, 31, 0x232060u);
    ctx->pc = 0x23205Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232058u;
            // 0x23205c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232060u; }
        if (ctx->pc != 0x232060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232060u; }
        if (ctx->pc != 0x232060u) { return; }
    }
    ctx->pc = 0x232060u;
label_232060:
    // 0x232060: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x232060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x232064: 0x27b30200  addiu       $s3, $sp, 0x200
    ctx->pc = 0x232064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x232068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x232068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23206c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23206cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232070: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x232070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232074: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x232074u;
    SET_GPR_U32(ctx, 31, 0x23207Cu);
    ctx->pc = 0x232078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232074u;
            // 0x232078: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23207Cu; }
        if (ctx->pc != 0x23207Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23207Cu; }
        if (ctx->pc != 0x23207Cu) { return; }
    }
    ctx->pc = 0x23207Cu;
label_23207c:
    // 0x23207c: 0x82030009  lb          $v1, 0x9($s0)
    ctx->pc = 0x23207cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x232080: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x232080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x232084: 0x10670150  beq         $v1, $a3, . + 4 + (0x150 << 2)
    ctx->pc = 0x232084u;
    {
        const bool branch_taken_0x232084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x232088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232084u;
            // 0x232088: 0x3c024200  lui         $v0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232084) {
            ctx->pc = 0x2325C8u;
            goto label_2325c8;
        }
    }
    ctx->pc = 0x23208Cu;
    // 0x23208c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x23208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x232090: 0x10620141  beq         $v1, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x232090u;
    {
        const bool branch_taken_0x232090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x232094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232090u;
            // 0x232094: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232090) {
            ctx->pc = 0x232598u;
            goto label_232598;
        }
    }
    ctx->pc = 0x232098u;
    // 0x232098: 0x10620137  beq         $v1, $v0, . + 4 + (0x137 << 2)
    ctx->pc = 0x232098u;
    {
        const bool branch_taken_0x232098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23209Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232098u;
            // 0x23209c: 0x3c024200  lui         $v0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232098) {
            ctx->pc = 0x232578u;
            goto label_232578;
        }
    }
    ctx->pc = 0x2320A0u;
    // 0x2320a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2320a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2320a4: 0x10620111  beq         $v1, $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x2320A4u;
    {
        const bool branch_taken_0x2320a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2320A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320A4u;
            // 0x2320a8: 0x3c024200  lui         $v0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320a4) {
            ctx->pc = 0x2324ECu;
            goto label_2324ec;
        }
    }
    ctx->pc = 0x2320ACu;
    // 0x2320ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2320acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2320b0: 0x10620101  beq         $v1, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x2320B0u;
    {
        const bool branch_taken_0x2320b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2320B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320B0u;
            // 0x2320b4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320b0) {
            ctx->pc = 0x2324B8u;
            goto label_2324b8;
        }
    }
    ctx->pc = 0x2320B8u;
    // 0x2320b8: 0x106200dc  beq         $v1, $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x2320B8u;
    {
        const bool branch_taken_0x2320b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2320BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320B8u;
            // 0x2320bc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320b8) {
            ctx->pc = 0x23242Cu;
            goto label_23242c;
        }
    }
    ctx->pc = 0x2320C0u;
    // 0x2320c0: 0x106200ad  beq         $v1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x2320C0u;
    {
        const bool branch_taken_0x2320c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2320C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320C0u;
            // 0x2320c4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320c0) {
            ctx->pc = 0x232378u;
            goto label_232378;
        }
    }
    ctx->pc = 0x2320C8u;
    // 0x2320c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2320C8u;
    {
        const bool branch_taken_0x2320c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2320CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320C8u;
            // 0x2320cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320c8) {
            ctx->pc = 0x2320D8u;
            goto label_2320d8;
        }
    }
    ctx->pc = 0x2320D0u;
    // 0x2320d0: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x2320D0u;
    {
        const bool branch_taken_0x2320d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2320D0u;
            // 0x2320d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320d0) {
            ctx->pc = 0x2325FCu;
            goto label_2325fc;
        }
    }
    ctx->pc = 0x2320D8u;
label_2320d8:
    // 0x2320d8: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x2320D8u;
    SET_GPR_U32(ctx, 31, 0x2320E0u);
    ctx->pc = 0x2320DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2320D8u;
            // 0x2320dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2320E0u; }
        if (ctx->pc != 0x2320E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2320E0u; }
        if (ctx->pc != 0x2320E0u) { return; }
    }
    ctx->pc = 0x2320E0u;
label_2320e0:
    // 0x2320e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2320e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2320e4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2320E4u;
    SET_GPR_U32(ctx, 31, 0x2320ECu);
    ctx->pc = 0x2320E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2320E4u;
            // 0x2320e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2320ECu; }
        if (ctx->pc != 0x2320ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2320ECu; }
        if (ctx->pc != 0x2320ECu) { return; }
    }
    ctx->pc = 0x2320ECu;
label_2320ec:
    // 0x2320ec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2320ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2320f0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2320F0u;
    SET_GPR_U32(ctx, 31, 0x2320F8u);
    ctx->pc = 0x2320F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2320F0u;
            // 0x2320f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2320F8u; }
        if (ctx->pc != 0x2320F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2320F8u; }
        if (ctx->pc != 0x2320F8u) { return; }
    }
    ctx->pc = 0x2320F8u;
label_2320f8:
    // 0x2320f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2320f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2320fc:
    // 0x2320fc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2320FCu;
    SET_GPR_U32(ctx, 31, 0x232104u);
    ctx->pc = 0x232100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2320FCu;
            // 0x232100: 0xc64c0004  lwc1        $f12, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232104u; }
        if (ctx->pc != 0x232104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232104u; }
        if (ctx->pc != 0x232104u) { return; }
    }
    ctx->pc = 0x232104u;
label_232104:
    // 0x232104: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x232104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x232108: 0xc0a248c  jal         func_289230
    ctx->pc = 0x232108u;
    SET_GPR_U32(ctx, 31, 0x232110u);
    ctx->pc = 0x23210Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232108u;
            // 0x23210c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232110u; }
        if (ctx->pc != 0x232110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232110u; }
        if (ctx->pc != 0x232110u) { return; }
    }
    ctx->pc = 0x232110u;
label_232110:
    // 0x232110: 0x8fb501a4  lw          $s5, 0x1A4($sp)
    ctx->pc = 0x232110u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x232114: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x232114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232118: 0x8fb601a8  lw          $s6, 0x1A8($sp)
    ctx->pc = 0x232118u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x23211c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232120: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x232120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x232124: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x232124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232128: 0xc04d320  jal         func_134C80
    ctx->pc = 0x232128u;
    SET_GPR_U32(ctx, 31, 0x232130u);
    ctx->pc = 0x23212Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232128u;
            // 0x23212c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232130u; }
        if (ctx->pc != 0x232130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232130u; }
        if (ctx->pc != 0x232130u) { return; }
    }
    ctx->pc = 0x232130u;
label_232130:
    // 0x232130: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x232130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x232134: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x232134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x232138: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x232138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x23213c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x23213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x232140: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x232140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232144: 0x86060018  lh          $a2, 0x18($s0)
    ctx->pc = 0x232144u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x232148: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x232148u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23214c: 0x8603001a  lh          $v1, 0x1A($s0)
    ctx->pc = 0x23214cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x232150: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x232150u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x232154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232158: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x232158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x23215c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x23215cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x232160: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x232160u;
    SET_GPR_U32(ctx, 31, 0x232168u);
    ctx->pc = 0x232164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232160u;
            // 0x232164: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232168u; }
        if (ctx->pc != 0x232168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232168u; }
        if (ctx->pc != 0x232168u) { return; }
    }
    ctx->pc = 0x232168u;
label_232168:
    // 0x232168: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x232168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23216c: 0xc64d0010  lwc1        $f13, 0x10($s2)
    ctx->pc = 0x23216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x232170: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x232170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x232174: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x232174u;
    SET_GPR_U32(ctx, 31, 0x23217Cu);
    ctx->pc = 0x232178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232174u;
            // 0x232178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23217Cu; }
        if (ctx->pc != 0x23217Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23217Cu; }
        if (ctx->pc != 0x23217Cu) { return; }
    }
    ctx->pc = 0x23217Cu;
label_23217c:
    // 0x23217c: 0x86060018  lh          $a2, 0x18($s0)
    ctx->pc = 0x23217cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x232180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232184: 0x86850004  lh          $a1, 0x4($s4)
    ctx->pc = 0x232184u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x232188: 0x8603001a  lh          $v1, 0x1A($s0)
    ctx->pc = 0x232188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x23218c: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x23218cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x232190: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x232190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x232194: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x232194u;
    SET_GPR_U32(ctx, 31, 0x23219Cu);
    ctx->pc = 0x232198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232194u;
            // 0x232198: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23219Cu; }
        if (ctx->pc != 0x23219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23219Cu; }
        if (ctx->pc != 0x23219Cu) { return; }
    }
    ctx->pc = 0x23219Cu;
label_23219c:
    // 0x23219c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x23219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2321a0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2321a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2321a4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2321a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2321a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2321a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2321ac: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x2321acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2321b0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2321b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2321b4: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2321b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2321b8: 0xc047964  jal         func_11E590
    ctx->pc = 0x2321B8u;
    SET_GPR_U32(ctx, 31, 0x2321C0u);
    ctx->pc = 0x2321BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2321B8u;
            // 0x2321bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2321C0u; }
        if (ctx->pc != 0x2321C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2321C0u; }
        if (ctx->pc != 0x2321C0u) { return; }
    }
    ctx->pc = 0x2321C0u;
label_2321c0:
    // 0x2321c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2321c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2321c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2321c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2321c8: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x2321c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2321cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2321ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2321d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2321d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2321d4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2321D4u;
    SET_GPR_U32(ctx, 31, 0x2321DCu);
    ctx->pc = 0x2321D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2321D4u;
            // 0x2321d8: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2321DCu; }
        if (ctx->pc != 0x2321DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2321DCu; }
        if (ctx->pc != 0x2321DCu) { return; }
    }
    ctx->pc = 0x2321DCu;
label_2321dc:
    // 0x2321dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2321dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2321e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2321e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2321e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2321e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2321e8: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2321e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2321ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2321ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2321f0: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x2321f0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2321f4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2321f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2321f8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2321F8u;
    SET_GPR_U32(ctx, 31, 0x232200u);
    ctx->pc = 0x2321FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2321F8u;
            // 0x2321fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232200u; }
        if (ctx->pc != 0x232200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232200u; }
        if (ctx->pc != 0x232200u) { return; }
    }
    ctx->pc = 0x232200u;
label_232200:
    // 0x232200: 0x86060018  lh          $a2, 0x18($s0)
    ctx->pc = 0x232200u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x232204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232208: 0x86850008  lh          $a1, 0x8($s4)
    ctx->pc = 0x232208u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x23220c: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x23220cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x232210: 0x8603001a  lh          $v1, 0x1A($s0)
    ctx->pc = 0x232210u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x232214: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x232214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x232218: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x232218u;
    SET_GPR_U32(ctx, 31, 0x232220u);
    ctx->pc = 0x23221Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232218u;
            // 0x23221c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232220u; }
        if (ctx->pc != 0x232220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232220u; }
        if (ctx->pc != 0x232220u) { return; }
    }
    ctx->pc = 0x232220u;
label_232220:
    // 0x232220: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x232220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232224: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x232224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x232228: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x232228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23222c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23222cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232230: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x232230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232234: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x232234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x232238: 0x46001500  add.s       $f20, $f2, $f0
    ctx->pc = 0x232238u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x23223c: 0xc047964  jal         func_11E590
    ctx->pc = 0x23223Cu;
    SET_GPR_U32(ctx, 31, 0x232244u);
    ctx->pc = 0x232240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23223Cu;
            // 0x232240: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232244u; }
        if (ctx->pc != 0x232244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232244u; }
        if (ctx->pc != 0x232244u) { return; }
    }
    ctx->pc = 0x232244u;
label_232244:
    // 0x232244: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x232244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x232248: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x232248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23224c: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x23224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232250: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x232250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x232254: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x232254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x232258: 0xc047a42  jal         func_11E908
    ctx->pc = 0x232258u;
    SET_GPR_U32(ctx, 31, 0x232260u);
    ctx->pc = 0x23225Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232258u;
            // 0x23225c: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232260u; }
        if (ctx->pc != 0x232260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232260u; }
        if (ctx->pc != 0x232260u) { return; }
    }
    ctx->pc = 0x232260u;
label_232260:
    // 0x232260: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x232260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x232264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232268: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x232268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23226c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x23226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232270: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x232270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x232274: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x232274u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x232278: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x232278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23227c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x23227Cu;
    SET_GPR_U32(ctx, 31, 0x232284u);
    ctx->pc = 0x232280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23227Cu;
            // 0x232280: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232284u; }
        if (ctx->pc != 0x232284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232284u; }
        if (ctx->pc != 0x232284u) { return; }
    }
    ctx->pc = 0x232284u;
label_232284:
    // 0x232284: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x232284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x232288: 0x2a620030  slti        $v0, $s3, 0x30
    ctx->pc = 0x232288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x23228c: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x23228Cu;
    {
        const bool branch_taken_0x23228c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23228Cu;
            // 0x232290: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23228c) {
            ctx->pc = 0x2320FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2320fc;
        }
    }
    ctx->pc = 0x232294u;
    // 0x232294: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x232294u;
    SET_GPR_U32(ctx, 31, 0x23229Cu);
    ctx->pc = 0x232298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232294u;
            // 0x232298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23229Cu; }
        if (ctx->pc != 0x23229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23229Cu; }
        if (ctx->pc != 0x23229Cu) { return; }
    }
    ctx->pc = 0x23229Cu;
label_23229c:
    // 0x23229c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23229cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322a0: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x2322A0u;
    SET_GPR_U32(ctx, 31, 0x2322A8u);
    ctx->pc = 0x2322A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2322A0u;
            // 0x2322a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322A8u; }
        if (ctx->pc != 0x2322A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322A8u; }
        if (ctx->pc != 0x2322A8u) { return; }
    }
    ctx->pc = 0x2322A8u;
label_2322a8:
    // 0x2322a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2322a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322ac: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2322ACu;
    SET_GPR_U32(ctx, 31, 0x2322B4u);
    ctx->pc = 0x2322B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2322ACu;
            // 0x2322b0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322B4u; }
        if (ctx->pc != 0x2322B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322B4u; }
        if (ctx->pc != 0x2322B4u) { return; }
    }
    ctx->pc = 0x2322B4u;
label_2322b4:
    // 0x2322b4: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x2322b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2322b8: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x2322b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2322bc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2322BCu;
    SET_GPR_U32(ctx, 31, 0x2322C4u);
    ctx->pc = 0x2322C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2322BCu;
            // 0x2322c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322C4u; }
        if (ctx->pc != 0x2322C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322C4u; }
        if (ctx->pc != 0x2322C4u) { return; }
    }
    ctx->pc = 0x2322C4u;
label_2322c4:
    // 0x2322c4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2322C4u;
    {
        const bool branch_taken_0x2322c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2322c4) {
            ctx->pc = 0x23234Cu;
            goto label_23234c;
        }
    }
    ctx->pc = 0x2322CCu;
label_2322cc:
    // 0x2322cc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2322CCu;
    SET_GPR_U32(ctx, 31, 0x2322D4u);
    ctx->pc = 0x2322D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2322CCu;
            // 0x2322d0: 0xc64c0030  lwc1        $f12, 0x30($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322D4u; }
        if (ctx->pc != 0x2322D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322D4u; }
        if (ctx->pc != 0x2322D4u) { return; }
    }
    ctx->pc = 0x2322D4u;
label_2322d4:
    // 0x2322d4: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x2322d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2322d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2322d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2322dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322e0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2322e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322e4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2322E4u;
    SET_GPR_U32(ctx, 31, 0x2322ECu);
    ctx->pc = 0x2322E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2322E4u;
            // 0x2322e8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322ECu; }
        if (ctx->pc != 0x2322ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322ECu; }
        if (ctx->pc != 0x2322ECu) { return; }
    }
    ctx->pc = 0x2322ECu;
label_2322ec:
    // 0x2322ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2322ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2322f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322f4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2322F4u;
    SET_GPR_U32(ctx, 31, 0x2322FCu);
    ctx->pc = 0x2322F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2322F4u;
            // 0x2322f8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322FCu; }
        if (ctx->pc != 0x2322FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322FCu; }
        if (ctx->pc != 0x2322FCu) { return; }
    }
    ctx->pc = 0x2322FCu;
label_2322fc:
    // 0x2322fc: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x2322fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x232300: 0xc64d0010  lwc1        $f13, 0x10($s2)
    ctx->pc = 0x232300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x232304: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x232304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x232308: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x232308u;
    SET_GPR_U32(ctx, 31, 0x232310u);
    ctx->pc = 0x23230Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232308u;
            // 0x23230c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232310u; }
        if (ctx->pc != 0x232310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232310u; }
        if (ctx->pc != 0x232310u) { return; }
    }
    ctx->pc = 0x232310u;
label_232310:
    // 0x232310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232314: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x232314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x232318: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x232318u;
    SET_GPR_U32(ctx, 31, 0x232320u);
    ctx->pc = 0x23231Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232318u;
            // 0x23231c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232320u; }
        if (ctx->pc != 0x232320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232320u; }
        if (ctx->pc != 0x232320u) { return; }
    }
    ctx->pc = 0x232320u;
label_232320:
    // 0x232320: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x232320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232324: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x232324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x232328: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x232328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23232c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232330: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232334: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x232334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x232338: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x232338u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x23233c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x23233Cu;
    SET_GPR_U32(ctx, 31, 0x232344u);
    ctx->pc = 0x232340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23233Cu;
            // 0x232340: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232344u; }
        if (ctx->pc != 0x232344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232344u; }
        if (ctx->pc != 0x232344u) { return; }
    }
    ctx->pc = 0x232344u;
label_232344:
    // 0x232344: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x232344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x232348: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x232348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_23234c:
    // 0x23234c: 0x0  nop
    ctx->pc = 0x23234cu;
    // NOP
    // 0x232350: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x232350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x232354: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x232354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x232358: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x232358u;
    {
        const bool branch_taken_0x232358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23235Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232358u;
            // 0x23235c: 0x2a620050  slti        $v0, $s3, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232358) {
            ctx->pc = 0x2322CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2322cc;
        }
    }
    ctx->pc = 0x232360u;
    // 0x232360: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x232360u;
    {
        const bool branch_taken_0x232360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232360) {
            ctx->pc = 0x2322CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2322cc;
        }
    }
    ctx->pc = 0x232368u;
    // 0x232368: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x232368u;
    SET_GPR_U32(ctx, 31, 0x232370u);
    ctx->pc = 0x23236Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232368u;
            // 0x23236c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232370u; }
        if (ctx->pc != 0x232370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232370u; }
        if (ctx->pc != 0x232370u) { return; }
    }
    ctx->pc = 0x232370u;
label_232370:
    // 0x232370: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x232370u;
    {
        const bool branch_taken_0x232370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232370u;
            // 0x232374: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232370) {
            ctx->pc = 0x23288Cu;
            goto label_23288c;
        }
    }
    ctx->pc = 0x232378u;
label_232378:
    // 0x232378: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x232378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23237c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x23237cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x232380: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x232380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x232384: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x232384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x232388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23238c: 0x0  nop
    ctx->pc = 0x23238cu;
    // NOP
    // 0x232390: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x232390u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x232394: 0xc0a248c  jal         func_289230
    ctx->pc = 0x232394u;
    SET_GPR_U32(ctx, 31, 0x23239Cu);
    ctx->pc = 0x232398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232394u;
            // 0x232398: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23239Cu; }
        if (ctx->pc != 0x23239Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23239Cu; }
        if (ctx->pc != 0x23239Cu) { return; }
    }
    ctx->pc = 0x23239Cu;
label_23239c:
    // 0x23239c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23239cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2323a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323a4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2323A4u;
    SET_GPR_U32(ctx, 31, 0x2323ACu);
    ctx->pc = 0x2323A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2323A4u;
            // 0x2323a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323ACu; }
        if (ctx->pc != 0x2323ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323ACu; }
        if (ctx->pc != 0x2323ACu) { return; }
    }
    ctx->pc = 0x2323ACu;
label_2323ac:
    // 0x2323ac: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x2323acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2323b0: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x2323b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2323b4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2323B4u;
    SET_GPR_U32(ctx, 31, 0x2323BCu);
    ctx->pc = 0x2323B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2323B4u;
            // 0x2323b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323BCu; }
        if (ctx->pc != 0x2323BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323BCu; }
        if (ctx->pc != 0x2323BCu) { return; }
    }
    ctx->pc = 0x2323BCu;
label_2323bc:
    // 0x2323bc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2323BCu;
    SET_GPR_U32(ctx, 31, 0x2323C4u);
    ctx->pc = 0x2323C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2323BCu;
            // 0x2323c0: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323C4u; }
        if (ctx->pc != 0x2323C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323C4u; }
        if (ctx->pc != 0x2323C4u) { return; }
    }
    ctx->pc = 0x2323C4u;
label_2323c4:
    // 0x2323c4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2323c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2323c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2323c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2323ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323d0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2323d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323d4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2323D4u;
    SET_GPR_U32(ctx, 31, 0x2323DCu);
    ctx->pc = 0x2323D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2323D4u;
            // 0x2323d8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323DCu; }
        if (ctx->pc != 0x2323DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323DCu; }
        if (ctx->pc != 0x2323DCu) { return; }
    }
    ctx->pc = 0x2323DCu;
label_2323dc:
    // 0x2323dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2323DCu;
    SET_GPR_U32(ctx, 31, 0x2323E4u);
    ctx->pc = 0x2323E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2323DCu;
            // 0x2323e0: 0xc64c000c  lwc1        $f12, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323E4u; }
        if (ctx->pc != 0x2323E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323E4u; }
        if (ctx->pc != 0x2323E4u) { return; }
    }
    ctx->pc = 0x2323E4u;
label_2323e4:
    // 0x2323e4: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x2323e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2323e8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2323E8u;
    SET_GPR_U32(ctx, 31, 0x2323F0u);
    ctx->pc = 0x2323ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2323E8u;
            // 0x2323ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323F0u; }
        if (ctx->pc != 0x2323F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2323F0u; }
        if (ctx->pc != 0x2323F0u) { return; }
    }
    ctx->pc = 0x2323F0u;
label_2323f0:
    // 0x2323f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2323f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2323f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323f8: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2323f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2323fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2323fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232400: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x232400u;
    SET_GPR_U32(ctx, 31, 0x232408u);
    ctx->pc = 0x232404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232400u;
            // 0x232404: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232408u; }
        if (ctx->pc != 0x232408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232408u; }
        if (ctx->pc != 0x232408u) { return; }
    }
    ctx->pc = 0x232408u;
label_232408:
    // 0x232408: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x232408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x23240c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232410: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x232410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x232414: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x232414u;
    SET_GPR_U32(ctx, 31, 0x23241Cu);
    ctx->pc = 0x232418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232414u;
            // 0x232418: 0x24c6cec0  addiu       $a2, $a2, -0x3140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23241Cu; }
        if (ctx->pc != 0x23241Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23241Cu; }
        if (ctx->pc != 0x23241Cu) { return; }
    }
    ctx->pc = 0x23241Cu;
label_23241c:
    // 0x23241c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x23241Cu;
    SET_GPR_U32(ctx, 31, 0x232424u);
    ctx->pc = 0x232420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23241Cu;
            // 0x232420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232424u; }
        if (ctx->pc != 0x232424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232424u; }
        if (ctx->pc != 0x232424u) { return; }
    }
    ctx->pc = 0x232424u;
label_232424:
    // 0x232424: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x232424u;
    {
        const bool branch_taken_0x232424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232424) {
            ctx->pc = 0x232888u;
            goto label_232888;
        }
    }
    ctx->pc = 0x23242Cu;
label_23242c:
    // 0x23242c: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x23242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x232430: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x232430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x232434: 0xc64d0010  lwc1        $f13, 0x10($s2)
    ctx->pc = 0x232434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x232438: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x232438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x23243c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x23243cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x232440: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x232440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x232444: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x232444u;
    SET_GPR_U32(ctx, 31, 0x23244Cu);
    ctx->pc = 0x232448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232444u;
            // 0x232448: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23244Cu; }
        if (ctx->pc != 0x23244Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23244Cu; }
        if (ctx->pc != 0x23244Cu) { return; }
    }
    ctx->pc = 0x23244Cu;
label_23244c:
    // 0x23244c: 0xc78094a0  lwc1        $f0, -0x6B60($gp)
    ctx->pc = 0x23244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232450: 0x27a2022c  addiu       $v0, $sp, 0x22C
    ctx->pc = 0x232450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x232454: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x232454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x232458: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x232458u;
    SET_GPR_U32(ctx, 31, 0x232460u);
    ctx->pc = 0x23245Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232458u;
            // 0x23245c: 0xc64c001c  lwc1        $f12, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232460u; }
        if (ctx->pc != 0x232460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232460u; }
        if (ctx->pc != 0x232460u) { return; }
    }
    ctx->pc = 0x232460u;
label_232460:
    // 0x232460: 0xa3a2022c  sb          $v0, 0x22C($sp)
    ctx->pc = 0x232460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 556), (uint8_t)GPR_U32(ctx, 2));
    // 0x232464: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x232464u;
    SET_GPR_U32(ctx, 31, 0x23246Cu);
    ctx->pc = 0x232468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232464u;
            // 0x232468: 0xc64c0020  lwc1        $f12, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23246Cu; }
        if (ctx->pc != 0x23246Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23246Cu; }
        if (ctx->pc != 0x23246Cu) { return; }
    }
    ctx->pc = 0x23246Cu;
label_23246c:
    // 0x23246c: 0xa3a2022d  sb          $v0, 0x22D($sp)
    ctx->pc = 0x23246cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 557), (uint8_t)GPR_U32(ctx, 2));
    // 0x232470: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x232470u;
    SET_GPR_U32(ctx, 31, 0x232478u);
    ctx->pc = 0x232474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232470u;
            // 0x232474: 0xc64c0020  lwc1        $f12, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232478u; }
        if (ctx->pc != 0x232478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232478u; }
        if (ctx->pc != 0x232478u) { return; }
    }
    ctx->pc = 0x232478u;
label_232478:
    // 0x232478: 0xa3a2022e  sb          $v0, 0x22E($sp)
    ctx->pc = 0x232478u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 558), (uint8_t)GPR_U32(ctx, 2));
    // 0x23247c: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x23247Cu;
    SET_GPR_U32(ctx, 31, 0x232484u);
    ctx->pc = 0x232480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23247Cu;
            // 0x232480: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232484u; }
        if (ctx->pc != 0x232484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232484u; }
        if (ctx->pc != 0x232484u) { return; }
    }
    ctx->pc = 0x232484u;
label_232484:
    // 0x232484: 0xa3a2022f  sb          $v0, 0x22F($sp)
    ctx->pc = 0x232484u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 559), (uint8_t)GPR_U32(ctx, 2));
    // 0x232488: 0xc0a248c  jal         func_289230
    ctx->pc = 0x232488u;
    SET_GPR_U32(ctx, 31, 0x232490u);
    ctx->pc = 0x23248Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232488u;
            // 0x23248c: 0xc64c0004  lwc1        $f12, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232490u; }
        if (ctx->pc != 0x232490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232490u; }
        if (ctx->pc != 0x232490u) { return; }
    }
    ctx->pc = 0x232490u;
label_232490:
    // 0x232490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232494: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x232494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x232498: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x232498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23249c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23249cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2324a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324a4: 0x27a9022c  addiu       $t1, $sp, 0x22C
    ctx->pc = 0x2324a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
    // 0x2324a8: 0xc0881fc  jal         func_2207F0
    ctx->pc = 0x2324A8u;
    SET_GPR_U32(ctx, 31, 0x2324B0u);
    ctx->pc = 0x2324ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2324A8u;
            // 0x2324ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2207F0u;
    if (runtime->hasFunction(0x2207F0u)) {
        auto targetFn = runtime->lookupFunction(0x2207F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2324B0u; }
        if (ctx->pc != 0x2324B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2324B0u; }
        if (ctx->pc != 0x2324B0u) { return; }
    }
    ctx->pc = 0x2324B0u;
label_2324b0:
    // 0x2324b0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x2324B0u;
    {
        const bool branch_taken_0x2324b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2324b0) {
            ctx->pc = 0x232888u;
            goto label_232888;
        }
    }
    ctx->pc = 0x2324B8u;
label_2324b8:
    // 0x2324b8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2324b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2324bc: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2324bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2324c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2324c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324c4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2324C4u;
    SET_GPR_U32(ctx, 31, 0x2324CCu);
    ctx->pc = 0x2324C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2324C4u;
            // 0x2324c8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2324CCu; }
        if (ctx->pc != 0x2324CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2324CCu; }
        if (ctx->pc != 0x2324CCu) { return; }
    }
    ctx->pc = 0x2324CCu;
label_2324cc:
    // 0x2324cc: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x2324ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2324d0: 0xc64d0010  lwc1        $f13, 0x10($s2)
    ctx->pc = 0x2324d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2324d4: 0xc64e0014  lwc1        $f14, 0x14($s2)
    ctx->pc = 0x2324d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2324d8: 0xc64f0018  lwc1        $f15, 0x18($s2)
    ctx->pc = 0x2324d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2324dc: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x2324DCu;
    SET_GPR_U32(ctx, 31, 0x2324E4u);
    ctx->pc = 0x2324E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2324DCu;
            // 0x2324e0: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2324E4u; }
        if (ctx->pc != 0x2324E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2324E4u; }
        if (ctx->pc != 0x2324E4u) { return; }
    }
    ctx->pc = 0x2324E4u;
label_2324e4:
    // 0x2324e4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2324E4u;
    {
        const bool branch_taken_0x2324e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2324e4) {
            ctx->pc = 0x2325F8u;
            goto label_2325f8;
        }
    }
    ctx->pc = 0x2324ECu;
label_2324ec:
    // 0x2324ec: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2324ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2324f0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2324f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2324f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2324f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2324f8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2324f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2324fc: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x2324FCu;
    SET_GPR_U32(ctx, 31, 0x232504u);
    ctx->pc = 0x232500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2324FCu;
            // 0x232500: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232504u; }
        if (ctx->pc != 0x232504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232504u; }
        if (ctx->pc != 0x232504u) { return; }
    }
    ctx->pc = 0x232504u;
label_232504:
    // 0x232504: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x232504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x232508: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x232508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x23250c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23250cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232514: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x232514u;
    SET_GPR_U32(ctx, 31, 0x23251Cu);
    ctx->pc = 0x232518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232514u;
            // 0x232518: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23251Cu; }
        if (ctx->pc != 0x23251Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23251Cu; }
        if (ctx->pc != 0x23251Cu) { return; }
    }
    ctx->pc = 0x23251Cu;
label_23251c:
    // 0x23251c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x23251cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x232520: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x232520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x232524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232528: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x232528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23252c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x23252Cu;
    SET_GPR_U32(ctx, 31, 0x232534u);
    ctx->pc = 0x232530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23252Cu;
            // 0x232530: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232534u; }
        if (ctx->pc != 0x232534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232534u; }
        if (ctx->pc != 0x232534u) { return; }
    }
    ctx->pc = 0x232534u;
label_232534:
    // 0x232534: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x232534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x232538: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x232538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x23253c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23253cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232540: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x232540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232544: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x232544u;
    SET_GPR_U32(ctx, 31, 0x23254Cu);
    ctx->pc = 0x232548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232544u;
            // 0x232548: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23254Cu; }
        if (ctx->pc != 0x23254Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23254Cu; }
        if (ctx->pc != 0x23254Cu) { return; }
    }
    ctx->pc = 0x23254Cu;
label_23254c:
    // 0x23254c: 0x8602001c  lh          $v0, 0x1C($s0)
    ctx->pc = 0x23254cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x232550: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x232550u;
    {
        const bool branch_taken_0x232550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232550u;
            // 0x232554: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232550) {
            ctx->pc = 0x2325F8u;
            goto label_2325f8;
        }
    }
    ctx->pc = 0x232558u;
    // 0x232558: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x232558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x23255c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x23255cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x232560: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x232560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232564: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x232564u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x232568: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x232568u;
    SET_GPR_U32(ctx, 31, 0x232570u);
    ctx->pc = 0x23256Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232568u;
            // 0x23256c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232570u; }
        if (ctx->pc != 0x232570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232570u; }
        if (ctx->pc != 0x232570u) { return; }
    }
    ctx->pc = 0x232570u;
label_232570:
    // 0x232570: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x232570u;
    {
        const bool branch_taken_0x232570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232570) {
            ctx->pc = 0x2325F8u;
            goto label_2325f8;
        }
    }
    ctx->pc = 0x232578u;
label_232578:
    // 0x232578: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x232578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x23257c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x23257cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x232580: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x232580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232584: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x232584u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x232588: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x232588u;
    SET_GPR_U32(ctx, 31, 0x232590u);
    ctx->pc = 0x23258Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232588u;
            // 0x23258c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232590u; }
        if (ctx->pc != 0x232590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232590u; }
        if (ctx->pc != 0x232590u) { return; }
    }
    ctx->pc = 0x232590u;
label_232590:
    // 0x232590: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x232590u;
    {
        const bool branch_taken_0x232590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232590) {
            ctx->pc = 0x2325F8u;
            goto label_2325f8;
        }
    }
    ctx->pc = 0x232598u;
label_232598:
    // 0x232598: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x232598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23259c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x23259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2325a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2325a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2325a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2325A8u;
    SET_GPR_U32(ctx, 31, 0x2325B0u);
    ctx->pc = 0x2325ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2325A8u;
            // 0x2325ac: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2325B0u; }
        if (ctx->pc != 0x2325B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2325B0u; }
        if (ctx->pc != 0x2325B0u) { return; }
    }
    ctx->pc = 0x2325B0u;
label_2325b0:
    // 0x2325b0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2325b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2325b4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2325b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2325b8: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2325b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2325bc: 0xafa301a4  sw          $v1, 0x1A4($sp)
    ctx->pc = 0x2325bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
    // 0x2325c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2325C0u;
    {
        const bool branch_taken_0x2325c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2325C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2325C0u;
            // 0x2325c4: 0xafa301a0  sw          $v1, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325c0) {
            ctx->pc = 0x2325F8u;
            goto label_2325f8;
        }
    }
    ctx->pc = 0x2325C8u;
label_2325c8:
    // 0x2325c8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2325c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2325cc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2325ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2325d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2325d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2325d4: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2325d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2325d8: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x2325D8u;
    SET_GPR_U32(ctx, 31, 0x2325E0u);
    ctx->pc = 0x2325DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2325D8u;
            // 0x2325dc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2325E0u; }
        if (ctx->pc != 0x2325E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2325E0u; }
        if (ctx->pc != 0x2325E0u) { return; }
    }
    ctx->pc = 0x2325E0u;
label_2325e0:
    // 0x2325e0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2325e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2325e4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2325e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2325e8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2325e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2325ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2325ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325f0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2325F0u;
    SET_GPR_U32(ctx, 31, 0x2325F8u);
    ctx->pc = 0x2325F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2325F0u;
            // 0x2325f4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2325F8u; }
        if (ctx->pc != 0x2325F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2325F8u; }
        if (ctx->pc != 0x2325F8u) { return; }
    }
    ctx->pc = 0x2325F8u;
label_2325f8:
    // 0x2325f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2325f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2325fc:
    // 0x2325fc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2325FCu;
    SET_GPR_U32(ctx, 31, 0x232604u);
    ctx->pc = 0x232600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2325FCu;
            // 0x232600: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232604u; }
        if (ctx->pc != 0x232604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232604u; }
        if (ctx->pc != 0x232604u) { return; }
    }
    ctx->pc = 0x232604u;
label_232604:
    // 0x232604: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x232604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x232608: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x232608u;
    SET_GPR_U32(ctx, 31, 0x232610u);
    ctx->pc = 0x23260Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232608u;
            // 0x23260c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232610u; }
        if (ctx->pc != 0x232610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232610u; }
        if (ctx->pc != 0x232610u) { return; }
    }
    ctx->pc = 0x232610u;
label_232610:
    // 0x232610: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x232610u;
    {
        const bool branch_taken_0x232610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232610u;
            // 0x232614: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232610) {
            ctx->pc = 0x232870u;
            goto label_232870;
        }
    }
    ctx->pc = 0x232618u;
label_232618:
    // 0x232618: 0x82030009  lb          $v1, 0x9($s0)
    ctx->pc = 0x232618u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x23261c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23261Cu;
    {
        const bool branch_taken_0x23261c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23261c) {
            ctx->pc = 0x232634u;
            goto label_232634;
        }
    }
    ctx->pc = 0x232624u;
    // 0x232624: 0xc0a248c  jal         func_289230
    ctx->pc = 0x232624u;
    SET_GPR_U32(ctx, 31, 0x23262Cu);
    ctx->pc = 0x232628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232624u;
            // 0x232628: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23262Cu; }
        if (ctx->pc != 0x23262Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23262Cu; }
        if (ctx->pc != 0x23262Cu) { return; }
    }
    ctx->pc = 0x23262Cu;
label_23262c:
    // 0x23262c: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x23262Cu;
    {
        const bool branch_taken_0x23262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23262Cu;
            // 0x232630: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23262c) {
            ctx->pc = 0x23282Cu;
            goto label_23282c;
        }
    }
    ctx->pc = 0x232634u;
label_232634:
    // 0x232634: 0x0  nop
    ctx->pc = 0x232634u;
    // NOP
    // 0x232638: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x232638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23263c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23263Cu;
    {
        const bool branch_taken_0x23263c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23263c) {
            ctx->pc = 0x232654u;
            goto label_232654;
        }
    }
    ctx->pc = 0x232644u;
    // 0x232644: 0xc0a248c  jal         func_289230
    ctx->pc = 0x232644u;
    SET_GPR_U32(ctx, 31, 0x23264Cu);
    ctx->pc = 0x232648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232644u;
            // 0x232648: 0xc64c001c  lwc1        $f12, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23264Cu; }
        if (ctx->pc != 0x23264Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23264Cu; }
        if (ctx->pc != 0x23264Cu) { return; }
    }
    ctx->pc = 0x23264Cu;
label_23264c:
    // 0x23264c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x23264Cu;
    {
        const bool branch_taken_0x23264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23264Cu;
            // 0x232650: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23264c) {
            ctx->pc = 0x23282Cu;
            goto label_23282c;
        }
    }
    ctx->pc = 0x232654u;
label_232654:
    // 0x232654: 0x0  nop
    ctx->pc = 0x232654u;
    // NOP
    // 0x232658: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23265c: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x23265Cu;
    {
        const bool branch_taken_0x23265c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23265c) {
            ctx->pc = 0x23271Cu;
            goto label_23271c;
        }
    }
    ctx->pc = 0x232664u;
    // 0x232664: 0xc0a248c  jal         func_289230
    ctx->pc = 0x232664u;
    SET_GPR_U32(ctx, 31, 0x23266Cu);
    ctx->pc = 0x232668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232664u;
            // 0x232668: 0xc64c0008  lwc1        $f12, 0x8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23266Cu; }
        if (ctx->pc != 0x23266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23266Cu; }
        if (ctx->pc != 0x23266Cu) { return; }
    }
    ctx->pc = 0x23266Cu;
label_23266c:
    // 0x23266c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x23266cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x232670: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x232670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x232674: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x232674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x232678: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x232678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23267c: 0x248401d0  addiu       $a0, $a0, 0x1D0
    ctx->pc = 0x23267cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x232680: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x232680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x232684: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x232684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x232688: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x232688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23268c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23268cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232694: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x232694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x232698: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x232698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23269c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23269cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2326a0: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x2326a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x2326a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2326a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2326a8: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x2326a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    // 0x2326ac: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2326acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2326b0: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x2326b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
    // 0x2326b4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2326b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2326b8: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x2326b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    // 0x2326bc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2326bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2326c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2326C0u;
    {
        const bool branch_taken_0x2326c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2326C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2326C0u;
            // 0x2326c4: 0x46021b02  mul.s       $f12, $f3, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326c0) {
            ctx->pc = 0x2326CCu;
            goto label_2326cc;
        }
    }
    ctx->pc = 0x2326C8u;
label_2326c8:
    // 0x2326c8: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x2326c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_2326cc:
    // 0x2326cc: 0x0  nop
    ctx->pc = 0x2326ccu;
    // NOP
    // 0x2326d0: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2326d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2326d4: 0x0  nop
    ctx->pc = 0x2326d4u;
    // NOP
    // 0x2326d8: 0x0  nop
    ctx->pc = 0x2326d8u;
    // NOP
    // 0x2326dc: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x2326DCu;
    {
        const bool branch_taken_0x2326dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2326dc) {
            ctx->pc = 0x2326C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2326c8;
        }
    }
    ctx->pc = 0x2326E4u;
    // 0x2326e4: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2326E4u;
    SET_GPR_U32(ctx, 31, 0x2326ECu);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2326ECu; }
        if (ctx->pc != 0x2326ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2326ECu; }
        if (ctx->pc != 0x2326ECu) { return; }
    }
    ctx->pc = 0x2326ECu;
label_2326ec:
    // 0x2326ec: 0xc642003c  lwc1        $f2, 0x3C($s2)
    ctx->pc = 0x2326ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2326f0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2326f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2326f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2326f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2326f8: 0x0  nop
    ctx->pc = 0x2326f8u;
    // NOP
    // 0x2326fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2326fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x232700: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x232704: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x232704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x232708: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x232708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x23270c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x23270Cu;
    SET_GPR_U32(ctx, 31, 0x232714u);
    ctx->pc = 0x232710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23270Cu;
            // 0x232710: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232714u; }
        if (ctx->pc != 0x232714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232714u; }
        if (ctx->pc != 0x232714u) { return; }
    }
    ctx->pc = 0x232714u;
label_232714:
    // 0x232714: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x232714u;
    {
        const bool branch_taken_0x232714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232714u;
            // 0x232718: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232714) {
            ctx->pc = 0x23282Cu;
            goto label_23282c;
        }
    }
    ctx->pc = 0x23271Cu;
label_23271c:
    // 0x23271c: 0x0  nop
    ctx->pc = 0x23271cu;
    // NOP
    // 0x232720: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x232720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x232724: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x232724u;
    {
        const bool branch_taken_0x232724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x232724) {
            ctx->pc = 0x232750u;
            goto label_232750;
        }
    }
    ctx->pc = 0x23272Cu;
    // 0x23272c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x23272cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x232730: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x232730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x232734: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x232734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x232738: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x232738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x23273c: 0xafa501c0  sw          $a1, 0x1C0($sp)
    ctx->pc = 0x23273cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 5));
    // 0x232740: 0xafa401c4  sw          $a0, 0x1C4($sp)
    ctx->pc = 0x232740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 4));
    // 0x232744: 0xafa301c8  sw          $v1, 0x1C8($sp)
    ctx->pc = 0x232744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 3));
    // 0x232748: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x232748u;
    {
        const bool branch_taken_0x232748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232748u;
            // 0x23274c: 0xafa201cc  sw          $v0, 0x1CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232748) {
            ctx->pc = 0x23282Cu;
            goto label_23282c;
        }
    }
    ctx->pc = 0x232750u;
label_232750:
    // 0x232750: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x232750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x232754: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x232754u;
    {
        const bool branch_taken_0x232754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x232754) {
            ctx->pc = 0x232790u;
            goto label_232790;
        }
    }
    ctx->pc = 0x23275Cu;
    // 0x23275c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x23275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232760: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x232760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x232764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x232764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232768: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x232768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x23276c: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x23276cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x232770: 0xc64d0010  lwc1        $f13, 0x10($s2)
    ctx->pc = 0x232770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x232774: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x232774u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x232778: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x232778u;
    SET_GPR_U32(ctx, 31, 0x232780u);
    ctx->pc = 0x23277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232778u;
            // 0x23277c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232780u; }
        if (ctx->pc != 0x232780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232780u; }
        if (ctx->pc != 0x232780u) { return; }
    }
    ctx->pc = 0x232780u;
label_232780:
    // 0x232780: 0xc0a248c  jal         func_289230
    ctx->pc = 0x232780u;
    SET_GPR_U32(ctx, 31, 0x232788u);
    ctx->pc = 0x232784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232780u;
            // 0x232784: 0xc64c0028  lwc1        $f12, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232788u; }
        if (ctx->pc != 0x232788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232788u; }
        if (ctx->pc != 0x232788u) { return; }
    }
    ctx->pc = 0x232788u;
label_232788:
    // 0x232788: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x232788u;
    {
        const bool branch_taken_0x232788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232788u;
            // 0x23278c: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232788) {
            ctx->pc = 0x23282Cu;
            goto label_23282c;
        }
    }
    ctx->pc = 0x232790u;
label_232790:
    // 0x232790: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x232790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x232794: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x232794u;
    {
        const bool branch_taken_0x232794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x232798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232794u;
            // 0x232798: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232794) {
            ctx->pc = 0x23282Cu;
            goto label_23282c;
        }
    }
    ctx->pc = 0x23279Cu;
    // 0x23279c: 0x16820012  bne         $s4, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23279Cu;
    {
        const bool branch_taken_0x23279c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x23279c) {
            ctx->pc = 0x2327E8u;
            goto label_2327e8;
        }
    }
    ctx->pc = 0x2327A4u;
    // 0x2327a4: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x2327a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2327a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2327a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2327ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2327acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2327b0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2327b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2327b4: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x2327b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2327b8: 0xc64d0010  lwc1        $f13, 0x10($s2)
    ctx->pc = 0x2327b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2327bc: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2327bcu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2327c0: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x2327C0u;
    SET_GPR_U32(ctx, 31, 0x2327C8u);
    ctx->pc = 0x2327C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2327C0u;
            // 0x2327c4: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2327C8u; }
        if (ctx->pc != 0x2327C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2327C8u; }
        if (ctx->pc != 0x2327C8u) { return; }
    }
    ctx->pc = 0x2327C8u;
label_2327c8:
    // 0x2327c8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2327c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2327cc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2327ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2327d0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2327d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2327d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2327d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2327d8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2327D8u;
    SET_GPR_U32(ctx, 31, 0x2327E0u);
    ctx->pc = 0x2327DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2327D8u;
            // 0x2327dc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2327E0u; }
        if (ctx->pc != 0x2327E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2327E0u; }
        if (ctx->pc != 0x2327E0u) { return; }
    }
    ctx->pc = 0x2327E0u;
label_2327e0:
    // 0x2327e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2327E0u;
    {
        const bool branch_taken_0x2327e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2327e0) {
            ctx->pc = 0x232820u;
            goto label_232820;
        }
    }
    ctx->pc = 0x2327E8u;
label_2327e8:
    // 0x2327e8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2327E8u;
    SET_GPR_U32(ctx, 31, 0x2327F0u);
    ctx->pc = 0x2327ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2327E8u;
            // 0x2327ec: 0xc64c0020  lwc1        $f12, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2327F0u; }
        if (ctx->pc != 0x2327F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2327F0u; }
        if (ctx->pc != 0x2327F0u) { return; }
    }
    ctx->pc = 0x2327F0u;
label_2327f0:
    // 0x2327f0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x2327f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2327f4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2327f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2327f8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2327f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2327fc: 0x246305e0  addiu       $v1, $v1, 0x5E0
    ctx->pc = 0x2327fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1504));
    // 0x232800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232808: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23280c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x23280cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x232810: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x232810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x232814: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x232814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x232818: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x232818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23281c: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x23281cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_232820:
    // 0x232820: 0xc0a248c  jal         func_289230
    ctx->pc = 0x232820u;
    SET_GPR_U32(ctx, 31, 0x232828u);
    ctx->pc = 0x232824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232820u;
            // 0x232824: 0xc64c0030  lwc1        $f12, 0x30($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232828u; }
        if (ctx->pc != 0x232828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232828u; }
        if (ctx->pc != 0x232828u) { return; }
    }
    ctx->pc = 0x232828u;
label_232828:
    // 0x232828: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x232828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_23282c:
    // 0x23282c: 0x0  nop
    ctx->pc = 0x23282cu;
    // NOP
    // 0x232830: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x232830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x232834: 0x8fa601a4  lw          $a2, 0x1A4($sp)
    ctx->pc = 0x232834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x232838: 0x8fa701a8  lw          $a3, 0x1A8($sp)
    ctx->pc = 0x232838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x23283c: 0x8fa801ac  lw          $t0, 0x1AC($sp)
    ctx->pc = 0x23283cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x232840: 0xc04d320  jal         func_134C80
    ctx->pc = 0x232840u;
    SET_GPR_U32(ctx, 31, 0x232848u);
    ctx->pc = 0x232844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232840u;
            // 0x232844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232848u; }
        if (ctx->pc != 0x232848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232848u; }
        if (ctx->pc != 0x232848u) { return; }
    }
    ctx->pc = 0x232848u;
label_232848:
    // 0x232848: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x232848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23284c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232850: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x232850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x232854: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x232854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x232858: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x232858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x23285c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x23285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232860: 0xc08ca30  jal         func_2328C0
    ctx->pc = 0x232860u;
    SET_GPR_U32(ctx, 31, 0x232868u);
    ctx->pc = 0x232864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232860u;
            // 0x232864: 0xe7a001b4  swc1        $f0, 0x1B4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2328C0u;
    if (runtime->hasFunction(0x2328C0u)) {
        auto targetFn = runtime->lookupFunction(0x2328C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232868u; }
        if (ctx->pc != 0x232868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_f___FP11mgCDrawPrim9mgRect_f_9mgRect_i__0x2328c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232868u; }
        if (ctx->pc != 0x232868u) { return; }
    }
    ctx->pc = 0x232868u;
label_232868:
    // 0x232868: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x232868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x23286c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x23286cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_232870:
    // 0x232870: 0x8606000c  lh          $a2, 0xC($s0)
    ctx->pc = 0x232870u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x232874: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x232874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x232878: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x232878u;
    {
        const bool branch_taken_0x232878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232878) {
            ctx->pc = 0x232618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232618;
        }
    }
    ctx->pc = 0x232880u;
    // 0x232880: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x232880u;
    SET_GPR_U32(ctx, 31, 0x232888u);
    ctx->pc = 0x232884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232880u;
            // 0x232884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232888u; }
        if (ctx->pc != 0x232888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232888u; }
        if (ctx->pc != 0x232888u) { return; }
    }
    ctx->pc = 0x232888u;
label_232888:
    // 0x232888: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x232888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23288c:
    // 0x23288c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x23288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x232890: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x232890u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x232894: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x232894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x232898: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x232898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23289c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x23289cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2328a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2328a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2328a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2328a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2328a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2328a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2328ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2328ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2328B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2328ACu;
            // 0x2328b0: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2328B4u;
}
