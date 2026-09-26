#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckBGNPCModel__15CMenuChrCngMenuFv
// Address: 0x2b0fe0 - 0x2b12a0
void CheckBGNPCModel__15CMenuChrCngMenuFv_0x2b0fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckBGNPCModel__15CMenuChrCngMenuFv_0x2b0fe0");
#endif

    switch (ctx->pc) {
        case 0x2b0fe0u: goto label_2b0fe0;
        case 0x2b0fe4u: goto label_2b0fe4;
        case 0x2b0fe8u: goto label_2b0fe8;
        case 0x2b0fecu: goto label_2b0fec;
        case 0x2b0ff0u: goto label_2b0ff0;
        case 0x2b0ff4u: goto label_2b0ff4;
        case 0x2b0ff8u: goto label_2b0ff8;
        case 0x2b0ffcu: goto label_2b0ffc;
        case 0x2b1000u: goto label_2b1000;
        case 0x2b1004u: goto label_2b1004;
        case 0x2b1008u: goto label_2b1008;
        case 0x2b100cu: goto label_2b100c;
        case 0x2b1010u: goto label_2b1010;
        case 0x2b1014u: goto label_2b1014;
        case 0x2b1018u: goto label_2b1018;
        case 0x2b101cu: goto label_2b101c;
        case 0x2b1020u: goto label_2b1020;
        case 0x2b1024u: goto label_2b1024;
        case 0x2b1028u: goto label_2b1028;
        case 0x2b102cu: goto label_2b102c;
        case 0x2b1030u: goto label_2b1030;
        case 0x2b1034u: goto label_2b1034;
        case 0x2b1038u: goto label_2b1038;
        case 0x2b103cu: goto label_2b103c;
        case 0x2b1040u: goto label_2b1040;
        case 0x2b1044u: goto label_2b1044;
        case 0x2b1048u: goto label_2b1048;
        case 0x2b104cu: goto label_2b104c;
        case 0x2b1050u: goto label_2b1050;
        case 0x2b1054u: goto label_2b1054;
        case 0x2b1058u: goto label_2b1058;
        case 0x2b105cu: goto label_2b105c;
        case 0x2b1060u: goto label_2b1060;
        case 0x2b1064u: goto label_2b1064;
        case 0x2b1068u: goto label_2b1068;
        case 0x2b106cu: goto label_2b106c;
        case 0x2b1070u: goto label_2b1070;
        case 0x2b1074u: goto label_2b1074;
        case 0x2b1078u: goto label_2b1078;
        case 0x2b107cu: goto label_2b107c;
        case 0x2b1080u: goto label_2b1080;
        case 0x2b1084u: goto label_2b1084;
        case 0x2b1088u: goto label_2b1088;
        case 0x2b108cu: goto label_2b108c;
        case 0x2b1090u: goto label_2b1090;
        case 0x2b1094u: goto label_2b1094;
        case 0x2b1098u: goto label_2b1098;
        case 0x2b109cu: goto label_2b109c;
        case 0x2b10a0u: goto label_2b10a0;
        case 0x2b10a4u: goto label_2b10a4;
        case 0x2b10a8u: goto label_2b10a8;
        case 0x2b10acu: goto label_2b10ac;
        case 0x2b10b0u: goto label_2b10b0;
        case 0x2b10b4u: goto label_2b10b4;
        case 0x2b10b8u: goto label_2b10b8;
        case 0x2b10bcu: goto label_2b10bc;
        case 0x2b10c0u: goto label_2b10c0;
        case 0x2b10c4u: goto label_2b10c4;
        case 0x2b10c8u: goto label_2b10c8;
        case 0x2b10ccu: goto label_2b10cc;
        case 0x2b10d0u: goto label_2b10d0;
        case 0x2b10d4u: goto label_2b10d4;
        case 0x2b10d8u: goto label_2b10d8;
        case 0x2b10dcu: goto label_2b10dc;
        case 0x2b10e0u: goto label_2b10e0;
        case 0x2b10e4u: goto label_2b10e4;
        case 0x2b10e8u: goto label_2b10e8;
        case 0x2b10ecu: goto label_2b10ec;
        case 0x2b10f0u: goto label_2b10f0;
        case 0x2b10f4u: goto label_2b10f4;
        case 0x2b10f8u: goto label_2b10f8;
        case 0x2b10fcu: goto label_2b10fc;
        case 0x2b1100u: goto label_2b1100;
        case 0x2b1104u: goto label_2b1104;
        case 0x2b1108u: goto label_2b1108;
        case 0x2b110cu: goto label_2b110c;
        case 0x2b1110u: goto label_2b1110;
        case 0x2b1114u: goto label_2b1114;
        case 0x2b1118u: goto label_2b1118;
        case 0x2b111cu: goto label_2b111c;
        case 0x2b1120u: goto label_2b1120;
        case 0x2b1124u: goto label_2b1124;
        case 0x2b1128u: goto label_2b1128;
        case 0x2b112cu: goto label_2b112c;
        case 0x2b1130u: goto label_2b1130;
        case 0x2b1134u: goto label_2b1134;
        case 0x2b1138u: goto label_2b1138;
        case 0x2b113cu: goto label_2b113c;
        case 0x2b1140u: goto label_2b1140;
        case 0x2b1144u: goto label_2b1144;
        case 0x2b1148u: goto label_2b1148;
        case 0x2b114cu: goto label_2b114c;
        case 0x2b1150u: goto label_2b1150;
        case 0x2b1154u: goto label_2b1154;
        case 0x2b1158u: goto label_2b1158;
        case 0x2b115cu: goto label_2b115c;
        case 0x2b1160u: goto label_2b1160;
        case 0x2b1164u: goto label_2b1164;
        case 0x2b1168u: goto label_2b1168;
        case 0x2b116cu: goto label_2b116c;
        case 0x2b1170u: goto label_2b1170;
        case 0x2b1174u: goto label_2b1174;
        case 0x2b1178u: goto label_2b1178;
        case 0x2b117cu: goto label_2b117c;
        case 0x2b1180u: goto label_2b1180;
        case 0x2b1184u: goto label_2b1184;
        case 0x2b1188u: goto label_2b1188;
        case 0x2b118cu: goto label_2b118c;
        case 0x2b1190u: goto label_2b1190;
        case 0x2b1194u: goto label_2b1194;
        case 0x2b1198u: goto label_2b1198;
        case 0x2b119cu: goto label_2b119c;
        case 0x2b11a0u: goto label_2b11a0;
        case 0x2b11a4u: goto label_2b11a4;
        case 0x2b11a8u: goto label_2b11a8;
        case 0x2b11acu: goto label_2b11ac;
        case 0x2b11b0u: goto label_2b11b0;
        case 0x2b11b4u: goto label_2b11b4;
        case 0x2b11b8u: goto label_2b11b8;
        case 0x2b11bcu: goto label_2b11bc;
        case 0x2b11c0u: goto label_2b11c0;
        case 0x2b11c4u: goto label_2b11c4;
        case 0x2b11c8u: goto label_2b11c8;
        case 0x2b11ccu: goto label_2b11cc;
        case 0x2b11d0u: goto label_2b11d0;
        case 0x2b11d4u: goto label_2b11d4;
        case 0x2b11d8u: goto label_2b11d8;
        case 0x2b11dcu: goto label_2b11dc;
        case 0x2b11e0u: goto label_2b11e0;
        case 0x2b11e4u: goto label_2b11e4;
        case 0x2b11e8u: goto label_2b11e8;
        case 0x2b11ecu: goto label_2b11ec;
        case 0x2b11f0u: goto label_2b11f0;
        case 0x2b11f4u: goto label_2b11f4;
        case 0x2b11f8u: goto label_2b11f8;
        case 0x2b11fcu: goto label_2b11fc;
        case 0x2b1200u: goto label_2b1200;
        case 0x2b1204u: goto label_2b1204;
        case 0x2b1208u: goto label_2b1208;
        case 0x2b120cu: goto label_2b120c;
        case 0x2b1210u: goto label_2b1210;
        case 0x2b1214u: goto label_2b1214;
        case 0x2b1218u: goto label_2b1218;
        case 0x2b121cu: goto label_2b121c;
        case 0x2b1220u: goto label_2b1220;
        case 0x2b1224u: goto label_2b1224;
        case 0x2b1228u: goto label_2b1228;
        case 0x2b122cu: goto label_2b122c;
        case 0x2b1230u: goto label_2b1230;
        case 0x2b1234u: goto label_2b1234;
        case 0x2b1238u: goto label_2b1238;
        case 0x2b123cu: goto label_2b123c;
        case 0x2b1240u: goto label_2b1240;
        case 0x2b1244u: goto label_2b1244;
        case 0x2b1248u: goto label_2b1248;
        case 0x2b124cu: goto label_2b124c;
        case 0x2b1250u: goto label_2b1250;
        case 0x2b1254u: goto label_2b1254;
        case 0x2b1258u: goto label_2b1258;
        case 0x2b125cu: goto label_2b125c;
        case 0x2b1260u: goto label_2b1260;
        case 0x2b1264u: goto label_2b1264;
        case 0x2b1268u: goto label_2b1268;
        case 0x2b126cu: goto label_2b126c;
        case 0x2b1270u: goto label_2b1270;
        case 0x2b1274u: goto label_2b1274;
        case 0x2b1278u: goto label_2b1278;
        case 0x2b127cu: goto label_2b127c;
        case 0x2b1280u: goto label_2b1280;
        case 0x2b1284u: goto label_2b1284;
        case 0x2b1288u: goto label_2b1288;
        case 0x2b128cu: goto label_2b128c;
        case 0x2b1290u: goto label_2b1290;
        case 0x2b1294u: goto label_2b1294;
        case 0x2b1298u: goto label_2b1298;
        case 0x2b129cu: goto label_2b129c;
        default: break;
    }

    ctx->pc = 0x2b0fe0u;

