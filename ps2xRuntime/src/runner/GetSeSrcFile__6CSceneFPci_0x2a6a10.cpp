#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSeSrcFile__6CSceneFPci
// Address: 0x2a6a10 - 0x2a6a50
void GetSeSrcFile__6CSceneFPci_0x2a6a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSeSrcFile__6CSceneFPci_0x2a6a10");
#endif

    switch (ctx->pc) {
        case 0x2a6a2cu: goto label_2a6a2c;
        case 0x2a6a40u: goto label_2a6a40;
        default: break;
    }

    ctx->pc = 0x2a6a10u;

    // 0x2a6a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6a18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a6a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a6a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6a20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a6a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a24: 0xc0a9a50  jal         func_2A6940
    ctx->pc = 0x2A6A24u;
    SET_GPR_U32(ctx, 31, 0x2A6A2Cu);
    ctx->pc = 0x2A6A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6A24u;
            // 0x2a6a28: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6940u;
    if (runtime->hasFunction(0x2A6940u)) {
        auto targetFn = runtime->lookupFunction(0x2A6940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6A2Cu; }
        if (ctx->pc != 0x2A6A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumber3__FPci_0x2a6940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6A2Cu; }
        if (ctx->pc != 0x2A6A2Cu) { return; }
    }
    ctx->pc = 0x2A6A2Cu;
label_2a6a2c:
    // 0x2a6a2c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a6a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a6a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a34: 0x24a5e540  addiu       $a1, $a1, -0x1AC0
    ctx->pc = 0x2a6a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960448));
    // 0x2a6a38: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2A6A38u;
    SET_GPR_U32(ctx, 31, 0x2A6A40u);
    ctx->pc = 0x2A6A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6A38u;
            // 0x2a6a3c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6A40u; }
        if (ctx->pc != 0x2A6A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6A40u; }
        if (ctx->pc != 0x2A6A40u) { return; }
    }
    ctx->pc = 0x2A6A40u;
label_2a6a40:
    // 0x2a6a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a6a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6a48: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6A48u;
            // 0x2a6a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6A50u;
}
