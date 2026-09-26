#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: WaitEnable__8CGamePadFv
// Address: 0x14a830 - 0x14a8e8
void WaitEnable__8CGamePadFv_0x14a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WaitEnable__8CGamePadFv_0x14a830");
#endif

    switch (ctx->pc) {
        case 0x14a848u: goto label_14a848;
        case 0x14a858u: goto label_14a858;
        case 0x14a860u: goto label_14a860;
        case 0x14a868u: goto label_14a868;
        case 0x14a874u: goto label_14a874;
        case 0x14a888u: goto label_14a888;
        case 0x14a8a0u: goto label_14a8a0;
        case 0x14a8a8u: goto label_14a8a8;
        case 0x14a8b0u: goto label_14a8b0;
        case 0x14a8bcu: goto label_14a8bc;
        case 0x14a8d0u: goto label_14a8d0;
        default: break;
    }

    ctx->pc = 0x14a830u;

    // 0x14a830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a840: 0xc040cc0  jal         func_103300
    ctx->pc = 0x14A840u;
    SET_GPR_U32(ctx, 31, 0x14A848u);
    ctx->pc = 0x14A844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A840u;
            // 0x14a844: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A848u; }
        if (ctx->pc != 0x14A848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A848u; }
        if (ctx->pc != 0x14A848u) { return; }
    }
    ctx->pc = 0x14A848u;
label_14a848:
    // 0x14a848: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x14a848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a84c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a850: 0xc052924  jal         func_14A490
    ctx->pc = 0x14A850u;
    SET_GPR_U32(ctx, 31, 0x14A858u);
    ctx->pc = 0x14A854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A850u;
            // 0x14a854: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A490u;
    if (runtime->hasFunction(0x14A490u)) {
        auto targetFn = runtime->lookupFunction(0x14A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A858u; }
        if (ctx->pc != 0x14A858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        read_pad__FP10PAD_STATUSii_0x14a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A858u; }
        if (ctx->pc != 0x14A858u) { return; }
    }
    ctx->pc = 0x14A858u;
label_14a858:
    // 0x14a858: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A858u;
    {
        const bool branch_taken_0x14a858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a858) {
            ctx->pc = 0x14A890u;
            goto label_14a890;
        }
    }
    ctx->pc = 0x14A860u;
label_14a860:
    // 0x14a860: 0xc040cc0  jal         func_103300
    ctx->pc = 0x14A860u;
    SET_GPR_U32(ctx, 31, 0x14A868u);
    ctx->pc = 0x14A864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A860u;
            // 0x14a864: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A868u; }
        if (ctx->pc != 0x14A868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A868u; }
        if (ctx->pc != 0x14A868u) { return; }
    }
    ctx->pc = 0x14A868u;
label_14a868:
    // 0x14a868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a86c: 0xc0485d6  jal         func_121758
    ctx->pc = 0x14A86Cu;
    SET_GPR_U32(ctx, 31, 0x14A874u);
    ctx->pc = 0x14A870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A86Cu;
            // 0x14a870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121758u;
    if (runtime->hasFunction(0x121758u)) {
        auto targetFn = runtime->lookupFunction(0x121758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A874u; }
        if (ctx->pc != 0x14A874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x121758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A874u; }
        if (ctx->pc != 0x14A874u) { return; }
    }
    ctx->pc = 0x14A874u;
label_14a874:
    // 0x14a874: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A874u;
    {
        const bool branch_taken_0x14a874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A874u;
            // 0x14a878: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a874) {
            ctx->pc = 0x14A890u;
            goto label_14a890;
        }
    }
    ctx->pc = 0x14A87Cu;
    // 0x14a87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a880: 0xc052924  jal         func_14A490
    ctx->pc = 0x14A880u;
    SET_GPR_U32(ctx, 31, 0x14A888u);
    ctx->pc = 0x14A884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A880u;
            // 0x14a884: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A490u;
    if (runtime->hasFunction(0x14A490u)) {
        auto targetFn = runtime->lookupFunction(0x14A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A888u; }
        if (ctx->pc != 0x14A888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        read_pad__FP10PAD_STATUSii_0x14a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A888u; }
        if (ctx->pc != 0x14A888u) { return; }
    }
    ctx->pc = 0x14A888u;
