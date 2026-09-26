#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sfvwrite
// Address: 0x125d70 - 0x126148
void ps2___sfvwrite_0x125d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfvwrite_0x125d70");
#endif

    switch (ctx->pc) {
        case 0x125d70u: goto label_125d70;
        case 0x125d74u: goto label_125d74;
        case 0x125d78u: goto label_125d78;
        case 0x125d7cu: goto label_125d7c;
        case 0x125d80u: goto label_125d80;
        case 0x125d84u: goto label_125d84;
        case 0x125d88u: goto label_125d88;
        case 0x125d8cu: goto label_125d8c;
        case 0x125d90u: goto label_125d90;
        case 0x125d94u: goto label_125d94;
        case 0x125d98u: goto label_125d98;
        case 0x125d9cu: goto label_125d9c;
        case 0x125da0u: goto label_125da0;
        case 0x125da4u: goto label_125da4;
        case 0x125da8u: goto label_125da8;
        case 0x125dacu: goto label_125dac;
        case 0x125db0u: goto label_125db0;
        case 0x125db4u: goto label_125db4;
        case 0x125db8u: goto label_125db8;
        case 0x125dbcu: goto label_125dbc;
        case 0x125dc0u: goto label_125dc0;
        case 0x125dc4u: goto label_125dc4;
        case 0x125dc8u: goto label_125dc8;
        case 0x125dccu: goto label_125dcc;
        case 0x125dd0u: goto label_125dd0;
        case 0x125dd4u: goto label_125dd4;
        case 0x125dd8u: goto label_125dd8;
        case 0x125ddcu: goto label_125ddc;
        case 0x125de0u: goto label_125de0;
        case 0x125de4u: goto label_125de4;
        case 0x125de8u: goto label_125de8;
        case 0x125decu: goto label_125dec;
        case 0x125df0u: goto label_125df0;
        case 0x125df4u: goto label_125df4;
        case 0x125df8u: goto label_125df8;
        case 0x125dfcu: goto label_125dfc;
        case 0x125e00u: goto label_125e00;
        case 0x125e04u: goto label_125e04;
        case 0x125e08u: goto label_125e08;
        case 0x125e0cu: goto label_125e0c;
        case 0x125e10u: goto label_125e10;
        case 0x125e14u: goto label_125e14;
        case 0x125e18u: goto label_125e18;
        case 0x125e1cu: goto label_125e1c;
        case 0x125e20u: goto label_125e20;
        case 0x125e24u: goto label_125e24;
        case 0x125e28u: goto label_125e28;
        case 0x125e2cu: goto label_125e2c;
        case 0x125e30u: goto label_125e30;
        case 0x125e34u: goto label_125e34;
        case 0x125e38u: goto label_125e38;
        case 0x125e3cu: goto label_125e3c;
        case 0x125e40u: goto label_125e40;
        case 0x125e44u: goto label_125e44;
        case 0x125e48u: goto label_125e48;
        case 0x125e4cu: goto label_125e4c;
        case 0x125e50u: goto label_125e50;
        case 0x125e54u: goto label_125e54;
        case 0x125e58u: goto label_125e58;
        case 0x125e5cu: goto label_125e5c;
        case 0x125e60u: goto label_125e60;
        case 0x125e64u: goto label_125e64;
        case 0x125e68u: goto label_125e68;
        case 0x125e6cu: goto label_125e6c;
        case 0x125e70u: goto label_125e70;
        case 0x125e74u: goto label_125e74;
        case 0x125e78u: goto label_125e78;
        case 0x125e7cu: goto label_125e7c;
        case 0x125e80u: goto label_125e80;
        case 0x125e84u: goto label_125e84;
        case 0x125e88u: goto label_125e88;
        case 0x125e8cu: goto label_125e8c;
        case 0x125e90u: goto label_125e90;
        case 0x125e94u: goto label_125e94;
        case 0x125e98u: goto label_125e98;
        case 0x125e9cu: goto label_125e9c;
        case 0x125ea0u: goto label_125ea0;
        case 0x125ea4u: goto label_125ea4;
        case 0x125ea8u: goto label_125ea8;
        case 0x125eacu: goto label_125eac;
        case 0x125eb0u: goto label_125eb0;
        case 0x125eb4u: goto label_125eb4;
        case 0x125eb8u: goto label_125eb8;
        case 0x125ebcu: goto label_125ebc;
        case 0x125ec0u: goto label_125ec0;
        case 0x125ec4u: goto label_125ec4;
        case 0x125ec8u: goto label_125ec8;
        case 0x125eccu: goto label_125ecc;
        case 0x125ed0u: goto label_125ed0;
        case 0x125ed4u: goto label_125ed4;
        case 0x125ed8u: goto label_125ed8;
        case 0x125edcu: goto label_125edc;
        case 0x125ee0u: goto label_125ee0;
        case 0x125ee4u: goto label_125ee4;
        case 0x125ee8u: goto label_125ee8;
        case 0x125eecu: goto label_125eec;
        case 0x125ef0u: goto label_125ef0;
        case 0x125ef4u: goto label_125ef4;
        case 0x125ef8u: goto label_125ef8;
        case 0x125efcu: goto label_125efc;
        case 0x125f00u: goto label_125f00;
        case 0x125f04u: goto label_125f04;
        case 0x125f08u: goto label_125f08;
        case 0x125f0cu: goto label_125f0c;
        case 0x125f10u: goto label_125f10;
        case 0x125f14u: goto label_125f14;
        case 0x125f18u: goto label_125f18;
        case 0x125f1cu: goto label_125f1c;
        case 0x125f20u: goto label_125f20;
        case 0x125f24u: goto label_125f24;
        case 0x125f28u: goto label_125f28;
        case 0x125f2cu: goto label_125f2c;
        case 0x125f30u: goto label_125f30;
        case 0x125f34u: goto label_125f34;
        case 0x125f38u: goto label_125f38;
        case 0x125f3cu: goto label_125f3c;
        case 0x125f40u: goto label_125f40;
        case 0x125f44u: goto label_125f44;
        case 0x125f48u: goto label_125f48;
        case 0x125f4cu: goto label_125f4c;
        case 0x125f50u: goto label_125f50;
        case 0x125f54u: goto label_125f54;
        case 0x125f58u: goto label_125f58;
        case 0x125f5cu: goto label_125f5c;
        case 0x125f60u: goto label_125f60;
        case 0x125f64u: goto label_125f64;
        case 0x125f68u: goto label_125f68;
        case 0x125f6cu: goto label_125f6c;
        case 0x125f70u: goto label_125f70;
        case 0x125f74u: goto label_125f74;
        case 0x125f78u: goto label_125f78;
        case 0x125f7cu: goto label_125f7c;
        case 0x125f80u: goto label_125f80;
        case 0x125f84u: goto label_125f84;
        case 0x125f88u: goto label_125f88;
        case 0x125f8cu: goto label_125f8c;
        case 0x125f90u: goto label_125f90;
        case 0x125f94u: goto label_125f94;
        case 0x125f98u: goto label_125f98;
        case 0x125f9cu: goto label_125f9c;
        case 0x125fa0u: goto label_125fa0;
        case 0x125fa4u: goto label_125fa4;
        case 0x125fa8u: goto label_125fa8;
        case 0x125facu: goto label_125fac;
        case 0x125fb0u: goto label_125fb0;
        case 0x125fb4u: goto label_125fb4;
        case 0x125fb8u: goto label_125fb8;
        case 0x125fbcu: goto label_125fbc;
        case 0x125fc0u: goto label_125fc0;
        case 0x125fc4u: goto label_125fc4;
        case 0x125fc8u: goto label_125fc8;
        case 0x125fccu: goto label_125fcc;
        case 0x125fd0u: goto label_125fd0;
        case 0x125fd4u: goto label_125fd4;
        case 0x125fd8u: goto label_125fd8;
        case 0x125fdcu: goto label_125fdc;
        case 0x125fe0u: goto label_125fe0;
        case 0x125fe4u: goto label_125fe4;
        case 0x125fe8u: goto label_125fe8;
        case 0x125fecu: goto label_125fec;
        case 0x125ff0u: goto label_125ff0;
        case 0x125ff4u: goto label_125ff4;
        case 0x125ff8u: goto label_125ff8;
        case 0x125ffcu: goto label_125ffc;
        case 0x126000u: goto label_126000;
        case 0x126004u: goto label_126004;
        case 0x126008u: goto label_126008;
        case 0x12600cu: goto label_12600c;
        case 0x126010u: goto label_126010;
        case 0x126014u: goto label_126014;
        case 0x126018u: goto label_126018;
        case 0x12601cu: goto label_12601c;
        case 0x126020u: goto label_126020;
        case 0x126024u: goto label_126024;
        case 0x126028u: goto label_126028;
        case 0x12602cu: goto label_12602c;
        case 0x126030u: goto label_126030;
        case 0x126034u: goto label_126034;
        case 0x126038u: goto label_126038;
        case 0x12603cu: goto label_12603c;
        case 0x126040u: goto label_126040;
        case 0x126044u: goto label_126044;
        case 0x126048u: goto label_126048;
        case 0x12604cu: goto label_12604c;
        case 0x126050u: goto label_126050;
        case 0x126054u: goto label_126054;
        case 0x126058u: goto label_126058;
        case 0x12605cu: goto label_12605c;
        case 0x126060u: goto label_126060;
        case 0x126064u: goto label_126064;
        case 0x126068u: goto label_126068;
        case 0x12606cu: goto label_12606c;
        case 0x126070u: goto label_126070;
        case 0x126074u: goto label_126074;
        case 0x126078u: goto label_126078;
        case 0x12607cu: goto label_12607c;
        case 0x126080u: goto label_126080;
        case 0x126084u: goto label_126084;
        case 0x126088u: goto label_126088;
        case 0x12608cu: goto label_12608c;
        case 0x126090u: goto label_126090;
        case 0x126094u: goto label_126094;
        case 0x126098u: goto label_126098;
        case 0x12609cu: goto label_12609c;
        case 0x1260a0u: goto label_1260a0;
        case 0x1260a4u: goto label_1260a4;
        case 0x1260a8u: goto label_1260a8;
        case 0x1260acu: goto label_1260ac;
        case 0x1260b0u: goto label_1260b0;
        case 0x1260b4u: goto label_1260b4;
        case 0x1260b8u: goto label_1260b8;
        case 0x1260bcu: goto label_1260bc;
        case 0x1260c0u: goto label_1260c0;
        case 0x1260c4u: goto label_1260c4;
        case 0x1260c8u: goto label_1260c8;
        case 0x1260ccu: goto label_1260cc;
        case 0x1260d0u: goto label_1260d0;
        case 0x1260d4u: goto label_1260d4;
        case 0x1260d8u: goto label_1260d8;
        case 0x1260dcu: goto label_1260dc;
        case 0x1260e0u: goto label_1260e0;
        case 0x1260e4u: goto label_1260e4;
        case 0x1260e8u: goto label_1260e8;
        case 0x1260ecu: goto label_1260ec;
        case 0x1260f0u: goto label_1260f0;
        case 0x1260f4u: goto label_1260f4;
        case 0x1260f8u: goto label_1260f8;
        case 0x1260fcu: goto label_1260fc;
        case 0x126100u: goto label_126100;
        case 0x126104u: goto label_126104;
        case 0x126108u: goto label_126108;
        case 0x12610cu: goto label_12610c;
        case 0x126110u: goto label_126110;
        case 0x126114u: goto label_126114;
        case 0x126118u: goto label_126118;
        case 0x12611cu: goto label_12611c;
        case 0x126120u: goto label_126120;
        case 0x126124u: goto label_126124;
        case 0x126128u: goto label_126128;
        case 0x12612cu: goto label_12612c;
        case 0x126130u: goto label_126130;
        case 0x126134u: goto label_126134;
        case 0x126138u: goto label_126138;
        case 0x12613cu: goto label_12613c;
        case 0x126140u: goto label_126140;
        case 0x126144u: goto label_126144;
        default: break;
    }

    ctx->pc = 0x125d70u;

