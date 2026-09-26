#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__8mgCFrameFPUi
// Address: 0x137e10 - 0x1381bc
void Draw__8mgCFrameFPUi_0x137e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__8mgCFrameFPUi_0x137e10");
#endif

    switch (ctx->pc) {
        case 0x137e10u: goto label_137e10;
        case 0x137e14u: goto label_137e14;
        case 0x137e18u: goto label_137e18;
        case 0x137e1cu: goto label_137e1c;
        case 0x137e20u: goto label_137e20;
        case 0x137e24u: goto label_137e24;
        case 0x137e28u: goto label_137e28;
        case 0x137e2cu: goto label_137e2c;
        case 0x137e30u: goto label_137e30;
        case 0x137e34u: goto label_137e34;
        case 0x137e38u: goto label_137e38;
        case 0x137e3cu: goto label_137e3c;
        case 0x137e40u: goto label_137e40;
        case 0x137e44u: goto label_137e44;
        case 0x137e48u: goto label_137e48;
        case 0x137e4cu: goto label_137e4c;
        case 0x137e50u: goto label_137e50;
        case 0x137e54u: goto label_137e54;
        case 0x137e58u: goto label_137e58;
        case 0x137e5cu: goto label_137e5c;
        case 0x137e60u: goto label_137e60;
        case 0x137e64u: goto label_137e64;
        case 0x137e68u: goto label_137e68;
        case 0x137e6cu: goto label_137e6c;
        case 0x137e70u: goto label_137e70;
        case 0x137e74u: goto label_137e74;
        case 0x137e78u: goto label_137e78;
        case 0x137e7cu: goto label_137e7c;
        case 0x137e80u: goto label_137e80;
        case 0x137e84u: goto label_137e84;
        case 0x137e88u: goto label_137e88;
        case 0x137e8cu: goto label_137e8c;
        case 0x137e90u: goto label_137e90;
        case 0x137e94u: goto label_137e94;
        case 0x137e98u: goto label_137e98;
        case 0x137e9cu: goto label_137e9c;
        case 0x137ea0u: goto label_137ea0;
        case 0x137ea4u: goto label_137ea4;
        case 0x137ea8u: goto label_137ea8;
        case 0x137eacu: goto label_137eac;
        case 0x137eb0u: goto label_137eb0;
        case 0x137eb4u: goto label_137eb4;
        case 0x137eb8u: goto label_137eb8;
        case 0x137ebcu: goto label_137ebc;
        case 0x137ec0u: goto label_137ec0;
        case 0x137ec4u: goto label_137ec4;
        case 0x137ec8u: goto label_137ec8;
        case 0x137eccu: goto label_137ecc;
        case 0x137ed0u: goto label_137ed0;
        case 0x137ed4u: goto label_137ed4;
        case 0x137ed8u: goto label_137ed8;
        case 0x137edcu: goto label_137edc;
        case 0x137ee0u: goto label_137ee0;
        case 0x137ee4u: goto label_137ee4;
        case 0x137ee8u: goto label_137ee8;
        case 0x137eecu: goto label_137eec;
        case 0x137ef0u: goto label_137ef0;
        case 0x137ef4u: goto label_137ef4;
        case 0x137ef8u: goto label_137ef8;
        case 0x137efcu: goto label_137efc;
        case 0x137f00u: goto label_137f00;
        case 0x137f04u: goto label_137f04;
        case 0x137f08u: goto label_137f08;
        case 0x137f0cu: goto label_137f0c;
        case 0x137f10u: goto label_137f10;
        case 0x137f14u: goto label_137f14;
        case 0x137f18u: goto label_137f18;
        case 0x137f1cu: goto label_137f1c;
        case 0x137f20u: goto label_137f20;
        case 0x137f24u: goto label_137f24;
        case 0x137f28u: goto label_137f28;
        case 0x137f2cu: goto label_137f2c;
        case 0x137f30u: goto label_137f30;
        case 0x137f34u: goto label_137f34;
        case 0x137f38u: goto label_137f38;
        case 0x137f3cu: goto label_137f3c;
        case 0x137f40u: goto label_137f40;
        case 0x137f44u: goto label_137f44;
        case 0x137f48u: goto label_137f48;
        case 0x137f4cu: goto label_137f4c;
        case 0x137f50u: goto label_137f50;
        case 0x137f54u: goto label_137f54;
        case 0x137f58u: goto label_137f58;
        case 0x137f5cu: goto label_137f5c;
        case 0x137f60u: goto label_137f60;
        case 0x137f64u: goto label_137f64;
        case 0x137f68u: goto label_137f68;
        case 0x137f6cu: goto label_137f6c;
        case 0x137f70u: goto label_137f70;
        case 0x137f74u: goto label_137f74;
        case 0x137f78u: goto label_137f78;
        case 0x137f7cu: goto label_137f7c;
        case 0x137f80u: goto label_137f80;
        case 0x137f84u: goto label_137f84;
        case 0x137f88u: goto label_137f88;
        case 0x137f8cu: goto label_137f8c;
        case 0x137f90u: goto label_137f90;
        case 0x137f94u: goto label_137f94;
        case 0x137f98u: goto label_137f98;
        case 0x137f9cu: goto label_137f9c;
        case 0x137fa0u: goto label_137fa0;
        case 0x137fa4u: goto label_137fa4;
        case 0x137fa8u: goto label_137fa8;
        case 0x137facu: goto label_137fac;
        case 0x137fb0u: goto label_137fb0;
        case 0x137fb4u: goto label_137fb4;
        case 0x137fb8u: goto label_137fb8;
        case 0x137fbcu: goto label_137fbc;
        case 0x137fc0u: goto label_137fc0;
        case 0x137fc4u: goto label_137fc4;
        case 0x137fc8u: goto label_137fc8;
        case 0x137fccu: goto label_137fcc;
        case 0x137fd0u: goto label_137fd0;
        case 0x137fd4u: goto label_137fd4;
        case 0x137fd8u: goto label_137fd8;
        case 0x137fdcu: goto label_137fdc;
        case 0x137fe0u: goto label_137fe0;
        case 0x137fe4u: goto label_137fe4;
        case 0x137fe8u: goto label_137fe8;
        case 0x137fecu: goto label_137fec;
        case 0x137ff0u: goto label_137ff0;
        case 0x137ff4u: goto label_137ff4;
        case 0x137ff8u: goto label_137ff8;
        case 0x137ffcu: goto label_137ffc;
        case 0x138000u: goto label_138000;
        case 0x138004u: goto label_138004;
        case 0x138008u: goto label_138008;
        case 0x13800cu: goto label_13800c;
        case 0x138010u: goto label_138010;
        case 0x138014u: goto label_138014;
        case 0x138018u: goto label_138018;
        case 0x13801cu: goto label_13801c;
        case 0x138020u: goto label_138020;
        case 0x138024u: goto label_138024;
        case 0x138028u: goto label_138028;
        case 0x13802cu: goto label_13802c;
        case 0x138030u: goto label_138030;
        case 0x138034u: goto label_138034;
        case 0x138038u: goto label_138038;
        case 0x13803cu: goto label_13803c;
        case 0x138040u: goto label_138040;
        case 0x138044u: goto label_138044;
        case 0x138048u: goto label_138048;
        case 0x13804cu: goto label_13804c;
        case 0x138050u: goto label_138050;
        case 0x138054u: goto label_138054;
        case 0x138058u: goto label_138058;
        case 0x13805cu: goto label_13805c;
        case 0x138060u: goto label_138060;
        case 0x138064u: goto label_138064;
        case 0x138068u: goto label_138068;
        case 0x13806cu: goto label_13806c;
        case 0x138070u: goto label_138070;
        case 0x138074u: goto label_138074;
        case 0x138078u: goto label_138078;
        case 0x13807cu: goto label_13807c;
        case 0x138080u: goto label_138080;
        case 0x138084u: goto label_138084;
        case 0x138088u: goto label_138088;
        case 0x13808cu: goto label_13808c;
        case 0x138090u: goto label_138090;
        case 0x138094u: goto label_138094;
        case 0x138098u: goto label_138098;
        case 0x13809cu: goto label_13809c;
        case 0x1380a0u: goto label_1380a0;
        case 0x1380a4u: goto label_1380a4;
        case 0x1380a8u: goto label_1380a8;
        case 0x1380acu: goto label_1380ac;
        case 0x1380b0u: goto label_1380b0;
        case 0x1380b4u: goto label_1380b4;
        case 0x1380b8u: goto label_1380b8;
        case 0x1380bcu: goto label_1380bc;
        case 0x1380c0u: goto label_1380c0;
        case 0x1380c4u: goto label_1380c4;
        case 0x1380c8u: goto label_1380c8;
        case 0x1380ccu: goto label_1380cc;
        case 0x1380d0u: goto label_1380d0;
        case 0x1380d4u: goto label_1380d4;
        case 0x1380d8u: goto label_1380d8;
        case 0x1380dcu: goto label_1380dc;
        case 0x1380e0u: goto label_1380e0;
        case 0x1380e4u: goto label_1380e4;
        case 0x1380e8u: goto label_1380e8;
        case 0x1380ecu: goto label_1380ec;
        case 0x1380f0u: goto label_1380f0;
        case 0x1380f4u: goto label_1380f4;
        case 0x1380f8u: goto label_1380f8;
        case 0x1380fcu: goto label_1380fc;
        case 0x138100u: goto label_138100;
        case 0x138104u: goto label_138104;
        case 0x138108u: goto label_138108;
        case 0x13810cu: goto label_13810c;
        case 0x138110u: goto label_138110;
        case 0x138114u: goto label_138114;
        case 0x138118u: goto label_138118;
        case 0x13811cu: goto label_13811c;
        case 0x138120u: goto label_138120;
        case 0x138124u: goto label_138124;
        case 0x138128u: goto label_138128;
        case 0x13812cu: goto label_13812c;
        case 0x138130u: goto label_138130;
        case 0x138134u: goto label_138134;
        case 0x138138u: goto label_138138;
        case 0x13813cu: goto label_13813c;
        case 0x138140u: goto label_138140;
        case 0x138144u: goto label_138144;
        case 0x138148u: goto label_138148;
        case 0x13814cu: goto label_13814c;
        case 0x138150u: goto label_138150;
        case 0x138154u: goto label_138154;
        case 0x138158u: goto label_138158;
        case 0x13815cu: goto label_13815c;
        case 0x138160u: goto label_138160;
        case 0x138164u: goto label_138164;
        case 0x138168u: goto label_138168;
        case 0x13816cu: goto label_13816c;
        case 0x138170u: goto label_138170;
        case 0x138174u: goto label_138174;
        case 0x138178u: goto label_138178;
        case 0x13817cu: goto label_13817c;
        case 0x138180u: goto label_138180;
        case 0x138184u: goto label_138184;
        case 0x138188u: goto label_138188;
        case 0x13818cu: goto label_13818c;
        case 0x138190u: goto label_138190;
        case 0x138194u: goto label_138194;
        case 0x138198u: goto label_138198;
        case 0x13819cu: goto label_13819c;
        case 0x1381a0u: goto label_1381a0;
        case 0x1381a4u: goto label_1381a4;
        case 0x1381a8u: goto label_1381a8;
        case 0x1381acu: goto label_1381ac;
        case 0x1381b0u: goto label_1381b0;
        case 0x1381b4u: goto label_1381b4;
        case 0x1381b8u: goto label_1381b8;
        default: break;
    }

    ctx->pc = 0x137e10u;

