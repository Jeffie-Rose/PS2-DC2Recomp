#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InScreenFunc__6CSceneFP16InScreenFuncInfo
// Address: 0x283e30 - 0x2842e8
void InScreenFunc__6CSceneFP16InScreenFuncInfo_0x283e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InScreenFunc__6CSceneFP16InScreenFuncInfo_0x283e30");
#endif

    switch (ctx->pc) {
        case 0x283e30u: goto label_283e30;
        case 0x283e34u: goto label_283e34;
        case 0x283e38u: goto label_283e38;
        case 0x283e3cu: goto label_283e3c;
        case 0x283e40u: goto label_283e40;
        case 0x283e44u: goto label_283e44;
        case 0x283e48u: goto label_283e48;
        case 0x283e4cu: goto label_283e4c;
        case 0x283e50u: goto label_283e50;
        case 0x283e54u: goto label_283e54;
        case 0x283e58u: goto label_283e58;
        case 0x283e5cu: goto label_283e5c;
        case 0x283e60u: goto label_283e60;
        case 0x283e64u: goto label_283e64;
        case 0x283e68u: goto label_283e68;
        case 0x283e6cu: goto label_283e6c;
        case 0x283e70u: goto label_283e70;
        case 0x283e74u: goto label_283e74;
        case 0x283e78u: goto label_283e78;
        case 0x283e7cu: goto label_283e7c;
        case 0x283e80u: goto label_283e80;
        case 0x283e84u: goto label_283e84;
        case 0x283e88u: goto label_283e88;
        case 0x283e8cu: goto label_283e8c;
        case 0x283e90u: goto label_283e90;
        case 0x283e94u: goto label_283e94;
        case 0x283e98u: goto label_283e98;
        case 0x283e9cu: goto label_283e9c;
        case 0x283ea0u: goto label_283ea0;
        case 0x283ea4u: goto label_283ea4;
        case 0x283ea8u: goto label_283ea8;
        case 0x283eacu: goto label_283eac;
        case 0x283eb0u: goto label_283eb0;
        case 0x283eb4u: goto label_283eb4;
        case 0x283eb8u: goto label_283eb8;
        case 0x283ebcu: goto label_283ebc;
        case 0x283ec0u: goto label_283ec0;
        case 0x283ec4u: goto label_283ec4;
        case 0x283ec8u: goto label_283ec8;
        case 0x283eccu: goto label_283ecc;
        case 0x283ed0u: goto label_283ed0;
        case 0x283ed4u: goto label_283ed4;
        case 0x283ed8u: goto label_283ed8;
        case 0x283edcu: goto label_283edc;
        case 0x283ee0u: goto label_283ee0;
        case 0x283ee4u: goto label_283ee4;
        case 0x283ee8u: goto label_283ee8;
        case 0x283eecu: goto label_283eec;
        case 0x283ef0u: goto label_283ef0;
        case 0x283ef4u: goto label_283ef4;
        case 0x283ef8u: goto label_283ef8;
        case 0x283efcu: goto label_283efc;
        case 0x283f00u: goto label_283f00;
        case 0x283f04u: goto label_283f04;
        case 0x283f08u: goto label_283f08;
        case 0x283f0cu: goto label_283f0c;
        case 0x283f10u: goto label_283f10;
        case 0x283f14u: goto label_283f14;
        case 0x283f18u: goto label_283f18;
        case 0x283f1cu: goto label_283f1c;
        case 0x283f20u: goto label_283f20;
        case 0x283f24u: goto label_283f24;
        case 0x283f28u: goto label_283f28;
        case 0x283f2cu: goto label_283f2c;
        case 0x283f30u: goto label_283f30;
        case 0x283f34u: goto label_283f34;
        case 0x283f38u: goto label_283f38;
        case 0x283f3cu: goto label_283f3c;
        case 0x283f40u: goto label_283f40;
        case 0x283f44u: goto label_283f44;
        case 0x283f48u: goto label_283f48;
        case 0x283f4cu: goto label_283f4c;
        case 0x283f50u: goto label_283f50;
        case 0x283f54u: goto label_283f54;
        case 0x283f58u: goto label_283f58;
        case 0x283f5cu: goto label_283f5c;
        case 0x283f60u: goto label_283f60;
        case 0x283f64u: goto label_283f64;
        case 0x283f68u: goto label_283f68;
        case 0x283f6cu: goto label_283f6c;
        case 0x283f70u: goto label_283f70;
        case 0x283f74u: goto label_283f74;
        case 0x283f78u: goto label_283f78;
        case 0x283f7cu: goto label_283f7c;
        case 0x283f80u: goto label_283f80;
        case 0x283f84u: goto label_283f84;
        case 0x283f88u: goto label_283f88;
        case 0x283f8cu: goto label_283f8c;
        case 0x283f90u: goto label_283f90;
        case 0x283f94u: goto label_283f94;
        case 0x283f98u: goto label_283f98;
        case 0x283f9cu: goto label_283f9c;
        case 0x283fa0u: goto label_283fa0;
        case 0x283fa4u: goto label_283fa4;
        case 0x283fa8u: goto label_283fa8;
        case 0x283facu: goto label_283fac;
        case 0x283fb0u: goto label_283fb0;
        case 0x283fb4u: goto label_283fb4;
        case 0x283fb8u: goto label_283fb8;
        case 0x283fbcu: goto label_283fbc;
        case 0x283fc0u: goto label_283fc0;
        case 0x283fc4u: goto label_283fc4;
        case 0x283fc8u: goto label_283fc8;
        case 0x283fccu: goto label_283fcc;
        case 0x283fd0u: goto label_283fd0;
        case 0x283fd4u: goto label_283fd4;
        case 0x283fd8u: goto label_283fd8;
        case 0x283fdcu: goto label_283fdc;
        case 0x283fe0u: goto label_283fe0;
        case 0x283fe4u: goto label_283fe4;
        case 0x283fe8u: goto label_283fe8;
        case 0x283fecu: goto label_283fec;
        case 0x283ff0u: goto label_283ff0;
        case 0x283ff4u: goto label_283ff4;
        case 0x283ff8u: goto label_283ff8;
        case 0x283ffcu: goto label_283ffc;
        case 0x284000u: goto label_284000;
        case 0x284004u: goto label_284004;
        case 0x284008u: goto label_284008;
        case 0x28400cu: goto label_28400c;
        case 0x284010u: goto label_284010;
        case 0x284014u: goto label_284014;
        case 0x284018u: goto label_284018;
        case 0x28401cu: goto label_28401c;
        case 0x284020u: goto label_284020;
        case 0x284024u: goto label_284024;
        case 0x284028u: goto label_284028;
        case 0x28402cu: goto label_28402c;
        case 0x284030u: goto label_284030;
        case 0x284034u: goto label_284034;
        case 0x284038u: goto label_284038;
        case 0x28403cu: goto label_28403c;
        case 0x284040u: goto label_284040;
        case 0x284044u: goto label_284044;
        case 0x284048u: goto label_284048;
        case 0x28404cu: goto label_28404c;
        case 0x284050u: goto label_284050;
        case 0x284054u: goto label_284054;
        case 0x284058u: goto label_284058;
        case 0x28405cu: goto label_28405c;
        case 0x284060u: goto label_284060;
        case 0x284064u: goto label_284064;
        case 0x284068u: goto label_284068;
        case 0x28406cu: goto label_28406c;
        case 0x284070u: goto label_284070;
        case 0x284074u: goto label_284074;
        case 0x284078u: goto label_284078;
        case 0x28407cu: goto label_28407c;
        case 0x284080u: goto label_284080;
        case 0x284084u: goto label_284084;
        case 0x284088u: goto label_284088;
        case 0x28408cu: goto label_28408c;
        case 0x284090u: goto label_284090;
        case 0x284094u: goto label_284094;
        case 0x284098u: goto label_284098;
        case 0x28409cu: goto label_28409c;
        case 0x2840a0u: goto label_2840a0;
        case 0x2840a4u: goto label_2840a4;
        case 0x2840a8u: goto label_2840a8;
        case 0x2840acu: goto label_2840ac;
        case 0x2840b0u: goto label_2840b0;
        case 0x2840b4u: goto label_2840b4;
        case 0x2840b8u: goto label_2840b8;
        case 0x2840bcu: goto label_2840bc;
        case 0x2840c0u: goto label_2840c0;
        case 0x2840c4u: goto label_2840c4;
        case 0x2840c8u: goto label_2840c8;
        case 0x2840ccu: goto label_2840cc;
        case 0x2840d0u: goto label_2840d0;
        case 0x2840d4u: goto label_2840d4;
        case 0x2840d8u: goto label_2840d8;
        case 0x2840dcu: goto label_2840dc;
        case 0x2840e0u: goto label_2840e0;
        case 0x2840e4u: goto label_2840e4;
        case 0x2840e8u: goto label_2840e8;
        case 0x2840ecu: goto label_2840ec;
        case 0x2840f0u: goto label_2840f0;
        case 0x2840f4u: goto label_2840f4;
        case 0x2840f8u: goto label_2840f8;
        case 0x2840fcu: goto label_2840fc;
        case 0x284100u: goto label_284100;
        case 0x284104u: goto label_284104;
        case 0x284108u: goto label_284108;
        case 0x28410cu: goto label_28410c;
        case 0x284110u: goto label_284110;
        case 0x284114u: goto label_284114;
        case 0x284118u: goto label_284118;
        case 0x28411cu: goto label_28411c;
        case 0x284120u: goto label_284120;
        case 0x284124u: goto label_284124;
        case 0x284128u: goto label_284128;
        case 0x28412cu: goto label_28412c;
        case 0x284130u: goto label_284130;
        case 0x284134u: goto label_284134;
        case 0x284138u: goto label_284138;
        case 0x28413cu: goto label_28413c;
        case 0x284140u: goto label_284140;
        case 0x284144u: goto label_284144;
        case 0x284148u: goto label_284148;
        case 0x28414cu: goto label_28414c;
        case 0x284150u: goto label_284150;
        case 0x284154u: goto label_284154;
        case 0x284158u: goto label_284158;
        case 0x28415cu: goto label_28415c;
        case 0x284160u: goto label_284160;
        case 0x284164u: goto label_284164;
        case 0x284168u: goto label_284168;
        case 0x28416cu: goto label_28416c;
        case 0x284170u: goto label_284170;
        case 0x284174u: goto label_284174;
        case 0x284178u: goto label_284178;
        case 0x28417cu: goto label_28417c;
        case 0x284180u: goto label_284180;
        case 0x284184u: goto label_284184;
        case 0x284188u: goto label_284188;
        case 0x28418cu: goto label_28418c;
        case 0x284190u: goto label_284190;
        case 0x284194u: goto label_284194;
        case 0x284198u: goto label_284198;
        case 0x28419cu: goto label_28419c;
        case 0x2841a0u: goto label_2841a0;
        case 0x2841a4u: goto label_2841a4;
        case 0x2841a8u: goto label_2841a8;
        case 0x2841acu: goto label_2841ac;
        case 0x2841b0u: goto label_2841b0;
        case 0x2841b4u: goto label_2841b4;
        case 0x2841b8u: goto label_2841b8;
        case 0x2841bcu: goto label_2841bc;
        case 0x2841c0u: goto label_2841c0;
        case 0x2841c4u: goto label_2841c4;
        case 0x2841c8u: goto label_2841c8;
        case 0x2841ccu: goto label_2841cc;
        case 0x2841d0u: goto label_2841d0;
        case 0x2841d4u: goto label_2841d4;
        case 0x2841d8u: goto label_2841d8;
        case 0x2841dcu: goto label_2841dc;
        case 0x2841e0u: goto label_2841e0;
        case 0x2841e4u: goto label_2841e4;
        case 0x2841e8u: goto label_2841e8;
        case 0x2841ecu: goto label_2841ec;
        case 0x2841f0u: goto label_2841f0;
        case 0x2841f4u: goto label_2841f4;
        case 0x2841f8u: goto label_2841f8;
        case 0x2841fcu: goto label_2841fc;
        case 0x284200u: goto label_284200;
        case 0x284204u: goto label_284204;
        case 0x284208u: goto label_284208;
        case 0x28420cu: goto label_28420c;
        case 0x284210u: goto label_284210;
        case 0x284214u: goto label_284214;
        case 0x284218u: goto label_284218;
        case 0x28421cu: goto label_28421c;
        case 0x284220u: goto label_284220;
        case 0x284224u: goto label_284224;
        case 0x284228u: goto label_284228;
        case 0x28422cu: goto label_28422c;
        case 0x284230u: goto label_284230;
        case 0x284234u: goto label_284234;
        case 0x284238u: goto label_284238;
        case 0x28423cu: goto label_28423c;
        case 0x284240u: goto label_284240;
        case 0x284244u: goto label_284244;
        case 0x284248u: goto label_284248;
        case 0x28424cu: goto label_28424c;
        case 0x284250u: goto label_284250;
        case 0x284254u: goto label_284254;
        case 0x284258u: goto label_284258;
        case 0x28425cu: goto label_28425c;
        case 0x284260u: goto label_284260;
        case 0x284264u: goto label_284264;
        case 0x284268u: goto label_284268;
        case 0x28426cu: goto label_28426c;
        case 0x284270u: goto label_284270;
        case 0x284274u: goto label_284274;
        case 0x284278u: goto label_284278;
        case 0x28427cu: goto label_28427c;
        case 0x284280u: goto label_284280;
        case 0x284284u: goto label_284284;
        case 0x284288u: goto label_284288;
        case 0x28428cu: goto label_28428c;
        case 0x284290u: goto label_284290;
        case 0x284294u: goto label_284294;
        case 0x284298u: goto label_284298;
        case 0x28429cu: goto label_28429c;
        case 0x2842a0u: goto label_2842a0;
        case 0x2842a4u: goto label_2842a4;
        case 0x2842a8u: goto label_2842a8;
        case 0x2842acu: goto label_2842ac;
        case 0x2842b0u: goto label_2842b0;
        case 0x2842b4u: goto label_2842b4;
        case 0x2842b8u: goto label_2842b8;
        case 0x2842bcu: goto label_2842bc;
        case 0x2842c0u: goto label_2842c0;
        case 0x2842c4u: goto label_2842c4;
        case 0x2842c8u: goto label_2842c8;
        case 0x2842ccu: goto label_2842cc;
        case 0x2842d0u: goto label_2842d0;
        case 0x2842d4u: goto label_2842d4;
        case 0x2842d8u: goto label_2842d8;
        case 0x2842dcu: goto label_2842dc;
        case 0x2842e0u: goto label_2842e0;
        case 0x2842e4u: goto label_2842e4;
        default: break;
    }

    ctx->pc = 0x283e30u;

