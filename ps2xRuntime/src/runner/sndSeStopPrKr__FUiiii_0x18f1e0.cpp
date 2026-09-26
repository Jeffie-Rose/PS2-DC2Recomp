#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSeStopPrKr__FUiiii
// Address: 0x18f1e0 - 0x18f230
void sndSeStopPrKr__FUiiii_0x18f1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSeStopPrKr__FUiiii_0x18f1e0");
#endif

    switch (ctx->pc) {
        case 0x18f208u: goto label_18f208;
        case 0x18f224u: goto label_18f224;
        default: break;
    }

    ctx->pc = 0x18f1e0u;

    // 0x18f1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f1e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f1e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f1ec: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x18f1ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1f0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x18f1f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1f4: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18F1F4u;
    {
        const bool branch_taken_0x18f1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18F1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1F4u;
            // 0x18f1f8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1f4) {
            ctx->pc = 0x18F224u;
            goto label_18f224;
        }
    }
    ctx->pc = 0x18F1FCu;
    // 0x18f1fc: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x18f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x18f200: 0xc0637f0  jal         func_18DFC0
    ctx->pc = 0x18F200u;
    SET_GPR_U32(ctx, 31, 0x18F208u);
    ctx->pc = 0x18F204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F200u;
            // 0x18f204: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DFC0u;
    if (runtime->hasFunction(0x18DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x18DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F208u; }
        if (ctx->pc != 0x18F208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortBankNo__FUiPiPi_0x18dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F208u; }
        if (ctx->pc != 0x18F208u) { return; }
    }
    ctx->pc = 0x18F208u;
label_18f208:
    // 0x18f208: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F208u;
    {
        const bool branch_taken_0x18f208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f208) {
            ctx->pc = 0x18F224u;
            goto label_18f224;
        }
    }
    ctx->pc = 0x18F210u;
    // 0x18f210: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x18f210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f214: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x18f214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f218: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x18f218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x18f21c: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F21Cu;
    SET_GPR_U32(ctx, 31, 0x18F224u);
    ctx->pc = 0x18F220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F21Cu;
            // 0x18f220: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F224u; }
        if (ctx->pc != 0x18F224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStopPBPrKr__Fiiiii_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F224u; }
        if (ctx->pc != 0x18F224u) { return; }
    }
    ctx->pc = 0x18F224u;
label_18f224:
    // 0x18f224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f228: 0x3e00008  jr          $ra
    ctx->pc = 0x18F228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F228u;
            // 0x18f22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F230u;
}
