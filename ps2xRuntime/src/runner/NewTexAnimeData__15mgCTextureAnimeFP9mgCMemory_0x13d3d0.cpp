#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewTexAnimeData__15mgCTextureAnimeFP9mgCMemory
// Address: 0x13d3d0 - 0x13d44c
void NewTexAnimeData__15mgCTextureAnimeFP9mgCMemory_0x13d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewTexAnimeData__15mgCTextureAnimeFP9mgCMemory_0x13d3d0");
#endif

    switch (ctx->pc) {
        case 0x13d3d0u: goto label_13d3d0;
        case 0x13d3d4u: goto label_13d3d4;
        case 0x13d3d8u: goto label_13d3d8;
        case 0x13d3dcu: goto label_13d3dc;
        case 0x13d3e0u: goto label_13d3e0;
        case 0x13d3e4u: goto label_13d3e4;
        case 0x13d3e8u: goto label_13d3e8;
        case 0x13d3ecu: goto label_13d3ec;
        case 0x13d3f0u: goto label_13d3f0;
        case 0x13d3f4u: goto label_13d3f4;
        case 0x13d3f8u: goto label_13d3f8;
        case 0x13d3fcu: goto label_13d3fc;
        case 0x13d400u: goto label_13d400;
        case 0x13d404u: goto label_13d404;
        case 0x13d408u: goto label_13d408;
        case 0x13d40cu: goto label_13d40c;
        case 0x13d410u: goto label_13d410;
        case 0x13d414u: goto label_13d414;
        case 0x13d418u: goto label_13d418;
        case 0x13d41cu: goto label_13d41c;
        case 0x13d420u: goto label_13d420;
        case 0x13d424u: goto label_13d424;
        case 0x13d428u: goto label_13d428;
        case 0x13d42cu: goto label_13d42c;
        case 0x13d430u: goto label_13d430;
        case 0x13d434u: goto label_13d434;
        case 0x13d438u: goto label_13d438;
        case 0x13d43cu: goto label_13d43c;
        case 0x13d440u: goto label_13d440;
        case 0x13d444u: goto label_13d444;
        case 0x13d448u: goto label_13d448;
        default: break;
    }

    ctx->pc = 0x13d3d0u;

label_13d3d0:
    // 0x13d3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13d3d4:
    // 0x13d3d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13d3d8:
    // 0x13d3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d3dc:
    // 0x13d3dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13d3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13d3e0:
    // 0x13d3e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_13d3e4:
    // 0x13d3e4: 0xc04e748  jal         func_139D20
label_13d3e8:
    if (ctx->pc == 0x13D3E8u) {
        ctx->pc = 0x13D3ECu;
        goto label_13d3ec;
    }
    ctx->pc = 0x13D3E4u;
    SET_GPR_U32(ctx, 31, 0x13D3ECu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3ECu; }
        if (ctx->pc != 0x13D3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3ECu; }
        if (ctx->pc != 0x13D3ECu) { return; }
    }
    ctx->pc = 0x13D3ECu;
label_13d3ec:
    // 0x13d3ec: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x13d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_13d3f0:
    // 0x13d3f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d3f4:
    // 0x13d3f4: 0xc04e638  jal         func_1398E0
label_13d3f8:
    if (ctx->pc == 0x13D3F8u) {
        ctx->pc = 0x13D3FCu;
        goto label_13d3fc;
    }
    ctx->pc = 0x13D3F4u;
    SET_GPR_U32(ctx, 31, 0x13D3FCu);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3FCu; }
        if (ctx->pc != 0x13D3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D3FCu; }
        if (ctx->pc != 0x13D3FCu) { return; }
    }
    ctx->pc = 0x13D3FCu;
label_13d3fc:
    // 0x13d3fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d400:
    // 0x13d400: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_13d404:
    if (ctx->pc == 0x13D404u) {
        ctx->pc = 0x13D408u;
        goto label_13d408;
    }
    ctx->pc = 0x13D400u;
    {
        const bool branch_taken_0x13d400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d400) {
            ctx->pc = 0x13D434u;
            goto label_13d434;
        }
    }
    ctx->pc = 0x13D408u;
label_13d408:
    // 0x13d408: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x13d408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_13d40c:
    // 0x13d40c: 0x244250e8  addiu       $v0, $v0, 0x50E8
    ctx->pc = 0x13d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20712));
label_13d410:
    // 0x13d410: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x13d410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_13d414:
    // 0x13d414: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x13d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_13d418:
    // 0x13d418: 0xc04ef34  jal         func_13BCD0
label_13d41c:
    if (ctx->pc == 0x13D41Cu) {
        ctx->pc = 0x13D420u;
        goto label_13d420;
    }
    ctx->pc = 0x13D418u;
    SET_GPR_U32(ctx, 31, 0x13D420u);
    ctx->pc = 0x13BCD0u;
    if (runtime->hasFunction(0x13BCD0u)) {
        auto targetFn = runtime->lookupFunction(0x13BCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D420u; }
        if (ctx->pc != 0x13D420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15mgCTexAnimeDataFv_0x13bcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D420u; }
        if (ctx->pc != 0x13D420u) { return; }
    }
    ctx->pc = 0x13D420u;
label_13d420:
    // 0x13d420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d424:
    // 0x13d424: 0x8e19003c  lw          $t9, 0x3C($s0)
    ctx->pc = 0x13d424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_13d428:
    // 0x13d428: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13d428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_13d42c:
    // 0x13d42c: 0x320f809  jalr        $t9
label_13d430:
    if (ctx->pc == 0x13D430u) {
        ctx->pc = 0x13D434u;
        goto label_13d434;
    }
    ctx->pc = 0x13D42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D434u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x13D434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13D434u; }
            if (ctx->pc != 0x13D434u) { return; }
        }
        }
    }
    ctx->pc = 0x13D434u;
label_13d434:
    // 0x13d434: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13d434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d438:
    // 0x13d438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13d43c:
    // 0x13d43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d440:
    // 0x13d440: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13d440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13d444:
    // 0x13d444: 0x3e00008  jr          $ra
label_13d448:
    if (ctx->pc == 0x13D448u) {
        ctx->pc = 0x13D44Cu;
        goto label_fallthrough_0x13d444;
    }
    ctx->pc = 0x13D444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13d444:
    ctx->pc = 0x13D44Cu;
}
