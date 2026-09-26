#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sendToIOP__FiPUci
// Address: 0x29b6e0 - 0x29b760
void sendToIOP__FiPUci_0x29b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sendToIOP__FiPUci_0x29b6e0");
#endif

    switch (ctx->pc) {
        case 0x29b718u: goto label_29b718;
        case 0x29b724u: goto label_29b724;
        case 0x29b728u: goto label_29b728;
        case 0x29b730u: goto label_29b730;
        default: break;
    }

    ctx->pc = 0x29b6e0u;

    // 0x29b6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29b6e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b6ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29b6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6f0: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B6F0u;
    {
        const bool branch_taken_0x29b6f0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x29B6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6F0u;
            // 0x29b6f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6f0) {
            ctx->pc = 0x29B700u;
            goto label_29b700;
        }
    }
    ctx->pc = 0x29B6F8u;
    // 0x29b6f8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29B6F8u;
    {
        const bool branch_taken_0x29b6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6F8u;
            // 0x29b6fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6f8) {
            ctx->pc = 0x29B74Cu;
            goto label_29b74c;
        }
    }
    ctx->pc = 0x29B700u;
label_29b700:
    // 0x29b700: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x29b700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x29b704: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29b704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x29b708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29b708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b70c: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x29b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x29b710: 0xc0440d8  jal         func_110360
    ctx->pc = 0x29B710u;
    SET_GPR_U32(ctx, 31, 0x29B718u);
    ctx->pc = 0x29B714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B710u;
            // 0x29b714: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B718u; }
        if (ctx->pc != 0x29B718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B718u; }
        if (ctx->pc != 0x29B718u) { return; }
    }
    ctx->pc = 0x29B718u;
label_29b718:
    // 0x29b718: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29b718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29b71c: 0xc044128  jal         func_1104A0
    ctx->pc = 0x29B71Cu;
    SET_GPR_U32(ctx, 31, 0x29B724u);
    ctx->pc = 0x29B720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B71Cu;
            // 0x29b720: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1104A0u;
    if (runtime->hasFunction(0x1104A0u)) {
        auto targetFn = runtime->lookupFunction(0x1104A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B724u; }
        if (ctx->pc != 0x29B724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x1104a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B724u; }
        if (ctx->pc != 0x29B724u) { return; }
    }
    ctx->pc = 0x29B724u;
label_29b724:
    // 0x29b724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29b724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b728:
    // 0x29b728: 0xc044120  jal         func_110480
    ctx->pc = 0x29B728u;
    SET_GPR_U32(ctx, 31, 0x29B730u);
    ctx->pc = 0x29B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B728u;
            // 0x29b72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110480u;
    if (runtime->hasFunction(0x110480u)) {
        auto targetFn = runtime->lookupFunction(0x110480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B730u; }
        if (ctx->pc != 0x29B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x110480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B730u; }
        if (ctx->pc != 0x29B730u) { return; }
    }
    ctx->pc = 0x29B730u;
label_29b730:
    // 0x29b730: 0x0  nop
    ctx->pc = 0x29b730u;
    // NOP
    // 0x29b734: 0x0  nop
    ctx->pc = 0x29b734u;
    // NOP
    // 0x29b738: 0x0  nop
    ctx->pc = 0x29b738u;
    // NOP
    // 0x29b73c: 0x0  nop
    ctx->pc = 0x29b73cu;
    // NOP
    // 0x29b740: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29B740u;
    {
        const bool branch_taken_0x29b740 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29b740) {
            ctx->pc = 0x29B728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b728;
        }
    }
    ctx->pc = 0x29B748u;
    // 0x29b748: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29b748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29b74c:
    // 0x29b74c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b758: 0x3e00008  jr          $ra
    ctx->pc = 0x29B758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B758u;
            // 0x29b75c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B760u;
}