label_283e30:
    // 0x283e30: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x283e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_283e34:
    // 0x283e34: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x283e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_283e38:
    // 0x283e38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x283e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_283e3c:
    // 0x283e3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x283e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_283e40:
    // 0x283e40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x283e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_283e44:
    // 0x283e44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x283e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283e48:
    // 0x283e48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x283e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_283e4c:
    // 0x283e4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x283e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283e50:
    // 0x283e50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x283e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_283e54:
    // 0x283e54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x283e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_283e58:
    // 0x283e58: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x283e58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_283e5c:
    // 0x283e5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x283e5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_283e60:
    // 0x283e60: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x283e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_283e64:
    // 0x283e64: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x283e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_283e68:
    // 0x283e68: 0x1000001e  b           . + 4 + (0x1E << 2)
label_283e6c:
    if (ctx->pc == 0x283E6Cu) {
        ctx->pc = 0x283E6Cu;
            // 0x283e6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283E70u;
        goto label_283e70;
    }
    ctx->pc = 0x283E68u;
    {
        const bool branch_taken_0x283e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283E68u;
            // 0x283e6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e68) {
            ctx->pc = 0x283EE4u;
            goto label_283ee4;
        }
    }
    ctx->pc = 0x283E70u;
label_283e70:
    // 0x283e70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x283e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_283e74:
    // 0x283e74: 0xc0a11a4  jal         func_284690
