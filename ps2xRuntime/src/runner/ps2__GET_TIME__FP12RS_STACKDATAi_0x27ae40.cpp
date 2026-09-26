#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TIME__FP12RS_STACKDATAi
// Address: 0x27ae40 - 0x27ae64
void ps2__GET_TIME__FP12RS_STACKDATAi_0x27ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TIME__FP12RS_STACKDATAi_0x27ae40");
#endif

    switch (ctx->pc) {
        case 0x27ae54u: goto label_27ae54;
        default: break;
    }

    ctx->pc = 0x27ae40u;

    // 0x27ae40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ae44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ae48: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27ae4c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27AE4Cu;
    SET_GPR_U32(ctx, 31, 0x27AE54u);
    ctx->pc = 0x27AE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE4Cu;
            // 0x27ae50: 0xc44c2f6c  lwc1        $f12, 0x2F6C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AE54u; }
        if (ctx->pc != 0x27AE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AE54u; }
        if (ctx->pc != 0x27AE54u) { return; }
    }
    ctx->pc = 0x27AE54u;
label_27ae54:
    // 0x27ae54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ae54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ae58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ae5c: 0x3e00008  jr          $ra
    ctx->pc = 0x27AE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AE5Cu;
            // 0x27ae60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AE64u;
}
