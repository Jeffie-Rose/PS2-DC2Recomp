#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CCharacter2Fv
// Address: 0x173ed0 - 0x1742d4
void Step__11CCharacter2Fv_0x173ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CCharacter2Fv_0x173ed0");
#endif

    switch (ctx->pc) {
        case 0x173ed0u: goto label_173ed0;
        case 0x173ed4u: goto label_173ed4;
        case 0x173ed8u: goto label_173ed8;
        case 0x173edcu: goto label_173edc;
        case 0x173ee0u: goto label_173ee0;
        case 0x173ee4u: goto label_173ee4;
        case 0x173ee8u: goto label_173ee8;
        case 0x173eecu: goto label_173eec;
        case 0x173ef0u: goto label_173ef0;
        case 0x173ef4u: goto label_173ef4;
        case 0x173ef8u: goto label_173ef8;
        case 0x173efcu: goto label_173efc;
        case 0x173f00u: goto label_173f00;
        case 0x173f04u: goto label_173f04;
        case 0x173f08u: goto label_173f08;
        case 0x173f0cu: goto label_173f0c;
        case 0x173f10u: goto label_173f10;
        case 0x173f14u: goto label_173f14;
        case 0x173f18u: goto label_173f18;
        case 0x173f1cu: goto label_173f1c;
        case 0x173f20u: goto label_173f20;
        case 0x173f24u: goto label_173f24;
        case 0x173f28u: goto label_173f28;
        case 0x173f2cu: goto label_173f2c;
        case 0x173f30u: goto label_173f30;
        case 0x173f34u: goto label_173f34;
        case 0x173f38u: goto label_173f38;
        case 0x173f3cu: goto label_173f3c;
        case 0x173f40u: goto label_173f40;
        case 0x173f44u: goto label_173f44;
        case 0x173f48u: goto label_173f48;
        case 0x173f4cu: goto label_173f4c;
        case 0x173f50u: goto label_173f50;
        case 0x173f54u: goto label_173f54;
        case 0x173f58u: goto label_173f58;
        case 0x173f5cu: goto label_173f5c;
        case 0x173f60u: goto label_173f60;
        case 0x173f64u: goto label_173f64;
        case 0x173f68u: goto label_173f68;
        case 0x173f6cu: goto label_173f6c;
        case 0x173f70u: goto label_173f70;
        case 0x173f74u: goto label_173f74;
        case 0x173f78u: goto label_173f78;
        case 0x173f7cu: goto label_173f7c;
        case 0x173f80u: goto label_173f80;
        case 0x173f84u: goto label_173f84;
        case 0x173f88u: goto label_173f88;
        case 0x173f8cu: goto label_173f8c;
        case 0x173f90u: goto label_173f90;
        case 0x173f94u: goto label_173f94;
        case 0x173f98u: goto label_173f98;
        case 0x173f9cu: goto label_173f9c;
        case 0x173fa0u: goto label_173fa0;
        case 0x173fa4u: goto label_173fa4;
        case 0x173fa8u: goto label_173fa8;
        case 0x173facu: goto label_173fac;
        case 0x173fb0u: goto label_173fb0;
        case 0x173fb4u: goto label_173fb4;
        case 0x173fb8u: goto label_173fb8;
        case 0x173fbcu: goto label_173fbc;
        case 0x173fc0u: goto label_173fc0;
        case 0x173fc4u: goto label_173fc4;
        case 0x173fc8u: goto label_173fc8;
        case 0x173fccu: goto label_173fcc;
        case 0x173fd0u: goto label_173fd0;
        case 0x173fd4u: goto label_173fd4;
        case 0x173fd8u: goto label_173fd8;
        case 0x173fdcu: goto label_173fdc;
        case 0x173fe0u: goto label_173fe0;
        case 0x173fe4u: goto label_173fe4;
        case 0x173fe8u: goto label_173fe8;
        case 0x173fecu: goto label_173fec;
        case 0x173ff0u: goto label_173ff0;
        case 0x173ff4u: goto label_173ff4;
        case 0x173ff8u: goto label_173ff8;
        case 0x173ffcu: goto label_173ffc;
        case 0x174000u: goto label_174000;
        case 0x174004u: goto label_174004;
        case 0x174008u: goto label_174008;
        case 0x17400cu: goto label_17400c;
        case 0x174010u: goto label_174010;
        case 0x174014u: goto label_174014;
        case 0x174018u: goto label_174018;
        case 0x17401cu: goto label_17401c;
        case 0x174020u: goto label_174020;
        case 0x174024u: goto label_174024;
        case 0x174028u: goto label_174028;
        case 0x17402cu: goto label_17402c;
        case 0x174030u: goto label_174030;
        case 0x174034u: goto label_174034;
        case 0x174038u: goto label_174038;
        case 0x17403cu: goto label_17403c;
        case 0x174040u: goto label_174040;
        case 0x174044u: goto label_174044;
        case 0x174048u: goto label_174048;
        case 0x17404cu: goto label_17404c;
        case 0x174050u: goto label_174050;
        case 0x174054u: goto label_174054;
        case 0x174058u: goto label_174058;
        case 0x17405cu: goto label_17405c;
        case 0x174060u: goto label_174060;
        case 0x174064u: goto label_174064;
        case 0x174068u: goto label_174068;
        case 0x17406cu: goto label_17406c;
        case 0x174070u: goto label_174070;
        case 0x174074u: goto label_174074;
        case 0x174078u: goto label_174078;
        case 0x17407cu: goto label_17407c;
        case 0x174080u: goto label_174080;
        case 0x174084u: goto label_174084;
        case 0x174088u: goto label_174088;
        case 0x17408cu: goto label_17408c;
        case 0x174090u: goto label_174090;
        case 0x174094u: goto label_174094;
        case 0x174098u: goto label_174098;
        case 0x17409cu: goto label_17409c;
        case 0x1740a0u: goto label_1740a0;
        case 0x1740a4u: goto label_1740a4;
        case 0x1740a8u: goto label_1740a8;
        case 0x1740acu: goto label_1740ac;
        case 0x1740b0u: goto label_1740b0;
        case 0x1740b4u: goto label_1740b4;
        case 0x1740b8u: goto label_1740b8;
        case 0x1740bcu: goto label_1740bc;
        case 0x1740c0u: goto label_1740c0;
        case 0x1740c4u: goto label_1740c4;
        case 0x1740c8u: goto label_1740c8;
        case 0x1740ccu: goto label_1740cc;
        case 0x1740d0u: goto label_1740d0;
        case 0x1740d4u: goto label_1740d4;
        case 0x1740d8u: goto label_1740d8;
        case 0x1740dcu: goto label_1740dc;
        case 0x1740e0u: goto label_1740e0;
        case 0x1740e4u: goto label_1740e4;
        case 0x1740e8u: goto label_1740e8;
        case 0x1740ecu: goto label_1740ec;
        case 0x1740f0u: goto label_1740f0;
        case 0x1740f4u: goto label_1740f4;
        case 0x1740f8u: goto label_1740f8;
        case 0x1740fcu: goto label_1740fc;
        case 0x174100u: goto label_174100;
        case 0x174104u: goto label_174104;
        case 0x174108u: goto label_174108;
        case 0x17410cu: goto label_17410c;
        case 0x174110u: goto label_174110;
        case 0x174114u: goto label_174114;
        case 0x174118u: goto label_174118;
        case 0x17411cu: goto label_17411c;
        case 0x174120u: goto label_174120;
        case 0x174124u: goto label_174124;
        case 0x174128u: goto label_174128;
        case 0x17412cu: goto label_17412c;
        case 0x174130u: goto label_174130;
        case 0x174134u: goto label_174134;
        case 0x174138u: goto label_174138;
        case 0x17413cu: goto label_17413c;
        case 0x174140u: goto label_174140;
        case 0x174144u: goto label_174144;
        case 0x174148u: goto label_174148;
        case 0x17414cu: goto label_17414c;
        case 0x174150u: goto label_174150;
        case 0x174154u: goto label_174154;
        case 0x174158u: goto label_174158;
        case 0x17415cu: goto label_17415c;
        case 0x174160u: goto label_174160;
        case 0x174164u: goto label_174164;
        case 0x174168u: goto label_174168;
        case 0x17416cu: goto label_17416c;
        case 0x174170u: goto label_174170;
        case 0x174174u: goto label_174174;
        case 0x174178u: goto label_174178;
        case 0x17417cu: goto label_17417c;
        case 0x174180u: goto label_174180;
        case 0x174184u: goto label_174184;
        case 0x174188u: goto label_174188;
        case 0x17418cu: goto label_17418c;
        case 0x174190u: goto label_174190;
        case 0x174194u: goto label_174194;
        case 0x174198u: goto label_174198;
        case 0x17419cu: goto label_17419c;
        case 0x1741a0u: goto label_1741a0;
        case 0x1741a4u: goto label_1741a4;
        case 0x1741a8u: goto label_1741a8;
        case 0x1741acu: goto label_1741ac;
        case 0x1741b0u: goto label_1741b0;
        case 0x1741b4u: goto label_1741b4;
        case 0x1741b8u: goto label_1741b8;
        case 0x1741bcu: goto label_1741bc;
        case 0x1741c0u: goto label_1741c0;
        case 0x1741c4u: goto label_1741c4;
        case 0x1741c8u: goto label_1741c8;
        case 0x1741ccu: goto label_1741cc;
        case 0x1741d0u: goto label_1741d0;
        case 0x1741d4u: goto label_1741d4;
        case 0x1741d8u: goto label_1741d8;
        case 0x1741dcu: goto label_1741dc;
        case 0x1741e0u: goto label_1741e0;
        case 0x1741e4u: goto label_1741e4;
        case 0x1741e8u: goto label_1741e8;
        case 0x1741ecu: goto label_1741ec;
        case 0x1741f0u: goto label_1741f0;
        case 0x1741f4u: goto label_1741f4;
        case 0x1741f8u: goto label_1741f8;
        case 0x1741fcu: goto label_1741fc;
        case 0x174200u: goto label_174200;
        case 0x174204u: goto label_174204;
        case 0x174208u: goto label_174208;
        case 0x17420cu: goto label_17420c;
        case 0x174210u: goto label_174210;
        case 0x174214u: goto label_174214;
        case 0x174218u: goto label_174218;
        case 0x17421cu: goto label_17421c;
        case 0x174220u: goto label_174220;
        case 0x174224u: goto label_174224;
        case 0x174228u: goto label_174228;
        case 0x17422cu: goto label_17422c;
        case 0x174230u: goto label_174230;
        case 0x174234u: goto label_174234;
        case 0x174238u: goto label_174238;
        case 0x17423cu: goto label_17423c;
        case 0x174240u: goto label_174240;
        case 0x174244u: goto label_174244;
        case 0x174248u: goto label_174248;
        case 0x17424cu: goto label_17424c;
        case 0x174250u: goto label_174250;
        case 0x174254u: goto label_174254;
        case 0x174258u: goto label_174258;
        case 0x17425cu: goto label_17425c;
        case 0x174260u: goto label_174260;
        case 0x174264u: goto label_174264;
        case 0x174268u: goto label_174268;
        case 0x17426cu: goto label_17426c;
        case 0x174270u: goto label_174270;
        case 0x174274u: goto label_174274;
        case 0x174278u: goto label_174278;
        case 0x17427cu: goto label_17427c;
        case 0x174280u: goto label_174280;
        case 0x174284u: goto label_174284;
        case 0x174288u: goto label_174288;
        case 0x17428cu: goto label_17428c;
        case 0x174290u: goto label_174290;
        case 0x174294u: goto label_174294;
        case 0x174298u: goto label_174298;
        case 0x17429cu: goto label_17429c;
        case 0x1742a0u: goto label_1742a0;
        case 0x1742a4u: goto label_1742a4;
        case 0x1742a8u: goto label_1742a8;
        case 0x1742acu: goto label_1742ac;
        case 0x1742b0u: goto label_1742b0;
        case 0x1742b4u: goto label_1742b4;
        case 0x1742b8u: goto label_1742b8;
        case 0x1742bcu: goto label_1742bc;
        case 0x1742c0u: goto label_1742c0;
        case 0x1742c4u: goto label_1742c4;
        case 0x1742c8u: goto label_1742c8;
        case 0x1742ccu: goto label_1742cc;
        case 0x1742d0u: goto label_1742d0;
        default: break;
    }

    ctx->pc = 0x173ed0u;

