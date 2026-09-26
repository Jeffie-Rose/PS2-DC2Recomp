#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEffect__8CEditMapFv
// Address: 0x29c1c0 - 0x29c32c
void DrawEffect__8CEditMapFv_0x29c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEffect__8CEditMapFv_0x29c1c0");
#endif

    switch (ctx->pc) {
        case 0x29c1c0u: goto label_29c1c0;
        case 0x29c1c4u: goto label_29c1c4;
        case 0x29c1c8u: goto label_29c1c8;
        case 0x29c1ccu: goto label_29c1cc;
        case 0x29c1d0u: goto label_29c1d0;
        case 0x29c1d4u: goto label_29c1d4;
        case 0x29c1d8u: goto label_29c1d8;
        case 0x29c1dcu: goto label_29c1dc;
        case 0x29c1e0u: goto label_29c1e0;
        case 0x29c1e4u: goto label_29c1e4;
        case 0x29c1e8u: goto label_29c1e8;
        case 0x29c1ecu: goto label_29c1ec;
        case 0x29c1f0u: goto label_29c1f0;
        case 0x29c1f4u: goto label_29c1f4;
        case 0x29c1f8u: goto label_29c1f8;
        case 0x29c1fcu: goto label_29c1fc;
        case 0x29c200u: goto label_29c200;
        case 0x29c204u: goto label_29c204;
        case 0x29c208u: goto label_29c208;
        case 0x29c20cu: goto label_29c20c;
        case 0x29c210u: goto label_29c210;
        case 0x29c214u: goto label_29c214;
        case 0x29c218u: goto label_29c218;
        case 0x29c21cu: goto label_29c21c;
        case 0x29c220u: goto label_29c220;
        case 0x29c224u: goto label_29c224;
        case 0x29c228u: goto label_29c228;
        case 0x29c22cu: goto label_29c22c;
        case 0x29c230u: goto label_29c230;
        case 0x29c234u: goto label_29c234;
        case 0x29c238u: goto label_29c238;
        case 0x29c23cu: goto label_29c23c;
        case 0x29c240u: goto label_29c240;
        case 0x29c244u: goto label_29c244;
        case 0x29c248u: goto label_29c248;
        case 0x29c24cu: goto label_29c24c;
        case 0x29c250u: goto label_29c250;
        case 0x29c254u: goto label_29c254;
        case 0x29c258u: goto label_29c258;
        case 0x29c25cu: goto label_29c25c;
        case 0x29c260u: goto label_29c260;
        case 0x29c264u: goto label_29c264;
        case 0x29c268u: goto label_29c268;
        case 0x29c26cu: goto label_29c26c;
        case 0x29c270u: goto label_29c270;
        case 0x29c274u: goto label_29c274;
        case 0x29c278u: goto label_29c278;
        case 0x29c27cu: goto label_29c27c;
        case 0x29c280u: goto label_29c280;
        case 0x29c284u: goto label_29c284;
        case 0x29c288u: goto label_29c288;
        case 0x29c28cu: goto label_29c28c;
        case 0x29c290u: goto label_29c290;
        case 0x29c294u: goto label_29c294;
        case 0x29c298u: goto label_29c298;
        case 0x29c29cu: goto label_29c29c;
        case 0x29c2a0u: goto label_29c2a0;
        case 0x29c2a4u: goto label_29c2a4;
        case 0x29c2a8u: goto label_29c2a8;
        case 0x29c2acu: goto label_29c2ac;
        case 0x29c2b0u: goto label_29c2b0;
        case 0x29c2b4u: goto label_29c2b4;
        case 0x29c2b8u: goto label_29c2b8;
        case 0x29c2bcu: goto label_29c2bc;
        case 0x29c2c0u: goto label_29c2c0;
        case 0x29c2c4u: goto label_29c2c4;
        case 0x29c2c8u: goto label_29c2c8;
        case 0x29c2ccu: goto label_29c2cc;
        case 0x29c2d0u: goto label_29c2d0;
        case 0x29c2d4u: goto label_29c2d4;
        case 0x29c2d8u: goto label_29c2d8;
        case 0x29c2dcu: goto label_29c2dc;
        case 0x29c2e0u: goto label_29c2e0;
        case 0x29c2e4u: goto label_29c2e4;
        case 0x29c2e8u: goto label_29c2e8;
        case 0x29c2ecu: goto label_29c2ec;
        case 0x29c2f0u: goto label_29c2f0;
        case 0x29c2f4u: goto label_29c2f4;
        case 0x29c2f8u: goto label_29c2f8;
        case 0x29c2fcu: goto label_29c2fc;
        case 0x29c300u: goto label_29c300;
        case 0x29c304u: goto label_29c304;
        case 0x29c308u: goto label_29c308;
        case 0x29c30cu: goto label_29c30c;
        case 0x29c310u: goto label_29c310;
        case 0x29c314u: goto label_29c314;
        case 0x29c318u: goto label_29c318;
        case 0x29c31cu: goto label_29c31c;
        case 0x29c320u: goto label_29c320;
        case 0x29c324u: goto label_29c324;
        case 0x29c328u: goto label_29c328;
        default: break;
    }

    ctx->pc = 0x29c1c0u;