label_283e78:
    if (ctx->pc == 0x283E78u) {
        ctx->pc = 0x283E78u;
            // 0x283e78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283E7Cu;
        goto label_283e7c;
    }
    ctx->pc = 0x283E74u;
    SET_GPR_U32(ctx, 31, 0x283E7Cu);
    ctx->pc = 0x283E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283E74u;
            // 0x283e78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E7Cu; }
        if (ctx->pc != 0x283E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E7Cu; }
        if (ctx->pc != 0x283E7Cu) { return; }
    }
    ctx->pc = 0x283E7Cu;
label_283e7c:
    // 0x283e7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_283e80:
    if (ctx->pc == 0x283E80u) {
        ctx->pc = 0x283E80u;
            // 0x283e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283E84u;
        goto label_283e84;
    }
    ctx->pc = 0x283E7Cu;
    {
        const bool branch_taken_0x283e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283E7Cu;
            // 0x283e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e7c) {
            ctx->pc = 0x283EE0u;
            goto label_283ee0;
        }
    }
    ctx->pc = 0x283E84u;
label_283e84:
    // 0x283e84: 0xc0a0f58  jal         func_283D60
label_283e88:
    if (ctx->pc == 0x283E88u) {
        ctx->pc = 0x283E88u;
            // 0x283e88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283E8Cu;
        goto label_283e8c;
    }
    ctx->pc = 0x283E84u;
    SET_GPR_U32(ctx, 31, 0x283E8Cu);
    ctx->pc = 0x283E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283E84u;
            // 0x283e88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E8Cu; }
        if (ctx->pc != 0x283E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283E8Cu; }
        if (ctx->pc != 0x283E8Cu) { return; }
    }
    ctx->pc = 0x283E8Cu;
label_283e8c:
    // 0x283e8c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_283e90:
    if (ctx->pc == 0x283E90u) {
        ctx->pc = 0x283E94u;
        goto label_283e94;
    }
    ctx->pc = 0x283E8Cu;
    {
        const bool branch_taken_0x283e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283e8c) {
            ctx->pc = 0x283EE0u;
            goto label_283ee0;
        }
    }
    ctx->pc = 0x283E94u;
label_283e94:
    // 0x283e94: 0x8c590d00  lw          $t9, 0xD00($v0)
    ctx->pc = 0x283e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
label_283e98:
    // 0x283e98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x283e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283e9c:
    // 0x283e9c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x283e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_283ea0:
    // 0x283ea0: 0x320f809  jalr        $t9
label_283ea4:
    if (ctx->pc == 0x283EA4u) {
        ctx->pc = 0x283EA4u;
            // 0x283ea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283EA8u;
        goto label_283ea8;
    }
    ctx->pc = 0x283EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x283EA8u);
        ctx->pc = 0x283EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283EA0u;
            // 0x283ea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x283EA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x283EA8u; }
            if (ctx->pc != 0x283EA8u) { return; }
        }
        }
    }
    ctx->pc = 0x283EA8u;
label_283ea8:
    // 0x283ea8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_283eac:
    if (ctx->pc == 0x283EACu) {
        ctx->pc = 0x283EB0u;
        goto label_283eb0;
    }
    ctx->pc = 0x283EA8u;
    {
        const bool branch_taken_0x283ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ea8) {
            ctx->pc = 0x283EE0u;
            goto label_283ee0;
        }
    }
    ctx->pc = 0x283EB0u;
label_283eb0:
    // 0x283eb0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_283eb4:
    if (ctx->pc == 0x283EB4u) {
        ctx->pc = 0x283EB8u;
        goto label_283eb8;
    }
    ctx->pc = 0x283EB0u;
    {
        const bool branch_taken_0x283eb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x283eb0) {
            ctx->pc = 0x283ECCu;
            goto label_283ecc;
        }
    }
    ctx->pc = 0x283EB8u;
label_283eb8:
    // 0x283eb8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x283eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283ebc:
    // 0x283ebc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x283ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_283ec0:
    // 0x283ec0: 0x0  nop
    ctx->pc = 0x283ec0u;
    // NOP
label_283ec4:
    // 0x283ec4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_283ec8:
    if (ctx->pc == 0x283EC8u) {
        ctx->pc = 0x283ECCu;
        goto label_283ecc;
    }
    ctx->pc = 0x283EC4u;
    {
        const bool branch_taken_0x283ec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283ec4) {
            ctx->pc = 0x283EE0u;
            goto label_283ee0;
        }
    }
    ctx->pc = 0x283ECCu;
label_283ecc:
    // 0x283ecc: 0x0  nop
    ctx->pc = 0x283eccu;
    // NOP
label_283ed0:
    // 0x283ed0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x283ed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283ed4:
    // 0x283ed4: 0xc6150004  lwc1        $f21, 0x4($s0)
    ctx->pc = 0x283ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_283ed8:
    // 0x283ed8: 0xc6140008  lwc1        $f20, 0x8($s0)
    ctx->pc = 0x283ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_283edc:
    // 0x283edc: 0x0  nop
    ctx->pc = 0x283edcu;
    // NOP
label_283ee0:
    // 0x283ee0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x283ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_283ee4:
    // 0x283ee4: 0x0  nop
    ctx->pc = 0x283ee4u;
    // NOP
label_283ee8:
    // 0x283ee8: 0x8e2227e0  lw          $v0, 0x27E0($s1)
    ctx->pc = 0x283ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10208)));
label_283eec:
    // 0x283eec: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x283eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_283ef0:
    // 0x283ef0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_283ef4:
    if (ctx->pc == 0x283EF4u) {
        ctx->pc = 0x283EF4u;
            // 0x283ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283EF8u;
        goto label_283ef8;
    }
    ctx->pc = 0x283EF0u;
    {
        const bool branch_taken_0x283ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283EF0u;
            // 0x283ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ef0) {
            ctx->pc = 0x283E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283e70;
        }
    }
    ctx->pc = 0x283EF8u;