label_125d70:
    // 0x125d70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x125d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_125d74:
    // 0x125d74: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x125d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_125d78:
    // 0x125d78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x125d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_125d7c:
    // 0x125d7c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x125d7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_125d80:
    // 0x125d80: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x125d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_125d84:
    // 0x125d84: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x125d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_125d88:
    // 0x125d88: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x125d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_125d8c:
    // 0x125d8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x125d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_125d90:
    // 0x125d90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x125d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_125d94:
    // 0x125d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125d98:
    // 0x125d98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x125d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_125d9c:
    // 0x125d9c: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x125d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_125da0:
    // 0x125da0: 0x124000d8  beqz        $s2, . + 4 + (0xD8 << 2)
label_125da4:
    if (ctx->pc == 0x125DA4u) {
        ctx->pc = 0x125DA4u;
            // 0x125da4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125DA8u;
        goto label_125da8;
    }
    ctx->pc = 0x125DA0u;
    {
        const bool branch_taken_0x125da0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125DA0u;
            // 0x125da4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125da0) {
            ctx->pc = 0x126104u;
            goto label_126104;
        }
    }
    ctx->pc = 0x125DA8u;
label_125da8:
    // 0x125da8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x125da8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_125dac:
    // 0x125dac: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x125dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_125db0:
    // 0x125db0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_125db4:
    if (ctx->pc == 0x125DB4u) {
        ctx->pc = 0x125DB8u;
        goto label_125db8;
    }
    ctx->pc = 0x125DB0u;
    {
        const bool branch_taken_0x125db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125db0) {
            ctx->pc = 0x125DC4u;
            goto label_125dc4;
        }
    }
    ctx->pc = 0x125DB8u;
