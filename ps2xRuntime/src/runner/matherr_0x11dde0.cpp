#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: matherr
// Address: 0x11dde0 - 0x11de04
void matherr_0x11dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("matherr_0x11dde0");
#endif

    switch (ctx->pc) {
        case 0x11ddf4u: goto label_11ddf4;
        default: break;
    }

    ctx->pc = 0x11dde0u;

    // 0x11dde0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11dde4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dde8: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x11dde8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11ddec: 0xc0a2148  jal         func_288520
    ctx->pc = 0x11DDECu;
    SET_GPR_U32(ctx, 31, 0x11DDF4u);
    ctx->pc = 0x11DDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDECu;
            // 0x11ddf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DDF4u; }
        if (ctx->pc != 0x11DDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DDF4u; }
        if (ctx->pc != 0x11DDF4u) { return; }
    }
    ctx->pc = 0x11DDF4u;
label_11ddf4:
    // 0x11ddf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ddf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ddf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11ddf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ddfc: 0x3e00008  jr          $ra
    ctx->pc = 0x11DDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDFCu;
            // 0x11de00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DE04u;
}
