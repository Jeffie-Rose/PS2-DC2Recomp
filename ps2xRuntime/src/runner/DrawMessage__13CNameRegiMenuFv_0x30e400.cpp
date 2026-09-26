#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMessage__13CNameRegiMenuFv
// Address: 0x30e400 - 0x30e4b4
void DrawMessage__13CNameRegiMenuFv_0x30e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMessage__13CNameRegiMenuFv_0x30e400");
#endif

    switch (ctx->pc) {
        case 0x30e424u: goto label_30e424;
        case 0x30e42cu: goto label_30e42c;
        case 0x30e438u: goto label_30e438;
        case 0x30e454u: goto label_30e454;
        case 0x30e460u: goto label_30e460;
        case 0x30e498u: goto label_30e498;
        case 0x30e4a4u: goto label_30e4a4;
        default: break;
    }

    ctx->pc = 0x30e400u;

    // 0x30e400: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x30e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x30e404: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30e404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30e408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30e40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e410: 0x8c22ca58  lw          $v0, -0x35A8($at)
    ctx->pc = 0x30e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x30e414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30e414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e418: 0x8c451b2c  lw          $a1, 0x1B2C($v0)
    ctx->pc = 0x30e418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6956)));
    // 0x30e41c: 0xc08878c  jal         func_221E30
    ctx->pc = 0x30E41Cu;
    SET_GPR_U32(ctx, 31, 0x30E424u);
    ctx->pc = 0x30E420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E41Cu;
            // 0x30e420: 0x2784a1dc  addiu       $a0, $gp, -0x5E24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E424u; }
        if (ctx->pc != 0x30E424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E424u; }
        if (ctx->pc != 0x30E424u) { return; }
    }
    ctx->pc = 0x30E424u;
label_30e424:
    // 0x30e424: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x30E424u;
    SET_GPR_U32(ctx, 31, 0x30E42Cu);
    ctx->pc = 0x30E428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E424u;
            // 0x30e428: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E42Cu; }
        if (ctx->pc != 0x30E42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E42Cu; }
        if (ctx->pc != 0x30E42Cu) { return; }
    }
    ctx->pc = 0x30E42Cu;
label_30e42c:
    // 0x30e42c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e430: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x30E430u;
    SET_GPR_U32(ctx, 31, 0x30E438u);
    ctx->pc = 0x30E434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E430u;
            // 0x30e434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E438u; }
        if (ctx->pc != 0x30E438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E438u; }
        if (ctx->pc != 0x30E438u) { return; }
    }
    ctx->pc = 0x30E438u;
label_30e438:
    // 0x30e438: 0xdf828638  ld          $v0, -0x79C8($gp)
    ctx->pc = 0x30e438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936120)));
    // 0x30e43c: 0x27a60138  addiu       $a2, $sp, 0x138
    ctx->pc = 0x30e43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x30e440: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e444: 0x26050140  addiu       $a1, $s0, 0x140
    ctx->pc = 0x30e444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x30e448: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x30e448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30e44c: 0xc0b5d0c  jal         func_2D7430
    ctx->pc = 0x30E44Cu;
    SET_GPR_U32(ctx, 31, 0x30E454u);
    ctx->pc = 0x30E450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E44Cu;
            // 0x30e450: 0xfcc20000  sd          $v0, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7430u;
    if (runtime->hasFunction(0x2D7430u)) {
        auto targetFn = runtime->lookupFunction(0x2D7430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E454u; }
        if (ctx->pc != 0x30E454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawVersatileWin_1__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E454u; }
        if (ctx->pc != 0x30E454u) { return; }
    }
    ctx->pc = 0x30E454u;
label_30e454:
    // 0x30e454: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30e454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30e458: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x30E458u;
    SET_GPR_U32(ctx, 31, 0x30E460u);
    ctx->pc = 0x30E45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E458u;
            // 0x30e45c: 0x8c24ca58  lw          $a0, -0x35A8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E460u; }
        if (ctx->pc != 0x30E460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E460u; }
        if (ctx->pc != 0x30E460u) { return; }
    }
    ctx->pc = 0x30E460u;
label_30e460:
    // 0x30e460: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x30e460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x30e464: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30E464u;
    {
        const bool branch_taken_0x30e464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e464) {
            ctx->pc = 0x30E4A4u;
            goto label_30e4a4;
        }
    }
    ctx->pc = 0x30E46Cu;
    // 0x30e46c: 0xc7818780  lwc1        $f1, -0x7880($gp)
    ctx->pc = 0x30e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e470: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x30e470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30e474: 0xc7808784  lwc1        $f0, -0x787C($gp)
    ctx->pc = 0x30e474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30e478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e47c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30e47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30e480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e484: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30e484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e488: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30e488u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x30e48c: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x30e48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x30e490: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x30E490u;
    SET_GPR_U32(ctx, 31, 0x30E498u);
    ctx->pc = 0x30E494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E490u;
            // 0x30e494: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E498u; }
        if (ctx->pc != 0x30E498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E498u; }
        if (ctx->pc != 0x30E498u) { return; }
    }
    ctx->pc = 0x30E498u;
label_30e498:
    // 0x30e498: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x30e498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x30e49c: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x30E49Cu;
    SET_GPR_U32(ctx, 31, 0x30E4A4u);
    ctx->pc = 0x30E4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E49Cu;
            // 0x30e4a0: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E4A4u; }
        if (ctx->pc != 0x30E4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E4A4u; }
        if (ctx->pc != 0x30E4A4u) { return; }
    }
    ctx->pc = 0x30E4A4u;
label_30e4a4:
    // 0x30e4a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30e4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x30E4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4ACu;
            // 0x30e4b0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E4B4u;
}
