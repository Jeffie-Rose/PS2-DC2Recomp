#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CameraControl__FP6CSceneP11CPadControl
// Address: 0x1a5fc0 - 0x1a62f8
void CameraControl__FP6CSceneP11CPadControl_0x1a5fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CameraControl__FP6CSceneP11CPadControl_0x1a5fc0");
#endif

    switch (ctx->pc) {
        case 0x1a5fc0u: goto label_1a5fc0;
        case 0x1a5fc4u: goto label_1a5fc4;
        case 0x1a5fc8u: goto label_1a5fc8;
        case 0x1a5fccu: goto label_1a5fcc;
        case 0x1a5fd0u: goto label_1a5fd0;
        case 0x1a5fd4u: goto label_1a5fd4;
        case 0x1a5fd8u: goto label_1a5fd8;
        case 0x1a5fdcu: goto label_1a5fdc;
        case 0x1a5fe0u: goto label_1a5fe0;
        case 0x1a5fe4u: goto label_1a5fe4;
        case 0x1a5fe8u: goto label_1a5fe8;
        case 0x1a5fecu: goto label_1a5fec;
        case 0x1a5ff0u: goto label_1a5ff0;
        case 0x1a5ff4u: goto label_1a5ff4;
        case 0x1a5ff8u: goto label_1a5ff8;
        case 0x1a5ffcu: goto label_1a5ffc;
        case 0x1a6000u: goto label_1a6000;
        case 0x1a6004u: goto label_1a6004;
        case 0x1a6008u: goto label_1a6008;
        case 0x1a600cu: goto label_1a600c;
        case 0x1a6010u: goto label_1a6010;
        case 0x1a6014u: goto label_1a6014;
        case 0x1a6018u: goto label_1a6018;
        case 0x1a601cu: goto label_1a601c;
        case 0x1a6020u: goto label_1a6020;
        case 0x1a6024u: goto label_1a6024;
        case 0x1a6028u: goto label_1a6028;
        case 0x1a602cu: goto label_1a602c;
        case 0x1a6030u: goto label_1a6030;
        case 0x1a6034u: goto label_1a6034;
        case 0x1a6038u: goto label_1a6038;
        case 0x1a603cu: goto label_1a603c;
        case 0x1a6040u: goto label_1a6040;
        case 0x1a6044u: goto label_1a6044;
        case 0x1a6048u: goto label_1a6048;
        case 0x1a604cu: goto label_1a604c;
        case 0x1a6050u: goto label_1a6050;
        case 0x1a6054u: goto label_1a6054;
        case 0x1a6058u: goto label_1a6058;
        case 0x1a605cu: goto label_1a605c;
        case 0x1a6060u: goto label_1a6060;
        case 0x1a6064u: goto label_1a6064;
        case 0x1a6068u: goto label_1a6068;
        case 0x1a606cu: goto label_1a606c;
        case 0x1a6070u: goto label_1a6070;
        case 0x1a6074u: goto label_1a6074;
        case 0x1a6078u: goto label_1a6078;
        case 0x1a607cu: goto label_1a607c;
        case 0x1a6080u: goto label_1a6080;
        case 0x1a6084u: goto label_1a6084;
        case 0x1a6088u: goto label_1a6088;
        case 0x1a608cu: goto label_1a608c;
        case 0x1a6090u: goto label_1a6090;
        case 0x1a6094u: goto label_1a6094;
        case 0x1a6098u: goto label_1a6098;
        case 0x1a609cu: goto label_1a609c;
        case 0x1a60a0u: goto label_1a60a0;
        case 0x1a60a4u: goto label_1a60a4;
        case 0x1a60a8u: goto label_1a60a8;
        case 0x1a60acu: goto label_1a60ac;
        case 0x1a60b0u: goto label_1a60b0;
        case 0x1a60b4u: goto label_1a60b4;
        case 0x1a60b8u: goto label_1a60b8;
        case 0x1a60bcu: goto label_1a60bc;
        case 0x1a60c0u: goto label_1a60c0;
        case 0x1a60c4u: goto label_1a60c4;
        case 0x1a60c8u: goto label_1a60c8;
        case 0x1a60ccu: goto label_1a60cc;
        case 0x1a60d0u: goto label_1a60d0;
        case 0x1a60d4u: goto label_1a60d4;
        case 0x1a60d8u: goto label_1a60d8;
        case 0x1a60dcu: goto label_1a60dc;
        case 0x1a60e0u: goto label_1a60e0;
        case 0x1a60e4u: goto label_1a60e4;
        case 0x1a60e8u: goto label_1a60e8;
        case 0x1a60ecu: goto label_1a60ec;
        case 0x1a60f0u: goto label_1a60f0;
        case 0x1a60f4u: goto label_1a60f4;
        case 0x1a60f8u: goto label_1a60f8;
        case 0x1a60fcu: goto label_1a60fc;
        case 0x1a6100u: goto label_1a6100;
        case 0x1a6104u: goto label_1a6104;
        case 0x1a6108u: goto label_1a6108;
        case 0x1a610cu: goto label_1a610c;
        case 0x1a6110u: goto label_1a6110;
        case 0x1a6114u: goto label_1a6114;
        case 0x1a6118u: goto label_1a6118;
        case 0x1a611cu: goto label_1a611c;
        case 0x1a6120u: goto label_1a6120;
        case 0x1a6124u: goto label_1a6124;
        case 0x1a6128u: goto label_1a6128;
        case 0x1a612cu: goto label_1a612c;
        case 0x1a6130u: goto label_1a6130;
        case 0x1a6134u: goto label_1a6134;
        case 0x1a6138u: goto label_1a6138;
        case 0x1a613cu: goto label_1a613c;
        case 0x1a6140u: goto label_1a6140;
        case 0x1a6144u: goto label_1a6144;
        case 0x1a6148u: goto label_1a6148;
        case 0x1a614cu: goto label_1a614c;
        case 0x1a6150u: goto label_1a6150;
        case 0x1a6154u: goto label_1a6154;
        case 0x1a6158u: goto label_1a6158;
        case 0x1a615cu: goto label_1a615c;
        case 0x1a6160u: goto label_1a6160;
        case 0x1a6164u: goto label_1a6164;
        case 0x1a6168u: goto label_1a6168;
        case 0x1a616cu: goto label_1a616c;
        case 0x1a6170u: goto label_1a6170;
        case 0x1a6174u: goto label_1a6174;
        case 0x1a6178u: goto label_1a6178;
        case 0x1a617cu: goto label_1a617c;
        case 0x1a6180u: goto label_1a6180;
        case 0x1a6184u: goto label_1a6184;
        case 0x1a6188u: goto label_1a6188;
        case 0x1a618cu: goto label_1a618c;
        case 0x1a6190u: goto label_1a6190;
        case 0x1a6194u: goto label_1a6194;
        case 0x1a6198u: goto label_1a6198;
        case 0x1a619cu: goto label_1a619c;
        case 0x1a61a0u: goto label_1a61a0;
        case 0x1a61a4u: goto label_1a61a4;
        case 0x1a61a8u: goto label_1a61a8;
        case 0x1a61acu: goto label_1a61ac;
        case 0x1a61b0u: goto label_1a61b0;
        case 0x1a61b4u: goto label_1a61b4;
        case 0x1a61b8u: goto label_1a61b8;
        case 0x1a61bcu: goto label_1a61bc;
        case 0x1a61c0u: goto label_1a61c0;
        case 0x1a61c4u: goto label_1a61c4;
        case 0x1a61c8u: goto label_1a61c8;
        case 0x1a61ccu: goto label_1a61cc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61d4u: goto label_1a61d4;
        case 0x1a61d8u: goto label_1a61d8;
        case 0x1a61dcu: goto label_1a61dc;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61e4u: goto label_1a61e4;
        case 0x1a61e8u: goto label_1a61e8;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a61f0u: goto label_1a61f0;
        case 0x1a61f4u: goto label_1a61f4;
        case 0x1a61f8u: goto label_1a61f8;
        case 0x1a61fcu: goto label_1a61fc;
        case 0x1a6200u: goto label_1a6200;
        case 0x1a6204u: goto label_1a6204;
        case 0x1a6208u: goto label_1a6208;
        case 0x1a620cu: goto label_1a620c;
        case 0x1a6210u: goto label_1a6210;
        case 0x1a6214u: goto label_1a6214;
        case 0x1a6218u: goto label_1a6218;
        case 0x1a621cu: goto label_1a621c;
        case 0x1a6220u: goto label_1a6220;
        case 0x1a6224u: goto label_1a6224;
        case 0x1a6228u: goto label_1a6228;
        case 0x1a622cu: goto label_1a622c;
        case 0x1a6230u: goto label_1a6230;
        case 0x1a6234u: goto label_1a6234;
        case 0x1a6238u: goto label_1a6238;
        case 0x1a623cu: goto label_1a623c;
        case 0x1a6240u: goto label_1a6240;
        case 0x1a6244u: goto label_1a6244;
        case 0x1a6248u: goto label_1a6248;
        case 0x1a624cu: goto label_1a624c;
        case 0x1a6250u: goto label_1a6250;
        case 0x1a6254u: goto label_1a6254;
        case 0x1a6258u: goto label_1a6258;
        case 0x1a625cu: goto label_1a625c;
        case 0x1a6260u: goto label_1a6260;
        case 0x1a6264u: goto label_1a6264;
        case 0x1a6268u: goto label_1a6268;
        case 0x1a626cu: goto label_1a626c;
        case 0x1a6270u: goto label_1a6270;
        case 0x1a6274u: goto label_1a6274;
        case 0x1a6278u: goto label_1a6278;
        case 0x1a627cu: goto label_1a627c;
        case 0x1a6280u: goto label_1a6280;
        case 0x1a6284u: goto label_1a6284;
        case 0x1a6288u: goto label_1a6288;
        case 0x1a628cu: goto label_1a628c;
        case 0x1a6290u: goto label_1a6290;
        case 0x1a6294u: goto label_1a6294;
        case 0x1a6298u: goto label_1a6298;
        case 0x1a629cu: goto label_1a629c;
        case 0x1a62a0u: goto label_1a62a0;
        case 0x1a62a4u: goto label_1a62a4;
        case 0x1a62a8u: goto label_1a62a8;
        case 0x1a62acu: goto label_1a62ac;
        case 0x1a62b0u: goto label_1a62b0;
        case 0x1a62b4u: goto label_1a62b4;
        case 0x1a62b8u: goto label_1a62b8;
        case 0x1a62bcu: goto label_1a62bc;
        case 0x1a62c0u: goto label_1a62c0;
        case 0x1a62c4u: goto label_1a62c4;
        case 0x1a62c8u: goto label_1a62c8;
        case 0x1a62ccu: goto label_1a62cc;
        case 0x1a62d0u: goto label_1a62d0;
        case 0x1a62d4u: goto label_1a62d4;
        case 0x1a62d8u: goto label_1a62d8;
        case 0x1a62dcu: goto label_1a62dc;
        case 0x1a62e0u: goto label_1a62e0;
        case 0x1a62e4u: goto label_1a62e4;
        case 0x1a62e8u: goto label_1a62e8;
        case 0x1a62ecu: goto label_1a62ec;
        case 0x1a62f0u: goto label_1a62f0;
        case 0x1a62f4u: goto label_1a62f4;
        default: break;
    }

    ctx->pc = 0x1a5fc0u;