label_2b0fe0:
    // 0x2b0fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b0fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b0fe4:
    // 0x2b0fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b0fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b0fe8:
    // 0x2b0fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b0fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b0fec:
    // 0x2b0fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b0ff0:
    // 0x2b0ff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b0ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ff4:
    // 0x2b0ff4: 0xc05239c  jal         func_148E70
label_2b0ff8:
    if (ctx->pc == 0x2B0FF8u) {
        ctx->pc = 0x2B0FF8u;
            // 0x2b0ff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FFCu;
        goto label_2b0ffc;
    }
    ctx->pc = 0x2B0FF4u;
    SET_GPR_U32(ctx, 31, 0x2B0FFCu);
    ctx->pc = 0x2B0FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0FF4u;
            // 0x2b0ff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0FFCu; }
        if (ctx->pc != 0x2B0FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0FFCu; }
        if (ctx->pc != 0x2B0FFCu) { return; }
    }
    ctx->pc = 0x2B0FFCu;
label_2b0ffc:
    // 0x2b0ffc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2b1000:
    if (ctx->pc == 0x2B1000u) {
        ctx->pc = 0x2B1004u;
        goto label_2b1004;
    }
    ctx->pc = 0x2B0FFCu;
    {
        const bool branch_taken_0x2b0ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0ffc) {
            ctx->pc = 0x2B1018u;
            goto label_2b1018;
        }
    }
    ctx->pc = 0x2B1004u;
