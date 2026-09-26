#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CommandStreamOpen2__FiPc
// Address: 0x273ba0 - 0x273bf0
void CommandStreamOpen2__FiPc_0x273ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandStreamOpen2__FiPc_0x273ba0");
#endif

    switch (ctx->pc) {
        case 0x273bc0u: goto label_273bc0;
        case 0x273bccu: goto label_273bcc;
        case 0x273bdcu: goto label_273bdc;
        default: break;
    }

    ctx->pc = 0x273ba0u;

    // 0x273ba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x273ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x273ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273ba8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x273ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x273bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273bb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x273bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273bb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x273bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x273bb8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x273BB8u;
    SET_GPR_U32(ctx, 31, 0x273BC0u);
    ctx->pc = 0x273BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273BB8u;
            // 0x273bbc: 0x24a5caa0  addiu       $a1, $a1, -0x3560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BC0u; }
        if (ctx->pc != 0x273BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BC0u; }
        if (ctx->pc != 0x273BC0u) { return; }
    }
    ctx->pc = 0x273BC0u;
label_273bc0:
    // 0x273bc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273bc4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x273BC4u;
    SET_GPR_U32(ctx, 31, 0x273BCCu);
    ctx->pc = 0x273BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273BC4u;
            // 0x273bc8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BCCu; }
        if (ctx->pc != 0x273BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BCCu; }
        if (ctx->pc != 0x273BCCu) { return; }
    }
    ctx->pc = 0x273BCCu;
label_273bcc:
    // 0x273bcc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x273bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x273bd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x273bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x273bd4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x273BD4u;
    SET_GPR_U32(ctx, 31, 0x273BDCu);
    ctx->pc = 0x273BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273BD4u;
            // 0x273bd8: 0x24a5cab0  addiu       $a1, $a1, -0x3550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BDCu; }
        if (ctx->pc != 0x273BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BDCu; }
        if (ctx->pc != 0x273BDCu) { return; }
    }
    ctx->pc = 0x273BDCu;
label_273bdc:
    // 0x273bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273be8: 0x3e00008  jr          $ra
    ctx->pc = 0x273BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273BE8u;
            // 0x273bec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273BF0u;
}
