#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEffSptSprite__FP11_EFF_SCRIPTP10mgCTexturePfP11mgC3DSpriteP16CMapLightingInfo
// Address: 0x2e2d00 - 0x2e3238
void DrawEffSptSprite__FP11_EFF_SCRIPTP10mgCTexturePfP11mgC3DSpriteP16CMapLightingInfo_0x2e2d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEffSptSprite__FP11_EFF_SCRIPTP10mgCTexturePfP11mgC3DSpriteP16CMapLightingInfo_0x2e2d00");
#endif

    switch (ctx->pc) {
        case 0x2e2d5cu: goto label_2e2d5c;
        case 0x2e2de4u: goto label_2e2de4;
        case 0x2e2df0u: goto label_2e2df0;
        case 0x2e2dfcu: goto label_2e2dfc;
        case 0x2e2e08u: goto label_2e2e08;
        case 0x2e2e10u: goto label_2e2e10;
        case 0x2e2e24u: goto label_2e2e24;
        case 0x2e2e4cu: goto label_2e2e4c;
        case 0x2e2e54u: goto label_2e2e54;
        case 0x2e2edcu: goto label_2e2edc;
        case 0x2e2ee8u: goto label_2e2ee8;
        case 0x2e2ef4u: goto label_2e2ef4;
        case 0x2e2f00u: goto label_2e2f00;
        case 0x2e2f08u: goto label_2e2f08;
        case 0x2e2f24u: goto label_2e2f24;
        case 0x2e2f2cu: goto label_2e2f2c;
        case 0x2e2f3cu: goto label_2e2f3c;
        case 0x2e2f6cu: goto label_2e2f6c;
        case 0x2e2f78u: goto label_2e2f78;
        case 0x2e2ffcu: goto label_2e2ffc;
        case 0x2e3018u: goto label_2e3018;
        case 0x2e3074u: goto label_2e3074;
        case 0x2e307cu: goto label_2e307c;
        case 0x2e309cu: goto label_2e309c;
        case 0x2e30a8u: goto label_2e30a8;
        case 0x2e30b4u: goto label_2e30b4;
        case 0x2e30c0u: goto label_2e30c0;
        case 0x2e30c8u: goto label_2e30c8;
        case 0x2e30ecu: goto label_2e30ec;
        case 0x2e30f8u: goto label_2e30f8;
        case 0x2e3104u: goto label_2e3104;
        case 0x2e3110u: goto label_2e3110;
        case 0x2e3118u: goto label_2e3118;
        case 0x2e313cu: goto label_2e313c;
        case 0x2e3148u: goto label_2e3148;
        case 0x2e3154u: goto label_2e3154;
        case 0x2e3160u: goto label_2e3160;
        case 0x2e3168u: goto label_2e3168;
        case 0x2e3198u: goto label_2e3198;
        case 0x2e31e8u: goto label_2e31e8;
        case 0x2e3208u: goto label_2e3208;
        default: break;
    }

    ctx->pc = 0x2e2d00u;

    // 0x2e2d00: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2e2d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x2e2d04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e2d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e2d08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e2d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e2d0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e2d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e2d10: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2e2d10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e2d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e2d18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e2d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e2d1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e2d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e2d20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e2d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e2d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e2d28: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e2d28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e2d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e2d30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e2d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e2d34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e2d38: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x2e2d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x2e2d3c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2e2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2e2d40: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2e2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2e2d44: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2e2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2e2d48: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e2d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2e2d4c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2e2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e2d50: 0x8c570004  lw          $s7, 0x4($v0)
    ctx->pc = 0x2e2d50u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2d54: 0xc051150  jal         func_144540
    ctx->pc = 0x2E2D54u;
    SET_GPR_U32(ctx, 31, 0x2E2D5Cu);
    ctx->pc = 0x2E2D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2D54u;
            // 0x2e2d58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144540u;
    if (runtime->hasFunction(0x144540u)) {
        auto targetFn = runtime->lookupFunction(0x144540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2D5Cu; }
        if (ctx->pc != 0x2E2D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetpDrawEnv__Fi_0x144540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2D5Cu; }
        if (ctx->pc != 0x2E2D5Cu) { return; }
    }
    ctx->pc = 0x2E2D5Cu;