label_29c1c0:
    // 0x29c1c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29c1c4:
    // 0x29c1c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29c1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29c1c8:
    // 0x29c1c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29c1cc:
    // 0x29c1cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29c1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29c1d0:
    // 0x29c1d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29c1d4:
    // 0x29c1d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29c1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c1d8:
    // 0x29c1d8: 0xc05834c  jal         func_160D30
label_29c1dc:
    if (ctx->pc == 0x29C1DCu) {
        ctx->pc = 0x29C1DCu;
            // 0x29c1dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x29C1E0u;
        goto label_29c1e0;
    }
    ctx->pc = 0x29C1D8u;
    SET_GPR_U32(ctx, 31, 0x29C1E0u);
    ctx->pc = 0x29C1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1D8u;
            // 0x29c1dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1E0u; }
        if (ctx->pc != 0x29C1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1E0u; }
        if (ctx->pc != 0x29C1E0u) { return; }
    }
    ctx->pc = 0x29C1E0u;
label_29c1e0:
    // 0x29c1e0: 0xc0578fc  jal         func_15E3F0
label_29c1e4:
    if (ctx->pc == 0x29C1E4u) {
        ctx->pc = 0x29C1E4u;
            // 0x29c1e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C1E8u;
        goto label_29c1e8;
    }
    ctx->pc = 0x29C1E0u;
    SET_GPR_U32(ctx, 31, 0x29C1E8u);
    ctx->pc = 0x29C1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1E0u;
            // 0x29c1e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E3F0u;
    if (runtime->hasFunction(0x15E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x15E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1E8u; }
        if (ctx->pc != 0x29C1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEffect__4CMapFv_0x15e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1E8u; }
        if (ctx->pc != 0x29C1E8u) { return; }
    }
    ctx->pc = 0x29C1E8u;
label_29c1e8:
    // 0x29c1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29c1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29c1ec:
    // 0x29c1ec: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x29c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_29c1f0:
    // 0x29c1f0: 0xc0575cc  jal         func_15D730
label_29c1f4:
    if (ctx->pc == 0x29C1F4u) {
        ctx->pc = 0x29C1F4u;
            // 0x29c1f4: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x29C1F8u;
        goto label_29c1f8;
    }
    ctx->pc = 0x29C1F0u;
    SET_GPR_U32(ctx, 31, 0x29C1F8u);
    ctx->pc = 0x29C1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1F0u;
            // 0x29c1f4: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1F8u; }
        if (ctx->pc != 0x29C1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C1F8u; }
        if (ctx->pc != 0x29C1F8u) { return; }
    }
    ctx->pc = 0x29C1F8u;
