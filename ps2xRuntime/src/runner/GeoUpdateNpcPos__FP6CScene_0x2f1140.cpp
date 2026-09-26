#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GeoUpdateNpcPos__FP6CScene
// Address: 0x2f1140 - 0x2f12c8
void GeoUpdateNpcPos__FP6CScene_0x2f1140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeoUpdateNpcPos__FP6CScene_0x2f1140");
#endif

    switch (ctx->pc) {
        case 0x2f1140u: goto label_2f1140;
        case 0x2f1144u: goto label_2f1144;
        case 0x2f1148u: goto label_2f1148;
        case 0x2f114cu: goto label_2f114c;
        case 0x2f1150u: goto label_2f1150;
        case 0x2f1154u: goto label_2f1154;
        case 0x2f1158u: goto label_2f1158;
        case 0x2f115cu: goto label_2f115c;
        case 0x2f1160u: goto label_2f1160;
        case 0x2f1164u: goto label_2f1164;
        case 0x2f1168u: goto label_2f1168;
        case 0x2f116cu: goto label_2f116c;
        case 0x2f1170u: goto label_2f1170;
        case 0x2f1174u: goto label_2f1174;
        case 0x2f1178u: goto label_2f1178;
        case 0x2f117cu: goto label_2f117c;
        case 0x2f1180u: goto label_2f1180;
        case 0x2f1184u: goto label_2f1184;
        case 0x2f1188u: goto label_2f1188;
        case 0x2f118cu: goto label_2f118c;
        case 0x2f1190u: goto label_2f1190;
        case 0x2f1194u: goto label_2f1194;
        case 0x2f1198u: goto label_2f1198;
        case 0x2f119cu: goto label_2f119c;
        case 0x2f11a0u: goto label_2f11a0;
        case 0x2f11a4u: goto label_2f11a4;
        case 0x2f11a8u: goto label_2f11a8;
        case 0x2f11acu: goto label_2f11ac;
        case 0x2f11b0u: goto label_2f11b0;
        case 0x2f11b4u: goto label_2f11b4;
        case 0x2f11b8u: goto label_2f11b8;
        case 0x2f11bcu: goto label_2f11bc;
        case 0x2f11c0u: goto label_2f11c0;
        case 0x2f11c4u: goto label_2f11c4;
        case 0x2f11c8u: goto label_2f11c8;
        case 0x2f11ccu: goto label_2f11cc;
        case 0x2f11d0u: goto label_2f11d0;
        case 0x2f11d4u: goto label_2f11d4;
        case 0x2f11d8u: goto label_2f11d8;
        case 0x2f11dcu: goto label_2f11dc;
        case 0x2f11e0u: goto label_2f11e0;
        case 0x2f11e4u: goto label_2f11e4;
        case 0x2f11e8u: goto label_2f11e8;
        case 0x2f11ecu: goto label_2f11ec;
        case 0x2f11f0u: goto label_2f11f0;
        case 0x2f11f4u: goto label_2f11f4;
        case 0x2f11f8u: goto label_2f11f8;
        case 0x2f11fcu: goto label_2f11fc;
        case 0x2f1200u: goto label_2f1200;
        case 0x2f1204u: goto label_2f1204;
        case 0x2f1208u: goto label_2f1208;
        case 0x2f120cu: goto label_2f120c;
        case 0x2f1210u: goto label_2f1210;
        case 0x2f1214u: goto label_2f1214;
        case 0x2f1218u: goto label_2f1218;
        case 0x2f121cu: goto label_2f121c;
        case 0x2f1220u: goto label_2f1220;
        case 0x2f1224u: goto label_2f1224;
        case 0x2f1228u: goto label_2f1228;
        case 0x2f122cu: goto label_2f122c;
        case 0x2f1230u: goto label_2f1230;
        case 0x2f1234u: goto label_2f1234;
        case 0x2f1238u: goto label_2f1238;
        case 0x2f123cu: goto label_2f123c;
        case 0x2f1240u: goto label_2f1240;
        case 0x2f1244u: goto label_2f1244;
        case 0x2f1248u: goto label_2f1248;
        case 0x2f124cu: goto label_2f124c;
        case 0x2f1250u: goto label_2f1250;
        case 0x2f1254u: goto label_2f1254;
        case 0x2f1258u: goto label_2f1258;
        case 0x2f125cu: goto label_2f125c;
        case 0x2f1260u: goto label_2f1260;
        case 0x2f1264u: goto label_2f1264;
        case 0x2f1268u: goto label_2f1268;
        case 0x2f126cu: goto label_2f126c;
        case 0x2f1270u: goto label_2f1270;
        case 0x2f1274u: goto label_2f1274;
        case 0x2f1278u: goto label_2f1278;
        case 0x2f127cu: goto label_2f127c;
        case 0x2f1280u: goto label_2f1280;
        case 0x2f1284u: goto label_2f1284;
        case 0x2f1288u: goto label_2f1288;
        case 0x2f128cu: goto label_2f128c;
        case 0x2f1290u: goto label_2f1290;
        case 0x2f1294u: goto label_2f1294;
        case 0x2f1298u: goto label_2f1298;
        case 0x2f129cu: goto label_2f129c;
        case 0x2f12a0u: goto label_2f12a0;
        case 0x2f12a4u: goto label_2f12a4;
        case 0x2f12a8u: goto label_2f12a8;
        case 0x2f12acu: goto label_2f12ac;
        case 0x2f12b0u: goto label_2f12b0;
        case 0x2f12b4u: goto label_2f12b4;
        case 0x2f12b8u: goto label_2f12b8;
        case 0x2f12bcu: goto label_2f12bc;
        case 0x2f12c0u: goto label_2f12c0;
        case 0x2f12c4u: goto label_2f12c4;
        default: break;
    }

    ctx->pc = 0x2f1140u;

