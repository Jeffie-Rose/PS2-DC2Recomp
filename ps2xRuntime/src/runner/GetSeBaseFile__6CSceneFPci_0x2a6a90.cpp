#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSeBaseFile__6CSceneFPci
// Address: 0x2a6a90 - 0x2a6ad0
void GetSeBaseFile__6CSceneFPci_0x2a6a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSeBaseFile__6CSceneFPci_0x2a6a90");
#endif

    switch (ctx->pc) {
        case 0x2a6aacu: goto label_2a6aac;
        case 0x2a6ac0u: goto label_2a6ac0;
        default: break;
    }

    ctx->pc = 0x2a6a90u;

    // 0x2a6a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6a98: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a6a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6aa0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a6aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6aa4: 0xc0a9a50  jal         func_2A6940
    ctx->pc = 0x2A6AA4u;
    SET_GPR_U32(ctx, 31, 0x2A6AACu);
    ctx->pc = 0x2A6AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6AA4u;
            // 0x2a6aa8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6940u;
    if (runtime->hasFunction(0x2A6940u)) {
        auto targetFn = runtime->lookupFunction(0x2A6940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6AACu; }
        if (ctx->pc != 0x2A6AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumber3__FPci_0x2a6940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6AACu; }
        if (ctx->pc != 0x2A6AACu) { return; }
    }
    ctx->pc = 0x2A6AACu;
label_2a6aac:
    // 0x2a6aac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a6aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a6ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ab4: 0x24a5e580  addiu       $a1, $a1, -0x1A80
    ctx->pc = 0x2a6ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960512));
    // 0x2a6ab8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2A6AB8u;
    SET_GPR_U32(ctx, 31, 0x2A6AC0u);
    ctx->pc = 0x2A6ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6AB8u;
            // 0x2a6abc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6AC0u; }
        if (ctx->pc != 0x2A6AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6AC0u; }
        if (ctx->pc != 0x2A6AC0u) { return; }
    }
    ctx->pc = 0x2A6AC0u;
label_2a6ac0:
    // 0x2a6ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6AC8u;
            // 0x2a6acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6AD0u;
}