label_29c1f8:
    // 0x29c1f8: 0x8383992c  lb          $v1, -0x66D4($gp)
    ctx->pc = 0x29c1f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940972)));
label_29c1fc:
    // 0x29c1fc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_29c200:
    if (ctx->pc == 0x29C200u) {
        ctx->pc = 0x29C200u;
            // 0x29c200: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C204u;
        goto label_29c204;
    }
    ctx->pc = 0x29C1FCu;
    {
        const bool branch_taken_0x29c1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C1FCu;
            // 0x29c200: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1fc) {
            ctx->pc = 0x29C21Cu;
            goto label_29c21c;
        }
    }
    ctx->pc = 0x29C204u;
label_29c204:
    // 0x29c204: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29c204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29c208:
    // 0x29c208: 0xc04d6d8  jal         func_135B60
label_29c20c:
    if (ctx->pc == 0x29C20Cu) {
        ctx->pc = 0x29C20Cu;
            // 0x29c20c: 0x24845d40  addiu       $a0, $a0, 0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23872));
        ctx->pc = 0x29C210u;
        goto label_29c210;
    }
    ctx->pc = 0x29C208u;
    SET_GPR_U32(ctx, 31, 0x29C210u);
    ctx->pc = 0x29C20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C208u;
            // 0x29c20c: 0x24845d40  addiu       $a0, $a0, 0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C210u; }
        if (ctx->pc != 0x29C210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C210u; }
        if (ctx->pc != 0x29C210u) { return; }
    }
    ctx->pc = 0x29C210u;
label_29c210:
    // 0x29c210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c214:
    // 0x29c214: 0xa383992c  sb          $v1, -0x66D4($gp)
    ctx->pc = 0x29c214u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940972), (uint8_t)GPR_U32(ctx, 3));
label_29c218:
    // 0x29c218: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29c218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c21c:
    // 0x29c21c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29c21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29c220:
    // 0x29c220: 0xac235d88  sw          $v1, 0x5D88($at)
    ctx->pc = 0x29c220u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23944), GPR_U32(ctx, 3));
label_29c224:
    // 0x29c224: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29c224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29c228:
    // 0x29c228: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29c228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29c22c:
    // 0x29c22c: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x29c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
label_29c230:
    // 0x29c230: 0xac245d58  sw          $a0, 0x5D58($at)
    ctx->pc = 0x29c230u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23896), GPR_U32(ctx, 4));
label_29c234:
    // 0x29c234: 0x3463eb85  ori         $v1, $v1, 0xEB85
    ctx->pc = 0x29c234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60293);
label_29c238:
    // 0x29c238: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29c238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29c23c:
    // 0x29c23c: 0xac235dcc  sw          $v1, 0x5DCC($at)
    ctx->pc = 0x29c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24012), GPR_U32(ctx, 3));
label_29c240:
    // 0x29c240: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29c244:
    // 0x29c244: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29c244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29c248:
    // 0x29c248: 0xac235d70  sw          $v1, 0x5D70($at)
    ctx->pc = 0x29c248u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23920), GPR_U32(ctx, 3));
label_29c24c:
    // 0x29c24c: 0x8e500d44  lw          $s0, 0xD44($s2)
    ctx->pc = 0x29c24cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3396)));
label_29c250:
    // 0x29c250: 0x1000002b  b           . + 4 + (0x2B << 2)
label_29c254:
    if (ctx->pc == 0x29C254u) {
        ctx->pc = 0x29C254u;
            // 0x29c254: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C258u;
        goto label_29c258;
    }
    ctx->pc = 0x29C250u;
    {
        const bool branch_taken_0x29c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C250u;
            // 0x29c254: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c250) {
            ctx->pc = 0x29C300u;
            goto label_29c300;
        }
    }
    ctx->pc = 0x29C258u;