label_125db8:
    // 0x125db8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x125db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_125dbc:
    // 0x125dbc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_125dc0:
    if (ctx->pc == 0x125DC0u) {
        ctx->pc = 0x125DC0u;
            // 0x125dc0: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x125DC4u;
        goto label_125dc4;
    }
    ctx->pc = 0x125DBCu;
    {
        const bool branch_taken_0x125dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125dbc) {
            ctx->pc = 0x125DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125DBCu;
            // 0x125dc0: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125DDCu;
            goto label_125ddc;
        }
    }
    ctx->pc = 0x125DC4u;
label_125dc4:
    // 0x125dc4: 0xc04b0da  jal         func_12C368
label_125dc8:
    if (ctx->pc == 0x125DC8u) {
        ctx->pc = 0x125DC8u;
            // 0x125dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125DCCu;
        goto label_125dcc;
    }
    ctx->pc = 0x125DC4u;
    SET_GPR_U32(ctx, 31, 0x125DCCu);
    ctx->pc = 0x125DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125DC4u;
            // 0x125dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C368u;
    if (runtime->hasFunction(0x12C368u)) {
        auto targetFn = runtime->lookupFunction(0x12C368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DCCu; }
        if (ctx->pc != 0x125DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___swsetup_0x12c368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125DCCu; }
        if (ctx->pc != 0x125DCCu) { return; }
    }
    ctx->pc = 0x125DCCu;
label_125dcc:
    // 0x125dcc: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
label_125dd0:
    if (ctx->pc == 0x125DD0u) {
        ctx->pc = 0x125DD0u;
            // 0x125dd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x125DD4u;
        goto label_125dd4;
    }
    ctx->pc = 0x125DCCu;
    {
        const bool branch_taken_0x125dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125DCCu;
            // 0x125dd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125dcc) {
            ctx->pc = 0x12611Cu;
            goto label_12611c;
        }
    }
    ctx->pc = 0x125DD4u;
label_125dd4:
    // 0x125dd4: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x125dd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_125dd8:
    // 0x125dd8: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x125dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_125ddc:
    // 0x125ddc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x125ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_125de0:
    // 0x125de0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_125de4:
    if (ctx->pc == 0x125DE4u) {
        ctx->pc = 0x125DE4u;
            // 0x125de4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125DE8u;
        goto label_125de8;
    }
    ctx->pc = 0x125DE0u;
    {
        const bool branch_taken_0x125de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125DE0u;
            // 0x125de4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125de0) {
            ctx->pc = 0x125E5Cu;
            goto label_125e5c;
        }
    }
    ctx->pc = 0x125DE8u;
label_125de8:
    // 0x125de8: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x125de8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_125dec:
    // 0x125dec: 0x0  nop
    ctx->pc = 0x125decu;
    // NOP
label_125df0:
    // 0x125df0: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_125df4:
    if (ctx->pc == 0x125DF4u) {
        ctx->pc = 0x125DF4u;
            // 0x125df4: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x125DF8u;
        goto label_125df8;
    }
    ctx->pc = 0x125DF0u;
    {
        const bool branch_taken_0x125df0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x125DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125DF0u;
            // 0x125df4: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125df0) {
            ctx->pc = 0x125E1Cu;
            goto label_125e1c;
        }
    }
    ctx->pc = 0x125DF8u;
label_125df8:
    // 0x125df8: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x125df8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_125dfc:
    // 0x125dfc: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x125dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_125e00:
    // 0x125e00: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x125e00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_125e04:
    // 0x125e04: 0x0  nop
    ctx->pc = 0x125e04u;
    // NOP
label_125e08:
    // 0x125e08: 0x0  nop
    ctx->pc = 0x125e08u;
    // NOP
label_125e0c:
    // 0x125e0c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_125e10:
    if (ctx->pc == 0x125E10u) {
        ctx->pc = 0x125E14u;
        goto label_125e14;
    }
    ctx->pc = 0x125E0Cu;
    {
        const bool branch_taken_0x125e0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e0c) {
            ctx->pc = 0x125DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125df8;
        }
    }
    ctx->pc = 0x125E14u;
label_125e14:
    // 0x125e14: 0x10000002  b           . + 4 + (0x2 << 2)
label_125e18:
    if (ctx->pc == 0x125E18u) {
        ctx->pc = 0x125E18u;
            // 0x125e18: 0x2e420401  sltiu       $v0, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->pc = 0x125E1Cu;
        goto label_125e1c;
    }
    ctx->pc = 0x125E14u;
    {
        const bool branch_taken_0x125e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E14u;
            // 0x125e18: 0x2e420401  sltiu       $v0, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e14) {
            ctx->pc = 0x125E20u;
            goto label_125e20;
        }
    }
    ctx->pc = 0x125E1Cu;
label_125e1c:
    // 0x125e1c: 0x2e420401  sltiu       $v0, $s2, 0x401
    ctx->pc = 0x125e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_125e20:
    // 0x125e20: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x125e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_125e24:
    // 0x125e24: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x125e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_125e28:
    // 0x125e28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x125e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125e2c:
    // 0x125e2c: 0x60f809  jalr        $v1