label_2e2d5c:
    // 0x2e2d5c: 0xdc4d0000  ld          $t5, 0x0($v0)
    ctx->pc = 0x2e2d5cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2d60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e2d64: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x2e2d64u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2d68: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x2e2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e2d6c: 0x27ac00f0  addiu       $t4, $sp, 0xF0
    ctx->pc = 0x2e2d6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e2d70: 0x27ab0100  addiu       $t3, $sp, 0x100
    ctx->pc = 0x2e2d70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e2d74: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x2e2d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e2d78: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x2e2d78u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e2d7c: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x2e2d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x2e2d80: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x2e2d80u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x2e2d84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e2d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2d88: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x2e2d88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x2e2d8c: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x2e2d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x2e2d90: 0xdc4a0010  ld          $t2, 0x10($v0)
    ctx->pc = 0x2e2d90u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e2d94: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x2e2d94u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x2e2d98: 0xdc4a0018  ld          $t2, 0x18($v0)
    ctx->pc = 0x2e2d98u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2e2d9c: 0xffaa00e8  sd          $t2, 0xE8($sp)
    ctx->pc = 0x2e2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 10));
    // 0x2e2da0: 0xdc4a0020  ld          $t2, 0x20($v0)
    ctx->pc = 0x2e2da0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e2da4: 0xfd8a0000  sd          $t2, 0x0($t4)
    ctx->pc = 0x2e2da4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 10));
    // 0x2e2da8: 0xdc4a0028  ld          $t2, 0x28($v0)
    ctx->pc = 0x2e2da8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2e2dac: 0xffaa00f8  sd          $t2, 0xF8($sp)
    ctx->pc = 0x2e2dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 10));
    // 0x2e2db0: 0xdc4a0030  ld          $t2, 0x30($v0)
    ctx->pc = 0x2e2db0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2e2db4: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x2e2db4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
    // 0x2e2db8: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x2e2db8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2e2dbc: 0xffa20108  sd          $v0, 0x108($sp)
    ctx->pc = 0x2e2dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 2));
    // 0x2e2dc0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e2dc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e2dc4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2e2dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2e2dc8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2e2dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2e2dcc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e2dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2dd0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e2dd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e2dd4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e2dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e2dd8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2e2dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2e2ddc: 0xc04e290  jal         func_138A40
    ctx->pc = 0x2E2DDCu;
    SET_GPR_U32(ctx, 31, 0x2E2DE4u);
    ctx->pc = 0x2E2DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2DDCu;
            // 0x2e2de0: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DE4u; }
        if (ctx->pc != 0x2E2DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DE4u; }
        if (ctx->pc != 0x2E2DE4u) { return; }
    }
    ctx->pc = 0x2E2DE4u;
label_2e2de4:
    // 0x2e2de4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e2de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e2de8: 0xc04e25c  jal         func_138970
    ctx->pc = 0x2E2DE8u;
    SET_GPR_U32(ctx, 31, 0x2E2DF0u);
    ctx->pc = 0x2E2DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2DE8u;
            // 0x2e2dec: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DF0u; }
        if (ctx->pc != 0x2E2DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DF0u; }
        if (ctx->pc != 0x2E2DF0u) { return; }
    }
    ctx->pc = 0x2E2DF0u;
label_2e2df0:
    // 0x2e2df0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e2df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2df4: 0xc04ec80  jal         func_13B200
    ctx->pc = 0x2E2DF4u;
    SET_GPR_U32(ctx, 31, 0x2E2DFCu);
    ctx->pc = 0x2E2DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2DF4u;
            // 0x2e2df8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DFCu; }
        if (ctx->pc != 0x2E2DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2DFCu; }
        if (ctx->pc != 0x2E2DFCu) { return; }
    }
    ctx->pc = 0x2E2DFCu;
label_2e2dfc:
    // 0x2e2dfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e2dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e00: 0xc04ecbc  jal         func_13B2F0
    ctx->pc = 0x2E2E00u;
    SET_GPR_U32(ctx, 31, 0x2E2E08u);
    ctx->pc = 0x2E2E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E00u;
            // 0x2e2e04: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2F0u;
    if (runtime->hasFunction(0x13B2F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E08u; }
        if (ctx->pc != 0x2E2E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E08u; }
        if (ctx->pc != 0x2E2E08u) { return; }
    }
    ctx->pc = 0x2E2E08u;
label_2e2e08:
    // 0x2e2e08: 0xc04ecd8  jal         func_13B360
    ctx->pc = 0x2E2E08u;
    SET_GPR_U32(ctx, 31, 0x2E2E10u);
    ctx->pc = 0x2E2E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E08u;
            // 0x2e2e0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E10u; }
        if (ctx->pc != 0x2E2E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E10u; }
        if (ctx->pc != 0x2E2E10u) { return; }
    }
    ctx->pc = 0x2E2E10u;
