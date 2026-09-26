#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSePlayPrKr__FUiiiiiiii
// Address: 0x18f170 - 0x18f1e0
void sndSePlayPrKr__FUiiiiiiii_0x18f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSePlayPrKr__FUiiiiiiii_0x18f170");
#endif

    switch (ctx->pc) {
        case 0x18f1a4u: goto label_18f1a4;
        case 0x18f1d4u: goto label_18f1d4;
        default: break;
    }

    ctx->pc = 0x18f170u;

    // 0x18f170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f174: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18f17c: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x18f17cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f180: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x18f180u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f184: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x18f184u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f188: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x18f188u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f18c: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x18f18cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f190: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F190u;
    {
        const bool branch_taken_0x18f190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18F194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F190u;
            // 0x18f194: 0x140602d  daddu       $t4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f190) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18F198u;
    // 0x18f198: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x18f198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x18f19c: 0xc0637f0  jal         func_18DFC0
    ctx->pc = 0x18F19Cu;
    SET_GPR_U32(ctx, 31, 0x18F1A4u);
    ctx->pc = 0x18F1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F19Cu;
            // 0x18f1a0: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DFC0u;
    if (runtime->hasFunction(0x18DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x18DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1A4u; }
        if (ctx->pc != 0x18F1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortBankNo__FUiPiPi_0x18dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1A4u; }
        if (ctx->pc != 0x18F1A4u) { return; }
    }
    ctx->pc = 0x18F1A4u;
label_18f1a4:
    // 0x18f1a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18F1A4u;
    {
        const bool branch_taken_0x18f1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1a4) {
            ctx->pc = 0x18F1D4u;
            goto label_18f1d4;
        }
    }
    ctx->pc = 0x18F1ACu;
    // 0x18f1ac: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x18f1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x18f1b0: 0x320302d  daddu       $a2, $t9, $zero
    ctx->pc = 0x18f1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x18f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18f1b8: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x18f1b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1bc: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x18f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x18f1c0: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x18f1c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1c4: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x18f1c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1c8: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x18f1c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1cc: 0xc063cd4  jal         func_18F350
    ctx->pc = 0x18F1CCu;
    SET_GPR_U32(ctx, 31, 0x18F1D4u);
    ctx->pc = 0x18F1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1CCu;
            // 0x18f1d0: 0x180582d  daddu       $t3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F350u;
    if (runtime->hasFunction(0x18F350u)) {
        auto targetFn = runtime->lookupFunction(0x18F350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1D4u; }
        if (ctx->pc != 0x18F1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayPBPrKr__Fiiiiiiiii_0x18f350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1D4u; }
        if (ctx->pc != 0x18F1D4u) { return; }
    }
    ctx->pc = 0x18F1D4u;
label_18f1d4:
    // 0x18f1d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x18F1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1D8u;
            // 0x18f1dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F1E0u;
}