label_2b1004:
    // 0x2b1004: 0x8e24020c  lw          $a0, 0x20C($s1)
    ctx->pc = 0x2b1004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_2b1008:
    // 0x2b1008: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x2b1008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b100c:
    // 0x2b100c: 0xc0af108  jal         func_2BC420
label_2b1010:
    if (ctx->pc == 0x2B1010u) {
        ctx->pc = 0x2B1010u;
            // 0x2b1010: 0x262501c4  addiu       $a1, $s1, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
        ctx->pc = 0x2B1014u;
        goto label_2b1014;
    }
    ctx->pc = 0x2B100Cu;
    SET_GPR_U32(ctx, 31, 0x2B1014u);
    ctx->pc = 0x2B1010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B100Cu;
            // 0x2b1010: 0x262501c4  addiu       $a1, $s1, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC420u;
    if (runtime->hasFunction(0x2BC420u)) {
        auto targetFn = runtime->lookupFunction(0x2BC420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1014u; }
        if (ctx->pc != 0x2B1014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuNPCLoadCheck__FP12CActionCharaP9mgCMemoryi_0x2bc420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1014u; }
        if (ctx->pc != 0x2B1014u) { return; }
    }
    ctx->pc = 0x2B1014u;
label_2b1014:
    // 0x2b1014: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1018:
    // 0x2b1018: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x2b1018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_2b101c:
    // 0x2b101c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b1020:
    if (ctx->pc == 0x2B1020u) {
        ctx->pc = 0x2B1020u;
            // 0x2b1020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B1024u;
        goto label_2b1024;
    }
    ctx->pc = 0x2B101Cu;
    {
        const bool branch_taken_0x2b101c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B101Cu;
            // 0x2b1020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b101c) {
            ctx->pc = 0x2B102Cu;
            goto label_2b102c;
        }
    }
    ctx->pc = 0x2B1024u;
label_2b1024:
    // 0x2b1024: 0x1000009a  b           . + 4 + (0x9A << 2)