label_2f1140:
    // 0x2f1140: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f1140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2f1144:
    // 0x2f1144: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f1144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2f1148:
    // 0x2f1148: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f1148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f114c:
    // 0x2f114c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f1150:
    // 0x2f1150: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f1150u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f1154:
    // 0x2f1154: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f1154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f1158:
    // 0x2f1158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f115c:
    // 0x2f115c: 0xc0a0f80  jal         func_283E00
label_2f1160:
    if (ctx->pc == 0x2F1160u) {
        ctx->pc = 0x2F1160u;
            // 0x2f1160: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2F1164u;
        goto label_2f1164;
    }
    ctx->pc = 0x2F115Cu;
    SET_GPR_U32(ctx, 31, 0x2F1164u);
    ctx->pc = 0x2F1160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F115Cu;
            // 0x2f1160: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1164u; }
        if (ctx->pc != 0x2F1164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1164u; }
        if (ctx->pc != 0x2F1164u) { return; }
    }
    ctx->pc = 0x2F1164u;
label_2f1164:
    // 0x2f1164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1168:
    // 0x2f1168: 0x1443004f  bne         $v0, $v1, . + 4 + (0x4F << 2)
label_2f116c:
    if (ctx->pc == 0x2F116Cu) {
        ctx->pc = 0x2F1170u;
        goto label_2f1170;
    }
    ctx->pc = 0x2F1168u;
    {
        const bool branch_taken_0x2f1168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f1168) {
            ctx->pc = 0x2F12A8u;
            goto label_2f12a8;
        }
    }
    ctx->pc = 0x2F1170u;
label_2f1170:
    // 0x2f1170: 0x8e852e5c  lw          $a1, 0x2E5C($s4)
    ctx->pc = 0x2f1170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11868)));
label_2f1174:
    // 0x2f1174: 0xc0a0f58  jal         func_283D60
label_2f1178:
    if (ctx->pc == 0x2F1178u) {
        ctx->pc = 0x2F1178u;
            // 0x2f1178: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F117Cu;
        goto label_2f117c;
    }
    ctx->pc = 0x2F1174u;
    SET_GPR_U32(ctx, 31, 0x2F117Cu);
    ctx->pc = 0x2F1178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1174u;
            // 0x2f1178: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F117Cu; }
        if (ctx->pc != 0x2F117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F117Cu; }
        if (ctx->pc != 0x2F117Cu) { return; }
    }
    ctx->pc = 0x2F117Cu;