label_29c258:
    // 0x29c258: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x29c258u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_29c25c:
    // 0x29c25c: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x29c25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_29c260:
    // 0x29c260: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x29c260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29c264:
    // 0x29c264: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_29c268:
    if (ctx->pc == 0x29C268u) {
        ctx->pc = 0x29C26Cu;
        goto label_29c26c;
    }
    ctx->pc = 0x29C264u;
    {
        const bool branch_taken_0x29c264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c264) {
            ctx->pc = 0x29C2F8u;
            goto label_29c2f8;
        }
    }
    ctx->pc = 0x29C26Cu;
label_29c26c:
    // 0x29c26c: 0x8e030310  lw          $v1, 0x310($s0)
    ctx->pc = 0x29c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
label_29c270:
    // 0x29c270: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_29c274:
    if (ctx->pc == 0x29C274u) {
        ctx->pc = 0x29C274u;
            // 0x29c274: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->pc = 0x29C278u;
        goto label_29c278;
    }
    ctx->pc = 0x29C270u;
    {
        const bool branch_taken_0x29c270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C270u;
            // 0x29c274: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c270) {
            ctx->pc = 0x29C2F8u;
            goto label_29c2f8;
        }
    }
    ctx->pc = 0x29C278u;
label_29c278:
    // 0x29c278: 0xc0a761c  jal         func_29D870
label_29c27c:
    if (ctx->pc == 0x29C27Cu) {
        ctx->pc = 0x29C27Cu;
            // 0x29c27c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29C280u;
        goto label_29c280;
    }
    ctx->pc = 0x29C278u;
    SET_GPR_U32(ctx, 31, 0x29C280u);
    ctx->pc = 0x29C27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C278u;
            // 0x29c27c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C280u; }
        if (ctx->pc != 0x29C280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C280u; }
        if (ctx->pc != 0x29C280u) { return; }
    }
    ctx->pc = 0x29C280u;
label_29c280:
    // 0x29c280: 0xc0a762c  jal         func_29D8B0
label_29c284:
    if (ctx->pc == 0x29C284u) {
        ctx->pc = 0x29C284u;
            // 0x29c284: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->pc = 0x29C288u;
        goto label_29c288;
    }
    ctx->pc = 0x29C280u;
    SET_GPR_U32(ctx, 31, 0x29C288u);
    ctx->pc = 0x29C284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C280u;
            // 0x29c284: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C288u; }
        if (ctx->pc != 0x29C288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C288u; }
        if (ctx->pc != 0x29C288u) { return; }
    }
    ctx->pc = 0x29C288u;
label_29c288:
    // 0x29c288: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_29c28c:
    if (ctx->pc == 0x29C28Cu) {
        ctx->pc = 0x29C28Cu;
            // 0x29c28c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C290u;
        goto label_29c290;
    }
    ctx->pc = 0x29C288u;
    {
        const bool branch_taken_0x29c288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C288u;
            // 0x29c28c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c288) {
            ctx->pc = 0x29C2F8u;
            goto label_29c2f8;
        }
    }
    ctx->pc = 0x29C290u;
label_29c290:
    // 0x29c290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29c294:
    // 0x29c294: 0xc0a71b0  jal         func_29C6C0
label_29c298:
    if (ctx->pc == 0x29C298u) {
        ctx->pc = 0x29C298u;
            // 0x29c298: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x29C29Cu;
        goto label_29c29c;
    }
    ctx->pc = 0x29C294u;
    SET_GPR_U32(ctx, 31, 0x29C29Cu);
    ctx->pc = 0x29C298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C294u;
            // 0x29c298: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C6C0u;
    if (runtime->hasFunction(0x29C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C29Cu; }
        if (ctx->pc != 0x29C29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C29Cu; }
        if (ctx->pc != 0x29C29Cu) { return; }
    }
    ctx->pc = 0x29C29Cu;