label_1a5fc0:
    // 0x1a5fc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a5fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a5fc4:
    // 0x1a5fc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a5fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a5fc8:
    // 0x1a5fc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a5fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a5fcc:
    // 0x1a5fcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a5fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a5fd0:
    // 0x1a5fd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a5fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a5fd4:
    // 0x1a5fd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a5fd8:
    // 0x1a5fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a5fdc:
    // 0x1a5fdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5fe0:
    // 0x1a5fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a5fe4:
    // 0x1a5fe4: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x1a5fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
label_1a5fe8:
    // 0x1a5fe8: 0xc0a0ed8  jal         func_283B60
label_1a5fec:
    if (ctx->pc == 0x1A5FECu) {
        ctx->pc = 0x1A5FECu;
            // 0x1a5fec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FF0u;
        goto label_1a5ff0;
    }
    ctx->pc = 0x1A5FE8u;
    SET_GPR_U32(ctx, 31, 0x1A5FF0u);
    ctx->pc = 0x1A5FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FE8u;
            // 0x1a5fec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FF0u; }
        if (ctx->pc != 0x1A5FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5FF0u; }
        if (ctx->pc != 0x1A5FF0u) { return; }
    }
    ctx->pc = 0x1A5FF0u;
label_1a5ff0:
    // 0x1a5ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a5ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ff4:
    // 0x1a5ff4: 0x120000b7  beqz        $s0, . + 4 + (0xB7 << 2)
label_1a5ff8:
    if (ctx->pc == 0x1A5FF8u) {
        ctx->pc = 0x1A5FFCu;
        goto label_1a5ffc;
    }
    ctx->pc = 0x1A5FF4u;
    {
        const bool branch_taken_0x1a5ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ff4) {
            ctx->pc = 0x1A62D4u;
            goto label_1a62d4;
        }
    }
    ctx->pc = 0x1A5FFCu;
label_1a5ffc:
    // 0x1a5ffc: 0x8e652e54  lw          $a1, 0x2E54($s3)
    ctx->pc = 0x1a5ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11860)));
label_1a6000:
    // 0x1a6000: 0xc0a0e30  jal         func_2838C0
label_1a6004:
    if (ctx->pc == 0x1A6004u) {
        ctx->pc = 0x1A6004u;
            // 0x1a6004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6008u;
        goto label_1a6008;
    }
    ctx->pc = 0x1A6000u;
    SET_GPR_U32(ctx, 31, 0x1A6008u);
    ctx->pc = 0x1A6004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6000u;
            // 0x1a6004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6008u; }
        if (ctx->pc != 0x1A6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6008u; }
        if (ctx->pc != 0x1A6008u) { return; }
    }
    ctx->pc = 0x1A6008u;
