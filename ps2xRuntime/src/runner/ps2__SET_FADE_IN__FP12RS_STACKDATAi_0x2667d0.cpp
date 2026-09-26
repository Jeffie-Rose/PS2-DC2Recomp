#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FADE_IN__FP12RS_STACKDATAi
// Address: 0x2667d0 - 0x266860
void ps2__SET_FADE_IN__FP12RS_STACKDATAi_0x2667d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FADE_IN__FP12RS_STACKDATAi_0x2667d0");
#endif

    switch (ctx->pc) {
        case 0x2667f0u: goto label_2667f0;
        case 0x2667fcu: goto label_2667fc;
        case 0x266814u: goto label_266814;
        case 0x266830u: goto label_266830;
        case 0x266848u: goto label_266848;
        default: break;
    }

    ctx->pc = 0x2667d0u;

    // 0x2667d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2667d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2667d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2667d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2667d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2667d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2667dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2667dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2667e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2667e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2667e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2667e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2667e8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2667E8u;
    SET_GPR_U32(ctx, 31, 0x2667F0u);
    ctx->pc = 0x2667ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2667E8u;
            // 0x2667ec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2667F0u; }
        if (ctx->pc != 0x2667F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2667F0u; }
        if (ctx->pc != 0x2667F0u) { return; }
    }
    ctx->pc = 0x2667F0u;
label_2667f0:
    // 0x2667f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2667f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2667f4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2667F4u;
    SET_GPR_U32(ctx, 31, 0x2667FCu);
    ctx->pc = 0x2667F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2667F4u;
            // 0x2667f8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2667FCu; }
        if (ctx->pc != 0x2667FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2667FCu; }
        if (ctx->pc != 0x2667FCu) { return; }
    }
    ctx->pc = 0x2667FCu;
label_2667fc:
    // 0x2667fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2667fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266800: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x266800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x266804: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x266804u;
    {
        const bool branch_taken_0x266804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266804u;
            // 0x266808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266804) {
            ctx->pc = 0x266838u;
            goto label_266838;
        }
    }
    ctx->pc = 0x26680Cu;
    // 0x26680c: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26680Cu;
    SET_GPR_U32(ctx, 31, 0x266814u);
    ctx->pc = 0x266810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26680Cu;
            // 0x266810: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266814u; }
        if (ctx->pc != 0x266814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266814u; }
        if (ctx->pc != 0x266814u) { return; }
    }
    ctx->pc = 0x266814u;
label_266814:
    // 0x266814: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x266814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x266818: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x266818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26681c: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x26681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x266820: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x266820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266824: 0xc7ae0038  lwc1        $f14, 0x38($sp)
    ctx->pc = 0x266824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x266828: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x266828u;
    SET_GPR_U32(ctx, 31, 0x266830u);
    ctx->pc = 0x26682Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266828u;
            // 0x26682c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (runtime->hasFunction(0x17D790u)) {
        auto targetFn = runtime->lookupFunction(0x17D790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266830u; }
        if (ctx->pc != 0x266830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFifff_0x17d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266830u; }
        if (ctx->pc != 0x266830u) { return; }
    }
    ctx->pc = 0x266830u;
label_266830:
    // 0x266830: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x266830u;
    {
        const bool branch_taken_0x266830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266830u;
            // 0x266834: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266830) {
            ctx->pc = 0x26684Cu;
            goto label_26684c;
        }
    }
    ctx->pc = 0x266838u;
label_266838:
    // 0x266838: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x266838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26683c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x26683cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266840: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x266840u;
    SET_GPR_U32(ctx, 31, 0x266848u);
    ctx->pc = 0x266844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266840u;
            // 0x266844: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266848u; }
        if (ctx->pc != 0x266848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266848u; }
        if (ctx->pc != 0x266848u) { return; }
    }
    ctx->pc = 0x266848u;
label_266848:
    // 0x266848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x266848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26684c:
    // 0x26684c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266858: 0x3e00008  jr          $ra
    ctx->pc = 0x266858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26685Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266858u;
            // 0x26685c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266860u;
}