label_2f117c:
    // 0x2f117c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f117cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1180:
    // 0x2f1180: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
label_2f1184:
    if (ctx->pc == 0x2F1184u) {
        ctx->pc = 0x2F1184u;
            // 0x2f1184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F1188u;
        goto label_2f1188;
    }
    ctx->pc = 0x2F1180u;
    {
        const bool branch_taken_0x2f1180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1180u;
            // 0x2f1184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1180) {
            ctx->pc = 0x2F12A8u;
            goto label_2f12a8;
        }
    }
    ctx->pc = 0x2F1188u;
label_2f1188:
    // 0x2f1188: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x2f1188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_2f118c:
    // 0x2f118c: 0x27a600dc  addiu       $a2, $sp, 0xDC
    ctx->pc = 0x2f118cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_2f1190:
    // 0x2f1190: 0xc0bb9dc  jal         func_2EE770
label_2f1194:
    if (ctx->pc == 0x2F1194u) {
        ctx->pc = 0x2F1194u;
            // 0x2f1194: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F1198u;
        goto label_2f1198;
    }
    ctx->pc = 0x2F1190u;
    SET_GPR_U32(ctx, 31, 0x2F1198u);
    ctx->pc = 0x2F1194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1190u;
            // 0x2f1194: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1198u; }
        if (ctx->pc != 0x2F1198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1198u; }
        if (ctx->pc != 0x2F1198u) { return; }
    }
    ctx->pc = 0x2F1198u;
label_2f1198:
    // 0x2f1198: 0x18400043  blez        $v0, . + 4 + (0x43 << 2)
label_2f119c:
    if (ctx->pc == 0x2F119Cu) {
        ctx->pc = 0x2F11A0u;
        goto label_2f11a0;
    }
    ctx->pc = 0x2F1198u;
    {
        const bool branch_taken_0x2f1198 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2f1198) {
            ctx->pc = 0x2F12A8u;
            goto label_2f12a8;
        }
    }
    ctx->pc = 0x2F11A0u;
label_2f11a0:
    // 0x2f11a0: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x2f11a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2f11a4:
    // 0x2f11a4: 0xc06c310  jal         func_1B0C40
label_2f11a8:
    if (ctx->pc == 0x2F11A8u) {
        ctx->pc = 0x2F11A8u;
            // 0x2f11a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F11ACu;
        goto label_2f11ac;
    }
    ctx->pc = 0x2F11A4u;
    SET_GPR_U32(ctx, 31, 0x2F11ACu);
    ctx->pc = 0x2F11A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11A4u;
            // 0x2f11a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F11ACu; }
        if (ctx->pc != 0x2F11ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F11ACu; }
        if (ctx->pc != 0x2F11ACu) { return; }
    }
    ctx->pc = 0x2F11ACu;
label_2f11ac:
    // 0x2f11ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f11acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f11b0:
    // 0x2f11b0: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
label_2f11b4:
    if (ctx->pc == 0x2F11B4u) {
        ctx->pc = 0x2F11B4u;
            // 0x2f11b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F11B8u;
        goto label_2f11b8;
    }
    ctx->pc = 0x2F11B0u;
    {
        const bool branch_taken_0x2f11b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11B0u;
            // 0x2f11b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11b0) {
            ctx->pc = 0x2F12A8u;
            goto label_2f12a8;
        }
    }
    ctx->pc = 0x2F11B8u;
label_2f11b8:
    // 0x2f11b8: 0xc06d69c  jal         func_1B5A70