label_1a6008:
    // 0x1a6008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a6008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a600c:
    // 0x1a600c: 0x122000b1  beqz        $s1, . + 4 + (0xB1 << 2)
label_1a6010:
    if (ctx->pc == 0x1A6010u) {
        ctx->pc = 0x1A6014u;
        goto label_1a6014;
    }
    ctx->pc = 0x1A600Cu;
    {
        const bool branch_taken_0x1a600c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a600c) {
            ctx->pc = 0x1A62D4u;
            goto label_1a62d4;
        }
    }
    ctx->pc = 0x1A6014u;
label_1a6014:
    // 0x1a6014: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x1a6014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1a6018:
    // 0x1a6018: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a601c:
    // 0x1a601c: 0x320f809  jalr        $t9
label_1a6020:
    if (ctx->pc == 0x1A6020u) {
        ctx->pc = 0x1A6020u;
            // 0x1a6020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6024u;
        goto label_1a6024;
    }
    ctx->pc = 0x1A601Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6024u);
        ctx->pc = 0x1A6020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A601Cu;
            // 0x1a6020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6024u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6024u; }
            if (ctx->pc != 0x1A6024u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6024u;
label_1a6024:
    // 0x1a6024: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1a6024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1a6028:
    // 0x1a6028: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1a602c:
    if (ctx->pc == 0x1A602Cu) {
        ctx->pc = 0x1A6030u;
        goto label_1a6030;
    }
    ctx->pc = 0x1A6028u;
    {
        const bool branch_taken_0x1a6028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a6028) {
            ctx->pc = 0x1A6038u;
            goto label_1a6038;
        }
    }
    ctx->pc = 0x1A6030u;
label_1a6030:
    // 0x1a6030: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_1a6034:
    if (ctx->pc == 0x1A6034u) {
        ctx->pc = 0x1A6034u;
            // 0x1a6034: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x1A6038u;
        goto label_1a6038;
    }
    ctx->pc = 0x1A6030u;
    {
        const bool branch_taken_0x1a6030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6030u;
            // 0x1a6034: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6030) {
            ctx->pc = 0x1A62D8u;
            goto label_1a62d8;
        }
    }
    ctx->pc = 0x1A6038u;
label_1a6038:
    // 0x1a6038: 0x8e622e88  lw          $v0, 0x2E88($s3)
    ctx->pc = 0x1a6038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11912)));
label_1a603c:
    // 0x1a603c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a6040:
    if (ctx->pc == 0x1A6040u) {
        ctx->pc = 0x1A6040u;
            // 0x1a6040: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6044u;
        goto label_1a6044;
    }
    ctx->pc = 0x1A603Cu;
    {
        const bool branch_taken_0x1a603c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A603Cu;
            // 0x1a6040: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a603c) {
            ctx->pc = 0x1A6048u;
            goto label_1a6048;
        }
    }
    ctx->pc = 0x1A6044u;
label_1a6044:
    // 0x1a6044: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a6044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6048:
    // 0x1a6048: 0xc07f9bc  jal         func_1FE6F0
label_1a604c:
    if (ctx->pc == 0x1A604Cu) {
        ctx->pc = 0x1A6050u;
        goto label_1a6050;
    }
    ctx->pc = 0x1A6048u;
    SET_GPR_U32(ctx, 31, 0x1A6050u);
    ctx->pc = 0x1FE6F0u;
    if (runtime->hasFunction(0x1FE6F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6050u; }
        if (ctx->pc != 0x1A6050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsTakePhoto__Fv_0x1fe6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6050u; }
        if (ctx->pc != 0x1A6050u) { return; }
    }
    ctx->pc = 0x1A6050u;
label_1a6050:
    // 0x1a6050: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a6054:
    if (ctx->pc == 0x1A6054u) {
        ctx->pc = 0x1A6058u;
        goto label_1a6058;
    }
    ctx->pc = 0x1A6050u;
    {
        const bool branch_taken_0x1a6050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6050) {
            ctx->pc = 0x1A606Cu;
            goto label_1a606c;
        }
    }
    ctx->pc = 0x1A6058u;
label_1a6058:
    // 0x1a6058: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a6058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a605c:
    // 0x1a605c: 0x8c228074  lw          $v0, -0x7F8C($at)
    ctx->pc = 0x1a605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
label_1a6060:
    // 0x1a6060: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1a6064:
    if (ctx->pc == 0x1A6064u) {
        ctx->pc = 0x1A6068u;
        goto label_1a6068;
    }
    ctx->pc = 0x1A6060u;
    {
        const bool branch_taken_0x1a6060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6060) {
            ctx->pc = 0x1A606Cu;
            goto label_1a606c;
        }
    }
    ctx->pc = 0x1A6068u;
label_1a6068:
    // 0x1a6068: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a6068u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a606c:
    // 0x1a606c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6070:
    // 0x1a6070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6074:
    // 0x1a6074: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6078:
    // 0x1a6078: 0x320f809  jalr        $t9
label_1a607c:
    if (ctx->pc == 0x1A607Cu) {
        ctx->pc = 0x1A607Cu;
            // 0x1a607c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1A6080u;
        goto label_1a6080;
    }
    ctx->pc = 0x1A6078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6080u);
        ctx->pc = 0x1A607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6078u;
            // 0x1a607c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6080u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6080u; }
            if (ctx->pc != 0x1A6080u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6080u;
label_1a6080:
    // 0x1a6080: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a6080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6084:
    // 0x1a6084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6088:
    // 0x1a6088: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1a6088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1a608c:
    // 0x1a608c: 0x320f809  jalr        $t9
label_1a6090:
    if (ctx->pc == 0x1A6090u) {
        ctx->pc = 0x1A6090u;
            // 0x1a6090: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1A6094u;
        goto label_1a6094;
    }
    ctx->pc = 0x1A608Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6094u);
        ctx->pc = 0x1A6090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A608Cu;
            // 0x1a6090: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6094u; }
            if (ctx->pc != 0x1A6094u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6094u;
label_1a6094:
    // 0x1a6094: 0xc050874  jal         func_1421D0
label_1a6098:
    if (ctx->pc == 0x1A6098u) {
        ctx->pc = 0x1A609Cu;
        goto label_1a609c;
    }
    ctx->pc = 0x1A6094u;
    SET_GPR_U32(ctx, 31, 0x1A609Cu);
    ctx->pc = 0x1421D0u;
    if (runtime->hasFunction(0x1421D0u)) {
        auto targetFn = runtime->lookupFunction(0x1421D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A609Cu; }
        if (ctx->pc != 0x1A609Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetNowFrameRate__Fv_0x1421d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A609Cu; }
        if (ctx->pc != 0x1A609Cu) { return; }
    }
    ctx->pc = 0x1A609Cu;
label_1a609c:
    // 0x1a609c: 0x12400089  beqz        $s2, . + 4 + (0x89 << 2)
label_1a60a0:
    if (ctx->pc == 0x1A60A0u) {
        ctx->pc = 0x1A60A0u;
            // 0x1a60a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A60A4u;
        goto label_1a60a4;
    }
    ctx->pc = 0x1A609Cu;
    {
        const bool branch_taken_0x1a609c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A609Cu;
            // 0x1a60a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a609c) {
            ctx->pc = 0x1A62C4u;
            goto label_1a62c4;
        }
    }
    ctx->pc = 0x1A60A4u;
