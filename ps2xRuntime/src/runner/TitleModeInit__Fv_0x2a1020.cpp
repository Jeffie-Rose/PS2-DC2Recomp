#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleModeInit__Fv
// Address: 0x2a1020 - 0x2a1218
void TitleModeInit__Fv_0x2a1020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleModeInit__Fv_0x2a1020");
#endif

    switch (ctx->pc) {
        case 0x2a1020u: goto label_2a1020;
        case 0x2a1024u: goto label_2a1024;
        case 0x2a1028u: goto label_2a1028;
        case 0x2a102cu: goto label_2a102c;
        case 0x2a1030u: goto label_2a1030;
        case 0x2a1034u: goto label_2a1034;
        case 0x2a1038u: goto label_2a1038;
        case 0x2a103cu: goto label_2a103c;
        case 0x2a1040u: goto label_2a1040;
        case 0x2a1044u: goto label_2a1044;
        case 0x2a1048u: goto label_2a1048;
        case 0x2a104cu: goto label_2a104c;
        case 0x2a1050u: goto label_2a1050;
        case 0x2a1054u: goto label_2a1054;
        case 0x2a1058u: goto label_2a1058;
        case 0x2a105cu: goto label_2a105c;
        case 0x2a1060u: goto label_2a1060;
        case 0x2a1064u: goto label_2a1064;
        case 0x2a1068u: goto label_2a1068;
        case 0x2a106cu: goto label_2a106c;
        case 0x2a1070u: goto label_2a1070;
        case 0x2a1074u: goto label_2a1074;
        case 0x2a1078u: goto label_2a1078;
        case 0x2a107cu: goto label_2a107c;
        case 0x2a1080u: goto label_2a1080;
        case 0x2a1084u: goto label_2a1084;
        case 0x2a1088u: goto label_2a1088;
        case 0x2a108cu: goto label_2a108c;
        case 0x2a1090u: goto label_2a1090;
        case 0x2a1094u: goto label_2a1094;
        case 0x2a1098u: goto label_2a1098;
        case 0x2a109cu: goto label_2a109c;
        case 0x2a10a0u: goto label_2a10a0;
        case 0x2a10a4u: goto label_2a10a4;
        case 0x2a10a8u: goto label_2a10a8;
        case 0x2a10acu: goto label_2a10ac;
        case 0x2a10b0u: goto label_2a10b0;
        case 0x2a10b4u: goto label_2a10b4;
        case 0x2a10b8u: goto label_2a10b8;
        case 0x2a10bcu: goto label_2a10bc;
        case 0x2a10c0u: goto label_2a10c0;
        case 0x2a10c4u: goto label_2a10c4;
        case 0x2a10c8u: goto label_2a10c8;
        case 0x2a10ccu: goto label_2a10cc;
        case 0x2a10d0u: goto label_2a10d0;
        case 0x2a10d4u: goto label_2a10d4;
        case 0x2a10d8u: goto label_2a10d8;
        case 0x2a10dcu: goto label_2a10dc;
        case 0x2a10e0u: goto label_2a10e0;
        case 0x2a10e4u: goto label_2a10e4;
        case 0x2a10e8u: goto label_2a10e8;
        case 0x2a10ecu: goto label_2a10ec;
        case 0x2a10f0u: goto label_2a10f0;
        case 0x2a10f4u: goto label_2a10f4;
        case 0x2a10f8u: goto label_2a10f8;
        case 0x2a10fcu: goto label_2a10fc;
        case 0x2a1100u: goto label_2a1100;
        case 0x2a1104u: goto label_2a1104;
        case 0x2a1108u: goto label_2a1108;
        case 0x2a110cu: goto label_2a110c;
        case 0x2a1110u: goto label_2a1110;
        case 0x2a1114u: goto label_2a1114;
        case 0x2a1118u: goto label_2a1118;
        case 0x2a111cu: goto label_2a111c;
        case 0x2a1120u: goto label_2a1120;
        case 0x2a1124u: goto label_2a1124;
        case 0x2a1128u: goto label_2a1128;
        case 0x2a112cu: goto label_2a112c;
        case 0x2a1130u: goto label_2a1130;
        case 0x2a1134u: goto label_2a1134;
        case 0x2a1138u: goto label_2a1138;
        case 0x2a113cu: goto label_2a113c;
        case 0x2a1140u: goto label_2a1140;
        case 0x2a1144u: goto label_2a1144;
        case 0x2a1148u: goto label_2a1148;
        case 0x2a114cu: goto label_2a114c;
        case 0x2a1150u: goto label_2a1150;
        case 0x2a1154u: goto label_2a1154;
        case 0x2a1158u: goto label_2a1158;
        case 0x2a115cu: goto label_2a115c;
        case 0x2a1160u: goto label_2a1160;
        case 0x2a1164u: goto label_2a1164;
        case 0x2a1168u: goto label_2a1168;
        case 0x2a116cu: goto label_2a116c;
        case 0x2a1170u: goto label_2a1170;
        case 0x2a1174u: goto label_2a1174;
        case 0x2a1178u: goto label_2a1178;
        case 0x2a117cu: goto label_2a117c;
        case 0x2a1180u: goto label_2a1180;
        case 0x2a1184u: goto label_2a1184;
        case 0x2a1188u: goto label_2a1188;
        case 0x2a118cu: goto label_2a118c;
        case 0x2a1190u: goto label_2a1190;
        case 0x2a1194u: goto label_2a1194;
        case 0x2a1198u: goto label_2a1198;
        case 0x2a119cu: goto label_2a119c;
        case 0x2a11a0u: goto label_2a11a0;
        case 0x2a11a4u: goto label_2a11a4;
        case 0x2a11a8u: goto label_2a11a8;
        case 0x2a11acu: goto label_2a11ac;
        case 0x2a11b0u: goto label_2a11b0;
        case 0x2a11b4u: goto label_2a11b4;
        case 0x2a11b8u: goto label_2a11b8;
        case 0x2a11bcu: goto label_2a11bc;
        case 0x2a11c0u: goto label_2a11c0;
        case 0x2a11c4u: goto label_2a11c4;
        case 0x2a11c8u: goto label_2a11c8;
        case 0x2a11ccu: goto label_2a11cc;
        case 0x2a11d0u: goto label_2a11d0;
        case 0x2a11d4u: goto label_2a11d4;
        case 0x2a11d8u: goto label_2a11d8;
        case 0x2a11dcu: goto label_2a11dc;
        case 0x2a11e0u: goto label_2a11e0;
        case 0x2a11e4u: goto label_2a11e4;
        case 0x2a11e8u: goto label_2a11e8;
        case 0x2a11ecu: goto label_2a11ec;
        case 0x2a11f0u: goto label_2a11f0;
        case 0x2a11f4u: goto label_2a11f4;
        case 0x2a11f8u: goto label_2a11f8;
        case 0x2a11fcu: goto label_2a11fc;
        case 0x2a1200u: goto label_2a1200;
        case 0x2a1204u: goto label_2a1204;
        case 0x2a1208u: goto label_2a1208;
        case 0x2a120cu: goto label_2a120c;
        case 0x2a1210u: goto label_2a1210;
        case 0x2a1214u: goto label_2a1214;
        default: break;
    }

    ctx->pc = 0x2a1020u;