label_29c29c:
    // 0x29c29c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_29c2a0:
    if (ctx->pc == 0x29C2A0u) {
        ctx->pc = 0x29C2A0u;
            // 0x29c2a0: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x29C2A4u;
        goto label_29c2a4;
    }
    ctx->pc = 0x29C29Cu;
    {
        const bool branch_taken_0x29c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C29Cu;
            // 0x29c2a0: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c29c) {
            ctx->pc = 0x29C2E8u;
            goto label_29c2e8;
        }
    }
    ctx->pc = 0x29C2A4u;
label_29c2a4:
    // 0x29c2a4: 0xc04db0c  jal         func_136C30
label_29c2a8:
    if (ctx->pc == 0x29C2A8u) {
        ctx->pc = 0x29C2A8u;
            // 0x29c2a8: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x29C2ACu;
        goto label_29c2ac;
    }
    ctx->pc = 0x29C2A4u;
    SET_GPR_U32(ctx, 31, 0x29C2ACu);
    ctx->pc = 0x29C2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2A4u;
            // 0x29c2a8: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2ACu; }
        if (ctx->pc != 0x29C2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2ACu; }
        if (ctx->pc != 0x29C2ACu) { return; }
    }
    ctx->pc = 0x29C2ACu;
label_29c2ac:
    // 0x29c2ac: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x29c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_29c2b0:
    // 0x29c2b0: 0xc05f4b8  jal         func_17D2E0
label_29c2b4:
    if (ctx->pc == 0x29C2B4u) {
        ctx->pc = 0x29C2B4u;
            // 0x29c2b4: 0x26440310  addiu       $a0, $s2, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
        ctx->pc = 0x29C2B8u;
        goto label_29c2b8;
    }
    ctx->pc = 0x29C2B0u;
    SET_GPR_U32(ctx, 31, 0x29C2B8u);
    ctx->pc = 0x29C2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2B0u;
            // 0x29c2b4: 0x26440310  addiu       $a0, $s2, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D2E0u;
    if (runtime->hasFunction(0x17D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x17D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2B8u; }
        if (ctx->pc != 0x29C2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffectVisual__11CEffectListFi_0x17d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2B8u; }
        if (ctx->pc != 0x29C2B8u) { return; }
    }
    ctx->pc = 0x29C2B8u;
label_29c2b8:
    // 0x29c2b8: 0x8e790070  lw          $t9, 0x70($s3)
    ctx->pc = 0x29c2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_29c2bc:
    // 0x29c2bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29c2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c2c0:
    // 0x29c2c0: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x29c2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_29c2c4:
    // 0x29c2c4: 0x320f809  jalr        $t9
label_29c2c8:
    if (ctx->pc == 0x29C2C8u) {
        ctx->pc = 0x29C2C8u;
            // 0x29c2c8: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x29C2CCu;
        goto label_29c2cc;
    }
    ctx->pc = 0x29C2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C2CCu);
        ctx->pc = 0x29C2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2C4u;
            // 0x29c2c8: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29C2CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29C2CCu; }
            if (ctx->pc != 0x29C2CCu) { return; }
        }
        }
    }
    ctx->pc = 0x29C2CCu;
label_29c2cc:
    // 0x29c2cc: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x29c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
label_29c2d0:
    // 0x29c2d0: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x29c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_29c2d4:
    // 0x29c2d4: 0x24425d40  addiu       $v0, $v0, 0x5D40
    ctx->pc = 0x29c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23872));
label_29c2d8:
    // 0x29c2d8: 0xc050bf4  jal         func_142FD0
