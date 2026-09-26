#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgLoadMDSFile__FP10mgLoadData
// Address: 0x132e60 - 0x133254
void mgLoadMDSFile__FP10mgLoadData_0x132e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgLoadMDSFile__FP10mgLoadData_0x132e60");
#endif

    switch (ctx->pc) {
        case 0x132e60u: goto label_132e60;
        case 0x132e64u: goto label_132e64;
        case 0x132e68u: goto label_132e68;
        case 0x132e6cu: goto label_132e6c;
        case 0x132e70u: goto label_132e70;
        case 0x132e74u: goto label_132e74;
        case 0x132e78u: goto label_132e78;
        case 0x132e7cu: goto label_132e7c;
        case 0x132e80u: goto label_132e80;
        case 0x132e84u: goto label_132e84;
        case 0x132e88u: goto label_132e88;
        case 0x132e8cu: goto label_132e8c;
        case 0x132e90u: goto label_132e90;
        case 0x132e94u: goto label_132e94;
        case 0x132e98u: goto label_132e98;
        case 0x132e9cu: goto label_132e9c;
        case 0x132ea0u: goto label_132ea0;
        case 0x132ea4u: goto label_132ea4;
        case 0x132ea8u: goto label_132ea8;
        case 0x132eacu: goto label_132eac;
        case 0x132eb0u: goto label_132eb0;
        case 0x132eb4u: goto label_132eb4;
        case 0x132eb8u: goto label_132eb8;
        case 0x132ebcu: goto label_132ebc;
        case 0x132ec0u: goto label_132ec0;
        case 0x132ec4u: goto label_132ec4;
        case 0x132ec8u: goto label_132ec8;
        case 0x132eccu: goto label_132ecc;
        case 0x132ed0u: goto label_132ed0;
        case 0x132ed4u: goto label_132ed4;
        case 0x132ed8u: goto label_132ed8;
        case 0x132edcu: goto label_132edc;
        case 0x132ee0u: goto label_132ee0;
        case 0x132ee4u: goto label_132ee4;
        case 0x132ee8u: goto label_132ee8;
        case 0x132eecu: goto label_132eec;
        case 0x132ef0u: goto label_132ef0;
        case 0x132ef4u: goto label_132ef4;
        case 0x132ef8u: goto label_132ef8;
        case 0x132efcu: goto label_132efc;
        case 0x132f00u: goto label_132f00;
        case 0x132f04u: goto label_132f04;
        case 0x132f08u: goto label_132f08;
        case 0x132f0cu: goto label_132f0c;
        case 0x132f10u: goto label_132f10;
        case 0x132f14u: goto label_132f14;
        case 0x132f18u: goto label_132f18;
        case 0x132f1cu: goto label_132f1c;
        case 0x132f20u: goto label_132f20;
        case 0x132f24u: goto label_132f24;
        case 0x132f28u: goto label_132f28;
        case 0x132f2cu: goto label_132f2c;
        case 0x132f30u: goto label_132f30;
        case 0x132f34u: goto label_132f34;
        case 0x132f38u: goto label_132f38;
        case 0x132f3cu: goto label_132f3c;
        case 0x132f40u: goto label_132f40;
        case 0x132f44u: goto label_132f44;
        case 0x132f48u: goto label_132f48;
        case 0x132f4cu: goto label_132f4c;
        case 0x132f50u: goto label_132f50;
        case 0x132f54u: goto label_132f54;
        case 0x132f58u: goto label_132f58;
        case 0x132f5cu: goto label_132f5c;
        case 0x132f60u: goto label_132f60;
        case 0x132f64u: goto label_132f64;
        case 0x132f68u: goto label_132f68;
        case 0x132f6cu: goto label_132f6c;
        case 0x132f70u: goto label_132f70;
        case 0x132f74u: goto label_132f74;
        case 0x132f78u: goto label_132f78;
        case 0x132f7cu: goto label_132f7c;
        case 0x132f80u: goto label_132f80;
        case 0x132f84u: goto label_132f84;
        case 0x132f88u: goto label_132f88;
        case 0x132f8cu: goto label_132f8c;
        case 0x132f90u: goto label_132f90;
        case 0x132f94u: goto label_132f94;
        case 0x132f98u: goto label_132f98;
        case 0x132f9cu: goto label_132f9c;
        case 0x132fa0u: goto label_132fa0;
        case 0x132fa4u: goto label_132fa4;
        case 0x132fa8u: goto label_132fa8;
        case 0x132facu: goto label_132fac;
        case 0x132fb0u: goto label_132fb0;
        case 0x132fb4u: goto label_132fb4;
        case 0x132fb8u: goto label_132fb8;
        case 0x132fbcu: goto label_132fbc;
        case 0x132fc0u: goto label_132fc0;
        case 0x132fc4u: goto label_132fc4;
        case 0x132fc8u: goto label_132fc8;
        case 0x132fccu: goto label_132fcc;
        case 0x132fd0u: goto label_132fd0;
        case 0x132fd4u: goto label_132fd4;
        case 0x132fd8u: goto label_132fd8;
        case 0x132fdcu: goto label_132fdc;
        case 0x132fe0u: goto label_132fe0;
        case 0x132fe4u: goto label_132fe4;
        case 0x132fe8u: goto label_132fe8;
        case 0x132fecu: goto label_132fec;
        case 0x132ff0u: goto label_132ff0;
        case 0x132ff4u: goto label_132ff4;
        case 0x132ff8u: goto label_132ff8;
        case 0x132ffcu: goto label_132ffc;
        case 0x133000u: goto label_133000;
        case 0x133004u: goto label_133004;
        case 0x133008u: goto label_133008;
        case 0x13300cu: goto label_13300c;
        case 0x133010u: goto label_133010;
        case 0x133014u: goto label_133014;
        case 0x133018u: goto label_133018;
        case 0x13301cu: goto label_13301c;
        case 0x133020u: goto label_133020;
        case 0x133024u: goto label_133024;
        case 0x133028u: goto label_133028;
        case 0x13302cu: goto label_13302c;
        case 0x133030u: goto label_133030;
        case 0x133034u: goto label_133034;
        case 0x133038u: goto label_133038;
        case 0x13303cu: goto label_13303c;
        case 0x133040u: goto label_133040;
        case 0x133044u: goto label_133044;
        case 0x133048u: goto label_133048;
        case 0x13304cu: goto label_13304c;
        case 0x133050u: goto label_133050;
        case 0x133054u: goto label_133054;
        case 0x133058u: goto label_133058;
        case 0x13305cu: goto label_13305c;
        case 0x133060u: goto label_133060;
        case 0x133064u: goto label_133064;
        case 0x133068u: goto label_133068;
        case 0x13306cu: goto label_13306c;
        case 0x133070u: goto label_133070;
        case 0x133074u: goto label_133074;
        case 0x133078u: goto label_133078;
        case 0x13307cu: goto label_13307c;
        case 0x133080u: goto label_133080;
        case 0x133084u: goto label_133084;
        case 0x133088u: goto label_133088;
        case 0x13308cu: goto label_13308c;
        case 0x133090u: goto label_133090;
        case 0x133094u: goto label_133094;
        case 0x133098u: goto label_133098;
        case 0x13309cu: goto label_13309c;
        case 0x1330a0u: goto label_1330a0;
        case 0x1330a4u: goto label_1330a4;
        case 0x1330a8u: goto label_1330a8;
        case 0x1330acu: goto label_1330ac;
        case 0x1330b0u: goto label_1330b0;
        case 0x1330b4u: goto label_1330b4;
        case 0x1330b8u: goto label_1330b8;
        case 0x1330bcu: goto label_1330bc;
        case 0x1330c0u: goto label_1330c0;
        case 0x1330c4u: goto label_1330c4;
        case 0x1330c8u: goto label_1330c8;
        case 0x1330ccu: goto label_1330cc;
        case 0x1330d0u: goto label_1330d0;
        case 0x1330d4u: goto label_1330d4;
        case 0x1330d8u: goto label_1330d8;
        case 0x1330dcu: goto label_1330dc;
        case 0x1330e0u: goto label_1330e0;
        case 0x1330e4u: goto label_1330e4;
        case 0x1330e8u: goto label_1330e8;
        case 0x1330ecu: goto label_1330ec;
        case 0x1330f0u: goto label_1330f0;
        case 0x1330f4u: goto label_1330f4;
        case 0x1330f8u: goto label_1330f8;
        case 0x1330fcu: goto label_1330fc;
        case 0x133100u: goto label_133100;
        case 0x133104u: goto label_133104;
        case 0x133108u: goto label_133108;
        case 0x13310cu: goto label_13310c;
        case 0x133110u: goto label_133110;
        case 0x133114u: goto label_133114;
        case 0x133118u: goto label_133118;
        case 0x13311cu: goto label_13311c;
        case 0x133120u: goto label_133120;
        case 0x133124u: goto label_133124;
        case 0x133128u: goto label_133128;
        case 0x13312cu: goto label_13312c;
        case 0x133130u: goto label_133130;
        case 0x133134u: goto label_133134;
        case 0x133138u: goto label_133138;
        case 0x13313cu: goto label_13313c;
        case 0x133140u: goto label_133140;
        case 0x133144u: goto label_133144;
        case 0x133148u: goto label_133148;
        case 0x13314cu: goto label_13314c;
        case 0x133150u: goto label_133150;
        case 0x133154u: goto label_133154;
        case 0x133158u: goto label_133158;
        case 0x13315cu: goto label_13315c;
        case 0x133160u: goto label_133160;
        case 0x133164u: goto label_133164;
        case 0x133168u: goto label_133168;
        case 0x13316cu: goto label_13316c;
        case 0x133170u: goto label_133170;
        case 0x133174u: goto label_133174;
        case 0x133178u: goto label_133178;
        case 0x13317cu: goto label_13317c;
        case 0x133180u: goto label_133180;
        case 0x133184u: goto label_133184;
        case 0x133188u: goto label_133188;
        case 0x13318cu: goto label_13318c;
        case 0x133190u: goto label_133190;
        case 0x133194u: goto label_133194;
        case 0x133198u: goto label_133198;
        case 0x13319cu: goto label_13319c;
        case 0x1331a0u: goto label_1331a0;
        case 0x1331a4u: goto label_1331a4;
        case 0x1331a8u: goto label_1331a8;
        case 0x1331acu: goto label_1331ac;
        case 0x1331b0u: goto label_1331b0;
        case 0x1331b4u: goto label_1331b4;
        case 0x1331b8u: goto label_1331b8;
        case 0x1331bcu: goto label_1331bc;
        case 0x1331c0u: goto label_1331c0;
        case 0x1331c4u: goto label_1331c4;
        case 0x1331c8u: goto label_1331c8;
        case 0x1331ccu: goto label_1331cc;
        case 0x1331d0u: goto label_1331d0;
        case 0x1331d4u: goto label_1331d4;
        case 0x1331d8u: goto label_1331d8;
        case 0x1331dcu: goto label_1331dc;
        case 0x1331e0u: goto label_1331e0;
        case 0x1331e4u: goto label_1331e4;
        case 0x1331e8u: goto label_1331e8;
        case 0x1331ecu: goto label_1331ec;
        case 0x1331f0u: goto label_1331f0;
        case 0x1331f4u: goto label_1331f4;
        case 0x1331f8u: goto label_1331f8;
        case 0x1331fcu: goto label_1331fc;
        case 0x133200u: goto label_133200;
        case 0x133204u: goto label_133204;
        case 0x133208u: goto label_133208;
        case 0x13320cu: goto label_13320c;
        case 0x133210u: goto label_133210;
        case 0x133214u: goto label_133214;
        case 0x133218u: goto label_133218;
        case 0x13321cu: goto label_13321c;
        case 0x133220u: goto label_133220;
        case 0x133224u: goto label_133224;
        case 0x133228u: goto label_133228;
        case 0x13322cu: goto label_13322c;
        case 0x133230u: goto label_133230;
        case 0x133234u: goto label_133234;
        case 0x133238u: goto label_133238;
        case 0x13323cu: goto label_13323c;
        case 0x133240u: goto label_133240;
        case 0x133244u: goto label_133244;
        case 0x133248u: goto label_133248;
        case 0x13324cu: goto label_13324c;
        case 0x133250u: goto label_133250;
        default: break;
    }

    ctx->pc = 0x132e60u;