label_125e30:
    if (ctx->pc == 0x125E30u) {
        ctx->pc = 0x125E30u;
            // 0x125e30: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18));
        ctx->pc = 0x125E34u;
        goto label_125e34;
    }
    ctx->pc = 0x125E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x125E34u);
        ctx->pc = 0x125E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E2Cu;
            // 0x125e30: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x125E34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125E34u; }
            if (ctx->pc != 0x125E34u) { return; }
        }
        }
    }
    ctx->pc = 0x125E34u;
label_125e34:
    // 0x125e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125e38:
    // 0x125e38: 0x1a0000b4  blez        $s0, . + 4 + (0xB4 << 2)
label_125e3c:
    if (ctx->pc == 0x125E3Cu) {
        ctx->pc = 0x125E3Cu;
            // 0x125e3c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x125E40u;
        goto label_125e40;
    }
    ctx->pc = 0x125E38u;
    {
        const bool branch_taken_0x125e38 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x125E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E38u;
            // 0x125e3c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e38) {
            ctx->pc = 0x12610Cu;
            goto label_12610c;
        }
    }
    ctx->pc = 0x125E40u;
label_125e40:
    // 0x125e40: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x125e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_125e44:
    // 0x125e44: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x125e44u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_125e48:
    // 0x125e48: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x125e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_125e4c:
    // 0x125e4c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_125e50:
    if (ctx->pc == 0x125E50u) {
        ctx->pc = 0x125E50u;
            // 0x125e50: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x125E54u;
        goto label_125e54;
    }
    ctx->pc = 0x125E4Cu;
    {
        const bool branch_taken_0x125e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E4Cu;
            // 0x125e50: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e4c) {
            ctx->pc = 0x125DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125df0;
        }
    }
    ctx->pc = 0x125E54u;
label_125e54:
    // 0x125e54: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_125e58:
    if (ctx->pc == 0x125E58u) {
        ctx->pc = 0x125E58u;
            // 0x125e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125E5Cu;
        goto label_125e5c;
    }
    ctx->pc = 0x125E54u;
    {
        const bool branch_taken_0x125e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E54u;
            // 0x125e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e54) {
            ctx->pc = 0x12611Cu;
            goto label_12611c;
        }
    }
    ctx->pc = 0x125E5Cu;
label_125e5c:
    // 0x125e5c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x125e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_125e60:
    // 0x125e60: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_125e64:
    if (ctx->pc == 0x125E64u) {
        ctx->pc = 0x125E64u;
            // 0x125e64: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125E68u;
        goto label_125e68;
    }
    ctx->pc = 0x125E60u;
    {
        const bool branch_taken_0x125e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E60u;
            // 0x125e64: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e60) {
            ctx->pc = 0x125FB0u;
            goto label_125fb0;
        }
    }
    ctx->pc = 0x125E68u;
label_125e68:
    // 0x125e68: 0x10000002  b           . + 4 + (0x2 << 2)
label_125e6c:
    if (ctx->pc == 0x125E6Cu) {
        ctx->pc = 0x125E70u;
        goto label_125e70;
    }
    ctx->pc = 0x125E68u;
    {
        const bool branch_taken_0x125e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e68) {
            ctx->pc = 0x125E74u;
            goto label_125e74;
        }
    }
    ctx->pc = 0x125E70u;
label_125e70:
    // 0x125e70: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x125e70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_125e74:
    // 0x125e74: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
label_125e78:
    if (ctx->pc == 0x125E78u) {
        ctx->pc = 0x125E78u;
            // 0x125e78: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x125E7Cu;
        goto label_125e7c;
    }
    ctx->pc = 0x125E74u;
    {
        const bool branch_taken_0x125e74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x125E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E74u;
            // 0x125e78: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e74) {
            ctx->pc = 0x125EA4u;
            goto label_125ea4;
        }
    }
    ctx->pc = 0x125E7Cu;
label_125e7c:
    // 0x125e7c: 0x0  nop
    ctx->pc = 0x125e7cu;
    // NOP
label_125e80:
    // 0x125e80: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x125e80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_125e84:
    // 0x125e84: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x125e84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_125e88:
    // 0x125e88: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x125e88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_125e8c:
    // 0x125e8c: 0x0  nop
    ctx->pc = 0x125e8cu;
    // NOP
label_125e90:
    // 0x125e90: 0x0  nop
    ctx->pc = 0x125e90u;
    // NOP
label_125e94:
    // 0x125e94: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_125e98:
    if (ctx->pc == 0x125E98u) {
        ctx->pc = 0x125E9Cu;
        goto label_125e9c;
    }
    ctx->pc = 0x125E94u;
    {
        const bool branch_taken_0x125e94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e94) {
            ctx->pc = 0x125E80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125e80;
        }
    }
    ctx->pc = 0x125E9Cu;
label_125e9c:
    // 0x125e9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_125ea0:
    if (ctx->pc == 0x125EA0u) {
        ctx->pc = 0x125EA0u;
            // 0x125ea0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125EA4u;
        goto label_125ea4;
    }
    ctx->pc = 0x125E9Cu;
    {
        const bool branch_taken_0x125e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125E9Cu;
            // 0x125ea0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125e9c) {
            ctx->pc = 0x125EA8u;
            goto label_125ea8;
        }
    }
    ctx->pc = 0x125EA4u;
label_125ea4:
    // 0x125ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125ea8:
    // 0x125ea8: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x125ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_125eac:
    // 0x125eac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_125eb0:
    if (ctx->pc == 0x125EB0u) {
        ctx->pc = 0x125EB0u;
            // 0x125eb0: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x125EB4u;
        goto label_125eb4;
    }
    ctx->pc = 0x125EACu;
    {
        const bool branch_taken_0x125eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EACu;
            // 0x125eb0: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125eac) {
            ctx->pc = 0x125EE8u;
            goto label_125ee8;
        }
    }
    ctx->pc = 0x125EB4u;
label_125eb4:
    // 0x125eb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x125eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125eb8:
    // 0x125eb8: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x125eb8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18));
label_125ebc:
    // 0x125ebc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x125ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125ec0:
    // 0x125ec0: 0xc049c44  jal         func_127110
label_125ec4:
    if (ctx->pc == 0x125EC4u) {
        ctx->pc = 0x125EC4u;
            // 0x125ec4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125EC8u;
        goto label_125ec8;
    }
    ctx->pc = 0x125EC0u;
    SET_GPR_U32(ctx, 31, 0x125EC8u);
    ctx->pc = 0x125EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125EC0u;
            // 0x125ec4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127110u;
    if (runtime->hasFunction(0x127110u)) {
        auto targetFn = runtime->lookupFunction(0x127110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125EC8u; }
        if (ctx->pc != 0x125EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memmove_0x127110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125EC8u; }
        if (ctx->pc != 0x125EC8u) { return; }
    }
    ctx->pc = 0x125EC8u;
