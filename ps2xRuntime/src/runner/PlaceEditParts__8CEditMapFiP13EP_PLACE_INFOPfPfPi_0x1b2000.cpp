#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaceEditParts__8CEditMapFiP13EP_PLACE_INFOPfPfPi
// Address: 0x1b2000 - 0x1b21d0
void PlaceEditParts__8CEditMapFiP13EP_PLACE_INFOPfPfPi_0x1b2000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaceEditParts__8CEditMapFiP13EP_PLACE_INFOPfPfPi_0x1b2000");
#endif

    switch (ctx->pc) {
        case 0x1b2000u: goto label_1b2000;
        case 0x1b2004u: goto label_1b2004;
        case 0x1b2008u: goto label_1b2008;
        case 0x1b200cu: goto label_1b200c;
        case 0x1b2010u: goto label_1b2010;
        case 0x1b2014u: goto label_1b2014;
        case 0x1b2018u: goto label_1b2018;
        case 0x1b201cu: goto label_1b201c;
        case 0x1b2020u: goto label_1b2020;
        case 0x1b2024u: goto label_1b2024;
        case 0x1b2028u: goto label_1b2028;
        case 0x1b202cu: goto label_1b202c;
        case 0x1b2030u: goto label_1b2030;
        case 0x1b2034u: goto label_1b2034;
        case 0x1b2038u: goto label_1b2038;
        case 0x1b203cu: goto label_1b203c;
        case 0x1b2040u: goto label_1b2040;
        case 0x1b2044u: goto label_1b2044;
        case 0x1b2048u: goto label_1b2048;
        case 0x1b204cu: goto label_1b204c;
        case 0x1b2050u: goto label_1b2050;
        case 0x1b2054u: goto label_1b2054;
        case 0x1b2058u: goto label_1b2058;
        case 0x1b205cu: goto label_1b205c;
        case 0x1b2060u: goto label_1b2060;
        case 0x1b2064u: goto label_1b2064;
        case 0x1b2068u: goto label_1b2068;
        case 0x1b206cu: goto label_1b206c;
        case 0x1b2070u: goto label_1b2070;
        case 0x1b2074u: goto label_1b2074;
        case 0x1b2078u: goto label_1b2078;
        case 0x1b207cu: goto label_1b207c;
        case 0x1b2080u: goto label_1b2080;
        case 0x1b2084u: goto label_1b2084;
        case 0x1b2088u: goto label_1b2088;
        case 0x1b208cu: goto label_1b208c;
        case 0x1b2090u: goto label_1b2090;
        case 0x1b2094u: goto label_1b2094;
        case 0x1b2098u: goto label_1b2098;
        case 0x1b209cu: goto label_1b209c;
        case 0x1b20a0u: goto label_1b20a0;
        case 0x1b20a4u: goto label_1b20a4;
        case 0x1b20a8u: goto label_1b20a8;
        case 0x1b20acu: goto label_1b20ac;
        case 0x1b20b0u: goto label_1b20b0;
        case 0x1b20b4u: goto label_1b20b4;
        case 0x1b20b8u: goto label_1b20b8;
        case 0x1b20bcu: goto label_1b20bc;
        case 0x1b20c0u: goto label_1b20c0;
        case 0x1b20c4u: goto label_1b20c4;
        case 0x1b20c8u: goto label_1b20c8;
        case 0x1b20ccu: goto label_1b20cc;
        case 0x1b20d0u: goto label_1b20d0;
        case 0x1b20d4u: goto label_1b20d4;
        case 0x1b20d8u: goto label_1b20d8;
        case 0x1b20dcu: goto label_1b20dc;
        case 0x1b20e0u: goto label_1b20e0;
        case 0x1b20e4u: goto label_1b20e4;
        case 0x1b20e8u: goto label_1b20e8;
        case 0x1b20ecu: goto label_1b20ec;
        case 0x1b20f0u: goto label_1b20f0;
        case 0x1b20f4u: goto label_1b20f4;
        case 0x1b20f8u: goto label_1b20f8;
        case 0x1b20fcu: goto label_1b20fc;
        case 0x1b2100u: goto label_1b2100;
        case 0x1b2104u: goto label_1b2104;
        case 0x1b2108u: goto label_1b2108;
        case 0x1b210cu: goto label_1b210c;
        case 0x1b2110u: goto label_1b2110;
        case 0x1b2114u: goto label_1b2114;
        case 0x1b2118u: goto label_1b2118;
        case 0x1b211cu: goto label_1b211c;
        case 0x1b2120u: goto label_1b2120;
        case 0x1b2124u: goto label_1b2124;
        case 0x1b2128u: goto label_1b2128;
        case 0x1b212cu: goto label_1b212c;
        case 0x1b2130u: goto label_1b2130;
        case 0x1b2134u: goto label_1b2134;
        case 0x1b2138u: goto label_1b2138;
        case 0x1b213cu: goto label_1b213c;
        case 0x1b2140u: goto label_1b2140;
        case 0x1b2144u: goto label_1b2144;
        case 0x1b2148u: goto label_1b2148;
        case 0x1b214cu: goto label_1b214c;
        case 0x1b2150u: goto label_1b2150;
        case 0x1b2154u: goto label_1b2154;
        case 0x1b2158u: goto label_1b2158;
        case 0x1b215cu: goto label_1b215c;
        case 0x1b2160u: goto label_1b2160;
        case 0x1b2164u: goto label_1b2164;
        case 0x1b2168u: goto label_1b2168;
        case 0x1b216cu: goto label_1b216c;
        case 0x1b2170u: goto label_1b2170;
        case 0x1b2174u: goto label_1b2174;
        case 0x1b2178u: goto label_1b2178;
        case 0x1b217cu: goto label_1b217c;
        case 0x1b2180u: goto label_1b2180;
        case 0x1b2184u: goto label_1b2184;
        case 0x1b2188u: goto label_1b2188;
        case 0x1b218cu: goto label_1b218c;
        case 0x1b2190u: goto label_1b2190;
        case 0x1b2194u: goto label_1b2194;
        case 0x1b2198u: goto label_1b2198;
        case 0x1b219cu: goto label_1b219c;
        case 0x1b21a0u: goto label_1b21a0;
        case 0x1b21a4u: goto label_1b21a4;
        case 0x1b21a8u: goto label_1b21a8;
        case 0x1b21acu: goto label_1b21ac;
        case 0x1b21b0u: goto label_1b21b0;
        case 0x1b21b4u: goto label_1b21b4;
        case 0x1b21b8u: goto label_1b21b8;
        case 0x1b21bcu: goto label_1b21bc;
        case 0x1b21c0u: goto label_1b21c0;
        case 0x1b21c4u: goto label_1b21c4;
        case 0x1b21c8u: goto label_1b21c8;
        case 0x1b21ccu: goto label_1b21cc;
        default: break;
    }

    ctx->pc = 0x1b2000u;