label_2e2e10:
    // 0x2e2e10: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2e2e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e2e14: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2e2e14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e2e18: 0x102000f8  beqz        $at, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2E2E18u;
    {
        const bool branch_taken_0x2e2e18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E18u;
            // 0x2e2e1c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e18) {
            ctx->pc = 0x2E31FCu;
            goto label_2e31fc;
        }
    }
    ctx->pc = 0x2E2E20u;
    // 0x2e2e20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e2e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2e24:
    // 0x2e2e24: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2e2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e2e28: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x2e2e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e2e2c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e2e30: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x2E2E30u;
    {
        const bool branch_taken_0x2e2e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e30) {
            ctx->pc = 0x2E31E8u;
            goto label_2e31e8;
        }
    }
    ctx->pc = 0x2E2E38u;
    // 0x2e2e38: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2e2e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e2e3c: 0x12f00032  beq         $s7, $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E2E3Cu;
    {
        const bool branch_taken_0x2e2e3c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E2E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E3Cu;
            // 0x2e2e40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e3c) {
            ctx->pc = 0x2E2F08u;
            goto label_2e2f08;
        }
    }
    ctx->pc = 0x2E2E44u;
    // 0x2e2e44: 0xc04edb0  jal         func_13B6C0
    ctx->pc = 0x2E2E44u;
    SET_GPR_U32(ctx, 31, 0x2E2E4Cu);
    ctx->pc = 0x2E2E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E44u;
            // 0x2e2e48: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E4Cu; }
        if (ctx->pc != 0x2E2E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E4Cu; }
        if (ctx->pc != 0x2E2E4Cu) { return; }
    }
    ctx->pc = 0x2E2E4Cu;
label_2e2e4c:
    // 0x2e2e4c: 0xc051150  jal         func_144540
    ctx->pc = 0x2E2E4Cu;
    SET_GPR_U32(ctx, 31, 0x2E2E54u);
    ctx->pc = 0x2E2E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2E4Cu;
            // 0x2e2e50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144540u;
    if (runtime->hasFunction(0x144540u)) {
        auto targetFn = runtime->lookupFunction(0x144540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E54u; }
        if (ctx->pc != 0x2E2E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetpDrawEnv__Fi_0x144540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2E54u; }
        if (ctx->pc != 0x2E2E54u) { return; }
    }
    ctx->pc = 0x2E2E54u;
label_2e2e54:
    // 0x2e2e54: 0xdc4d0000  ld          $t5, 0x0($v0)
    ctx->pc = 0x2e2e54u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2e58: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e2e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e2e5c: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x2e2e5cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2e60: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x2e2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e2e64: 0x27ac0130  addiu       $t4, $sp, 0x130
    ctx->pc = 0x2e2e64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e2e68: 0x27ab0140  addiu       $t3, $sp, 0x140
    ctx->pc = 0x2e2e68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e2e6c: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x2e2e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e2e70: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x2e2e70u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e2e74: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x2e2e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x2e2e78: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x2e2e78u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x2e2e7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e2e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2e80: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x2e2e80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x2e2e84: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x2e2e84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x2e2e88: 0xdc4a0010  ld          $t2, 0x10($v0)
    ctx->pc = 0x2e2e88u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e2e8c: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x2e2e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x2e2e90: 0xdc4a0018  ld          $t2, 0x18($v0)
    ctx->pc = 0x2e2e90u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2e2e94: 0xffaa0128  sd          $t2, 0x128($sp)
    ctx->pc = 0x2e2e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 10));
    // 0x2e2e98: 0xdc4a0020  ld          $t2, 0x20($v0)
    ctx->pc = 0x2e2e98u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e2e9c: 0xfd8a0000  sd          $t2, 0x0($t4)
    ctx->pc = 0x2e2e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 10));
    // 0x2e2ea0: 0xdc4a0028  ld          $t2, 0x28($v0)
    ctx->pc = 0x2e2ea0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2e2ea4: 0xffaa0138  sd          $t2, 0x138($sp)
    ctx->pc = 0x2e2ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 10));
    // 0x2e2ea8: 0xdc4a0030  ld          $t2, 0x30($v0)
    ctx->pc = 0x2e2ea8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2e2eac: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x2e2eacu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
    // 0x2e2eb0: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x2e2eb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2e2eb4: 0xffa20148  sd          $v0, 0x148($sp)
    ctx->pc = 0x2e2eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 2));
    // 0x2e2eb8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e2eb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e2ebc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2e2ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2e2ec0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2e2ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2e2ec4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e2ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2ec8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e2ec8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e2ecc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e2eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e2ed0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2e2ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2e2ed4: 0xc04e290  jal         func_138A40
    ctx->pc = 0x2E2ED4u;
    SET_GPR_U32(ctx, 31, 0x2E2EDCu);
    ctx->pc = 0x2E2ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2ED4u;
            // 0x2e2ed8: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2EDCu; }
        if (ctx->pc != 0x2E2EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2EDCu; }
        if (ctx->pc != 0x2E2EDCu) { return; }
    }
    ctx->pc = 0x2E2EDCu;