label_1a60a4:
    // 0x1a60a4: 0x8f838bc0  lw          $v1, -0x7440($gp)
    ctx->pc = 0x1a60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937536)));
label_1a60a8:
    // 0x1a60a8: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
label_1a60ac:
    if (ctx->pc == 0x1A60ACu) {
        ctx->pc = 0x1A60ACu;
            // 0x1a60ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A60B0u;
        goto label_1a60b0;
    }
    ctx->pc = 0x1A60A8u;
    {
        const bool branch_taken_0x1a60a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A60ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60A8u;
            // 0x1a60ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60a8) {
            ctx->pc = 0x1A6190u;
            goto label_1a6190;
        }
    }
    ctx->pc = 0x1A60B0u;
label_1a60b0:
    // 0x1a60b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a60b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a60b4:
    // 0x1a60b4: 0xc0bb538  jal         func_2ED4E0
label_1a60b8:
    if (ctx->pc == 0x1A60B8u) {
        ctx->pc = 0x1A60B8u;
            // 0x1a60b8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A60BCu;
        goto label_1a60bc;
    }
    ctx->pc = 0x1A60B4u;
    SET_GPR_U32(ctx, 31, 0x1A60BCu);
    ctx->pc = 0x1A60B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60B4u;
            // 0x1a60b8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60BCu; }
        if (ctx->pc != 0x1A60BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60BCu; }
        if (ctx->pc != 0x1A60BCu) { return; }
    }
    ctx->pc = 0x1A60BCu;
label_1a60bc:
    // 0x1a60bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a60bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a60c0:
    // 0x1a60c0: 0x14102b  sltu        $v0, $zero, $s4
    ctx->pc = 0x1a60c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1a60c4:
    // 0x1a60c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a60c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a60c8:
    // 0x1a60c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a60cc:
    if (ctx->pc == 0x1A60CCu) {
        ctx->pc = 0x1A60CCu;
            // 0x1a60cc: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1A60D0u;
        goto label_1a60d0;
    }
    ctx->pc = 0x1A60C8u;
    {
        const bool branch_taken_0x1a60c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60C8u;
            // 0x1a60cc: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60c8) {
            ctx->pc = 0x1A60E4u;
            goto label_1a60e4;
        }
    }
    ctx->pc = 0x1A60D0u;
label_1a60d0:
    // 0x1a60d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a60d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a60d4:
    // 0x1a60d4: 0xc0bb538  jal         func_2ED4E0
label_1a60d8:
    if (ctx->pc == 0x1A60D8u) {
        ctx->pc = 0x1A60D8u;
            // 0x1a60d8: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->pc = 0x1A60DCu;
        goto label_1a60dc;
    }
    ctx->pc = 0x1A60D4u;
    SET_GPR_U32(ctx, 31, 0x1A60DCu);
    ctx->pc = 0x1A60D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60D4u;
            // 0x1a60d8: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60DCu; }
        if (ctx->pc != 0x1A60DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60DCu; }
        if (ctx->pc != 0x1A60DCu) { return; }
    }
    ctx->pc = 0x1A60DCu;
label_1a60dc:
    // 0x1a60dc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a60dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a60e0:
    // 0x1a60e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a60e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a60e4:
    // 0x1a60e4: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_1a60e8:
    if (ctx->pc == 0x1A60E8u) {
        ctx->pc = 0x1A60ECu;
        goto label_1a60ec;
    }
    ctx->pc = 0x1A60E4u;
    {
        const bool branch_taken_0x1a60e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a60e4) {
            ctx->pc = 0x1A60F0u;
            goto label_1a60f0;
        }
    }
    ctx->pc = 0x1A60ECu;
label_1a60ec:
    // 0x1a60ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a60ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a60f0:
    // 0x1a60f0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_1a60f4:
    if (ctx->pc == 0x1A60F4u) {
        ctx->pc = 0x1A60F8u;
        goto label_1a60f8;
    }
    ctx->pc = 0x1A60F0u;
    {
        const bool branch_taken_0x1a60f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a60f0) {
            ctx->pc = 0x1A6100u;
            goto label_1a6100;
        }
    }
    ctx->pc = 0x1A60F8u;
label_1a60f8:
    // 0x1a60f8: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_1a60fc:
    if (ctx->pc == 0x1A60FCu) {
        ctx->pc = 0x1A6100u;
        goto label_1a6100;
    }
    ctx->pc = 0x1A60F8u;
    {
        const bool branch_taken_0x1a60f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a60f8) {
            ctx->pc = 0x1A62C0u;
            goto label_1a62c0;
        }
    }
    ctx->pc = 0x1A6100u;
label_1a6100:
    // 0x1a6100: 0x8f828bbc  lw          $v0, -0x7444($gp)
    ctx->pc = 0x1a6100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
label_1a6104:
    // 0x1a6104: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a6108:
    if (ctx->pc == 0x1A6108u) {
        ctx->pc = 0x1A6108u;
            // 0x1a6108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A610Cu;
        goto label_1a610c;
    }
    ctx->pc = 0x1A6104u;
    {
        const bool branch_taken_0x1a6104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6104u;
            // 0x1a6108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6104) {
            ctx->pc = 0x1A6124u;
            goto label_1a6124;
        }
    }
    ctx->pc = 0x1A610Cu;
label_1a610c:
    // 0x1a610c: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1a610cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1a6110:
    // 0x1a6110: 0xc0c6588  jal         func_319620
label_1a6114:
    if (ctx->pc == 0x1A6114u) {
        ctx->pc = 0x1A6114u;
            // 0x1a6114: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1A6118u;
        goto label_1a6118;
    }
    ctx->pc = 0x1A6110u;
    SET_GPR_U32(ctx, 31, 0x1A6118u);
    ctx->pc = 0x1A6114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6110u;
            // 0x1a6114: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319620u;
    if (runtime->hasFunction(0x319620u)) {
        auto targetFn = runtime->lookupFunction(0x319620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6118u; }
        if (ctx->pc != 0x1A6118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShowErrorHelpMes__Fii_0x319620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6118u; }
        if (ctx->pc != 0x1A6118u) { return; }
    }
    ctx->pc = 0x1A6118u;
label_1a6118:
    // 0x1a6118: 0x10000069  b           . + 4 + (0x69 << 2)
label_1a611c:
    if (ctx->pc == 0x1A611Cu) {
        ctx->pc = 0x1A6120u;
        goto label_1a6120;
    }
    ctx->pc = 0x1A6118u;
    {
        const bool branch_taken_0x1a6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6118) {
            ctx->pc = 0x1A62C0u;
            goto label_1a62c0;
        }
    }
    ctx->pc = 0x1A6120u;