label_125ec8:
    // 0x125ec8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x125ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_125ecc:
    // 0x125ecc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x125eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125ed0:
    // 0x125ed0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x125ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_125ed4:
    // 0x125ed4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x125ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_125ed8:
    // 0x125ed8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x125ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_125edc:
    // 0x125edc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x125edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_125ee0:
    // 0x125ee0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_125ee4:
    if (ctx->pc == 0x125EE4u) {
        ctx->pc = 0x125EE4u;
            // 0x125ee4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125EE8u;
        goto label_125ee8;
    }
    ctx->pc = 0x125EE0u;
    {
        const bool branch_taken_0x125ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EE0u;
            // 0x125ee4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ee0) {
            ctx->pc = 0x125F90u;
            goto label_125f90;
        }
    }
    ctx->pc = 0x125EE8u;
label_125ee8:
    // 0x125ee8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x125ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125eec:
    // 0x125eec: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x125eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_125ef0:
    // 0x125ef0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x125ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_125ef4:
    // 0x125ef4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_125ef8:
    if (ctx->pc == 0x125EF8u) {
        ctx->pc = 0x125EF8u;
            // 0x125ef8: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->pc = 0x125EFCu;
        goto label_125efc;
    }
    ctx->pc = 0x125EF4u;
    {
        const bool branch_taken_0x125ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EF4u;
            // 0x125ef8: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ef4) {
            ctx->pc = 0x125F30u;
            goto label_125f30;
        }
    }
    ctx->pc = 0x125EFCu;
label_125efc:
    // 0x125efc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_125f00:
    if (ctx->pc == 0x125F00u) {
        ctx->pc = 0x125F00u;
            // 0x125f00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125F04u;
        goto label_125f04;
    }
    ctx->pc = 0x125EFCu;
    {
        const bool branch_taken_0x125efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125EFCu;
            // 0x125f00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125efc) {
            ctx->pc = 0x125F30u;
            goto label_125f30;
        }
    }
    ctx->pc = 0x125F04u;
label_125f04:
    // 0x125f04: 0xc049c44  jal         func_127110
label_125f08:
    if (ctx->pc == 0x125F08u) {
        ctx->pc = 0x125F08u;
            // 0x125f08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125F0Cu;
        goto label_125f0c;
    }
    ctx->pc = 0x125F04u;
    SET_GPR_U32(ctx, 31, 0x125F0Cu);
    ctx->pc = 0x125F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125F04u;
            // 0x125f08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127110u;
    if (runtime->hasFunction(0x127110u)) {
        auto targetFn = runtime->lookupFunction(0x127110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F0Cu; }
        if (ctx->pc != 0x125F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memmove_0x127110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F0Cu; }
        if (ctx->pc != 0x125F0Cu) { return; }
    }
    ctx->pc = 0x125F0Cu;
label_125f0c:
    // 0x125f0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x125f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125f10:
    // 0x125f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125f14:
    // 0x125f14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x125f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_125f18:
    // 0x125f18: 0xc04953a  jal         func_1254E8
label_125f1c:
    if (ctx->pc == 0x125F1Cu) {
        ctx->pc = 0x125F1Cu;
            // 0x125f1c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x125F20u;
        goto label_125f20;
    }
    ctx->pc = 0x125F18u;
    SET_GPR_U32(ctx, 31, 0x125F20u);
    ctx->pc = 0x125F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125F18u;
            // 0x125f1c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1254E8u;
    if (runtime->hasFunction(0x1254E8u)) {
        auto targetFn = runtime->lookupFunction(0x1254E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F20u; }
        if (ctx->pc != 0x125F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fflush_0x1254e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F20u; }
        if (ctx->pc != 0x125F20u) { return; }
    }
    ctx->pc = 0x125F20u;
label_125f20:
    // 0x125f20: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
label_125f24:
    if (ctx->pc == 0x125F24u) {
        ctx->pc = 0x125F24u;
            // 0x125f24: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x125F28u;
        goto label_125f28;
    }
    ctx->pc = 0x125F20u;
    {
        const bool branch_taken_0x125f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125f20) {
            ctx->pc = 0x125F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125F20u;
            // 0x125f24: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126110u;
            goto label_126110;
        }
    }
    ctx->pc = 0x125F28u;
label_125f28:
    // 0x125f28: 0x1000001a  b           . + 4 + (0x1A << 2)
label_125f2c:
    if (ctx->pc == 0x125F2Cu) {
        ctx->pc = 0x125F2Cu;
            // 0x125f2c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->pc = 0x125F30u;
        goto label_125f30;
    }
    ctx->pc = 0x125F28u;
    {
        const bool branch_taken_0x125f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F28u;
            // 0x125f2c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f28) {
            ctx->pc = 0x125F94u;
            goto label_125f94;
        }
    }
    ctx->pc = 0x125F30u;
label_125f30:
    // 0x125f30: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x125f30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_125f34:
    // 0x125f34: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x125f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_125f38:
    // 0x125f38: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_125f3c:
    if (ctx->pc == 0x125F3Cu) {
        ctx->pc = 0x125F3Cu;
            // 0x125f3c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125F40u;
        goto label_125f40;
    }
    ctx->pc = 0x125F38u;
    {
        const bool branch_taken_0x125f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125f38) {
            ctx->pc = 0x125F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125F38u;
            // 0x125f3c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125F68u;
            goto label_125f68;
        }
    }
    ctx->pc = 0x125F40u;
label_125f40:
    // 0x125f40: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x125f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_125f44:
    // 0x125f44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x125f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125f48:
    // 0x125f48: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x125f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_125f4c:
    // 0x125f4c: 0x40f809  jalr        $v0
label_125f50:
    if (ctx->pc == 0x125F50u) {
        ctx->pc = 0x125F50u;
            // 0x125f50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125F54u;
        goto label_125f54;
    }
    ctx->pc = 0x125F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125F54u);
        ctx->pc = 0x125F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F4Cu;
            // 0x125f50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x125F54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125F54u; }
            if (ctx->pc != 0x125F54u) { return; }
        }
        }
    }
    ctx->pc = 0x125F54u;
