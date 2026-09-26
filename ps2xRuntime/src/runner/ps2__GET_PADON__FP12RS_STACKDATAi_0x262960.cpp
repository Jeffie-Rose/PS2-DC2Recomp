#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PADON__FP12RS_STACKDATAi
// Address: 0x262960 - 0x2629a8
void ps2__GET_PADON__FP12RS_STACKDATAi_0x262960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PADON__FP12RS_STACKDATAi_0x262960");
#endif

    switch (ctx->pc) {
        case 0x262988u: goto label_262988;
        case 0x262994u: goto label_262994;
        default: break;
    }

    ctx->pc = 0x262960u;

    // 0x262960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26296c: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26296Cu;
    {
        const bool branch_taken_0x26296c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x262970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26296Cu;
            // 0x262970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26296c) {
            ctx->pc = 0x26297Cu;
            goto label_26297c;
        }
    }
    ctx->pc = 0x262974u;
    // 0x262974: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x262974u;
    {
        const bool branch_taken_0x262974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262974u;
            // 0x262978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262974) {
            ctx->pc = 0x262998u;
            goto label_262998;
        }
    }
    ctx->pc = 0x26297Cu;
label_26297c:
    // 0x26297c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x26297cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x262980: 0xc052c7c  jal         func_14B1F0
    ctx->pc = 0x262980u;
    SET_GPR_U32(ctx, 31, 0x262988u);
    ctx->pc = 0x262984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262980u;
            // 0x262984: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B1F0u;
    if (runtime->hasFunction(0x14B1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14B1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262988u; }
        if (ctx->pc != 0x262988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPadOn__8CGamePadFv_0x14b1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262988u; }
        if (ctx->pc != 0x262988u) { return; }
    }
    ctx->pc = 0x262988u;
label_262988:
    // 0x262988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26298c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26298Cu;
    SET_GPR_U32(ctx, 31, 0x262994u);
    ctx->pc = 0x262990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26298Cu;
            // 0x262990: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262994u; }
        if (ctx->pc != 0x262994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262994u; }
        if (ctx->pc != 0x262994u) { return; }
    }
    ctx->pc = 0x262994u;
label_262994:
    // 0x262994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262998:
    // 0x262998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26299c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26299cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2629a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2629A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2629A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2629A0u;
            // 0x2629a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2629A8u;
}