label_132e60:
    // 0x132e60: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x132e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_132e64:
    // 0x132e64: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x132e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_132e68:
    // 0x132e68: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x132e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_132e6c:
    // 0x132e6c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x132e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_132e70:
    // 0x132e70: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x132e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_132e74:
    // 0x132e74: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x132e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_132e78:
    // 0x132e78: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x132e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_132e7c:
    // 0x132e7c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x132e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_132e80:
    // 0x132e80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x132e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_132e84:
    // 0x132e84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x132e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_132e88:
    // 0x132e88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x132e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_132e8c:
    // 0x132e8c: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x132e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_132e90:
    // 0x132e90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x132e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_132e94:
    // 0x132e94: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x132e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_132e98:
    // 0x132e98: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x132e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_132e9c:
    // 0x132e9c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x132e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_132ea0:
    // 0x132ea0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x132ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_132ea4:
    // 0x132ea4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x132ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_132ea8:
    // 0x132ea8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x132ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_132eac:
    // 0x132eac: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x132eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_132eb0:
    // 0x132eb0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x132eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_132eb4:
    // 0x132eb4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x132eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_132eb8:
    // 0x132eb8: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_132ebc:
    if (ctx->pc == 0x132EBCu) {
        ctx->pc = 0x132EC0u;
        goto label_132ec0;
    }
    ctx->pc = 0x132EB8u;
    {
        const bool branch_taken_0x132eb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x132eb8) {
            ctx->pc = 0x132ECCu;
            goto label_132ecc;
        }
    }
    ctx->pc = 0x132EC0u;