label_1b2000:
    // 0x1b2000: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b2000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b2004:
    // 0x1b2004: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b2004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1b2008:
    // 0x1b2008: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b2008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b200c:
    // 0x1b200c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b2010:
    // 0x1b2010: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1b2010u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b2014:
    // 0x1b2014: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b2014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b2018:
    // 0x1b2018: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b2018u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b201c:
    // 0x1b201c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b2020:
    // 0x1b2020: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b2020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b2024:
    // 0x1b2024: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b2024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b2028:
    // 0x1b2028: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b2028u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b202c:
    // 0x1b202c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b2030:
    // 0x1b2030: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b2030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b2034:
    // 0x1b2034: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b2038:
    // 0x1b2038: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1b2038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1b203c:
    // 0x1b203c: 0xc06c310  jal         func_1B0C40
label_1b2040:
    if (ctx->pc == 0x1B2040u) {
        ctx->pc = 0x1B2040u;
            // 0x1b2040: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1B2044u;
        goto label_1b2044;
    }
    ctx->pc = 0x1B203Cu;
    SET_GPR_U32(ctx, 31, 0x1B2044u);
    ctx->pc = 0x1B2040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B203Cu;
            // 0x1b2040: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2044u; }
        if (ctx->pc != 0x1B2044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2044u; }
        if (ctx->pc != 0x1B2044u) { return; }
    }
    ctx->pc = 0x1B2044u;
label_1b2044:
    // 0x1b2044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2048:
    // 0x1b2048: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1b204c:
    if (ctx->pc == 0x1B204Cu) {
        ctx->pc = 0x1B204Cu;
            // 0x1b204c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2050u;
        goto label_1b2050;
    }
    ctx->pc = 0x1B2048u;
    {
        const bool branch_taken_0x1b2048 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B204Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2048u;
            // 0x1b204c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2048) {
            ctx->pc = 0x1B2058u;
            goto label_1b2058;
        }
    }
    ctx->pc = 0x1B2050u;
