#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MovieViewInit__F13INIT_LOOP_ARG
// Address: 0x2c6eb0 - 0x2c725c
void MovieViewInit__F13INIT_LOOP_ARG_0x2c6eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MovieViewInit__F13INIT_LOOP_ARG_0x2c6eb0");
#endif

    switch (ctx->pc) {
        case 0x2c6eb0u: goto label_2c6eb0;
        case 0x2c6eb4u: goto label_2c6eb4;
        case 0x2c6eb8u: goto label_2c6eb8;
        case 0x2c6ebcu: goto label_2c6ebc;
        case 0x2c6ec0u: goto label_2c6ec0;
        case 0x2c6ec4u: goto label_2c6ec4;
        case 0x2c6ec8u: goto label_2c6ec8;
        case 0x2c6eccu: goto label_2c6ecc;
        case 0x2c6ed0u: goto label_2c6ed0;
        case 0x2c6ed4u: goto label_2c6ed4;
        case 0x2c6ed8u: goto label_2c6ed8;
        case 0x2c6edcu: goto label_2c6edc;
        case 0x2c6ee0u: goto label_2c6ee0;
        case 0x2c6ee4u: goto label_2c6ee4;
        case 0x2c6ee8u: goto label_2c6ee8;
        case 0x2c6eecu: goto label_2c6eec;
        case 0x2c6ef0u: goto label_2c6ef0;
        case 0x2c6ef4u: goto label_2c6ef4;
        case 0x2c6ef8u: goto label_2c6ef8;
        case 0x2c6efcu: goto label_2c6efc;
        case 0x2c6f00u: goto label_2c6f00;
        case 0x2c6f04u: goto label_2c6f04;
        case 0x2c6f08u: goto label_2c6f08;
        case 0x2c6f0cu: goto label_2c6f0c;
        case 0x2c6f10u: goto label_2c6f10;
        case 0x2c6f14u: goto label_2c6f14;
        case 0x2c6f18u: goto label_2c6f18;
        case 0x2c6f1cu: goto label_2c6f1c;
        case 0x2c6f20u: goto label_2c6f20;
        case 0x2c6f24u: goto label_2c6f24;
        case 0x2c6f28u: goto label_2c6f28;
        case 0x2c6f2cu: goto label_2c6f2c;
        case 0x2c6f30u: goto label_2c6f30;
        case 0x2c6f34u: goto label_2c6f34;
        case 0x2c6f38u: goto label_2c6f38;
        case 0x2c6f3cu: goto label_2c6f3c;
        case 0x2c6f40u: goto label_2c6f40;
        case 0x2c6f44u: goto label_2c6f44;
        case 0x2c6f48u: goto label_2c6f48;
        case 0x2c6f4cu: goto label_2c6f4c;
        case 0x2c6f50u: goto label_2c6f50;
        case 0x2c6f54u: goto label_2c6f54;
        case 0x2c6f58u: goto label_2c6f58;
        case 0x2c6f5cu: goto label_2c6f5c;
        case 0x2c6f60u: goto label_2c6f60;
        case 0x2c6f64u: goto label_2c6f64;
        case 0x2c6f68u: goto label_2c6f68;
        case 0x2c6f6cu: goto label_2c6f6c;
        case 0x2c6f70u: goto label_2c6f70;
        case 0x2c6f74u: goto label_2c6f74;
        case 0x2c6f78u: goto label_2c6f78;
        case 0x2c6f7cu: goto label_2c6f7c;
        case 0x2c6f80u: goto label_2c6f80;
        case 0x2c6f84u: goto label_2c6f84;
        case 0x2c6f88u: goto label_2c6f88;
        case 0x2c6f8cu: goto label_2c6f8c;
        case 0x2c6f90u: goto label_2c6f90;
        case 0x2c6f94u: goto label_2c6f94;
        case 0x2c6f98u: goto label_2c6f98;
        case 0x2c6f9cu: goto label_2c6f9c;
        case 0x2c6fa0u: goto label_2c6fa0;
        case 0x2c6fa4u: goto label_2c6fa4;
        case 0x2c6fa8u: goto label_2c6fa8;
        case 0x2c6facu: goto label_2c6fac;
        case 0x2c6fb0u: goto label_2c6fb0;
        case 0x2c6fb4u: goto label_2c6fb4;
        case 0x2c6fb8u: goto label_2c6fb8;
        case 0x2c6fbcu: goto label_2c6fbc;
        case 0x2c6fc0u: goto label_2c6fc0;
        case 0x2c6fc4u: goto label_2c6fc4;
        case 0x2c6fc8u: goto label_2c6fc8;
        case 0x2c6fccu: goto label_2c6fcc;
        case 0x2c6fd0u: goto label_2c6fd0;
        case 0x2c6fd4u: goto label_2c6fd4;
        case 0x2c6fd8u: goto label_2c6fd8;
        case 0x2c6fdcu: goto label_2c6fdc;
        case 0x2c6fe0u: goto label_2c6fe0;
        case 0x2c6fe4u: goto label_2c6fe4;
        case 0x2c6fe8u: goto label_2c6fe8;
        case 0x2c6fecu: goto label_2c6fec;
        case 0x2c6ff0u: goto label_2c6ff0;
        case 0x2c6ff4u: goto label_2c6ff4;
        case 0x2c6ff8u: goto label_2c6ff8;
        case 0x2c6ffcu: goto label_2c6ffc;
        case 0x2c7000u: goto label_2c7000;
        case 0x2c7004u: goto label_2c7004;
        case 0x2c7008u: goto label_2c7008;
        case 0x2c700cu: goto label_2c700c;
        case 0x2c7010u: goto label_2c7010;
        case 0x2c7014u: goto label_2c7014;
        case 0x2c7018u: goto label_2c7018;
        case 0x2c701cu: goto label_2c701c;
        case 0x2c7020u: goto label_2c7020;
        case 0x2c7024u: goto label_2c7024;
        case 0x2c7028u: goto label_2c7028;
        case 0x2c702cu: goto label_2c702c;
        case 0x2c7030u: goto label_2c7030;
        case 0x2c7034u: goto label_2c7034;
        case 0x2c7038u: goto label_2c7038;
        case 0x2c703cu: goto label_2c703c;
        case 0x2c7040u: goto label_2c7040;
        case 0x2c7044u: goto label_2c7044;
        case 0x2c7048u: goto label_2c7048;
        case 0x2c704cu: goto label_2c704c;
        case 0x2c7050u: goto label_2c7050;
        case 0x2c7054u: goto label_2c7054;
        case 0x2c7058u: goto label_2c7058;
        case 0x2c705cu: goto label_2c705c;
        case 0x2c7060u: goto label_2c7060;
        case 0x2c7064u: goto label_2c7064;
        case 0x2c7068u: goto label_2c7068;
        case 0x2c706cu: goto label_2c706c;
        case 0x2c7070u: goto label_2c7070;
        case 0x2c7074u: goto label_2c7074;
        case 0x2c7078u: goto label_2c7078;
        case 0x2c707cu: goto label_2c707c;
        case 0x2c7080u: goto label_2c7080;
        case 0x2c7084u: goto label_2c7084;
        case 0x2c7088u: goto label_2c7088;
        case 0x2c708cu: goto label_2c708c;
        case 0x2c7090u: goto label_2c7090;
        case 0x2c7094u: goto label_2c7094;
        case 0x2c7098u: goto label_2c7098;
        case 0x2c709cu: goto label_2c709c;
        case 0x2c70a0u: goto label_2c70a0;
        case 0x2c70a4u: goto label_2c70a4;
        case 0x2c70a8u: goto label_2c70a8;
        case 0x2c70acu: goto label_2c70ac;
        case 0x2c70b0u: goto label_2c70b0;
        case 0x2c70b4u: goto label_2c70b4;
        case 0x2c70b8u: goto label_2c70b8;
        case 0x2c70bcu: goto label_2c70bc;
        case 0x2c70c0u: goto label_2c70c0;
        case 0x2c70c4u: goto label_2c70c4;
        case 0x2c70c8u: goto label_2c70c8;
        case 0x2c70ccu: goto label_2c70cc;
        case 0x2c70d0u: goto label_2c70d0;
        case 0x2c70d4u: goto label_2c70d4;
        case 0x2c70d8u: goto label_2c70d8;
        case 0x2c70dcu: goto label_2c70dc;
        case 0x2c70e0u: goto label_2c70e0;
        case 0x2c70e4u: goto label_2c70e4;
        case 0x2c70e8u: goto label_2c70e8;
        case 0x2c70ecu: goto label_2c70ec;
        case 0x2c70f0u: goto label_2c70f0;
        case 0x2c70f4u: goto label_2c70f4;
        case 0x2c70f8u: goto label_2c70f8;
        case 0x2c70fcu: goto label_2c70fc;
        case 0x2c7100u: goto label_2c7100;
        case 0x2c7104u: goto label_2c7104;
        case 0x2c7108u: goto label_2c7108;
        case 0x2c710cu: goto label_2c710c;
        case 0x2c7110u: goto label_2c7110;
        case 0x2c7114u: goto label_2c7114;
        case 0x2c7118u: goto label_2c7118;
        case 0x2c711cu: goto label_2c711c;
        case 0x2c7120u: goto label_2c7120;
        case 0x2c7124u: goto label_2c7124;
        case 0x2c7128u: goto label_2c7128;
        case 0x2c712cu: goto label_2c712c;
        case 0x2c7130u: goto label_2c7130;
        case 0x2c7134u: goto label_2c7134;
        case 0x2c7138u: goto label_2c7138;
        case 0x2c713cu: goto label_2c713c;
        case 0x2c7140u: goto label_2c7140;
        case 0x2c7144u: goto label_2c7144;
        case 0x2c7148u: goto label_2c7148;
        case 0x2c714cu: goto label_2c714c;
        case 0x2c7150u: goto label_2c7150;
        case 0x2c7154u: goto label_2c7154;
        case 0x2c7158u: goto label_2c7158;
        case 0x2c715cu: goto label_2c715c;
        case 0x2c7160u: goto label_2c7160;
        case 0x2c7164u: goto label_2c7164;
        case 0x2c7168u: goto label_2c7168;
        case 0x2c716cu: goto label_2c716c;
        case 0x2c7170u: goto label_2c7170;
        case 0x2c7174u: goto label_2c7174;
        case 0x2c7178u: goto label_2c7178;
        case 0x2c717cu: goto label_2c717c;
        case 0x2c7180u: goto label_2c7180;
        case 0x2c7184u: goto label_2c7184;
        case 0x2c7188u: goto label_2c7188;
        case 0x2c718cu: goto label_2c718c;
        case 0x2c7190u: goto label_2c7190;
        case 0x2c7194u: goto label_2c7194;
        case 0x2c7198u: goto label_2c7198;
        case 0x2c719cu: goto label_2c719c;
        case 0x2c71a0u: goto label_2c71a0;
        case 0x2c71a4u: goto label_2c71a4;
        case 0x2c71a8u: goto label_2c71a8;
        case 0x2c71acu: goto label_2c71ac;
        case 0x2c71b0u: goto label_2c71b0;
        case 0x2c71b4u: goto label_2c71b4;
        case 0x2c71b8u: goto label_2c71b8;
        case 0x2c71bcu: goto label_2c71bc;
        case 0x2c71c0u: goto label_2c71c0;
        case 0x2c71c4u: goto label_2c71c4;
        case 0x2c71c8u: goto label_2c71c8;
        case 0x2c71ccu: goto label_2c71cc;
        case 0x2c71d0u: goto label_2c71d0;
        case 0x2c71d4u: goto label_2c71d4;
        case 0x2c71d8u: goto label_2c71d8;
        case 0x2c71dcu: goto label_2c71dc;
        case 0x2c71e0u: goto label_2c71e0;
        case 0x2c71e4u: goto label_2c71e4;
        case 0x2c71e8u: goto label_2c71e8;
        case 0x2c71ecu: goto label_2c71ec;
        case 0x2c71f0u: goto label_2c71f0;
        case 0x2c71f4u: goto label_2c71f4;
        case 0x2c71f8u: goto label_2c71f8;
        case 0x2c71fcu: goto label_2c71fc;
        case 0x2c7200u: goto label_2c7200;
        case 0x2c7204u: goto label_2c7204;
        case 0x2c7208u: goto label_2c7208;
        case 0x2c720cu: goto label_2c720c;
        case 0x2c7210u: goto label_2c7210;
        case 0x2c7214u: goto label_2c7214;
        case 0x2c7218u: goto label_2c7218;
        case 0x2c721cu: goto label_2c721c;
        case 0x2c7220u: goto label_2c7220;
        case 0x2c7224u: goto label_2c7224;
        case 0x2c7228u: goto label_2c7228;
        case 0x2c722cu: goto label_2c722c;
        case 0x2c7230u: goto label_2c7230;
        case 0x2c7234u: goto label_2c7234;
        case 0x2c7238u: goto label_2c7238;
        case 0x2c723cu: goto label_2c723c;
        case 0x2c7240u: goto label_2c7240;
        case 0x2c7244u: goto label_2c7244;
        case 0x2c7248u: goto label_2c7248;
        case 0x2c724cu: goto label_2c724c;
        case 0x2c7250u: goto label_2c7250;
        case 0x2c7254u: goto label_2c7254;
        case 0x2c7258u: goto label_2c7258;
        default: break;
    }

    ctx->pc = 0x2c6eb0u;