label_283ef8:
    // 0x283ef8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_283efc:
    if (ctx->pc == 0x283EFCu) {
        ctx->pc = 0x283EFCu;
            // 0x283efc: 0xe6150004  swc1        $f21, 0x4($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->pc = 0x283F00u;
        goto label_283f00;
    }
    ctx->pc = 0x283EF8u;
    {
        const bool branch_taken_0x283ef8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x283EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283EF8u;
            // 0x283efc: 0xe6150004  swc1        $f21, 0x4($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ef8) {
            ctx->pc = 0x283F08u;
            goto label_283f08;
        }
    }
    ctx->pc = 0x283F00u;
label_283f00:
    // 0x283f00: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_283f04:
    if (ctx->pc == 0x283F04u) {
        ctx->pc = 0x283F04u;
            // 0x283f04: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283F08u;
        goto label_283f08;
    }
    ctx->pc = 0x283F00u;
    {
        const bool branch_taken_0x283f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F00u;
            // 0x283f04: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f00) {
            ctx->pc = 0x2842C4u;
            goto label_2842c4;
        }
    }
    ctx->pc = 0x283F08u;
label_283f08:
    // 0x283f08: 0x8e252e5c  lw          $a1, 0x2E5C($s1)
    ctx->pc = 0x283f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11868)));
label_283f0c:
    // 0x283f0c: 0xc0a0f58  jal         func_283D60
label_283f10:
    if (ctx->pc == 0x283F10u) {
        ctx->pc = 0x283F10u;
            // 0x283f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283F14u;
        goto label_283f14;
    }
    ctx->pc = 0x283F0Cu;
    SET_GPR_U32(ctx, 31, 0x283F14u);
    ctx->pc = 0x283F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283F0Cu;
            // 0x283f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F14u; }
        if (ctx->pc != 0x283F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F14u; }
        if (ctx->pc != 0x283F14u) { return; }
    }
    ctx->pc = 0x283F14u;
label_283f14:
    // 0x283f14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x283f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283f18:
    // 0x283f18: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_283f1c:
    if (ctx->pc == 0x283F1Cu) {
        ctx->pc = 0x283F1Cu;
            // 0x283f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283F20u;
        goto label_283f20;
    }
    ctx->pc = 0x283F18u;
    {
        const bool branch_taken_0x283f18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F18u;
            // 0x283f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f18) {
            ctx->pc = 0x283F28u;
            goto label_283f28;
        }
    }
    ctx->pc = 0x283F20u;
label_283f20:
    // 0x283f20: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_283f24:
    if (ctx->pc == 0x283F24u) {
        ctx->pc = 0x283F24u;
            // 0x283f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283F28u;
        goto label_283f28;
    }
    ctx->pc = 0x283F20u;
    {
        const bool branch_taken_0x283f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F20u;
            // 0x283f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f20) {
            ctx->pc = 0x2842C4u;
            goto label_2842c4;
        }
    }
    ctx->pc = 0x283F28u;
label_283f28:
    // 0x283f28: 0xc0a0f6c  jal         func_283DB0
label_283f2c:
    if (ctx->pc == 0x283F2Cu) {
        ctx->pc = 0x283F2Cu;
            // 0x283f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283F30u;
        goto label_283f30;
    }
    ctx->pc = 0x283F28u;
    SET_GPR_U32(ctx, 31, 0x283F30u);
    ctx->pc = 0x283F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283F28u;
            // 0x283f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283DB0u;
    if (runtime->hasFunction(0x283DB0u)) {
        auto targetFn = runtime->lookupFunction(0x283DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F30u; }
        if (ctx->pc != 0x283F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSky__6CSceneFi_0x283db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F30u; }
        if (ctx->pc != 0x283F30u) { return; }
    }
    ctx->pc = 0x283F30u;
label_283f30:
    // 0x283f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_283f34:
    if (ctx->pc == 0x283F34u) {
        ctx->pc = 0x283F34u;
            // 0x283f34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283F38u;
        goto label_283f38;
    }
    ctx->pc = 0x283F30u;
    {
        const bool branch_taken_0x283f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F30u;
            // 0x283f34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f30) {
            ctx->pc = 0x283F40u;
            goto label_283f40;
        }
    }
    ctx->pc = 0x283F38u;
label_283f38:
    // 0x283f38: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_283f3c:
    if (ctx->pc == 0x283F3Cu) {
        ctx->pc = 0x283F3Cu;
            // 0x283f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283F40u;
        goto label_283f40;
    }
    ctx->pc = 0x283F38u;
    {
        const bool branch_taken_0x283f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F38u;
            // 0x283f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f38) {
            ctx->pc = 0x2842C4u;
            goto label_2842c4;
        }
    }
    ctx->pc = 0x283F40u;
label_283f40:
    // 0x283f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283f44:
    // 0x283f44: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x283f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_283f48:
    // 0x283f48: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x283f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_283f4c:
    // 0x283f4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_283f50:
    if (ctx->pc == 0x283F50u) {
        ctx->pc = 0x283F54u;
        goto label_283f54;
    }
    ctx->pc = 0x283F4Cu;
    {
        const bool branch_taken_0x283f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283f4c) {
            ctx->pc = 0x283F5Cu;
            goto label_283f5c;
        }
    }
    ctx->pc = 0x283F54u;
label_283f54:
    // 0x283f54: 0x100000db  b           . + 4 + (0xDB << 2)
label_283f58:
    if (ctx->pc == 0x283F58u) {
        ctx->pc = 0x283F58u;
            // 0x283f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x283F5Cu;
        goto label_283f5c;
    }
    ctx->pc = 0x283F54u;
    {
        const bool branch_taken_0x283f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F54u;
            // 0x283f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f54) {
            ctx->pc = 0x2842C4u;
            goto label_2842c4;
        }
    }
    ctx->pc = 0x283F5Cu;
label_283f5c:
    // 0x283f5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x283f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_283f60:
    // 0x283f60: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x283f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_283f64:
    // 0x283f64: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_283f68:
    if (ctx->pc == 0x283F68u) {
        ctx->pc = 0x283F68u;
            // 0x283f68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x283F6Cu;
        goto label_283f6c;
    }
    ctx->pc = 0x283F64u;
    {
        const bool branch_taken_0x283f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F64u;
            // 0x283f68: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f64) {
            ctx->pc = 0x283F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283f44;
        }
    }
    ctx->pc = 0x283F6Cu;
label_283f6c:
    // 0x283f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x283f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_283f70:
    // 0x283f70: 0xc058404  jal         func_161010
label_283f74:
    if (ctx->pc == 0x283F74u) {
        ctx->pc = 0x283F74u;
            // 0x283f74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x283F78u;
        goto label_283f78;
    }
    ctx->pc = 0x283F70u;
    SET_GPR_U32(ctx, 31, 0x283F78u);
    ctx->pc = 0x283F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283F70u;
            // 0x283f74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (runtime->hasFunction(0x161010u)) {
        auto targetFn = runtime->lookupFunction(0x161010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F78u; }
        if (ctx->pc != 0x283F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingSunRatio__4CMapFPf_0x161010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F78u; }
        if (ctx->pc != 0x283F78u) { return; }
    }
    ctx->pc = 0x283F78u;
label_283f78:
    // 0x283f78: 0xc04c050  jal         func_130140
label_283f7c:
    if (ctx->pc == 0x283F7Cu) {
        ctx->pc = 0x283F7Cu;
            // 0x283f7c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x283F80u;
        goto label_283f80;
    }
    ctx->pc = 0x283F78u;
    SET_GPR_U32(ctx, 31, 0x283F80u);
    ctx->pc = 0x283F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283F78u;
            // 0x283f7c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F80u; }
        if (ctx->pc != 0x283F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283F80u; }
        if (ctx->pc != 0x283F80u) { return; }
    }
    ctx->pc = 0x283F80u;