label_2a1020:
    // 0x2a1020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a1020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a1024:
    // 0x2a1024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a1028:
    // 0x2a1028: 0xc0a9a10  jal         func_2A6840
label_2a102c:
    if (ctx->pc == 0x2A102Cu) {
        ctx->pc = 0x2A102Cu;
            // 0x2a102c: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->pc = 0x2A1030u;
        goto label_2a1030;
    }
    ctx->pc = 0x2A1028u;
    SET_GPR_U32(ctx, 31, 0x2A1030u);
    ctx->pc = 0x2A102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1028u;
            // 0x2a102c: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6840u;
    if (runtime->hasFunction(0x2A6840u)) {
        auto targetFn = runtime->lookupFunction(0x2A6840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1030u; }
        if (ctx->pc != 0x2A1030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayEnvBgm__6CSceneFv_0x2a6840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1030u; }
        if (ctx->pc != 0x2A1030u) { return; }
    }
    ctx->pc = 0x2A1030u;
label_2a1030:
    // 0x2a1030: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x2a1030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_2a1034:
    // 0x2a1034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a1034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1038:
    // 0x2a1038: 0xaf828760  sw          $v0, -0x78A0($gp)
    ctx->pc = 0x2a1038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 2));
label_2a103c:
    // 0x2a103c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2a103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2a1040:
    // 0x2a1040: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x2a1040u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