label_125f54:
    // 0x125f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125f58:
    // 0x125f58: 0x5a00006d  blezl       $s0, . + 4 + (0x6D << 2)
label_125f5c:
    if (ctx->pc == 0x125F5Cu) {
        ctx->pc = 0x125F5Cu;
            // 0x125f5c: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x125F60u;
        goto label_125f60;
    }
    ctx->pc = 0x125F58u;
    {
        const bool branch_taken_0x125f58 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x125f58) {
            ctx->pc = 0x125F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125F58u;
            // 0x125f5c: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126110u;
            goto label_126110;
        }
    }
    ctx->pc = 0x125F60u;
label_125f60:
    // 0x125f60: 0x1000000c  b           . + 4 + (0xC << 2)
label_125f64:
    if (ctx->pc == 0x125F64u) {
        ctx->pc = 0x125F64u;
            // 0x125f64: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->pc = 0x125F68u;
        goto label_125f68;
    }
    ctx->pc = 0x125F60u;
    {
        const bool branch_taken_0x125f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125F60u;
            // 0x125f64: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125f60) {
            ctx->pc = 0x125F94u;
            goto label_125f94;
        }
    }
    ctx->pc = 0x125F68u;
label_125f68:
    // 0x125f68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x125f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125f6c:
    // 0x125f6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x125f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125f70:
    // 0x125f70: 0xc049c44  jal         func_127110
label_125f74:
    if (ctx->pc == 0x125F74u) {
        ctx->pc = 0x125F74u;
            // 0x125f74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125F78u;
        goto label_125f78;
    }
    ctx->pc = 0x125F70u;
    SET_GPR_U32(ctx, 31, 0x125F78u);
    ctx->pc = 0x125F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125F70u;
            // 0x125f74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127110u;
    if (runtime->hasFunction(0x127110u)) {
        auto targetFn = runtime->lookupFunction(0x127110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F78u; }
        if (ctx->pc != 0x125F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memmove_0x127110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F78u; }
        if (ctx->pc != 0x125F78u) { return; }
    }
    ctx->pc = 0x125F78u;
label_125f78:
    // 0x125f78: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x125f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_125f7c:
    // 0x125f7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x125f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_125f80:
    // 0x125f80: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x125f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_125f84:
    // 0x125f84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x125f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_125f88:
    // 0x125f88: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x125f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_125f8c:
    // 0x125f8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x125f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_125f90:
    // 0x125f90: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x125f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_125f94:
    // 0x125f94: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x125f94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_125f98:
    // 0x125f98: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x125f98u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_125f9c:
    // 0x125f9c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x125f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_125fa0:
    // 0x125fa0: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_125fa4:
    if (ctx->pc == 0x125FA4u) {
        ctx->pc = 0x125FA4u;
            // 0x125fa4: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x125FA8u;
        goto label_125fa8;
    }
    ctx->pc = 0x125FA0u;
    {
        const bool branch_taken_0x125fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FA0u;
            // 0x125fa4: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fa0) {
            ctx->pc = 0x125E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125e70;
        }
    }
    ctx->pc = 0x125FA8u;
label_125fa8:
    // 0x125fa8: 0x1000005c  b           . + 4 + (0x5C << 2)
label_125fac:
    if (ctx->pc == 0x125FACu) {
        ctx->pc = 0x125FACu;
            // 0x125fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125FB0u;
        goto label_125fb0;
    }
    ctx->pc = 0x125FA8u;
    {
        const bool branch_taken_0x125fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FA8u;
            // 0x125fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125fa8) {
            ctx->pc = 0x12611Cu;
            goto label_12611c;
        }
    }
    ctx->pc = 0x125FB0u;
label_125fb0:
    // 0x125fb0: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_125fb4:
    if (ctx->pc == 0x125FB4u) {
        ctx->pc = 0x125FB8u;
        goto label_125fb8;
    }
    ctx->pc = 0x125FB0u;
    {
        const bool branch_taken_0x125fb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x125fb0) {
            ctx->pc = 0x125FDCu;
            goto label_125fdc;
        }
    }
    ctx->pc = 0x125FB8u;
label_125fb8:
    // 0x125fb8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x125fb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125fbc:
    // 0x125fbc: 0x0  nop
    ctx->pc = 0x125fbcu;
    // NOP
label_125fc0:
    // 0x125fc0: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x125fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_125fc4:
    // 0x125fc4: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x125fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_125fc8:
    // 0x125fc8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x125fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_125fcc:
    // 0x125fcc: 0x0  nop
    ctx->pc = 0x125fccu;
    // NOP
label_125fd0:
    // 0x125fd0: 0x0  nop
    ctx->pc = 0x125fd0u;
    // NOP
label_125fd4:
    // 0x125fd4: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_125fd8:
    if (ctx->pc == 0x125FD8u) {
        ctx->pc = 0x125FDCu;
        goto label_125fdc;
    }
    ctx->pc = 0x125FD4u;
    {
        const bool branch_taken_0x125fd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x125fd4) {
            ctx->pc = 0x125FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125fc0;
        }
    }
    ctx->pc = 0x125FDCu;
label_125fdc:
    // 0x125fdc: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_125fe0:
    if (ctx->pc == 0x125FE0u) {
        ctx->pc = 0x125FE0u;
            // 0x125fe0: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x125FE4u;
        goto label_125fe4;
    }
    ctx->pc = 0x125FDCu;
    {
        const bool branch_taken_0x125fdc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x125fdc) {
            ctx->pc = 0x125FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125FDCu;
            // 0x125fe0: 0x8e260014  lw          $a2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126014u;
            goto label_126014;
        }
    }
    ctx->pc = 0x125FE4u;
label_125fe4:
    // 0x125fe4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x125fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125fe8:
    // 0x125fe8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x125fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_125fec:
    // 0x125fec: 0xc049bba  jal         func_126EE8
label_125ff0:
    if (ctx->pc == 0x125FF0u) {
        ctx->pc = 0x125FF0u;
            // 0x125ff0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125FF4u;
        goto label_125ff4;
    }
    ctx->pc = 0x125FECu;
    SET_GPR_U32(ctx, 31, 0x125FF4u);
    ctx->pc = 0x125FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125FECu;
            // 0x125ff0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126EE8u;
    if (runtime->hasFunction(0x126EE8u)) {
        auto targetFn = runtime->lookupFunction(0x126EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FF4u; }
        if (ctx->pc != 0x125FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memchr_0x126ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FF4u; }
        if (ctx->pc != 0x125FF4u) { return; }
    }
    ctx->pc = 0x125FF4u;