label_2f11bc:
    if (ctx->pc == 0x2F11BCu) {
        ctx->pc = 0x2F11C0u;
        goto label_2f11c0;
    }
    ctx->pc = 0x2F11B8u;
    SET_GPR_U32(ctx, 31, 0x2F11C0u);
    ctx->pc = 0x1B5A70u;
    if (runtime->hasFunction(0x1B5A70u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F11C0u; }
        if (ctx->pc != 0x2F11C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLiveNPC__10CEditPartsFv_0x1b5a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F11C0u; }
        if (ctx->pc != 0x2F11C0u) { return; }
    }
    ctx->pc = 0x2F11C0u;
label_2f11c0:
    // 0x2f11c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f11c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f11c4:
    // 0x2f11c4: 0xc0b25f0  jal         func_2C97C0
label_2f11c8:
    if (ctx->pc == 0x2F11C8u) {
        ctx->pc = 0x2F11C8u;
            // 0x2f11c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F11CCu;
        goto label_2f11cc;
    }
    ctx->pc = 0x2F11C4u;
    SET_GPR_U32(ctx, 31, 0x2F11CCu);
    ctx->pc = 0x2F11C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11C4u;
            // 0x2f11c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C97C0u;
    if (runtime->hasFunction(0x2C97C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C97C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F11CCu; }
        if (ctx->pc != 0x2F11CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchCharaID__6CSceneFi_0x2c97c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F11CCu; }
        if (ctx->pc != 0x2F11CCu) { return; }
    }
    ctx->pc = 0x2F11CCu;
label_2f11cc:
    // 0x2f11cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f11ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f11d0:
    // 0x2f11d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f11d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f11d4:
    // 0x2f11d4: 0xc0a0ed8  jal         func_283B60
label_2f11d8:
    if (ctx->pc == 0x2F11D8u) {
        ctx->pc = 0x2F11D8u;
            // 0x2f11d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F11DCu;
        goto label_2f11dc;
    }
    ctx->pc = 0x2F11D4u;
    SET_GPR_U32(ctx, 31, 0x2F11DCu);
    ctx->pc = 0x2F11D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11D4u;
            // 0x2f11d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F11DCu; }
        if (ctx->pc != 0x2F11DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F11DCu; }
        if (ctx->pc != 0x2F11DCu) { return; }
    }
    ctx->pc = 0x2F11DCu;
label_2f11dc:
    // 0x2f11dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f11dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2f11e0:
    // 0x2f11e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f11e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f11e4:
    // 0x2f11e4: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x2f11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
label_2f11e8:
    // 0x2f11e8: 0xc0a763c  jal         func_29D8F0
label_2f11ec:
    if (ctx->pc == 0x2F11ECu) {
        ctx->pc = 0x2F11ECu;
            // 0x2f11ec: 0x24a51680  addiu       $a1, $a1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5760));
        ctx->pc = 0x2F11F0u;
        goto label_2f11f0;
    }
    ctx->pc = 0x2F11E8u;
    SET_GPR_U32(ctx, 31, 0x2F11F0u);
    ctx->pc = 0x2F11ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11E8u;
            // 0x2f11ec: 0x24a51680  addiu       $a1, $a1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F11F0u; }
        if (ctx->pc != 0x2F11F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F11F0u; }
        if (ctx->pc != 0x2F11F0u) { return; }
    }
    ctx->pc = 0x2F11F0u;
label_2f11f0:
    // 0x2f11f0: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
label_2f11f4:
    if (ctx->pc == 0x2F11F4u) {
        ctx->pc = 0x2F11F4u;
            // 0x2f11f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F11F8u;
        goto label_2f11f8;
    }
    ctx->pc = 0x2F11F0u;
    {
        const bool branch_taken_0x2f11f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11F0u;
            // 0x2f11f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11f0) {
            ctx->pc = 0x2F12A8u;
            goto label_2f12a8;
        }
    }
    ctx->pc = 0x2F11F8u;
label_2f11f8:
    // 0x2f11f8: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