label_137e10:
    // 0x137e10: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x137e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_137e14:
    // 0x137e14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x137e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_137e18:
    // 0x137e18: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x137e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_137e1c:
    // 0x137e1c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x137e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_137e20:
    // 0x137e20: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x137e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_137e24:
    // 0x137e24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x137e24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137e28:
    // 0x137e28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x137e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_137e2c:
    // 0x137e2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x137e2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_137e30:
    // 0x137e30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x137e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_137e34:
    // 0x137e34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x137e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_137e38:
    // 0x137e38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_137e3c:
    // 0x137e3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x137e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137e40:
    // 0x137e40: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x137e40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_137e44:
    // 0x137e44: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x137e44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_137e48:
    // 0x137e48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x137e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_137e4c:
    // 0x137e4c: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x137e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_137e50:
    // 0x137e50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_137e54:
    if (ctx->pc == 0x137E54u) {
        ctx->pc = 0x137E54u;
            // 0x137e54: 0x26100ec0  addiu       $s0, $s0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
        ctx->pc = 0x137E58u;
        goto label_137e58;
    }
    ctx->pc = 0x137E50u;
    {
        const bool branch_taken_0x137e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E50u;
            // 0x137e54: 0x26100ec0  addiu       $s0, $s0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e50) {
            ctx->pc = 0x137E68u;
            goto label_137e68;
        }
    }
    ctx->pc = 0x137E58u;
label_137e58:
    // 0x137e58: 0xc04dc6c  jal         func_1371B0