label_132ec0:
    // 0x132ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132ec4:
    // 0x132ec4: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_132ec8:
    if (ctx->pc == 0x132EC8u) {
        ctx->pc = 0x132ECCu;
        goto label_132ecc;
    }
    ctx->pc = 0x132EC4u;
    {
        const bool branch_taken_0x132ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ec4) {
            ctx->pc = 0x133220u;
            goto label_133220;
        }
    }
    ctx->pc = 0x132ECCu;
label_132ecc:
    // 0x132ecc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x132eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_132ed0:
    // 0x132ed0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_132ed4:
    if (ctx->pc == 0x132ED4u) {
        ctx->pc = 0x132ED8u;
        goto label_132ed8;
    }
    ctx->pc = 0x132ED0u;
    {
        const bool branch_taken_0x132ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132ed0) {
            ctx->pc = 0x132EE4u;
            goto label_132ee4;
        }
    }
    ctx->pc = 0x132ED8u;
label_132ed8:
    // 0x132ed8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x132ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_132edc:
    // 0x132edc: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x132edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_132ee0:
    // 0x132ee0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x132ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_132ee4:
    // 0x132ee4: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x132ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
label_132ee8:
    // 0x132ee8: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
label_132eec:
    if (ctx->pc == 0x132EECu) {
        ctx->pc = 0x132EF0u;
        goto label_132ef0;
    }
    ctx->pc = 0x132EE8u;
    {
        const bool branch_taken_0x132ee8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x132ee8) {
            ctx->pc = 0x132EFCu;
            goto label_132efc;
        }
    }
    ctx->pc = 0x132EF0u;
