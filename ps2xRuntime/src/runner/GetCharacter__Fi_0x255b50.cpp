#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCharacter__Fi
// Address: 0x255b50 - 0x255b7c
void GetCharacter__Fi_0x255b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCharacter__Fi_0x255b50");
#endif

    switch (ctx->pc) {
        case 0x255b70u: goto label_255b70;
        default: break;
    }

    ctx->pc = 0x255b50u;

    // 0x255b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x255b54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x255b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255b5c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x255b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x255b60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255B60u;
    {
        const bool branch_taken_0x255b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x255B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255B60u;
            // 0x255b64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255b60) {
            ctx->pc = 0x255B70u;
            goto label_255b70;
        }
    }
    ctx->pc = 0x255B68u;
    // 0x255b68: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x255B68u;
    SET_GPR_U32(ctx, 31, 0x255B70u);
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255B70u; }
        if (ctx->pc != 0x255B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255B70u; }
        if (ctx->pc != 0x255B70u) { return; }
    }
    ctx->pc = 0x255B70u;
label_255b70:
    // 0x255b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x255b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255b74: 0x3e00008  jr          $ra
    ctx->pc = 0x255B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255B74u;
            // 0x255b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255B7Cu;
}