label_173ed0:
    // 0x173ed0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x173ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_173ed4:
    // 0x173ed4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_173ed8:
    // 0x173ed8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x173ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_173edc:
    // 0x173edc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x173edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_173ee0:
    // 0x173ee0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_173ee4:
    // 0x173ee4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x173ee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_173ee8:
    // 0x173ee8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173eec:
    // 0x173eec: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x173eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_173ef0:
    // 0x173ef0: 0x320f809  jalr        $t9
label_173ef4:
    if (ctx->pc == 0x173EF4u) {
        ctx->pc = 0x173EF4u;
            // 0x173ef4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173EF8u;
        goto label_173ef8;
    }
    ctx->pc = 0x173EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173EF8u);
        ctx->pc = 0x173EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173EF0u;
            // 0x173ef4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173EF8u; }
            if (ctx->pc != 0x173EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x173EF8u;
label_173ef8:
    // 0x173ef8: 0x104000ef  beqz        $v0, . + 4 + (0xEF << 2)
label_173efc:
    if (ctx->pc == 0x173EFCu) {
        ctx->pc = 0x173EFCu;
            // 0x173efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173F00u;
        goto label_173f00;
    }
    ctx->pc = 0x173EF8u;
    {
        const bool branch_taken_0x173ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173EF8u;
            // 0x173efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ef8) {
            ctx->pc = 0x1742B8u;
            goto label_1742b8;
        }
    }
    ctx->pc = 0x173F00u;
label_173f00:
    // 0x173f00: 0xc05cdc0  jal         func_173700
label_173f04:
    if (ctx->pc == 0x173F04u) {
        ctx->pc = 0x173F08u;
        goto label_173f08;
    }
    ctx->pc = 0x173F00u;
    SET_GPR_U32(ctx, 31, 0x173F08u);
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F08u; }
        if (ctx->pc != 0x173F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F08u; }
        if (ctx->pc != 0x173F08u) { return; }
    }
    ctx->pc = 0x173F08u;
label_173f08:
    // 0x173f08: 0x8e430358  lw          $v1, 0x358($s2)
    ctx->pc = 0x173f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 856)));