label_132ef0:
    // 0x132ef0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_132ef4:
    if (ctx->pc == 0x132EF4u) {
        ctx->pc = 0x132EF8u;
        goto label_132ef8;
    }
    ctx->pc = 0x132EF0u;
    {
        const bool branch_taken_0x132ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ef0) {
            ctx->pc = 0x132EFCu;
            goto label_132efc;
        }
    }
    ctx->pc = 0x132EF8u;
label_132ef8:
    // 0x132ef8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x132ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_132efc:
    // 0x132efc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_132f00:
    if (ctx->pc == 0x132F00u) {
        ctx->pc = 0x132F04u;
        goto label_132f04;
    }
    ctx->pc = 0x132EFCu;
    {
        const bool branch_taken_0x132efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132efc) {
            ctx->pc = 0x132F18u;
            goto label_132f18;
        }
    }
    ctx->pc = 0x132F04u;
label_132f04:
    // 0x132f04: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x132f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_132f08:
    // 0x132f08: 0x24842550  addiu       $a0, $a0, 0x2550
    ctx->pc = 0x132f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9552));
label_132f0c:
    // 0x132f0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132f10:
    // 0x132f10: 0xc04a0d2  jal         func_128348
label_132f14:
    if (ctx->pc == 0x132F14u) {
        ctx->pc = 0x132F18u;
        goto label_132f18;
    }
    ctx->pc = 0x132F10u;
    SET_GPR_U32(ctx, 31, 0x132F18u);
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132F18u; }
        if (ctx->pc != 0x132F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132F18u; }
        if (ctx->pc != 0x132F18u) { return; }
    }
    ctx->pc = 0x132F18u;
label_132f18:
    // 0x132f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132f1c:
    // 0x132f1c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x132f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_132f20:
    // 0x132f20: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x132f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_132f24:
    // 0x132f24: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x132f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_132f28:
    // 0x132f28: 0x24a52530  addiu       $a1, $a1, 0x2530
    ctx->pc = 0x132f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9520));
label_132f2c:
    // 0x132f2c: 0xc04c980  jal         func_132600
label_132f30:
    if (ctx->pc == 0x132F30u) {
        ctx->pc = 0x132F34u;
        goto label_132f34;
    }
    ctx->pc = 0x132F2Cu;
    SET_GPR_U32(ctx, 31, 0x132F34u);
    ctx->pc = 0x132600u;
    if (runtime->hasFunction(0x132600u)) {
        auto targetFn = runtime->lookupFunction(0x132600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132F34u; }
        if (ctx->pc != 0x132F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchVisualType__FP18mgCreateVisualTypePc_0x132600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132F34u; }
        if (ctx->pc != 0x132F34u) { return; }
    }
    ctx->pc = 0x132F34u;
label_132f34:
    // 0x132f34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_132f38:
    if (ctx->pc == 0x132F38u) {
        ctx->pc = 0x132F3Cu;
        goto label_132f3c;
    }
    ctx->pc = 0x132F34u;
    {
        const bool branch_taken_0x132f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f34) {
            ctx->pc = 0x132F44u;
            goto label_132f44;
        }
    }
    ctx->pc = 0x132F3Cu;
label_132f3c:
    // 0x132f3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x132f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132f40:
    // 0x132f40: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x132f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_132f44:
    // 0x132f44: 0x83828720  lb          $v0, -0x78E0($gp)
    ctx->pc = 0x132f44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936352)));
label_132f48:
    // 0x132f48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_132f4c:
    if (ctx->pc == 0x132F4Cu) {
        ctx->pc = 0x132F50u;
        goto label_132f50;
    }
    ctx->pc = 0x132F48u;
    {
        const bool branch_taken_0x132f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132f48) {
            ctx->pc = 0x132F5Cu;
            goto label_132f5c;
        }
    }
    ctx->pc = 0x132F50u;
label_132f50:
    // 0x132f50: 0xaf80871c  sw          $zero, -0x78E4($gp)
    ctx->pc = 0x132f50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 0));
label_132f54:
    // 0x132f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132f58:
    // 0x132f58: 0xa3828720  sb          $v0, -0x78E0($gp)
    ctx->pc = 0x132f58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936352), (uint8_t)GPR_U32(ctx, 2));
label_132f5c:
    // 0x132f5c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x132f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_132f60:
    // 0x132f60: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x132f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_132f64:
    // 0x132f64: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x132f64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_132f68:
    // 0x132f68: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x132f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_132f6c:
    // 0x132f6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x132f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_132f70:
    // 0x132f70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x132f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_132f74:
    // 0x132f74: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x132f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_132f78:
    // 0x132f78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_132f7c:
    if (ctx->pc == 0x132F7Cu) {
        ctx->pc = 0x132F80u;
        goto label_132f80;
    }
    ctx->pc = 0x132F78u;
    {
        const bool branch_taken_0x132f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f78) {
            ctx->pc = 0x132F90u;
            goto label_132f90;
        }
    }
    ctx->pc = 0x132F80u;