label_2f11fc:
    if (ctx->pc == 0x2F11FCu) {
        ctx->pc = 0x2F11FCu;
            // 0x2f11fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F1200u;
        goto label_2f1200;
    }
    ctx->pc = 0x2F11F8u;
    {
        const bool branch_taken_0x2f11f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F11FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F11F8u;
            // 0x2f11fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11f8) {
            ctx->pc = 0x2F12A8u;
            goto label_2f12a8;
        }
    }
    ctx->pc = 0x2F1200u;
label_2f1200:
    // 0x2f1200: 0xc0b2bb8  jal         func_2CAEE0
label_2f1204:
    if (ctx->pc == 0x2F1204u) {
        ctx->pc = 0x2F1204u;
            // 0x2f1204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F1208u;
        goto label_2f1208;
    }
    ctx->pc = 0x2F1200u;
    SET_GPR_U32(ctx, 31, 0x2F1208u);
    ctx->pc = 0x2F1204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1200u;
            // 0x2f1204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAEE0u;
    if (runtime->hasFunction(0x2CAEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2CAEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1208u; }
        if (ctx->pc != 0x2F1208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StayVillager__6CSceneFi_0x2caee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1208u; }
        if (ctx->pc != 0x2F1208u) { return; }
    }
    ctx->pc = 0x2F1208u;
label_2f1208:
    // 0x2f1208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f120c:
    // 0x2f120c: 0xc059cc0  jal         func_167300
label_2f1210:
    if (ctx->pc == 0x2F1210u) {
        ctx->pc = 0x2F1210u;
            // 0x2f1210: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2F1214u;
        goto label_2f1214;
    }
    ctx->pc = 0x2F120Cu;
    SET_GPR_U32(ctx, 31, 0x2F1214u);
    ctx->pc = 0x2F1210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F120Cu;
            // 0x2f1210: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1214u; }
        if (ctx->pc != 0x2F1214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1214u; }
        if (ctx->pc != 0x2F1214u) { return; }
    }
    ctx->pc = 0x2F1214u;
label_2f1214:
    // 0x2f1214: 0x7a630180  lq          $v1, 0x180($s3)
    ctx->pc = 0x2f1214u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 384)));
label_2f1218:
    // 0x2f1218: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f1218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f121c:
    // 0x2f121c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f1220:
    // 0x2f1220: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2f1220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f1224:
    // 0x2f1224: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f1224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f1228:
    // 0x2f1228: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2f1228u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2f122c:
    // 0x2f122c: 0xc041bb0  jal         func_106EC0
label_2f1230:
    if (ctx->pc == 0x2F1230u) {
        ctx->pc = 0x2F1230u;
            // 0x2f1230: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x2F1234u;
        goto label_2f1234;
    }
    ctx->pc = 0x2F122Cu;
    SET_GPR_U32(ctx, 31, 0x2F1234u);
    ctx->pc = 0x2F1230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F122Cu;
            // 0x2f1230: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1234u; }
        if (ctx->pc != 0x2F1234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1234u; }
        if (ctx->pc != 0x2F1234u) { return; }
    }
    ctx->pc = 0x2F1234u;
label_2f1234:
    // 0x2f1234: 0x7a630190  lq          $v1, 0x190($s3)
    ctx->pc = 0x2f1234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 400)));
label_2f1238:
    // 0x2f1238: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2f1238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f123c:
    // 0x2f123c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f123cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1240:
    // 0x2f1240: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2f1240u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2f1244:
    // 0x2f1244: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2f1244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f1248:
    // 0x2f1248: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2f1248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2f124c:
    // 0x2f124c: 0x320f809  jalr        $t9
label_2f1250:
    if (ctx->pc == 0x2F1250u) {
        ctx->pc = 0x2F1250u;
            // 0x2f1250: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2F1254u;
        goto label_2f1254;
    }
    ctx->pc = 0x2F124Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F1254u);
        ctx->pc = 0x2F1250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F124Cu;
            // 0x2f1250: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F1254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F1254u; }
            if (ctx->pc != 0x2F1254u) { return; }
        }
        }
    }
    ctx->pc = 0x2F1254u;
