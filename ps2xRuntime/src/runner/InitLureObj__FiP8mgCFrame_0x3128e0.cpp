#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitLureObj__FiP8mgCFrame
// Address: 0x3128e0 - 0x312d1c
void InitLureObj__FiP8mgCFrame_0x3128e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitLureObj__FiP8mgCFrame_0x3128e0");
#endif

    switch (ctx->pc) {
        case 0x3128e0u: goto label_3128e0;
        case 0x3128e4u: goto label_3128e4;
        case 0x3128e8u: goto label_3128e8;
        case 0x3128ecu: goto label_3128ec;
        case 0x3128f0u: goto label_3128f0;
        case 0x3128f4u: goto label_3128f4;
        case 0x3128f8u: goto label_3128f8;
        case 0x3128fcu: goto label_3128fc;
        case 0x312900u: goto label_312900;
        case 0x312904u: goto label_312904;
        case 0x312908u: goto label_312908;
        case 0x31290cu: goto label_31290c;
        case 0x312910u: goto label_312910;
        case 0x312914u: goto label_312914;
        case 0x312918u: goto label_312918;
        case 0x31291cu: goto label_31291c;
        case 0x312920u: goto label_312920;
        case 0x312924u: goto label_312924;
        case 0x312928u: goto label_312928;
        case 0x31292cu: goto label_31292c;
        case 0x312930u: goto label_312930;
        case 0x312934u: goto label_312934;
        case 0x312938u: goto label_312938;
        case 0x31293cu: goto label_31293c;
        case 0x312940u: goto label_312940;
        case 0x312944u: goto label_312944;
        case 0x312948u: goto label_312948;
        case 0x31294cu: goto label_31294c;
        case 0x312950u: goto label_312950;
        case 0x312954u: goto label_312954;
        case 0x312958u: goto label_312958;
        case 0x31295cu: goto label_31295c;
        case 0x312960u: goto label_312960;
        case 0x312964u: goto label_312964;
        case 0x312968u: goto label_312968;
        case 0x31296cu: goto label_31296c;
        case 0x312970u: goto label_312970;
        case 0x312974u: goto label_312974;
        case 0x312978u: goto label_312978;
        case 0x31297cu: goto label_31297c;
        case 0x312980u: goto label_312980;
        case 0x312984u: goto label_312984;
        case 0x312988u: goto label_312988;
        case 0x31298cu: goto label_31298c;
        case 0x312990u: goto label_312990;
        case 0x312994u: goto label_312994;
        case 0x312998u: goto label_312998;
        case 0x31299cu: goto label_31299c;
        case 0x3129a0u: goto label_3129a0;
        case 0x3129a4u: goto label_3129a4;
        case 0x3129a8u: goto label_3129a8;
        case 0x3129acu: goto label_3129ac;
        case 0x3129b0u: goto label_3129b0;
        case 0x3129b4u: goto label_3129b4;
        case 0x3129b8u: goto label_3129b8;
        case 0x3129bcu: goto label_3129bc;
        case 0x3129c0u: goto label_3129c0;
        case 0x3129c4u: goto label_3129c4;
        case 0x3129c8u: goto label_3129c8;
        case 0x3129ccu: goto label_3129cc;
        case 0x3129d0u: goto label_3129d0;
        case 0x3129d4u: goto label_3129d4;
        case 0x3129d8u: goto label_3129d8;
        case 0x3129dcu: goto label_3129dc;
        case 0x3129e0u: goto label_3129e0;
        case 0x3129e4u: goto label_3129e4;
        case 0x3129e8u: goto label_3129e8;
        case 0x3129ecu: goto label_3129ec;
        case 0x3129f0u: goto label_3129f0;
        case 0x3129f4u: goto label_3129f4;
        case 0x3129f8u: goto label_3129f8;
        case 0x3129fcu: goto label_3129fc;
        case 0x312a00u: goto label_312a00;
        case 0x312a04u: goto label_312a04;
        case 0x312a08u: goto label_312a08;
        case 0x312a0cu: goto label_312a0c;
        case 0x312a10u: goto label_312a10;
        case 0x312a14u: goto label_312a14;
        case 0x312a18u: goto label_312a18;
        case 0x312a1cu: goto label_312a1c;
        case 0x312a20u: goto label_312a20;
        case 0x312a24u: goto label_312a24;
        case 0x312a28u: goto label_312a28;
        case 0x312a2cu: goto label_312a2c;
        case 0x312a30u: goto label_312a30;
        case 0x312a34u: goto label_312a34;
        case 0x312a38u: goto label_312a38;
        case 0x312a3cu: goto label_312a3c;
        case 0x312a40u: goto label_312a40;
        case 0x312a44u: goto label_312a44;
        case 0x312a48u: goto label_312a48;
        case 0x312a4cu: goto label_312a4c;
        case 0x312a50u: goto label_312a50;
        case 0x312a54u: goto label_312a54;
        case 0x312a58u: goto label_312a58;
        case 0x312a5cu: goto label_312a5c;
        case 0x312a60u: goto label_312a60;
        case 0x312a64u: goto label_312a64;
        case 0x312a68u: goto label_312a68;
        case 0x312a6cu: goto label_312a6c;
        case 0x312a70u: goto label_312a70;
        case 0x312a74u: goto label_312a74;
        case 0x312a78u: goto label_312a78;
        case 0x312a7cu: goto label_312a7c;
        case 0x312a80u: goto label_312a80;
        case 0x312a84u: goto label_312a84;
        case 0x312a88u: goto label_312a88;
        case 0x312a8cu: goto label_312a8c;
        case 0x312a90u: goto label_312a90;
        case 0x312a94u: goto label_312a94;
        case 0x312a98u: goto label_312a98;
        case 0x312a9cu: goto label_312a9c;
        case 0x312aa0u: goto label_312aa0;
        case 0x312aa4u: goto label_312aa4;
        case 0x312aa8u: goto label_312aa8;
        case 0x312aacu: goto label_312aac;
        case 0x312ab0u: goto label_312ab0;
        case 0x312ab4u: goto label_312ab4;
        case 0x312ab8u: goto label_312ab8;
        case 0x312abcu: goto label_312abc;
        case 0x312ac0u: goto label_312ac0;
        case 0x312ac4u: goto label_312ac4;
        case 0x312ac8u: goto label_312ac8;
        case 0x312accu: goto label_312acc;
        case 0x312ad0u: goto label_312ad0;
        case 0x312ad4u: goto label_312ad4;
        case 0x312ad8u: goto label_312ad8;
        case 0x312adcu: goto label_312adc;
        case 0x312ae0u: goto label_312ae0;
        case 0x312ae4u: goto label_312ae4;
        case 0x312ae8u: goto label_312ae8;
        case 0x312aecu: goto label_312aec;
        case 0x312af0u: goto label_312af0;
        case 0x312af4u: goto label_312af4;
        case 0x312af8u: goto label_312af8;
        case 0x312afcu: goto label_312afc;
        case 0x312b00u: goto label_312b00;
        case 0x312b04u: goto label_312b04;
        case 0x312b08u: goto label_312b08;
        case 0x312b0cu: goto label_312b0c;
        case 0x312b10u: goto label_312b10;
        case 0x312b14u: goto label_312b14;
        case 0x312b18u: goto label_312b18;
        case 0x312b1cu: goto label_312b1c;
        case 0x312b20u: goto label_312b20;
        case 0x312b24u: goto label_312b24;
        case 0x312b28u: goto label_312b28;
        case 0x312b2cu: goto label_312b2c;
        case 0x312b30u: goto label_312b30;
        case 0x312b34u: goto label_312b34;
        case 0x312b38u: goto label_312b38;
        case 0x312b3cu: goto label_312b3c;
        case 0x312b40u: goto label_312b40;
        case 0x312b44u: goto label_312b44;
        case 0x312b48u: goto label_312b48;
        case 0x312b4cu: goto label_312b4c;
        case 0x312b50u: goto label_312b50;
        case 0x312b54u: goto label_312b54;
        case 0x312b58u: goto label_312b58;
        case 0x312b5cu: goto label_312b5c;
        case 0x312b60u: goto label_312b60;
        case 0x312b64u: goto label_312b64;
        case 0x312b68u: goto label_312b68;
        case 0x312b6cu: goto label_312b6c;
        case 0x312b70u: goto label_312b70;
        case 0x312b74u: goto label_312b74;
        case 0x312b78u: goto label_312b78;
        case 0x312b7cu: goto label_312b7c;
        case 0x312b80u: goto label_312b80;
        case 0x312b84u: goto label_312b84;
        case 0x312b88u: goto label_312b88;
        case 0x312b8cu: goto label_312b8c;
        case 0x312b90u: goto label_312b90;
        case 0x312b94u: goto label_312b94;
        case 0x312b98u: goto label_312b98;
        case 0x312b9cu: goto label_312b9c;
        case 0x312ba0u: goto label_312ba0;
        case 0x312ba4u: goto label_312ba4;
        case 0x312ba8u: goto label_312ba8;
        case 0x312bacu: goto label_312bac;
        case 0x312bb0u: goto label_312bb0;
        case 0x312bb4u: goto label_312bb4;
        case 0x312bb8u: goto label_312bb8;
        case 0x312bbcu: goto label_312bbc;
        case 0x312bc0u: goto label_312bc0;
        case 0x312bc4u: goto label_312bc4;
        case 0x312bc8u: goto label_312bc8;
        case 0x312bccu: goto label_312bcc;
        case 0x312bd0u: goto label_312bd0;
        case 0x312bd4u: goto label_312bd4;
        case 0x312bd8u: goto label_312bd8;
        case 0x312bdcu: goto label_312bdc;
        case 0x312be0u: goto label_312be0;
        case 0x312be4u: goto label_312be4;
        case 0x312be8u: goto label_312be8;
        case 0x312becu: goto label_312bec;
        case 0x312bf0u: goto label_312bf0;
        case 0x312bf4u: goto label_312bf4;
        case 0x312bf8u: goto label_312bf8;
        case 0x312bfcu: goto label_312bfc;
        case 0x312c00u: goto label_312c00;
        case 0x312c04u: goto label_312c04;
        case 0x312c08u: goto label_312c08;
        case 0x312c0cu: goto label_312c0c;
        case 0x312c10u: goto label_312c10;
        case 0x312c14u: goto label_312c14;
        case 0x312c18u: goto label_312c18;
        case 0x312c1cu: goto label_312c1c;
        case 0x312c20u: goto label_312c20;
        case 0x312c24u: goto label_312c24;
        case 0x312c28u: goto label_312c28;
        case 0x312c2cu: goto label_312c2c;
        case 0x312c30u: goto label_312c30;
        case 0x312c34u: goto label_312c34;
        case 0x312c38u: goto label_312c38;
        case 0x312c3cu: goto label_312c3c;
        case 0x312c40u: goto label_312c40;
        case 0x312c44u: goto label_312c44;
        case 0x312c48u: goto label_312c48;
        case 0x312c4cu: goto label_312c4c;
        case 0x312c50u: goto label_312c50;
        case 0x312c54u: goto label_312c54;
        case 0x312c58u: goto label_312c58;
        case 0x312c5cu: goto label_312c5c;
        case 0x312c60u: goto label_312c60;
        case 0x312c64u: goto label_312c64;
        case 0x312c68u: goto label_312c68;
        case 0x312c6cu: goto label_312c6c;
        case 0x312c70u: goto label_312c70;
        case 0x312c74u: goto label_312c74;
        case 0x312c78u: goto label_312c78;
        case 0x312c7cu: goto label_312c7c;
        case 0x312c80u: goto label_312c80;
        case 0x312c84u: goto label_312c84;
        case 0x312c88u: goto label_312c88;
        case 0x312c8cu: goto label_312c8c;
        case 0x312c90u: goto label_312c90;
        case 0x312c94u: goto label_312c94;
        case 0x312c98u: goto label_312c98;
        case 0x312c9cu: goto label_312c9c;
        case 0x312ca0u: goto label_312ca0;
        case 0x312ca4u: goto label_312ca4;
        case 0x312ca8u: goto label_312ca8;
        case 0x312cacu: goto label_312cac;
        case 0x312cb0u: goto label_312cb0;
        case 0x312cb4u: goto label_312cb4;
        case 0x312cb8u: goto label_312cb8;
        case 0x312cbcu: goto label_312cbc;
        case 0x312cc0u: goto label_312cc0;
        case 0x312cc4u: goto label_312cc4;
        case 0x312cc8u: goto label_312cc8;
        case 0x312cccu: goto label_312ccc;
        case 0x312cd0u: goto label_312cd0;
        case 0x312cd4u: goto label_312cd4;
        case 0x312cd8u: goto label_312cd8;
        case 0x312cdcu: goto label_312cdc;
        case 0x312ce0u: goto label_312ce0;
        case 0x312ce4u: goto label_312ce4;
        case 0x312ce8u: goto label_312ce8;
        case 0x312cecu: goto label_312cec;
        case 0x312cf0u: goto label_312cf0;
        case 0x312cf4u: goto label_312cf4;
        case 0x312cf8u: goto label_312cf8;
        case 0x312cfcu: goto label_312cfc;
        case 0x312d00u: goto label_312d00;
        case 0x312d04u: goto label_312d04;
        case 0x312d08u: goto label_312d08;
        case 0x312d0cu: goto label_312d0c;
        case 0x312d10u: goto label_312d10;
        case 0x312d14u: goto label_312d14;
        case 0x312d18u: goto label_312d18;
        default: break;
    }

    ctx->pc = 0x3128e0u;