label_2c6eb0:
    // 0x2c6eb0: 0x27bda0d0  addiu       $sp, $sp, -0x5F30
    ctx->pc = 0x2c6eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294942928));
label_2c6eb4:
    // 0x2c6eb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c6eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c6eb8:
    // 0x2c6eb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c6eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2c6ebc:
    // 0x2c6ebc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c6ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c6ec0:
    // 0x2c6ec0: 0xc06421c  jal         func_190870
label_2c6ec4:
    if (ctx->pc == 0x2C6EC4u) {
        ctx->pc = 0x2C6EC4u;
            // 0x2c6ec4: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->pc = 0x2C6EC8u;
        goto label_2c6ec8;
    }
    ctx->pc = 0x2C6EC0u;
    SET_GPR_U32(ctx, 31, 0x2C6EC8u);
    ctx->pc = 0x2C6EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6EC0u;
            // 0x2c6ec4: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EC8u; }
        if (ctx->pc != 0x2C6EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EC8u; }
        if (ctx->pc != 0x2C6EC8u) { return; }
    }
    ctx->pc = 0x2C6EC8u;
label_2c6ec8:
    // 0x2c6ec8: 0xaf829d60  sw          $v0, -0x62A0($gp)
    ctx->pc = 0x2c6ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942048), GPR_U32(ctx, 2));
label_2c6ecc:
    // 0x2c6ecc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2c6eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2c6ed0:
    // 0x2c6ed0: 0x8f849d60  lw          $a0, -0x62A0($gp)
    ctx->pc = 0x2c6ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942048)));
label_2c6ed4:
    // 0x2c6ed4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2c6ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_2c6ed8:
    // 0x2c6ed8: 0x8c390548  lw          $t9, 0x548($at)
    ctx->pc = 0x2c6ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1352)));
label_2c6edc:
    // 0x2c6edc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c6edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c6ee0:
    // 0x2c6ee0: 0x320f809  jalr        $t9