label_125ff4:
    // 0x125ff4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x125ff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125ff8:
    // 0x125ff8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_125ffc:
    if (ctx->pc == 0x125FFCu) {
        ctx->pc = 0x125FFCu;
            // 0x125ffc: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x126000u;
        goto label_126000;
    }
    ctx->pc = 0x125FF8u;
    {
        const bool branch_taken_0x125ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FF8u;
            // 0x125ffc: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ff8) {
            ctx->pc = 0x126008u;
            goto label_126008;
        }
    }
    ctx->pc = 0x126000u;
label_126000:
    // 0x126000: 0x10000002  b           . + 4 + (0x2 << 2)
label_126004:
    if (ctx->pc == 0x126004u) {
        ctx->pc = 0x126004u;
            // 0x126004: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x126008u;
        goto label_126008;
    }
    ctx->pc = 0x126000u;
    {
        const bool branch_taken_0x126000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126000u;
            // 0x126004: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126000) {
            ctx->pc = 0x12600Cu;
            goto label_12600c;
        }
    }
    ctx->pc = 0x126008u;
label_126008:
    // 0x126008: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x126008u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12600c:
    // 0x12600c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12600cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126010:
    // 0x126010: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x126010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_126014:
    // 0x126014: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x126014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_126018:
    // 0x126018: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x126018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_12601c:
    // 0x12601c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12601cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_126020:
    // 0x126020: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x126020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126024:
    // 0x126024: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x126024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_126028:
    // 0x126028: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x126028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_12602c:
    // 0x12602c: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x12602cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21));
label_126030:
    // 0x126030: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x126030u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_126034:
    // 0x126034: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_126038:
    if (ctx->pc == 0x126038u) {
        ctx->pc = 0x126038u;
            // 0x126038: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->pc = 0x12603Cu;
        goto label_12603c;
    }
    ctx->pc = 0x126034u;
    {
        const bool branch_taken_0x126034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126034u;
            // 0x126038: 0x868021  addu        $s0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126034) {
            ctx->pc = 0x126078u;
            goto label_126078;
        }
    }
    ctx->pc = 0x12603Cu;
label_12603c:
    // 0x12603c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x12603cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_126040:
    // 0x126040: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_126044:
    if (ctx->pc == 0x126044u) {
        ctx->pc = 0x126044u;
            // 0x126044: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x126048u;
        goto label_126048;
    }
    ctx->pc = 0x126040u;
    {
        const bool branch_taken_0x126040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126040u;
            // 0x126044: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126040) {
            ctx->pc = 0x126078u;
            goto label_126078;
        }
    }
    ctx->pc = 0x126048u;
label_126048:
    // 0x126048: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x126048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12604c:
    // 0x12604c: 0xc049c44  jal         func_127110
label_126050:
    if (ctx->pc == 0x126050u) {
        ctx->pc = 0x126050u;
            // 0x126050: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x126054u;
        goto label_126054;
    }
    ctx->pc = 0x12604Cu;
    SET_GPR_U32(ctx, 31, 0x126054u);
    ctx->pc = 0x126050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12604Cu;
            // 0x126050: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127110u;
    if (runtime->hasFunction(0x127110u)) {
        auto targetFn = runtime->lookupFunction(0x127110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126054u; }
        if (ctx->pc != 0x126054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memmove_0x127110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126054u; }
        if (ctx->pc != 0x126054u) { return; }
    }
    ctx->pc = 0x126054u;
label_126054:
    // 0x126054: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x126054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_126058:
    // 0x126058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12605c:
    // 0x12605c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x12605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_126060:
    // 0x126060: 0xc04953a  jal         func_1254E8
label_126064:
    if (ctx->pc == 0x126064u) {
        ctx->pc = 0x126064u;
            // 0x126064: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x126068u;
        goto label_126068;
    }
    ctx->pc = 0x126060u;
    SET_GPR_U32(ctx, 31, 0x126068u);
    ctx->pc = 0x126064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126060u;
            // 0x126064: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1254E8u;
    if (runtime->hasFunction(0x1254E8u)) {
        auto targetFn = runtime->lookupFunction(0x1254E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126068u; }
        if (ctx->pc != 0x126068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fflush_0x1254e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126068u; }
        if (ctx->pc != 0x126068u) { return; }
    }
    ctx->pc = 0x126068u;
label_126068:
    // 0x126068: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_12606c:
    if (ctx->pc == 0x12606Cu) {
        ctx->pc = 0x12606Cu;
            // 0x12606c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->pc = 0x126070u;
        goto label_126070;
    }
    ctx->pc = 0x126068u;
    {
        const bool branch_taken_0x126068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126068u;
            // 0x12606c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126068) {
            ctx->pc = 0x12610Cu;
            goto label_12610c;
        }
    }
    ctx->pc = 0x126070u;
label_126070:
    // 0x126070: 0x10000018  b           . + 4 + (0x18 << 2)
label_126074:
    if (ctx->pc == 0x126074u) {
        ctx->pc = 0x126078u;
        goto label_126078;
    }
    ctx->pc = 0x126070u;
    {
        const bool branch_taken_0x126070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126070) {
            ctx->pc = 0x1260D4u;
            goto label_1260d4;
        }
    }
    ctx->pc = 0x126078u;
label_126078:
    // 0x126078: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x126078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_12607c:
    // 0x12607c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_126080:
    if (ctx->pc == 0x126080u) {
        ctx->pc = 0x126080u;
            // 0x126080: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x126084u;
        goto label_126084;
    }
    ctx->pc = 0x12607Cu;
    {
        const bool branch_taken_0x12607c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12607Cu;
            // 0x126080: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12607c) {
            ctx->pc = 0x1260A8u;
            goto label_1260a8;
        }
    }
    ctx->pc = 0x126084u;
label_126084:
    // 0x126084: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x126084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_126088:
    // 0x126088: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x126088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12608c:
    // 0x12608c: 0x40f809  jalr        $v0
label_126090:
    if (ctx->pc == 0x126090u) {
        ctx->pc = 0x126090u;
            // 0x126090: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x126094u;
        goto label_126094;
    }
    ctx->pc = 0x12608Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126094u);
        ctx->pc = 0x126090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12608Cu;
            // 0x126090: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x126094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x126094u; }
            if (ctx->pc != 0x126094u) { return; }
        }
        }
    }
    ctx->pc = 0x126094u;
