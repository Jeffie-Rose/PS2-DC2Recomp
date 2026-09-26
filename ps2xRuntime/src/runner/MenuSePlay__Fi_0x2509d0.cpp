#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuSePlay__Fi
// Address: 0x2509d0 - 0x2509f4
void MenuSePlay__Fi_0x2509d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuSePlay__Fi_0x2509d0");
#endif

    switch (ctx->pc) {
        case 0x2509e8u: goto label_2509e8;
        default: break;
    }

    ctx->pc = 0x2509d0u;

    // 0x2509d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2509d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2509d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2509d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509d8: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2509D8u;
    {
        const bool branch_taken_0x2509d8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2509DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2509D8u;
            // 0x2509dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509d8) {
            ctx->pc = 0x2509E8u;
            goto label_2509e8;
        }
    }
    ctx->pc = 0x2509E0u;
    // 0x2509e0: 0xc094280  jal         func_250A00
    ctx->pc = 0x2509E0u;
    SET_GPR_U32(ctx, 31, 0x2509E8u);
    ctx->pc = 0x2509E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2509E0u;
            // 0x2509e4: 0x8f848ac4  lw          $a0, -0x753C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A00u;
    if (runtime->hasFunction(0x250A00u)) {
        auto targetFn = runtime->lookupFunction(0x250A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2509E8u; }
        if (ctx->pc != 0x2509E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FUii_0x250a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2509E8u; }
        if (ctx->pc != 0x2509E8u) { return; }
    }
    ctx->pc = 0x2509E8u;
label_2509e8:
    // 0x2509e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2509e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2509ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2509ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2509F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2509ECu;
            // 0x2509f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2509F4u;
}