label_2c6ee4:
    if (ctx->pc == 0x2C6EE4u) {
        ctx->pc = 0x2C6EE8u;
        goto label_2c6ee8;
    }
    ctx->pc = 0x2C6EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C6EE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6EE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EE8u; }
            if (ctx->pc != 0x2C6EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C6EE8u;
label_2c6ee8:
    // 0x2c6ee8: 0xc051878  jal         func_1461E0
label_2c6eec:
    if (ctx->pc == 0x2C6EECu) {
        ctx->pc = 0x2C6EF0u;
        goto label_2c6ef0;
    }
    ctx->pc = 0x2C6EE8u;
    SET_GPR_U32(ctx, 31, 0x2C6EF0u);
    ctx->pc = 0x1461E0u;
    if (runtime->hasFunction(0x1461E0u)) {
        auto targetFn = runtime->lookupFunction(0x1461E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EF0u; }
        if (ctx->pc != 0x2C6EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitFont__Fv_0x1461e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EF0u; }
        if (ctx->pc != 0x2C6EF0u) { return; }
    }
    ctx->pc = 0x2C6EF0u;
label_2c6ef0:
    // 0x2c6ef0: 0xc06423c  jal         func_1908F0
label_2c6ef4:
    if (ctx->pc == 0x2C6EF4u) {
        ctx->pc = 0x2C6EF8u;
        goto label_2c6ef8;
    }
    ctx->pc = 0x2C6EF0u;
    SET_GPR_U32(ctx, 31, 0x2C6EF8u);
    ctx->pc = 0x1908F0u;
    if (runtime->hasFunction(0x1908F0u)) {
        auto targetFn = runtime->lookupFunction(0x1908F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EF8u; }
        if (ctx->pc != 0x2C6EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainStack__Fv_0x1908f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EF8u; }
        if (ctx->pc != 0x2C6EF8u) { return; }
    }
    ctx->pc = 0x2C6EF8u;
label_2c6ef8:
    // 0x2c6ef8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2c6ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2c6efc:
    // 0x2c6efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f00:
    // 0x2c6f00: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2c6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_2c6f04:
    // 0x2c6f04: 0x83829d94  lb          $v0, -0x626C($gp)
    ctx->pc = 0x2c6f04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942100)));
label_2c6f08:
    // 0x2c6f08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2c6f0c:
    if (ctx->pc == 0x2C6F0Cu) {
        ctx->pc = 0x2C6F0Cu;
            // 0x2c6f0c: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2C6F10u;
        goto label_2c6f10;
    }
    ctx->pc = 0x2C6F08u;
    {
        const bool branch_taken_0x2c6f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F08u;
            // 0x2c6f0c: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f08) {
            ctx->pc = 0x2C6F20u;
            goto label_2c6f20;
        }
    }
    ctx->pc = 0x2C6F10u;
label_2c6f10:
    // 0x2c6f10: 0xc04e640  jal         func_139900
label_2c6f14:
    if (ctx->pc == 0x2C6F14u) {
        ctx->pc = 0x2C6F14u;
            // 0x2c6f14: 0x2484d360  addiu       $a0, $a0, -0x2CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955872));
        ctx->pc = 0x2C6F18u;
        goto label_2c6f18;
    }
    ctx->pc = 0x2C6F10u;
    SET_GPR_U32(ctx, 31, 0x2C6F18u);
    ctx->pc = 0x2C6F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F10u;
            // 0x2c6f14: 0x2484d360  addiu       $a0, $a0, -0x2CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F18u; }
        if (ctx->pc != 0x2C6F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F18u; }
        if (ctx->pc != 0x2C6F18u) { return; }
    }
    ctx->pc = 0x2C6F18u;
label_2c6f18:
    // 0x2c6f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6f1c:
    // 0x2c6f1c: 0xa3829d94  sb          $v0, -0x626C($gp)
    ctx->pc = 0x2c6f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942100), (uint8_t)GPR_U32(ctx, 2));
label_2c6f20:
    // 0x2c6f20: 0x83829d98  lb          $v0, -0x6268($gp)
    ctx->pc = 0x2c6f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942104)));
label_2c6f24:
    // 0x2c6f24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2c6f28:
    if (ctx->pc == 0x2C6F28u) {
        ctx->pc = 0x2C6F28u;
            // 0x2c6f28: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2C6F2Cu;
        goto label_2c6f2c;
    }
    ctx->pc = 0x2C6F24u;
    {
        const bool branch_taken_0x2c6f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F24u;
            // 0x2c6f28: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f24) {
            ctx->pc = 0x2C6F3Cu;
            goto label_2c6f3c;
        }
    }
    ctx->pc = 0x2C6F2Cu;
label_2c6f2c:
    // 0x2c6f2c: 0xc04e640  jal         func_139900
label_2c6f30:
    if (ctx->pc == 0x2C6F30u) {
        ctx->pc = 0x2C6F30u;
            // 0x2c6f30: 0x2484d390  addiu       $a0, $a0, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
        ctx->pc = 0x2C6F34u;
        goto label_2c6f34;
    }
    ctx->pc = 0x2C6F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C6F34u);
    ctx->pc = 0x2C6F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F2Cu;
            // 0x2c6f30: 0x2484d390  addiu       $a0, $a0, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F34u; }
        if (ctx->pc != 0x2C6F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F34u; }
        if (ctx->pc != 0x2C6F34u) { return; }
    }
    ctx->pc = 0x2C6F34u;
label_2c6f34:
    // 0x2c6f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6f38:
    // 0x2c6f38: 0xa3829d98  sb          $v0, -0x6268($gp)
    ctx->pc = 0x2c6f38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942104), (uint8_t)GPR_U32(ctx, 2));
label_2c6f3c:
    // 0x2c6f3c: 0x83829d9c  lb          $v0, -0x6264($gp)
    ctx->pc = 0x2c6f3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942108)));
label_2c6f40:
    // 0x2c6f40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2c6f44:
    if (ctx->pc == 0x2C6F44u) {
        ctx->pc = 0x2C6F44u;
            // 0x2c6f44: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2C6F48u;
        goto label_2c6f48;
    }
    ctx->pc = 0x2C6F40u;
    {
        const bool branch_taken_0x2c6f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F40u;
            // 0x2c6f44: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f40) {
            ctx->pc = 0x2C6F58u;
            goto label_2c6f58;
        }
    }
    ctx->pc = 0x2C6F48u;
label_2c6f48:
    // 0x2c6f48: 0xc04e640  jal         func_139900
label_2c6f4c:
    if (ctx->pc == 0x2C6F4Cu) {
        ctx->pc = 0x2C6F4Cu;
            // 0x2c6f4c: 0x2484d3c0  addiu       $a0, $a0, -0x2C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
        ctx->pc = 0x2C6F50u;
        goto label_2c6f50;
    }
    ctx->pc = 0x2C6F48u;
    SET_GPR_U32(ctx, 31, 0x2C6F50u);
    ctx->pc = 0x2C6F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F48u;
            // 0x2c6f4c: 0x2484d3c0  addiu       $a0, $a0, -0x2C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F50u; }
        if (ctx->pc != 0x2C6F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F50u; }
        if (ctx->pc != 0x2C6F50u) { return; }
    }
    ctx->pc = 0x2C6F50u;
label_2c6f50:
    // 0x2c6f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6f54:
    // 0x2c6f54: 0xa3829d9c  sb          $v0, -0x6264($gp)
    ctx->pc = 0x2c6f54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942108), (uint8_t)GPR_U32(ctx, 2));
label_2c6f58:
    // 0x2c6f58: 0x83829da0  lb          $v0, -0x6260($gp)
    ctx->pc = 0x2c6f58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942112)));
label_2c6f5c:
    // 0x2c6f5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2c6f60:
    if (ctx->pc == 0x2C6F60u) {
        ctx->pc = 0x2C6F60u;
            // 0x2c6f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F64u;
        goto label_2c6f64;
    }
    ctx->pc = 0x2C6F5Cu;
    {
        const bool branch_taken_0x2c6f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F5Cu;
            // 0x2c6f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f5c) {
            ctx->pc = 0x2C6F7Cu;
            goto label_2c6f7c;
        }
    }
    ctx->pc = 0x2C6F64u;
label_2c6f64:
    // 0x2c6f64: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c6f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c6f68:
    // 0x2c6f68: 0xc04e640  jal         func_139900