label_2e2edc:
    // 0x2e2edc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e2edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ee0: 0xc04e25c  jal         func_138970
    ctx->pc = 0x2E2EE0u;
    SET_GPR_U32(ctx, 31, 0x2E2EE8u);
    ctx->pc = 0x2E2EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2EE0u;
            // 0x2e2ee4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2EE8u; }
        if (ctx->pc != 0x2E2EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2EE8u; }
        if (ctx->pc != 0x2E2EE8u) { return; }
    }
    ctx->pc = 0x2E2EE8u;
label_2e2ee8:
    // 0x2e2ee8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e2ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2eec: 0xc04ec80  jal         func_13B200
    ctx->pc = 0x2E2EECu;
    SET_GPR_U32(ctx, 31, 0x2E2EF4u);
    ctx->pc = 0x2E2EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2EECu;
            // 0x2e2ef0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2EF4u; }
        if (ctx->pc != 0x2E2EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2EF4u; }
        if (ctx->pc != 0x2E2EF4u) { return; }
    }
    ctx->pc = 0x2E2EF4u;
label_2e2ef4:
    // 0x2e2ef4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e2ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ef8: 0xc04ecbc  jal         func_13B2F0
    ctx->pc = 0x2E2EF8u;
    SET_GPR_U32(ctx, 31, 0x2E2F00u);
    ctx->pc = 0x2E2EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2EF8u;
            // 0x2e2efc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2F0u;
    if (runtime->hasFunction(0x13B2F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F00u; }
        if (ctx->pc != 0x2E2F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F00u; }
        if (ctx->pc != 0x2E2F00u) { return; }
    }
    ctx->pc = 0x2E2F00u;
label_2e2f00:
    // 0x2e2f00: 0xc04ecd8  jal         func_13B360
    ctx->pc = 0x2E2F00u;
    SET_GPR_U32(ctx, 31, 0x2E2F08u);
    ctx->pc = 0x2E2F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F00u;
            // 0x2e2f04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F08u; }
        if (ctx->pc != 0x2E2F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F08u; }
        if (ctx->pc != 0x2E2F08u) { return; }
    }
    ctx->pc = 0x2E2F08u;
label_2e2f08:
    // 0x2e2f08: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2e2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2e2f0c: 0x24429330  addiu       $v0, $v0, -0x6CD0
    ctx->pc = 0x2e2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939440));
    // 0x2e2f10: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x2e2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e2f14: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2e2f14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2f18: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2e2f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2e2f1c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2E2F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E2F24u);
    ctx->pc = 0x2E2F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F1Cu;
            // 0x2e2f20: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F24u; }
        if (ctx->pc != 0x2E2F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F24u; }
        if (ctx->pc != 0x2E2F24u) { return; }
    }
    ctx->pc = 0x2E2F24u;
label_2e2f24:
    // 0x2e2f24: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2E2F24u;
    SET_GPR_U32(ctx, 31, 0x2E2F2Cu);
    ctx->pc = 0x2E2F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F24u;
            // 0x2e2f28: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F2Cu; }
        if (ctx->pc != 0x2E2F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F2Cu; }
        if (ctx->pc != 0x2E2F2Cu) { return; }
    }
    ctx->pc = 0x2E2F2Cu;
label_2e2f2c:
    // 0x2e2f2c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2e2f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e2f30: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2e2f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e2f34: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2E2F34u;
    SET_GPR_U32(ctx, 31, 0x2E2F3Cu);
    ctx->pc = 0x2E2F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F34u;
            // 0x2e2f38: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F3Cu; }
        if (ctx->pc != 0x2E2F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F3Cu; }
        if (ctx->pc != 0x2E2F3Cu) { return; }
    }
    ctx->pc = 0x2E2F3Cu;
label_2e2f3c:
    // 0x2e2f3c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2f40: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x2e2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2e2f44: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x2e2f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x2e2f48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e2f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2f4c: 0x7a630030  lq          $v1, 0x30($s3)
    ctx->pc = 0x2e2f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2e2f50: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2e2f50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2e2f54: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x2e2f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2f58: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e2f58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2f5c: 0x0  nop
    ctx->pc = 0x2e2f5cu;
    // NOP
    // 0x2e2f60: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x2E2F60u;
    {
        const bool branch_taken_0x2e2f60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F60u;
            // 0x2e2f64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f60) {
            ctx->pc = 0x2E3004u;
            goto label_2e3004;
        }
    }
    ctx->pc = 0x2E2F68u;
    // 0x2e2f68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e2f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2f6c:
    // 0x2e2f6c: 0x0  nop
    ctx->pc = 0x2e2f6cu;
    // NOP
    // 0x2e2f70: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2E2F70u;
    SET_GPR_U32(ctx, 31, 0x2E2F78u);
    ctx->pc = 0x2E2F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2F70u;
            // 0x2e2f74: 0xc66c0104  lwc1        $f12, 0x104($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F78u; }
        if (ctx->pc != 0x2E2F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2F78u; }
        if (ctx->pc != 0x2E2F78u) { return; }
    }
    ctx->pc = 0x2E2F78u;
