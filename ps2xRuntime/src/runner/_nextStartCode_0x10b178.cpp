#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _nextStartCode
// Address: 0x10b178 - 0x10b1f4
void _nextStartCode_0x10b178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_nextStartCode_0x10b178");
#endif

    switch (ctx->pc) {
        case 0x10b190u: goto label_10b190;
        case 0x10b1b8u: goto label_10b1b8;
        case 0x10b1c0u: goto label_10b1c0;
        case 0x10b1c8u: goto label_10b1c8;
        case 0x10b1d4u: goto label_10b1d4;
        default: break;
    }

    ctx->pc = 0x10b178u;

    // 0x10b178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b17c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10b188: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10B188u;
    SET_GPR_U32(ctx, 31, 0x10B190u);
    ctx->pc = 0x10B18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B188u;
            // 0x10b18c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B190u; }
        if (ctx->pc != 0x10B190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B190u; }
        if (ctx->pc != 0x10B190u) { return; }
    }
    ctx->pc = 0x10B190u;
label_10b190:
    // 0x10b190: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b194: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10b194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x10b198: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b19c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x10b19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10b1a0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x10b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x10b1a4: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x10b1a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10b1a8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B1A8u;
    {
        const bool branch_taken_0x10b1a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1A8u;
            // 0x10b1ac: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1a8) {
            ctx->pc = 0x10B1C8u;
            goto label_10b1c8;
        }
    }
    ctx->pc = 0x10B1B0u;
    // 0x10b1b0: 0xc042bce  jal         func_10AF38
    ctx->pc = 0x10B1B0u;
    SET_GPR_U32(ctx, 31, 0x10B1B8u);
    ctx->pc = 0x10B1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1B0u;
            // 0x10b1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AF38u;
    if (runtime->hasFunction(0x10AF38u)) {
        auto targetFn = runtime->lookupFunction(0x10AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1B8u; }
        if (ctx->pc != 0x10B1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x10af38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1B8u; }
        if (ctx->pc != 0x10B1B8u) { return; }
    }
    ctx->pc = 0x10B1B8u;
label_10b1b8:
    // 0x10b1b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10B1B8u;
    {
        const bool branch_taken_0x10b1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1B8u;
            // 0x10b1bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1b8) {
            ctx->pc = 0x10B1C8u;
            goto label_10b1c8;
        }
    }
    ctx->pc = 0x10B1C0u;
label_10b1c0:
    // 0x10b1c0: 0xc042bce  jal         func_10AF38
    ctx->pc = 0x10B1C0u;
    SET_GPR_U32(ctx, 31, 0x10B1C8u);
    ctx->pc = 0x10AF38u;
    if (runtime->hasFunction(0x10AF38u)) {
        auto targetFn = runtime->lookupFunction(0x10AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1C8u; }
        if (ctx->pc != 0x10B1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x10af38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1C8u; }
        if (ctx->pc != 0x10B1C8u) { return; }
    }
    ctx->pc = 0x10B1C8u;
label_10b1c8:
    // 0x10b1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1cc: 0xc042b8c  jal         func_10AE30
    ctx->pc = 0x10B1CCu;
    SET_GPR_U32(ctx, 31, 0x10B1D4u);
    ctx->pc = 0x10B1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1CCu;
            // 0x10b1d0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AE30u;
    if (runtime->hasFunction(0x10AE30u)) {
        auto targetFn = runtime->lookupFunction(0x10AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1D4u; }
        if (ctx->pc != 0x10B1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x10ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1D4u; }
        if (ctx->pc != 0x10B1D4u) { return; }
    }
    ctx->pc = 0x10B1D4u;
label_10b1d4:
    // 0x10b1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1d8: 0x1451fff9  bne         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10B1D8u;
    {
        const bool branch_taken_0x10b1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10B1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1D8u;
            // 0x10b1dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1d8) {
            ctx->pc = 0x10B1C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b1c0;
        }
    }
    ctx->pc = 0x10B1E0u;
    // 0x10b1e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b1e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b1e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x10B1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1ECu;
            // 0x10b1f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B1F4u;
}