label_2c6f6c:
    if (ctx->pc == 0x2C6F6Cu) {
        ctx->pc = 0x2C6F6Cu;
            // 0x2c6f6c: 0x2484d3f0  addiu       $a0, $a0, -0x2C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956016));
        ctx->pc = 0x2C6F70u;
        goto label_2c6f70;
    }
    ctx->pc = 0x2C6F68u;
    SET_GPR_U32(ctx, 31, 0x2C6F70u);
    ctx->pc = 0x2C6F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F68u;
            // 0x2c6f6c: 0x2484d3f0  addiu       $a0, $a0, -0x2C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F70u; }
        if (ctx->pc != 0x2C6F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F70u; }
        if (ctx->pc != 0x2C6F70u) { return; }
    }
    ctx->pc = 0x2C6F70u;
label_2c6f70:
    // 0x2c6f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6f74:
    // 0x2c6f74: 0xa3829da0  sb          $v0, -0x6260($gp)
    ctx->pc = 0x2c6f74u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942112), (uint8_t)GPR_U32(ctx, 2));
label_2c6f78:
    // 0x2c6f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f7c:
    // 0x2c6f7c: 0xc04e704  jal         func_139C10
label_2c6f80:
    if (ctx->pc == 0x2C6F80u) {
        ctx->pc = 0x2C6F80u;
            // 0x2c6f80: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = 0x2C6F84u;
        goto label_2c6f84;
    }
    ctx->pc = 0x2C6F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C6F84u);
    ctx->pc = 0x2C6F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F7Cu;
            // 0x2c6f80: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F84u; }
        if (ctx->pc != 0x2C6F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F84u; }
        if (ctx->pc != 0x2C6F84u) { return; }
    }
    ctx->pc = 0x2C6F84u;
label_2c6f84:
    // 0x2c6f84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c6f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f88:
    // 0x2c6f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f8c:
    // 0x2c6f8c: 0xc04e704  jal         func_139C10
label_2c6f90:
    if (ctx->pc == 0x2C6F90u) {
        ctx->pc = 0x2C6F90u;
            // 0x2c6f90: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = 0x2C6F94u;
        goto label_2c6f94;
    }
    ctx->pc = 0x2C6F8Cu;
    SET_GPR_U32(ctx, 31, 0x2C6F94u);
    ctx->pc = 0x2C6F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F8Cu;
            // 0x2c6f90: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F94u; }
        if (ctx->pc != 0x2C6F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F94u; }
        if (ctx->pc != 0x2C6F94u) { return; }
    }
    ctx->pc = 0x2C6F94u;
label_2c6f94:
    // 0x2c6f94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f98:
    // 0x2c6f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f9c:
    // 0x2c6f9c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2c6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2c6fa0:
    // 0x2c6fa0: 0xc050784  jal         func_141E10
label_2c6fa4:
    if (ctx->pc == 0x2C6FA4u) {
        ctx->pc = 0x2C6FA4u;
            // 0x2c6fa4: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->pc = 0x2C6FA8u;
        goto label_2c6fa8;
    }
    ctx->pc = 0x2C6FA0u;
    SET_GPR_U32(ctx, 31, 0x2C6FA8u);
    ctx->pc = 0x2C6FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6FA0u;
            // 0x2c6fa4: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (runtime->hasFunction(0x141E10u)) {
        auto targetFn = runtime->lookupFunction(0x141E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FA8u; }
        if (ctx->pc != 0x2C6FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVif1Packet__FP1P1i_0x141e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FA8u; }
        if (ctx->pc != 0x2C6FA8u) { return; }
    }
    ctx->pc = 0x2C6FA8u;
label_2c6fa8:
    // 0x2c6fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fac:
    // 0x2c6fac: 0xc04e704  jal         func_139C10
label_2c6fb0:
    if (ctx->pc == 0x2C6FB0u) {
        ctx->pc = 0x2C6FB0u;
            // 0x2c6fb0: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x2C6FB4u;
        goto label_2c6fb4;
    }
    ctx->pc = 0x2C6FACu;
    SET_GPR_U32(ctx, 31, 0x2C6FB4u);
    ctx->pc = 0x2C6FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6FACu;
            // 0x2c6fb0: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FB4u; }
        if (ctx->pc != 0x2C6FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FB4u; }
        if (ctx->pc != 0x2C6FB4u) { return; }
    }
    ctx->pc = 0x2C6FB4u;
label_2c6fb4:
    // 0x2c6fb4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c6fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c6fb8:
    // 0x2c6fb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fbc:
    // 0x2c6fbc: 0x2484d360  addiu       $a0, $a0, -0x2CA0
    ctx->pc = 0x2c6fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955872));
label_2c6fc0:
    // 0x2c6fc0: 0xc04e79c  jal         func_139E70
label_2c6fc4:
    if (ctx->pc == 0x2C6FC4u) {
        ctx->pc = 0x2C6FC4u;
            // 0x2c6fc4: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x2C6FC8u;
        goto label_2c6fc8;
    }
    ctx->pc = 0x2C6FC0u;
    SET_GPR_U32(ctx, 31, 0x2C6FC8u);
    ctx->pc = 0x2C6FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6FC0u;
            // 0x2c6fc4: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FC8u; }
        if (ctx->pc != 0x2C6FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FC8u; }
        if (ctx->pc != 0x2C6FC8u) { return; }
    }
    ctx->pc = 0x2C6FC8u;
label_2c6fc8:
    // 0x2c6fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fcc:
    // 0x2c6fcc: 0xc04e704  jal         func_139C10
label_2c6fd0:
    if (ctx->pc == 0x2C6FD0u) {
        ctx->pc = 0x2C6FD0u;
            // 0x2c6fd0: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x2C6FD4u;
        goto label_2c6fd4;
    }
    ctx->pc = 0x2C6FCCu;
    SET_GPR_U32(ctx, 31, 0x2C6FD4u);
    ctx->pc = 0x2C6FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6FCCu;
            // 0x2c6fd0: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FD4u; }
        if (ctx->pc != 0x2C6FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FD4u; }
        if (ctx->pc != 0x2C6FD4u) { return; }
    }
    ctx->pc = 0x2C6FD4u;
label_2c6fd4:
    // 0x2c6fd4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c6fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c6fd8:
    // 0x2c6fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fdc:
    // 0x2c6fdc: 0x2484d390  addiu       $a0, $a0, -0x2C70
    ctx->pc = 0x2c6fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
label_2c6fe0:
    // 0x2c6fe0: 0xc04e79c  jal         func_139E70
label_2c6fe4:
    if (ctx->pc == 0x2C6FE4u) {
        ctx->pc = 0x2C6FE4u;
            // 0x2c6fe4: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x2C6FE8u;
        goto label_2c6fe8;
    }
    ctx->pc = 0x2C6FE0u;
    SET_GPR_U32(ctx, 31, 0x2C6FE8u);
    ctx->pc = 0x2C6FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6FE0u;
            // 0x2c6fe4: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FE8u; }
        if (ctx->pc != 0x2C6FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FE8u; }
        if (ctx->pc != 0x2C6FE8u) { return; }
    }
    ctx->pc = 0x2C6FE8u;
label_2c6fe8:
    // 0x2c6fe8: 0x3405ea60  ori         $a1, $zero, 0xEA60
    ctx->pc = 0x2c6fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_2c6fec:
    // 0x2c6fec: 0xc04e704  jal         func_139C10
label_2c6ff0:
    if (ctx->pc == 0x2C6FF0u) {
        ctx->pc = 0x2C6FF0u;
            // 0x2c6ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FF4u;
        goto label_2c6ff4;
    }
    ctx->pc = 0x2C6FECu;
    SET_GPR_U32(ctx, 31, 0x2C6FF4u);
    ctx->pc = 0x2C6FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6FECu;
            // 0x2c6ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FF4u; }
        if (ctx->pc != 0x2C6FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FF4u; }
        if (ctx->pc != 0x2C6FF4u) { return; }
    }
    ctx->pc = 0x2C6FF4u;
