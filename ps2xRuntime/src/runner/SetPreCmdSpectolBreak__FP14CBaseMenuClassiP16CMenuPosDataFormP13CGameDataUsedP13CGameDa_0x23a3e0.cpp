#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPreCmdSpectolBreak__FP14CBaseMenuClassiP16CMenuPosDataFormP13CGameDataUsedP13CGameDataUsed
// Address: 0x23a3e0 - 0x23a4c4
void SetPreCmdSpectolBreak__FP14CBaseMenuClassiP16CMenuPosDataFormP13CGameDataUsedP13CGameDataUsed_0x23a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPreCmdSpectolBreak__FP14CBaseMenuClassiP16CMenuPosDataFormP13CGameDataUsedP13CGameDataUsed_0x23a3e0");
#endif

    switch (ctx->pc) {
        case 0x23a42cu: goto label_23a42c;
        case 0x23a440u: goto label_23a440;
        case 0x23a458u: goto label_23a458;
        case 0x23a468u: goto label_23a468;
        case 0x23a478u: goto label_23a478;
        default: break;
    }

    ctx->pc = 0x23a3e0u;

    // 0x23a3e0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x23a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x23a3e4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x23a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23a3e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23a3ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23a3f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23a3f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23a3f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23a3f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a3fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23a400: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23a400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23a408: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23a408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23a410: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x23a410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a414: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x23a414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23a418: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x23a418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a41c: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x23a41cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x23a420: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x23a420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x23a424: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x23A424u;
    SET_GPR_U32(ctx, 31, 0x23A42Cu);
    ctx->pc = 0x23A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A424u;
            // 0x23a428: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A42Cu; }
        if (ctx->pc != 0x23A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A42Cu; }
        if (ctx->pc != 0x23A42Cu) { return; }
    }
    ctx->pc = 0x23A42Cu;
label_23a42c:
    // 0x23a42c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23a42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23a430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a434: 0xa7b30062  sh          $s3, 0x62($sp)
    ctx->pc = 0x23a434u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 98), (uint16_t)GPR_U32(ctx, 19));
    // 0x23a438: 0xc0943e4  jal         func_250F90
    ctx->pc = 0x23A438u;
    SET_GPR_U32(ctx, 31, 0x23A440u);
    ctx->pc = 0x23A43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A438u;
            // 0x23a43c: 0xafb200d8  sw          $s2, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250F90u;
    if (runtime->hasFunction(0x250F90u)) {
        auto targetFn = runtime->lookupFunction(0x250F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A440u; }
        if (ctx->pc != 0x23A440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSameAdrressUserData__FP13CGameDataUsedi_0x250f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A440u; }
        if (ctx->pc != 0x23A440u) { return; }
    }
    ctx->pc = 0x23A440u;
label_23a440:
    // 0x23a440: 0xa7a200c8  sh          $v0, 0xC8($sp)
    ctx->pc = 0x23a440u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 200), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23a448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a44c: 0xafb000e0  sw          $s0, 0xE0($sp)
    ctx->pc = 0x23a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 16));
    // 0x23a450: 0xc0943e4  jal         func_250F90
    ctx->pc = 0x23A450u;
    SET_GPR_U32(ctx, 31, 0x23A458u);
    ctx->pc = 0x23A454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A450u;
            // 0x23a454: 0xafb100dc  sw          $s1, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250F90u;
    if (runtime->hasFunction(0x250F90u)) {
        auto targetFn = runtime->lookupFunction(0x250F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A458u; }
        if (ctx->pc != 0x23A458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSameAdrressUserData__FP13CGameDataUsedi_0x250f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A458u; }
        if (ctx->pc != 0x23A458u) { return; }
    }
    ctx->pc = 0x23A458u;
label_23a458:
    // 0x23a458: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x23a458u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a45c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23a45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a460: 0xc08e768  jal         func_239DA0
    ctx->pc = 0x23A460u;
    SET_GPR_U32(ctx, 31, 0x23A468u);
    ctx->pc = 0x23A464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A460u;
            // 0x23a464: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239DA0u;
    if (runtime->hasFunction(0x239DA0u)) {
        auto targetFn = runtime->lookupFunction(0x239DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A468u; }
        if (ctx->pc != 0x23A468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A468u; }
        if (ctx->pc != 0x23A468u) { return; }
    }
    ctx->pc = 0x23A468u;
label_23a468:
    // 0x23a468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23a46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a470: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23A470u;
    SET_GPR_U32(ctx, 31, 0x23A478u);
    ctx->pc = 0x23A474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A470u;
            // 0x23a474: 0xa7829610  sh          $v0, -0x69F0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940176), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A478u; }
        if (ctx->pc != 0x23A478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A478u; }
        if (ctx->pc != 0x23A478u) { return; }
    }
    ctx->pc = 0x23A478u;
label_23a478:
    // 0x23a478: 0xa782960c  sh          $v0, -0x69F4($gp)
    ctx->pc = 0x23a478u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940172), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a47c: 0x8783960c  lh          $v1, -0x69F4($gp)
    ctx->pc = 0x23a47cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940172)));
    // 0x23a480: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x23a480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x23a484: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A484u;
    {
        const bool branch_taken_0x23a484 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A484u;
            // 0x23a488: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a484) {
            ctx->pc = 0x23A490u;
            goto label_23a490;
        }
    }
    ctx->pc = 0x23A48Cu;
    // 0x23a48c: 0xa783960c  sh          $v1, -0x69F4($gp)
    ctx->pc = 0x23a48cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940172), (uint16_t)GPR_U32(ctx, 3));
label_23a490:
    // 0x23a490: 0x82240004  lb          $a0, 0x4($s1)
    ctx->pc = 0x23a490u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23a494: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x23a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x23a498: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A498u;
    {
        const bool branch_taken_0x23a498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x23A49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A498u;
            // 0x23a49c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a498) {
            ctx->pc = 0x23A4A4u;
            goto label_23a4a4;
        }
    }
    ctx->pc = 0x23A4A0u;
    // 0x23a4a0: 0xa783960c  sh          $v1, -0x69F4($gp)
    ctx->pc = 0x23a4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940172), (uint16_t)GPR_U32(ctx, 3));
label_23a4a4:
    // 0x23a4a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23a4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23a4a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23a4a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23a4ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a4acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a4b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a4b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a4b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a4b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x23A4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A4BCu;
            // 0x23a4c0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A4C4u;
}