label_1b2050:
    // 0x1b2050: 0x10000055  b           . + 4 + (0x55 << 2)
label_1b2054:
    if (ctx->pc == 0x1B2054u) {
        ctx->pc = 0x1B2054u;
            // 0x1b2054: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x1B2058u;
        goto label_1b2058;
    }
    ctx->pc = 0x1B2050u;
    {
        const bool branch_taken_0x1b2050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2050u;
            // 0x1b2054: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2050) {
            ctx->pc = 0x1B21A8u;
            goto label_1b21a8;
        }
    }
    ctx->pc = 0x1B2058u;
label_1b2058:
    // 0x1b2058: 0x8e110324  lw          $s1, 0x324($s0)
    ctx->pc = 0x1b2058u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_1b205c:
    // 0x1b205c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1b2060:
    if (ctx->pc == 0x1B2060u) {
        ctx->pc = 0x1B2060u;
            // 0x1b2060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2064u;
        goto label_1b2064;
    }
    ctx->pc = 0x1B205Cu;
    {
        const bool branch_taken_0x1b205c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B205Cu;
            // 0x1b2060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b205c) {
            ctx->pc = 0x1B206Cu;
            goto label_1b206c;
        }
    }
    ctx->pc = 0x1B2064u;
label_1b2064:
    // 0x1b2064: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1b2068:
    if (ctx->pc == 0x1B2068u) {
        ctx->pc = 0x1B2068u;
            // 0x1b2068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B206Cu;
        goto label_1b206c;
    }
    ctx->pc = 0x1B2064u;
    {
        const bool branch_taken_0x1b2064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2064u;
            // 0x1b2068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2064) {
            ctx->pc = 0x1B21A4u;
            goto label_1b21a4;
        }
    }
    ctx->pc = 0x1B206Cu;
label_1b206c:
    // 0x1b206c: 0xc06d778  jal         func_1B5DE0
label_1b2070:
    if (ctx->pc == 0x1B2070u) {
        ctx->pc = 0x1B2074u;
        goto label_1b2074;
    }
    ctx->pc = 0x1B206Cu;
    SET_GPR_U32(ctx, 31, 0x1B2074u);
    ctx->pc = 0x1B5DE0u;
    if (runtime->hasFunction(0x1B5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2074u; }
        if (ctx->pc != 0x1B2074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsType__10CEditPartsFv_0x1b5de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2074u; }
        if (ctx->pc != 0x1B2074u) { return; }
    }
    ctx->pc = 0x1B2074u;
label_1b2074:
    // 0x1b2074: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1b2074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b2078:
    // 0x1b2078: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_1b207c:
    if (ctx->pc == 0x1B207Cu) {
        ctx->pc = 0x1B207Cu;
            // 0x1b207c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2080u;
        goto label_1b2080;
    }
    ctx->pc = 0x1B2078u;
    {
        const bool branch_taken_0x1b2078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2078u;
            // 0x1b207c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2078) {
            ctx->pc = 0x1B209Cu;
            goto label_1b209c;
        }
    }
    ctx->pc = 0x1B2080u;
label_1b2080:
    // 0x1b2080: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b2080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b2084:
    // 0x1b2084: 0xc06c888  jal         func_1B2220
label_1b2088:
    if (ctx->pc == 0x1B2088u) {
        ctx->pc = 0x1B2088u;
            // 0x1b2088: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B208Cu;
        goto label_1b208c;
    }
    ctx->pc = 0x1B2084u;
    SET_GPR_U32(ctx, 31, 0x1B208Cu);
    ctx->pc = 0x1B2088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2084u;
            // 0x1b2088: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2220u;
    if (runtime->hasFunction(0x1B2220u)) {
        auto targetFn = runtime->lookupFunction(0x1B2220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B208Cu; }
        if (ctx->pc != 0x1B208Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePlaceLog__8CEditMapFiP13EP_PLACE_INFO_0x1b2220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B208Cu; }
        if (ctx->pc != 0x1B208Cu) { return; }
    }
    ctx->pc = 0x1B208Cu;
label_1b208c:
    // 0x1b208c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b2090:
    if (ctx->pc == 0x1B2090u) {
        ctx->pc = 0x1B2090u;
            // 0x1b2090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2094u;
        goto label_1b2094;
    }
    ctx->pc = 0x1B208Cu;
    {
        const bool branch_taken_0x1b208c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B208Cu;
            // 0x1b2090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b208c) {
            ctx->pc = 0x1B209Cu;
            goto label_1b209c;
        }
    }
    ctx->pc = 0x1B2094u;