label_126094:
    // 0x126094: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126098:
    // 0x126098: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_12609c:
    if (ctx->pc == 0x12609Cu) {
        ctx->pc = 0x12609Cu;
            // 0x12609c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->pc = 0x1260A0u;
        goto label_1260a0;
    }
    ctx->pc = 0x126098u;
    {
        const bool branch_taken_0x126098 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126098u;
            // 0x12609c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126098) {
            ctx->pc = 0x12610Cu;
            goto label_12610c;
        }
    }
    ctx->pc = 0x1260A0u;
label_1260a0:
    // 0x1260a0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1260a4:
    if (ctx->pc == 0x1260A4u) {
        ctx->pc = 0x1260A8u;
        goto label_1260a8;
    }
    ctx->pc = 0x1260A0u;
    {
        const bool branch_taken_0x1260a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1260a0) {
            ctx->pc = 0x1260D4u;
            goto label_1260d4;
        }
    }
    ctx->pc = 0x1260A8u;
label_1260a8:
    // 0x1260a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1260a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1260ac:
    // 0x1260ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1260acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1260b0:
    // 0x1260b0: 0xc049c44  jal         func_127110
label_1260b4:
    if (ctx->pc == 0x1260B4u) {
        ctx->pc = 0x1260B4u;
            // 0x1260b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1260B8u;
        goto label_1260b8;
    }
    ctx->pc = 0x1260B0u;
    SET_GPR_U32(ctx, 31, 0x1260B8u);
    ctx->pc = 0x1260B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1260B0u;
            // 0x1260b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127110u;
    if (runtime->hasFunction(0x127110u)) {
        auto targetFn = runtime->lookupFunction(0x127110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260B8u; }
        if (ctx->pc != 0x1260B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memmove_0x127110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260B8u; }
        if (ctx->pc != 0x1260B8u) { return; }
    }
    ctx->pc = 0x1260B8u;
label_1260b8:
    // 0x1260b8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1260b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1260bc:
    // 0x1260bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1260bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1260c0:
    // 0x1260c0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1260c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1260c4:
    // 0x1260c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1260c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1260c8:
    // 0x1260c8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1260c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1260cc:
    // 0x1260cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1260ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1260d0:
    // 0x1260d0: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x1260d0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1260d4:
    // 0x1260d4: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
label_1260d8:
    if (ctx->pc == 0x1260D8u) {
        ctx->pc = 0x1260D8u;
            // 0x1260d8: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->pc = 0x1260DCu;
        goto label_1260dc;
    }
    ctx->pc = 0x1260D4u;
    {
        const bool branch_taken_0x1260d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1260d4) {
            ctx->pc = 0x1260D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1260D4u;
            // 0x1260d8: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1260F0u;
            goto label_1260f0;
        }
    }
    ctx->pc = 0x1260DCu;
label_1260dc:
    // 0x1260dc: 0xc04953a  jal         func_1254E8
label_1260e0:
    if (ctx->pc == 0x1260E0u) {
        ctx->pc = 0x1260E0u;
            // 0x1260e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1260E4u;
        goto label_1260e4;
    }
    ctx->pc = 0x1260DCu;
    SET_GPR_U32(ctx, 31, 0x1260E4u);
    ctx->pc = 0x1260E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1260DCu;
            // 0x1260e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1254E8u;
    if (runtime->hasFunction(0x1254E8u)) {
        auto targetFn = runtime->lookupFunction(0x1254E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260E4u; }
        if (ctx->pc != 0x1260E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fflush_0x1254e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1260E4u; }
        if (ctx->pc != 0x1260E4u) { return; }
    }
    ctx->pc = 0x1260E4u;
label_1260e4:
    // 0x1260e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1260e8:
    if (ctx->pc == 0x1260E8u) {
        ctx->pc = 0x1260E8u;
            // 0x1260e8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1260ECu;
        goto label_1260ec;
    }
    ctx->pc = 0x1260E4u;
    {
        const bool branch_taken_0x1260e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1260E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1260E4u;
            // 0x1260e8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260e4) {
            ctx->pc = 0x12610Cu;
            goto label_12610c;
        }
    }
    ctx->pc = 0x1260ECu;
label_1260ec:
    // 0x1260ec: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1260ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1260f0:
    // 0x1260f0: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1260f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1260f4:
    // 0x1260f4: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1260f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1260f8:
    // 0x1260f8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1260f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1260fc:
    // 0x1260fc: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_126100:
    if (ctx->pc == 0x126100u) {
        ctx->pc = 0x126100u;
            // 0x126100: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x126104u;
        goto label_126104;
    }
    ctx->pc = 0x1260FCu;
    {
        const bool branch_taken_0x1260fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1260FCu;
            // 0x126100: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260fc) {
            ctx->pc = 0x125FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125fb0;
        }
    }
    ctx->pc = 0x126104u;
label_126104:
    // 0x126104: 0x10000005  b           . + 4 + (0x5 << 2)
label_126108:
    if (ctx->pc == 0x126108u) {
        ctx->pc = 0x126108u;
            // 0x126108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12610Cu;
        goto label_12610c;
    }
    ctx->pc = 0x126104u;
    {
        const bool branch_taken_0x126104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126104u;
            // 0x126108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126104) {
            ctx->pc = 0x12611Cu;
            goto label_12611c;
        }
    }
    ctx->pc = 0x12610Cu;
label_12610c:
    // 0x12610c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x12610cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_126110:
    // 0x126110: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126114:
    // 0x126114: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x126114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_126118:
    // 0x126118: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x126118u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_12611c:
    // 0x12611c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x12611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_126120:
    // 0x126120: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x126120u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_126124:
    // 0x126124: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x126124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_126128:
    // 0x126128: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x126128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12612c:
    // 0x12612c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12612cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_126130:
    // 0x126130: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x126130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_126134:
    // 0x126134: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x126134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_126138:
    // 0x126138: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x126138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12613c:
    // 0x12613c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12613cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126140:
    // 0x126140: 0x3e00008  jr          $ra
label_126144:
    if (ctx->pc == 0x126144u) {
        ctx->pc = 0x126144u;
            // 0x126144: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x126148u;
        goto label_fallthrough_0x126140;
    }
    ctx->pc = 0x126140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126140u;
            // 0x126144: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x126140:
    ctx->pc = 0x126148u;
}
