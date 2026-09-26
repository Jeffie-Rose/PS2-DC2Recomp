#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__9CFragmentFPfPf
// Address: 0x2cc1d0 - 0x2cc230
void Set__9CFragmentFPfPf_0x2cc1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__9CFragmentFPfPf_0x2cc1d0");
#endif

    switch (ctx->pc) {
        case 0x2cc1f8u: goto label_2cc1f8;
        case 0x2cc204u: goto label_2cc204;
        default: break;
    }

    ctx->pc = 0x2cc1d0u;

    // 0x2cc1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cc1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cc1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc1d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cc1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cc1dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc1e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc1e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cc1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1e8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2cc1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2cc1ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2cc1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1f0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2CC1F0u;
    SET_GPR_U32(ctx, 31, 0x2CC1F8u);
    ctx->pc = 0x2CC1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC1F0u;
            // 0x2cc1f4: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC1F8u; }
        if (ctx->pc != 0x2CC1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC1F8u; }
        if (ctx->pc != 0x2CC1F8u) { return; }
    }
    ctx->pc = 0x2CC1F8u;
label_2cc1f8:
    // 0x2cc1f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1fc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2CC1FCu;
    SET_GPR_U32(ctx, 31, 0x2CC204u);
    ctx->pc = 0x2CC200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC1FCu;
            // 0x2cc200: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC204u; }
        if (ctx->pc != 0x2CC204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC204u; }
        if (ctx->pc != 0x2CC204u) { return; }
    }
    ctx->pc = 0x2CC204u;
label_2cc204:
    // 0x2cc204: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2cc204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x2cc208: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x2cc208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x2cc20c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2cc20cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x2cc210: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cc210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cc214: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x2cc214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x2cc218: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x2cc218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x2cc21c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cc21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc228: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC228u;
            // 0x2cc22c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC230u;
}