label_2c6ff4:
    // 0x2c6ff4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c6ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c6ff8:
    // 0x2c6ff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ffc:
    // 0x2c6ffc: 0x2484d3c0  addiu       $a0, $a0, -0x2C40
    ctx->pc = 0x2c6ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
label_2c7000:
    // 0x2c7000: 0xc04e79c  jal         func_139E70
label_2c7004:
    if (ctx->pc == 0x2C7004u) {
        ctx->pc = 0x2C7004u;
            // 0x2c7004: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->pc = 0x2C7008u;
        goto label_2c7008;
    }
    ctx->pc = 0x2C7000u;
    SET_GPR_U32(ctx, 31, 0x2C7008u);
    ctx->pc = 0x2C7004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7000u;
            // 0x2c7004: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7008u; }
        if (ctx->pc != 0x2C7008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7008u; }
        if (ctx->pc != 0x2C7008u) { return; }
    }
    ctx->pc = 0x2C7008u;
label_2c7008:
    // 0x2c7008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c700c:
    // 0x2c700c: 0xc04e704  jal         func_139C10
label_2c7010:
    if (ctx->pc == 0x2C7010u) {
        ctx->pc = 0x2C7010u;
            // 0x2c7010: 0x3405ea60  ori         $a1, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->pc = 0x2C7014u;
        goto label_2c7014;
    }
    ctx->pc = 0x2C700Cu;
    SET_GPR_U32(ctx, 31, 0x2C7014u);
    ctx->pc = 0x2C7010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C700Cu;
            // 0x2c7010: 0x3405ea60  ori         $a1, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7014u; }
        if (ctx->pc != 0x2C7014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7014u; }
        if (ctx->pc != 0x2C7014u) { return; }
    }
    ctx->pc = 0x2C7014u;
label_2c7014:
    // 0x2c7014: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c7014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c7018:
    // 0x2c7018: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c7018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c701c:
    // 0x2c701c: 0x2484d3f0  addiu       $a0, $a0, -0x2C10
    ctx->pc = 0x2c701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956016));
label_2c7020:
    // 0x2c7020: 0xc04e79c  jal         func_139E70
label_2c7024:
    if (ctx->pc == 0x2C7024u) {
        ctx->pc = 0x2C7024u;
            // 0x2c7024: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->pc = 0x2C7028u;
        goto label_2c7028;
    }
    ctx->pc = 0x2C7020u;
    SET_GPR_U32(ctx, 31, 0x2C7028u);
    ctx->pc = 0x2C7024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7020u;
            // 0x2c7024: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7028u; }
        if (ctx->pc != 0x2C7028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7028u; }
        if (ctx->pc != 0x2C7028u) { return; }
    }
    ctx->pc = 0x2C7028u;
label_2c7028:
    // 0x2c7028: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c7028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2c702c:
    // 0x2c702c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c702cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7030:
    // 0x2c7030: 0xc04e704  jal         func_139C10
label_2c7034:
    if (ctx->pc == 0x2C7034u) {
        ctx->pc = 0x2C7034u;
            // 0x2c7034: 0x344586a0  ori         $a1, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->pc = 0x2C7038u;
        goto label_2c7038;
    }
    ctx->pc = 0x2C7030u;
    SET_GPR_U32(ctx, 31, 0x2C7038u);
    ctx->pc = 0x2C7034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7030u;
            // 0x2c7034: 0x344586a0  ori         $a1, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7038u; }
        if (ctx->pc != 0x2C7038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7038u; }
        if (ctx->pc != 0x2C7038u) { return; }
    }
    ctx->pc = 0x2C7038u;
label_2c7038:
    // 0x2c7038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c7038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c703c:
    // 0x2c703c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c703cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c7040:
    // 0x2c7040: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c7040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2c7044:
    // 0x2c7044: 0x2484d300  addiu       $a0, $a0, -0x2D00
    ctx->pc = 0x2c7044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955776));
label_2c7048:
    // 0x2c7048: 0xc04e79c  jal         func_139E70
label_2c704c:
    if (ctx->pc == 0x2C704Cu) {
        ctx->pc = 0x2C704Cu;
            // 0x2c704c: 0x344686a0  ori         $a2, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->pc = 0x2C7050u;
        goto label_2c7050;
    }
    ctx->pc = 0x2C7048u;
    SET_GPR_U32(ctx, 31, 0x2C7050u);
    ctx->pc = 0x2C704Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7048u;
            // 0x2c704c: 0x344686a0  ori         $a2, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7050u; }
        if (ctx->pc != 0x2C7050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7050u; }
        if (ctx->pc != 0x2C7050u) { return; }
    }
    ctx->pc = 0x2C7050u;
label_2c7050:
    // 0x2c7050: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c7050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c7054:
    // 0x2c7054: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2c7054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2c7058:
    // 0x2c7058: 0x2484d360  addiu       $a0, $a0, -0x2CA0
    ctx->pc = 0x2c7058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955872));
label_2c705c:
    // 0x2c705c: 0xc0507bc  jal         func_141EF0
label_2c7060:
    if (ctx->pc == 0x2C7060u) {
        ctx->pc = 0x2C7060u;
            // 0x2c7060: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
        ctx->pc = 0x2C7064u;
        goto label_2c7064;
    }
    ctx->pc = 0x2C705Cu;
    SET_GPR_U32(ctx, 31, 0x2C7064u);
    ctx->pc = 0x2C7060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C705Cu;
            // 0x2c7060: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141EF0u;
    if (runtime->hasFunction(0x141EF0u)) {
        auto targetFn = runtime->lookupFunction(0x141EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7064u; }
        if (ctx->pc != 0x2C7064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7064u; }
        if (ctx->pc != 0x2C7064u) { return; }
    }
    ctx->pc = 0x2C7064u;
label_2c7064:
    // 0x2c7064: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c7064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c7068:
    // 0x2c7068: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2c7068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2c706c:
    // 0x2c706c: 0x2484d3c0  addiu       $a0, $a0, -0x2C40
    ctx->pc = 0x2c706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
label_2c7070:
    // 0x2c7070: 0x24a5d3f0  addiu       $a1, $a1, -0x2C10
    ctx->pc = 0x2c7070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956016));
label_2c7074:
    // 0x2c7074: 0xc050810  jal         func_142040
label_2c7078:
    if (ctx->pc == 0x2C7078u) {
        ctx->pc = 0x2C7078u;
            // 0x2c7078: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C707Cu;
        goto label_2c707c;
    }
    ctx->pc = 0x2C7074u;
    SET_GPR_U32(ctx, 31, 0x2C707Cu);
    ctx->pc = 0x2C7078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7074u;
            // 0x2c7078: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142040u;
    if (runtime->hasFunction(0x142040u)) {
        auto targetFn = runtime->lookupFunction(0x142040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C707Cu; }
        if (ctx->pc != 0x2C707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C707Cu; }
        if (ctx->pc != 0x2C707Cu) { return; }
    }
    ctx->pc = 0x2C707Cu;
label_2c707c:
    // 0x2c707c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c707cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7080:
    // 0x2c7080: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c7080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2c7084:
    // 0x2c7084: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2c7084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2c7088:
    // 0x2c7088: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c7088u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c708c:
    // 0x2c708c: 0xc050da0  jal         func_143680
label_2c7090:
    if (ctx->pc == 0x2C7090u) {
        ctx->pc = 0x2C7090u;
            // 0x2c7090: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2C7094u;
        goto label_2c7094;
    }
    ctx->pc = 0x2C708Cu;
    SET_GPR_U32(ctx, 31, 0x2C7094u);
    ctx->pc = 0x2C7090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C708Cu;
            // 0x2c7090: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143680u;
    if (runtime->hasFunction(0x143680u)) {
        auto targetFn = runtime->lookupFunction(0x143680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7094u; }
        if (ctx->pc != 0x2C7094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__Fffff_0x143680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7094u; }
        if (ctx->pc != 0x2C7094u) { return; }
    }
    ctx->pc = 0x2C7094u;
label_2c7094:
    // 0x2c7094: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2c7094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2c7098:
    // 0x2c7098: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2c7098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2c709c:
    // 0x2c709c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2c70a0:
    // 0x2c70a0: 0xc064278  jal         func_1909E0