label_2a1044:
    // 0x2a1044: 0xa78299a8  sh          $v0, -0x6658($gp)
    ctx->pc = 0x2a1044u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941096), (uint16_t)GPR_U32(ctx, 2));
label_2a1048:
    // 0x2a1048: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_2a104c:
    // 0x2a104c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2a104cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_2a1050:
    // 0x2a1050: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a1050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_2a1054:
    // 0x2a1054: 0xc05f5d4  jal         func_17D750
label_2a1058:
    if (ctx->pc == 0x2A1058u) {
        ctx->pc = 0x2A1058u;
            // 0x2a1058: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x2A105Cu;
        goto label_2a105c;
    }
    ctx->pc = 0x2A1054u;
    SET_GPR_U32(ctx, 31, 0x2A105Cu);
    ctx->pc = 0x2A1058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1054u;
            // 0x2a1058: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D750u;
    if (runtime->hasFunction(0x17D750u)) {
        auto targetFn = runtime->lookupFunction(0x17D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A105Cu; }
        if (ctx->pc != 0x2A105Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFadeInOutFv_0x17d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A105Cu; }
        if (ctx->pc != 0x2A105Cu) { return; }
    }
    ctx->pc = 0x2A105Cu;
label_2a105c:
    // 0x2a105c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_2a1060:
    // 0x2a1060: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2a1060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2a1064:
    // 0x2a1064: 0xc05f5fc  jal         func_17D7F0
label_2a1068:
    if (ctx->pc == 0x2A1068u) {
        ctx->pc = 0x2A1068u;
            // 0x2a1068: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x2A106Cu;
        goto label_2a106c;
    }
    ctx->pc = 0x2A1064u;
    SET_GPR_U32(ctx, 31, 0x2A106Cu);
    ctx->pc = 0x2A1068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1064u;
            // 0x2a1068: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A106Cu; }
        if (ctx->pc != 0x2A106Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A106Cu; }
        if (ctx->pc != 0x2A106Cu) { return; }
    }
    ctx->pc = 0x2A106Cu;
label_2a106c:
    // 0x2a106c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_2a1070:
    // 0x2a1070: 0xc05f664  jal         func_17D990
label_2a1074:
    if (ctx->pc == 0x2A1074u) {
        ctx->pc = 0x2A1074u;
            // 0x2a1074: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x2A1078u;
        goto label_2a1078;
    }
    ctx->pc = 0x2A1070u;
    SET_GPR_U32(ctx, 31, 0x2A1078u);
    ctx->pc = 0x2A1074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1070u;
            // 0x2a1074: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D990u;
    if (runtime->hasFunction(0x17D990u)) {
        auto targetFn = runtime->lookupFunction(0x17D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1078u; }
        if (ctx->pc != 0x2A1078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeStep__10CFadeInOutFv_0x17d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1078u; }
        if (ctx->pc != 0x2A1078u) { return; }
    }
    ctx->pc = 0x2A1078u;
label_2a1078:
    // 0x2a1078: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_2a107c:
    // 0x2a107c: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x2a107cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2a1080:
    // 0x2a1080: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a1080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_2a1084:
    // 0x2a1084: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2a1084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_2a1088:
    // 0x2a1088: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_2a108c:
    // 0x2a108c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2a108cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2a1090:
    // 0x2a1090: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_2a1094:
    // 0x2a1094: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2a1094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_2a1098:
    // 0x2a1098: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a1098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_2a109c:
    // 0x2a109c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2a109cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_2a10a0:
    // 0x2a10a0: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_2a10a4:
    // 0x2a10a4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2a10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2a10a8:
    // 0x2a10a8: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a10a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_2a10ac:
    // 0x2a10ac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2a10acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_2a10b0:
    // 0x2a10b0: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a10b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
label_2a10b4:
    // 0x2a10b4: 0xac206124  sw          $zero, 0x6124($at)
    ctx->pc = 0x2a10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24868), GPR_U32(ctx, 0));
label_2a10b8:
    // 0x2a10b8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a10b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_2a10bc:
    // 0x2a10bc: 0xa78099ac  sh          $zero, -0x6654($gp)
    ctx->pc = 0x2a10bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941100), (uint16_t)GPR_U32(ctx, 0));
label_2a10c0:
    // 0x2a10c0: 0xc0bc650  jal         func_2F1940