label_2b1028:
    if (ctx->pc == 0x2B1028u) {
        ctx->pc = 0x2B1028u;
            // 0x2b1028: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2B102Cu;
        goto label_2b102c;
    }
    ctx->pc = 0x2B1024u;
    {
        const bool branch_taken_0x2b1024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1024u;
            // 0x2b1028: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1024) {
            ctx->pc = 0x2B1290u;
            goto label_2b1290;
        }
    }
    ctx->pc = 0x2B102Cu;
label_2b102c:
    // 0x2b102c: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x2b102cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_2b1030:
    // 0x2b1030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b1030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b1034:
    // 0x2b1034: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_2b1038:
    if (ctx->pc == 0x2B1038u) {
        ctx->pc = 0x2B103Cu;
        goto label_2b103c;
    }
    ctx->pc = 0x2B1034u;
    {
        const bool branch_taken_0x2b1034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1034) {
            ctx->pc = 0x2B1070u;
            goto label_2b1070;
        }
    }
    ctx->pc = 0x2B103Cu;
label_2b103c:
    // 0x2b103c: 0xc6220218  lwc1        $f2, 0x218($s1)
    ctx->pc = 0x2b103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b1040:
    // 0x2b1040: 0x3c02c033  lui         $v0, 0xC033
    ctx->pc = 0x2b1040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49203 << 16));
label_2b1044:
    // 0x2b1044: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x2b1044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2b1048:
    // 0x2b1048: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b1048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b104c:
    // 0x2b104c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2b104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2b1050:
    // 0x2b1050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b1054:
    // 0x2b1054: 0x0  nop
    ctx->pc = 0x2b1054u;
    // NOP
label_2b1058:
    // 0x2b1058: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2b1058u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2b105c:
    // 0x2b105c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b105cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2b1060:
    // 0x2b1060: 0x0  nop
    ctx->pc = 0x2b1060u;
    // NOP
label_2b1064:
    // 0x2b1064: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2b1064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b1068:
    // 0x2b1068: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b106c:
    if (ctx->pc == 0x2B106Cu) {
        ctx->pc = 0x2B106Cu;
            // 0x2b106c: 0xe6200218  swc1        $f0, 0x218($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
        ctx->pc = 0x2B1070u;
        goto label_2b1070;
    }
    ctx->pc = 0x2B1068u;
    {
        const bool branch_taken_0x2b1068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1068u;
            // 0x2b106c: 0xe6200218  swc1        $f0, 0x218($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1068) {
            ctx->pc = 0x2B109Cu;
            goto label_2b109c;
        }
    }
    ctx->pc = 0x2B1070u;
label_2b1070:
    // 0x2b1070: 0xc6220218  lwc1        $f2, 0x218($s1)
    ctx->pc = 0x2b1070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b1074:
    // 0x2b1074: 0x3c02c184  lui         $v0, 0xC184
    ctx->pc = 0x2b1074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49540 << 16));
label_2b1078:
    // 0x2b1078: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2b1078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2b107c:
    // 0x2b107c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b107cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b1080:
    // 0x2b1080: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2b1080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2b1084:
    // 0x2b1084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b1088:
    // 0x2b1088: 0x0  nop
    ctx->pc = 0x2b1088u;
    // NOP
label_2b108c:
    // 0x2b108c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2b108cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2b1090:
    // 0x2b1090: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b1090u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2b1094:
    // 0x2b1094: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2b1094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b1098:
    // 0x2b1098: 0xe6200218  swc1        $f0, 0x218($s1)
    ctx->pc = 0x2b1098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
label_2b109c:
    // 0x2b109c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2b10a0:
    // 0x2b10a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2b10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b10a4:
    // 0x2b10a4: 0x24424760  addiu       $v0, $v0, 0x4760
    ctx->pc = 0x2b10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18272));
label_2b10a8:
    // 0x2b10a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b10a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2b10ac:
    // 0x2b10ac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2b10acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2b10b0:
    // 0x2b10b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b10b4:
    // 0x2b10b4: 0xc6200218  lwc1        $f0, 0x218($s1)
    ctx->pc = 0x2b10b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b10b8:
    // 0x2b10b8: 0x16020025  bne         $s0, $v0, . + 4 + (0x25 << 2)
label_2b10bc:
    if (ctx->pc == 0x2B10BCu) {
        ctx->pc = 0x2B10BCu;
            // 0x2b10bc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x2B10C0u;
        goto label_2b10c0;
    }
    ctx->pc = 0x2B10B8u;
    {
        const bool branch_taken_0x2b10b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B10BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B10B8u;
            // 0x2b10bc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10b8) {
            ctx->pc = 0x2B1150u;
            goto label_2b1150;
        }
    }
    ctx->pc = 0x2B10C0u;