label_283f80:
    // 0x283f80: 0x27b30064  addiu       $s3, $sp, 0x64
    ctx->pc = 0x283f80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_283f84:
    // 0x283f84: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x283f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_283f88:
    // 0x283f88: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x283f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283f8c:
    // 0x283f8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x283f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_283f90:
    // 0x283f90: 0x0  nop
    ctx->pc = 0x283f90u;
    // NOP
label_283f94:
    // 0x283f94: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_283f98:
    if (ctx->pc == 0x283F98u) {
        ctx->pc = 0x283F9Cu;
        goto label_283f9c;
    }
    ctx->pc = 0x283F94u;
    {
        const bool branch_taken_0x283f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283f94) {
            ctx->pc = 0x284004u;
            goto label_284004;
        }
    }
    ctx->pc = 0x283F9Cu;
label_283f9c:
    // 0x283f9c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x283f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283fa0:
    // 0x283fa0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x283fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_283fa4:
    // 0x283fa4: 0x0  nop
    ctx->pc = 0x283fa4u;
    // NOP
label_283fa8:
    // 0x283fa8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_283fac:
    if (ctx->pc == 0x283FACu) {
        ctx->pc = 0x283FB0u;
        goto label_283fb0;
    }
    ctx->pc = 0x283FA8u;
    {
        const bool branch_taken_0x283fa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283fa8) {
            ctx->pc = 0x283FD8u;
            goto label_283fd8;
        }
    }
    ctx->pc = 0x283FB0u;
label_283fb0:
    // 0x283fb0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x283fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_283fb4:
    // 0x283fb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x283fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_283fb8:
    // 0x283fb8: 0x0  nop
    ctx->pc = 0x283fb8u;
    // NOP
label_283fbc:
    // 0x283fbc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_283fc0:
    if (ctx->pc == 0x283FC0u) {
        ctx->pc = 0x283FC4u;
        goto label_283fc4;
    }
    ctx->pc = 0x283FBCu;
    {
        const bool branch_taken_0x283fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283fbc) {
            ctx->pc = 0x283FCCu;
            goto label_283fcc;
        }
    }
    ctx->pc = 0x283FC4u;
label_283fc4:
    // 0x283fc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_283fc8:
    if (ctx->pc == 0x283FC8u) {
        ctx->pc = 0x283FCCu;
        goto label_283fcc;
    }
    ctx->pc = 0x283FC4u;
    {
        const bool branch_taken_0x283fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283fc4) {
            ctx->pc = 0x283FD0u;
            goto label_283fd0;
        }
    }
    ctx->pc = 0x283FCCu;
label_283fcc:
    // 0x283fcc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x283fccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_283fd0:
    // 0x283fd0: 0x1000000a  b           . + 4 + (0xA << 2)
label_283fd4:
    if (ctx->pc == 0x283FD4u) {
        ctx->pc = 0x283FD8u;
        goto label_283fd8;
    }
    ctx->pc = 0x283FD0u;
    {
        const bool branch_taken_0x283fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283fd0) {
            ctx->pc = 0x283FFCu;
            goto label_283ffc;
        }
    }
    ctx->pc = 0x283FD8u;
label_283fd8:
    // 0x283fd8: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x283fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_283fdc:
    // 0x283fdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x283fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_283fe0:
    // 0x283fe0: 0x0  nop
    ctx->pc = 0x283fe0u;
    // NOP
label_283fe4:
    // 0x283fe4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_283fe8:
    if (ctx->pc == 0x283FE8u) {
        ctx->pc = 0x283FECu;
        goto label_283fec;
    }
    ctx->pc = 0x283FE4u;
    {
        const bool branch_taken_0x283fe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283fe4) {
            ctx->pc = 0x283FF4u;
            goto label_283ff4;
        }
    }
    ctx->pc = 0x283FECu;
label_283fec:
    // 0x283fec: 0x10000003  b           . + 4 + (0x3 << 2)
label_283ff0:
    if (ctx->pc == 0x283FF0u) {
        ctx->pc = 0x283FF0u;
            // 0x283ff0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x283FF4u;
        goto label_283ff4;
    }
    ctx->pc = 0x283FECu;
    {
        const bool branch_taken_0x283fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283FECu;
            // 0x283ff0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283fec) {
            ctx->pc = 0x283FFCu;
            goto label_283ffc;
        }
    }
    ctx->pc = 0x283FF4u;
label_283ff4:
    // 0x283ff4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x283ff4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_283ff8:
    // 0x283ff8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x283ff8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_283ffc:
    // 0x283ffc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_284000:
    if (ctx->pc == 0x284000u) {
        ctx->pc = 0x284000u;
            // 0x284000: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->pc = 0x284004u;
        goto label_284004;
    }
    ctx->pc = 0x283FFCu;
    {
        const bool branch_taken_0x283ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283FFCu;
            // 0x284000: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ffc) {
            ctx->pc = 0x28406Cu;
            goto label_28406c;
        }
    }
    ctx->pc = 0x284004u;
label_284004:
    // 0x284004: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x284004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284008:
    // 0x284008: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x284008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28400c:
    // 0x28400c: 0x0  nop
    ctx->pc = 0x28400cu;
    // NOP
label_284010:
    // 0x284010: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_284014:
    if (ctx->pc == 0x284014u) {
        ctx->pc = 0x284018u;
        goto label_284018;
    }
    ctx->pc = 0x284010u;
    {
        const bool branch_taken_0x284010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284010) {
            ctx->pc = 0x284040u;
            goto label_284040;
        }
    }
    ctx->pc = 0x284018u;
label_284018:
    // 0x284018: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x284018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28401c:
    // 0x28401c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28401cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_284020:
    // 0x284020: 0x0  nop
    ctx->pc = 0x284020u;
    // NOP
label_284024:
    // 0x284024: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_284028:
    if (ctx->pc == 0x284028u) {
        ctx->pc = 0x28402Cu;
        goto label_28402c;
    }
    ctx->pc = 0x284024u;
    {
        const bool branch_taken_0x284024 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284024) {
            ctx->pc = 0x284034u;
            goto label_284034;
        }
    }
    ctx->pc = 0x28402Cu;
label_28402c:
    // 0x28402c: 0x10000002  b           . + 4 + (0x2 << 2)
label_284030:
    if (ctx->pc == 0x284030u) {
        ctx->pc = 0x284034u;
        goto label_284034;
    }
    ctx->pc = 0x28402Cu;
    {
        const bool branch_taken_0x28402c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28402c) {
            ctx->pc = 0x284038u;
            goto label_284038;
        }
    }
    ctx->pc = 0x284034u;
label_284034:
    // 0x284034: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x284034u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_284038:
    // 0x284038: 0x1000000b  b           . + 4 + (0xB << 2)
label_28403c:
    if (ctx->pc == 0x28403Cu) {
        ctx->pc = 0x28403Cu;
            // 0x28403c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x284040u;
        goto label_284040;
    }
    ctx->pc = 0x284038u;
    {
        const bool branch_taken_0x284038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284038u;
            // 0x28403c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284038) {
            ctx->pc = 0x284068u;
            goto label_284068;
        }
    }
    ctx->pc = 0x284040u;
label_284040:
    // 0x284040: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x284040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284044:
    // 0x284044: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x284044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_284048:
    // 0x284048: 0x0  nop
    ctx->pc = 0x284048u;
    // NOP