label_2a10c4:
    if (ctx->pc == 0x2A10C4u) {
        ctx->pc = 0x2A10C4u;
            // 0x2a10c4: 0xac20611c  sw          $zero, 0x611C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 24860), GPR_U32(ctx, 0));
        ctx->pc = 0x2A10C8u;
        goto label_2a10c8;
    }
    ctx->pc = 0x2A10C0u;
    SET_GPR_U32(ctx, 31, 0x2A10C8u);
    ctx->pc = 0x2A10C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A10C0u;
            // 0x2a10c4: 0xac20611c  sw          $zero, 0x611C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 24860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1940u;
    if (runtime->hasFunction(0x2F1940u)) {
        auto targetFn = runtime->lookupFunction(0x2F1940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A10C8u; }
        if (ctx->pc != 0x2A10C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitForMC__18CMemoryCardManagerFv_0x2f1940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A10C8u; }
        if (ctx->pc != 0x2A10C8u) { return; }
    }
    ctx->pc = 0x2A10C8u;
label_2a10c8:
    // 0x2a10c8: 0x8f8299a0  lw          $v0, -0x6660($gp)
    ctx->pc = 0x2a10c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
label_2a10cc:
    // 0x2a10cc: 0xa7809994  sh          $zero, -0x666C($gp)
    ctx->pc = 0x2a10ccu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941076), (uint16_t)GPR_U32(ctx, 0));
label_2a10d0:
    // 0x2a10d0: 0xac4004c8  sw          $zero, 0x4C8($v0)
    ctx->pc = 0x2a10d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1224), GPR_U32(ctx, 0));
label_2a10d4:
    // 0x2a10d4: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x2a10d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
label_2a10d8:
    // 0x2a10d8: 0xc0bc740  jal         func_2F1D00
label_2a10dc:
    if (ctx->pc == 0x2A10DCu) {
        ctx->pc = 0x2A10DCu;
            // 0x2a10dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A10E0u;
        goto label_2a10e0;
    }
    ctx->pc = 0x2A10D8u;
    SET_GPR_U32(ctx, 31, 0x2A10E0u);
    ctx->pc = 0x2A10DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A10D8u;
            // 0x2a10dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D00u;
    if (runtime->hasFunction(0x2F1D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A10E0u; }
        if (ctx->pc != 0x2A10E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncNo__18CMemoryCardManagerFi_0x2f1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A10E0u; }
        if (ctx->pc != 0x2A10E0u) { return; }
    }
    ctx->pc = 0x2A10E0u;
label_2a10e0:
    // 0x2a10e0: 0x3c034208  lui         $v1, 0x4208
    ctx->pc = 0x2a10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16904 << 16));
label_2a10e4:
    // 0x2a10e4: 0xaf8099f4  sw          $zero, -0x660C($gp)
    ctx->pc = 0x2a10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941172), GPR_U32(ctx, 0));
label_2a10e8:
    // 0x2a10e8: 0xaf839a00  sw          $v1, -0x6600($gp)
    ctx->pc = 0x2a10e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941184), GPR_U32(ctx, 3));
label_2a10ec:
    // 0x2a10ec: 0x3c03436c  lui         $v1, 0x436C
    ctx->pc = 0x2a10ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17260 << 16));
label_2a10f0:
    // 0x2a10f0: 0xaf8099f8  sw          $zero, -0x6608($gp)
    ctx->pc = 0x2a10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941176), GPR_U32(ctx, 0));
label_2a10f4:
    // 0x2a10f4: 0xaf839a04  sw          $v1, -0x65FC($gp)
    ctx->pc = 0x2a10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941188), GPR_U32(ctx, 3));
label_2a10f8:
    // 0x2a10f8: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x2a10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2a10fc:
    // 0x2a10fc: 0xaf8099fc  sw          $zero, -0x6604($gp)
    ctx->pc = 0x2a10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941180), GPR_U32(ctx, 0));
label_2a1100:
    // 0x2a1100: 0xaf83845c  sw          $v1, -0x7BA4($gp)
    ctx->pc = 0x2a1100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935644), GPR_U32(ctx, 3));
label_2a1104:
    // 0x2a1104: 0x9383993c  lbu         $v1, -0x66C4($gp)
    ctx->pc = 0x2a1104u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940988)));
