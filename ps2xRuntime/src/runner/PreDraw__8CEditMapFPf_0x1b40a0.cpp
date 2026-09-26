#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PreDraw__8CEditMapFPf
// Address: 0x1b40a0 - 0x1b412c
void PreDraw__8CEditMapFPf_0x1b40a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PreDraw__8CEditMapFPf_0x1b40a0");
#endif

    switch (ctx->pc) {
        case 0x1b40bcu: goto label_1b40bc;
        case 0x1b40ccu: goto label_1b40cc;
        case 0x1b40d8u: goto label_1b40d8;
        case 0x1b40f4u: goto label_1b40f4;
        default: break;
    }

    ctx->pc = 0x1b40a0u;

    // 0x1b40a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b40a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b40a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b40a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b40a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b40a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b40ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b40acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b40b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b40b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40b4: 0xc0575e8  jal         func_15D7A0
    ctx->pc = 0x1B40B4u;
    SET_GPR_U32(ctx, 31, 0x1B40BCu);
    ctx->pc = 0x1B40B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40B4u;
            // 0x1b40b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D7A0u;
    if (runtime->hasFunction(0x15D7A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40BCu; }
        if (ctx->pc != 0x1B40BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PreDraw__4CMapFPf_0x15d7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40BCu; }
        if (ctx->pc != 0x1B40BCu) { return; }
    }
    ctx->pc = 0x1B40BCu;
label_1b40bc:
    // 0x1b40bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b40bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40c0: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x1b40c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1b40c4: 0xc0575cc  jal         func_15D730
    ctx->pc = 0x1B40C4u;
    SET_GPR_U32(ctx, 31, 0x1B40CCu);
    ctx->pc = 0x1B40C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40C4u;
            // 0x1b40c8: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40CCu; }
        if (ctx->pc != 0x1B40CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40CCu; }
        if (ctx->pc != 0x1B40CCu) { return; }
    }
    ctx->pc = 0x1B40CCu;
label_1b40cc:
    // 0x1b40cc: 0x8e500d44  lw          $s0, 0xD44($s2)
    ctx->pc = 0x1b40ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3396)));
    // 0x1b40d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B40D0u;
    {
        const bool branch_taken_0x1b40d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B40D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40D0u;
            // 0x1b40d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40d0) {
            ctx->pc = 0x1B4100u;
            goto label_1b4100;
        }
    }
    ctx->pc = 0x1B40D8u;
label_1b40d8:
    // 0x1b40d8: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x1b40d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1b40dc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1b40dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1b40e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b40e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b40e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B40E4u;
    {
        const bool branch_taken_0x1b40e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B40E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40E4u;
            // 0x1b40e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40e4) {
            ctx->pc = 0x1B40F4u;
            goto label_1b40f4;
        }
    }
    ctx->pc = 0x1B40ECu;
    // 0x1b40ec: 0xc059e7c  jal         func_1679F0
    ctx->pc = 0x1B40ECu;
    SET_GPR_U32(ctx, 31, 0x1B40F4u);
    ctx->pc = 0x1B40F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40ECu;
            // 0x1b40f0: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1679F0u;
    if (runtime->hasFunction(0x1679F0u)) {
        auto targetFn = runtime->lookupFunction(0x1679F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40F4u; }
        if (ctx->pc != 0x1B40F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepFuncPoint__9CMapPartsFR15CFuncPointCheck_0x1679f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B40F4u; }
        if (ctx->pc != 0x1B40F4u) { return; }
    }
    ctx->pc = 0x1B40F4u;
label_1b40f4:
    // 0x1b40f4: 0x0  nop
    ctx->pc = 0x1b40f4u;
    // NOP
    // 0x1b40f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b40f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b40fc: 0x26100330  addiu       $s0, $s0, 0x330
    ctx->pc = 0x1b40fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1b4100:
    // 0x1b4100: 0x8e420d40  lw          $v0, 0xD40($s2)
    ctx->pc = 0x1b4100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3392)));
    // 0x1b4104: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b4104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b4108: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B4108u;
    {
        const bool branch_taken_0x1b4108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4108) {
            ctx->pc = 0x1B40D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b40d8;
        }
    }
    ctx->pc = 0x1B4110u;
    // 0x1b4110: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b4110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b4118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b411c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b411cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4124: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4124u;
            // 0x1b4128: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B412Cu;
}