label_137e5c:
    if (ctx->pc == 0x137E5Cu) {
        ctx->pc = 0x137E5Cu;
            // 0x137e5c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x137E60u;
        goto label_137e60;
    }
    ctx->pc = 0x137E58u;
    SET_GPR_U32(ctx, 31, 0x137E60u);
    ctx->pc = 0x137E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E58u;
            // 0x137e5c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1371B0u;
    if (runtime->hasFunction(0x1371B0u)) {
        auto targetFn = runtime->lookupFunction(0x1371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E60u; }
        if (ctx->pc != 0x137E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrixTopBottom__8mgCFrameFPA4_f_0x1371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E60u; }
        if (ctx->pc != 0x137E60u) { return; }
    }
    ctx->pc = 0x137E60u;
label_137e60:
    // 0x137e60: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_137e64:
    if (ctx->pc == 0x137E64u) {
        ctx->pc = 0x137E64u;
            // 0x137e64: 0x8eb00058  lw          $s0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x137E68u;
        goto label_137e68;
    }
    ctx->pc = 0x137E60u;
    {
        const bool branch_taken_0x137e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E60u;
            // 0x137e64: 0x8eb00058  lw          $s0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e60) {
            ctx->pc = 0x138128u;
            goto label_138128;
        }
    }
    ctx->pc = 0x137E68u;
label_137e68:
    // 0x137e68: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x137e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_137e6c:
    // 0x137e6c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_137e70:
    if (ctx->pc == 0x137E70u) {
        ctx->pc = 0x137E70u;
            // 0x137e70: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x137E74u;
        goto label_137e74;
    }
    ctx->pc = 0x137E6Cu;
    {
        const bool branch_taken_0x137e6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E6Cu;
            // 0x137e70: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e6c) {
            ctx->pc = 0x137E84u;
            goto label_137e84;
        }
    }
    ctx->pc = 0x137E74u;
label_137e74:
    // 0x137e74: 0xc04db90  jal         func_136E40
label_137e78:
    if (ctx->pc == 0x137E78u) {
        ctx->pc = 0x137E78u;
            // 0x137e78: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x137E7Cu;
        goto label_137e7c;
    }
    ctx->pc = 0x137E74u;
    SET_GPR_U32(ctx, 31, 0x137E7Cu);
    ctx->pc = 0x137E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E74u;
            // 0x137e78: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136E40u;
    if (runtime->hasFunction(0x136E40u)) {
        auto targetFn = runtime->lookupFunction(0x136E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E7Cu; }
        if (ctx->pc != 0x137E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBBoardMatrix__8mgCFrameFiPA4_fP13mgRENDER_INFO_0x136e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E7Cu; }
        if (ctx->pc != 0x137E7Cu) { return; }
    }
    ctx->pc = 0x137E7Cu;
label_137e7c:
    // 0x137e7c: 0x1000009c  b           . + 4 + (0x9C << 2)
label_137e80:
    if (ctx->pc == 0x137E80u) {
        ctx->pc = 0x137E80u;
            // 0x137e80: 0x8ea300f4  lw          $v1, 0xF4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
        ctx->pc = 0x137E84u;
        goto label_137e84;
    }
    ctx->pc = 0x137E7Cu;
    {
        const bool branch_taken_0x137e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E7Cu;
            // 0x137e80: 0x8ea300f4  lw          $v1, 0xF4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e7c) {
            ctx->pc = 0x1380F0u;
            goto label_1380f0;
        }
    }
    ctx->pc = 0x137E84u;
label_137e84:
    // 0x137e84: 0xc04dc6c  jal         func_1371B0
label_137e88:
    if (ctx->pc == 0x137E88u) {
        ctx->pc = 0x137E88u;
            // 0x137e88: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x137E8Cu;
        goto label_137e8c;
    }
    ctx->pc = 0x137E84u;
    SET_GPR_U32(ctx, 31, 0x137E8Cu);
    ctx->pc = 0x137E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E84u;
            // 0x137e88: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1371B0u;
    if (runtime->hasFunction(0x1371B0u)) {
        auto targetFn = runtime->lookupFunction(0x1371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E8Cu; }
        if (ctx->pc != 0x137E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrixTopBottom__8mgCFrameFPA4_f_0x1371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E8Cu; }
        if (ctx->pc != 0x137E8Cu) { return; }
    }
    ctx->pc = 0x137E8Cu;
label_137e8c:
    // 0x137e8c: 0x10000097  b           . + 4 + (0x97 << 2)
label_137e90:
    if (ctx->pc == 0x137E90u) {
        ctx->pc = 0x137E94u;
        goto label_137e94;
    }
    ctx->pc = 0x137E8Cu;
    {
        const bool branch_taken_0x137e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e8c) {
            ctx->pc = 0x1380ECu;
            goto label_1380ec;
        }
    }
    ctx->pc = 0x137E94u;
label_137e94:
    // 0x137e94: 0x8ea200f8  lw          $v0, 0xF8($s5)
    ctx->pc = 0x137e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_137e98:
    // 0x137e98: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
label_137e9c:
    if (ctx->pc == 0x137E9Cu) {
        ctx->pc = 0x137EA0u;
        goto label_137ea0;
    }
    ctx->pc = 0x137E98u;
    {
        const bool branch_taken_0x137e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e98) {
            ctx->pc = 0x138108u;
            goto label_138108;
        }
    }
    ctx->pc = 0x137EA0u;
label_137ea0:
    // 0x137ea0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x137ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_137ea4:
    // 0x137ea4: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_137ea8:
    if (ctx->pc == 0x137EA8u) {
        ctx->pc = 0x137EACu;
        goto label_137eac;
    }
    ctx->pc = 0x137EA4u;
    {
        const bool branch_taken_0x137ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137ea4) {
            ctx->pc = 0x137F5Cu;
            goto label_137f5c;
        }
    }
    ctx->pc = 0x137EACu;
label_137eac:
    // 0x137eac: 0x8ea400f0  lw          $a0, 0xF0($s5)
    ctx->pc = 0x137eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_137eb0:
    // 0x137eb0: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
label_137eb4:
    if (ctx->pc == 0x137EB4u) {
        ctx->pc = 0x137EB4u;
            // 0x137eb4: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x137EB8u;
        goto label_137eb8;
    }
    ctx->pc = 0x137EB0u;
    {
        const bool branch_taken_0x137eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137EB0u;
            // 0x137eb4: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137eb0) {
            ctx->pc = 0x137F5Cu;
            goto label_137f5c;
        }
    }
    ctx->pc = 0x137EB8u;
label_137eb8:
    // 0x137eb8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x137eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_137ebc:
    // 0x137ebc: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x137ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_137ec0:
    // 0x137ec0: 0xc04d71c  jal         func_135C70
