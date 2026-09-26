#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Add__18CVillagerPlaceInfoFP9mgCMemory
// Address: 0x2cd190 - 0x2cd214
void Add__18CVillagerPlaceInfoFP9mgCMemory_0x2cd190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add__18CVillagerPlaceInfoFP9mgCMemory_0x2cd190");
#endif

    switch (ctx->pc) {
        case 0x2cd1acu: goto label_2cd1ac;
        case 0x2cd1b8u: goto label_2cd1b8;
        case 0x2cd1e4u: goto label_2cd1e4;
        default: break;
    }

    ctx->pc = 0x2cd190u;

    // 0x2cd190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cd194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cd198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd19c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cd1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1a4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2CD1A4u;
    SET_GPR_U32(ctx, 31, 0x2CD1ACu);
    ctx->pc = 0x2CD1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD1A4u;
            // 0x2cd1a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1ACu; }
        if (ctx->pc != 0x2CD1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1ACu; }
        if (ctx->pc != 0x2CD1ACu) { return; }
    }
    ctx->pc = 0x2CD1ACu;
label_2cd1ac:
    // 0x2cd1ac: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2cd1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cd1b0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2CD1B0u;
    SET_GPR_U32(ctx, 31, 0x2CD1B8u);
    ctx->pc = 0x2CD1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD1B0u;
            // 0x2cd1b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1B8u; }
        if (ctx->pc != 0x2CD1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1B8u; }
        if (ctx->pc != 0x2CD1B8u) { return; }
    }
    ctx->pc = 0x2CD1B8u;
label_2cd1b8:
    // 0x2cd1b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD1B8u;
    {
        const bool branch_taken_0x2cd1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd1b8) {
            ctx->pc = 0x2CD1C8u;
            goto label_2cd1c8;
        }
    }
    ctx->pc = 0x2CD1C0u;
    // 0x2cd1c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CD1C0u;
    {
        const bool branch_taken_0x2cd1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD1C0u;
            // 0x2cd1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1c0) {
            ctx->pc = 0x2CD204u;
            goto label_2cd204;
        }
    }
    ctx->pc = 0x2CD1C8u;
label_2cd1c8:
    // 0x2cd1c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cd1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cd1cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cd1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cd1d0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2cd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2cd1d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD1D4u;
    {
        const bool branch_taken_0x2cd1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd1d4) {
            ctx->pc = 0x2CD1E8u;
            goto label_2cd1e8;
        }
    }
    ctx->pc = 0x2CD1DCu;
    // 0x2cd1dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD1DCu;
    {
        const bool branch_taken_0x2cd1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD1DCu;
            // 0x2cd1e0: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1dc) {
            ctx->pc = 0x2CD204u;
            goto label_2cd204;
        }
    }
    ctx->pc = 0x2CD1E4u;
label_2cd1e4:
    // 0x2cd1e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2cd1e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd1e8:
    // 0x2cd1e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cd1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cd1ec: 0x0  nop
    ctx->pc = 0x2cd1ecu;
    // NOP
    // 0x2cd1f0: 0x0  nop
    ctx->pc = 0x2cd1f0u;
    // NOP
    // 0x2cd1f4: 0x0  nop
    ctx->pc = 0x2cd1f4u;
    // NOP
    // 0x2cd1f8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CD1F8u;
    {
        const bool branch_taken_0x2cd1f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd1f8) {
            ctx->pc = 0x2CD1E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd1e4;
        }
    }
    ctx->pc = 0x2CD200u;
    // 0x2cd200: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2cd200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2cd204:
    // 0x2cd204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cd204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd20c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD20Cu;
            // 0x2cd210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD214u;
}