label_132f80:
    // 0x132f80: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x132f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_132f84:
    // 0x132f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_132f88:
    // 0x132f88: 0x10000002  b           . + 4 + (0x2 << 2)
label_132f8c:
    if (ctx->pc == 0x132F8Cu) {
        ctx->pc = 0x132F90u;
        goto label_132f90;
    }
    ctx->pc = 0x132F88u;
    {
        const bool branch_taken_0x132f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f88) {
            ctx->pc = 0x132F94u;
            goto label_132f94;
        }
    }
    ctx->pc = 0x132F90u;
label_132f90:
    // 0x132f90: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x132f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_132f94:
    // 0x132f94: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x132f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_132f98:
    // 0x132f98: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x132f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_132f9c:
    // 0x132f9c: 0xc04e748  jal         func_139D20
label_132fa0:
    if (ctx->pc == 0x132FA0u) {
        ctx->pc = 0x132FA4u;
        goto label_132fa4;
    }
    ctx->pc = 0x132F9Cu;
    SET_GPR_U32(ctx, 31, 0x132FA4u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132FA4u; }
        if (ctx->pc != 0x132FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132FA4u; }
        if (ctx->pc != 0x132FA4u) { return; }
    }
    ctx->pc = 0x132FA4u;
label_132fa4:
    // 0x132fa4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x132fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_132fa8:
    // 0x132fa8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x132fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_132fac:
    // 0x132fac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x132facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_132fb0:
    // 0x132fb0: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x132fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_132fb4:
    // 0x132fb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132fb8:
    // 0x132fb8: 0xc04e63c  jal         func_1398F0
label_132fbc:
    if (ctx->pc == 0x132FBCu) {
        ctx->pc = 0x132FC0u;
        goto label_132fc0;
    }
    ctx->pc = 0x132FB8u;
    SET_GPR_U32(ctx, 31, 0x132FC0u);
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132FC0u; }
        if (ctx->pc != 0x132FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132FC0u; }
        if (ctx->pc != 0x132FC0u) { return; }
    }
    ctx->pc = 0x132FC0u;
label_132fc0:
    // 0x132fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x132fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132fc4:
    // 0x132fc4: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
label_132fc8:
    // 0x132fc8: 0x24a56490  addiu       $a1, $a1, 0x6490
    ctx->pc = 0x132fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25744));
label_132fcc:
    // 0x132fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132fd0:
    // 0x132fd0: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x132fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_132fd4:
    // 0x132fd4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x132fd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132fd8:
    // 0x132fd8: 0xc0400bc  jal         func_1002F0
label_132fdc:
    if (ctx->pc == 0x132FDCu) {
        ctx->pc = 0x132FE0u;
        goto label_132fe0;
    }
    ctx->pc = 0x132FD8u;
    SET_GPR_U32(ctx, 31, 0x132FE0u);
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132FE0u; }
        if (ctx->pc != 0x132FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132FE0u; }
        if (ctx->pc != 0x132FE0u) { return; }
    }
    ctx->pc = 0x132FE0u;
label_132fe0:
    // 0x132fe0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x132fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132fe4:
    // 0x132fe4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x132fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_132fe8:
    // 0x132fe8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x132fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_132fec:
    // 0x132fec: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x132fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_132ff0:
    // 0x132ff0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_132ff4:
    if (ctx->pc == 0x132FF4u) {
        ctx->pc = 0x132FF8u;
        goto label_132ff8;
    }
    ctx->pc = 0x132FF0u;
    {
        const bool branch_taken_0x132ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ff0) {
            ctx->pc = 0x133008u;
            goto label_133008;
        }
    }
    ctx->pc = 0x132FF8u;
label_132ff8:
    // 0x132ff8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x132ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_132ffc:
    // 0x132ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_133000:
    // 0x133000: 0x10000002  b           . + 4 + (0x2 << 2)
label_133004:
    if (ctx->pc == 0x133004u) {
        ctx->pc = 0x133008u;
        goto label_133008;
    }
    ctx->pc = 0x133000u;
    {
        const bool branch_taken_0x133000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133000) {
            ctx->pc = 0x13300Cu;
            goto label_13300c;
        }
    }
    ctx->pc = 0x133008u;
label_133008:
    // 0x133008: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x133008u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_13300c:
    // 0x13300c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x13300cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_133010:
    // 0x133010: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x133010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_133014:
    // 0x133014: 0xc04e748  jal         func_139D20
label_133018:
    if (ctx->pc == 0x133018u) {
        ctx->pc = 0x13301Cu;
        goto label_13301c;
    }
    ctx->pc = 0x133014u;
    SET_GPR_U32(ctx, 31, 0x13301Cu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13301Cu; }
        if (ctx->pc != 0x13301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13301Cu; }
        if (ctx->pc != 0x13301Cu) { return; }
    }
    ctx->pc = 0x13301Cu;
label_13301c:
    // 0x13301c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x13301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_133020:
    // 0x133020: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x133020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_133024:
    // 0x133024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133028:
    // 0x133028: 0xc04e63c  jal         func_1398F0
