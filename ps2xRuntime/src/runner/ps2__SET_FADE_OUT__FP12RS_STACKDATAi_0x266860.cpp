#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FADE_OUT__FP12RS_STACKDATAi
// Address: 0x266860 - 0x2668d8
void ps2__SET_FADE_OUT__FP12RS_STACKDATAi_0x266860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FADE_OUT__FP12RS_STACKDATAi_0x266860");
#endif

    switch (ctx->pc) {
        case 0x266880u: goto label_266880;
        case 0x26688cu: goto label_26688c;
        case 0x2668a4u: goto label_2668a4;
        case 0x2668c0u: goto label_2668c0;
        default: break;
    }

    ctx->pc = 0x266860u;

    // 0x266860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x266860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x266864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x266864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x266868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26686c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266874: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x266874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266878: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x266878u;
    SET_GPR_U32(ctx, 31, 0x266880u);
    ctx->pc = 0x26687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266878u;
            // 0x26687c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266880u; }
        if (ctx->pc != 0x266880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266880u; }
        if (ctx->pc != 0x266880u) { return; }
    }
    ctx->pc = 0x266880u;
label_266880:
    // 0x266880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266884: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266884u;
    SET_GPR_U32(ctx, 31, 0x26688Cu);
    ctx->pc = 0x266888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266884u;
            // 0x266888: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26688Cu; }
        if (ctx->pc != 0x26688Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26688Cu; }
        if (ctx->pc != 0x26688Cu) { return; }
    }
    ctx->pc = 0x26688Cu;
label_26688c:
    // 0x26688c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x26688cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266890: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x266890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x266894: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266894u;
    {
        const bool branch_taken_0x266894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266894u;
            // 0x266898: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266894) {
            ctx->pc = 0x2668A4u;
            goto label_2668a4;
        }
    }
    ctx->pc = 0x26689Cu;
    // 0x26689c: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26689Cu;
    SET_GPR_U32(ctx, 31, 0x2668A4u);
    ctx->pc = 0x2668A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26689Cu;
            // 0x2668a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668A4u; }
        if (ctx->pc != 0x2668A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668A4u; }
        if (ctx->pc != 0x2668A4u) { return; }
    }
    ctx->pc = 0x2668A4u;
label_2668a4:
    // 0x2668a4: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2668a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2668a8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2668a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2668ac: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x2668acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2668b0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2668b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2668b4: 0xc7ae0038  lwc1        $f14, 0x38($sp)
    ctx->pc = 0x2668b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2668b8: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2668B8u;
    SET_GPR_U32(ctx, 31, 0x2668C0u);
    ctx->pc = 0x2668BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2668B8u;
            // 0x2668bc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668C0u; }
        if (ctx->pc != 0x2668C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2668C0u; }
        if (ctx->pc != 0x2668C0u) { return; }
    }
    ctx->pc = 0x2668C0u;
label_2668c0:
    // 0x2668c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2668c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2668c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2668c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2668c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2668c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2668cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2668ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2668d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2668D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2668D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2668D0u;
            // 0x2668d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2668D8u;
}