label_137ec4:
    if (ctx->pc == 0x137EC4u) {
        ctx->pc = 0x137EC4u;
            // 0x137ec4: 0x27a800e0  addiu       $t0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x137EC8u;
        goto label_137ec8;
    }
    ctx->pc = 0x137EC0u;
    SET_GPR_U32(ctx, 31, 0x137EC8u);
    ctx->pc = 0x137EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EC0u;
            // 0x137ec4: 0x27a800e0  addiu       $t0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135C70u;
    if (runtime->hasFunction(0x135C70u)) {
        auto targetFn = runtime->lookupFunction(0x135C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EC8u; }
        if (ctx->pc != 0x137EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        test1__FPA4_fPA4_fPA4_fPfPf_0x135c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EC8u; }
        if (ctx->pc != 0x137EC8u) { return; }
    }
    ctx->pc = 0x137EC8u;
label_137ec8:
    // 0x137ec8: 0xc6010e88  lwc1        $f1, 0xE88($s0)
    ctx->pc = 0x137ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137ecc:
    // 0x137ecc: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x137eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137ed0:
    // 0x137ed0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x137ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_137ed4:
    // 0x137ed4: 0x0  nop
    ctx->pc = 0x137ed4u;
    // NOP
label_137ed8:
    // 0x137ed8: 0x4501008b  bc1t        . + 4 + (0x8B << 2)
label_137edc:
    if (ctx->pc == 0x137EDCu) {
        ctx->pc = 0x137EDCu;
            // 0x137edc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x137EE0u;
        goto label_137ee0;
    }
    ctx->pc = 0x137ED8u;
    {
        const bool branch_taken_0x137ed8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137ED8u;
            // 0x137edc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ed8) {
            ctx->pc = 0x138108u;
            goto label_138108;
        }
    }
    ctx->pc = 0x137EE0u;
label_137ee0:
    // 0x137ee0: 0xc04d770  jal         func_135DC0
label_137ee4:
    if (ctx->pc == 0x137EE4u) {
        ctx->pc = 0x137EE4u;
            // 0x137ee4: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x137EE8u;
        goto label_137ee8;
    }
    ctx->pc = 0x137EE0u;
    SET_GPR_U32(ctx, 31, 0x137EE8u);
    ctx->pc = 0x137EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EE0u;
            // 0x137ee4: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135DC0u;
    if (runtime->hasFunction(0x135DC0u)) {
        auto targetFn = runtime->lookupFunction(0x135DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EE8u; }
        if (ctx->pc != 0x137EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        test2__FPfPf_0x135dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EE8u; }
        if (ctx->pc != 0x137EE8u) { return; }
    }
    ctx->pc = 0x137EE8u;
label_137ee8:
    // 0x137ee8: 0x26060ee0  addiu       $a2, $s0, 0xEE0
    ctx->pc = 0x137ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3808));
label_137eec:
    // 0x137eec: 0xc04bcb8  jal         func_12F2E0
label_137ef0:
    if (ctx->pc == 0x137EF0u) {
        ctx->pc = 0x137EF0u;
            // 0x137ef0: 0x26070ef0  addiu       $a3, $s0, 0xEF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3824));
        ctx->pc = 0x137EF4u;
        goto label_137ef4;
    }
    ctx->pc = 0x137EECu;
    SET_GPR_U32(ctx, 31, 0x137EF4u);
    ctx->pc = 0x137EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EECu;
            // 0x137ef0: 0x26070ef0  addiu       $a3, $s0, 0xEF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F2E0u;
    if (runtime->hasFunction(0x12F2E0u)) {
        auto targetFn = runtime->lookupFunction(0x12F2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EF4u; }
        if (ctx->pc != 0x137EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgClipBoxW__FPfPfPfPf_0x12f2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EF4u; }
        if (ctx->pc != 0x137EF4u) { return; }
    }
    ctx->pc = 0x137EF4u;
label_137ef4:
    // 0x137ef4: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_137ef8:
    if (ctx->pc == 0x137EF8u) {
        ctx->pc = 0x137EF8u;
            // 0x137ef8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x137EFCu;
        goto label_137efc;
    }
    ctx->pc = 0x137EF4u;
    {
        const bool branch_taken_0x137ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137EF4u;
            // 0x137ef8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ef4) {
            ctx->pc = 0x138108u;
            goto label_138108;
        }
    }
    ctx->pc = 0x137EFCu;
label_137efc:
    // 0x137efc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x137efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_137f00:
    // 0x137f00: 0x26060f00  addiu       $a2, $s0, 0xF00
    ctx->pc = 0x137f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
label_137f04:
    // 0x137f04: 0xc04bce0  jal         func_12F380
label_137f08:
    if (ctx->pc == 0x137F08u) {
        ctx->pc = 0x137F08u;
            // 0x137f08: 0x26070f10  addiu       $a3, $s0, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3856));
        ctx->pc = 0x137F0Cu;
        goto label_137f0c;
    }
    ctx->pc = 0x137F04u;
    SET_GPR_U32(ctx, 31, 0x137F0Cu);
    ctx->pc = 0x137F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F04u;
            // 0x137f08: 0x26070f10  addiu       $a3, $s0, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (runtime->hasFunction(0x12F380u)) {
        auto targetFn = runtime->lookupFunction(0x12F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F0Cu; }
        if (ctx->pc != 0x137F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgClipInBoxW__FPfPfPfPf_0x12f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F0Cu; }
        if (ctx->pc != 0x137F0Cu) { return; }
    }
    ctx->pc = 0x137F0Cu;
label_137f0c:
    // 0x137f0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_137f10:
    if (ctx->pc == 0x137F10u) {
        ctx->pc = 0x137F10u;
            // 0x137f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x137F14u;
        goto label_137f14;
    }
    ctx->pc = 0x137F0Cu;
    {
        const bool branch_taken_0x137f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137F0Cu;
            // 0x137f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f0c) {
            ctx->pc = 0x137F20u;
            goto label_137f20;
        }
    }
    ctx->pc = 0x137F14u;
label_137f14:
    // 0x137f14: 0xae000fc0  sw          $zero, 0xFC0($s0)
    ctx->pc = 0x137f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4032), GPR_U32(ctx, 0));
label_137f18:
    // 0x137f18: 0x10000010  b           . + 4 + (0x10 << 2)