label_29c2dc:
    if (ctx->pc == 0x29C2DCu) {
        ctx->pc = 0x29C2DCu;
            // 0x29c2dc: 0xae620164  sw          $v0, 0x164($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 356), GPR_U32(ctx, 2));
        ctx->pc = 0x29C2E0u;
        goto label_29c2e0;
    }
    ctx->pc = 0x29C2D8u;
    SET_GPR_U32(ctx, 31, 0x29C2E0u);
    ctx->pc = 0x29C2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2D8u;
            // 0x29c2dc: 0xae620164  sw          $v0, 0x164($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2E0u; }
        if (ctx->pc != 0x29C2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2E0u; }
        if (ctx->pc != 0x29C2E0u) { return; }
    }
    ctx->pc = 0x29C2E0u;
label_29c2e0:
    // 0x29c2e0: 0xc04db18  jal         func_136C60
label_29c2e4:
    if (ctx->pc == 0x29C2E4u) {
        ctx->pc = 0x29C2E4u;
            // 0x29c2e4: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x29C2E8u;
        goto label_29c2e8;
    }
    ctx->pc = 0x29C2E0u;
    SET_GPR_U32(ctx, 31, 0x29C2E8u);
    ctx->pc = 0x29C2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2E0u;
            // 0x29c2e4: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2E8u; }
        if (ctx->pc != 0x29C2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2E8u; }
        if (ctx->pc != 0x29C2E8u) { return; }
    }
    ctx->pc = 0x29C2E8u;
label_29c2e8:
    // 0x29c2e8: 0xc0a762c  jal         func_29D8B0
label_29c2ec:
    if (ctx->pc == 0x29C2ECu) {
        ctx->pc = 0x29C2ECu;
            // 0x29c2ec: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->pc = 0x29C2F0u;
        goto label_29c2f0;
    }
    ctx->pc = 0x29C2E8u;
    SET_GPR_U32(ctx, 31, 0x29C2F0u);
    ctx->pc = 0x29C2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2E8u;
            // 0x29c2ec: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2F0u; }
        if (ctx->pc != 0x29C2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C2F0u; }
        if (ctx->pc != 0x29C2F0u) { return; }
    }
    ctx->pc = 0x29C2F0u;
label_29c2f0:
    // 0x29c2f0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_29c2f4:
    if (ctx->pc == 0x29C2F4u) {
        ctx->pc = 0x29C2F4u;
            // 0x29c2f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29C2F8u;
        goto label_29c2f8;
    }
    ctx->pc = 0x29C2F0u;
    {
        const bool branch_taken_0x29c2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C2F0u;
            // 0x29c2f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2f0) {
            ctx->pc = 0x29C290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c290;
        }
    }
    ctx->pc = 0x29C2F8u;
label_29c2f8:
    // 0x29c2f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29c2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29c2fc:
    // 0x29c2fc: 0x26100330  addiu       $s0, $s0, 0x330
    ctx->pc = 0x29c2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_29c300:
    // 0x29c300: 0x8e430d40  lw          $v1, 0xD40($s2)
    ctx->pc = 0x29c300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3392)));
label_29c304:
    // 0x29c304: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x29c304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29c308:
    // 0x29c308: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_29c30c:
    if (ctx->pc == 0x29C30Cu) {
        ctx->pc = 0x29C310u;
        goto label_29c310;
    }
    ctx->pc = 0x29C308u;
    {
        const bool branch_taken_0x29c308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c308) {
            ctx->pc = 0x29C258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c258;
        }
    }
    ctx->pc = 0x29C310u;
label_29c310:
    // 0x29c310: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29c310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29c314:
    // 0x29c314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29c314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29c318:
    // 0x29c318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29c31c:
    // 0x29c31c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c31cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c320:
    // 0x29c320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c324:
    // 0x29c324: 0x3e00008  jr          $ra
label_29c328:
    if (ctx->pc == 0x29C328u) {
        ctx->pc = 0x29C328u;
            // 0x29c328: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x29C32Cu;
        goto label_fallthrough_0x29c324;
    }
    ctx->pc = 0x29C324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C324u;
            // 0x29c328: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29c324:
    ctx->pc = 0x29C32Cu;
}
