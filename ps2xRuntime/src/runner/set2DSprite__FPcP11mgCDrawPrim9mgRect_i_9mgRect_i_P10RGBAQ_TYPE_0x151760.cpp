#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: set2DSprite__FPcP11mgCDrawPrim9mgRect<i>9mgRect<i>P10RGBAQ_TYPE
// Address: 0x151760 - 0x1517ec
void set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760");
#endif

    switch (ctx->pc) {
        case 0x1517acu: goto label_1517ac;
        case 0x1517b8u: goto label_1517b8;
        case 0x1517ccu: goto label_1517cc;
        case 0x1517d4u: goto label_1517d4;
        default: break;
    }

    ctx->pc = 0x151760u;

    // 0x151760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x151760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x151764: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x151764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x151768: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15176c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151770: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x151770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151774: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151778: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x151778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15177c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x15177cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x151780: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x151780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151784: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151788: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x151788u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x15178c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x15178cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x151790: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x151790u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x151794: 0x8f838904  lw          $v1, -0x76FC($gp)
    ctx->pc = 0x151794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
    // 0x151798: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x151798u;
    {
        const bool branch_taken_0x151798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15179Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151798u;
            // 0x15179c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151798) {
            ctx->pc = 0x1517D4u;
            goto label_1517d4;
        }
    }
    ctx->pc = 0x1517A0u;
    // 0x1517a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1517a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517a4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1517A4u;
    SET_GPR_U32(ctx, 31, 0x1517ACu);
    ctx->pc = 0x1517A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1517A4u;
            // 0x1517a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1517ACu; }
        if (ctx->pc != 0x1517ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1517ACu; }
        if (ctx->pc != 0x1517ACu) { return; }
    }
    ctx->pc = 0x1517ACu;
label_1517ac:
    // 0x1517ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1517acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517b0: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x1517B0u;
    SET_GPR_U32(ctx, 31, 0x1517B8u);
    ctx->pc = 0x1517B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1517B0u;
            // 0x1517b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (runtime->hasFunction(0x2D5470u)) {
        auto targetFn = runtime->lookupFunction(0x2D5470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1517B8u; }
        if (ctx->pc != 0x1517B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FPcP11mgCDrawPrim_0x2d5470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1517B8u; }
        if (ctx->pc != 0x1517B8u) { return; }
    }
    ctx->pc = 0x1517B8u;
label_1517b8:
    // 0x1517b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1517b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1517bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1517c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1517c4: 0xc054590  jal         func_151640
    ctx->pc = 0x1517C4u;
    SET_GPR_U32(ctx, 31, 0x1517CCu);
    ctx->pc = 0x1517C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1517C4u;
            // 0x1517c8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (runtime->hasFunction(0x151640u)) {
        auto targetFn = runtime->lookupFunction(0x151640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1517CCu; }
        if (ctx->pc != 0x1517CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasy__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1517CCu; }
        if (ctx->pc != 0x1517CCu) { return; }
    }
    ctx->pc = 0x1517CCu;
label_1517cc:
    // 0x1517cc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1517CCu;
    SET_GPR_U32(ctx, 31, 0x1517D4u);
    ctx->pc = 0x1517D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1517CCu;
            // 0x1517d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1517D4u; }
        if (ctx->pc != 0x1517D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1517D4u; }
        if (ctx->pc != 0x1517D4u) { return; }
    }
    ctx->pc = 0x1517D4u;
label_1517d4:
    // 0x1517d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1517d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1517d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1517d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1517dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1517dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1517e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1517e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1517e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1517E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1517E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1517E4u;
            // 0x1517e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1517ECu;
}