label_13302c:
    if (ctx->pc == 0x13302Cu) {
        ctx->pc = 0x133030u;
        goto label_133030;
    }
    ctx->pc = 0x133028u;
    SET_GPR_U32(ctx, 31, 0x133030u);
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133030u; }
        if (ctx->pc != 0x133030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133030u; }
        if (ctx->pc != 0x133030u) { return; }
    }
    ctx->pc = 0x133030u;
label_133030:
    // 0x133030: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x133030u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133034:
    // 0x133034: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x133034u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133038:
    // 0x133038: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x133038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_13303c:
    // 0x13303c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_133040:
    if (ctx->pc == 0x133040u) {
        ctx->pc = 0x133044u;
        goto label_133044;
    }
    ctx->pc = 0x13303Cu;
    {
        const bool branch_taken_0x13303c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13303c) {
            ctx->pc = 0x13309Cu;
            goto label_13309c;
        }
    }
    ctx->pc = 0x133044u;
label_133044:
    // 0x133044: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x133044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_133048:
    // 0x133048: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x133048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_13304c:
    // 0x13304c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x13304cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_133050:
    // 0x133050: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x133050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_133054:
    // 0x133054: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_133058:
    if (ctx->pc == 0x133058u) {
        ctx->pc = 0x13305Cu;
        goto label_13305c;
    }
    ctx->pc = 0x133054u;
    {
        const bool branch_taken_0x133054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133054) {
            ctx->pc = 0x13306Cu;
            goto label_13306c;
        }
    }
    ctx->pc = 0x13305Cu;
label_13305c:
    // 0x13305c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x13305cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_133060:
    // 0x133060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_133064:
    // 0x133064: 0x10000002  b           . + 4 + (0x2 << 2)
label_133068:
    if (ctx->pc == 0x133068u) {
        ctx->pc = 0x13306Cu;
        goto label_13306c;
    }
    ctx->pc = 0x133064u;
    {
        const bool branch_taken_0x133064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133064) {
            ctx->pc = 0x133070u;
            goto label_133070;
        }
    }
    ctx->pc = 0x13306Cu;
label_13306c:
    // 0x13306c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x13306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_133070:
    // 0x133070: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x133070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_133074:
    // 0x133074: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x133074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_133078:
    // 0x133078: 0xc04e748  jal         func_139D20
label_13307c:
    if (ctx->pc == 0x13307Cu) {
        ctx->pc = 0x133080u;
        goto label_133080;
    }
    ctx->pc = 0x133078u;
    SET_GPR_U32(ctx, 31, 0x133080u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133080u; }
        if (ctx->pc != 0x133080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133080u; }
        if (ctx->pc != 0x133080u) { return; }
    }
    ctx->pc = 0x133080u;
label_133080:
    // 0x133080: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x133080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_133084:
    // 0x133084: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x133084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_133088:
    // 0x133088: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x133088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_13308c:
    // 0x13308c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13308cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133090:
    // 0x133090: 0xc04e63c  jal         func_1398F0
label_133094:
    if (ctx->pc == 0x133094u) {
        ctx->pc = 0x133098u;
        goto label_133098;
    }
    ctx->pc = 0x133090u;
    SET_GPR_U32(ctx, 31, 0x133098u);
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133098u; }
        if (ctx->pc != 0x133098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133098u; }
        if (ctx->pc != 0x133098u) { return; }
    }
    ctx->pc = 0x133098u;
label_133098:
    // 0x133098: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x133098u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13309c:
    // 0x13309c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13309cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1330a0:
    // 0x1330a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1330a4:
    if (ctx->pc == 0x1330A4u) {
        ctx->pc = 0x1330A8u;
        goto label_1330a8;
    }
    ctx->pc = 0x1330A0u;
    {
        const bool branch_taken_0x1330a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1330a0) {
            ctx->pc = 0x1330C8u;
            goto label_1330c8;
        }
    }
    ctx->pc = 0x1330A8u;
label_1330a8:
    // 0x1330a8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1330a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1330ac:
    // 0x1330ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1330acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1330b0:
    // 0x1330b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1330b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1330b4:
    // 0x1330b4: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x1330b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1330b8:
    // 0x1330b8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1330b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1330bc:
    // 0x1330bc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1330bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1330c0:
    // 0x1330c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1330c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1330c4:
    // 0x1330c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1330c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1330c8:
    // 0x1330c8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1330c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1330cc:
    // 0x1330cc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1330ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1330d0:
    // 0x1330d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1330d4:
    if (ctx->pc == 0x1330D4u) {
        ctx->pc = 0x1330D8u;
        goto label_1330d8;
    }
    ctx->pc = 0x1330D0u;
    {
        const bool branch_taken_0x1330d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1330d0) {
            ctx->pc = 0x1330A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1330a8;
        }
    }
    ctx->pc = 0x1330D8u;
label_1330d8:
    // 0x1330d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1330d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1330dc:
    // 0x1330dc: 0x10000032  b           . + 4 + (0x32 << 2)
label_1330e0:
    if (ctx->pc == 0x1330E0u) {
        ctx->pc = 0x1330E4u;
        goto label_1330e4;
    }
    ctx->pc = 0x1330DCu;
    {
        const bool branch_taken_0x1330dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1330dc) {
            ctx->pc = 0x1331A8u;
            goto label_1331a8;
        }
    }
    ctx->pc = 0x1330E4u;