label_2a1108:
    // 0x2a1108: 0xaf8099b0  sw          $zero, -0x6650($gp)
    ctx->pc = 0x2a1108u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941104), GPR_U32(ctx, 0));
label_2a110c:
    // 0x2a110c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2a1110:
    if (ctx->pc == 0x2A1110u) {
        ctx->pc = 0x2A1110u;
            // 0x2a1110: 0xa3809974  sb          $zero, -0x668C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941044), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2A1114u;
        goto label_2a1114;
    }
    ctx->pc = 0x2A110Cu;
    {
        const bool branch_taken_0x2a110c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A110Cu;
            // 0x2a1110: 0xa3809974  sb          $zero, -0x668C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941044), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a110c) {
            ctx->pc = 0x2A1124u;
            goto label_2a1124;
        }
    }
    ctx->pc = 0x2A1114u;
label_2a1114:
    // 0x2a1114: 0x24040384  addiu       $a0, $zero, 0x384
    ctx->pc = 0x2a1114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_2a1118:
    // 0x2a1118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a111c:
    // 0x2a111c: 0xaf84845c  sw          $a0, -0x7BA4($gp)
    ctx->pc = 0x2a111cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935644), GPR_U32(ctx, 4));
label_2a1120:
    // 0x2a1120: 0xa383993c  sb          $v1, -0x66C4($gp)
    ctx->pc = 0x2a1120u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940988), (uint8_t)GPR_U32(ctx, 3));
label_2a1124:
    // 0x2a1124: 0x8f849948  lw          $a0, -0x66B8($gp)
    ctx->pc = 0x2a1124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
label_2a1128:
    // 0x2a1128: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x2a1128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
label_2a112c:
    // 0x2a112c: 0xaf809954  sw          $zero, -0x66AC($gp)
    ctx->pc = 0x2a112cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941012), GPR_U32(ctx, 0));
label_2a1130:
    // 0x2a1130: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
label_2a1134:
    if (ctx->pc == 0x2A1134u) {
        ctx->pc = 0x2A1134u;
            // 0x2a1134: 0xaf839960  sw          $v1, -0x66A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941024), GPR_U32(ctx, 3));
        ctx->pc = 0x2A1138u;
        goto label_2a1138;
    }
    ctx->pc = 0x2A1130u;
    {
        const bool branch_taken_0x2a1130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1130u;
            // 0x2a1134: 0xaf839960  sw          $v1, -0x66A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1130) {
            ctx->pc = 0x2A11F0u;
            goto label_2a11f0;
        }
    }
    ctx->pc = 0x2A1138u;
label_2a1138:
    // 0x2a1138: 0xc04c668  jal         func_1319A0
label_2a113c:
    if (ctx->pc == 0x2A113Cu) {
        ctx->pc = 0x2A1140u;
        goto label_2a1140;
    }
    ctx->pc = 0x2A1138u;
    SET_GPR_U32(ctx, 31, 0x2A1140u);
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1140u; }
        if (ctx->pc != 0x2A1140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1140u; }
        if (ctx->pc != 0x2A1140u) { return; }
    }
    ctx->pc = 0x2A1140u;
label_2a1140:
    // 0x2a1140: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2a1140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2a1144:
    // 0x2a1144: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a1144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a1148:
    // 0x2a1148: 0x24424300  addiu       $v0, $v0, 0x4300
    ctx->pc = 0x2a1148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_2a114c:
    // 0x2a114c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2a114cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a1150:
    // 0x2a1150: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2a1150u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a1154:
    // 0x2a1154: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2a1154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2a1158:
    // 0x2a1158: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2a1158u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_2a115c:
    // 0x2a115c: 0x24424310  addiu       $v0, $v0, 0x4310
    ctx->pc = 0x2a115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17168));
label_2a1160:
    // 0x2a1160: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2a1160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a1164:
    // 0x2a1164: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2a1164u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2a1168:
    // 0x2a1168: 0xc04c504  jal         func_131410
label_2a116c:
    if (ctx->pc == 0x2A116Cu) {
        ctx->pc = 0x2A116Cu;
            // 0x2a116c: 0x8f849948  lw          $a0, -0x66B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
        ctx->pc = 0x2A1170u;
        goto label_2a1170;
    }
    ctx->pc = 0x2A1168u;
    SET_GPR_U32(ctx, 31, 0x2A1170u);
    ctx->pc = 0x2A116Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1168u;
            // 0x2a116c: 0x8f849948  lw          $a0, -0x66B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1170u; }
        if (ctx->pc != 0x2A1170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1170u; }
        if (ctx->pc != 0x2A1170u) { return; }
    }
    ctx->pc = 0x2A1170u;