label_1b2094:
    // 0x1b2094: 0x10000043  b           . + 4 + (0x43 << 2)
label_1b2098:
    if (ctx->pc == 0x1B2098u) {
        ctx->pc = 0x1B209Cu;
        goto label_1b209c;
    }
    ctx->pc = 0x1B2094u;
    {
        const bool branch_taken_0x1b2094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2094) {
            ctx->pc = 0x1B21A4u;
            goto label_1b21a4;
        }
    }
    ctx->pc = 0x1B209Cu;
label_1b209c:
    // 0x1b209c: 0x8ec30f80  lw          $v1, 0xF80($s6)
    ctx->pc = 0x1b209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3968)));
label_1b20a0:
    // 0x1b20a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b20a4:
    // 0x1b20a4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1b20a8:
    if (ctx->pc == 0x1B20A8u) {
        ctx->pc = 0x1B20A8u;
            // 0x1b20a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B20ACu;
        goto label_1b20ac;
    }
    ctx->pc = 0x1B20A4u;
    {
        const bool branch_taken_0x1b20a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B20A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20A4u;
            // 0x1b20a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20a4) {
            ctx->pc = 0x1B20D4u;
            goto label_1b20d4;
        }
    }
    ctx->pc = 0x1B20ACu;
label_1b20ac:
    // 0x1b20ac: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1b20b0:
    if (ctx->pc == 0x1B20B0u) {
        ctx->pc = 0x1B20B4u;
        goto label_1b20b4;
    }
    ctx->pc = 0x1B20ACu;
    {
        const bool branch_taken_0x1b20ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b20ac) {
            ctx->pc = 0x1B20D0u;
            goto label_1b20d0;
        }
    }
    ctx->pc = 0x1B20B4u;
label_1b20b4:
    // 0x1b20b4: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1b20b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1b20b8:
    // 0x1b20b8: 0xc06c310  jal         func_1B0C40
label_1b20bc:
    if (ctx->pc == 0x1B20BCu) {
        ctx->pc = 0x1B20BCu;
            // 0x1b20bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B20C0u;
        goto label_1b20c0;
    }
    ctx->pc = 0x1B20B8u;
    SET_GPR_U32(ctx, 31, 0x1B20C0u);
    ctx->pc = 0x1B20BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20B8u;
            // 0x1b20bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20C0u; }
        if (ctx->pc != 0x1B20C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20C0u; }
        if (ctx->pc != 0x1B20C0u) { return; }
    }
    ctx->pc = 0x1B20C0u;
label_1b20c0:
    // 0x1b20c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b20c4:
    if (ctx->pc == 0x1B20C4u) {
        ctx->pc = 0x1B20C8u;
        goto label_1b20c8;
    }
    ctx->pc = 0x1B20C0u;
    {
        const bool branch_taken_0x1b20c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b20c0) {
            ctx->pc = 0x1B20D0u;
            goto label_1b20d0;
        }
    }
    ctx->pc = 0x1B20C8u;
label_1b20c8:
    // 0x1b20c8: 0x8c420314  lw          $v0, 0x314($v0)
    ctx->pc = 0x1b20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 788)));
label_1b20cc:
    // 0x1b20cc: 0xae020314  sw          $v0, 0x314($s0)
    ctx->pc = 0x1b20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 2));
label_1b20d0:
    // 0x1b20d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b20d4:
    // 0x1b20d4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_1b20d8:
    if (ctx->pc == 0x1B20D8u) {
        ctx->pc = 0x1B20D8u;
            // 0x1b20d8: 0xae020310  sw          $v0, 0x310($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
        ctx->pc = 0x1B20DCu;
        goto label_1b20dc;
    }
    ctx->pc = 0x1B20D4u;
    {
        const bool branch_taken_0x1b20d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B20D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20D4u;
            // 0x1b20d8: 0xae020310  sw          $v0, 0x310($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20d4) {
            ctx->pc = 0x1B20ECu;
            goto label_1b20ec;
        }
    }
    ctx->pc = 0x1B20DCu;
label_1b20dc:
    // 0x1b20dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b20dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b20e0:
    // 0x1b20e0: 0xc06c4fc  jal         func_1B13F0