label_173f0c:
    // 0x173f0c: 0x106000ea  beqz        $v1, . + 4 + (0xEA << 2)
label_173f10:
    if (ctx->pc == 0x173F10u) {
        ctx->pc = 0x173F10u;
            // 0x173f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173F14u;
        goto label_173f14;
    }
    ctx->pc = 0x173F0Cu;
    {
        const bool branch_taken_0x173f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F0Cu;
            // 0x173f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f0c) {
            ctx->pc = 0x1742B8u;
            goto label_1742b8;
        }
    }
    ctx->pc = 0x173F14u;
label_173f14:
    // 0x173f14: 0xc05cefc  jal         func_173BF0
label_173f18:
    if (ctx->pc == 0x173F18u) {
        ctx->pc = 0x173F1Cu;
        goto label_173f1c;
    }
    ctx->pc = 0x173F14u;
    SET_GPR_U32(ctx, 31, 0x173F1Cu);
    ctx->pc = 0x173BF0u;
    if (runtime->hasFunction(0x173BF0u)) {
        auto targetFn = runtime->lookupFunction(0x173BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F1Cu; }
        if (ctx->pc != 0x173F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SePlay__11CCharacter2Fv_0x173bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F1Cu; }
        if (ctx->pc != 0x173F1Cu) { return; }
    }
    ctx->pc = 0x173F1Cu;
label_173f1c:
    // 0x173f1c: 0x8e430378  lw          $v1, 0x378($s2)
    ctx->pc = 0x173f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 888)));
label_173f20:
    // 0x173f20: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_173f24:
    if (ctx->pc == 0x173F24u) {
        ctx->pc = 0x173F28u;
        goto label_173f28;
    }
    ctx->pc = 0x173F20u;
    {
        const bool branch_taken_0x173f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173f20) {
            ctx->pc = 0x173F38u;
            goto label_173f38;
        }
    }
    ctx->pc = 0x173F28u;
label_173f28:
    // 0x173f28: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x173f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_173f2c:
    // 0x173f2c: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x173f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_173f30:
    // 0x173f30: 0x320f809  jalr        $t9
label_173f34:
    if (ctx->pc == 0x173F34u) {
        ctx->pc = 0x173F34u;
            // 0x173f34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173F38u;
        goto label_173f38;
    }
    ctx->pc = 0x173F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173F38u);
        ctx->pc = 0x173F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F30u;
            // 0x173f34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173F38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173F38u; }
            if (ctx->pc != 0x173F38u) { return; }
        }
        }
    }
    ctx->pc = 0x173F38u;
label_173f38:
    // 0x173f38: 0x8e430378  lw          $v1, 0x378($s2)
    ctx->pc = 0x173f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 888)));
label_173f3c:
    // 0x173f3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x173f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_173f40:
    // 0x173f40: 0x146400a7  bne         $v1, $a0, . + 4 + (0xA7 << 2)
label_173f44:
    if (ctx->pc == 0x173F44u) {
        ctx->pc = 0x173F48u;
        goto label_173f48;
    }
    ctx->pc = 0x173F40u;
    {
        const bool branch_taken_0x173f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x173f40) {
            ctx->pc = 0x1741E0u;
            goto label_1741e0;
        }
    }
    ctx->pc = 0x173F48u;
label_173f48:
    // 0x173f48: 0x8e4503a4  lw          $a1, 0x3A4($s2)
    ctx->pc = 0x173f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
label_173f4c:
    // 0x173f4c: 0x8e4303a8  lw          $v1, 0x3A8($s2)
    ctx->pc = 0x173f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 936)));
label_173f50:
    // 0x173f50: 0x10a30036  beq         $a1, $v1, . + 4 + (0x36 << 2)
label_173f54:
    if (ctx->pc == 0x173F54u) {
        ctx->pc = 0x173F58u;
        goto label_173f58;
    }
    ctx->pc = 0x173F50u;
    {
        const bool branch_taken_0x173f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x173f50) {
            ctx->pc = 0x17402Cu;
            goto label_17402c;
        }
    }
    ctx->pc = 0x173F58u;
label_173f58:
    // 0x173f58: 0xae4503a8  sw          $a1, 0x3A8($s2)
    ctx->pc = 0x173f58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 936), GPR_U32(ctx, 5));
label_173f5c:
    // 0x173f5c: 0xae4003ac  sw          $zero, 0x3AC($s2)
    ctx->pc = 0x173f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 940), GPR_U32(ctx, 0));
label_173f60:
    // 0x173f60: 0xae4003b4  sw          $zero, 0x3B4($s2)
    ctx->pc = 0x173f60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 948), GPR_U32(ctx, 0));
label_173f64:
    // 0x173f64: 0xae4003bc  sw          $zero, 0x3BC($s2)
    ctx->pc = 0x173f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 956), GPR_U32(ctx, 0));
label_173f68:
    // 0x173f68: 0xae4003b8  sw          $zero, 0x3B8($s2)
    ctx->pc = 0x173f68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 0));
label_173f6c:
    // 0x173f6c: 0x8e4303a8  lw          $v1, 0x3A8($s2)
    ctx->pc = 0x173f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 936)));
label_173f70:
    // 0x173f70: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_173f74:
    if (ctx->pc == 0x173F74u) {
        ctx->pc = 0x173F78u;
        goto label_173f78;
    }
    ctx->pc = 0x173F70u;
    {
        const bool branch_taken_0x173f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f70) {
            ctx->pc = 0x17402Cu;
            goto label_17402c;
        }
    }
    ctx->pc = 0x173F78u;
label_173f78:
    // 0x173f78: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x173f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_173f7c:
    // 0x173f7c: 0xae4303ac  sw          $v1, 0x3AC($s2)
    ctx->pc = 0x173f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 940), GPR_U32(ctx, 3));
label_173f80:
    // 0x173f80: 0x8e4303ac  lw          $v1, 0x3AC($s2)
    ctx->pc = 0x173f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
label_173f84:
    // 0x173f84: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_173f88:
    if (ctx->pc == 0x173F88u) {
        ctx->pc = 0x173F8Cu;
        goto label_173f8c;
    }
    ctx->pc = 0x173F84u;
    {
        const bool branch_taken_0x173f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f84) {
            ctx->pc = 0x17402Cu;
            goto label_17402c;
        }
    }
    ctx->pc = 0x173F8Cu;
label_173f8c:
    // 0x173f8c: 0xae4403b8  sw          $a0, 0x3B8($s2)
    ctx->pc = 0x173f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 4));
label_173f90:
    // 0x173f90: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x173f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_173f94:
    // 0x173f94: 0x8e4503ac  lw          $a1, 0x3AC($s2)
    ctx->pc = 0x173f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
label_173f98:
    // 0x173f98: 0x90a30022  lbu         $v1, 0x22($a1)
    ctx->pc = 0x173f98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 34)));
label_173f9c:
    // 0x173f9c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_173fa0:
    if (ctx->pc == 0x173FA0u) {
        ctx->pc = 0x173FA0u;
            // 0x173fa0: 0x8e4603b0  lw          $a2, 0x3B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
        ctx->pc = 0x173FA4u;
        goto label_173fa4;
    }
    ctx->pc = 0x173F9Cu;
    {
        const bool branch_taken_0x173f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x173FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F9Cu;
            // 0x173fa0: 0x8e4603b0  lw          $a2, 0x3B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f9c) {
            ctx->pc = 0x173FE0u;
            goto label_173fe0;
        }
    }
    ctx->pc = 0x173FA4u;
