#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BPOT_POS__FP12RS_STACKDATAi
// Address: 0x267490 - 0x2674f0
void ps2__GET_BPOT_POS__FP12RS_STACKDATAi_0x267490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BPOT_POS__FP12RS_STACKDATAi_0x267490");
#endif

    switch (ctx->pc) {
        case 0x2674b0u: goto label_2674b0;
        case 0x2674c0u: goto label_2674c0;
        case 0x2674d0u: goto label_2674d0;
        case 0x2674dcu: goto label_2674dc;
        default: break;
    }

    ctx->pc = 0x267490u;

    // 0x267490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x267490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x267494: 0x3c0501eb  lui         $a1, 0x1EB
    ctx->pc = 0x267494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)491 << 16));
    // 0x267498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26749c: 0x24a5f3c0  addiu       $a1, $a1, -0xC40
    ctx->pc = 0x26749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964160));
    // 0x2674a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2674a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2674a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2674a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2674a8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2674A8u;
    SET_GPR_U32(ctx, 31, 0x2674B0u);
    ctx->pc = 0x2674ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2674A8u;
            // 0x2674ac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2674B0u; }
        if (ctx->pc != 0x2674B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2674B0u; }
        if (ctx->pc != 0x2674B0u) { return; }
    }
    ctx->pc = 0x2674B0u;
label_2674b0:
    // 0x2674b0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2674b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2674b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2674b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2674b8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2674B8u;
    SET_GPR_U32(ctx, 31, 0x2674C0u);
    ctx->pc = 0x2674BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2674B8u;
            // 0x2674bc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2674C0u; }
        if (ctx->pc != 0x2674C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2674C0u; }
        if (ctx->pc != 0x2674C0u) { return; }
    }
    ctx->pc = 0x2674C0u;
label_2674c0:
    // 0x2674c0: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2674c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2674c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2674c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2674c8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2674C8u;
    SET_GPR_U32(ctx, 31, 0x2674D0u);
    ctx->pc = 0x2674CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2674C8u;
            // 0x2674cc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2674D0u; }
        if (ctx->pc != 0x2674D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2674D0u; }
        if (ctx->pc != 0x2674D0u) { return; }
    }
    ctx->pc = 0x2674D0u;
label_2674d0:
    // 0x2674d0: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2674d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2674d4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2674D4u;
    SET_GPR_U32(ctx, 31, 0x2674DCu);
    ctx->pc = 0x2674D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2674D4u;
            // 0x2674d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2674DCu; }
        if (ctx->pc != 0x2674DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2674DCu; }
        if (ctx->pc != 0x2674DCu) { return; }
    }
    ctx->pc = 0x2674DCu;
label_2674dc:
    // 0x2674dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2674dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2674e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2674e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2674e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2674e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2674E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2674ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2674E8u;
            // 0x2674ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2674F0u;
}