label_28404c:
    // 0x28404c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_284050:
    if (ctx->pc == 0x284050u) {
        ctx->pc = 0x284054u;
        goto label_284054;
    }
    ctx->pc = 0x28404Cu;
    {
        const bool branch_taken_0x28404c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28404c) {
            ctx->pc = 0x28405Cu;
            goto label_28405c;
        }
    }
    ctx->pc = 0x284054u;
label_284054:
    // 0x284054: 0x10000003  b           . + 4 + (0x3 << 2)
label_284058:
    if (ctx->pc == 0x284058u) {
        ctx->pc = 0x284058u;
            // 0x284058: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x28405Cu;
        goto label_28405c;
    }
    ctx->pc = 0x284054u;
    {
        const bool branch_taken_0x284054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284054u;
            // 0x284058: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284054) {
            ctx->pc = 0x284064u;
            goto label_284064;
        }
    }
    ctx->pc = 0x28405Cu;
label_28405c:
    // 0x28405c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x28405cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_284060:
    // 0x284060: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x284060u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_284064:
    // 0x284064: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x284064u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_284068:
    // 0x284068: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x284068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_28406c:
    // 0x28406c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_284070:
    // 0x284070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_284074:
    // 0x284074: 0x0  nop
    ctx->pc = 0x284074u;
    // NOP
label_284078:
    // 0x284078: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x284078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28407c:
    // 0x28407c: 0x0  nop
    ctx->pc = 0x28407cu;
    // NOP
label_284080:
    // 0x284080: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_284084:
    if (ctx->pc == 0x284084u) {
        ctx->pc = 0x284084u;
            // 0x284084: 0x27b20068  addiu       $s2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->pc = 0x284088u;
        goto label_284088;
    }
    ctx->pc = 0x284080u;
    {
        const bool branch_taken_0x284080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x284084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284080u;
            // 0x284084: 0x27b20068  addiu       $s2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284080) {
            ctx->pc = 0x284090u;
            goto label_284090;
        }
    }
    ctx->pc = 0x284088u;
label_284088:
    // 0x284088: 0x1000008e  b           . + 4 + (0x8E << 2)
label_28408c:
    if (ctx->pc == 0x28408Cu) {
        ctx->pc = 0x28408Cu;
            // 0x28408c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284090u;
        goto label_284090;
    }
    ctx->pc = 0x284088u;
    {
        const bool branch_taken_0x284088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28408Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284088u;
            // 0x28408c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284088) {
            ctx->pc = 0x2842C4u;
            goto label_2842c4;
        }
    }
    ctx->pc = 0x284090u;
label_284090:
    // 0x284090: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x284090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284094:
    // 0x284094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_284098:
    // 0x284098: 0x0  nop
    ctx->pc = 0x284098u;
    // NOP
label_28409c:
    // 0x28409c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28409cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2840a0:
    // 0x2840a0: 0x0  nop
    ctx->pc = 0x2840a0u;
    // NOP
label_2840a4:
    // 0x2840a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2840a8:
    if (ctx->pc == 0x2840A8u) {
        ctx->pc = 0x2840A8u;
            // 0x2840a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2840ACu;
        goto label_2840ac;
    }
    ctx->pc = 0x2840A4u;
    {
        const bool branch_taken_0x2840a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2840A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2840A4u;
            // 0x2840a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840a4) {
            ctx->pc = 0x2840C0u;
            goto label_2840c0;
        }
    }
    ctx->pc = 0x2840ACu;
label_2840ac:
    // 0x2840ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2840acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2840b0:
    // 0x2840b0: 0xc0b20cc  jal         func_2C8330
label_2840b4:
    if (ctx->pc == 0x2840B4u) {
        ctx->pc = 0x2840B4u;
            // 0x2840b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2840B8u;
        goto label_2840b8;
    }
    ctx->pc = 0x2840B0u;
    SET_GPR_U32(ctx, 31, 0x2840B8u);
    ctx->pc = 0x2840B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2840B0u;
            // 0x2840b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8330u;
    if (runtime->hasFunction(0x2C8330u)) {
        auto targetFn = runtime->lookupFunction(0x2C8330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2840B8u; }
        if (ctx->pc != 0x2840B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMoonPosition__6CSceneFPf_0x2c8330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2840B8u; }
        if (ctx->pc != 0x2840B8u) { return; }
    }
    ctx->pc = 0x2840B8u;
label_2840b8:
    // 0x2840b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2840bc:
    if (ctx->pc == 0x2840BCu) {
        ctx->pc = 0x2840BCu;
            // 0x2840bc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x2840C0u;
        goto label_2840c0;
    }
    ctx->pc = 0x2840B8u;
    {
        const bool branch_taken_0x2840b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2840B8u;
            // 0x2840bc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840b8) {
            ctx->pc = 0x2840CCu;
            goto label_2840cc;
        }
    }
    ctx->pc = 0x2840C0u;
label_2840c0:
    // 0x2840c0: 0xc0b2098  jal         func_2C8260
label_2840c4:
    if (ctx->pc == 0x2840C4u) {
        ctx->pc = 0x2840C4u;
            // 0x2840c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2840C8u;
        goto label_2840c8;
    }
    ctx->pc = 0x2840C0u;
    SET_GPR_U32(ctx, 31, 0x2840C8u);
    ctx->pc = 0x2840C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2840C0u;
            // 0x2840c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8260u;
    if (runtime->hasFunction(0x2C8260u)) {
        auto targetFn = runtime->lookupFunction(0x2C8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2840C8u; }
        if (ctx->pc != 0x2840C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSunPosition__6CSceneFPf_0x2c8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2840C8u; }
        if (ctx->pc != 0x2840C8u) { return; }
    }
    ctx->pc = 0x2840C8u;
label_2840c8:
    // 0x2840c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2840c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2840cc:
    // 0x2840cc: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2840ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2840d0:
    // 0x2840d0: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2840d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_2840d4:
    // 0x2840d4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2840d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2840d8:
    // 0x2840d8: 0x79280000  lq          $t0, 0x0($t1)
    ctx->pc = 0x2840d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2840dc:
    // 0x2840dc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2840dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2840e0:
    // 0x2840e0: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x2840e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2840e4:
    // 0x2840e4: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2840e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2840e8:
    // 0x2840e8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2840e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2840ec:
    // 0x2840ec: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2840ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2840f0:
    // 0x2840f0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2840f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2840f4:
    // 0x2840f4: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x2840f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
label_2840f8:
    // 0x2840f8: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2840f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_2840fc:
    // 0x2840fc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2840fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_284100:
    // 0x284100: 0xc7a500e0  lwc1        $f5, 0xE0($sp)
    ctx->pc = 0x284100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_284104:
    // 0x284104: 0xc7a400f0  lwc1        $f4, 0xF0($sp)
    ctx->pc = 0x284104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284108:
    // 0x284108: 0xc7a300e4  lwc1        $f3, 0xE4($sp)
    ctx->pc = 0x284108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28410c:
    // 0x28410c: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x28410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_284110:
    // 0x284110: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x284110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284114:
    // 0x284114: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x284114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284118:
    // 0x284118: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x284118u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_28411c:
    // 0x28411c: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x28411cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_284120:
    // 0x284120: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x284120u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_284124:
    // 0x284124: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x284124u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_284128:
    // 0x284128: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x284128u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_28412c:
    // 0x28412c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x28412cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_284130:
    // 0x284130: 0xe7a500e0  swc1        $f5, 0xE0($sp)
    ctx->pc = 0x284130u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_284134:
    // 0x284134: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x284134u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_284138:
    // 0x284138: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x284138u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_28413c:
    // 0x28413c: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x28413cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_284140:
    // 0x284140: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x284140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_284144:
    // 0x284144: 0xc04d7c8  jal         func_135F20