label_173fa4:
    // 0x173fa4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x173fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_173fa8:
    // 0x173fa8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_173fac:
    if (ctx->pc == 0x173FACu) {
        ctx->pc = 0x173FACu;
            // 0x173fac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x173FB0u;
        goto label_173fb0;
    }
    ctx->pc = 0x173FA8u;
    {
        const bool branch_taken_0x173fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x173FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FA8u;
            // 0x173fac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fa8) {
            ctx->pc = 0x173FE0u;
            goto label_173fe0;
        }
    }
    ctx->pc = 0x173FB0u;
label_173fb0:
    // 0x173fb0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_173fb4:
    if (ctx->pc == 0x173FB4u) {
        ctx->pc = 0x173FB8u;
        goto label_173fb8;
    }
    ctx->pc = 0x173FB0u;
    {
        const bool branch_taken_0x173fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x173fb0) {
            ctx->pc = 0x173FDCu;
            goto label_173fdc;
        }
    }
    ctx->pc = 0x173FB8u;
label_173fb8:
    // 0x173fb8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_173fbc:
    if (ctx->pc == 0x173FBCu) {
        ctx->pc = 0x173FC0u;
        goto label_173fc0;
    }
    ctx->pc = 0x173FB8u;
    {
        const bool branch_taken_0x173fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173fb8) {
            ctx->pc = 0x173FDCu;
            goto label_173fdc;
        }
    }
    ctx->pc = 0x173FC0u;
label_173fc0:
    // 0x173fc0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_173fc4:
    if (ctx->pc == 0x173FC4u) {
        ctx->pc = 0x173FC8u;
        goto label_173fc8;
    }
    ctx->pc = 0x173FC0u;
    {
        const bool branch_taken_0x173fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x173fc0) {
            ctx->pc = 0x173FD0u;
            goto label_173fd0;
        }
    }
    ctx->pc = 0x173FC8u;
label_173fc8:
    // 0x173fc8: 0x10000005  b           . + 4 + (0x5 << 2)
label_173fcc:
    if (ctx->pc == 0x173FCCu) {
        ctx->pc = 0x173FCCu;
            // 0x173fcc: 0x34c60002  ori         $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
        ctx->pc = 0x173FD0u;
        goto label_173fd0;
    }
    ctx->pc = 0x173FC8u;
    {
        const bool branch_taken_0x173fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FC8u;
            // 0x173fcc: 0x34c60002  ori         $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fc8) {
            ctx->pc = 0x173FE0u;
            goto label_173fe0;
        }
    }
    ctx->pc = 0x173FD0u;
label_173fd0:
    // 0x173fd0: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x173fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_173fd4:
    // 0x173fd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_173fd8:
    if (ctx->pc == 0x173FD8u) {
        ctx->pc = 0x173FD8u;
            // 0x173fd8: 0xae4203b4  sw          $v0, 0x3B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 948), GPR_U32(ctx, 2));
        ctx->pc = 0x173FDCu;
        goto label_173fdc;
    }
    ctx->pc = 0x173FD4u;
    {
        const bool branch_taken_0x173fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FD4u;
            // 0x173fd8: 0xae4203b4  sw          $v0, 0x3B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 948), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fd4) {
            ctx->pc = 0x173FE0u;
            goto label_173fe0;
        }
    }
    ctx->pc = 0x173FDCu;
label_173fdc:
    // 0x173fdc: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x173fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_173fe0:
    // 0x173fe0: 0x8e4503ac  lw          $a1, 0x3AC($s2)
    ctx->pc = 0x173fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
label_173fe4:
    // 0x173fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_173fe8:
    // 0x173fe8: 0xc05ce90  jal         func_173A40
label_173fec:
    if (ctx->pc == 0x173FECu) {
        ctx->pc = 0x173FECu;
            // 0x173fec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x173FF0u;
        goto label_173ff0;
    }
    ctx->pc = 0x173FE8u;
    SET_GPR_U32(ctx, 31, 0x173FF0u);
    ctx->pc = 0x173FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173FE8u;
            // 0x173fec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A40u;
    if (runtime->hasFunction(0x173A40u)) {
        auto targetFn = runtime->lookupFunction(0x173A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FF0u; }
        if (ctx->pc != 0x173FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotionPara__11CCharacter2FPcii_0x173a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FF0u; }
        if (ctx->pc != 0x173FF0u) { return; }
    }
    ctx->pc = 0x173FF0u;
label_173ff0:
    // 0x173ff0: 0x8e4303ac  lw          $v1, 0x3AC($s2)
    ctx->pc = 0x173ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
label_173ff4:
    // 0x173ff4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_173ff8:
    // 0x173ff8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x173ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_173ffc:
    // 0x173ffc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x173ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174000:
    // 0x174000: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x174000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_174004:
    // 0x174004: 0x0  nop
    ctx->pc = 0x174004u;
    // NOP
label_174008:
    // 0x174008: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17400c:
    if (ctx->pc == 0x17400Cu) {
        ctx->pc = 0x17400Cu;
            // 0x17400c: 0xe640050c  swc1        $f0, 0x50C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1292), bits); }
        ctx->pc = 0x174010u;
        goto label_174010;
    }
    ctx->pc = 0x174008u;
    {
        const bool branch_taken_0x174008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174008u;
            // 0x17400c: 0xe640050c  swc1        $f0, 0x50C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174008) {
            ctx->pc = 0x174014u;
            goto label_174014;
        }
    }
    ctx->pc = 0x174010u;
label_174010:
    // 0x174010: 0xe6410508  swc1        $f1, 0x508($s2)
    ctx->pc = 0x174010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1288), bits); }
label_174014:
    // 0x174014: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x174014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_174018:
    // 0x174018: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x174018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_17401c:
    // 0x17401c: 0x320f809  jalr        $t9
label_174020:
    if (ctx->pc == 0x174020u) {
        ctx->pc = 0x174020u;
            // 0x174020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174024u;
        goto label_174024;
    }
    ctx->pc = 0x17401Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x174024u);
        ctx->pc = 0x174020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17401Cu;
            // 0x174020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174024u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174024u; }
            if (ctx->pc != 0x174024u) { return; }
        }
        }
    }
    ctx->pc = 0x174024u;
label_174024:
    // 0x174024: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_174028:
    if (ctx->pc == 0x174028u) {
        ctx->pc = 0x174028u;
            // 0x174028: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x17402Cu;
        goto label_17402c;
    }
    ctx->pc = 0x174024u;
    {
        const bool branch_taken_0x174024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174024u;
            // 0x174028: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174024) {
            ctx->pc = 0x1742BCu;
            goto label_1742bc;
        }
    }
    ctx->pc = 0x17402Cu;
label_17402c:
    // 0x17402c: 0x8e4303a8  lw          $v1, 0x3A8($s2)
    ctx->pc = 0x17402cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 936)));
label_174030:
    // 0x174030: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
label_174034:
    if (ctx->pc == 0x174034u) {
        ctx->pc = 0x174038u;
        goto label_174038;
    }
    ctx->pc = 0x174030u;
    {
        const bool branch_taken_0x174030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174030) {
            ctx->pc = 0x1742B8u;
            goto label_1742b8;
        }
    }
    ctx->pc = 0x174038u;