label_3128e0:
    // 0x3128e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3128e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3128e4:
    // 0x3128e4: 0x240603d0  addiu       $a2, $zero, 0x3D0
    ctx->pc = 0x3128e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
label_3128e8:
    // 0x3128e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3128e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3128ec:
    // 0x3128ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3128ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3128f0:
    // 0x3128f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3128f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3128f4:
    // 0x3128f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3128f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3128f8:
    // 0x3128f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3128f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3128fc:
    // 0x3128fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3128fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312900:
    // 0x312900: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x312900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_312904:
    // 0x312904: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x312904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_312908:
    // 0x312908: 0x2484edc0  addiu       $a0, $a0, -0x1240
    ctx->pc = 0x312908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962624));
label_31290c:
    // 0x31290c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31290cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312910:
    // 0x312910: 0xc049c86  jal         func_127218
label_312914:
    if (ctx->pc == 0x312914u) {
        ctx->pc = 0x312914u;
            // 0x312914: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x312918u;
        goto label_312918;
    }
    ctx->pc = 0x312910u;
    SET_GPR_U32(ctx, 31, 0x312918u);
    ctx->pc = 0x312914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312910u;
            // 0x312914: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312918u; }
        if (ctx->pc != 0x312918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312918u; }
        if (ctx->pc != 0x312918u) { return; }
    }
    ctx->pc = 0x312918u;