label_137f1c:
    if (ctx->pc == 0x137F1Cu) {
        ctx->pc = 0x137F1Cu;
            // 0x137f1c: 0xae000fc4  sw          $zero, 0xFC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4036), GPR_U32(ctx, 0));
        ctx->pc = 0x137F20u;
        goto label_137f20;
    }
    ctx->pc = 0x137F18u;
    {
        const bool branch_taken_0x137f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137F18u;
            // 0x137f1c: 0xae000fc4  sw          $zero, 0xFC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4036), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f18) {
            ctx->pc = 0x137F5Cu;
            goto label_137f5c;
        }
    }
    ctx->pc = 0x137F20u;
label_137f20:
    // 0x137f20: 0xae020fc0  sw          $v0, 0xFC0($s0)
    ctx->pc = 0x137f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4032), GPR_U32(ctx, 2));
label_137f24:
    // 0x137f24: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x137f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_137f28:
    // 0x137f28: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x137f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_137f2c:
    // 0x137f2c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x137f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_137f30:
    // 0x137f30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_137f34:
    if (ctx->pc == 0x137F34u) {
        ctx->pc = 0x137F38u;
        goto label_137f38;
    }
    ctx->pc = 0x137F30u;
    {
        const bool branch_taken_0x137f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137f30) {
            ctx->pc = 0x137F48u;
            goto label_137f48;
        }
    }
    ctx->pc = 0x137F38u;
label_137f38:
    // 0x137f38: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x137f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_137f3c:
    // 0x137f3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x137f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_137f40:
    // 0x137f40: 0x10000006  b           . + 4 + (0x6 << 2)
label_137f44:
    if (ctx->pc == 0x137F44u) {
        ctx->pc = 0x137F44u;
            // 0x137f44: 0xae020fc4  sw          $v0, 0xFC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4036), GPR_U32(ctx, 2));
        ctx->pc = 0x137F48u;
        goto label_137f48;
    }
    ctx->pc = 0x137F40u;
    {
        const bool branch_taken_0x137f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137F40u;
            // 0x137f44: 0xae020fc4  sw          $v0, 0xFC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f40) {
            ctx->pc = 0x137F5Cu;
            goto label_137f5c;
        }
    }
    ctx->pc = 0x137F48u;
label_137f48:
    // 0x137f48: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x137f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_137f4c:
    // 0x137f4c: 0x8e020fa0  lw          $v0, 0xFA0($s0)
    ctx->pc = 0x137f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4000)));
label_137f50:
    // 0x137f50: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x137f50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_137f54:
    // 0x137f54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x137f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_137f58:
    // 0x137f58: 0xae020fc4  sw          $v0, 0xFC4($s0)
    ctx->pc = 0x137f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4036), GPR_U32(ctx, 2));
label_137f5c:
    // 0x137f5c: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x137f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_137f60:
    // 0x137f60: 0x26041000  addiu       $a0, $s0, 0x1000
    ctx->pc = 0x137f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
label_137f64:
    // 0x137f64: 0xae020fcc  sw          $v0, 0xFCC($s0)
    ctx->pc = 0x137f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4044), GPR_U32(ctx, 2));
label_137f68:
    // 0x137f68: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x137f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_137f6c:
    // 0x137f6c: 0xc041c5c  jal         func_107170
label_137f70:
    if (ctx->pc == 0x137F70u) {
        ctx->pc = 0x137F70u;
            // 0x137f70: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x137F74u;
        goto label_137f74;
    }
    ctx->pc = 0x137F6Cu;
    SET_GPR_U32(ctx, 31, 0x137F74u);
    ctx->pc = 0x137F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F6Cu;
            // 0x137f70: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F74u; }
        if (ctx->pc != 0x137F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F74u; }
        if (ctx->pc != 0x137F74u) { return; }
    }
    ctx->pc = 0x137F74u;
label_137f74:
    // 0x137f74: 0xae000fc8  sw          $zero, 0xFC8($s0)
    ctx->pc = 0x137f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4040), GPR_U32(ctx, 0));
label_137f78:
    // 0x137f78: 0x8e020fa8  lw          $v0, 0xFA8($s0)
    ctx->pc = 0x137f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4008)));
label_137f7c:
    // 0x137f7c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_137f80:
    if (ctx->pc == 0x137F80u) {
        ctx->pc = 0x137F84u;
        goto label_137f84;
    }
    ctx->pc = 0x137F7Cu;
    {
        const bool branch_taken_0x137f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137f7c) {
            ctx->pc = 0x1380C8u;
            goto label_1380c8;
        }
    }
    ctx->pc = 0x137F84u;
label_137f84:
    // 0x137f84: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x137f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_137f88:
    // 0x137f88: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x137f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_137f8c:
    // 0x137f8c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_137f90:
    if (ctx->pc == 0x137F90u) {
        ctx->pc = 0x137F94u;
        goto label_137f94;
    }
    ctx->pc = 0x137F8Cu;
    {
        const bool branch_taken_0x137f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137f8c) {
            ctx->pc = 0x1380C8u;
            goto label_1380c8;
        }
    }
    ctx->pc = 0x137F94u;
label_137f94:
    // 0x137f94: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x137f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_137f98:
    // 0x137f98: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_137f9c:
    if (ctx->pc == 0x137F9Cu) {
        ctx->pc = 0x137FA0u;
        goto label_137fa0;
    }
    ctx->pc = 0x137F98u;
    {
        const bool branch_taken_0x137f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137f98) {
            ctx->pc = 0x1380C8u;
            goto label_1380c8;
        }
    }
    ctx->pc = 0x137FA0u;
label_137fa0:
    // 0x137fa0: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x137fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_137fa4:
    // 0x137fa4: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_137fa8:
    if (ctx->pc == 0x137FA8u) {
        ctx->pc = 0x137FA8u;
            // 0x137fa8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x137FACu;
        goto label_137fac;
    }
    ctx->pc = 0x137FA4u;
    {
        const bool branch_taken_0x137fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137FA4u;
            // 0x137fa8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fa4) {
            ctx->pc = 0x1380C8u;
            goto label_1380c8;
        }
    }
    ctx->pc = 0x137FACu;
label_137fac:
    // 0x137fac: 0xc041bf0  jal         func_106FC0
label_137fb0:
    if (ctx->pc == 0x137FB0u) {
        ctx->pc = 0x137FB0u;
            // 0x137fb0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x137FB4u;
        goto label_137fb4;
    }
    ctx->pc = 0x137FACu;
    SET_GPR_U32(ctx, 31, 0x137FB4u);
    ctx->pc = 0x137FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137FACu;
            // 0x137fb0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106FC0u;
    if (runtime->hasFunction(0x106FC0u)) {
        auto targetFn = runtime->lookupFunction(0x106FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FB4u; }
        if (ctx->pc != 0x137FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransposeMatrix_0x106fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FB4u; }
        if (ctx->pc != 0x137FB4u) { return; }
    }
    ctx->pc = 0x137FB4u;