label_174038:
    // 0x174038: 0x8e4303ac  lw          $v1, 0x3AC($s2)
    ctx->pc = 0x174038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
label_17403c:
    // 0x17403c: 0x1060009e  beqz        $v1, . + 4 + (0x9E << 2)
label_174040:
    if (ctx->pc == 0x174040u) {
        ctx->pc = 0x174044u;
        goto label_174044;
    }
    ctx->pc = 0x17403Cu;
    {
        const bool branch_taken_0x17403c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17403c) {
            ctx->pc = 0x1742B8u;
            goto label_1742b8;
        }
    }
    ctx->pc = 0x174044u;
label_174044:
    // 0x174044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174048:
    // 0x174048: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17404c:
    // 0x17404c: 0xae4203b8  sw          $v0, 0x3B8($s2)
    ctx->pc = 0x17404cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 2));
label_174050:
    // 0x174050: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x174050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_174054:
    // 0x174054: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x174054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_174058:
    // 0x174058: 0x320f809  jalr        $t9
label_17405c:
    if (ctx->pc == 0x17405Cu) {
        ctx->pc = 0x17405Cu;
            // 0x17405c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174060u;
        goto label_174060;
    }
    ctx->pc = 0x174058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x174060u);
        ctx->pc = 0x17405Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174058u;
            // 0x17405c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174060u; }
            if (ctx->pc != 0x174060u) { return; }
        }
        }
    }
    ctx->pc = 0x174060u;
label_174060:
    // 0x174060: 0x8e4403ac  lw          $a0, 0x3AC($s2)
    ctx->pc = 0x174060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
label_174064:
    // 0x174064: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x174064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_174068:
    // 0x174068: 0x90850022  lbu         $a1, 0x22($a0)
    ctx->pc = 0x174068u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_17406c:
    // 0x17406c: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
label_174070:
    if (ctx->pc == 0x174070u) {
        ctx->pc = 0x174074u;
        goto label_174074;
    }
    ctx->pc = 0x17406Cu;
    {
        const bool branch_taken_0x17406c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17406c) {
            ctx->pc = 0x174100u;
            goto label_174100;
        }
    }
    ctx->pc = 0x174074u;
label_174074:
    // 0x174074: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x174074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_174078:
    // 0x174078: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
label_17407c:
    if (ctx->pc == 0x17407Cu) {
        ctx->pc = 0x17407Cu;
            // 0x17407c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x174080u;
        goto label_174080;
    }
    ctx->pc = 0x174078u;
    {
        const bool branch_taken_0x174078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x17407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174078u;
            // 0x17407c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174078) {
            ctx->pc = 0x1740E0u;
            goto label_1740e0;
        }
    }
    ctx->pc = 0x174080u;
label_174080:
    // 0x174080: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x174080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174084:
    // 0x174084: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
label_174088:
    if (ctx->pc == 0x174088u) {
        ctx->pc = 0x174088u;
            // 0x174088: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17408Cu;
        goto label_17408c;
    }
    ctx->pc = 0x174084u;
    {
        const bool branch_taken_0x174084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x174088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174084u;
            // 0x174088: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174084) {
            ctx->pc = 0x1740DCu;
            goto label_1740dc;
        }
    }
    ctx->pc = 0x17408Cu;
label_17408c:
    // 0x17408c: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
label_174090:
    if (ctx->pc == 0x174090u) {
        ctx->pc = 0x174090u;
            // 0x174090: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x174094u;
        goto label_174094;
    }
    ctx->pc = 0x17408Cu;
    {
        const bool branch_taken_0x17408c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x174090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17408Cu;
            // 0x174090: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17408c) {
            ctx->pc = 0x1740B4u;
            goto label_1740b4;
        }
    }
    ctx->pc = 0x174094u;
label_174094:
    // 0x174094: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_174098:
    if (ctx->pc == 0x174098u) {
        ctx->pc = 0x174098u;
            // 0x174098: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x17409Cu;
        goto label_17409c;
    }
    ctx->pc = 0x174094u;
    {
        const bool branch_taken_0x174094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x174098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174094u;
            // 0x174098: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174094) {
            ctx->pc = 0x1740A4u;
            goto label_1740a4;
        }
    }
    ctx->pc = 0x17409Cu;
label_17409c:
    // 0x17409c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1740a0:
    if (ctx->pc == 0x1740A0u) {
        ctx->pc = 0x1740A4u;
        goto label_1740a4;
    }
    ctx->pc = 0x17409Cu;
    {
        const bool branch_taken_0x17409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17409c) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x1740A4u;
label_1740a4:
    // 0x1740a4: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_1740a8:
    if (ctx->pc == 0x1740A8u) {
        ctx->pc = 0x1740ACu;
        goto label_1740ac;
    }
    ctx->pc = 0x1740A4u;
    {
        const bool branch_taken_0x1740a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1740a4) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x1740ACu;
label_1740ac:
    // 0x1740ac: 0x10000019  b           . + 4 + (0x19 << 2)
label_1740b0:
    if (ctx->pc == 0x1740B0u) {
        ctx->pc = 0x1740B0u;
            // 0x1740b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1740B4u;
        goto label_1740b4;
    }
    ctx->pc = 0x1740ACu;
    {
        const bool branch_taken_0x1740ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740ACu;
            // 0x1740b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740ac) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x1740B4u;
label_1740b4:
    // 0x1740b4: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_1740b8:
    if (ctx->pc == 0x1740B8u) {
        ctx->pc = 0x1740BCu;
        goto label_1740bc;
    }
    ctx->pc = 0x1740B4u;
    {
        const bool branch_taken_0x1740b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1740b4) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x1740BCu;
label_1740bc:
    // 0x1740bc: 0x8e4303b4  lw          $v1, 0x3B4($s2)
    ctx->pc = 0x1740bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
label_1740c0:
    // 0x1740c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1740c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1740c4:
    // 0x1740c4: 0xae4303b4  sw          $v1, 0x3B4($s2)
    ctx->pc = 0x1740c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 948), GPR_U32(ctx, 3));
label_1740c8:
    // 0x1740c8: 0x8e4303b4  lw          $v1, 0x3B4($s2)
    ctx->pc = 0x1740c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 948)));
label_1740cc:
    // 0x1740cc: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
label_1740d0:
    if (ctx->pc == 0x1740D0u) {
        ctx->pc = 0x1740D4u;
        goto label_1740d4;
    }
    ctx->pc = 0x1740CCu;
    {
        const bool branch_taken_0x1740cc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1740cc) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x1740D4u;
label_1740d4:
    // 0x1740d4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1740d8:
    if (ctx->pc == 0x1740D8u) {
        ctx->pc = 0x1740D8u;
            // 0x1740d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1740DCu;
        goto label_1740dc;
    }
    ctx->pc = 0x1740D4u;
    {
        const bool branch_taken_0x1740d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740D4u;
            // 0x1740d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740d4) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x1740DCu;
label_1740dc:
    // 0x1740dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1740dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1740e0:
    // 0x1740e0: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1740e4:
    if (ctx->pc == 0x1740E4u) {
        ctx->pc = 0x1740E4u;
            // 0x1740e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1740E8u;
        goto label_1740e8;
    }
    ctx->pc = 0x1740E0u;
    {
        const bool branch_taken_0x1740e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1740E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740E0u;
            // 0x1740e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740e0) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x1740E8u;
label_1740e8:
    // 0x1740e8: 0xae4303b8  sw          $v1, 0x3B8($s2)
    ctx->pc = 0x1740e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 3));
