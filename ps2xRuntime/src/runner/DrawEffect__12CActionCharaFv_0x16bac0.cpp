#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEffect__12CActionCharaFv
// Address: 0x16bac0 - 0x16baf8
void DrawEffect__12CActionCharaFv_0x16bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEffect__12CActionCharaFv_0x16bac0");
#endif

    switch (ctx->pc) {
        case 0x16bad4u: goto label_16bad4;
        case 0x16bae8u: goto label_16bae8;
        default: break;
    }

    ctx->pc = 0x16bac0u;

    // 0x16bac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16bac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bacc: 0xc05df2c  jal         func_177CB0
    ctx->pc = 0x16BACCu;
    SET_GPR_U32(ctx, 31, 0x16BAD4u);
    ctx->pc = 0x16BAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BACCu;
            // 0x16bad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177CB0u;
    if (runtime->hasFunction(0x177CB0u)) {
        auto targetFn = runtime->lookupFunction(0x177CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAD4u; }
        if (ctx->pc != 0x16BAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEffect__11CCharacter2Fv_0x177cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAD4u; }
        if (ctx->pc != 0x16BAD4u) { return; }
    }
    ctx->pc = 0x16BAD4u;
label_16bad4:
    // 0x16bad4: 0x8e0407dc  lw          $a0, 0x7DC($s0)
    ctx->pc = 0x16bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2012)));
    // 0x16bad8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BAD8u;
    {
        const bool branch_taken_0x16bad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bad8) {
            ctx->pc = 0x16BAE8u;
            goto label_16bae8;
        }
    }
    ctx->pc = 0x16BAE0u;
    // 0x16bae0: 0xc0b866c  jal         func_2E19B0
    ctx->pc = 0x16BAE0u;
    SET_GPR_U32(ctx, 31, 0x16BAE8u);
    ctx->pc = 0x2E19B0u;
    if (runtime->hasFunction(0x2E19B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E19B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAE8u; }
        if (ctx->pc != 0x16BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__16CEffectScriptManFv_0x2e19b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAE8u; }
        if (ctx->pc != 0x16BAE8u) { return; }
    }
    ctx->pc = 0x16BAE8u;
label_16bae8:
    // 0x16bae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16baec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16baecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16baf0: 0x3e00008  jr          $ra
    ctx->pc = 0x16BAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BAF0u;
            // 0x16baf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BAF8u;
}