label_2e2f78:
    // 0x2e2f78: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x2e2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2e2f7c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2e2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2e2f80: 0xc46300f0  lwc1        $f3, 0xF0($v1)
    ctx->pc = 0x2e2f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2f84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e2f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2f88: 0x24430190  addiu       $v1, $v0, 0x190
    ctx->pc = 0x2e2f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2e2f8c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2e2f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2f90: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2e2f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e2f94: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2e2f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2e2f98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e2f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2f9c: 0x0  nop
    ctx->pc = 0x2e2f9cu;
    // NOP
    // 0x2e2fa0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2FA0u;
    {
        const bool branch_taken_0x2e2fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2FA0u;
            // 0x2e2fa4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2fa0) {
            ctx->pc = 0x2E2FACu;
            goto label_2e2fac;
        }
    }
    ctx->pc = 0x2E2FA8u;
    // 0x2e2fa8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2e2fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2e2fac:
    // 0x2e2fac: 0x0  nop
    ctx->pc = 0x2e2facu;
    // NOP
    // 0x2e2fb0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e2fb4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e2fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2fb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2fbc: 0x0  nop
    ctx->pc = 0x2e2fbcu;
    // NOP
    // 0x2e2fc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e2fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2fc4: 0x0  nop
    ctx->pc = 0x2e2fc4u;
    // NOP
    // 0x2e2fc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2FC8u;
    {
        const bool branch_taken_0x2e2fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2fc8) {
            ctx->pc = 0x2E2FD4u;
            goto label_2e2fd4;
        }
    }
    ctx->pc = 0x2E2FD0u;
    // 0x2e2fd0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2e2fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2e2fd4:
    // 0x2e2fd4: 0x0  nop
    ctx->pc = 0x2e2fd4u;
    // NOP
    // 0x2e2fd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e2fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e2fdc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2e2fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e2fe0: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2E2FE0u;
    {
        const bool branch_taken_0x2e2fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2FE0u;
            // 0x2e2fe4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2fe0) {
            ctx->pc = 0x2E2F6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e2f6c;
        }
    }
    ctx->pc = 0x2E2FE8u;
    // 0x2e2fe8: 0xc6610100  lwc1        $f1, 0x100($s3)
    ctx->pc = 0x2e2fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2fec: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x2e2fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2ff0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e2ff0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2ff4: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2E2FF4u;
    SET_GPR_U32(ctx, 31, 0x2E2FFCu);
    ctx->pc = 0x2E2FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2FF4u;
            // 0x2e2ff8: 0xe66c0104  swc1        $f12, 0x104($s3) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2FFCu; }
        if (ctx->pc != 0x2E2FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E2FFCu; }
        if (ctx->pc != 0x2E2FFCu) { return; }
    }
    ctx->pc = 0x2E2FFCu;
label_2e2ffc:
    // 0x2e2ffc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E2FFCu;
    {
        const bool branch_taken_0x2e2ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2FFCu;
            // 0x2e3000: 0xe6600104  swc1        $f0, 0x104($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ffc) {
            ctx->pc = 0x2E3060u;
            goto label_2e3060;
        }
    }
    ctx->pc = 0x2E3004u;
label_2e3004:
    // 0x2e3004: 0x0  nop
    ctx->pc = 0x2e3004u;
    // NOP
    // 0x2e3008: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e3008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e300c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3010: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e3010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e3014: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e3014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e3018:
    // 0x2e3018: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x2e3018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2e301c: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x2e301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x2e3020: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e3020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3024: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e3024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3028: 0x0  nop
    ctx->pc = 0x2e3028u;
    // NOP
    // 0x2e302c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E302Cu;
    {
        const bool branch_taken_0x2e302c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e302c) {
            ctx->pc = 0x2E3038u;
            goto label_2e3038;
        }
    }
    ctx->pc = 0x2E3034u;
    // 0x2e3034: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2e3034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2e3038:
    // 0x2e3038: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e3038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e303c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2e303cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3040: 0x0  nop
    ctx->pc = 0x2e3040u;
    // NOP
    // 0x2e3044: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3044u;
    {
        const bool branch_taken_0x2e3044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3044) {
            ctx->pc = 0x2E3050u;
            goto label_2e3050;
        }
    }
    ctx->pc = 0x2E304Cu;
    // 0x2e304c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2e304cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2e3050:
    // 0x2e3050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e3050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e3054: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2e3054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e3058: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E3058u;
    {
        const bool branch_taken_0x2e3058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3058u;
            // 0x2e305c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3058) {
            ctx->pc = 0x2E3018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e3018;
        }
    }
    ctx->pc = 0x2E3060u;
