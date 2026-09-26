#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NormalGetNextVelo__9CAquaFishFf
// Address: 0x20d770 - 0x20d7ec
void NormalGetNextVelo__9CAquaFishFf_0x20d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NormalGetNextVelo__9CAquaFishFf_0x20d770");
#endif

    switch (ctx->pc) {
        case 0x20d770u: goto label_20d770;
        case 0x20d774u: goto label_20d774;
        case 0x20d778u: goto label_20d778;
        case 0x20d77cu: goto label_20d77c;
        case 0x20d780u: goto label_20d780;
        case 0x20d784u: goto label_20d784;
        case 0x20d788u: goto label_20d788;
        case 0x20d78cu: goto label_20d78c;
        case 0x20d790u: goto label_20d790;
        case 0x20d794u: goto label_20d794;
        case 0x20d798u: goto label_20d798;
        case 0x20d79cu: goto label_20d79c;
        case 0x20d7a0u: goto label_20d7a0;
        case 0x20d7a4u: goto label_20d7a4;
        case 0x20d7a8u: goto label_20d7a8;
        case 0x20d7acu: goto label_20d7ac;
        case 0x20d7b0u: goto label_20d7b0;
        case 0x20d7b4u: goto label_20d7b4;
        case 0x20d7b8u: goto label_20d7b8;
        case 0x20d7bcu: goto label_20d7bc;
        case 0x20d7c0u: goto label_20d7c0;
        case 0x20d7c4u: goto label_20d7c4;
        case 0x20d7c8u: goto label_20d7c8;
        case 0x20d7ccu: goto label_20d7cc;
        case 0x20d7d0u: goto label_20d7d0;
        case 0x20d7d4u: goto label_20d7d4;
        case 0x20d7d8u: goto label_20d7d8;
        case 0x20d7dcu: goto label_20d7dc;
        case 0x20d7e0u: goto label_20d7e0;
        case 0x20d7e4u: goto label_20d7e4;
        case 0x20d7e8u: goto label_20d7e8;
        default: break;
    }

    ctx->pc = 0x20d770u;

label_20d770:
    // 0x20d770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20d774:
    // 0x20d774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20d778:
    // 0x20d778: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20d778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d77c:
    // 0x20d77c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20d77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20d780:
    // 0x20d780: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20d780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20d784:
    // 0x20d784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d788:
    // 0x20d788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20d788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20d78c:
    // 0x20d78c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20d78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20d790:
    // 0x20d790: 0x320f809  jalr        $t9
label_20d794:
    if (ctx->pc == 0x20D794u) {
        ctx->pc = 0x20D794u;
            // 0x20d794: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x20D798u;
        goto label_20d798;
    }
    ctx->pc = 0x20D790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D798u);
        ctx->pc = 0x20D794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D790u;
            // 0x20d794: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D798u; }
            if (ctx->pc != 0x20D798u) { return; }
        }
        }
    }
    ctx->pc = 0x20D798u;
label_20d798:
    // 0x20d798: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d79c:
    // 0x20d79c: 0x26050660  addiu       $a1, $s0, 0x660
    ctx->pc = 0x20d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
label_20d7a0:
    // 0x20d7a0: 0xc041c3e  jal         func_1070F8
label_20d7a4:
    if (ctx->pc == 0x20D7A4u) {
        ctx->pc = 0x20D7A4u;
            // 0x20d7a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D7A8u;
        goto label_20d7a8;
    }
    ctx->pc = 0x20D7A0u;
    SET_GPR_U32(ctx, 31, 0x20D7A8u);
    ctx->pc = 0x20D7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D7A0u;
            // 0x20d7a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7A8u; }
        if (ctx->pc != 0x20D7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7A8u; }
        if (ctx->pc != 0x20D7A8u) { return; }
    }
    ctx->pc = 0x20D7A8u;
label_20d7a8:
    // 0x20d7a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d7ac:
    // 0x20d7ac: 0xc041be0  jal         func_106F80
label_20d7b0:
    if (ctx->pc == 0x20D7B0u) {
        ctx->pc = 0x20D7B0u;
            // 0x20d7b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D7B4u;
        goto label_20d7b4;
    }
    ctx->pc = 0x20D7ACu;
    SET_GPR_U32(ctx, 31, 0x20D7B4u);
    ctx->pc = 0x20D7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D7ACu;
            // 0x20d7b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7B4u; }
        if (ctx->pc != 0x20D7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7B4u; }
        if (ctx->pc != 0x20D7B4u) { return; }
    }
    ctx->pc = 0x20D7B4u;
label_20d7b4:
    // 0x20d7b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d7b8:
    // 0x20d7b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20d7b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_20d7bc:
    // 0x20d7bc: 0xc041e96  jal         func_107A58
label_20d7c0:
    if (ctx->pc == 0x20D7C0u) {
        ctx->pc = 0x20D7C0u;
            // 0x20d7c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D7C4u;
        goto label_20d7c4;
    }
    ctx->pc = 0x20D7BCu;
    SET_GPR_U32(ctx, 31, 0x20D7C4u);
    ctx->pc = 0x20D7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D7BCu;
            // 0x20d7c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7C4u; }
        if (ctx->pc != 0x20D7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D7C4u; }
        if (ctx->pc != 0x20D7C4u) { return; }
    }
    ctx->pc = 0x20D7C4u;
label_20d7c4:
    // 0x20d7c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x20d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_20d7c8:
    // 0x20d7c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20d7cc:
    // 0x20d7cc: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x20d7ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_20d7d0:
    // 0x20d7d0: 0x7e040670  sq          $a0, 0x670($s0)
    ctx->pc = 0x20d7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), GPR_VEC(ctx, 4));
label_20d7d4:
    // 0x20d7d4: 0xae03067c  sw          $v1, 0x67C($s0)
    ctx->pc = 0x20d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1660), GPR_U32(ctx, 3));
label_20d7d8:
    // 0x20d7d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20d7dc:
    // 0x20d7dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20d7e0:
    // 0x20d7e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20d7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d7e4:
    // 0x20d7e4: 0x3e00008  jr          $ra
label_20d7e8:
    if (ctx->pc == 0x20D7E8u) {
        ctx->pc = 0x20D7E8u;
            // 0x20d7e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x20D7ECu;
        goto label_fallthrough_0x20d7e4;
    }
    ctx->pc = 0x20D7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D7E4u;
            // 0x20d7e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20d7e4:
    ctx->pc = 0x20D7ECu;
}