label_1740ec:
    // 0x1740ec: 0x8e4303bc  lw          $v1, 0x3BC($s2)
    ctx->pc = 0x1740ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 956)));
label_1740f0:
    // 0x1740f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1740f4:
    if (ctx->pc == 0x1740F4u) {
        ctx->pc = 0x1740F8u;
        goto label_1740f8;
    }
    ctx->pc = 0x1740F0u;
    {
        const bool branch_taken_0x1740f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1740f0) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x1740F8u;
label_1740f8:
    // 0x1740f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1740fc:
    if (ctx->pc == 0x1740FCu) {
        ctx->pc = 0x1740FCu;
            // 0x1740fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x174100u;
        goto label_174100;
    }
    ctx->pc = 0x1740F8u;
    {
        const bool branch_taken_0x1740f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740F8u;
            // 0x1740fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740f8) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x174100u;
label_174100:
    // 0x174100: 0xae4303b8  sw          $v1, 0x3B8($s2)
    ctx->pc = 0x174100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 3));
label_174104:
    // 0x174104: 0x8e4303bc  lw          $v1, 0x3BC($s2)
    ctx->pc = 0x174104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 956)));
label_174108:
    // 0x174108: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_17410c:
    if (ctx->pc == 0x17410Cu) {
        ctx->pc = 0x174110u;
        goto label_174110;
    }
    ctx->pc = 0x174108u;
    {
        const bool branch_taken_0x174108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174108) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x174110u;
label_174110:
    // 0x174110: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x174110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174114:
    // 0x174114: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_174118:
    if (ctx->pc == 0x174118u) {
        ctx->pc = 0x17411Cu;
        goto label_17411c;
    }
    ctx->pc = 0x174114u;
    {
        const bool branch_taken_0x174114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x174114) {
            ctx->pc = 0x1741D0u;
            goto label_1741d0;
        }
    }
    ctx->pc = 0x17411Cu;
label_17411c:
    // 0x17411c: 0x8e4403ac  lw          $a0, 0x3AC($s2)
    ctx->pc = 0x17411cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
label_174120:
    // 0x174120: 0x8083002c  lb          $v1, 0x2C($a0)
    ctx->pc = 0x174120u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_174124:
    // 0x174124: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_174128:
    if (ctx->pc == 0x174128u) {
        ctx->pc = 0x174128u;
            // 0x174128: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x17412Cu;
        goto label_17412c;
    }
    ctx->pc = 0x174124u;
    {
        const bool branch_taken_0x174124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174124u;
            // 0x174128: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174124) {
            ctx->pc = 0x174134u;
            goto label_174134;
        }
    }
    ctx->pc = 0x17412Cu;
label_17412c:
    // 0x17412c: 0x10000062  b           . + 4 + (0x62 << 2)
label_174130:
    if (ctx->pc == 0x174130u) {
        ctx->pc = 0x174130u;
            // 0x174130: 0xae4303b8  sw          $v1, 0x3B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 3));
        ctx->pc = 0x174134u;
        goto label_174134;
    }
    ctx->pc = 0x17412Cu;
    {
        const bool branch_taken_0x17412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17412Cu;
            // 0x174130: 0xae4303b8  sw          $v1, 0x3B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17412c) {
            ctx->pc = 0x1742B8u;
            goto label_1742b8;
        }
    }
    ctx->pc = 0x174134u;
label_174134:
    // 0x174134: 0x2482002c  addiu       $v0, $a0, 0x2C
    ctx->pc = 0x174134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_174138:
    // 0x174138: 0xae4203ac  sw          $v0, 0x3AC($s2)
    ctx->pc = 0x174138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 940), GPR_U32(ctx, 2));
label_17413c:
    // 0x17413c: 0xae4003b4  sw          $zero, 0x3B4($s2)
    ctx->pc = 0x17413cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 948), GPR_U32(ctx, 0));
label_174140:
    // 0x174140: 0xae4003bc  sw          $zero, 0x3BC($s2)
    ctx->pc = 0x174140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 956), GPR_U32(ctx, 0));
label_174144:
    // 0x174144: 0x8e4403ac  lw          $a0, 0x3AC($s2)
    ctx->pc = 0x174144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
label_174148:
    // 0x174148: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_17414c:
    if (ctx->pc == 0x17414Cu) {
        ctx->pc = 0x174150u;
        goto label_174150;
    }
    ctx->pc = 0x174148u;
    {
        const bool branch_taken_0x174148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x174148) {
            ctx->pc = 0x1741D0u;
            goto label_1741d0;
        }
    }
    ctx->pc = 0x174150u;
label_174150:
    // 0x174150: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x174150u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_174154:
    // 0x174154: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x174154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_174158:
    // 0x174158: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_17415c:
    if (ctx->pc == 0x17415Cu) {
        ctx->pc = 0x17415Cu;
            // 0x17415c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174160u;
        goto label_174160;
    }
    ctx->pc = 0x174158u;
    {
        const bool branch_taken_0x174158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174158u;
            // 0x17415c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174158) {
            ctx->pc = 0x17419Cu;
            goto label_17419c;
        }
    }
    ctx->pc = 0x174160u;
label_174160:
    // 0x174160: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_174164:
    // 0x174164: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_174168:
    if (ctx->pc == 0x174168u) {
        ctx->pc = 0x174168u;
            // 0x174168: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x17416Cu;
        goto label_17416c;
    }
    ctx->pc = 0x174164u;
    {
        const bool branch_taken_0x174164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174164u;
            // 0x174168: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174164) {
            ctx->pc = 0x17419Cu;
            goto label_17419c;
        }
    }
    ctx->pc = 0x17416Cu;
label_17416c:
    // 0x17416c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_174170:
    if (ctx->pc == 0x174170u) {
        ctx->pc = 0x174174u;
        goto label_174174;
    }
    ctx->pc = 0x17416Cu;
    {
        const bool branch_taken_0x17416c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17416c) {
            ctx->pc = 0x174198u;
            goto label_174198;
        }
    }
    ctx->pc = 0x174174u;
label_174174:
    // 0x174174: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_174178:
    if (ctx->pc == 0x174178u) {
        ctx->pc = 0x174178u;
            // 0x174178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17417Cu;
        goto label_17417c;
    }
    ctx->pc = 0x174174u;
    {
        const bool branch_taken_0x174174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174174u;
            // 0x174178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174174) {
            ctx->pc = 0x174198u;
            goto label_174198;
        }
    }
    ctx->pc = 0x17417Cu;
label_17417c:
    // 0x17417c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_174180:
    if (ctx->pc == 0x174180u) {
        ctx->pc = 0x174184u;
        goto label_174184;
    }
    ctx->pc = 0x17417Cu;
    {
        const bool branch_taken_0x17417c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17417c) {
            ctx->pc = 0x17418Cu;
            goto label_17418c;
        }
    }
    ctx->pc = 0x174184u;
label_174184:
    // 0x174184: 0x10000006  b           . + 4 + (0x6 << 2)