label_137fb4:
    // 0x137fb4: 0xc04bff4  jal         func_12FFD0
label_137fb8:
    if (ctx->pc == 0x137FB8u) {
        ctx->pc = 0x137FB8u;
            // 0x137fb8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x137FBCu;
        goto label_137fbc;
    }
    ctx->pc = 0x137FB4u;
    SET_GPR_U32(ctx, 31, 0x137FBCu);
    ctx->pc = 0x137FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137FB4u;
            // 0x137fb8: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FBCu; }
        if (ctx->pc != 0x137FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FBCu; }
        if (ctx->pc != 0x137FBCu) { return; }
    }
    ctx->pc = 0x137FBCu;
label_137fbc:
    // 0x137fbc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x137fbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_137fc0:
    // 0x137fc0: 0xc04bff4  jal         func_12FFD0
label_137fc4:
    if (ctx->pc == 0x137FC4u) {
        ctx->pc = 0x137FC4u;
            // 0x137fc4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x137FC8u;
        goto label_137fc8;
    }
    ctx->pc = 0x137FC0u;
    SET_GPR_U32(ctx, 31, 0x137FC8u);
    ctx->pc = 0x137FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137FC0u;
            // 0x137fc4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FC8u; }
        if (ctx->pc != 0x137FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FC8u; }
        if (ctx->pc != 0x137FC8u) { return; }
    }
    ctx->pc = 0x137FC8u;
label_137fc8:
    // 0x137fc8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x137fc8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_137fcc:
    // 0x137fcc: 0xc04bff4  jal         func_12FFD0
label_137fd0:
    if (ctx->pc == 0x137FD0u) {
        ctx->pc = 0x137FD0u;
            // 0x137fd0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x137FD4u;
        goto label_137fd4;
    }
    ctx->pc = 0x137FCCu;
    SET_GPR_U32(ctx, 31, 0x137FD4u);
    ctx->pc = 0x137FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137FCCu;
            // 0x137fd0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FD4u; }
        if (ctx->pc != 0x137FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137FD4u; }
        if (ctx->pc != 0x137FD4u) { return; }
    }
    ctx->pc = 0x137FD4u;
label_137fd4:
    // 0x137fd4: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x137fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_137fd8:
    // 0x137fd8: 0x0  nop
    ctx->pc = 0x137fd8u;
    // NOP
label_137fdc:
    // 0x137fdc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_137fe0:
    if (ctx->pc == 0x137FE0u) {
        ctx->pc = 0x137FE4u;
        goto label_137fe4;
    }
    ctx->pc = 0x137FDCu;
    {
        const bool branch_taken_0x137fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137fdc) {
            ctx->pc = 0x138008u;
            goto label_138008;
        }
    }
    ctx->pc = 0x137FE4u;
label_137fe4:
    // 0x137fe4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x137fe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_137fe8:
    // 0x137fe8: 0x0  nop
    ctx->pc = 0x137fe8u;
    // NOP
label_137fec:
    // 0x137fec: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_137ff0:
    if (ctx->pc == 0x137FF0u) {
        ctx->pc = 0x137FF4u;
        goto label_137ff4;
    }
    ctx->pc = 0x137FECu;
    {
        const bool branch_taken_0x137fec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137fec) {
            ctx->pc = 0x137FFCu;
            goto label_137ffc;
        }
    }
    ctx->pc = 0x137FF4u;
label_137ff4:
    // 0x137ff4: 0x10000002  b           . + 4 + (0x2 << 2)
label_137ff8:
    if (ctx->pc == 0x137FF8u) {
        ctx->pc = 0x137FFCu;
        goto label_137ffc;
    }
    ctx->pc = 0x137FF4u;
    {
        const bool branch_taken_0x137ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137ff4) {
            ctx->pc = 0x138000u;
            goto label_138000;
        }
    }
    ctx->pc = 0x137FFCu;
label_137ffc:
    // 0x137ffc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x137ffcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_138000:
    // 0x138000: 0x1000000a  b           . + 4 + (0xA << 2)
label_138004:
    if (ctx->pc == 0x138004u) {
        ctx->pc = 0x138004u;
            // 0x138004: 0x8ea200f0  lw          $v0, 0xF0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
        ctx->pc = 0x138008u;
        goto label_138008;
    }
    ctx->pc = 0x138000u;
    {
        const bool branch_taken_0x138000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138000u;
            // 0x138004: 0x8ea200f0  lw          $v0, 0xF0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138000) {
            ctx->pc = 0x13802Cu;
            goto label_13802c;
        }
    }
    ctx->pc = 0x138008u;
label_138008:
    // 0x138008: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x138008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13800c:
    // 0x13800c: 0x0  nop
    ctx->pc = 0x13800cu;
    // NOP
label_138010:
    // 0x138010: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_138014:
    if (ctx->pc == 0x138014u) {
        ctx->pc = 0x138018u;
        goto label_138018;
    }
    ctx->pc = 0x138010u;
    {
        const bool branch_taken_0x138010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138010) {
            ctx->pc = 0x138020u;
            goto label_138020;
        }
    }
    ctx->pc = 0x138018u;
label_138018:
    // 0x138018: 0x10000003  b           . + 4 + (0x3 << 2)
label_13801c:
    if (ctx->pc == 0x13801Cu) {
        ctx->pc = 0x13801Cu;
            // 0x13801c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x138020u;
        goto label_138020;
    }
    ctx->pc = 0x138018u;
    {
        const bool branch_taken_0x138018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13801Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138018u;
            // 0x13801c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138018) {
            ctx->pc = 0x138028u;
            goto label_138028;
        }
    }
    ctx->pc = 0x138020u;
label_138020:
    // 0x138020: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x138020u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_138024:
    // 0x138024: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x138024u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_138028:
    // 0x138028: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x138028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
label_13802c:
    // 0x13802c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x13802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_138030:
    // 0x138030: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x138030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138034:
    // 0x138034: 0x244500a0  addiu       $a1, $v0, 0xA0
    ctx->pc = 0x138034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_138038:
    // 0x138038: 0xc041c5c  jal         func_107170
label_13803c:
    if (ctx->pc == 0x13803Cu) {
        ctx->pc = 0x13803Cu;
            // 0x13803c: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x138040u;
        goto label_138040;
    }
    ctx->pc = 0x138038u;
    SET_GPR_U32(ctx, 31, 0x138040u);
    ctx->pc = 0x13803Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138038u;
            // 0x13803c: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138040u; }
        if (ctx->pc != 0x138040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138040u; }
        if (ctx->pc != 0x138040u) { return; }
    }
    ctx->pc = 0x138040u;
