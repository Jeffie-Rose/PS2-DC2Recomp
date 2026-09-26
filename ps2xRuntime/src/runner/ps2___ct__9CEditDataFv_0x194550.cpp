#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CEditDataFv
// Address: 0x194550 - 0x1945e4
void ps2___ct__9CEditDataFv_0x194550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CEditDataFv_0x194550");
#endif

    switch (ctx->pc) {
        case 0x19456cu: goto label_19456c;
        case 0x194578u: goto label_194578;
        case 0x194594u: goto label_194594;
        case 0x1945a0u: goto label_1945a0;
        case 0x1945c4u: goto label_1945c4;
        case 0x1945ccu: goto label_1945cc;
        default: break;
    }

    ctx->pc = 0x194550u;

    // 0x194550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19455c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194564: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x194564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x194568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19456c:
    // 0x19456c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19456cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194570: 0xc049c86  jal         func_127218
    ctx->pc = 0x194570u;
    SET_GPR_U32(ctx, 31, 0x194578u);
    ctx->pc = 0x194574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194570u;
            // 0x194574: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194578u; }
        if (ctx->pc != 0x194578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194578u; }
        if (ctx->pc != 0x194578u) { return; }
    }
    ctx->pc = 0x194578u;
label_194578:
    // 0x194578: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x194578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x19457c: 0x26222a3c  addiu       $v0, $s1, 0x2A3C
    ctx->pc = 0x19457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10812));
    // 0x194580: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x194580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194584: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x194584u;
    {
        const bool branch_taken_0x194584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194584u;
            // 0x194588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194584) {
            ctx->pc = 0x19456Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19456c;
        }
    }
    ctx->pc = 0x19458Cu;
    // 0x19458c: 0x26302a40  addiu       $s0, $s1, 0x2A40
    ctx->pc = 0x19458cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 10816));
    // 0x194590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194594:
    // 0x194594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194598: 0xc049c86  jal         func_127218
    ctx->pc = 0x194598u;
    SET_GPR_U32(ctx, 31, 0x1945A0u);
    ctx->pc = 0x19459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194598u;
            // 0x19459c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945A0u; }
        if (ctx->pc != 0x1945A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945A0u; }
        if (ctx->pc != 0x1945A0u) { return; }
    }
    ctx->pc = 0x1945A0u;
label_1945a0:
    // 0x1945a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1945a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1945a4: 0x26222c40  addiu       $v0, $s1, 0x2C40
    ctx->pc = 0x1945a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 11328));
    // 0x1945a8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1945a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1945ac: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1945ACu;
    {
        const bool branch_taken_0x1945ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1945B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1945ACu;
            // 0x1945b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945ac) {
            ctx->pc = 0x194594u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194594;
        }
    }
    ctx->pc = 0x1945B4u;
    // 0x1945b4: 0x26245040  addiu       $a0, $s1, 0x5040
    ctx->pc = 0x1945b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20544));
    // 0x1945b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1945b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1945bc: 0xc049c86  jal         func_127218
    ctx->pc = 0x1945BCu;
    SET_GPR_U32(ctx, 31, 0x1945C4u);
    ctx->pc = 0x1945C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1945BCu;
            // 0x1945c0: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945C4u; }
        if (ctx->pc != 0x1945C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945C4u; }
        if (ctx->pc != 0x1945C4u) { return; }
    }
    ctx->pc = 0x1945C4u;
label_1945c4:
    // 0x1945c4: 0xc0aa270  jal         func_2A89C0
    ctx->pc = 0x1945C4u;
    SET_GPR_U32(ctx, 31, 0x1945CCu);
    ctx->pc = 0x1945C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1945C4u;
            // 0x1945c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A89C0u;
    if (runtime->hasFunction(0x2A89C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A89C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945CCu; }
        if (ctx->pc != 0x1945CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CEditDataFv_0x2a89c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1945CCu; }
        if (ctx->pc != 0x1945CCu) { return; }
    }
    ctx->pc = 0x1945CCu;
label_1945cc:
    // 0x1945cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1945ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1945d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1945d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1945d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1945d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1945d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1945d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1945dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1945DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1945E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1945DCu;
            // 0x1945e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1945E4u;
}