label_312918:
    // 0x312918: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
label_31291c:
    if (ctx->pc == 0x31291Cu) {
        ctx->pc = 0x31291Cu;
            // 0x31291c: 0xaf80a268  sw          $zero, -0x5D98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943336), GPR_U32(ctx, 0));
        ctx->pc = 0x312920u;
        goto label_312920;
    }
    ctx->pc = 0x312918u;
    {
        const bool branch_taken_0x312918 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x31291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312918u;
            // 0x31291c: 0xaf80a268  sw          $zero, -0x5D98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312918) {
            ctx->pc = 0x312928u;
            goto label_312928;
        }
    }
    ctx->pc = 0x312920u;
label_312920:
    // 0x312920: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_312924:
    if (ctx->pc == 0x312924u) {
        ctx->pc = 0x312928u;
        goto label_312928;
    }
    ctx->pc = 0x312920u;
    {
        const bool branch_taken_0x312920 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x312920) {
            ctx->pc = 0x312960u;
            goto label_312960;
        }
    }
    ctx->pc = 0x312928u;
label_312928:
    // 0x312928: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_31292c:
    // 0x31292c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31292cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_312930:
    // 0x312930: 0xac20edd0  sw          $zero, -0x1230($at)
    ctx->pc = 0x312930u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962640), GPR_U32(ctx, 0));
label_312934:
    // 0x312934: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x312934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_312938:
    // 0x312938: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_31293c:
    // 0x31293c: 0xaf84a268  sw          $a0, -0x5D98($gp)
    ctx->pc = 0x31293cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943336), GPR_U32(ctx, 4));
label_312940:
    // 0x312940: 0xac24edc0  sw          $a0, -0x1240($at)
    ctx->pc = 0x312940u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962624), GPR_U32(ctx, 4));
label_312944:
    // 0x312944: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312948:
    // 0x312948: 0xac23eddc  sw          $v1, -0x1224($at)
    ctx->pc = 0x312948u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962652), GPR_U32(ctx, 3));
label_31294c:
    // 0x31294c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x31294cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312950:
    // 0x312950: 0xac20edd4  sw          $zero, -0x122C($at)
    ctx->pc = 0x312950u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962644), GPR_U32(ctx, 0));
label_312954:
    // 0x312954: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312958:
    // 0x312958: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_31295c:
    if (ctx->pc == 0x31295Cu) {
        ctx->pc = 0x31295Cu;
            // 0x31295c: 0xac20edd8  sw          $zero, -0x1228($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294962648), GPR_U32(ctx, 0));
        ctx->pc = 0x312960u;
        goto label_312960;
    }
    ctx->pc = 0x312958u;
    {
        const bool branch_taken_0x312958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31295Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312958u;
            // 0x31295c: 0xac20edd8  sw          $zero, -0x1228($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294962648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312958) {
            ctx->pc = 0x312CFCu;
            goto label_312cfc;
        }
    }
    ctx->pc = 0x312960u;
label_312960:
    // 0x312960: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x312960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_312964:
    // 0x312964: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x312964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_312968:
    // 0x312968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31296c:
    // 0x31296c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x31296cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_312970:
    // 0x312970: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x312970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_312974:
    // 0x312974: 0x320f809  jalr        $t9