label_1330e4:
    // 0x1330e4: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1330e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1330e8:
    // 0x1330e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1330e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1330ec:
    // 0x1330ec: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1330ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1330f0:
    // 0x1330f0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1330f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1330f4:
    // 0x1330f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1330f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1330f8:
    // 0x1330f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1330f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1330fc:
    // 0x1330fc: 0x262a821  addu        $s5, $s3, $v0
    ctx->pc = 0x1330fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_133100:
    // 0x133100: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x133100u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133104:
    // 0x133104: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x133104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_133108:
    // 0x133108: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_13310c:
    if (ctx->pc == 0x13310Cu) {
        ctx->pc = 0x133110u;
        goto label_133110;
    }
    ctx->pc = 0x133108u;
    {
        const bool branch_taken_0x133108 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x133108) {
            ctx->pc = 0x133120u;
            goto label_133120;
        }
    }
    ctx->pc = 0x133110u;
label_133110:
    // 0x133110: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x133110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_133114:
    // 0x133114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_133118:
    // 0x133118: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x133118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13311c:
    // 0x13311c: 0x262f021  addu        $fp, $s3, $v0
    ctx->pc = 0x13311cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_133120:
    // 0x133120: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133124:
    // 0x133124: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x133124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_133128:
    // 0x133128: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x133128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_13312c:
    // 0x13312c: 0x320f809  jalr        $t9
label_133130:
    if (ctx->pc == 0x133130u) {
        ctx->pc = 0x133134u;
        goto label_133134;
    }
    ctx->pc = 0x13312Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133134u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x133134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133134u; }
            if (ctx->pc != 0x133134u) { return; }
        }
        }
    }
    ctx->pc = 0x133134u;
label_133134:
    // 0x133134: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x133134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_133138:
    // 0x133138: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x133138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_13313c:
    // 0x13313c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x13313cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_133140:
    // 0x133140: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x133140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_133144:
    // 0x133144: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x133144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_133148:
    // 0x133148: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x133148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_13314c:
    // 0x13314c: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x13314cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_133150:
    // 0x133150: 0xc04c980  jal         func_132600
label_133154:
    if (ctx->pc == 0x133154u) {
        ctx->pc = 0x133158u;
        goto label_133158;
    }
    ctx->pc = 0x133150u;
    SET_GPR_U32(ctx, 31, 0x133158u);
    ctx->pc = 0x132600u;
    if (runtime->hasFunction(0x132600u)) {
        auto targetFn = runtime->lookupFunction(0x132600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133158u; }
        if (ctx->pc != 0x133158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchVisualType__FP18mgCreateVisualTypePc_0x132600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133158u; }
        if (ctx->pc != 0x133158u) { return; }
    }
    ctx->pc = 0x133158u;
label_133158:
    // 0x133158: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13315c:
    if (ctx->pc == 0x13315Cu) {
        ctx->pc = 0x133160u;
        goto label_133160;
    }
    ctx->pc = 0x133158u;
    {
        const bool branch_taken_0x133158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133158) {
            ctx->pc = 0x133168u;
            goto label_133168;
        }
    }
    ctx->pc = 0x133160u;
label_133160:
    // 0x133160: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133164:
    // 0x133164: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x133164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_133168:
    // 0x133168: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x133168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_13316c:
    // 0x13316c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x13316cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_133170:
    // 0x133170: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x133170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
label_133174:
    // 0x133174: 0xffb70010  sd          $s7, 0x10($sp)
    ctx->pc = 0x133174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 23));
label_133178:
    // 0x133178: 0xffb60018  sd          $s6, 0x18($sp)
    ctx->pc = 0x133178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 22));
label_13317c:
    // 0x13317c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13317cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_133180:
    // 0x133180: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x133180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_133184:
    // 0x133184: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x133184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_133188:
    // 0x133188: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x133188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_13318c:
    // 0x13318c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x13318cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_133190:
    // 0x133190: 0x8fa90130  lw          $t1, 0x130($sp)
    ctx->pc = 0x133190u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_133194:
    // 0x133194: 0x8faa0120  lw          $t2, 0x120($sp)
    ctx->pc = 0x133194u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_133198:
    // 0x133198: 0x8fab00f0  lw          $t3, 0xF0($sp)
    ctx->pc = 0x133198u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_13319c:
    // 0x13319c: 0xc04c9a8  jal         func_1326A0
label_1331a0:
    if (ctx->pc == 0x1331A0u) {
        ctx->pc = 0x1331A4u;
        goto label_1331a4;
    }
    ctx->pc = 0x13319Cu;
    SET_GPR_U32(ctx, 31, 0x1331A4u);
    ctx->pc = 0x1326A0u;
    if (runtime->hasFunction(0x1326A0u)) {
        auto targetFn = runtime->lookupFunction(0x1326A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1331A4u; }
        if (ctx->pc != 0x1331A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFrameVisual__FP8mgCFrameP9mgCMemoryP9mgCMemoryP8mgCFrameP13MDTOBJ_HEADERP10MDT_HEADERiP17mgCTextureManagerPUiiPP8mgCFramePA4_A4_f_0x1326a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1331A4u; }
        if (ctx->pc != 0x1331A4u) { return; }
    }
    ctx->pc = 0x1331A4u;
