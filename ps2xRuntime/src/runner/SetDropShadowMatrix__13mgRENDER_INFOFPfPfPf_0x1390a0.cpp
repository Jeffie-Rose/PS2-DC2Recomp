#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDropShadowMatrix__13mgRENDER_INFOFPfPfPf
// Address: 0x1390a0 - 0x13911c
void SetDropShadowMatrix__13mgRENDER_INFOFPfPfPf_0x1390a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDropShadowMatrix__13mgRENDER_INFOFPfPfPf_0x1390a0");
#endif

    switch (ctx->pc) {
        case 0x1390d4u: goto label_1390d4;
        case 0x1390e0u: goto label_1390e0;
        case 0x1390ecu: goto label_1390ec;
        case 0x139100u: goto label_139100;
        default: break;
    }

    ctx->pc = 0x1390a0u;

    // 0x1390a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1390a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1390a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1390a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1390a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1390a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1390ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1390acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1390b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1390b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1390b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1390b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1390b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1390bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1390c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1390c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390c4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1390c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390c8: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x1390c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
    // 0x1390cc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1390CCu;
    SET_GPR_U32(ctx, 31, 0x1390D4u);
    ctx->pc = 0x1390D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1390CCu;
            // 0x1390d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390D4u; }
        if (ctx->pc != 0x1390D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390D4u; }
        if (ctx->pc != 0x1390D4u) { return; }
    }
    ctx->pc = 0x1390D4u;
label_1390d4:
    // 0x1390d4: 0x26640330  addiu       $a0, $s3, 0x330
    ctx->pc = 0x1390d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
    // 0x1390d8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1390D8u;
    SET_GPR_U32(ctx, 31, 0x1390E0u);
    ctx->pc = 0x1390DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1390D8u;
            // 0x1390dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390E0u; }
        if (ctx->pc != 0x1390E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390E0u; }
        if (ctx->pc != 0x1390E0u) { return; }
    }
    ctx->pc = 0x1390E0u;
label_1390e0:
    // 0x1390e0: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1390e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1390e4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1390E4u;
    SET_GPR_U32(ctx, 31, 0x1390ECu);
    ctx->pc = 0x1390E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1390E4u;
            // 0x1390e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390ECu; }
        if (ctx->pc != 0x1390ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1390ECu; }
        if (ctx->pc != 0x1390ECu) { return; }
    }
    ctx->pc = 0x1390ECu;
label_1390ec:
    // 0x1390ec: 0x26640340  addiu       $a0, $s3, 0x340
    ctx->pc = 0x1390ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    // 0x1390f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1390f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1390f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390f8: 0xc04c1a4  jal         func_130690
    ctx->pc = 0x1390F8u;
    SET_GPR_U32(ctx, 31, 0x139100u);
    ctx->pc = 0x1390FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1390F8u;
            // 0x1390fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130690u;
    if (runtime->hasFunction(0x130690u)) {
        auto targetFn = runtime->lookupFunction(0x130690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139100u; }
        if (ctx->pc != 0x139100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgShadowMatrix__FPA4_fPfPfPf_0x130690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139100u; }
        if (ctx->pc != 0x139100u) { return; }
    }
    ctx->pc = 0x139100u;
label_139100:
    // 0x139100: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x139100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139104: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x139104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139108: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13910c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13910cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139114: 0x3e00008  jr          $ra
    ctx->pc = 0x139114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139114u;
            // 0x139118: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13911Cu;
}
