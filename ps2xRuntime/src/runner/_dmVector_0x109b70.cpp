#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dmVector
// Address: 0x109b70 - 0x109b8c
void _dmVector_0x109b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dmVector_0x109b70");
#endif

    switch (ctx->pc) {
        case 0x109b80u: goto label_109b80;
        default: break;
    }

    ctx->pc = 0x109b70u;

    // 0x109b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x109b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x109b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109b78: 0xc042b2e  jal         func_10ACB8
    ctx->pc = 0x109B78u;
    SET_GPR_U32(ctx, 31, 0x109B80u);
    ctx->pc = 0x109B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109B78u;
            // 0x109b7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ACB8u;
    if (runtime->hasFunction(0x10ACB8u)) {
        auto targetFn = runtime->lookupFunction(0x10ACB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B80u; }
        if (ctx->pc != 0x109B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x10acb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109B80u; }
        if (ctx->pc != 0x109B80u) { return; }
    }
    ctx->pc = 0x109B80u;
label_109b80:
    // 0x109b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109b84: 0x3e00008  jr          $ra
    ctx->pc = 0x109B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109B84u;
            // 0x109b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109B8Cu;
}