label_2b10c0:
    // 0x2b10c0: 0xa2220209  sb          $v0, 0x209($s1)
    ctx->pc = 0x2b10c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 521), (uint8_t)GPR_U32(ctx, 2));
label_2b10c4:
    // 0x2b10c4: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x2b10c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_2b10c8:
    // 0x2b10c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b10cc:
    // 0x2b10cc: 0x8e24020c  lw          $a0, 0x20C($s1)
    ctx->pc = 0x2b10ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_2b10d0:
    // 0x2b10d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b10d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b10d4:
    // 0x2b10d4: 0x0  nop
    ctx->pc = 0x2b10d4u;
    // NOP
label_2b10d8:
    // 0x2b10d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b10d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2b10dc:
    // 0x2b10dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b10dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b10e0:
    // 0x2b10e0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2b10e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2b10e4:
    // 0x2b10e4: 0x320f809  jalr        $t9
label_2b10e8:
    if (ctx->pc == 0x2B10E8u) {
        ctx->pc = 0x2B10E8u;
            // 0x2b10e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2B10ECu;
        goto label_2b10ec;
    }
    ctx->pc = 0x2B10E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B10ECu);
        ctx->pc = 0x2B10E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B10E4u;
            // 0x2b10e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B10ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B10ECu; }
            if (ctx->pc != 0x2B10ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2B10ECu;
label_2b10ec:
    // 0x2b10ec: 0x8e23021c  lw          $v1, 0x21C($s1)
    ctx->pc = 0x2b10ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
label_2b10f0:
    // 0x2b10f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2b10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2b10f4:
    // 0x2b10f4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2b10f8:
    if (ctx->pc == 0x2B10F8u) {
        ctx->pc = 0x2B10FCu;
        goto label_2b10fc;
    }
    ctx->pc = 0x2B10F4u;
    {
        const bool branch_taken_0x2b10f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b10f4) {
            ctx->pc = 0x2B1114u;
            goto label_2b1114;
        }
    }
    ctx->pc = 0x2B10FCu;
label_2b10fc:
    // 0x2b10fc: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x2b10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_2b1100:
    // 0x2b1100: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b1100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b1104:
    // 0x2b1104: 0xc094234  jal         func_2508D0
label_2b1108:
    if (ctx->pc == 0x2B1108u) {
        ctx->pc = 0x2B1108u;
            // 0x2b1108: 0x8e24020c  lw          $a0, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->pc = 0x2B110Cu;
        goto label_2b110c;
    }
    ctx->pc = 0x2B1104u;
    SET_GPR_U32(ctx, 31, 0x2B110Cu);
    ctx->pc = 0x2B1108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1104u;
            // 0x2b1108: 0x8e24020c  lw          $a0, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2508D0u;
    if (runtime->hasFunction(0x2508D0u)) {
        auto targetFn = runtime->lookupFunction(0x2508D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B110Cu; }
        if (ctx->pc != 0x2B110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__FP11CCharacter2f_0x2508d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B110Cu; }
        if (ctx->pc != 0x2B110Cu) { return; }
    }
    ctx->pc = 0x2B110Cu;
label_2b110c:
    // 0x2b110c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b1110:
    if (ctx->pc == 0x2B1110u) {
        ctx->pc = 0x2B1110u;
            // 0x2b1110: 0x8e24020c  lw          $a0, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->pc = 0x2B1114u;
        goto label_2b1114;
    }
    ctx->pc = 0x2B110Cu;
    {
        const bool branch_taken_0x2b110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B110Cu;
            // 0x2b1110: 0x8e24020c  lw          $a0, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b110c) {
            ctx->pc = 0x2B1128u;
            goto label_2b1128;
        }
    }
    ctx->pc = 0x2B1114u;
label_2b1114:
    // 0x2b1114: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b1114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_2b1118:
    // 0x2b1118: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b1118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b111c:
    // 0x2b111c: 0xc094234  jal         func_2508D0