label_2c70a4:
    if (ctx->pc == 0x2C70A4u) {
        ctx->pc = 0x2C70A4u;
            // 0x2c70a4: 0x24c6d300  addiu       $a2, $a2, -0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955776));
        ctx->pc = 0x2C70A8u;
        goto label_2c70a8;
    }
    ctx->pc = 0x2C70A0u;
    SET_GPR_U32(ctx, 31, 0x2C70A8u);
    ctx->pc = 0x2C70A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70A0u;
            // 0x2c70a4: 0x24c6d300  addiu       $a2, $a2, -0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909E0u;
    if (runtime->hasFunction(0x1909E0u)) {
        auto targetFn = runtime->lookupFunction(0x1909E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70A8u; }
        if (ctx->pc != 0x2C70A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTextureTable__FiiP9mgCMemory_0x1909e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70A8u; }
        if (ctx->pc != 0x2C70A8u) { return; }
    }
    ctx->pc = 0x2C70A8u;
label_2c70a8:
    // 0x2c70a8: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x2c70a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_2c70ac:
    // 0x2c70ac: 0xc0b61d8  jal         func_2D8760
label_2c70b0:
    if (ctx->pc == 0x2C70B0u) {
        ctx->pc = 0x2C70B0u;
            // 0x2c70b0: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->pc = 0x2C70B4u;
        goto label_2c70b4;
    }
    ctx->pc = 0x2C70ACu;
    SET_GPR_U32(ctx, 31, 0x2C70B4u);
    ctx->pc = 0x2C70B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70ACu;
            // 0x2c70b0: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8760u;
    if (runtime->hasFunction(0x2D8760u)) {
        auto targetFn = runtime->lookupFunction(0x2D8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70B4u; }
        if (ctx->pc != 0x2C70B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiImgPtr__Fv_0x2d8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70B4u; }
        if (ctx->pc != 0x2C70B4u) { return; }
    }
    ctx->pc = 0x2C70B4u;
label_2c70b4:
    // 0x2c70b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c70b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c70b8:
    // 0x2c70b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c70b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c70bc:
    // 0x2c70bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c70bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c70c0:
    // 0x2c70c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c70c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c70c4:
    // 0x2c70c4: 0xc04b6a4  jal         func_12DA90
label_2c70c8:
    if (ctx->pc == 0x2C70C8u) {
        ctx->pc = 0x2C70C8u;
            // 0x2c70c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C70CCu;
        goto label_2c70cc;
    }
    ctx->pc = 0x2C70C4u;
    SET_GPR_U32(ctx, 31, 0x2C70CCu);
    ctx->pc = 0x2C70C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70C4u;
            // 0x2c70c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70CCu; }
        if (ctx->pc != 0x2C70CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70CCu; }
        if (ctx->pc != 0x2C70CCu) { return; }
    }
    ctx->pc = 0x2C70CCu;
label_2c70cc:
    // 0x2c70cc: 0xc0b61f8  jal         func_2D87E0
label_2c70d0:
    if (ctx->pc == 0x2C70D0u) {
        ctx->pc = 0x2C70D4u;
        goto label_2c70d4;
    }
    ctx->pc = 0x2C70CCu;
    SET_GPR_U32(ctx, 31, 0x2C70D4u);
    ctx->pc = 0x2D87E0u;
    if (runtime->hasFunction(0x2D87E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70D4u; }
        if (ctx->pc != 0x2C70D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontTex2ImgPtr__Fv_0x2d87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70D4u; }
        if (ctx->pc != 0x2C70D4u) { return; }
    }
    ctx->pc = 0x2C70D4u;
label_2c70d4:
    // 0x2c70d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c70d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c70d8:
    // 0x2c70d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c70d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c70dc:
    // 0x2c70dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c70dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c70e0:
    // 0x2c70e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c70e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c70e4:
    // 0x2c70e4: 0xc04b6a4  jal         func_12DA90
label_2c70e8:
    if (ctx->pc == 0x2C70E8u) {
        ctx->pc = 0x2C70E8u;
            // 0x2c70e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C70ECu;
        goto label_2c70ec;
    }
    ctx->pc = 0x2C70E4u;
    SET_GPR_U32(ctx, 31, 0x2C70ECu);
    ctx->pc = 0x2C70E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70E4u;
            // 0x2c70e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70ECu; }
        if (ctx->pc != 0x2C70ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70ECu; }
        if (ctx->pc != 0x2C70ECu) { return; }
    }
    ctx->pc = 0x2C70ECu;
label_2c70ec:
    // 0x2c70ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c70ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c70f0:
    // 0x2c70f0: 0xc04e748  jal         func_139D20
label_2c70f4:
    if (ctx->pc == 0x2C70F4u) {
        ctx->pc = 0x2C70F4u;
            // 0x2c70f4: 0x24052396  addiu       $a1, $zero, 0x2396 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9110));
        ctx->pc = 0x2C70F8u;
        goto label_2c70f8;
    }
    ctx->pc = 0x2C70F0u;
    SET_GPR_U32(ctx, 31, 0x2C70F8u);
    ctx->pc = 0x2C70F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70F0u;
            // 0x2c70f4: 0x24052396  addiu       $a1, $zero, 0x2396 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9110));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70F8u; }
        if (ctx->pc != 0x2C70F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70F8u; }
        if (ctx->pc != 0x2C70F8u) { return; }
    }
    ctx->pc = 0x2C70F8u;
label_2c70f8:
    // 0x2c70f8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2c70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2c70fc:
    // 0x2c70fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c70fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7100:
    // 0x2c7100: 0xc04e638  jal         func_1398E0
label_2c7104:
    if (ctx->pc == 0x2C7104u) {
        ctx->pc = 0x2C7104u;
            // 0x2c7104: 0x34643940  ori         $a0, $v1, 0x3940 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14656);
        ctx->pc = 0x2C7108u;
        goto label_2c7108;
    }
    ctx->pc = 0x2C7100u;
    SET_GPR_U32(ctx, 31, 0x2C7108u);
    ctx->pc = 0x2C7104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7100u;
            // 0x2c7104: 0x34643940  ori         $a0, $v1, 0x3940 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14656);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7108u; }
        if (ctx->pc != 0x2C7108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7108u; }
        if (ctx->pc != 0x2C7108u) { return; }
    }
    ctx->pc = 0x2C7108u;
label_2c7108:
    // 0x2c7108: 0xaf829d64  sw          $v0, -0x629C($gp)
    ctx->pc = 0x2c7108u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942052), GPR_U32(ctx, 2));
label_2c710c:
    // 0x2c710c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7110:
    // 0x2c7110: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2c7110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2c7114:
    // 0x2c7114: 0xc04e748  jal         func_139D20
label_2c7118:
    if (ctx->pc == 0x2C7118u) {
        ctx->pc = 0x2C7118u;
            // 0x2c7118: 0xaf809d70  sw          $zero, -0x6290($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942064), GPR_U32(ctx, 0));
        ctx->pc = 0x2C711Cu;
        goto label_2c711c;
    }
    ctx->pc = 0x2C7114u;
    SET_GPR_U32(ctx, 31, 0x2C711Cu);
    ctx->pc = 0x2C7118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7114u;
            // 0x2c7118: 0xaf809d70  sw          $zero, -0x6290($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C711Cu; }
        if (ctx->pc != 0x2C711Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C711Cu; }
        if (ctx->pc != 0x2C711Cu) { return; }
    }
    ctx->pc = 0x2C711Cu;
label_2c711c:
    // 0x2c711c: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x2c711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_2c7120:
    // 0x2c7120: 0xc04e63c  jal         func_1398F0