label_2e3060:
    // 0x2e3060: 0x8ea20138  lw          $v0, 0x138($s5)
    ctx->pc = 0x2e3060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 312)));
    // 0x2e3064: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E3064u;
    {
        const bool branch_taken_0x2e3064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3064u;
            // 0x2e3068: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3064) {
            ctx->pc = 0x2E316Cu;
            goto label_2e316c;
        }
    }
    ctx->pc = 0x2E306Cu;
    // 0x2e306c: 0xc050dd8  jal         func_143760
    ctx->pc = 0x2E306Cu;
    SET_GPR_U32(ctx, 31, 0x2E3074u);
    ctx->pc = 0x2E3070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E306Cu;
            // 0x2e3070: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143760u;
    if (runtime->hasFunction(0x143760u)) {
        auto targetFn = runtime->lookupFunction(0x143760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3074u; }
        if (ctx->pc != 0x2E3074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetLight__FPA4_fPA4_f_0x143760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3074u; }
        if (ctx->pc != 0x2E3074u) { return; }
    }
    ctx->pc = 0x2E3074u;
label_2e3074:
    // 0x2e3074: 0xc050df4  jal         func_1437D0
    ctx->pc = 0x2E3074u;
    SET_GPR_U32(ctx, 31, 0x2E307Cu);
    ctx->pc = 0x2E3078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3074u;
            // 0x2e3078: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E307Cu; }
        if (ctx->pc != 0x2E307Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E307Cu; }
        if (ctx->pc != 0x2E307Cu) { return; }
    }
    ctx->pc = 0x2E307Cu;
label_2e307c:
    // 0x2e307c: 0xc7ac01e0  lwc1        $f12, 0x1E0($sp)
    ctx->pc = 0x2e307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3080: 0x3c033fd3  lui         $v1, 0x3FD3
    ctx->pc = 0x2e3080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16339 << 16));
    // 0x2e3084: 0x3c023333  lui         $v0, 0x3333
    ctx->pc = 0x2e3084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13107 << 16));
    // 0x2e3088: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e3088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e308c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e308cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e3090: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e3090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e3094: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2E3094u;
    SET_GPR_U32(ctx, 31, 0x2E309Cu);
    ctx->pc = 0x2E3098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3094u;
            // 0x2e3098: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E309Cu; }
        if (ctx->pc != 0x2E309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E309Cu; }
        if (ctx->pc != 0x2E309Cu) { return; }
    }
    ctx->pc = 0x2E309Cu;
label_2e309c:
    // 0x2e309c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e30a0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x2E30A0u;
    SET_GPR_U32(ctx, 31, 0x2E30A8u);
    ctx->pc = 0x2E30A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30A0u;
            // 0x2e30a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30A8u; }
        if (ctx->pc != 0x2E30A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30A8u; }
        if (ctx->pc != 0x2E30A8u) { return; }
    }
    ctx->pc = 0x2E30A8u;
label_2e30a8:
    // 0x2e30a8: 0xc7ac0220  lwc1        $f12, 0x220($sp)
    ctx->pc = 0x2e30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e30ac: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2E30ACu;
    SET_GPR_U32(ctx, 31, 0x2E30B4u);
    ctx->pc = 0x2E30B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30ACu;
            // 0x2e30b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30B4u; }
        if (ctx->pc != 0x2E30B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30B4u; }
        if (ctx->pc != 0x2E30B4u) { return; }
    }
    ctx->pc = 0x2E30B4u;
label_2e30b4:
    // 0x2e30b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e30b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e30b8: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x2E30B8u;
    SET_GPR_U32(ctx, 31, 0x2E30C0u);
    ctx->pc = 0x2E30BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30B8u;
            // 0x2e30bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30C0u; }
        if (ctx->pc != 0x2E30C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30C0u; }
        if (ctx->pc != 0x2E30C0u) { return; }
    }
    ctx->pc = 0x2E30C0u;