label_312978:
    if (ctx->pc == 0x312978u) {
        ctx->pc = 0x312978u;
            // 0x312978: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x31297Cu;
        goto label_31297c;
    }
    ctx->pc = 0x312974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31297Cu);
        ctx->pc = 0x312978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312974u;
            // 0x312978: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31297Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31297Cu; }
            if (ctx->pc != 0x31297Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31297Cu;
label_31297c:
    // 0x31297c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x31297cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_312980:
    // 0x312980: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x312980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_312984:
    // 0x312984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_312988:
    // 0x312988: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x312988u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_31298c:
    // 0x31298c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x31298cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_312990:
    // 0x312990: 0x320f809  jalr        $t9
label_312994:
    if (ctx->pc == 0x312994u) {
        ctx->pc = 0x312994u;
            // 0x312994: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x312998u;
        goto label_312998;
    }
    ctx->pc = 0x312990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x312998u);
        ctx->pc = 0x312994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312990u;
            // 0x312994: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x312998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x312998u; }
            if (ctx->pc != 0x312998u) { return; }
        }
        }
    }
    ctx->pc = 0x312998u;
label_312998:
    // 0x312998: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x312998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_31299c:
    // 0x31299c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3129a0:
    // 0x3129a0: 0xc04ddb4  jal         func_1376D0
label_3129a4:
    if (ctx->pc == 0x3129A4u) {
        ctx->pc = 0x3129A4u;
            // 0x3129a4: 0x24a52690  addiu       $a1, $a1, 0x2690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9872));
        ctx->pc = 0x3129A8u;
        goto label_3129a8;
    }
    ctx->pc = 0x3129A0u;
    SET_GPR_U32(ctx, 31, 0x3129A8u);
    ctx->pc = 0x3129A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3129A0u;
            // 0x3129a4: 0x24a52690  addiu       $a1, $a1, 0x2690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129A8u; }
        if (ctx->pc != 0x3129A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129A8u; }
        if (ctx->pc != 0x3129A8u) { return; }
    }
    ctx->pc = 0x3129A8u;
label_3129a8:
    // 0x3129a8: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x3129a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_3129ac:
    // 0x3129ac: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x3129acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3129b0:
    // 0x3129b0: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_3129b4:
    if (ctx->pc == 0x3129B4u) {
        ctx->pc = 0x3129B8u;
        goto label_3129b8;
    }
    ctx->pc = 0x3129B0u;
    {
        const bool branch_taken_0x3129b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3129b0) {
            ctx->pc = 0x3129D4u;
            goto label_3129d4;
        }
    }
    ctx->pc = 0x3129B8u;
label_3129b8:
    // 0x3129b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3129bc:
    if (ctx->pc == 0x3129BCu) {
        ctx->pc = 0x3129BCu;
            // 0x3129bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3129C0u;
        goto label_3129c0;
    }
    ctx->pc = 0x3129B8u;
    {
        const bool branch_taken_0x3129b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3129BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3129B8u;
            // 0x3129bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129b8) {
            ctx->pc = 0x3129D4u;
            goto label_3129d4;
        }
    }
    ctx->pc = 0x3129C0u;
label_3129c0:
    // 0x3129c0: 0xc04de0c  jal         func_137830
label_3129c4:
    if (ctx->pc == 0x3129C4u) {
        ctx->pc = 0x3129C4u;
            // 0x3129c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3129C8u;
        goto label_3129c8;
    }
    ctx->pc = 0x3129C0u;
    SET_GPR_U32(ctx, 31, 0x3129C8u);
    ctx->pc = 0x3129C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3129C0u;
            // 0x3129c4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129C8u; }
        if (ctx->pc != 0x3129C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129C8u; }
        if (ctx->pc != 0x3129C8u) { return; }
    }
    ctx->pc = 0x3129C8u;
label_3129c8:
    // 0x3129c8: 0xc04bff4  jal         func_12FFD0
label_3129cc:
    if (ctx->pc == 0x3129CCu) {
        ctx->pc = 0x3129CCu;
            // 0x3129cc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3129D0u;
        goto label_3129d0;
    }
    ctx->pc = 0x3129C8u;
    SET_GPR_U32(ctx, 31, 0x3129D0u);
    ctx->pc = 0x3129CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3129C8u;
            // 0x3129cc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129D0u; }
        if (ctx->pc != 0x3129D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129D0u; }
        if (ctx->pc != 0x3129D0u) { return; }
    }
    ctx->pc = 0x3129D0u;
label_3129d0:
    // 0x3129d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3129d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3129d4:
    // 0x3129d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3129d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3129d8:
    // 0x3129d8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3129d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3129dc:
    // 0x3129dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3129dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3129e0:
    // 0x3129e0: 0xac22edc0  sw          $v0, -0x1240($at)
    ctx->pc = 0x3129e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962624), GPR_U32(ctx, 2));
label_3129e4:
    // 0x3129e4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3129e8:
    if (ctx->pc == 0x3129E8u) {
        ctx->pc = 0x3129E8u;
            // 0x3129e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3129ECu;
        goto label_3129ec;
    }
    ctx->pc = 0x3129E4u;
    {
        const bool branch_taken_0x3129e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3129E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3129E4u;
            // 0x3129e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129e4) {
            ctx->pc = 0x312A18u;
            goto label_312a18;
        }
    }
    ctx->pc = 0x3129ECu;
label_3129ec:
    // 0x3129ec: 0x2442edc0  addiu       $v0, $v0, -0x1240
    ctx->pc = 0x3129ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962624));
label_3129f0:
    // 0x3129f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3129f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3129f4:
    // 0x3129f4: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x3129f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3129f8:
    // 0x3129f8: 0xc04bc8c  jal         func_12F230
label_3129fc:
    if (ctx->pc == 0x3129FCu) {
        ctx->pc = 0x3129FCu;
            // 0x3129fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312A00u;
        goto label_312a00;
    }
    ctx->pc = 0x3129F8u;
    SET_GPR_U32(ctx, 31, 0x312A00u);
    ctx->pc = 0x3129FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3129F8u;
            // 0x3129fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312A00u; }
        if (ctx->pc != 0x312A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312A00u; }
        if (ctx->pc != 0x312A00u) { return; }
    }
    ctx->pc = 0x312A00u;
label_312a00:
    // 0x312a00: 0xc04bc8c  jal         func_12F230
label_312a04:
    if (ctx->pc == 0x312A04u) {
        ctx->pc = 0x312A04u;
            // 0x312a04: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x312A08u;
        goto label_312a08;
    }
    ctx->pc = 0x312A00u;
    SET_GPR_U32(ctx, 31, 0x312A08u);
    ctx->pc = 0x312A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312A00u;
            // 0x312a04: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312A08u; }
        if (ctx->pc != 0x312A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312A08u; }
        if (ctx->pc != 0x312A08u) { return; }
    }
    ctx->pc = 0x312A08u;