label_1b20e4:
    if (ctx->pc == 0x1B20E4u) {
        ctx->pc = 0x1B20E4u;
            // 0x1b20e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B20E8u;
        goto label_1b20e8;
    }
    ctx->pc = 0x1B20E0u;
    SET_GPR_U32(ctx, 31, 0x1B20E8u);
    ctx->pc = 0x1B20E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20E0u;
            // 0x1b20e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B13F0u;
    if (runtime->hasFunction(0x1B13F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B13F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20E8u; }
        if (ctx->pc != 0x1B20E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSameParts__8CEditMapFi_0x1b13f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20E8u; }
        if (ctx->pc != 0x1B20E8u) { return; }
    }
    ctx->pc = 0x1B20E8u;
label_1b20e8:
    // 0x1b20e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b20e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1b20ec:
    // 0x1b20ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b20f0:
    // 0x1b20f0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b20f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1b20f4:
    // 0x1b20f4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1b20f8:
    if (ctx->pc == 0x1B20F8u) {
        ctx->pc = 0x1B20F8u;
            // 0x1b20f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B20FCu;
        goto label_1b20fc;
    }
    ctx->pc = 0x1B20F4u;
    {
        const bool branch_taken_0x1b20f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B20F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20F4u;
            // 0x1b20f8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20f4) {
            ctx->pc = 0x1B2158u;
            goto label_1b2158;
        }
    }
    ctx->pc = 0x1B20FCu;
label_1b20fc:
    // 0x1b20fc: 0xc0bb8a0  jal         func_2EE280
label_1b2100:
    if (ctx->pc == 0x1B2100u) {
        ctx->pc = 0x1B2100u;
            // 0x1b2100: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2104u;
        goto label_1b2104;
    }
    ctx->pc = 0x1B20FCu;
    SET_GPR_U32(ctx, 31, 0x1B2104u);
    ctx->pc = 0x1B2100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20FCu;
            // 0x1b2100: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE280u;
    if (runtime->hasFunction(0x2EE280u)) {
        auto targetFn = runtime->lookupFunction(0x2EE280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2104u; }
        if (ctx->pc != 0x1B2104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRiverParts__8CEditMapFPf_0x2ee280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2104u; }
        if (ctx->pc != 0x1B2104u) { return; }
    }
    ctx->pc = 0x1B2104u;
label_1b2104:
    // 0x1b2104: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1b2108:
    if (ctx->pc == 0x1B2108u) {
        ctx->pc = 0x1B2108u;
            // 0x1b2108: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B210Cu;
        goto label_1b210c;
    }
    ctx->pc = 0x1B2104u;
    {
        const bool branch_taken_0x1b2104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2104u;
            // 0x1b2108: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2104) {
            ctx->pc = 0x1B2148u;
            goto label_1b2148;
        }
    }
    ctx->pc = 0x1B210Cu;
label_1b210c:
    // 0x1b210c: 0xc0a59ec  jal         func_2967B0
label_1b2110:
    if (ctx->pc == 0x1B2110u) {
        ctx->pc = 0x1B2110u;
            // 0x1b2110: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2114u;
        goto label_1b2114;
    }
    ctx->pc = 0x1B210Cu;
    SET_GPR_U32(ctx, 31, 0x1B2114u);
    ctx->pc = 0x1B2110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B210Cu;
            // 0x1b2110: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2967B0u;
    if (runtime->hasFunction(0x2967B0u)) {
        auto targetFn = runtime->lookupFunction(0x2967B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2114u; }
        if (ctx->pc != 0x1B2114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceRiver__8CEditMapFPf_0x2967b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2114u; }
        if (ctx->pc != 0x1B2114u) { return; }
    }
    ctx->pc = 0x1B2114u;
label_1b2114:
    // 0x1b2114: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b2118:
    // 0x1b2118: 0x3c02c61c  lui         $v0, 0xC61C
    ctx->pc = 0x1b2118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50716 << 16));
label_1b211c:
    // 0x1b211c: 0xae030310  sw          $v1, 0x310($s0)
    ctx->pc = 0x1b211cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 3));
label_1b2120:
    // 0x1b2120: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1b2120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1b2124:
    // 0x1b2124: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b2124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2128:
    // 0x1b2128: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b212c:
    // 0x1b212c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b212cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2130:
    // 0x1b2130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2134:
    // 0x1b2134: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1b2134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1b2138:
    // 0x1b2138: 0x320f809  jalr        $t9