label_1a6120:
    // 0x1a6120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6124:
    // 0x1a6124: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a6128:
    if (ctx->pc == 0x1A6128u) {
        ctx->pc = 0x1A6128u;
            // 0x1a6128: 0xaf828bc0  sw          $v0, -0x7440($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937536), GPR_U32(ctx, 2));
        ctx->pc = 0x1A612Cu;
        goto label_1a612c;
    }
    ctx->pc = 0x1A6124u;
    {
        const bool branch_taken_0x1a6124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6124u;
            // 0x1a6128: 0xaf828bc0  sw          $v0, -0x7440($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6124) {
            ctx->pc = 0x1A6138u;
            goto label_1a6138;
        }
    }
    ctx->pc = 0x1A612Cu;
label_1a612c:
    // 0x1a612c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6130:
    // 0x1a6130: 0xc0c3990  jal         func_30E640
label_1a6134:
    if (ctx->pc == 0x1A6134u) {
        ctx->pc = 0x1A6134u;
            // 0x1a6134: 0xaf828bc0  sw          $v0, -0x7440($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937536), GPR_U32(ctx, 2));
        ctx->pc = 0x1A6138u;
        goto label_1a6138;
    }
    ctx->pc = 0x1A6130u;
    SET_GPR_U32(ctx, 31, 0x1A6138u);
    ctx->pc = 0x1A6134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6130u;
            // 0x1a6134: 0xaf828bc0  sw          $v0, -0x7440($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E640u;
    if (runtime->hasFunction(0x30E640u)) {
        auto targetFn = runtime->lookupFunction(0x30E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6138u; }
        if (ctx->pc != 0x1A6138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartTakePhoto__Fv_0x30e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6138u; }
        if (ctx->pc != 0x1A6138u) { return; }
    }
    ctx->pc = 0x1A6138u;
label_1a6138:
    // 0x1a6138: 0xc0bb030  jal         func_2EC0C0
label_1a613c:
    if (ctx->pc == 0x1A613Cu) {
        ctx->pc = 0x1A613Cu;
            // 0x1a613c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6140u;
        goto label_1a6140;
    }
    ctx->pc = 0x1A6138u;
    SET_GPR_U32(ctx, 31, 0x1A6140u);
    ctx->pc = 0x1A613Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6138u;
            // 0x1a613c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC0C0u;
    if (runtime->hasFunction(0x2EC0C0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6140u; }
        if (ctx->pc != 0x1A6140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOff__14CCameraControlFv_0x2ec0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6140u; }
        if (ctx->pc != 0x1A6140u) { return; }
    }
    ctx->pc = 0x1A6140u;
label_1a6140:
    // 0x1a6140: 0xc04c66c  jal         func_1319B0
label_1a6144:
    if (ctx->pc == 0x1A6144u) {
        ctx->pc = 0x1A6144u;
            // 0x1a6144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6148u;
        goto label_1a6148;
    }
    ctx->pc = 0x1A6140u;
    SET_GPR_U32(ctx, 31, 0x1A6148u);
    ctx->pc = 0x1A6144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6140u;
            // 0x1a6144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6148u; }
        if (ctx->pc != 0x1A6148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6148u; }
        if (ctx->pc != 0x1A6148u) { return; }
    }
    ctx->pc = 0x1A6148u;
label_1a6148:
    // 0x1a6148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a614c:
    // 0x1a614c: 0xc0698c0  jal         func_1A6300
label_1a6150:
    if (ctx->pc == 0x1A6150u) {
        ctx->pc = 0x1A6150u;
            // 0x1a6150: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6154u;
        goto label_1a6154;
    }
    ctx->pc = 0x1A614Cu;
    SET_GPR_U32(ctx, 31, 0x1A6154u);
    ctx->pc = 0x1A6150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A614Cu;
            // 0x1a6150: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6300u;
    if (runtime->hasFunction(0x1A6300u)) {
        auto targetFn = runtime->lookupFunction(0x1A6300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6154u; }
        if (ctx->pc != 0x1A6154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEyeCamera__FP11CCharacter2P14CCameraControl_0x1a6300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6154u; }
        if (ctx->pc != 0x1A6154u) { return; }
    }
    ctx->pc = 0x1A6154u;
label_1a6154:
    // 0x1a6154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6158:
    // 0x1a6158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a6158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a615c:
    // 0x1a615c: 0xc0698fc  jal         func_1A63F0
label_1a6160:
    if (ctx->pc == 0x1A6160u) {
        ctx->pc = 0x1A6160u;
            // 0x1a6160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6164u;
        goto label_1a6164;
    }
    ctx->pc = 0x1A615Cu;
    SET_GPR_U32(ctx, 31, 0x1A6164u);
    ctx->pc = 0x1A6160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A615Cu;
            // 0x1a6160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A63F0u;
    if (runtime->hasFunction(0x1A63F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A63F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6164u; }
        if (ctx->pc != 0x1A6164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EyeCamera__FP9mgCCameraP11CCharacter2i_0x1a63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6164u; }
        if (ctx->pc != 0x1A6164u) { return; }
    }
    ctx->pc = 0x1A6164u;
label_1a6164:
    // 0x1a6164: 0x8e662e50  lw          $a2, 0x2E50($s3)
    ctx->pc = 0x1a6164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11856)));
label_1a6168:
    // 0x1a6168: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a616c:
    // 0x1a616c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a616cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6170:
    // 0x1a6170: 0xc0a11d0  jal         func_284740
label_1a6174:
    if (ctx->pc == 0x1A6174u) {
        ctx->pc = 0x1A6174u;
            // 0x1a6174: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1A6178u;
        goto label_1a6178;
    }
    ctx->pc = 0x1A6170u;
    SET_GPR_U32(ctx, 31, 0x1A6178u);
    ctx->pc = 0x1A6174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6170u;
            // 0x1a6174: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284740u;
    if (runtime->hasFunction(0x284740u)) {
        auto targetFn = runtime->lookupFunction(0x284740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6178u; }
        if (ctx->pc != 0x1A6178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__6CSceneFiii_0x284740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6178u; }
        if (ctx->pc != 0x1A6178u) { return; }
    }
    ctx->pc = 0x1A6178u;
label_1a6178:
    // 0x1a6178: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a617c:
    // 0x1a617c: 0xc0b2068  jal         func_2C81A0
label_1a6180:
    if (ctx->pc == 0x1A6180u) {
        ctx->pc = 0x1A6180u;
            // 0x1a6180: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A6184u;
        goto label_1a6184;
    }
    ctx->pc = 0x1A617Cu;
    SET_GPR_U32(ctx, 31, 0x1A6184u);
    ctx->pc = 0x1A6180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A617Cu;
            // 0x1a6180: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C81A0u;
    if (runtime->hasFunction(0x2C81A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C81A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6184u; }
        if (ctx->pc != 0x1A6184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EyeViewDrawOnOff__6CSceneFi_0x2c81a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6184u; }
        if (ctx->pc != 0x1A6184u) { return; }
    }
    ctx->pc = 0x1A6184u;
label_1a6184:
    // 0x1a6184: 0x10000053  b           . + 4 + (0x53 << 2)