label_284148:
    if (ctx->pc == 0x284148u) {
        ctx->pc = 0x284148u;
            // 0x284148: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->pc = 0x28414Cu;
        goto label_28414c;
    }
    ctx->pc = 0x284144u;
    SET_GPR_U32(ctx, 31, 0x28414Cu);
    ctx->pc = 0x284148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284144u;
            // 0x284148: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28414Cu; }
        if (ctx->pc != 0x28414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInsideScreen__FP9mgVu0FBOXPA4_fPfPf_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28414Cu; }
        if (ctx->pc != 0x28414Cu) { return; }
    }
    ctx->pc = 0x28414Cu;
label_28414c:
    // 0x28414c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_284150:
    if (ctx->pc == 0x284150u) {
        ctx->pc = 0x284150u;
            // 0x284150: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x284154u;
        goto label_284154;
    }
    ctx->pc = 0x28414Cu;
    {
        const bool branch_taken_0x28414c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28414Cu;
            // 0x284150: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28414c) {
            ctx->pc = 0x28415Cu;
            goto label_28415c;
        }
    }
    ctx->pc = 0x284154u;
label_284154:
    // 0x284154: 0x1000005b  b           . + 4 + (0x5B << 2)
label_284158:
    if (ctx->pc == 0x284158u) {
        ctx->pc = 0x284158u;
            // 0x284158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28415Cu;
        goto label_28415c;
    }
    ctx->pc = 0x284154u;
    {
        const bool branch_taken_0x284154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284154u;
            // 0x284158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284154) {
            ctx->pc = 0x2842C4u;
            goto label_2842c4;
        }
    }
    ctx->pc = 0x28415Cu;
label_28415c:
    // 0x28415c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x28415cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_284160:
    // 0x284160: 0x24423e90  addiu       $v0, $v0, 0x3E90
    ctx->pc = 0x284160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16016));
label_284164:
    // 0x284164: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x284164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_284168:
    // 0x284168: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x284168u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28416c:
    // 0x28416c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x28416cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_284170:
    // 0x284170: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x284170u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_284174:
    // 0x284174: 0x24423ea0  addiu       $v0, $v0, 0x3EA0
    ctx->pc = 0x284174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16032));
label_284178:
    // 0x284178: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x284178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28417c:
    // 0x28417c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x28417cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_284180:
    // 0x284180: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x284180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284184:
    // 0x284184: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x284184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284188:
    // 0x284188: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x284188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28418c:
    // 0x28418c: 0x0  nop
    ctx->pc = 0x28418cu;
    // NOP
label_284190:
    // 0x284190: 0x4501004c  bc1t        . + 4 + (0x4C << 2)
label_284194:
    if (ctx->pc == 0x284194u) {
        ctx->pc = 0x284194u;
            // 0x284194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x284198u;
        goto label_284198;
    }
    ctx->pc = 0x284190u;
    {
        const bool branch_taken_0x284190 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x284194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284190u;
            // 0x284194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284190) {
            ctx->pc = 0x2842C4u;
            goto label_2842c4;
        }
    }
    ctx->pc = 0x284198u;
label_284198:
    // 0x284198: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x284198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28419c:
    // 0x28419c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x28419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2841a0:
    // 0x2841a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2841a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2841a4:
    // 0x2841a4: 0x0  nop
    ctx->pc = 0x2841a4u;
    // NOP
label_2841a8:
    // 0x2841a8: 0x45000045  bc1f        . + 4 + (0x45 << 2)
label_2841ac:
    if (ctx->pc == 0x2841ACu) {
        ctx->pc = 0x2841B0u;
        goto label_2841b0;
    }
    ctx->pc = 0x2841A8u;
    {
        const bool branch_taken_0x2841a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2841a8) {
            ctx->pc = 0x2842C0u;
            goto label_2842c0;
        }
    }
    ctx->pc = 0x2841B0u;
label_2841b0:
    // 0x2841b0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2841b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2841b4:
    // 0x2841b4: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2841b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2841b8:
    // 0x2841b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2841b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2841bc:
    // 0x2841bc: 0x0  nop
    ctx->pc = 0x2841bcu;
    // NOP
label_2841c0:
    // 0x2841c0: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
label_2841c4:
    if (ctx->pc == 0x2841C4u) {
        ctx->pc = 0x2841C8u;
        goto label_2841c8;
    }
    ctx->pc = 0x2841C0u;
    {
        const bool branch_taken_0x2841c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2841c0) {
            ctx->pc = 0x2842C0u;
            goto label_2842c0;
        }
    }
    ctx->pc = 0x2841C8u;
label_2841c8:
    // 0x2841c8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2841c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2841cc:
    // 0x2841cc: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x2841ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2841d0:
    // 0x2841d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2841d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2841d4:
    // 0x2841d4: 0x0  nop
    ctx->pc = 0x2841d4u;
    // NOP
label_2841d8:
    // 0x2841d8: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_2841dc:
    if (ctx->pc == 0x2841DCu) {
        ctx->pc = 0x2841DCu;
            // 0x2841dc: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->pc = 0x2841E0u;
        goto label_2841e0;
    }
    ctx->pc = 0x2841D8u;
    {
        const bool branch_taken_0x2841d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2841DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2841D8u;
            // 0x2841dc: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841d8) {
            ctx->pc = 0x2842C0u;
            goto label_2842c0;
        }
    }
    ctx->pc = 0x2841E0u;
label_2841e0:
    // 0x2841e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2841e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2841e4:
    // 0x2841e4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2841e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2841e8:
    // 0x2841e8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2841e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2841ec:
    // 0x2841ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2841ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2841f0:
    // 0x2841f0: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x2841f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2841f4:
    // 0x2841f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2841f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2841f8:
    // 0x2841f8: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x2841f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2841fc:
    // 0x2841fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2841fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_284200:
    // 0x284200: 0x0  nop
    ctx->pc = 0x284200u;
    // NOP
label_284204:
    // 0x284204: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_284208:
    if (ctx->pc == 0x284208u) {
        ctx->pc = 0x28420Cu;
        goto label_28420c;
    }
    ctx->pc = 0x284204u;
    {
        const bool branch_taken_0x284204 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x284204) {
            ctx->pc = 0x2842C0u;
            goto label_2842c0;
        }
    }
    ctx->pc = 0x28420Cu;
label_28420c:
    // 0x28420c: 0x83829824  lb          $v0, -0x67DC($gp)
    ctx->pc = 0x28420cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940708)));
label_284210:
    // 0x284210: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_284214:
    if (ctx->pc == 0x284214u) {
        ctx->pc = 0x284214u;
            // 0x284214: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x284218u;
        goto label_284218;
    }
    ctx->pc = 0x284210u;
    {
        const bool branch_taken_0x284210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284210u;
            // 0x284214: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284210) {
            ctx->pc = 0x284230u;
            goto label_284230;
        }
    }
    ctx->pc = 0x284218u;
label_284218:
    // 0x284218: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x284218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_28421c:
    // 0x28421c: 0xc04d924  jal         func_136490