label_174188:
    if (ctx->pc == 0x174188u) {
        ctx->pc = 0x174188u;
            // 0x174188: 0x8e4503ac  lw          $a1, 0x3AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->pc = 0x17418Cu;
        goto label_17418c;
    }
    ctx->pc = 0x174184u;
    {
        const bool branch_taken_0x174184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174184u;
            // 0x174188: 0x8e4503ac  lw          $a1, 0x3AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174184) {
            ctx->pc = 0x1741A0u;
            goto label_1741a0;
        }
    }
    ctx->pc = 0x17418Cu;
label_17418c:
    // 0x17418c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x17418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_174190:
    // 0x174190: 0x10000002  b           . + 4 + (0x2 << 2)
label_174194:
    if (ctx->pc == 0x174194u) {
        ctx->pc = 0x174194u;
            // 0x174194: 0xae4203b4  sw          $v0, 0x3B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 948), GPR_U32(ctx, 2));
        ctx->pc = 0x174198u;
        goto label_174198;
    }
    ctx->pc = 0x174190u;
    {
        const bool branch_taken_0x174190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174190u;
            // 0x174194: 0xae4203b4  sw          $v0, 0x3B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 948), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174190) {
            ctx->pc = 0x17419Cu;
            goto label_17419c;
        }
    }
    ctx->pc = 0x174198u;
label_174198:
    // 0x174198: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x174198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17419c:
    // 0x17419c: 0x8e4503ac  lw          $a1, 0x3AC($s2)
    ctx->pc = 0x17419cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
label_1741a0:
    // 0x1741a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1741a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1741a4:
    // 0x1741a4: 0xc05ce90  jal         func_173A40
label_1741a8:
    if (ctx->pc == 0x1741A8u) {
        ctx->pc = 0x1741A8u;
            // 0x1741a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1741ACu;
        goto label_1741ac;
    }
    ctx->pc = 0x1741A4u;
    SET_GPR_U32(ctx, 31, 0x1741ACu);
    ctx->pc = 0x1741A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1741A4u;
            // 0x1741a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A40u;
    if (runtime->hasFunction(0x173A40u)) {
        auto targetFn = runtime->lookupFunction(0x173A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741ACu; }
        if (ctx->pc != 0x1741ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotionPara__11CCharacter2FPcii_0x173a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741ACu; }
        if (ctx->pc != 0x1741ACu) { return; }
    }
    ctx->pc = 0x1741ACu;
label_1741ac:
    // 0x1741ac: 0x8e4303ac  lw          $v1, 0x3AC($s2)
    ctx->pc = 0x1741acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 940)));
label_1741b0:
    // 0x1741b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1741b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1741b4:
    // 0x1741b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1741b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1741b8:
    // 0x1741b8: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1741b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1741bc:
    // 0x1741bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1741bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1741c0:
    // 0x1741c0: 0x0  nop
    ctx->pc = 0x1741c0u;
    // NOP
label_1741c4:
    // 0x1741c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1741c8:
    if (ctx->pc == 0x1741C8u) {
        ctx->pc = 0x1741C8u;
            // 0x1741c8: 0xe640050c  swc1        $f0, 0x50C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1292), bits); }
        ctx->pc = 0x1741CCu;
        goto label_1741cc;
    }
    ctx->pc = 0x1741C4u;
    {
        const bool branch_taken_0x1741c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1741C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1741C4u;
            // 0x1741c8: 0xe640050c  swc1        $f0, 0x50C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741c4) {
            ctx->pc = 0x1741D0u;
            goto label_1741d0;
        }
    }
    ctx->pc = 0x1741CCu;
label_1741cc:
    // 0x1741cc: 0xe6410508  swc1        $f1, 0x508($s2)
    ctx->pc = 0x1741ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1288), bits); }
label_1741d0:
    // 0x1741d0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1741d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1741d4:
    // 0x1741d4: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x1741d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_1741d8:
    // 0x1741d8: 0x320f809  jalr        $t9
label_1741dc:
    if (ctx->pc == 0x1741DCu) {
        ctx->pc = 0x1741DCu;
            // 0x1741dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1741E0u;
        goto label_1741e0;
    }
    ctx->pc = 0x1741D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1741E0u);
        ctx->pc = 0x1741DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1741D8u;
            // 0x1741dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1741E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1741E0u; }
            if (ctx->pc != 0x1741E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1741E0u;
label_1741e0:
    // 0x1741e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1741e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1741e4:
    // 0x1741e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1741e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1741e8:
    // 0x1741e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1741e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1741ec:
    // 0x1741ec: 0xc05d3f8  jal         func_174FE0
label_1741f0:
    if (ctx->pc == 0x1741F0u) {
        ctx->pc = 0x1741F0u;
            // 0x1741f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1741F4u;
        goto label_1741f4;
    }
    ctx->pc = 0x1741ECu;
    SET_GPR_U32(ctx, 31, 0x1741F4u);
    ctx->pc = 0x1741F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1741ECu;
            // 0x1741f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174FE0u;
    if (runtime->hasFunction(0x174FE0u)) {
        auto targetFn = runtime->lookupFunction(0x174FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741F4u; }
        if (ctx->pc != 0x1741F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPA4_f_0x174fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1741F4u; }
        if (ctx->pc != 0x1741F4u) { return; }
    }
    ctx->pc = 0x1741F4u;
label_1741f4:
    // 0x1741f4: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1741f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1741f8:
    // 0x1741f8: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x1741f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_1741fc:
    // 0x1741fc: 0xc04c018  jal         func_130060
label_174200:
    if (ctx->pc == 0x174200u) {
        ctx->pc = 0x174200u;
            // 0x174200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174204u;
        goto label_174204;
    }
    ctx->pc = 0x1741FCu;
    SET_GPR_U32(ctx, 31, 0x174204u);
    ctx->pc = 0x174200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1741FCu;
            // 0x174200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174204u; }
        if (ctx->pc != 0x174204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174204u; }
        if (ctx->pc != 0x174204u) { return; }
    }
    ctx->pc = 0x174204u;
label_174204:
    // 0x174204: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x174204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_174208:
    // 0x174208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x174208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17420c:
    // 0x17420c: 0x0  nop
    ctx->pc = 0x17420cu;
    // NOP
label_174210:
    // 0x174210: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x174210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_174214:
    // 0x174214: 0x0  nop
    ctx->pc = 0x174214u;
    // NOP
label_174218:
    // 0x174218: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17421c:
    if (ctx->pc == 0x17421Cu) {
        ctx->pc = 0x174220u;
        goto label_174220;
    }
    ctx->pc = 0x174218u;
    {
        const bool branch_taken_0x174218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x174218) {
            ctx->pc = 0x174224u;
            goto label_174224;
        }
    }
    ctx->pc = 0x174220u;
label_174220:
    // 0x174220: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x174220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174224:
    // 0x174224: 0x16000012  bnez        $s0, . + 4 + (0x12 << 2)
label_174228:
    if (ctx->pc == 0x174228u) {
        ctx->pc = 0x174228u;
            // 0x174228: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x17422Cu;
        goto label_17422c;
    }
    ctx->pc = 0x174224u;
    {
        const bool branch_taken_0x174224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x174228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174224u;
            // 0x174228: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174224) {
            ctx->pc = 0x174270u;
            goto label_174270;
        }
    }
    ctx->pc = 0x17422Cu;
label_17422c:
    // 0x17422c: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x17422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_174230:
    // 0x174230: 0xc047c76  jal         func_11F1D8