label_1a6188:
    if (ctx->pc == 0x1A6188u) {
        ctx->pc = 0x1A618Cu;
        goto label_1a618c;
    }
    ctx->pc = 0x1A6184u;
    {
        const bool branch_taken_0x1a6184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6184) {
            ctx->pc = 0x1A62D4u;
            goto label_1a62d4;
        }
    }
    ctx->pc = 0x1A618Cu;
label_1a618c:
    // 0x1a618c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6190:
    // 0x1a6190: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1a6194:
    if (ctx->pc == 0x1A6194u) {
        ctx->pc = 0x1A6194u;
            // 0x1a6194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6198u;
        goto label_1a6198;
    }
    ctx->pc = 0x1A6190u;
    {
        const bool branch_taken_0x1a6190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6190u;
            // 0x1a6194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6190) {
            ctx->pc = 0x1A61A8u;
            goto label_1a61a8;
        }
    }
    ctx->pc = 0x1A6198u;
label_1a6198:
    // 0x1a6198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a6198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a619c:
    // 0x1a619c: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
label_1a61a0:
    if (ctx->pc == 0x1A61A0u) {
        ctx->pc = 0x1A61A4u;
        goto label_1a61a4;
    }
    ctx->pc = 0x1A619Cu;
    {
        const bool branch_taken_0x1a619c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a619c) {
            ctx->pc = 0x1A62C0u;
            goto label_1a62c0;
        }
    }
    ctx->pc = 0x1A61A4u;
label_1a61a4:
    // 0x1a61a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a61a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a61a8:
    // 0x1a61a8: 0xc0bb538  jal         func_2ED4E0
label_1a61ac:
    if (ctx->pc == 0x1A61ACu) {
        ctx->pc = 0x1A61ACu;
            // 0x1a61ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1A61B0u;
        goto label_1a61b0;
    }
    ctx->pc = 0x1A61A8u;
    SET_GPR_U32(ctx, 31, 0x1A61B0u);
    ctx->pc = 0x1A61ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61A8u;
            // 0x1a61ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61B0u; }
        if (ctx->pc != 0x1A61B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61B0u; }
        if (ctx->pc != 0x1A61B0u) { return; }
    }
    ctx->pc = 0x1A61B0u;
label_1a61b0:
    // 0x1a61b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a61b4:
    if (ctx->pc == 0x1A61B4u) {
        ctx->pc = 0x1A61B8u;
        goto label_1a61b8;
    }
    ctx->pc = 0x1A61B0u;
    {
        const bool branch_taken_0x1a61b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a61b0) {
            ctx->pc = 0x1A61CCu;
            goto label_1a61cc;
        }
    }
    ctx->pc = 0x1A61B8u;
label_1a61b8:
    // 0x1a61b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a61b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a61bc:
    // 0x1a61bc: 0xc0bb538  jal         func_2ED4E0
label_1a61c0:
    if (ctx->pc == 0x1A61C0u) {
        ctx->pc = 0x1A61C0u;
            // 0x1a61c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A61C4u;
        goto label_1a61c4;
    }
    ctx->pc = 0x1A61BCu;
    SET_GPR_U32(ctx, 31, 0x1A61C4u);
    ctx->pc = 0x1A61C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61BCu;
            // 0x1a61c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61C4u; }
        if (ctx->pc != 0x1A61C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61C4u; }
        if (ctx->pc != 0x1A61C4u) { return; }
    }
    ctx->pc = 0x1A61C4u;
label_1a61c4:
    // 0x1a61c4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1a61c8:
    if (ctx->pc == 0x1A61C8u) {
        ctx->pc = 0x1A61C8u;
            // 0x1a61c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A61CCu;
        goto label_1a61cc;
    }
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61C4u;
            // 0x1a61c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A6278u;
            goto label_1a6278;
        }
    }
    ctx->pc = 0x1A61CCu;
label_1a61cc:
    // 0x1a61cc: 0x8f838bc0  lw          $v1, -0x7440($gp)
    ctx->pc = 0x1a61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937536)));
label_1a61d0:
    // 0x1a61d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a61d4:
    // 0x1a61d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a61d8:
    if (ctx->pc == 0x1A61D8u) {
        ctx->pc = 0x1A61D8u;
            // 0x1a61d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A61DCu;
        goto label_1a61dc;
    }
    ctx->pc = 0x1A61D4u;
    {
        const bool branch_taken_0x1a61d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A61D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61D4u;
            // 0x1a61d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61d4) {
            ctx->pc = 0x1A61E8u;
            goto label_1a61e8;
        }
    }
    ctx->pc = 0x1A61DCu;
label_1a61dc:
    // 0x1a61dc: 0xc0c399c  jal         func_30E670
label_1a61e0:
    if (ctx->pc == 0x1A61E0u) {
        ctx->pc = 0x1A61E4u;
        goto label_1a61e4;
    }
    ctx->pc = 0x1A61DCu;
    SET_GPR_U32(ctx, 31, 0x1A61E4u);
    ctx->pc = 0x30E670u;
    if (runtime->hasFunction(0x30E670u)) {
        auto targetFn = runtime->lookupFunction(0x30E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61E4u; }
        if (ctx->pc != 0x1A61E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndTakePhoto__Fv_0x30e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61E4u; }
        if (ctx->pc != 0x1A61E4u) { return; }
    }
    ctx->pc = 0x1A61E4u;
label_1a61e4:
    // 0x1a61e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a61e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a61e8:
    // 0x1a61e8: 0xc04c668  jal         func_1319A0
label_1a61ec:
    if (ctx->pc == 0x1A61ECu) {
        ctx->pc = 0x1A61F0u;
        goto label_1a61f0;
    }
    ctx->pc = 0x1A61E8u;
    SET_GPR_U32(ctx, 31, 0x1A61F0u);
    ctx->pc = 0x1319A0u;
    if (runtime->hasFunction(0x1319A0u)) {
        auto targetFn = runtime->lookupFunction(0x1319A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61F0u; }
        if (ctx->pc != 0x1A61F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOn__15mgCCameraFollowFv_0x1319a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61F0u; }
        if (ctx->pc != 0x1A61F0u) { return; }
    }
    ctx->pc = 0x1A61F0u;
label_1a61f0:
    // 0x1a61f0: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1a61f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1a61f4:
    // 0x1a61f4: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x1a61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934640)));
label_1a61f8:
    // 0x1a61f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1a61fc:
    if (ctx->pc == 0x1A61FCu) {
        ctx->pc = 0x1A61FCu;
            // 0x1a61fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6200u;
        goto label_1a6200;
    }
    ctx->pc = 0x1A61F8u;
    {
        const bool branch_taken_0x1a61f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A61FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61F8u;
            // 0x1a61fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61f8) {
            ctx->pc = 0x1A6228u;
            goto label_1a6228;
        }
    }
    ctx->pc = 0x1A6200u;
label_1a6200:
    // 0x1a6200: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1a6200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1a6204:
    // 0x1a6204: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a6204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6208:
    // 0x1a6208: 0xc04c680  jal         func_131A00