label_2b1120:
    if (ctx->pc == 0x2B1120u) {
        ctx->pc = 0x2B1120u;
            // 0x2b1120: 0x8e24020c  lw          $a0, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->pc = 0x2B1124u;
        goto label_2b1124;
    }
    ctx->pc = 0x2B111Cu;
    SET_GPR_U32(ctx, 31, 0x2B1124u);
    ctx->pc = 0x2B1120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B111Cu;
            // 0x2b1120: 0x8e24020c  lw          $a0, 0x20C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2508D0u;
    if (runtime->hasFunction(0x2508D0u)) {
        auto targetFn = runtime->lookupFunction(0x2508D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1124u; }
        if (ctx->pc != 0x2B1124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__FP11CCharacter2f_0x2508d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1124u; }
        if (ctx->pc != 0x2B1124u) { return; }
    }
    ctx->pc = 0x2B1124u;
label_2b1124:
    // 0x2b1124: 0x8e24020c  lw          $a0, 0x20C($s1)
    ctx->pc = 0x2b1124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_2b1128:
    // 0x2b1128: 0x3c02bda0  lui         $v0, 0xBDA0
    ctx->pc = 0x2b1128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48544 << 16));
label_2b112c:
    // 0x2b112c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b112cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b1130:
    // 0x2b1130: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2b1130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_2b1134:
    // 0x2b1134: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b1134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2b1138:
    // 0x2b1138: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b113c:
    // 0x2b113c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2b113cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2b1140:
    // 0x2b1140: 0x320f809  jalr        $t9
label_2b1144:
    if (ctx->pc == 0x2B1144u) {
        ctx->pc = 0x2B1144u;
            // 0x2b1144: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2B1148u;
        goto label_2b1148;
    }
    ctx->pc = 0x2B1140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1148u);
        ctx->pc = 0x2B1144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1140u;
            // 0x2b1144: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B1148u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B1148u; }
            if (ctx->pc != 0x2B1148u) { return; }
        }
        }
    }
    ctx->pc = 0x2B1148u;
label_2b1148:
    // 0x2b1148: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x2b1148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_2b114c:
    // 0x2b114c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2b114cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_2b1150:
    // 0x2b1150: 0x92220209  lbu         $v0, 0x209($s1)
    ctx->pc = 0x2b1150u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 521)));
label_2b1154:
    // 0x2b1154: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_2b1158:
    if (ctx->pc == 0x2B1158u) {
        ctx->pc = 0x2B1158u;
            // 0x2b1158: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B115Cu;
        goto label_2b115c;
    }
    ctx->pc = 0x2B1154u;
    {
        const bool branch_taken_0x2b1154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1154u;
            // 0x2b1158: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1154) {
            ctx->pc = 0x2B128Cu;
            goto label_2b128c;
        }
    }
    ctx->pc = 0x2B115Cu;
label_2b115c:
    // 0x2b115c: 0x8e24020c  lw          $a0, 0x20C($s1)
    ctx->pc = 0x2b115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_2b1160:
    // 0x2b1160: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1164:
    // 0x2b1164: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2b1164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2b1168:
    // 0x2b1168: 0x320f809  jalr        $t9
label_2b116c:
    if (ctx->pc == 0x2B116Cu) {
        ctx->pc = 0x2B116Cu;
            // 0x2b116c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B1170u;
        goto label_2b1170;
    }
    ctx->pc = 0x2B1168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1170u);
        ctx->pc = 0x2B116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1168u;
            // 0x2b116c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B1170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B1170u; }
            if (ctx->pc != 0x2B1170u) { return; }
        }
        }
    }
    ctx->pc = 0x2B1170u;
label_2b1170:
    // 0x2b1170: 0x8e24020c  lw          $a0, 0x20C($s1)
    ctx->pc = 0x2b1170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_2b1174:
    // 0x2b1174: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1178:
    // 0x2b1178: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2b1178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2b117c:
    // 0x2b117c: 0x320f809  jalr        $t9
label_2b1180:
    if (ctx->pc == 0x2B1180u) {
        ctx->pc = 0x2B1184u;
        goto label_2b1184;
    }
    ctx->pc = 0x2B117Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1184u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B1184u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B1184u; }
            if (ctx->pc != 0x2B1184u) { return; }
        }
        }
    }
    ctx->pc = 0x2B1184u;
label_2b1184:
    // 0x2b1184: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x2b1184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_2b1188:
    // 0x2b1188: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2b1188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2b118c:
    // 0x2b118c: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x2b118cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_2b1190:
    // 0x2b1190: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2b1194:
    if (ctx->pc == 0x2B1194u) {
        ctx->pc = 0x2B1198u;
        goto label_2b1198;
    }
    ctx->pc = 0x2B1190u;
    {
        const bool branch_taken_0x2b1190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1190) {
            ctx->pc = 0x2B11C4u;
            goto label_2b11c4;
        }
    }
    ctx->pc = 0x2B1198u;
