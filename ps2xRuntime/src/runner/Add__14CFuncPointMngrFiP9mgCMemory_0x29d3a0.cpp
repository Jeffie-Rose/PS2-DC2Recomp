#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Add__14CFuncPointMngrFiP9mgCMemory
// Address: 0x29d3a0 - 0x29d440
void Add__14CFuncPointMngrFiP9mgCMemory_0x29d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add__14CFuncPointMngrFiP9mgCMemory_0x29d3a0");
#endif

    switch (ctx->pc) {
        case 0x29d3a0u: goto label_29d3a0;
        case 0x29d3a4u: goto label_29d3a4;
        case 0x29d3a8u: goto label_29d3a8;
        case 0x29d3acu: goto label_29d3ac;
        case 0x29d3b0u: goto label_29d3b0;
        case 0x29d3b4u: goto label_29d3b4;
        case 0x29d3b8u: goto label_29d3b8;
        case 0x29d3bcu: goto label_29d3bc;
        case 0x29d3c0u: goto label_29d3c0;
        case 0x29d3c4u: goto label_29d3c4;
        case 0x29d3c8u: goto label_29d3c8;
        case 0x29d3ccu: goto label_29d3cc;
        case 0x29d3d0u: goto label_29d3d0;
        case 0x29d3d4u: goto label_29d3d4;
        case 0x29d3d8u: goto label_29d3d8;
        case 0x29d3dcu: goto label_29d3dc;
        case 0x29d3e0u: goto label_29d3e0;
        case 0x29d3e4u: goto label_29d3e4;
        case 0x29d3e8u: goto label_29d3e8;
        case 0x29d3ecu: goto label_29d3ec;
        case 0x29d3f0u: goto label_29d3f0;
        case 0x29d3f4u: goto label_29d3f4;
        case 0x29d3f8u: goto label_29d3f8;
        case 0x29d3fcu: goto label_29d3fc;
        case 0x29d400u: goto label_29d400;
        case 0x29d404u: goto label_29d404;
        case 0x29d408u: goto label_29d408;
        case 0x29d40cu: goto label_29d40c;
        case 0x29d410u: goto label_29d410;
        case 0x29d414u: goto label_29d414;
        case 0x29d418u: goto label_29d418;
        case 0x29d41cu: goto label_29d41c;
        case 0x29d420u: goto label_29d420;
        case 0x29d424u: goto label_29d424;
        case 0x29d428u: goto label_29d428;
        case 0x29d42cu: goto label_29d42c;
        case 0x29d430u: goto label_29d430;
        case 0x29d434u: goto label_29d434;
        case 0x29d438u: goto label_29d438;
        case 0x29d43cu: goto label_29d43c;
        default: break;
    }

    ctx->pc = 0x29d3a0u;

label_29d3a0:
    // 0x29d3a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29d3a4:
    // 0x29d3a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29d3a8:
    // 0x29d3a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29d3ac:
    // 0x29d3ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29d3b0:
    // 0x29d3b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29d3b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d3b4:
    // 0x29d3b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29d3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29d3b8:
    // 0x29d3b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x29d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29d3bc:
    // 0x29d3bc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x29d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_29d3c0:
    // 0x29d3c0: 0xc04e748  jal         func_139D20
label_29d3c4:
    if (ctx->pc == 0x29D3C4u) {
        ctx->pc = 0x29D3C4u;
            // 0x29d3c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x29D3C8u;
        goto label_29d3c8;
    }
    ctx->pc = 0x29D3C0u;
    SET_GPR_U32(ctx, 31, 0x29D3C8u);
    ctx->pc = 0x29D3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D3C0u;
            // 0x29d3c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3C8u; }
        if (ctx->pc != 0x29D3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3C8u; }
        if (ctx->pc != 0x29D3C8u) { return; }
    }
    ctx->pc = 0x29D3C8u;
label_29d3c8:
    // 0x29d3c8: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x29d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_29d3cc:
    // 0x29d3cc: 0xc04e638  jal         func_1398E0
label_29d3d0:
    if (ctx->pc == 0x29D3D0u) {
        ctx->pc = 0x29D3D0u;
            // 0x29d3d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29D3D4u;
        goto label_29d3d4;
    }
    ctx->pc = 0x29D3CCu;
    SET_GPR_U32(ctx, 31, 0x29D3D4u);
    ctx->pc = 0x29D3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D3CCu;
            // 0x29d3d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3D4u; }
        if (ctx->pc != 0x29D3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3D4u; }
        if (ctx->pc != 0x29D3D4u) { return; }
    }
    ctx->pc = 0x29D3D4u;
label_29d3d4:
    // 0x29d3d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_29d3d8:
    if (ctx->pc == 0x29D3D8u) {
        ctx->pc = 0x29D3D8u;
            // 0x29d3d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29D3DCu;
        goto label_29d3dc;
    }
    ctx->pc = 0x29D3D4u;
    {
        const bool branch_taken_0x29d3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D3D4u;
            // 0x29d3d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3d4) {
            ctx->pc = 0x29D400u;
            goto label_29d400;
        }
    }
    ctx->pc = 0x29D3DCu;