label_2c7124:
    if (ctx->pc == 0x2C7124u) {
        ctx->pc = 0x2C7124u;
            // 0x2c7124: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7128u;
        goto label_2c7128;
    }
    ctx->pc = 0x2C7120u;
    SET_GPR_U32(ctx, 31, 0x2C7128u);
    ctx->pc = 0x2C7124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7120u;
            // 0x2c7124: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7128u; }
        if (ctx->pc != 0x2C7128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7128u; }
        if (ctx->pc != 0x2C7128u) { return; }
    }
    ctx->pc = 0x2C7128u;
label_2c7128:
    // 0x2c7128: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2c7128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c712c:
    // 0x2c712c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2c712cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2c7130:
    // 0x2c7130: 0xaf829d74  sw          $v0, -0x628C($gp)
    ctx->pc = 0x2c7130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942068), GPR_U32(ctx, 2));
label_2c7134:
    // 0x2c7134: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c7134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7138:
    // 0x2c7138: 0x2484ff18  addiu       $a0, $a0, -0xE8
    ctx->pc = 0x2c7138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967064));
label_2c713c:
    // 0x2c713c: 0x27a65f2c  addiu       $a2, $sp, 0x5F2C
    ctx->pc = 0x2c713cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24364));
label_2c7140:
    // 0x2c7140: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7144:
    // 0x2c7144: 0xa7809d78  sh          $zero, -0x6288($gp)
    ctx->pc = 0x2c7144u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942072), (uint16_t)GPR_U32(ctx, 0));
label_2c7148:
    // 0x2c7148: 0xa7809d7c  sh          $zero, -0x6284($gp)
    ctx->pc = 0x2c7148u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942076), (uint16_t)GPR_U32(ctx, 0));
label_2c714c:
    // 0x2c714c: 0xaf809d90  sw          $zero, -0x6270($gp)
    ctx->pc = 0x2c714cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942096), GPR_U32(ctx, 0));
label_2c7150:
    // 0x2c7150: 0xc0524dc  jal         func_149370
label_2c7154:
    if (ctx->pc == 0x2C7154u) {
        ctx->pc = 0x2C7154u;
            // 0x2c7154: 0xaf909d80  sw          $s0, -0x6280($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942080), GPR_U32(ctx, 16));
        ctx->pc = 0x2C7158u;
        goto label_2c7158;
    }
    ctx->pc = 0x2C7150u;
    SET_GPR_U32(ctx, 31, 0x2C7158u);
    ctx->pc = 0x2C7154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7150u;
            // 0x2c7154: 0xaf909d80  sw          $s0, -0x6280($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942080), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7158u; }
        if (ctx->pc != 0x2C7158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7158u; }
        if (ctx->pc != 0x2C7158u) { return; }
    }
    ctx->pc = 0x2C7158u;
label_2c7158:
    // 0x2c7158: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2c715c:
    if (ctx->pc == 0x2C715Cu) {
        ctx->pc = 0x2C715Cu;
            // 0x2c715c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7160u;
        goto label_2c7160;
    }
    ctx->pc = 0x2C7158u;
    {
        const bool branch_taken_0x2c7158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C715Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7158u;
            // 0x2c715c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7158) {
            ctx->pc = 0x2C7194u;
            goto label_2c7194;
        }
    }
    ctx->pc = 0x2C7160u;
label_2c7160:
    // 0x2c7160: 0xc051a7c  jal         func_1469F0
label_2c7164:
    if (ctx->pc == 0x2C7164u) {
        ctx->pc = 0x2C7164u;
            // 0x2c7164: 0x27a45050  addiu       $a0, $sp, 0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20560));
        ctx->pc = 0x2C7168u;
        goto label_2c7168;
    }
    ctx->pc = 0x2C7160u;
    SET_GPR_U32(ctx, 31, 0x2C7168u);
    ctx->pc = 0x2C7164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7160u;
            // 0x2c7164: 0x27a45050  addiu       $a0, $sp, 0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7168u; }
        if (ctx->pc != 0x2C7168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7168u; }
        if (ctx->pc != 0x2C7168u) { return; }
    }
    ctx->pc = 0x2C7168u;
label_2c7168:
    // 0x2c7168: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2c7168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_2c716c:
    // 0x2c716c: 0x27a45050  addiu       $a0, $sp, 0x5050
    ctx->pc = 0x2c716cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20560));
label_2c7170:
    // 0x2c7170: 0xc0519ec  jal         func_1467B0
label_2c7174:
    if (ctx->pc == 0x2C7174u) {
        ctx->pc = 0x2C7174u;
            // 0x2c7174: 0x24a552d0  addiu       $a1, $a1, 0x52D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21200));
        ctx->pc = 0x2C7178u;
        goto label_2c7178;
    }
    ctx->pc = 0x2C7170u;
    SET_GPR_U32(ctx, 31, 0x2C7178u);
    ctx->pc = 0x2C7174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7170u;
            // 0x2c7174: 0x24a552d0  addiu       $a1, $a1, 0x52D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7178u; }
        if (ctx->pc != 0x2C7178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7178u; }
        if (ctx->pc != 0x2C7178u) { return; }
    }
    ctx->pc = 0x2C7178u;
label_2c7178:
    // 0x2c7178: 0x8fa65f2c  lw          $a2, 0x5F2C($sp)
    ctx->pc = 0x2c7178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24364)));
label_2c717c:
    // 0x2c717c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c717cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7180:
    // 0x2c7180: 0xc051a60  jal         func_146980
label_2c7184:
    if (ctx->pc == 0x2C7184u) {
        ctx->pc = 0x2C7184u;
            // 0x2c7184: 0x27a45050  addiu       $a0, $sp, 0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20560));
        ctx->pc = 0x2C7188u;
        goto label_2c7188;
    }
    ctx->pc = 0x2C7180u;
    SET_GPR_U32(ctx, 31, 0x2C7188u);
    ctx->pc = 0x2C7184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7180u;
            // 0x2c7184: 0x27a45050  addiu       $a0, $sp, 0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7188u; }
        if (ctx->pc != 0x2C7188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7188u; }
        if (ctx->pc != 0x2C7188u) { return; }
    }
    ctx->pc = 0x2C7188u;
label_2c7188:
    // 0x2c7188: 0xc0519c8  jal         func_146720
label_2c718c:
    if (ctx->pc == 0x2C718Cu) {
        ctx->pc = 0x2C718Cu;
            // 0x2c718c: 0x27a45050  addiu       $a0, $sp, 0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20560));
        ctx->pc = 0x2C7190u;
        goto label_2c7190;
    }
    ctx->pc = 0x2C7188u;
    SET_GPR_U32(ctx, 31, 0x2C7190u);
    ctx->pc = 0x2C718Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7188u;
            // 0x2c718c: 0x27a45050  addiu       $a0, $sp, 0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7190u; }
        if (ctx->pc != 0x2C7190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7190u; }
        if (ctx->pc != 0x2C7190u) { return; }
    }
    ctx->pc = 0x2C7190u;
label_2c7190:
    // 0x2c7190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7194:
    // 0x2c7194: 0xc04e780  jal         func_139E00
label_2c7198:
    if (ctx->pc == 0x2C7198u) {
        ctx->pc = 0x2C719Cu;
        goto label_2c719c;
    }
    ctx->pc = 0x2C7194u;
    SET_GPR_U32(ctx, 31, 0x2C719Cu);
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C719Cu; }
        if (ctx->pc != 0x2C719Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C719Cu; }
        if (ctx->pc != 0x2C719Cu) { return; }
    }
    ctx->pc = 0x2C719Cu;
label_2c719c:
    // 0x2c719c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2c719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2c71a0:
    // 0x2c71a0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c71a4:
    // 0x2c71a4: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2c71a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2c71a8:
    // 0x2c71a8: 0x2484d330  addiu       $a0, $a0, -0x2CD0
    ctx->pc = 0x2c71a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955824));
label_2c71ac:
    // 0x2c71ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2c71acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2c71b0:
    // 0x2c71b0: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2c71b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c71b4:
    // 0x2c71b4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2c71b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2c71b8:
    // 0x2c71b8: 0xc04e79c  jal         func_139E70