label_1a620c:
    if (ctx->pc == 0x1A620Cu) {
        ctx->pc = 0x1A620Cu;
            // 0x1a620c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6210u;
        goto label_1a6210;
    }
    ctx->pc = 0x1A6208u;
    SET_GPR_U32(ctx, 31, 0x1A6210u);
    ctx->pc = 0x1A620Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6208u;
            // 0x1a620c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6210u; }
        if (ctx->pc != 0x1A6210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6210u; }
        if (ctx->pc != 0x1A6210u) { return; }
    }
    ctx->pc = 0x1A6210u;
label_1a6210:
    // 0x1a6210: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a6210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a6214:
    // 0x1a6214: 0xc0bb20c  jal         func_2EC830
label_1a6218:
    if (ctx->pc == 0x1A6218u) {
        ctx->pc = 0x1A6218u;
            // 0x1a6218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A621Cu;
        goto label_1a621c;
    }
    ctx->pc = 0x1A6214u;
    SET_GPR_U32(ctx, 31, 0x1A621Cu);
    ctx->pc = 0x1A6218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6214u;
            // 0x1a6218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC830u;
    if (runtime->hasFunction(0x2EC830u)) {
        auto targetFn = runtime->lookupFunction(0x2EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A621Cu; }
        if (ctx->pc != 0x1A621Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__14CCameraControlFf_0x2ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A621Cu; }
        if (ctx->pc != 0x1A621Cu) { return; }
    }
    ctx->pc = 0x1A621Cu;
label_1a621c:
    // 0x1a621c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a6220:
    if (ctx->pc == 0x1A6220u) {
        ctx->pc = 0x1A6220u;
            // 0x1a6220: 0x8e390060  lw          $t9, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x1A6224u;
        goto label_1a6224;
    }
    ctx->pc = 0x1A621Cu;
    {
        const bool branch_taken_0x1a621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A621Cu;
            // 0x1a6220: 0x8e390060  lw          $t9, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a621c) {
            ctx->pc = 0x1A6240u;
            goto label_1a6240;
        }
    }
    ctx->pc = 0x1A6224u;
label_1a6224:
    // 0x1a6224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6228:
    // 0x1a6228: 0xc04c690  jal         func_131A40
label_1a622c:
    if (ctx->pc == 0x1A622Cu) {
        ctx->pc = 0x1A6230u;
        goto label_1a6230;
    }
    ctx->pc = 0x1A6228u;
    SET_GPR_U32(ctx, 31, 0x1A6230u);
    ctx->pc = 0x131A40u;
    if (runtime->hasFunction(0x131A40u)) {
        auto targetFn = runtime->lookupFunction(0x131A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6230u; }
        if (ctx->pc != 0x1A6230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHeight__15mgCCameraFollowFv_0x131a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6230u; }
        if (ctx->pc != 0x1A6230u) { return; }
    }
    ctx->pc = 0x1A6230u;
label_1a6230:
    // 0x1a6230: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a6230u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1a6234:
    // 0x1a6234: 0xc0bb20c  jal         func_2EC830
label_1a6238:
    if (ctx->pc == 0x1A6238u) {
        ctx->pc = 0x1A6238u;
            // 0x1a6238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A623Cu;
        goto label_1a623c;
    }
    ctx->pc = 0x1A6234u;
    SET_GPR_U32(ctx, 31, 0x1A623Cu);
    ctx->pc = 0x1A6238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6234u;
            // 0x1a6238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC830u;
    if (runtime->hasFunction(0x2EC830u)) {
        auto targetFn = runtime->lookupFunction(0x2EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A623Cu; }
        if (ctx->pc != 0x1A623Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__14CCameraControlFf_0x2ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A623Cu; }
        if (ctx->pc != 0x1A623Cu) { return; }
    }
    ctx->pc = 0x1A623Cu;
label_1a623c:
    // 0x1a623c: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x1a623cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1a6240:
    // 0x1a6240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6244:
    // 0x1a6244: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a6248:
    // 0x1a6248: 0x320f809  jalr        $t9
label_1a624c:
    if (ctx->pc == 0x1A624Cu) {
        ctx->pc = 0x1A624Cu;
            // 0x1a624c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A6250u;
        goto label_1a6250;
    }
    ctx->pc = 0x1A6248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6250u);
        ctx->pc = 0x1A624Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6248u;
            // 0x1a624c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A6250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A6250u; }
            if (ctx->pc != 0x1A6250u) { return; }
        }
        }
    }
    ctx->pc = 0x1A6250u;
label_1a6250:
    // 0x1a6250: 0xc0bb00c  jal         func_2EC030
label_1a6254:
    if (ctx->pc == 0x1A6254u) {
        ctx->pc = 0x1A6254u;
            // 0x1a6254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6258u;
        goto label_1a6258;
    }
    ctx->pc = 0x1A6250u;
    SET_GPR_U32(ctx, 31, 0x1A6258u);
    ctx->pc = 0x1A6254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6250u;
            // 0x1a6254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC030u;
    if (runtime->hasFunction(0x2EC030u)) {
        auto targetFn = runtime->lookupFunction(0x2EC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6258u; }
        if (ctx->pc != 0x1A6258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOn__14CCameraControlFv_0x2ec030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6258u; }
        if (ctx->pc != 0x1A6258u) { return; }
    }
    ctx->pc = 0x1A6258u;
label_1a6258:
    // 0x1a6258: 0xc0698d8  jal         func_1A6360
label_1a625c:
    if (ctx->pc == 0x1A625Cu) {
        ctx->pc = 0x1A625Cu;
            // 0x1a625c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6260u;
        goto label_1a6260;
    }
    ctx->pc = 0x1A6258u;
    SET_GPR_U32(ctx, 31, 0x1A6260u);
    ctx->pc = 0x1A625Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6258u;
            // 0x1a625c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6360u;
    if (runtime->hasFunction(0x1A6360u)) {
        auto targetFn = runtime->lookupFunction(0x1A6360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6260u; }
        if (ctx->pc != 0x1A6260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetViewMode__FP6CScene_0x1a6360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6260u; }
        if (ctx->pc != 0x1A6260u) { return; }
    }
    ctx->pc = 0x1A6260u;
label_1a6260:
    // 0x1a6260: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a6264:
    // 0x1a6264: 0xc0b2068  jal         func_2C81A0
label_1a6268:
    if (ctx->pc == 0x1A6268u) {
        ctx->pc = 0x1A6268u;
            // 0x1a6268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A626Cu;
        goto label_1a626c;
    }
    ctx->pc = 0x1A6264u;
    SET_GPR_U32(ctx, 31, 0x1A626Cu);
    ctx->pc = 0x1A6268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6264u;
            // 0x1a6268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C81A0u;
    if (runtime->hasFunction(0x2C81A0u)) {
        auto targetFn = runtime->lookupFunction(0x2C81A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A626Cu; }
        if (ctx->pc != 0x1A626Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EyeViewDrawOnOff__6CSceneFi_0x2c81a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A626Cu; }
        if (ctx->pc != 0x1A626Cu) { return; }
    }
    ctx->pc = 0x1A626Cu;
