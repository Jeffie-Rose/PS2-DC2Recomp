#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSePanPrKr__FUiiiii
// Address: 0x18f290 - 0x18f2e8
void sndSetSePanPrKr__FUiiiii_0x18f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSePanPrKr__FUiiiii_0x18f290");
#endif

    switch (ctx->pc) {
        case 0x18f2bcu: goto label_18f2bc;
        case 0x18f2dcu: goto label_18f2dc;
        default: break;
    }

    ctx->pc = 0x18f290u;

    // 0x18f290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f294: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18f294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f29c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x18f29cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2a0: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x18f2a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2a4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x18f2a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2a8: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18F2A8u;
    {
        const bool branch_taken_0x18f2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18F2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2A8u;
            // 0x18f2ac: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2a8) {
            ctx->pc = 0x18F2DCu;
            goto label_18f2dc;
        }
    }
    ctx->pc = 0x18F2B0u;
    // 0x18f2b0: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x18f2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x18f2b4: 0xc0637f0  jal         func_18DFC0
    ctx->pc = 0x18F2B4u;
    SET_GPR_U32(ctx, 31, 0x18F2BCu);
    ctx->pc = 0x18F2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2B4u;
            // 0x18f2b8: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DFC0u;
    if (runtime->hasFunction(0x18DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x18DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2BCu; }
        if (ctx->pc != 0x18F2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortBankNo__FUiPiPi_0x18dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2BCu; }
        if (ctx->pc != 0x18F2BCu) { return; }
    }
    ctx->pc = 0x18F2BCu;
label_18f2bc:
    // 0x18f2bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F2BCu;
    {
        const bool branch_taken_0x18f2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f2bc) {
            ctx->pc = 0x18F2DCu;
            goto label_18f2dc;
        }
    }
    ctx->pc = 0x18F2C4u;
    // 0x18f2c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x18f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f2c8: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x18f2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2cc: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x18f2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x18f2d0: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x18f2d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2d4: 0xc063d50  jal         func_18F540
    ctx->pc = 0x18F2D4u;
    SET_GPR_U32(ctx, 31, 0x18F2DCu);
    ctx->pc = 0x18F2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2D4u;
            // 0x18f2d8: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F540u;
    if (runtime->hasFunction(0x18F540u)) {
        auto targetFn = runtime->lookupFunction(0x18F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2DCu; }
        if (ctx->pc != 0x18F2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePanPBPrKr__Fiiiiii_0x18f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2DCu; }
        if (ctx->pc != 0x18F2DCu) { return; }
    }
    ctx->pc = 0x18F2DCu;
label_18f2dc:
    // 0x18f2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2E0u;
            // 0x18f2e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F2E8u;
}