label_2c71bc:
    if (ctx->pc == 0x2C71BCu) {
        ctx->pc = 0x2C71BCu;
            // 0x2c71bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2C71C0u;
        goto label_2c71c0;
    }
    ctx->pc = 0x2C71B8u;
    SET_GPR_U32(ctx, 31, 0x2C71C0u);
    ctx->pc = 0x2C71BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C71B8u;
            // 0x2c71bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C71C0u; }
        if (ctx->pc != 0x2C71C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C71C0u; }
        if (ctx->pc != 0x2C71C0u) { return; }
    }
    ctx->pc = 0x2C71C0u;
label_2c71c0:
    // 0x2c71c0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c71c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c71c4:
    // 0x2c71c4: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c71c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2c71c8:
    // 0x2c71c8: 0xac20d354  sw          $zero, -0x2CAC($at)
    ctx->pc = 0x2c71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955860), GPR_U32(ctx, 0));
label_2c71cc:
    // 0x2c71cc: 0x2484d330  addiu       $a0, $a0, -0x2CD0
    ctx->pc = 0x2c71ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955824));
label_2c71d0:
    // 0x2c71d0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2c71d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2c71d4:
    // 0x2c71d4: 0xc04e780  jal         func_139E00
label_2c71d8:
    if (ctx->pc == 0x2C71D8u) {
        ctx->pc = 0x2C71D8u;
            // 0x2c71d8: 0xac20d34c  sw          $zero, -0x2CB4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955852), GPR_U32(ctx, 0));
        ctx->pc = 0x2C71DCu;
        goto label_2c71dc;
    }
    ctx->pc = 0x2C71D4u;
    SET_GPR_U32(ctx, 31, 0x2C71DCu);
    ctx->pc = 0x2C71D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C71D4u;
            // 0x2c71d8: 0xac20d34c  sw          $zero, -0x2CB4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294955852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C71DCu; }
        if (ctx->pc != 0x2C71DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C71DCu; }
        if (ctx->pc != 0x2C71DCu) { return; }
    }
    ctx->pc = 0x2C71DCu;
label_2c71dc:
    // 0x2c71dc: 0xa7809d88  sh          $zero, -0x6278($gp)
    ctx->pc = 0x2c71dcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942088), (uint16_t)GPR_U32(ctx, 0));
label_2c71e0:
    // 0x2c71e0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2c71e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2c71e4:
    // 0x2c71e4: 0xa7809d8a  sh          $zero, -0x6276($gp)
    ctx->pc = 0x2c71e4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942090), (uint16_t)GPR_U32(ctx, 0));
label_2c71e8:
    // 0x2c71e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c71e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c71ec:
    // 0x2c71ec: 0xa7809d84  sh          $zero, -0x627C($gp)
    ctx->pc = 0x2c71ecu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942084), (uint16_t)GPR_U32(ctx, 0));
label_2c71f0:
    // 0x2c71f0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2c71f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2c71f4:
    // 0x2c71f4: 0xa7809d8c  sh          $zero, -0x6274($gp)
    ctx->pc = 0x2c71f4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294942092), (uint16_t)GPR_U32(ctx, 0));
label_2c71f8:
    // 0x2c71f8: 0x24c6ff20  addiu       $a2, $a2, -0xE0
    ctx->pc = 0x2c71f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967072));
label_2c71fc:
    // 0x2c71fc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2c71fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_2c7200:
    // 0x2c7200: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7204:
    // 0x2c7204: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x2c7204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_2c7208:
    // 0x2c7208: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x2c7208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_2c720c:
    // 0x2c720c: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x2c720cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_2c7210:
    // 0x2c7210: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x2c7210u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
label_2c7214:
    // 0x2c7214: 0xc04b450  jal         func_12D140
label_2c7218:
    if (ctx->pc == 0x2C7218u) {
        ctx->pc = 0x2C7218u;
            // 0x2c7218: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C721Cu;
        goto label_2c721c;
    }
    ctx->pc = 0x2C7214u;
    SET_GPR_U32(ctx, 31, 0x2C721Cu);
    ctx->pc = 0x2C7218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7214u;
            // 0x2c7218: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C721Cu; }
        if (ctx->pc != 0x2C721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C721Cu; }
        if (ctx->pc != 0x2C721Cu) { return; }
    }
    ctx->pc = 0x2C721Cu;
label_2c721c:
    // 0x2c721c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2c7220:
    // 0x2c7220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7224:
    // 0x2c7224: 0x24a5ff20  addiu       $a1, $a1, -0xE0
    ctx->pc = 0x2c7224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
label_2c7228:
    // 0x2c7228: 0xc04b414  jal         func_12D050
label_2c722c:
    if (ctx->pc == 0x2C722Cu) {
        ctx->pc = 0x2C722Cu;
            // 0x2c722c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2C7230u;
        goto label_2c7230;
    }
    ctx->pc = 0x2C7228u;
    SET_GPR_U32(ctx, 31, 0x2C7230u);
    ctx->pc = 0x2C722Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7228u;
            // 0x2c722c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7230u; }
        if (ctx->pc != 0x2C7230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7230u; }
        if (ctx->pc != 0x2C7230u) { return; }
    }
    ctx->pc = 0x2C7230u;
label_2c7230:
    // 0x2c7230: 0xc05047c  jal         func_1411F0
label_2c7234:
    if (ctx->pc == 0x2C7234u) {
        ctx->pc = 0x2C7234u;
            // 0x2c7234: 0xaf829d68  sw          $v0, -0x6298($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942056), GPR_U32(ctx, 2));
        ctx->pc = 0x2C7238u;
        goto label_2c7238;
    }
    ctx->pc = 0x2C7230u;
    SET_GPR_U32(ctx, 31, 0x2C7238u);
    ctx->pc = 0x2C7234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7230u;
            // 0x2c7234: 0xaf829d68  sw          $v0, -0x6298($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1411F0u;
    if (runtime->hasFunction(0x1411F0u)) {
        auto targetFn = runtime->lookupFunction(0x1411F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7238u; }
        if (ctx->pc != 0x2C7238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetPerformanceMeterFlag__Fv_0x1411f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7238u; }
        if (ctx->pc != 0x2C7238u) { return; }
    }
    ctx->pc = 0x2C7238u;
label_2c7238:
    // 0x2c7238: 0xaf829d6c  sw          $v0, -0x6294($gp)
    ctx->pc = 0x2c7238u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942060), GPR_U32(ctx, 2));
label_2c723c:
    // 0x2c723c: 0xc050478  jal         func_1411E0
label_2c7240:
    if (ctx->pc == 0x2C7240u) {
        ctx->pc = 0x2C7240u;
            // 0x2c7240: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7244u;
        goto label_2c7244;
    }
    ctx->pc = 0x2C723Cu;
    SET_GPR_U32(ctx, 31, 0x2C7244u);
    ctx->pc = 0x2C7240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C723Cu;
            // 0x2c7240: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1411E0u;
    if (runtime->hasFunction(0x1411E0u)) {
        auto targetFn = runtime->lookupFunction(0x1411E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7244u; }
        if (ctx->pc != 0x2C7244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPerformanceMeter__Fi_0x1411e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7244u; }
        if (ctx->pc != 0x2C7244u) { return; }
    }
    ctx->pc = 0x2C7244u;
label_2c7244:
    // 0x2c7244: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c7244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c7248:
    // 0x2c7248: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c7248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c724c:
    // 0x2c724c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c724cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7250:
    // 0x2c7250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c7250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7254:
    // 0x2c7254: 0x3e00008  jr          $ra
label_2c7258:
    if (ctx->pc == 0x2C7258u) {
        ctx->pc = 0x2C7258u;
            // 0x2c7258: 0x27bd5f30  addiu       $sp, $sp, 0x5F30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 24368));
        ctx->pc = 0x2C725Cu;
        goto label_fallthrough_0x2c7254;
    }
    ctx->pc = 0x2C7254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7254u;
            // 0x2c7258: 0x27bd5f30  addiu       $sp, $sp, 0x5F30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 24368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c7254:
    ctx->pc = 0x2C725Cu;
}