label_312a08:
    // 0x312a08: 0xc04bc8c  jal         func_12F230
label_312a0c:
    if (ctx->pc == 0x312A0Cu) {
        ctx->pc = 0x312A0Cu;
            // 0x312a0c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x312A10u;
        goto label_312a10;
    }
    ctx->pc = 0x312A08u;
    SET_GPR_U32(ctx, 31, 0x312A10u);
    ctx->pc = 0x312A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312A08u;
            // 0x312a0c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312A10u; }
        if (ctx->pc != 0x312A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312A10u; }
        if (ctx->pc != 0x312A10u) { return; }
    }
    ctx->pc = 0x312A10u;
label_312a10:
    // 0x312a10: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x312a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_312a14:
    // 0x312a14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x312a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_312a18:
    // 0x312a18: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312a1c:
    // 0x312a1c: 0x8c22edc0  lw          $v0, -0x1240($at)
    ctx->pc = 0x312a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962624)));
label_312a20:
    // 0x312a20: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x312a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_312a24:
    // 0x312a24: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_312a28:
    if (ctx->pc == 0x312A28u) {
        ctx->pc = 0x312A28u;
            // 0x312a28: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x312A2Cu;
        goto label_312a2c;
    }
    ctx->pc = 0x312A24u;
    {
        const bool branch_taken_0x312a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312A24u;
            // 0x312a28: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a24) {
            ctx->pc = 0x3129ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3129ec;
        }
    }
    ctx->pc = 0x312A2Cu;
label_312a2c:
    // 0x312a2c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312a30:
    // 0x312a30: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_312a34:
    // 0x312a34: 0xac20edd0  sw          $zero, -0x1230($at)
    ctx->pc = 0x312a34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962640), GPR_U32(ctx, 0));
label_312a38:
    // 0x312a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_312a3c:
    // 0x312a3c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312a40:
    // 0x312a40: 0x3c1001f6  lui         $s0, 0x1F6
    ctx->pc = 0x312a40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)502 << 16));
label_312a44:
    // 0x312a44: 0xac20edd4  sw          $zero, -0x122C($at)
    ctx->pc = 0x312a44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962644), GPR_U32(ctx, 0));
label_312a48:
    // 0x312a48: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x312a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_312a4c:
    // 0x312a4c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312a50:
    // 0x312a50: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x312a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_312a54:
    // 0x312a54: 0xac20edd8  sw          $zero, -0x1228($at)
    ctx->pc = 0x312a54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962648), GPR_U32(ctx, 0));
label_312a58:
    // 0x312a58: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x312a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_312a5c:
    // 0x312a5c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312a60:
    // 0x312a60: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x312a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_312a64:
    // 0x312a64: 0xac26eddc  sw          $a2, -0x1224($at)
    ctx->pc = 0x312a64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962652), GPR_U32(ctx, 6));
label_312a68:
    // 0x312a68: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x312a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_312a6c:
    // 0x312a6c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312a70:
    // 0x312a70: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x312a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_312a74:
    // 0x312a74: 0xac20ee00  sw          $zero, -0x1200($at)
    ctx->pc = 0x312a74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962688), GPR_U32(ctx, 0));
label_312a78:
    // 0x312a78: 0x2484edd0  addiu       $a0, $a0, -0x1230
    ctx->pc = 0x312a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962640));
label_312a7c:
    // 0x312a7c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312a80:
    // 0x312a80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_312a84:
    // 0x312a84: 0xac20ee04  sw          $zero, -0x11FC($at)
    ctx->pc = 0x312a84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962692), GPR_U32(ctx, 0));
label_312a88:
    // 0x312a88: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312a8c:
    // 0x312a8c: 0xe434ee08  swc1        $f20, -0x11F8($at)
    ctx->pc = 0x312a8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962696), bits); }
label_312a90:
    // 0x312a90: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312a94:
    // 0x312a94: 0xac26ee0c  sw          $a2, -0x11F4($at)
    ctx->pc = 0x312a94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962700), GPR_U32(ctx, 6));
label_312a98:
    // 0x312a98: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312a9c:
    // 0x312a9c: 0xac20ee30  sw          $zero, -0x11D0($at)
    ctx->pc = 0x312a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962736), GPR_U32(ctx, 0));
label_312aa0:
    // 0x312aa0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312aa4:
    // 0x312aa4: 0xac23ee34  sw          $v1, -0x11CC($at)
    ctx->pc = 0x312aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962740), GPR_U32(ctx, 3));
label_312aa8:
    // 0x312aa8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312aac:
    // 0x312aac: 0xe420ee38  swc1        $f0, -0x11C8($at)
    ctx->pc = 0x312aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962744), bits); }
label_312ab0:
    // 0x312ab0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312ab4:
    // 0x312ab4: 0xac23ee94  sw          $v1, -0x116C($at)
    ctx->pc = 0x312ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962836), GPR_U32(ctx, 3));
label_312ab8:
    // 0x312ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_312abc:
    // 0x312abc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312ac0:
    // 0x312ac0: 0xac26ee3c  sw          $a2, -0x11C4($at)
    ctx->pc = 0x312ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962748), GPR_U32(ctx, 6));
label_312ac4:
    // 0x312ac4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x312ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_312ac8:
    // 0x312ac8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312acc:
    // 0x312acc: 0xac20ee60  sw          $zero, -0x11A0($at)
    ctx->pc = 0x312accu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962784), GPR_U32(ctx, 0));
label_312ad0:
    // 0x312ad0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312ad4:
    // 0x312ad4: 0xac26ee64  sw          $a2, -0x119C($at)
    ctx->pc = 0x312ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962788), GPR_U32(ctx, 6));
label_312ad8:
    // 0x312ad8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312adc:
    // 0x312adc: 0xac26ee6c  sw          $a2, -0x1194($at)
    ctx->pc = 0x312adcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962796), GPR_U32(ctx, 6));
label_312ae0:
    // 0x312ae0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312ae4:
    // 0x312ae4: 0xac26ee9c  sw          $a2, -0x1164($at)
    ctx->pc = 0x312ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962844), GPR_U32(ctx, 6));