label_2f1254:
    // 0x2f1254: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2f1254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_2f1258:
    // 0x2f1258: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x2f1258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_2f125c:
    // 0x2f125c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2f125cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_2f1260:
    // 0x2f1260: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2f1260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1264:
    // 0x2f1264: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2f1264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1268:
    // 0x2f1268: 0xc04c374  jal         func_130DD0
label_2f126c:
    if (ctx->pc == 0x2F126Cu) {
        ctx->pc = 0x2F126Cu;
            // 0x2f126c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2F1270u;
        goto label_2f1270;
    }
    ctx->pc = 0x2F1268u;
    SET_GPR_U32(ctx, 31, 0x2F1270u);
    ctx->pc = 0x2F126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1268u;
            // 0x2f126c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1270u; }
        if (ctx->pc != 0x2F1270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1270u; }
        if (ctx->pc != 0x2F1270u) { return; }
    }
    ctx->pc = 0x2F1270u;
label_2f1270:
    // 0x2f1270: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2f1270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2f1274:
    // 0x2f1274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1278:
    // 0x2f1278: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2f1278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f127c:
    // 0x2f127c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f127cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f1280:
    // 0x2f1280: 0x320f809  jalr        $t9
label_2f1284:
    if (ctx->pc == 0x2F1284u) {
        ctx->pc = 0x2F1284u;
            // 0x2f1284: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2F1288u;
        goto label_2f1288;
    }
    ctx->pc = 0x2F1280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F1288u);
        ctx->pc = 0x2F1284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1280u;
            // 0x2f1284: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F1288u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F1288u; }
            if (ctx->pc != 0x2F1288u) { return; }
        }
        }
    }
    ctx->pc = 0x2F1288u;
label_2f1288:
    // 0x2f1288: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2f1288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f128c:
    // 0x2f128c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1290:
    // 0x2f1290: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2f1290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2f1294:
    // 0x2f1294: 0x320f809  jalr        $t9
label_2f1298:
    if (ctx->pc == 0x2F1298u) {
        ctx->pc = 0x2F1298u;
            // 0x2f1298: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2F129Cu;
        goto label_2f129c;
    }
    ctx->pc = 0x2F1294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F129Cu);
        ctx->pc = 0x2F1298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1294u;
            // 0x2f1298: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F129Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F129Cu; }
            if (ctx->pc != 0x2F129Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F129Cu;
label_2f129c:
    // 0x2f129c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f129cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f12a0:
    // 0x2f12a0: 0xc0b2bc8  jal         func_2CAF20
label_2f12a4:
    if (ctx->pc == 0x2F12A4u) {
        ctx->pc = 0x2F12A4u;
            // 0x2f12a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F12A8u;
        goto label_2f12a8;
    }
    ctx->pc = 0x2F12A0u;
    SET_GPR_U32(ctx, 31, 0x2F12A8u);
    ctx->pc = 0x2F12A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F12A0u;
            // 0x2f12a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF20u;
    if (runtime->hasFunction(0x2CAF20u)) {
        auto targetFn = runtime->lookupFunction(0x2CAF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F12A8u; }
        if (ctx->pc != 0x2F12A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelStayVillager__6CSceneFi_0x2caf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F12A8u; }
        if (ctx->pc != 0x2F12A8u) { return; }
    }
    ctx->pc = 0x2F12A8u;
label_2f12a8:
    // 0x2f12a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f12a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f12ac:
    // 0x2f12ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f12acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f12b0:
    // 0x2f12b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f12b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f12b4:
    // 0x2f12b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f12b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f12b8:
    // 0x2f12b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f12b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f12bc:
    // 0x2f12bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f12bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f12c0:
    // 0x2f12c0: 0x3e00008  jr          $ra
label_2f12c4:
    if (ctx->pc == 0x2F12C4u) {
        ctx->pc = 0x2F12C4u;
            // 0x2f12c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2F12C8u;
        goto label_fallthrough_0x2f12c0;
    }
    ctx->pc = 0x2F12C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F12C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F12C0u;
            // 0x2f12c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f12c0:
    ctx->pc = 0x2F12C8u;
}
