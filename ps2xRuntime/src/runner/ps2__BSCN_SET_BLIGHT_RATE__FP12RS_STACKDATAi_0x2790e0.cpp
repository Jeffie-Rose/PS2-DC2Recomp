#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _BSCN_SET_BLIGHT_RATE__FP12RS_STACKDATAi
// Address: 0x2790e0 - 0x27911c
void ps2__BSCN_SET_BLIGHT_RATE__FP12RS_STACKDATAi_0x2790e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__BSCN_SET_BLIGHT_RATE__FP12RS_STACKDATAi_0x2790e0");
#endif

    switch (ctx->pc) {
        case 0x279108u: goto label_279108;
        default: break;
    }

    ctx->pc = 0x2790e0u;

    // 0x2790e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2790e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2790e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2790e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2790e8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2790e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2790ec: 0x24432f90  addiu       $v1, $v0, 0x2F90
    ctx->pc = 0x2790ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x2790f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2790F0u;
    {
        const bool branch_taken_0x2790f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2790F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2790F0u;
            // 0x2790f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790f0) {
            ctx->pc = 0x279100u;
            goto label_279100;
        }
    }
    ctx->pc = 0x2790F8u;
    // 0x2790f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2790F8u;
    {
        const bool branch_taken_0x2790f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2790FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2790F8u;
            // 0x2790fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790f8) {
            ctx->pc = 0x279114u;
            goto label_279114;
        }
    }
    ctx->pc = 0x279100u;
label_279100:
    // 0x279100: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x279100u;
    SET_GPR_U32(ctx, 31, 0x279108u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279108u; }
        if (ctx->pc != 0x279108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279108u; }
        if (ctx->pc != 0x279108u) { return; }
    }
    ctx->pc = 0x279108u;
label_279108:
    // 0x279108: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x279108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x27910c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279114:
    // 0x279114: 0x3e00008  jr          $ra
    ctx->pc = 0x279114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279114u;
            // 0x279118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27911Cu;
}