label_2b1198:
    // 0x2b1198: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x2b1198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
label_2b119c:
    // 0x2b119c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2b119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2b11a0:
    // 0x2b11a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b11a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b11a4:
    // 0x2b11a4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2b11a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b11a8:
    // 0x2b11a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b11a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b11ac:
    // 0x2b11ac: 0x0  nop
    ctx->pc = 0x2b11acu;
    // NOP
label_2b11b0:
    // 0x2b11b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2b11b4:
    if (ctx->pc == 0x2B11B4u) {
        ctx->pc = 0x2B11B4u;
            // 0x2b11b4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B11B8u;
        goto label_2b11b8;
    }
    ctx->pc = 0x2B11B0u;
    {
        const bool branch_taken_0x2b11b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B11B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B11B0u;
            // 0x2b11b4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11b0) {
            ctx->pc = 0x2B11C4u;
            goto label_2b11c4;
        }
    }
    ctx->pc = 0x2B11B8u;
label_2b11b8:
    // 0x2b11b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b11b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b11bc:
    // 0x2b11bc: 0xc08e7cc  jal         func_239F30
label_2b11c0:
    if (ctx->pc == 0x2B11C0u) {
        ctx->pc = 0x2B11C0u;
            // 0x2b11c0: 0x24a5eb78  addiu       $a1, $a1, -0x1488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962040));
        ctx->pc = 0x2B11C4u;
        goto label_2b11c4;
    }
    ctx->pc = 0x2B11BCu;
    SET_GPR_U32(ctx, 31, 0x2B11C4u);
    ctx->pc = 0x2B11C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B11BCu;
            // 0x2b11c0: 0x24a5eb78  addiu       $a1, $a1, -0x1488 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B11C4u; }
        if (ctx->pc != 0x2B11C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B11C4u; }
        if (ctx->pc != 0x2B11C4u) { return; }
    }
    ctx->pc = 0x2B11C4u;
label_2b11c4:
    // 0x2b11c4: 0x8e220210  lw          $v0, 0x210($s1)
    ctx->pc = 0x2b11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_2b11c8:
    // 0x2b11c8: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x2b11c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
label_2b11cc:
    // 0x2b11cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2b11d0:
    if (ctx->pc == 0x2B11D0u) {
        ctx->pc = 0x2B11D4u;
        goto label_2b11d4;
    }
    ctx->pc = 0x2B11CCu;
    {
        const bool branch_taken_0x2b11cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b11cc) {
            ctx->pc = 0x2B11E0u;
            goto label_2b11e0;
        }
    }
    ctx->pc = 0x2B11D4u;
label_2b11d4:
    // 0x2b11d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b11d8:
    // 0x2b11d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b11dc:
    if (ctx->pc == 0x2B11DCu) {
        ctx->pc = 0x2B11DCu;
            // 0x2b11dc: 0xae220210  sw          $v0, 0x210($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 2));
        ctx->pc = 0x2B11E0u;
        goto label_2b11e0;
    }
    ctx->pc = 0x2B11D8u;
    {
        const bool branch_taken_0x2b11d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B11DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B11D8u;
            // 0x2b11dc: 0xae220210  sw          $v0, 0x210($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11d8) {
            ctx->pc = 0x2B11E8u;
            goto label_2b11e8;
        }
    }
    ctx->pc = 0x2B11E0u;
label_2b11e0:
    // 0x2b11e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b11e4:
    // 0x2b11e4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x2b11e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_2b11e8:
    // 0x2b11e8: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x2b11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_2b11ec:
    // 0x2b11ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b11f0:
    if (ctx->pc == 0x2B11F0u) {
        ctx->pc = 0x2B11F4u;
        goto label_2b11f4;
    }
    ctx->pc = 0x2B11ECu;
    {
        const bool branch_taken_0x2b11ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b11ec) {
            ctx->pc = 0x2B1208u;
            goto label_2b1208;
        }
    }
    ctx->pc = 0x2B11F4u;
label_2b11f4:
    // 0x2b11f4: 0x8e240178  lw          $a0, 0x178($s1)
    ctx->pc = 0x2b11f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_2b11f8:
    // 0x2b11f8: 0x8e25020c  lw          $a1, 0x20C($s1)
    ctx->pc = 0x2b11f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_2b11fc:
    // 0x2b11fc: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x2b11fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b1200:
    // 0x2b1200: 0xc0896c8  jal         func_225B20
