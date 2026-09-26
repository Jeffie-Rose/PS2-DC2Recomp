#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NormalGetNextRotY__9CAquaFishFv
// Address: 0x20d7f0 - 0x20d854
void NormalGetNextRotY__9CAquaFishFv_0x20d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NormalGetNextRotY__9CAquaFishFv_0x20d7f0");
#endif

    switch (ctx->pc) {
        case 0x20d7f0u: goto label_20d7f0;
        case 0x20d7f4u: goto label_20d7f4;
        case 0x20d7f8u: goto label_20d7f8;
        case 0x20d7fcu: goto label_20d7fc;
        case 0x20d800u: goto label_20d800;
        case 0x20d804u: goto label_20d804;
        case 0x20d808u: goto label_20d808;
        case 0x20d80cu: goto label_20d80c;
        case 0x20d810u: goto label_20d810;
        case 0x20d814u: goto label_20d814;
        case 0x20d818u: goto label_20d818;
        case 0x20d81cu: goto label_20d81c;
        case 0x20d820u: goto label_20d820;
        case 0x20d824u: goto label_20d824;
        case 0x20d828u: goto label_20d828;
        case 0x20d82cu: goto label_20d82c;
        case 0x20d830u: goto label_20d830;
        case 0x20d834u: goto label_20d834;
        case 0x20d838u: goto label_20d838;
        case 0x20d83cu: goto label_20d83c;
        case 0x20d840u: goto label_20d840;
        case 0x20d844u: goto label_20d844;
        case 0x20d848u: goto label_20d848;
        case 0x20d84cu: goto label_20d84c;
        case 0x20d850u: goto label_20d850;
        default: break;
    }

    ctx->pc = 0x20d7f0u;

label_20d7f0:
    // 0x20d7f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20d7f4:
    // 0x20d7f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20d7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20d7f8:
    // 0x20d7f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d7fc:
    // 0x20d7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20d800:
    // 0x20d800: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20d800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20d804:
    // 0x20d804: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20d804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20d808:
    // 0x20d808: 0x320f809  jalr        $t9
label_20d80c:
    if (ctx->pc == 0x20D80Cu) {
        ctx->pc = 0x20D80Cu;
            // 0x20d80c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D810u;
        goto label_20d810;
    }
    ctx->pc = 0x20D808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D810u);
        ctx->pc = 0x20D80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D808u;
            // 0x20d80c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D810u; }
            if (ctx->pc != 0x20D810u) { return; }
        }
        }
    }
    ctx->pc = 0x20D810u;
label_20d810:
    // 0x20d810: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20d810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20d814:
    // 0x20d814: 0x26050660  addiu       $a1, $s0, 0x660
    ctx->pc = 0x20d814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
label_20d818:
    // 0x20d818: 0xc041c3e  jal         func_1070F8
label_20d81c:
    if (ctx->pc == 0x20D81Cu) {
        ctx->pc = 0x20D81Cu;
            // 0x20d81c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x20D820u;
        goto label_20d820;
    }
    ctx->pc = 0x20D818u;
    SET_GPR_U32(ctx, 31, 0x20D820u);
    ctx->pc = 0x20D81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D818u;
            // 0x20d81c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D820u; }
        if (ctx->pc != 0x20D820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D820u; }
        if (ctx->pc != 0x20D820u) { return; }
    }
    ctx->pc = 0x20D820u;
label_20d820:
    // 0x20d820: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20d820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20d824:
    // 0x20d824: 0xc041be0  jal         func_106F80
label_20d828:
    if (ctx->pc == 0x20D828u) {
        ctx->pc = 0x20D828u;
            // 0x20d828: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D82Cu;
        goto label_20d82c;
    }
    ctx->pc = 0x20D824u;
    SET_GPR_U32(ctx, 31, 0x20D82Cu);
    ctx->pc = 0x20D828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D824u;
            // 0x20d828: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D82Cu; }
        if (ctx->pc != 0x20D82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D82Cu; }
        if (ctx->pc != 0x20D82Cu) { return; }
    }
    ctx->pc = 0x20D82Cu;
label_20d82c:
    // 0x20d82c: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x20d82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20d830:
    // 0x20d830: 0xc047c76  jal         func_11F1D8
label_20d834:
    if (ctx->pc == 0x20D834u) {
        ctx->pc = 0x20D834u;
            // 0x20d834: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20D838u;
        goto label_20d838;
    }
    ctx->pc = 0x20D830u;
    SET_GPR_U32(ctx, 31, 0x20D838u);
    ctx->pc = 0x20D834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D830u;
            // 0x20d834: 0xc7ac0020  lwc1        $f12, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D838u; }
        if (ctx->pc != 0x20D838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D838u; }
        if (ctx->pc != 0x20D838u) { return; }
    }
    ctx->pc = 0x20D838u;
label_20d838:
    // 0x20d838: 0xc04c374  jal         func_130DD0
label_20d83c:
    if (ctx->pc == 0x20D83Cu) {
        ctx->pc = 0x20D83Cu;
            // 0x20d83c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20D840u;
        goto label_20d840;
    }
    ctx->pc = 0x20D838u;
    SET_GPR_U32(ctx, 31, 0x20D840u);
    ctx->pc = 0x20D83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D838u;
            // 0x20d83c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D840u; }
        if (ctx->pc != 0x20D840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D840u; }
        if (ctx->pc != 0x20D840u) { return; }
    }
    ctx->pc = 0x20D840u;
label_20d840:
    // 0x20d840: 0xe6000684  swc1        $f0, 0x684($s0)
    ctx->pc = 0x20d840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1668), bits); }
label_20d844:
    // 0x20d844: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20d848:
    // 0x20d848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20d84c:
    // 0x20d84c: 0x3e00008  jr          $ra
label_20d850:
    if (ctx->pc == 0x20D850u) {
        ctx->pc = 0x20D850u;
            // 0x20d850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x20D854u;
        goto label_fallthrough_0x20d84c;
    }
    ctx->pc = 0x20D84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D84Cu;
            // 0x20d850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20d84c:
    ctx->pc = 0x20D854u;
}