label_1b213c:
    if (ctx->pc == 0x1B213Cu) {
        ctx->pc = 0x1B213Cu;
            // 0x1b213c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B2140u;
        goto label_1b2140;
    }
    ctx->pc = 0x1B2138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B2140u);
        ctx->pc = 0x1B213Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2138u;
            // 0x1b213c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2140u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2140u; }
            if (ctx->pc != 0x1B2140u) { return; }
        }
        }
    }
    ctx->pc = 0x1B2140u;
label_1b2140:
    // 0x1b2140: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b2144:
    if (ctx->pc == 0x1B2144u) {
        ctx->pc = 0x1B2144u;
            // 0x1b2144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2148u;
        goto label_1b2148;
    }
    ctx->pc = 0x1B2140u;
    {
        const bool branch_taken_0x1b2140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2140u;
            // 0x1b2144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2140) {
            ctx->pc = 0x1B2150u;
            goto label_1b2150;
        }
    }
    ctx->pc = 0x1B2148u;
label_1b2148:
    // 0x1b2148: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x1b2148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
label_1b214c:
    // 0x1b214c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b214cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2150:
    // 0x1b2150: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b2154:
    if (ctx->pc == 0x1B2154u) {
        ctx->pc = 0x1B2158u;
        goto label_1b2158;
    }
    ctx->pc = 0x1B2150u;
    {
        const bool branch_taken_0x1b2150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2150) {
            ctx->pc = 0x1B21A4u;
            goto label_1b21a4;
        }
    }
    ctx->pc = 0x1B2158u;
label_1b2158:
    // 0x1b2158: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b2158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b215c:
    // 0x1b215c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b2160:
    // 0x1b2160: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b2160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b2164:
    // 0x1b2164: 0x320f809  jalr        $t9
label_1b2168:
    if (ctx->pc == 0x1B2168u) {
        ctx->pc = 0x1B2168u;
            // 0x1b2168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B216Cu;
        goto label_1b216c;
    }
    ctx->pc = 0x1B2164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B216Cu);
        ctx->pc = 0x1B2168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2164u;
            // 0x1b2168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B216Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B216Cu; }
            if (ctx->pc != 0x1B216Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B216Cu;
label_1b216c:
    // 0x1b216c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b216cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2170:
    // 0x1b2170: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b2170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b2174:
    // 0x1b2174: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b2174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b2178:
    // 0x1b2178: 0x320f809  jalr        $t9
label_1b217c:
    if (ctx->pc == 0x1B217Cu) {
        ctx->pc = 0x1B217Cu;
            // 0x1b217c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2180u;
        goto label_1b2180;
    }
    ctx->pc = 0x1B2178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B2180u);
        ctx->pc = 0x1B217Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2178u;
            // 0x1b217c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B2180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B2180u; }
            if (ctx->pc != 0x1B2180u) { return; }
        }
        }
    }
    ctx->pc = 0x1B2180u;
label_1b2180:
    // 0x1b2180: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b2180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2184:
    // 0x1b2184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2188:
    // 0x1b2188: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b218c:
    // 0x1b218c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2190:
    // 0x1b2190: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b2190u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b2194:
    // 0x1b2194: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1b2194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1b2198:
    // 0x1b2198: 0x320f809  jalr        $t9
label_1b219c:
    if (ctx->pc == 0x1B219Cu) {
        ctx->pc = 0x1B219Cu;
            // 0x1b219c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B21A0u;
        goto label_1b21a0;
    }
    ctx->pc = 0x1B2198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B21A0u);
        ctx->pc = 0x1B219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2198u;
            // 0x1b219c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B21A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B21A0u; }
            if (ctx->pc != 0x1B21A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B21A0u;
label_1b21a0:
    // 0x1b21a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b21a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b21a4:
    // 0x1b21a4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b21a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b21a8:
    // 0x1b21a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b21a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b21ac:
    // 0x1b21ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b21acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b21b0:
    // 0x1b21b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b21b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b21b4:
    // 0x1b21b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b21b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b21b8:
    // 0x1b21b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b21b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b21bc:
    // 0x1b21bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b21bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b21c0:
    // 0x1b21c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b21c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b21c4:
    // 0x1b21c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b21c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b21c8:
    // 0x1b21c8: 0x3e00008  jr          $ra
label_1b21cc:
    if (ctx->pc == 0x1B21CCu) {
        ctx->pc = 0x1B21CCu;
            // 0x1b21cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1B21D0u;
        goto label_fallthrough_0x1b21c8;
    }
    ctx->pc = 0x1B21C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B21CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21C8u;
            // 0x1b21cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b21c8:
    ctx->pc = 0x1B21D0u;
}