label_174234:
    if (ctx->pc == 0x174234u) {
        ctx->pc = 0x174234u;
            // 0x174234: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x174238u;
        goto label_174238;
    }
    ctx->pc = 0x174230u;
    SET_GPR_U32(ctx, 31, 0x174238u);
    ctx->pc = 0x174234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174230u;
            // 0x174234: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174238u; }
        if (ctx->pc != 0x174238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174238u; }
        if (ctx->pc != 0x174238u) { return; }
    }
    ctx->pc = 0x174238u;
label_174238:
    // 0x174238: 0xc64c00d0  lwc1        $f12, 0xD0($s2)
    ctx->pc = 0x174238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17423c:
    // 0x17423c: 0xc64d00d8  lwc1        $f13, 0xD8($s2)
    ctx->pc = 0x17423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_174240:
    // 0x174240: 0xc047c76  jal         func_11F1D8
label_174244:
    if (ctx->pc == 0x174244u) {
        ctx->pc = 0x174244u;
            // 0x174244: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x174248u;
        goto label_174248;
    }
    ctx->pc = 0x174240u;
    SET_GPR_U32(ctx, 31, 0x174248u);
    ctx->pc = 0x174244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174240u;
            // 0x174244: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174248u; }
        if (ctx->pc != 0x174248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174248u; }
        if (ctx->pc != 0x174248u) { return; }
    }
    ctx->pc = 0x174248u;
label_174248:
    // 0x174248: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x174248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_17424c:
    // 0x17424c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17424cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_174250:
    // 0x174250: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x174250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_174254:
    // 0x174254: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x174254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_174258:
    // 0x174258: 0xc04c344  jal         func_130D10
label_17425c:
    if (ctx->pc == 0x17425Cu) {
        ctx->pc = 0x17425Cu;
            // 0x17425c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x174260u;
        goto label_174260;
    }
    ctx->pc = 0x174258u;
    SET_GPR_U32(ctx, 31, 0x174260u);
    ctx->pc = 0x17425Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174258u;
            // 0x17425c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174260u; }
        if (ctx->pc != 0x174260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174260u; }
        if (ctx->pc != 0x174260u) { return; }
    }
    ctx->pc = 0x174260u;
label_174260:
    // 0x174260: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_174264:
    if (ctx->pc == 0x174264u) {
        ctx->pc = 0x174268u;
        goto label_174268;
    }
    ctx->pc = 0x174260u;
    {
        const bool branch_taken_0x174260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174260) {
            ctx->pc = 0x17426Cu;
            goto label_17426c;
        }
    }
    ctx->pc = 0x174268u;
label_174268:
    // 0x174268: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x174268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17426c:
    // 0x17426c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x17426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_174270:
    // 0x174270: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x174270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_174274:
    // 0x174274: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x174274u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_174278:
    // 0x174278: 0x7e4400b0  sq          $a0, 0xB0($s2)
    ctx->pc = 0x174278u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 176), GPR_VEC(ctx, 4));
label_17427c:
    // 0x17427c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x17427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_174280:
    // 0x174280: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x174280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_174284:
    // 0x174284: 0x7e4300c0  sq          $v1, 0xC0($s2)
    ctx->pc = 0x174284u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 192), GPR_VEC(ctx, 3));
label_174288:
    // 0x174288: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x174288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17428c:
    // 0x17428c: 0x7e4200d0  sq          $v0, 0xD0($s2)
    ctx->pc = 0x17428cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 208), GPR_VEC(ctx, 2));
label_174290:
    // 0x174290: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x174290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_174294:
    // 0x174294: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_174298:
    if (ctx->pc == 0x174298u) {
        ctx->pc = 0x174298u;
            // 0x174298: 0x7e4200e0  sq          $v0, 0xE0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 224), GPR_VEC(ctx, 2));
        ctx->pc = 0x17429Cu;
        goto label_17429c;
    }
    ctx->pc = 0x174294u;
    {
        const bool branch_taken_0x174294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x174298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174294u;
            // 0x174298: 0x7e4200e0  sq          $v0, 0xE0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174294) {
            ctx->pc = 0x1742A4u;
            goto label_1742a4;
        }
    }
    ctx->pc = 0x17429Cu;
label_17429c:
    // 0x17429c: 0xc05cdec  jal         func_1737B0
label_1742a0:
    if (ctx->pc == 0x1742A0u) {
        ctx->pc = 0x1742A0u;
            // 0x1742a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1742A4u;
        goto label_1742a4;
    }
    ctx->pc = 0x17429Cu;
    SET_GPR_U32(ctx, 31, 0x1742A4u);
    ctx->pc = 0x1742A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17429Cu;
            // 0x1742a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1737B0u;
    if (runtime->hasFunction(0x1737B0u)) {
        auto targetFn = runtime->lookupFunction(0x1737B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742A4u; }
        if (ctx->pc != 0x1742A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDAPosition__11CCharacter2Fv_0x1737b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742A4u; }
        if (ctx->pc != 0x1742A4u) { return; }
    }
    ctx->pc = 0x1742A4u;
label_1742a4:
    // 0x1742a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1742a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1742a8:
    // 0x1742a8: 0xc05d0b8  jal         func_1742E0
label_1742ac:
    if (ctx->pc == 0x1742ACu) {
        ctx->pc = 0x1742ACu;
            // 0x1742ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1742B0u;
        goto label_1742b0;
    }
    ctx->pc = 0x1742A8u;
    SET_GPR_U32(ctx, 31, 0x1742B0u);
    ctx->pc = 0x1742ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1742A8u;
            // 0x1742ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1742E0u;
    if (runtime->hasFunction(0x1742E0u)) {
        auto targetFn = runtime->lookupFunction(0x1742E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742B0u; }
        if (ctx->pc != 0x1742B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepDA__11CCharacter2Fi_0x1742e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742B0u; }
        if (ctx->pc != 0x1742B0u) { return; }
    }
    ctx->pc = 0x1742B0u;
label_1742b0:
    // 0x1742b0: 0xc05decc  jal         func_177B30
label_1742b4:
    if (ctx->pc == 0x1742B4u) {
        ctx->pc = 0x1742B4u;
            // 0x1742b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1742B8u;
        goto label_1742b8;
    }
    ctx->pc = 0x1742B0u;
    SET_GPR_U32(ctx, 31, 0x1742B8u);
    ctx->pc = 0x1742B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1742B0u;
            // 0x1742b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177B30u;
    if (runtime->hasFunction(0x177B30u)) {
        auto targetFn = runtime->lookupFunction(0x177B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742B8u; }
        if (ctx->pc != 0x1742B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CtrlEffect__11CCharacter2Fv_0x177b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742B8u; }
        if (ctx->pc != 0x1742B8u) { return; }
    }
    ctx->pc = 0x1742B8u;
label_1742b8:
    // 0x1742b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1742b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1742bc:
    // 0x1742bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1742bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1742c0:
    // 0x1742c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1742c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1742c4:
    // 0x1742c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1742c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1742c8:
    // 0x1742c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1742c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1742cc:
    // 0x1742cc: 0x3e00008  jr          $ra
label_1742d0:
    if (ctx->pc == 0x1742D0u) {
        ctx->pc = 0x1742D0u;
            // 0x1742d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1742D4u;
        goto label_fallthrough_0x1742cc;
    }
    ctx->pc = 0x1742CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1742D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1742CCu;
            // 0x1742d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1742cc:
    ctx->pc = 0x1742D4u;
}