label_138040:
    // 0x138040: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x138040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_138044:
    // 0x138044: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x138044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_138048:
    // 0x138048: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x138048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_13804c:
    // 0x13804c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_138050:
    // 0x138050: 0xc041bb0  jal         func_106EC0
label_138054:
    if (ctx->pc == 0x138054u) {
        ctx->pc = 0x138054u;
            // 0x138054: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138058u;
        goto label_138058;
    }
    ctx->pc = 0x138050u;
    SET_GPR_U32(ctx, 31, 0x138058u);
    ctx->pc = 0x138054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138050u;
            // 0x138054: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138058u; }
        if (ctx->pc != 0x138058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138058u; }
        if (ctx->pc != 0x138058u) { return; }
    }
    ctx->pc = 0x138058u;
label_138058:
    // 0x138058: 0xc04e494  jal         func_139250
label_13805c:
    if (ctx->pc == 0x13805Cu) {
        ctx->pc = 0x13805Cu;
            // 0x13805c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x138060u;
        goto label_138060;
    }
    ctx->pc = 0x138058u;
    SET_GPR_U32(ctx, 31, 0x138060u);
    ctx->pc = 0x13805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138058u;
            // 0x13805c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139250u;
    if (runtime->hasFunction(0x139250u)) {
        auto targetFn = runtime->lookupFunction(0x139250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138060u; }
        if (ctx->pc != 0x138060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetpLightInfo__13mgRENDER_INFOFv_0x139250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138060u; }
        if (ctx->pc != 0x138060u) { return; }
    }
    ctx->pc = 0x138060u;
label_138060:
    // 0x138060: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x138060u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138064:
    // 0x138064: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x138064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138068:
    // 0x138068: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x138068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13806c:
    // 0x13806c: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x13806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_138070:
    // 0x138070: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x138070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138074:
    // 0x138074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x138074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138078:
    // 0x138078: 0x0  nop
    ctx->pc = 0x138078u;
    // NOP
label_13807c:
    // 0x13807c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13807cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138080:
    // 0x138080: 0x0  nop
    ctx->pc = 0x138080u;
    // NOP
label_138084:
    // 0x138084: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_138088:
    if (ctx->pc == 0x138088u) {
        ctx->pc = 0x13808Cu;
        goto label_13808c;
    }
    ctx->pc = 0x138084u;
    {
        const bool branch_taken_0x138084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x138084) {
            ctx->pc = 0x1380B8u;
            goto label_1380b8;
        }
    }
    ctx->pc = 0x13808Cu;
label_13808c:
    // 0x13808c: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x13808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138090:
    // 0x138090: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x138090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_138094:
    // 0x138094: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x138094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_138098:
    // 0x138098: 0xc04c018  jal         func_130060
label_13809c:
    if (ctx->pc == 0x13809Cu) {
        ctx->pc = 0x13809Cu;
            // 0x13809c: 0x4600a540  add.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1380A0u;
        goto label_1380a0;
    }
    ctx->pc = 0x138098u;
    SET_GPR_U32(ctx, 31, 0x1380A0u);
    ctx->pc = 0x13809Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138098u;
            // 0x13809c: 0x4600a540  add.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1380A0u; }
        if (ctx->pc != 0x1380A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1380A0u; }
        if (ctx->pc != 0x1380A0u) { return; }
    }
    ctx->pc = 0x1380A0u;
label_1380a0:
    // 0x1380a0: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1380a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1380a4:
    // 0x1380a4: 0x0  nop
    ctx->pc = 0x1380a4u;
    // NOP
label_1380a8:
    // 0x1380a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1380ac:
    if (ctx->pc == 0x1380ACu) {
        ctx->pc = 0x1380ACu;
            // 0x1380ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1380B0u;
        goto label_1380b0;
    }
    ctx->pc = 0x1380A8u;
    {
        const bool branch_taken_0x1380a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1380ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380A8u;
            // 0x1380ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380a8) {
            ctx->pc = 0x1380B8u;
            goto label_1380b8;
        }
    }
    ctx->pc = 0x1380B0u;
label_1380b0:
    // 0x1380b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1380b4:
    if (ctx->pc == 0x1380B4u) {
        ctx->pc = 0x1380B4u;
            // 0x1380b4: 0xae020fc8  sw          $v0, 0xFC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4040), GPR_U32(ctx, 2));
        ctx->pc = 0x1380B8u;
        goto label_1380b8;
    }
    ctx->pc = 0x1380B0u;
    {
        const bool branch_taken_0x1380b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380B0u;
            // 0x1380b4: 0xae020fc8  sw          $v0, 0xFC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380b0) {
            ctx->pc = 0x1380C8u;
            goto label_1380c8;
        }
    }
    ctx->pc = 0x1380B8u;
label_1380b8:
    // 0x1380b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1380b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1380bc:
    // 0x1380bc: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1380bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_1380c0:
    // 0x1380c0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1380c4:
    if (ctx->pc == 0x1380C4u) {
        ctx->pc = 0x1380C4u;
            // 0x1380c4: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x1380C8u;
        goto label_1380c8;
    }
    ctx->pc = 0x1380C0u;
    {
        const bool branch_taken_0x1380c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1380C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380C0u;
            // 0x1380c4: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380c0) {
            ctx->pc = 0x13806Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13806c;
        }
    }
    ctx->pc = 0x1380C8u;
label_1380c8:
    // 0x1380c8: 0x8ea400f8  lw          $a0, 0xF8($s5)
    ctx->pc = 0x1380c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_1380cc:
    // 0x1380cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1380ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1380d0:
    // 0x1380d0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1380d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1380d4:
    // 0x1380d4: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x1380d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1380d8:
    // 0x1380d8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1380d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1380dc:
    // 0x1380dc: 0x320f809  jalr        $t9
label_1380e0:
    if (ctx->pc == 0x1380E0u) {
        ctx->pc = 0x1380E0u;
            // 0x1380e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1380E4u;
        goto label_1380e4;
    }
    ctx->pc = 0x1380DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1380E4u);
        ctx->pc = 0x1380E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380DCu;
            // 0x1380e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1380E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1380E4u; }
            if (ctx->pc != 0x1380E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1380E4u;
label_1380e4:
    // 0x1380e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1380e8:
    if (ctx->pc == 0x1380E8u) {
        ctx->pc = 0x1380E8u;
            // 0x1380e8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x1380ECu;
        goto label_1380ec;
    }
    ctx->pc = 0x1380E4u;
    {
        const bool branch_taken_0x1380e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1380E4u;
            // 0x1380e8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380e4) {
            ctx->pc = 0x138108u;
            goto label_138108;
        }
    }
    ctx->pc = 0x1380ECu;