label_1331a4:
    // 0x1331a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1331a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1331a8:
    // 0x1331a8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1331a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1331ac:
    // 0x1331ac: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1331acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1331b0:
    // 0x1331b0: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_1331b4:
    if (ctx->pc == 0x1331B4u) {
        ctx->pc = 0x1331B8u;
        goto label_1331b8;
    }
    ctx->pc = 0x1331B0u;
    {
        const bool branch_taken_0x1331b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1331b0) {
            ctx->pc = 0x1330E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1330e4;
        }
    }
    ctx->pc = 0x1331B8u;
label_1331b8:
    // 0x1331b8: 0xae770068  sw          $s7, 0x68($s3)
    ctx->pc = 0x1331b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 23));
label_1331bc:
    // 0x1331bc: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x1331bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_1331c0:
    // 0x1331c0: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
label_1331c4:
    if (ctx->pc == 0x1331C4u) {
        ctx->pc = 0x1331C8u;
        goto label_1331c8;
    }
    ctx->pc = 0x1331C0u;
    {
        const bool branch_taken_0x1331c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1331c0) {
            ctx->pc = 0x133208u;
            goto label_133208;
        }
    }
    ctx->pc = 0x1331C8u;
label_1331c8:
    // 0x1331c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1331c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1331cc:
    // 0x1331cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1331d0:
    if (ctx->pc == 0x1331D0u) {
        ctx->pc = 0x1331D4u;
        goto label_1331d4;
    }
    ctx->pc = 0x1331CCu;
    {
        const bool branch_taken_0x1331cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1331cc) {
            ctx->pc = 0x1331F4u;
            goto label_1331f4;
        }
    }
    ctx->pc = 0x1331D4u;
label_1331d4:
    // 0x1331d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1331d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1331d8:
    // 0x1331d8: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x1331d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1331dc:
    // 0x1331dc: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1331dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_1331e0:
    // 0x1331e0: 0x2c22821  addu        $a1, $s6, $v0
    ctx->pc = 0x1331e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1331e4:
    // 0x1331e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1331e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1331e8:
    // 0x1331e8: 0xc04dc0c  jal         func_137030
label_1331ec:
    if (ctx->pc == 0x1331ECu) {
        ctx->pc = 0x1331F0u;
        goto label_1331f0;
    }
    ctx->pc = 0x1331E8u;
    SET_GPR_U32(ctx, 31, 0x1331F0u);
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1331F0u; }
        if (ctx->pc != 0x1331F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1331F0u; }
        if (ctx->pc != 0x1331F0u) { return; }
    }
    ctx->pc = 0x1331F0u;
label_1331f0:
    // 0x1331f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1331f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1331f4:
    // 0x1331f4: 0x0  nop
    ctx->pc = 0x1331f4u;
    // NOP
label_1331f8:
    // 0x1331f8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1331f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1331fc:
    // 0x1331fc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1331fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_133200:
    // 0x133200: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_133204:
    if (ctx->pc == 0x133204u) {
        ctx->pc = 0x133208u;
        goto label_133208;
    }
    ctx->pc = 0x133200u;
    {
        const bool branch_taken_0x133200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133200) {
            ctx->pc = 0x1331D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1331d4;
        }
    }
    ctx->pc = 0x133208u;
label_133208:
    // 0x133208: 0xae76006c  sw          $s6, 0x6C($s3)
    ctx->pc = 0x133208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 22));
label_13320c:
    // 0x13320c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13320cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_133210:
    // 0x133210: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x133210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133214:
    // 0x133214: 0xc04c7e8  jal         func_131FA0
label_133218:
    if (ctx->pc == 0x133218u) {
        ctx->pc = 0x13321Cu;
        goto label_13321c;
    }
    ctx->pc = 0x133214u;
    SET_GPR_U32(ctx, 31, 0x13321Cu);
    ctx->pc = 0x131FA0u;
    if (runtime->hasFunction(0x131FA0u)) {
        auto targetFn = runtime->lookupFunction(0x131FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13321Cu; }
        if (ctx->pc != 0x13321Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetFrameAttr__FP8mgCFramei_0x131fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13321Cu; }
        if (ctx->pc != 0x13321Cu) { return; }
    }
    ctx->pc = 0x13321Cu;
label_13321c:
    // 0x13321c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x13321cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_133220:
    // 0x133220: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x133220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_133224:
    // 0x133224: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x133224u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_133228:
    // 0x133228: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x133228u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13322c:
    // 0x13322c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x13322cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_133230:
    // 0x133230: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x133230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_133234:
    // 0x133234: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x133234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_133238:
    // 0x133238: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x133238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13323c:
    // 0x13323c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x13323cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_133240:
    // 0x133240: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x133240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_133244:
    // 0x133244: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x133244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_133248:
    // 0x133248: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x133248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_13324c:
    // 0x13324c: 0x3e00008  jr          $ra
label_133250:
    if (ctx->pc == 0x133250u) {
        ctx->pc = 0x133254u;
        goto label_fallthrough_0x13324c;
    }
    ctx->pc = 0x13324Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13324c:
    ctx->pc = 0x133254u;
}