label_2e30c0:
    // 0x2e30c0: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x2E30C0u;
    SET_GPR_U32(ctx, 31, 0x2E30C8u);
    ctx->pc = 0x2E30C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30C0u;
            // 0x2e30c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30C8u; }
        if (ctx->pc != 0x2E30C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30C8u; }
        if (ctx->pc != 0x2E30C8u) { return; }
    }
    ctx->pc = 0x2E30C8u;
label_2e30c8:
    // 0x2e30c8: 0xc7ac01e4  lwc1        $f12, 0x1E4($sp)
    ctx->pc = 0x2e30c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e30cc: 0x3c023fd3  lui         $v0, 0x3FD3
    ctx->pc = 0x2e30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16339 << 16));
    // 0x2e30d0: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x2e30d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e30d4: 0x3c023333  lui         $v0, 0x3333
    ctx->pc = 0x2e30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13107 << 16));
    // 0x2e30d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e30d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e30dc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e30dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e30e0: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x2e30e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2e30e4: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2E30E4u;
    SET_GPR_U32(ctx, 31, 0x2E30ECu);
    ctx->pc = 0x2E30E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30E4u;
            // 0x2e30e8: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30ECu; }
        if (ctx->pc != 0x2E30ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30ECu; }
        if (ctx->pc != 0x2E30ECu) { return; }
    }
    ctx->pc = 0x2E30ECu;
label_2e30ec:
    // 0x2e30ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e30ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e30f0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x2E30F0u;
    SET_GPR_U32(ctx, 31, 0x2E30F8u);
    ctx->pc = 0x2E30F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30F0u;
            // 0x2e30f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30F8u; }
        if (ctx->pc != 0x2E30F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E30F8u; }
        if (ctx->pc != 0x2E30F8u) { return; }
    }
    ctx->pc = 0x2E30F8u;
label_2e30f8:
    // 0x2e30f8: 0xc7ac0224  lwc1        $f12, 0x224($sp)
    ctx->pc = 0x2e30f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e30fc: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2E30FCu;
    SET_GPR_U32(ctx, 31, 0x2E3104u);
    ctx->pc = 0x2E3100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E30FCu;
            // 0x2e3100: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3104u; }
        if (ctx->pc != 0x2E3104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3104u; }
        if (ctx->pc != 0x2E3104u) { return; }
    }
    ctx->pc = 0x2E3104u;
label_2e3104:
    // 0x2e3104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3108: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x2E3108u;
    SET_GPR_U32(ctx, 31, 0x2E3110u);
    ctx->pc = 0x2E310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3108u;
            // 0x2e310c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3110u; }
        if (ctx->pc != 0x2E3110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3110u; }
        if (ctx->pc != 0x2E3110u) { return; }
    }
    ctx->pc = 0x2E3110u;
label_2e3110:
    // 0x2e3110: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x2E3110u;
    SET_GPR_U32(ctx, 31, 0x2E3118u);
    ctx->pc = 0x2E3114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3110u;
            // 0x2e3114: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3118u; }
        if (ctx->pc != 0x2E3118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3118u; }
        if (ctx->pc != 0x2E3118u) { return; }
    }
    ctx->pc = 0x2E3118u;
label_2e3118:
    // 0x2e3118: 0xc7ac01e8  lwc1        $f12, 0x1E8($sp)
    ctx->pc = 0x2e3118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e311c: 0x3c023fd3  lui         $v0, 0x3FD3
    ctx->pc = 0x2e311cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16339 << 16));
    // 0x2e3120: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x2e3120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e3124: 0x3c023333  lui         $v0, 0x3333
    ctx->pc = 0x2e3124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13107 << 16));
    // 0x2e3128: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e3128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e312c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e312cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e3130: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x2e3130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x2e3134: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2E3134u;
    SET_GPR_U32(ctx, 31, 0x2E313Cu);
    ctx->pc = 0x2E3138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3134u;
            // 0x2e3138: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E313Cu; }
        if (ctx->pc != 0x2E313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E313Cu; }
        if (ctx->pc != 0x2E313Cu) { return; }
    }
    ctx->pc = 0x2E313Cu;
label_2e313c:
    // 0x2e313c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e313cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3140: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x2E3140u;
    SET_GPR_U32(ctx, 31, 0x2E3148u);
    ctx->pc = 0x2E3144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3140u;
            // 0x2e3144: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3148u; }
        if (ctx->pc != 0x2E3148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3148u; }
        if (ctx->pc != 0x2E3148u) { return; }
    }
    ctx->pc = 0x2E3148u;