label_1a626c:
    // 0x1a626c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a6270:
    if (ctx->pc == 0x1A6270u) {
        ctx->pc = 0x1A6274u;
        goto label_1a6274;
    }
    ctx->pc = 0x1A626Cu;
    {
        const bool branch_taken_0x1a626c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a626c) {
            ctx->pc = 0x1A62C0u;
            goto label_1a62c0;
        }
    }
    ctx->pc = 0x1A6274u;
label_1a6274:
    // 0x1a6274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6278:
    // 0x1a6278: 0xc04c66c  jal         func_1319B0
label_1a627c:
    if (ctx->pc == 0x1A627Cu) {
        ctx->pc = 0x1A6280u;
        goto label_1a6280;
    }
    ctx->pc = 0x1A6278u;
    SET_GPR_U32(ctx, 31, 0x1A6280u);
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6280u; }
        if (ctx->pc != 0x1A6280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6280u; }
        if (ctx->pc != 0x1A6280u) { return; }
    }
    ctx->pc = 0x1A6280u;
label_1a6280:
    // 0x1a6280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6284:
    // 0x1a6284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a6284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6288:
    // 0x1a6288: 0xc0698fc  jal         func_1A63F0
label_1a628c:
    if (ctx->pc == 0x1A628Cu) {
        ctx->pc = 0x1A628Cu;
            // 0x1a628c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6290u;
        goto label_1a6290;
    }
    ctx->pc = 0x1A6288u;
    SET_GPR_U32(ctx, 31, 0x1A6290u);
    ctx->pc = 0x1A628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6288u;
            // 0x1a628c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A63F0u;
    if (runtime->hasFunction(0x1A63F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A63F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6290u; }
        if (ctx->pc != 0x1A6290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EyeCamera__FP9mgCCameraP11CCharacter2i_0x1a63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6290u; }
        if (ctx->pc != 0x1A6290u) { return; }
    }
    ctx->pc = 0x1A6290u;
label_1a6290:
    // 0x1a6290: 0xc069038  jal         func_1A40E0
label_1a6294:
    if (ctx->pc == 0x1A6294u) {
        ctx->pc = 0x1A6294u;
            // 0x1a6294: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A6298u;
        goto label_1a6298;
    }
    ctx->pc = 0x1A6290u;
    SET_GPR_U32(ctx, 31, 0x1A6298u);
    ctx->pc = 0x1A6294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6290u;
            // 0x1a6294: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A40E0u;
    if (runtime->hasFunction(0x1A40E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A40E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6298u; }
        if (ctx->pc != 0x1A6298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a40e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6298u; }
        if (ctx->pc != 0x1A6298u) { return; }
    }
    ctx->pc = 0x1A6298u;
label_1a6298:
    // 0x1a6298: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a629c:
    if (ctx->pc == 0x1A629Cu) {
        ctx->pc = 0x1A629Cu;
            // 0x1a629c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A62A0u;
        goto label_1a62a0;
    }
    ctx->pc = 0x1A6298u;
    {
        const bool branch_taken_0x1a6298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A629Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6298u;
            // 0x1a629c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6298) {
            ctx->pc = 0x1A62B0u;
            goto label_1a62b0;
        }
    }
    ctx->pc = 0x1A62A0u;
label_1a62a0:
    // 0x1a62a0: 0xc069038  jal         func_1A40E0
label_1a62a4:
    if (ctx->pc == 0x1A62A4u) {
        ctx->pc = 0x1A62A8u;
        goto label_1a62a8;
    }
    ctx->pc = 0x1A62A0u;
    SET_GPR_U32(ctx, 31, 0x1A62A8u);
    ctx->pc = 0x1A40E0u;
    if (runtime->hasFunction(0x1A40E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A40E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62A8u; }
        if (ctx->pc != 0x1A62A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a40e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62A8u; }
        if (ctx->pc != 0x1A62A8u) { return; }
    }
    ctx->pc = 0x1A62A8u;
label_1a62a8:
    // 0x1a62a8: 0x24507f30  addiu       $s0, $v0, 0x7F30
    ctx->pc = 0x1a62a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
label_1a62ac:
    // 0x1a62ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a62acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a62b0:
    // 0x1a62b0: 0xc0c39b8  jal         func_30E6E0
label_1a62b4:
    if (ctx->pc == 0x1A62B4u) {
        ctx->pc = 0x1A62B4u;
            // 0x1a62b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A62B8u;
        goto label_1a62b8;
    }
    ctx->pc = 0x1A62B0u;
    SET_GPR_U32(ctx, 31, 0x1A62B8u);
    ctx->pc = 0x1A62B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62B0u;
            // 0x1a62b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E6E0u;
    if (runtime->hasFunction(0x30E6E0u)) {
        auto targetFn = runtime->lookupFunction(0x30E6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62B8u; }
        if (ctx->pc != 0x1A62B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoopTakePhoto__FP11CPadControlP15CInventUserData_0x30e6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62B8u; }
        if (ctx->pc != 0x1A62B8u) { return; }
    }
    ctx->pc = 0x1A62B8u;
label_1a62b8:
    // 0x1a62b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a62bc:
    if (ctx->pc == 0x1A62BCu) {
        ctx->pc = 0x1A62C0u;
        goto label_1a62c0;
    }
    ctx->pc = 0x1A62B8u;
    {
        const bool branch_taken_0x1a62b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a62b8) {
            ctx->pc = 0x1A62D4u;
            goto label_1a62d4;
        }
    }
    ctx->pc = 0x1A62C0u;
label_1a62c0:
    // 0x1a62c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a62c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a62c4:
    // 0x1a62c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a62c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a62c8:
    // 0x1a62c8: 0xc0693a0  jal         func_1A4E80
label_1a62cc:
    if (ctx->pc == 0x1A62CCu) {
        ctx->pc = 0x1A62CCu;
            // 0x1a62cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A62D0u;
        goto label_1a62d0;
    }
    ctx->pc = 0x1A62C8u;
    SET_GPR_U32(ctx, 31, 0x1A62D0u);
    ctx->pc = 0x1A62CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62C8u;
            // 0x1a62cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62D0u; }
        if (ctx->pc != 0x1A62D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A62D0u; }
        if (ctx->pc != 0x1A62D0u) { return; }
    }
    ctx->pc = 0x1A62D0u;
label_1a62d0:
    // 0x1a62d0: 0xaf808bbc  sw          $zero, -0x7444($gp)
    ctx->pc = 0x1a62d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937532), GPR_U32(ctx, 0));
label_1a62d4:
    // 0x1a62d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a62d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a62d8:
    // 0x1a62d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a62d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a62dc:
    // 0x1a62dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a62dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a62e0:
    // 0x1a62e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a62e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a62e4:
    // 0x1a62e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a62e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a62e8:
    // 0x1a62e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a62e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a62ec:
    // 0x1a62ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a62ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a62f0:
    // 0x1a62f0: 0x3e00008  jr          $ra
label_1a62f4:
    if (ctx->pc == 0x1A62F4u) {
        ctx->pc = 0x1A62F4u;
            // 0x1a62f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1A62F8u;
        goto label_fallthrough_0x1a62f0;
    }
    ctx->pc = 0x1A62F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A62F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62F0u;
            // 0x1a62f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a62f0:
    ctx->pc = 0x1A62F8u;
}