label_312ae8:
    // 0x312ae8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312aec:
    // 0x312aec: 0xe420ee68  swc1        $f0, -0x1198($at)
    ctx->pc = 0x312aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962792), bits); }
label_312af0:
    // 0x312af0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312af4:
    // 0x312af4: 0xe420ee98  swc1        $f0, -0x1168($at)
    ctx->pc = 0x312af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962840), bits); }
label_312af8:
    // 0x312af8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312afc:
    // 0x312afc: 0xc04c018  jal         func_130060
label_312b00:
    if (ctx->pc == 0x312B00u) {
        ctx->pc = 0x312B00u;
            // 0x312b00: 0xac20ee90  sw          $zero, -0x1170($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294962832), GPR_U32(ctx, 0));
        ctx->pc = 0x312B04u;
        goto label_312b04;
    }
    ctx->pc = 0x312AFCu;
    SET_GPR_U32(ctx, 31, 0x312B04u);
    ctx->pc = 0x312B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312AFCu;
            // 0x312b00: 0xac20ee90  sw          $zero, -0x1170($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294962832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312B04u; }
        if (ctx->pc != 0x312B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312B04u; }
        if (ctx->pc != 0x312B04u) { return; }
    }
    ctx->pc = 0x312B04u;
label_312b04:
    // 0x312b04: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312b08:
    // 0x312b08: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x312b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_312b0c:
    // 0x312b0c: 0xac30ef58  sw          $s0, -0x10A8($at)
    ctx->pc = 0x312b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963032), GPR_U32(ctx, 16));
label_312b10:
    // 0x312b10: 0x3c1101f6  lui         $s1, 0x1F6
    ctx->pc = 0x312b10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)502 << 16));
label_312b14:
    // 0x312b14: 0x2442edd0  addiu       $v0, $v0, -0x1230
    ctx->pc = 0x312b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962640));
label_312b18:
    // 0x312b18: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312b1c:
    // 0x312b1c: 0xac22ef54  sw          $v0, -0x10AC($at)
    ctx->pc = 0x312b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963028), GPR_U32(ctx, 2));
label_312b20:
    // 0x312b20: 0x2631ee30  addiu       $s1, $s1, -0x11D0
    ctx->pc = 0x312b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962736));
label_312b24:
    // 0x312b24: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_312b28:
    // 0x312b28: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312b2c:
    // 0x312b2c: 0xac22ef5c  sw          $v0, -0x10A4($at)
    ctx->pc = 0x312b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963036), GPR_U32(ctx, 2));
label_312b30:
    // 0x312b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_312b34:
    // 0x312b34: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312b38:
    // 0x312b38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312b3c:
    // 0x312b3c: 0xc04c018  jal         func_130060
label_312b40:
    if (ctx->pc == 0x312B40u) {
        ctx->pc = 0x312B40u;
            // 0x312b40: 0xe420ef60  swc1        $f0, -0x10A0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963040), bits); }
        ctx->pc = 0x312B44u;
        goto label_312b44;
    }
    ctx->pc = 0x312B3Cu;
    SET_GPR_U32(ctx, 31, 0x312B44u);
    ctx->pc = 0x312B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312B3Cu;
            // 0x312b40: 0xe420ef60  swc1        $f0, -0x10A0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963040), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312B44u; }
        if (ctx->pc != 0x312B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312B44u; }
        if (ctx->pc != 0x312B44u) { return; }
    }
    ctx->pc = 0x312B44u;
label_312b44:
    // 0x312b44: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312b48:
    // 0x312b48: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x312b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_312b4c:
    // 0x312b4c: 0xac30ef64  sw          $s0, -0x109C($at)
    ctx->pc = 0x312b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963044), GPR_U32(ctx, 16));
label_312b50:
    // 0x312b50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_312b54:
    // 0x312b54: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312b58:
    // 0x312b58: 0x2484edd0  addiu       $a0, $a0, -0x1230
    ctx->pc = 0x312b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962640));
label_312b5c:
    // 0x312b5c: 0xac22ef6c  sw          $v0, -0x1094($at)
    ctx->pc = 0x312b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963052), GPR_U32(ctx, 2));
label_312b60:
    // 0x312b60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312b64:
    // 0x312b64: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312b68:
    // 0x312b68: 0xac31ef68  sw          $s1, -0x1098($at)
    ctx->pc = 0x312b68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963048), GPR_U32(ctx, 17));
label_312b6c:
    // 0x312b6c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312b70:
    // 0x312b70: 0xc04c018  jal         func_130060
label_312b74:
    if (ctx->pc == 0x312B74u) {
        ctx->pc = 0x312B74u;
            // 0x312b74: 0xe420ef70  swc1        $f0, -0x1090($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963056), bits); }
        ctx->pc = 0x312B78u;
        goto label_312b78;
    }
    ctx->pc = 0x312B70u;
    SET_GPR_U32(ctx, 31, 0x312B78u);
    ctx->pc = 0x312B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312B70u;
            // 0x312b74: 0xe420ef70  swc1        $f0, -0x1090($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963056), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312B78u; }
        if (ctx->pc != 0x312B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312B78u; }
        if (ctx->pc != 0x312B78u) { return; }
    }
    ctx->pc = 0x312B78u;
label_312b78:
    // 0x312b78: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312b7c:
    // 0x312b7c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x312b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_312b80:
    // 0x312b80: 0xac31ef78  sw          $s1, -0x1088($at)
    ctx->pc = 0x312b80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963064), GPR_U32(ctx, 17));
label_312b84:
    // 0x312b84: 0x3c1201f6  lui         $s2, 0x1F6
    ctx->pc = 0x312b84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)502 << 16));
label_312b88:
    // 0x312b88: 0x2442edd0  addiu       $v0, $v0, -0x1230
    ctx->pc = 0x312b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962640));
label_312b8c:
    // 0x312b8c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312b90:
    // 0x312b90: 0xac22ef74  sw          $v0, -0x108C($at)
    ctx->pc = 0x312b90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963060), GPR_U32(ctx, 2));
label_312b94:
    // 0x312b94: 0x2652ee60  addiu       $s2, $s2, -0x11A0
    ctx->pc = 0x312b94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962784));
