#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PADDOWN__FP12RS_STACKDATAi
// Address: 0x2629b0 - 0x2629f8
void ps2__GET_PADDOWN__FP12RS_STACKDATAi_0x2629b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PADDOWN__FP12RS_STACKDATAi_0x2629b0");
#endif

    switch (ctx->pc) {
        case 0x2629d8u: goto label_2629d8;
        case 0x2629e4u: goto label_2629e4;
        default: break;
    }

    ctx->pc = 0x2629b0u;

    // 0x2629b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2629b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2629b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2629b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2629b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2629b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2629bc: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2629BCu;
    {
        const bool branch_taken_0x2629bc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2629C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2629BCu;
            // 0x2629c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629bc) {
            ctx->pc = 0x2629CCu;
            goto label_2629cc;
        }
    }
    ctx->pc = 0x2629C4u;
    // 0x2629c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2629C4u;
    {
        const bool branch_taken_0x2629c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2629C4u;
            // 0x2629c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629c4) {
            ctx->pc = 0x2629E8u;
            goto label_2629e8;
        }
    }
    ctx->pc = 0x2629CCu;
label_2629cc:
    // 0x2629cc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2629ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2629d0: 0xc052c88  jal         func_14B220
    ctx->pc = 0x2629D0u;
    SET_GPR_U32(ctx, 31, 0x2629D8u);
    ctx->pc = 0x2629D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2629D0u;
            // 0x2629d4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B220u;
    if (runtime->hasFunction(0x14B220u)) {
        auto targetFn = runtime->lookupFunction(0x14B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2629D8u; }
        if (ctx->pc != 0x2629D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPadDown__8CGamePadFv_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2629D8u; }
        if (ctx->pc != 0x2629D8u) { return; }
    }
    ctx->pc = 0x2629D8u;
label_2629d8:
    // 0x2629d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2629d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629dc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2629DCu;
    SET_GPR_U32(ctx, 31, 0x2629E4u);
    ctx->pc = 0x2629E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2629DCu;
            // 0x2629e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2629E4u; }
        if (ctx->pc != 0x2629E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2629E4u; }
        if (ctx->pc != 0x2629E4u) { return; }
    }
    ctx->pc = 0x2629E4u;
label_2629e4:
    // 0x2629e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2629e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2629e8:
    // 0x2629e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2629e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2629ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2629ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2629f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2629F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2629F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2629F0u;
            // 0x2629f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2629F8u;
}
