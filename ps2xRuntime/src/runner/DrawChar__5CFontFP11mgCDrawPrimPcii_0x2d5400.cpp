#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawChar__5CFontFP11mgCDrawPrimPcii
// Address: 0x2d5400 - 0x2d5470
void DrawChar__5CFontFP11mgCDrawPrimPcii_0x2d5400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawChar__5CFontFP11mgCDrawPrimPcii_0x2d5400");
#endif

    switch (ctx->pc) {
        case 0x2d5430u: goto label_2d5430;
        case 0x2d5454u: goto label_2d5454;
        default: break;
    }

    ctx->pc = 0x2d5400u;

    // 0x2d5400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d5400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d5404: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d5404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d5408: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d5408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d540c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d5410: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d5410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5414: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5418: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d5418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d541c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5420: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d5420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5424: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2d5424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5428: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x2D5428u;
    SET_GPR_U32(ctx, 31, 0x2D5430u);
    ctx->pc = 0x2D542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5428u;
            // 0x2d542c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5430u; }
        if (ctx->pc != 0x2D5430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5430u; }
        if (ctx->pc != 0x2D5430u) { return; }
    }
    ctx->pc = 0x2D5430u;
label_2d5430:
    // 0x2d5430: 0x926b0090  lbu         $t3, 0x90($s3)
    ctx->pc = 0x2d5430u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x2d5434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d5434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5438: 0xde6a0088  ld          $t2, 0x88($s3)
    ctx->pc = 0x2d5438u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2d543c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d543cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5440: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2d5440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5444: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d5444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5448: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d5448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d544c: 0xc0b547c  jal         func_2D51F0
    ctx->pc = 0x2D544Cu;
    SET_GPR_U32(ctx, 31, 0x2D5454u);
    ctx->pc = 0x2D5450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D544Cu;
            // 0x2d5450: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D51F0u;
    if (runtime->hasFunction(0x2D51F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D51F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5454u; }
        if (ctx->pc != 0x2D5454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChar__5CFontFP11mgCDrawPrimiiii10RGBAQ_TYPEUc_0x2d51f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5454u; }
        if (ctx->pc != 0x2D5454u) { return; }
    }
    ctx->pc = 0x2D5454u;
label_2d5454:
    // 0x2d5454: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d5454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5458: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d5458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d545c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d545cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5468: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D546Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5468u;
            // 0x2d546c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5470u;
}