label_312b98:
    // 0x312b98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_312b9c:
    // 0x312b9c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312ba0:
    // 0x312ba0: 0xac22ef7c  sw          $v0, -0x1084($at)
    ctx->pc = 0x312ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963068), GPR_U32(ctx, 2));
label_312ba4:
    // 0x312ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_312ba8:
    // 0x312ba8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312bac:
    // 0x312bac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x312bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_312bb0:
    // 0x312bb0: 0xc04c018  jal         func_130060
label_312bb4:
    if (ctx->pc == 0x312BB4u) {
        ctx->pc = 0x312BB4u;
            // 0x312bb4: 0xe420ef80  swc1        $f0, -0x1080($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963072), bits); }
        ctx->pc = 0x312BB8u;
        goto label_312bb8;
    }
    ctx->pc = 0x312BB0u;
    SET_GPR_U32(ctx, 31, 0x312BB8u);
    ctx->pc = 0x312BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312BB0u;
            // 0x312bb4: 0xe420ef80  swc1        $f0, -0x1080($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963072), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312BB8u; }
        if (ctx->pc != 0x312BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312BB8u; }
        if (ctx->pc != 0x312BB8u) { return; }
    }
    ctx->pc = 0x312BB8u;
label_312bb8:
    // 0x312bb8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312bbc:
    // 0x312bbc: 0x3c1301f6  lui         $s3, 0x1F6
    ctx->pc = 0x312bbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)502 << 16));
label_312bc0:
    // 0x312bc0: 0xac30ef84  sw          $s0, -0x107C($at)
    ctx->pc = 0x312bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963076), GPR_U32(ctx, 16));
label_312bc4:
    // 0x312bc4: 0x2673ee90  addiu       $s3, $s3, -0x1170
    ctx->pc = 0x312bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962832));
label_312bc8:
    // 0x312bc8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_312bcc:
    // 0x312bcc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312bd0:
    // 0x312bd0: 0xac22ef8c  sw          $v0, -0x1074($at)
    ctx->pc = 0x312bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963084), GPR_U32(ctx, 2));
label_312bd4:
    // 0x312bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x312bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_312bd8:
    // 0x312bd8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312bdc:
    // 0x312bdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x312bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312be0:
    // 0x312be0: 0xac32ef88  sw          $s2, -0x1078($at)
    ctx->pc = 0x312be0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963080), GPR_U32(ctx, 18));
label_312be4:
    // 0x312be4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312be8:
    // 0x312be8: 0xc04c018  jal         func_130060
label_312bec:
    if (ctx->pc == 0x312BECu) {
        ctx->pc = 0x312BECu;
            // 0x312bec: 0xe420ef90  swc1        $f0, -0x1070($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963088), bits); }
        ctx->pc = 0x312BF0u;
        goto label_312bf0;
    }
    ctx->pc = 0x312BE8u;
    SET_GPR_U32(ctx, 31, 0x312BF0u);
    ctx->pc = 0x312BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312BE8u;
            // 0x312bec: 0xe420ef90  swc1        $f0, -0x1070($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963088), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312BF0u; }
        if (ctx->pc != 0x312BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312BF0u; }
        if (ctx->pc != 0x312BF0u) { return; }
    }
    ctx->pc = 0x312BF0u;
label_312bf0:
    // 0x312bf0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312bf4:
    // 0x312bf4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_312bf8:
    // 0x312bf8: 0xac30ef94  sw          $s0, -0x106C($at)
    ctx->pc = 0x312bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963092), GPR_U32(ctx, 16));
label_312bfc:
    // 0x312bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x312bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_312c00:
    // 0x312c00: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c04:
    // 0x312c04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x312c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312c08:
    // 0x312c08: 0xac22ef9c  sw          $v0, -0x1064($at)
    ctx->pc = 0x312c08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963100), GPR_U32(ctx, 2));
label_312c0c:
    // 0x312c0c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c10:
    // 0x312c10: 0xac33ef98  sw          $s3, -0x1068($at)
    ctx->pc = 0x312c10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963096), GPR_U32(ctx, 19));
label_312c14:
    // 0x312c14: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c18:
    // 0x312c18: 0xc04c018  jal         func_130060
label_312c1c:
    if (ctx->pc == 0x312C1Cu) {
        ctx->pc = 0x312C1Cu;
            // 0x312c1c: 0xe420efa0  swc1        $f0, -0x1060($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963104), bits); }
        ctx->pc = 0x312C20u;
        goto label_312c20;
    }
    ctx->pc = 0x312C18u;
    SET_GPR_U32(ctx, 31, 0x312C20u);
    ctx->pc = 0x312C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312C18u;
            // 0x312c1c: 0xe420efa0  swc1        $f0, -0x1060($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312C20u; }
        if (ctx->pc != 0x312C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312C20u; }
        if (ctx->pc != 0x312C20u) { return; }
    }
    ctx->pc = 0x312C20u;
label_312c20:
    // 0x312c20: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c24:
    // 0x312c24: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x312c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_312c28:
    // 0x312c28: 0xac32efa4  sw          $s2, -0x105C($at)
    ctx->pc = 0x312c28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963108), GPR_U32(ctx, 18));
label_312c2c:
    // 0x312c2c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x312c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_312c30:
    // 0x312c30: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c34:
    // 0x312c34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x312c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_312c38:
    // 0x312c38: 0xac33efa8  sw          $s3, -0x1058($at)
    ctx->pc = 0x312c38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963112), GPR_U32(ctx, 19));
label_312c3c:
    // 0x312c3c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c40:
    // 0x312c40: 0xe420efb0  swc1        $f0, -0x1050($at)
    ctx->pc = 0x312c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963120), bits); }
label_312c44:
    // 0x312c44: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c48:
    // 0x312c48: 0xac23efac  sw          $v1, -0x1054($at)
    ctx->pc = 0x312c48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963116), GPR_U32(ctx, 3));
label_312c4c:
    // 0x312c4c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c50:
    // 0x312c50: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x312c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_312c54:
    // 0x312c54: 0xac22ef50  sw          $v0, -0x10B0($at)
    ctx->pc = 0x312c54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963024), GPR_U32(ctx, 2));