label_29d3dc:
    // 0x29d3dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_29d3e0:
    // 0x29d3e0: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x29d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_29d3e4:
    // 0x29d3e4: 0x24426220  addiu       $v0, $v0, 0x6220
    ctx->pc = 0x29d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25120));
label_29d3e8:
    // 0x29d3e8: 0xc04d924  jal         func_136490
label_29d3ec:
    if (ctx->pc == 0x29D3ECu) {
        ctx->pc = 0x29D3ECu;
            // 0x29d3ec: 0xae0201d0  sw          $v0, 0x1D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
        ctx->pc = 0x29D3F0u;
        goto label_29d3f0;
    }
    ctx->pc = 0x29D3E8u;
    SET_GPR_U32(ctx, 31, 0x29D3F0u);
    ctx->pc = 0x29D3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D3E8u;
            // 0x29d3ec: 0xae0201d0  sw          $v0, 0x1D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3F0u; }
        if (ctx->pc != 0x29D3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D3F0u; }
        if (ctx->pc != 0x29D3F0u) { return; }
    }
    ctx->pc = 0x29D3F0u;
label_29d3f0:
    // 0x29d3f0: 0x8e1901d0  lw          $t9, 0x1D0($s0)
    ctx->pc = 0x29d3f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_29d3f4:
    // 0x29d3f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29d3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29d3f8:
    // 0x29d3f8: 0x320f809  jalr        $t9
label_29d3fc:
    if (ctx->pc == 0x29D3FCu) {
        ctx->pc = 0x29D3FCu;
            // 0x29d3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29D400u;
        goto label_29d400;
    }
    ctx->pc = 0x29D3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D400u);
        ctx->pc = 0x29D3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D3F8u;
            // 0x29d3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29D400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29D400u; }
            if (ctx->pc != 0x29D400u) { return; }
        }
        }
    }
    ctx->pc = 0x29D400u;
label_29d400:
    // 0x29d400: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_29d404:
    if (ctx->pc == 0x29D404u) {
        ctx->pc = 0x29D404u;
            // 0x29d404: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x29D408u;
        goto label_29d408;
    }
    ctx->pc = 0x29D400u;
    {
        const bool branch_taken_0x29d400 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D400u;
            // 0x29d404: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d400) {
            ctx->pc = 0x29D410u;
            goto label_29d410;
        }
    }
    ctx->pc = 0x29D408u;
label_29d408:
    // 0x29d408: 0x10000007  b           . + 4 + (0x7 << 2)
label_29d40c:
    if (ctx->pc == 0x29D40Cu) {
        ctx->pc = 0x29D40Cu;
            // 0x29d40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29D410u;
        goto label_29d410;
    }
    ctx->pc = 0x29D408u;
    {
        const bool branch_taken_0x29d408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D408u;
            // 0x29d40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d408) {
            ctx->pc = 0x29D428u;
            goto label_29d428;
        }
    }
    ctx->pc = 0x29D410u;
label_29d410:
    // 0x29d410: 0xc0a7190  jal         func_29C640
label_29d414:
    if (ctx->pc == 0x29D414u) {
        ctx->pc = 0x29D418u;
        goto label_29d418;
    }
    ctx->pc = 0x29D410u;
    SET_GPR_U32(ctx, 31, 0x29D418u);
    ctx->pc = 0x29C640u;
    if (runtime->hasFunction(0x29C640u)) {
        auto targetFn = runtime->lookupFunction(0x29C640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D418u; }
        if (ctx->pc != 0x29D418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFuncPointFv_0x29c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D418u; }
        if (ctx->pc != 0x29D418u) { return; }
    }
    ctx->pc = 0x29D418u;
label_29d418:
    // 0x29d418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29d418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29d41c:
    // 0x29d41c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29d41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d420:
    // 0x29d420: 0xc0a7514  jal         func_29D450
label_29d424:
    if (ctx->pc == 0x29D424u) {
        ctx->pc = 0x29D424u;
            // 0x29d424: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29D428u;
        goto label_29d428;
    }
    ctx->pc = 0x29D420u;
    SET_GPR_U32(ctx, 31, 0x29D428u);
    ctx->pc = 0x29D424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D420u;
            // 0x29d424: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D450u;
    if (runtime->hasFunction(0x29D450u)) {
        auto targetFn = runtime->lookupFunction(0x29D450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D428u; }
        if (ctx->pc != 0x29D428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__14CFuncPointMngrFiP19CList_10CFuncPoint__0x29d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D428u; }
        if (ctx->pc != 0x29D428u) { return; }
    }
    ctx->pc = 0x29D428u;
label_29d428:
    // 0x29d428: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29d428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29d42c:
    // 0x29d42c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29d430:
    // 0x29d430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d434:
    // 0x29d434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d438:
    // 0x29d438: 0x3e00008  jr          $ra
label_29d43c:
    if (ctx->pc == 0x29D43Cu) {
        ctx->pc = 0x29D43Cu;
            // 0x29d43c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x29D440u;
        goto label_fallthrough_0x29d438;
    }
    ctx->pc = 0x29D438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D438u;
            // 0x29d43c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29d438:
    ctx->pc = 0x29D440u;
}