label_2a1170:
    // 0x2a1170: 0x8f849948  lw          $a0, -0x66B8($gp)
    ctx->pc = 0x2a1170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
label_2a1174:
    // 0x2a1174: 0xc04c50c  jal         func_131430
label_2a1178:
    if (ctx->pc == 0x2A1178u) {
        ctx->pc = 0x2A1178u;
            // 0x2a1178: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A117Cu;
        goto label_2a117c;
    }
    ctx->pc = 0x2A1174u;
    SET_GPR_U32(ctx, 31, 0x2A117Cu);
    ctx->pc = 0x2A1178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1174u;
            // 0x2a1178: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131430u;
    if (runtime->hasFunction(0x131430u)) {
        auto targetFn = runtime->lookupFunction(0x131430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A117Cu; }
        if (ctx->pc != 0x2A117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFPf_0x131430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A117Cu; }
        if (ctx->pc != 0x2A117Cu) { return; }
    }
    ctx->pc = 0x2A117Cu;
label_2a117c:
    // 0x2a117c: 0x8f849948  lw          $a0, -0x66B8($gp)
    ctx->pc = 0x2a117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
label_2a1180:
    // 0x2a1180: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x2a1180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a1184:
    // 0x2a1184: 0xc7ae0028  lwc1        $f14, 0x28($sp)
    ctx->pc = 0x2a1184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a1188:
    // 0x2a1188: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x2a1188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_2a118c:
    // 0x2a118c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a118cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a1190:
    // 0x2a1190: 0x320f809  jalr        $t9
label_2a1194:
    if (ctx->pc == 0x2A1194u) {
        ctx->pc = 0x2A1194u;
            // 0x2a1194: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A1198u;
        goto label_2a1198;
    }
    ctx->pc = 0x2A1190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A1198u);
        ctx->pc = 0x2A1194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1190u;
            // 0x2a1194: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A1198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A1198u; }
            if (ctx->pc != 0x2A1198u) { return; }
        }
        }
    }
    ctx->pc = 0x2A1198u;
label_2a1198:
    // 0x2a1198: 0x3c0244a2  lui         $v0, 0x44A2
    ctx->pc = 0x2a1198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17570 << 16));
label_2a119c:
    // 0x2a119c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2a11a0:
    // 0x2a11a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a11a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a11a4:
    // 0x2a11a4: 0xc04c680  jal         func_131A00
label_2a11a8:
    if (ctx->pc == 0x2A11A8u) {
        ctx->pc = 0x2A11A8u;
            // 0x2a11a8: 0x8f849948  lw          $a0, -0x66B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
        ctx->pc = 0x2A11ACu;
        goto label_2a11ac;
    }
    ctx->pc = 0x2A11A4u;
    SET_GPR_U32(ctx, 31, 0x2A11ACu);
    ctx->pc = 0x2A11A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11A4u;
            // 0x2a11a8: 0x8f849948  lw          $a0, -0x66B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11ACu; }
        if (ctx->pc != 0x2A11ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11ACu; }
        if (ctx->pc != 0x2A11ACu) { return; }
    }
    ctx->pc = 0x2A11ACu;
label_2a11ac:
    // 0x2a11ac: 0x3c02c356  lui         $v0, 0xC356
    ctx->pc = 0x2a11acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50006 << 16));
label_2a11b0:
    // 0x2a11b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a11b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a11b4:
    // 0x2a11b4: 0xc04c68c  jal         func_131A30
label_2a11b8:
    if (ctx->pc == 0x2A11B8u) {
        ctx->pc = 0x2A11B8u;
            // 0x2a11b8: 0x8f849948  lw          $a0, -0x66B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
        ctx->pc = 0x2A11BCu;
        goto label_2a11bc;
    }
    ctx->pc = 0x2A11B4u;
    SET_GPR_U32(ctx, 31, 0x2A11BCu);
    ctx->pc = 0x2A11B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11B4u;
            // 0x2a11b8: 0x8f849948  lw          $a0, -0x66B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11BCu; }
        if (ctx->pc != 0x2A11BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11BCu; }
        if (ctx->pc != 0x2A11BCu) { return; }
    }
    ctx->pc = 0x2A11BCu;
