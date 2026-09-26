#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetSePitchPrKr__FUiiiii
// Address: 0x18f2f0 - 0x18f348
void sndSetSePitchPrKr__FUiiiii_0x18f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetSePitchPrKr__FUiiiii_0x18f2f0");
#endif

    switch (ctx->pc) {
        case 0x18f31cu: goto label_18f31c;
        case 0x18f33cu: goto label_18f33c;
        default: break;
    }

    ctx->pc = 0x18f2f0u;

    // 0x18f2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f2f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f2fc: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x18f2fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f300: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x18f300u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f304: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x18f304u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f308: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18F308u;
    {
        const bool branch_taken_0x18f308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18F30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F308u;
            // 0x18f30c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f308) {
            ctx->pc = 0x18F33Cu;
            goto label_18f33c;
        }
    }
    ctx->pc = 0x18F310u;
    // 0x18f310: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x18f310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x18f314: 0xc0637f0  jal         func_18DFC0
    ctx->pc = 0x18F314u;
    SET_GPR_U32(ctx, 31, 0x18F31Cu);
    ctx->pc = 0x18F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F314u;
            // 0x18f318: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DFC0u;
    if (runtime->hasFunction(0x18DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x18DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F31Cu; }
        if (ctx->pc != 0x18F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortBankNo__FUiPiPi_0x18dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F31Cu; }
        if (ctx->pc != 0x18F31Cu) { return; }
    }
    ctx->pc = 0x18F31Cu;
label_18f31c:
    // 0x18f31c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F31Cu;
    {
        const bool branch_taken_0x18f31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f31c) {
            ctx->pc = 0x18F33Cu;
            goto label_18f33c;
        }
    }
    ctx->pc = 0x18F324u;
    // 0x18f324: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f328: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x18f328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f32c: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x18f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x18f330: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x18f330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f334: 0xc063d74  jal         func_18F5D0
    ctx->pc = 0x18F334u;
    SET_GPR_U32(ctx, 31, 0x18F33Cu);
    ctx->pc = 0x18F338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F334u;
            // 0x18f338: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F5D0u;
    if (runtime->hasFunction(0x18F5D0u)) {
        auto targetFn = runtime->lookupFunction(0x18F5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F33Cu; }
        if (ctx->pc != 0x18F33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePitchPBPrKr__Fiiiiii_0x18f5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F33Cu; }
        if (ctx->pc != 0x18F33Cu) { return; }
    }
    ctx->pc = 0x18F33Cu;
label_18f33c:
    // 0x18f33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f340: 0x3e00008  jr          $ra
    ctx->pc = 0x18F340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F340u;
            // 0x18f344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F348u;
}