label_1380ec:
    // 0x1380ec: 0x8ea300f4  lw          $v1, 0xF4($s5)
    ctx->pc = 0x1380ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_1380f0:
    // 0x1380f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1380f4:
    if (ctx->pc == 0x1380F4u) {
        ctx->pc = 0x1380F8u;
        goto label_1380f8;
    }
    ctx->pc = 0x1380F0u;
    {
        const bool branch_taken_0x1380f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1380f0) {
            ctx->pc = 0x138108u;
            goto label_138108;
        }
    }
    ctx->pc = 0x1380F8u;
label_1380f8:
    // 0x1380f8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1380f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1380fc:
    // 0x1380fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1380fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_138100:
    // 0x138100: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
label_138104:
    if (ctx->pc == 0x138104u) {
        ctx->pc = 0x138108u;
        goto label_138108;
    }
    ctx->pc = 0x138100u;
    {
        const bool branch_taken_0x138100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138100) {
            ctx->pc = 0x137E94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137e94;
        }
    }
    ctx->pc = 0x138108u;
label_138108:
    // 0x138108: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x138108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_13810c:
    // 0x13810c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_138110:
    // 0x138110: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x138110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_138114:
    // 0x138114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_138118:
    if (ctx->pc == 0x138118u) {
        ctx->pc = 0x138118u;
            // 0x138118: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13811Cu;
        goto label_13811c;
    }
    ctx->pc = 0x138114u;
    {
        const bool branch_taken_0x138114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138114u;
            // 0x138118: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138114) {
            ctx->pc = 0x138124u;
            goto label_138124;
        }
    }
    ctx->pc = 0x13811Cu;
label_13811c:
    // 0x13811c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_138120:
    if (ctx->pc == 0x138120u) {
        ctx->pc = 0x138120u;
            // 0x138120: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x138124u;
        goto label_138124;
    }
    ctx->pc = 0x13811Cu;
    {
        const bool branch_taken_0x13811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13811Cu;
            // 0x138120: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13811c) {
            ctx->pc = 0x138190u;
            goto label_138190;
        }
    }
    ctx->pc = 0x138124u;
label_138124:
    // 0x138124: 0x8eb00058  lw          $s0, 0x58($s5)
    ctx->pc = 0x138124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_138128:
    // 0x138128: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_13812c:
    if (ctx->pc == 0x13812Cu) {
        ctx->pc = 0x138130u;
        goto label_138130;
    }
    ctx->pc = 0x138128u;
    {
        const bool branch_taken_0x138128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x138128) {
            ctx->pc = 0x138184u;
            goto label_138184;
        }
    }
    ctx->pc = 0x138130u;
label_138130:
    // 0x138130: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x138130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_138134:
    // 0x138134: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_138138:
    if (ctx->pc == 0x138138u) {
        ctx->pc = 0x138138u;
            // 0x138138: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13813Cu;
        goto label_13813c;
    }
    ctx->pc = 0x138134u;
    {
        const bool branch_taken_0x138134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138134u;
            // 0x138138: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138134) {
            ctx->pc = 0x138150u;
            goto label_138150;
        }
    }
    ctx->pc = 0x13813Cu;
label_13813c:
    // 0x13813c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_138140:
    // 0x138140: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x138140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_138144:
    // 0x138144: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_138148:
    if (ctx->pc == 0x138148u) {
        ctx->pc = 0x13814Cu;
        goto label_13814c;
    }
    ctx->pc = 0x138144u;
    {
        const bool branch_taken_0x138144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138144) {
            ctx->pc = 0x138150u;
            goto label_138150;
        }
    }
    ctx->pc = 0x13814Cu;
label_13814c:
    // 0x13814c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13814cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138150:
    // 0x138150: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_138154:
    if (ctx->pc == 0x138154u) {
        ctx->pc = 0x138158u;
        goto label_138158;
    }
    ctx->pc = 0x138150u;
    {
        const bool branch_taken_0x138150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138150) {
            ctx->pc = 0x138174u;
            goto label_138174;
        }
    }
    ctx->pc = 0x138158u;
label_138158:
    // 0x138158: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x138158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13815c:
    // 0x13815c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13815cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_138160:
    // 0x138160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138164:
    // 0x138164: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_138168:
    // 0x138168: 0x320f809  jalr        $t9
label_13816c:
    if (ctx->pc == 0x13816Cu) {
        ctx->pc = 0x13816Cu;
            // 0x13816c: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x138170u;
        goto label_138170;
    }
    ctx->pc = 0x138168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x138170u);
        ctx->pc = 0x13816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138168u;
            // 0x13816c: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x138170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138170u; }
            if (ctx->pc != 0x138170u) { return; }
        }
        }
    }
    ctx->pc = 0x138170u;
label_138170:
    // 0x138170: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x138170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_138174:
    // 0x138174: 0x0  nop
    ctx->pc = 0x138174u;
    // NOP
label_138178:
    // 0x138178: 0x8e10005c  lw          $s0, 0x5C($s0)
    ctx->pc = 0x138178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_13817c:
    // 0x13817c: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
label_138180:
    if (ctx->pc == 0x138180u) {
        ctx->pc = 0x138184u;
        goto label_138184;
    }
    ctx->pc = 0x13817Cu;
    {
        const bool branch_taken_0x13817c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13817c) {
            ctx->pc = 0x138130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_138130;
        }
    }
    ctx->pc = 0x138184u;
label_138184:
    // 0x138184: 0x0  nop
    ctx->pc = 0x138184u;
    // NOP
label_138188:
    // 0x138188: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x138188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13818c:
    // 0x13818c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x13818cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_138190:
    // 0x138190: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x138190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_138194:
    // 0x138194: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x138194u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_138198:
    // 0x138198: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x138198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13819c:
    // 0x13819c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x13819cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1381a0:
    // 0x1381a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1381a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1381a4:
    // 0x1381a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1381a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1381a8:
    // 0x1381a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1381a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1381ac:
    // 0x1381ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1381acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1381b0:
    // 0x1381b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1381b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1381b4:
    // 0x1381b4: 0x3e00008  jr          $ra
label_1381b8:
    if (ctx->pc == 0x1381B8u) {
        ctx->pc = 0x1381B8u;
            // 0x1381b8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1381BCu;
        goto label_fallthrough_0x1381b4;
    }
    ctx->pc = 0x1381B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1381B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1381B4u;
            // 0x1381b8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1381b4:
    ctx->pc = 0x1381BCu;
}