label_2e3148:
    // 0x2e3148: 0xc7ac0228  lwc1        $f12, 0x228($sp)
    ctx->pc = 0x2e3148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e314c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2E314Cu;
    SET_GPR_U32(ctx, 31, 0x2E3154u);
    ctx->pc = 0x2E3150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E314Cu;
            // 0x2e3150: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3154u; }
        if (ctx->pc != 0x2E3154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3154u; }
        if (ctx->pc != 0x2E3154u) { return; }
    }
    ctx->pc = 0x2E3154u;
label_2e3154:
    // 0x2e3154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3158: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x2E3158u;
    SET_GPR_U32(ctx, 31, 0x2E3160u);
    ctx->pc = 0x2E315Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3158u;
            // 0x2e315c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3160u; }
        if (ctx->pc != 0x2E3160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3160u; }
        if (ctx->pc != 0x2E3160u) { return; }
    }
    ctx->pc = 0x2E3160u;
label_2e3160:
    // 0x2e3160: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x2E3160u;
    SET_GPR_U32(ctx, 31, 0x2E3168u);
    ctx->pc = 0x2E3164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3160u;
            // 0x2e3164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3168u; }
        if (ctx->pc != 0x2E3168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3168u; }
        if (ctx->pc != 0x2E3168u) { return; }
    }
    ctx->pc = 0x2E3168u;
label_2e3168:
    // 0x2e3168: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x2e3168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_2e316c:
    // 0x2e316c: 0x0  nop
    ctx->pc = 0x2e316cu;
    // NOP
    // 0x2e3170: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x2e3170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3174: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x2e3174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3178: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e3178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e317c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2e317cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2e3180: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x2e3180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3184: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x2e3184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3188: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e3188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e318c: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x2e318cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x2e3190: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2E3190u;
    SET_GPR_U32(ctx, 31, 0x2E3198u);
    ctx->pc = 0x2E3194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3190u;
            // 0x2e3194: 0xc66c0050  lwc1        $f12, 0x50($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3198u; }
        if (ctx->pc != 0x2E3198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3198u; }
        if (ctx->pc != 0x2E3198u) { return; }
    }
    ctx->pc = 0x2E3198u;
label_2e3198:
    // 0x2e3198: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2e3198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2e319c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e319cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e31a0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2e31a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e31a4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2e31a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e31a8: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2e31a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e31ac: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x2e31acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2e31b0: 0x27a80160  addiu       $t0, $sp, 0x160
    ctx->pc = 0x2e31b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2e31b4: 0x27a90170  addiu       $t1, $sp, 0x170
    ctx->pc = 0x2e31b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2e31b8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2e31b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2e31bc: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x2e31bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e31c0: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2e31c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2e31c4: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x2e31c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e31c8: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x2e31c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e31cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e31ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e31d0: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2e31d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2e31d4: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x2e31d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e31d8: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x2e31d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e31dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e31dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e31e0: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x2E31E0u;
    SET_GPR_U32(ctx, 31, 0x2E31E8u);
    ctx->pc = 0x2E31E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E31E0u;
            // 0x2e31e4: 0xe7a00174  swc1        $f0, 0x174($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (runtime->hasFunction(0x13B590u)) {
        auto targetFn = runtime->lookupFunction(0x13B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E31E8u; }
        if (ctx->pc != 0x2E31E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E31E8u; }
        if (ctx->pc != 0x2E31E8u) { return; }
    }
    ctx->pc = 0x2E31E8u;
label_2e31e8:
    // 0x2e31e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2e31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e31ec: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2e31ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2e31f0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2e31f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e31f4: 0x1440ff0b  bnez        $v0, . + 4 + (-0xF5 << 2)
    ctx->pc = 0x2E31F4u;
    {
        const bool branch_taken_0x2e31f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E31F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E31F4u;
            // 0x2e31f8: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e31f4) {
            ctx->pc = 0x2E2E24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e2e24;
        }
    }
    ctx->pc = 0x2E31FCu;
label_2e31fc:
    // 0x2e31fc: 0x0  nop
    ctx->pc = 0x2e31fcu;
    // NOP
    // 0x2e3200: 0xc04edb0  jal         func_13B6C0
    ctx->pc = 0x2E3200u;
    SET_GPR_U32(ctx, 31, 0x2E3208u);
    ctx->pc = 0x2E3204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3200u;
            // 0x2e3204: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3208u; }
        if (ctx->pc != 0x2E3208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3208u; }
        if (ctx->pc != 0x2E3208u) { return; }
    }
    ctx->pc = 0x2E3208u;
label_2e3208:
    // 0x2e3208: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e3208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e320c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e320cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3210: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e3210u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3214: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e3214u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e3218: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e3218u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e321c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e321cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3220: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3224: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e3224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e322c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e322cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3230: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3230u;
            // 0x2e3234: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3238u;
}