label_14a888:
    // 0x14a888: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14A888u;
    {
        const bool branch_taken_0x14a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a888) {
            ctx->pc = 0x14A860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a860;
        }
    }
    ctx->pc = 0x14A890u;
label_14a890:
    // 0x14a890: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x14a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x14a894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a898: 0xc052924  jal         func_14A490
    ctx->pc = 0x14A898u;
    SET_GPR_U32(ctx, 31, 0x14A8A0u);
    ctx->pc = 0x14A89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A898u;
            // 0x14a89c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A490u;
    if (runtime->hasFunction(0x14A490u)) {
        auto targetFn = runtime->lookupFunction(0x14A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8A0u; }
        if (ctx->pc != 0x14A8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        read_pad__FP10PAD_STATUSii_0x14a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8A0u; }
        if (ctx->pc != 0x14A8A0u) { return; }
    }
    ctx->pc = 0x14A8A0u;
label_14a8a0:
    // 0x14a8a0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A8A0u;
    {
        const bool branch_taken_0x14a8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a8a0) {
            ctx->pc = 0x14A8D8u;
            goto label_14a8d8;
        }
    }
    ctx->pc = 0x14A8A8u;
label_14a8a8:
    // 0x14a8a8: 0xc040cc0  jal         func_103300
    ctx->pc = 0x14A8A8u;
    SET_GPR_U32(ctx, 31, 0x14A8B0u);
    ctx->pc = 0x14A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8A8u;
            // 0x14a8ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103300u;
    if (runtime->hasFunction(0x103300u)) {
        auto targetFn = runtime->lookupFunction(0x103300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8B0u; }
        if (ctx->pc != 0x14A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x103300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8B0u; }
        if (ctx->pc != 0x14A8B0u) { return; }
    }
    ctx->pc = 0x14A8B0u;
label_14a8b0:
    // 0x14a8b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a8b4: 0xc0485d6  jal         func_121758
    ctx->pc = 0x14A8B4u;
    SET_GPR_U32(ctx, 31, 0x14A8BCu);
    ctx->pc = 0x14A8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8B4u;
            // 0x14a8b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121758u;
    if (runtime->hasFunction(0x121758u)) {
        auto targetFn = runtime->lookupFunction(0x121758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8BCu; }
        if (ctx->pc != 0x14A8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x121758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8BCu; }
        if (ctx->pc != 0x14A8BCu) { return; }
    }
    ctx->pc = 0x14A8BCu;
label_14a8bc:
    // 0x14a8bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A8BCu;
    {
        const bool branch_taken_0x14a8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8BCu;
            // 0x14a8c0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8bc) {
            ctx->pc = 0x14A8D8u;
            goto label_14a8d8;
        }
    }
    ctx->pc = 0x14A8C4u;
    // 0x14a8c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a8c8: 0xc052924  jal         func_14A490
    ctx->pc = 0x14A8C8u;
    SET_GPR_U32(ctx, 31, 0x14A8D0u);
    ctx->pc = 0x14A8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8C8u;
            // 0x14a8cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A490u;
    if (runtime->hasFunction(0x14A490u)) {
        auto targetFn = runtime->lookupFunction(0x14A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8D0u; }
        if (ctx->pc != 0x14A8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        read_pad__FP10PAD_STATUSii_0x14a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8D0u; }
        if (ctx->pc != 0x14A8D0u) { return; }
    }
    ctx->pc = 0x14A8D0u;
label_14a8d0:
    // 0x14a8d0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14A8D0u;
    {
        const bool branch_taken_0x14a8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a8d0) {
            ctx->pc = 0x14A8A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a8a8;
        }
    }
    ctx->pc = 0x14A8D8u;
label_14a8d8:
    // 0x14a8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a8dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14A8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8E0u;
            // 0x14a8e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A8E8u;
}