label_2a11bc:
    // 0x2a11bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a11bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a11c0:
    // 0x2a11c0: 0xc04c670  jal         func_1319C0
label_2a11c4:
    if (ctx->pc == 0x2A11C4u) {
        ctx->pc = 0x2A11C4u;
            // 0x2a11c4: 0x8f849948  lw          $a0, -0x66B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
        ctx->pc = 0x2A11C8u;
        goto label_2a11c8;
    }
    ctx->pc = 0x2A11C0u;
    SET_GPR_U32(ctx, 31, 0x2A11C8u);
    ctx->pc = 0x2A11C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11C0u;
            // 0x2a11c4: 0x8f849948  lw          $a0, -0x66B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319C0u;
    if (runtime->hasFunction(0x1319C0u)) {
        auto targetFn = runtime->lookupFunction(0x1319C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11C8u; }
        if (ctx->pc != 0x2A11C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngle__15mgCCameraFollowFf_0x1319c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A11C8u; }
        if (ctx->pc != 0x2A11C8u) { return; }
    }
    ctx->pc = 0x2A11C8u;
label_2a11c8:
    // 0x2a11c8: 0x8f849948  lw          $a0, -0x66B8($gp)
    ctx->pc = 0x2a11c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
label_2a11cc:
    // 0x2a11cc: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x2a11ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_2a11d0:
    // 0x2a11d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a11d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a11d4:
    // 0x2a11d4: 0x320f809  jalr        $t9
label_2a11d8:
    if (ctx->pc == 0x2A11D8u) {
        ctx->pc = 0x2A11DCu;
        goto label_2a11dc;
    }
    ctx->pc = 0x2A11D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A11DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A11DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A11DCu; }
            if (ctx->pc != 0x2A11DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2A11DCu;
label_2a11dc:
    // 0x2a11dc: 0x8f849948  lw          $a0, -0x66B8($gp)
    ctx->pc = 0x2a11dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
label_2a11e0:
    // 0x2a11e0: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x2a11e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_2a11e4:
    // 0x2a11e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2a11e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2a11e8:
    // 0x2a11e8: 0x320f809  jalr        $t9
label_2a11ec:
    if (ctx->pc == 0x2A11ECu) {
        ctx->pc = 0x2A11ECu;
            // 0x2a11ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A11F0u;
        goto label_2a11f0;
    }
    ctx->pc = 0x2A11E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A11F0u);
        ctx->pc = 0x2A11ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A11E8u;
            // 0x2a11ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A11F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A11F0u; }
            if (ctx->pc != 0x2A11F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2A11F0u;
label_2a11f0:
    // 0x2a11f0: 0x8f84994c  lw          $a0, -0x66B4($gp)
    ctx->pc = 0x2a11f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941004)));
label_2a11f4:
    // 0x2a11f4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a11f8:
    if (ctx->pc == 0x2A11F8u) {
        ctx->pc = 0x2A11FCu;
        goto label_2a11fc;
    }
    ctx->pc = 0x2A11F4u;
    {
        const bool branch_taken_0x2a11f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a11f4) {
            ctx->pc = 0x2A120Cu;
            goto label_2a120c;
        }
    }
    ctx->pc = 0x2A11FCu;
label_2a11fc:
    // 0x2a11fc: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x2a11fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_2a1200:
    // 0x2a1200: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2a1200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2a1204:
    // 0x2a1204: 0x320f809  jalr        $t9
label_2a1208:
    if (ctx->pc == 0x2A1208u) {
        ctx->pc = 0x2A120Cu;
        goto label_2a120c;
    }
    ctx->pc = 0x2A1204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A120Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A120Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A120Cu; }
            if (ctx->pc != 0x2A120Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A120Cu;
label_2a120c:
    // 0x2a120c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a1210:
    // 0x2a1210: 0x3e00008  jr          $ra
label_2a1214:
    if (ctx->pc == 0x2A1214u) {
        ctx->pc = 0x2A1214u;
            // 0x2a1214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A1218u;
        goto label_fallthrough_0x2a1210;
    }
    ctx->pc = 0x2A1210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1210u;
            // 0x2a1214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a1210:
    ctx->pc = 0x2A1218u;
}