label_312c58:
    // 0x312c58: 0x2463edd0  addiu       $v1, $v1, -0x1230
    ctx->pc = 0x312c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962640));
label_312c5c:
    // 0x312c5c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c60:
    // 0x312c60: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x312c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_312c64:
    // 0x312c64: 0xac24f080  sw          $a0, -0xF80($at)
    ctx->pc = 0x312c64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963328), GPR_U32(ctx, 4));
label_312c68:
    // 0x312c68: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c6c:
    // 0x312c6c: 0xac23f088  sw          $v1, -0xF78($at)
    ctx->pc = 0x312c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963336), GPR_U32(ctx, 3));
label_312c70:
    // 0x312c70: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c74:
    // 0x312c74: 0xac30f098  sw          $s0, -0xF68($at)
    ctx->pc = 0x312c74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963352), GPR_U32(ctx, 16));
label_312c78:
    // 0x312c78: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c7c:
    // 0x312c7c: 0xac31f084  sw          $s1, -0xF7C($at)
    ctx->pc = 0x312c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963332), GPR_U32(ctx, 17));
label_312c80:
    // 0x312c80: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c84:
    // 0x312c84: 0xac31f094  sw          $s1, -0xF6C($at)
    ctx->pc = 0x312c84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963348), GPR_U32(ctx, 17));
label_312c88:
    // 0x312c88: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c8c:
    // 0x312c8c: 0xac22f090  sw          $v0, -0xF70($at)
    ctx->pc = 0x312c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963344), GPR_U32(ctx, 2));
label_312c90:
    // 0x312c90: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c94:
    // 0x312c94: 0xac22f0a0  sw          $v0, -0xF60($at)
    ctx->pc = 0x312c94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963360), GPR_U32(ctx, 2));
label_312c98:
    // 0x312c98: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312c9c:
    // 0x312c9c: 0xac20f08c  sw          $zero, -0xF74($at)
    ctx->pc = 0x312c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963340), GPR_U32(ctx, 0));
label_312ca0:
    // 0x312ca0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312ca4:
    // 0x312ca4: 0xac20f09c  sw          $zero, -0xF64($at)
    ctx->pc = 0x312ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963356), GPR_U32(ctx, 0));
label_312ca8:
    // 0x312ca8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312cac:
    // 0x312cac: 0x8c24e07c  lw          $a0, -0x1F84($at)
    ctx->pc = 0x312cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959228)));
label_312cb0:
    // 0x312cb0: 0xc04de0c  jal         func_137830
label_312cb4:
    if (ctx->pc == 0x312CB4u) {
        ctx->pc = 0x312CB4u;
            // 0x312cb4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x312CB8u;
        goto label_312cb8;
    }
    ctx->pc = 0x312CB0u;
    SET_GPR_U32(ctx, 31, 0x312CB8u);
    ctx->pc = 0x312CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312CB0u;
            // 0x312cb4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CB8u; }
        if (ctx->pc != 0x312CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CB8u; }
        if (ctx->pc != 0x312CB8u) { return; }
    }
    ctx->pc = 0x312CB8u;
label_312cb8:
    // 0x312cb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x312cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312cbc:
    // 0x312cbc: 0x10000009  b           . + 4 + (0x9 << 2)
label_312cc0:
    if (ctx->pc == 0x312CC0u) {
        ctx->pc = 0x312CC0u;
            // 0x312cc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312CC4u;
        goto label_312cc4;
    }
    ctx->pc = 0x312CBCu;
    {
        const bool branch_taken_0x312cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312CBCu;
            // 0x312cc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cbc) {
            ctx->pc = 0x312CE4u;
            goto label_312ce4;
        }
    }
    ctx->pc = 0x312CC4u;
label_312cc4:
    // 0x312cc4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x312cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_312cc8:
    // 0x312cc8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x312cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_312ccc:
    // 0x312ccc: 0x2442edc0  addiu       $v0, $v0, -0x1240
    ctx->pc = 0x312cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962624));
label_312cd0:
    // 0x312cd0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x312cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_312cd4:
    // 0x312cd4: 0xc04bcf4  jal         func_12F3D0
label_312cd8:
    if (ctx->pc == 0x312CD8u) {
        ctx->pc = 0x312CD8u;
            // 0x312cd8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x312CDCu;
        goto label_312cdc;
    }
    ctx->pc = 0x312CD4u;
    SET_GPR_U32(ctx, 31, 0x312CDCu);
    ctx->pc = 0x312CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312CD4u;
            // 0x312cd8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CDCu; }
        if (ctx->pc != 0x312CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CDCu; }
        if (ctx->pc != 0x312CDCu) { return; }
    }
    ctx->pc = 0x312CDCu;
label_312cdc:
    // 0x312cdc: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x312cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_312ce0:
    // 0x312ce0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x312ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_312ce4:
    // 0x312ce4: 0x0  nop
    ctx->pc = 0x312ce4u;
    // NOP
label_312ce8:
    // 0x312ce8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x312ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_312cec:
    // 0x312cec: 0x8c23edc0  lw          $v1, -0x1240($at)
    ctx->pc = 0x312cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294962624)));
label_312cf0:
    // 0x312cf0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x312cf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_312cf4:
    // 0x312cf4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_312cf8:
    if (ctx->pc == 0x312CF8u) {
        ctx->pc = 0x312CFCu;
        goto label_312cfc;
    }
    ctx->pc = 0x312CF4u;
    {
        const bool branch_taken_0x312cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312cf4) {
            ctx->pc = 0x312CC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_312cc4;
        }
    }
    ctx->pc = 0x312CFCu;
label_312cfc:
    // 0x312cfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x312cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_312d00:
    // 0x312d00: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x312d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_312d04:
    // 0x312d04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x312d04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_312d08:
    // 0x312d08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x312d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_312d0c:
    // 0x312d0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x312d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_312d10:
    // 0x312d10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x312d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312d14:
    // 0x312d14: 0x3e00008  jr          $ra
label_312d18:
    if (ctx->pc == 0x312D18u) {
        ctx->pc = 0x312D18u;
            // 0x312d18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x312D1Cu;
        goto label_fallthrough_0x312d14;
    }
    ctx->pc = 0x312D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312D14u;
            // 0x312d18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x312d14:
    ctx->pc = 0x312D1Cu;
}