label_284220:
    if (ctx->pc == 0x284220u) {
        ctx->pc = 0x284220u;
            // 0x284220: 0x248450b0  addiu       $a0, $a0, 0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20656));
        ctx->pc = 0x284224u;
        goto label_284224;
    }
    ctx->pc = 0x28421Cu;
    SET_GPR_U32(ctx, 31, 0x284224u);
    ctx->pc = 0x284220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28421Cu;
            // 0x284220: 0x248450b0  addiu       $a0, $a0, 0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284224u; }
        if (ctx->pc != 0x284224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284224u; }
        if (ctx->pc != 0x284224u) { return; }
    }
    ctx->pc = 0x284224u;
label_284224:
    // 0x284224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284228:
    // 0x284228: 0xa3829824  sb          $v0, -0x67DC($gp)
    ctx->pc = 0x284228u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940708), (uint8_t)GPR_U32(ctx, 2));
label_28422c:
    // 0x28422c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x28422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_284230:
    // 0x284230: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x284230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_284234:
    // 0x284234: 0xac225044  sw          $v0, 0x5044($at)
    ctx->pc = 0x284234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20548), GPR_U32(ctx, 2));
label_284238:
    // 0x284238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28423c:
    // 0x28423c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x28423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284240:
    // 0x284240: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x284240u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_284244:
    // 0x284244: 0x0  nop
    ctx->pc = 0x284244u;
    // NOP
label_284248:
    // 0x284248: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_28424c:
    if (ctx->pc == 0x28424Cu) {
        ctx->pc = 0x28424Cu;
            // 0x28424c: 0x240200c1  addiu       $v0, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->pc = 0x284250u;
        goto label_284250;
    }
    ctx->pc = 0x284248u;
    {
        const bool branch_taken_0x284248 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284248u;
            // 0x28424c: 0x240200c1  addiu       $v0, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284248) {
            ctx->pc = 0x284258u;
            goto label_284258;
        }
    }
    ctx->pc = 0x284250u;
label_284250:
    // 0x284250: 0x10000016  b           . + 4 + (0x16 << 2)
label_284254:
    if (ctx->pc == 0x284254u) {
        ctx->pc = 0x284258u;
        goto label_284258;
    }
    ctx->pc = 0x284250u;
    {
        const bool branch_taken_0x284250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284250) {
            ctx->pc = 0x2842ACu;
            goto label_2842ac;
        }
    }
    ctx->pc = 0x284258u;
label_284258:
    // 0x284258: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x284258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28425c:
    // 0x28425c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x28425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284260:
    // 0x284260: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x284260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_284264:
    // 0x284264: 0x0  nop
    ctx->pc = 0x284264u;
    // NOP
label_284268:
    // 0x284268: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_28426c:
    if (ctx->pc == 0x28426Cu) {
        ctx->pc = 0x284270u;
        goto label_284270;
    }
    ctx->pc = 0x284268u;
    {
        const bool branch_taken_0x284268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x284268) {
            ctx->pc = 0x284294u;
            goto label_284294;
        }
    }
    ctx->pc = 0x284270u;
label_284270:
    // 0x284270: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x284270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284274:
    // 0x284274: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x284274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_284278:
    // 0x284278: 0x0  nop
    ctx->pc = 0x284278u;
    // NOP
label_28427c:
    // 0x28427c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_284280:
    if (ctx->pc == 0x284280u) {
        ctx->pc = 0x284280u;
            // 0x284280: 0x240200c3  addiu       $v0, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->pc = 0x284284u;
        goto label_284284;
    }
    ctx->pc = 0x28427Cu;
    {
        const bool branch_taken_0x28427c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x284280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28427Cu;
            // 0x284280: 0x240200c3  addiu       $v0, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28427c) {
            ctx->pc = 0x28428Cu;
            goto label_28428c;
        }
    }
    ctx->pc = 0x284284u;
label_284284:
    // 0x284284: 0x10000009  b           . + 4 + (0x9 << 2)
label_284288:
    if (ctx->pc == 0x284288u) {
        ctx->pc = 0x284288u;
            // 0x284288: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->pc = 0x28428Cu;
        goto label_28428c;
    }
    ctx->pc = 0x284284u;
    {
        const bool branch_taken_0x284284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284284u;
            // 0x284288: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284284) {
            ctx->pc = 0x2842ACu;
            goto label_2842ac;
        }
    }
    ctx->pc = 0x28428Cu;
label_28428c:
    // 0x28428c: 0x10000007  b           . + 4 + (0x7 << 2)
label_284290:
    if (ctx->pc == 0x284290u) {
        ctx->pc = 0x284294u;
        goto label_284294;
    }
    ctx->pc = 0x28428Cu;
    {
        const bool branch_taken_0x28428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28428c) {
            ctx->pc = 0x2842ACu;
            goto label_2842ac;
        }
    }
    ctx->pc = 0x284294u;
label_284294:
    // 0x284294: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x284294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284298:
    // 0x284298: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x284298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28429c:
    // 0x28429c: 0x0  nop
    ctx->pc = 0x28429cu;
    // NOP
label_2842a0:
    // 0x2842a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2842a4:
    if (ctx->pc == 0x2842A4u) {
        ctx->pc = 0x2842A4u;
            // 0x2842a4: 0x240200c3  addiu       $v0, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->pc = 0x2842A8u;
        goto label_2842a8;
    }
    ctx->pc = 0x2842A0u;
    {
        const bool branch_taken_0x2842a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2842A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842A0u;
            // 0x2842a4: 0x240200c3  addiu       $v0, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842a0) {
            ctx->pc = 0x2842ACu;
            goto label_2842ac;
        }
    }
    ctx->pc = 0x2842A8u;
label_2842a8:
    // 0x2842a8: 0x240200c4  addiu       $v0, $zero, 0xC4
    ctx->pc = 0x2842a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_2842ac:
    // 0x2842ac: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2842acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_2842b0:
    // 0x2842b0: 0xac225060  sw          $v0, 0x5060($at)
    ctx->pc = 0x2842b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20576), GPR_U32(ctx, 2));
label_2842b4:
    // 0x2842b4: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x2842b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
label_2842b8:
    // 0x2842b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2842bc:
    if (ctx->pc == 0x2842BCu) {
        ctx->pc = 0x2842BCu;
            // 0x2842bc: 0x24425040  addiu       $v0, $v0, 0x5040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20544));
        ctx->pc = 0x2842C0u;
        goto label_2842c0;
    }
    ctx->pc = 0x2842B8u;
    {
        const bool branch_taken_0x2842b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842B8u;
            // 0x2842bc: 0x24425040  addiu       $v0, $v0, 0x5040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842b8) {
            ctx->pc = 0x2842C4u;
            goto label_2842c4;
        }
    }
    ctx->pc = 0x2842C0u;
label_2842c0:
    // 0x2842c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2842c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2842c4:
    // 0x2842c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2842c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2842c8:
    // 0x2842c8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2842c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2842cc:
    // 0x2842cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2842ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2842d0:
    // 0x2842d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2842d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2842d4:
    // 0x2842d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2842d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2842d8:
    // 0x2842d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2842d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2842dc:
    // 0x2842dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2842dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2842e0:
    // 0x2842e0: 0x3e00008  jr          $ra
label_2842e4:
    if (ctx->pc == 0x2842E4u) {
        ctx->pc = 0x2842E4u;
            // 0x2842e4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2842E8u;
        goto label_fallthrough_0x2842e0;
    }
    ctx->pc = 0x2842E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2842E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842E0u;
            // 0x2842e4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2842e0:
    ctx->pc = 0x2842E8u;
}