label_2b1204:
    if (ctx->pc == 0x2B1204u) {
        ctx->pc = 0x2B1204u;
            // 0x2b1204: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B1208u;
        goto label_2b1208;
    }
    ctx->pc = 0x2B1200u;
    SET_GPR_U32(ctx, 31, 0x2B1208u);
    ctx->pc = 0x2B1204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1200u;
            // 0x2b1204: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1208u; }
        if (ctx->pc != 0x2B1208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1208u; }
        if (ctx->pc != 0x2B1208u) { return; }
    }
    ctx->pc = 0x2B1208u;
label_2b1208:
    // 0x2b1208: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x2b1208u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_2b120c:
    // 0x2b120c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b1210:
    // 0x2b1210: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_2b1214:
    if (ctx->pc == 0x2B1214u) {
        ctx->pc = 0x2B1218u;
        goto label_2b1218;
    }
    ctx->pc = 0x2B1210u;
    {
        const bool branch_taken_0x2b1210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b1210) {
            ctx->pc = 0x2B121Cu;
            goto label_2b121c;
        }
    }
    ctx->pc = 0x2B1218u;
label_2b1218:
    // 0x2b1218: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x2b1218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_2b121c:
    // 0x2b121c: 0x8e230140  lw          $v1, 0x140($s1)
    ctx->pc = 0x2b121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_2b1220:
    // 0x2b1220: 0x3c02c326  lui         $v0, 0xC326
    ctx->pc = 0x2b1220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49958 << 16));
label_2b1224:
    // 0x2b1224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b1228:
    // 0x2b1228: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2b1228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b122c:
    // 0x2b122c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b122cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1230:
    // 0x2b1230: 0x0  nop
    ctx->pc = 0x2b1230u;
    // NOP
label_2b1234:
    // 0x2b1234: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2b1238:
    if (ctx->pc == 0x2B1238u) {
        ctx->pc = 0x2B123Cu;
        goto label_2b123c;
    }
    ctx->pc = 0x2B1234u;
    {
        const bool branch_taken_0x2b1234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1234) {
            ctx->pc = 0x2B1240u;
            goto label_2b1240;
        }
    }
    ctx->pc = 0x2B123Cu;
label_2b123c:
    // 0x2b123c: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x2b123cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_2b1240:
    // 0x2b1240: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2b1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2b1244:
    // 0x2b1244: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b1248:
    // 0x2b1248: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_2b124c:
    if (ctx->pc == 0x2B124Cu) {
        ctx->pc = 0x2B1250u;
        goto label_2b1250;
    }
    ctx->pc = 0x2B1248u;
    {
        const bool branch_taken_0x2b1248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b1248) {
            ctx->pc = 0x2B1254u;
            goto label_2b1254;
        }
    }
    ctx->pc = 0x2B1250u;
label_2b1250:
    // 0x2b1250: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x2b1250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_2b1254:
    // 0x2b1254: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x2b1254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_2b1258:
    // 0x2b1258: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x2b1258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
label_2b125c:
    // 0x2b125c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b125cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b1260:
    // 0x2b1260: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2b1260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b1264:
    // 0x2b1264: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b1264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1268:
    // 0x2b1268: 0x0  nop
    ctx->pc = 0x2b1268u;
    // NOP
label_2b126c:
    // 0x2b126c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2b1270:
    if (ctx->pc == 0x2B1270u) {
        ctx->pc = 0x2B1274u;
        goto label_2b1274;
    }
    ctx->pc = 0x2B126Cu;
    {
        const bool branch_taken_0x2b126c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b126c) {
            ctx->pc = 0x2B1278u;
            goto label_2b1278;
        }
    }
    ctx->pc = 0x2B1274u;
label_2b1274:
    // 0x2b1274: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x2b1274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_2b1278:
    // 0x2b1278: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x2b1278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_2b127c:
    // 0x2b127c: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x2b127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_2b1280:
    // 0x2b1280: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2b1280u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2b1284:
    // 0x2b1284: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2b1284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_2b1288:
    // 0x2b1288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b1288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b128c:
    // 0x2b128c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b128cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1290:
    // 0x2b1290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b1290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1294:
    // 0x2b1294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1298:
    // 0x2b1298: 0x3e00008  jr          $ra
label_2b129c:
    if (ctx->pc == 0x2B129Cu) {
        ctx->pc = 0x2B129Cu;
            // 0x2b129c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2B12A0u;
        goto label_fallthrough_0x2b1298;
    }
    ctx->pc = 0x2B1298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1298u;
            // 0x2b129c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b1298:
    ctx->pc = 0x2B12A0u;
}
