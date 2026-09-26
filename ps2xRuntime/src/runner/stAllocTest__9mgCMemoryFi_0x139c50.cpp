#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: stAllocTest__9mgCMemoryFi
// Address: 0x139c50 - 0x139cac
void stAllocTest__9mgCMemoryFi_0x139c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stAllocTest__9mgCMemoryFi_0x139c50");
#endif

    switch (ctx->pc) {
        case 0x139c8cu: goto label_139c8c;
        default: break;
    }

    ctx->pc = 0x139c50u;

    // 0x139c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139c58: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x139c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x139c5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139C5Cu;
    {
        const bool branch_taken_0x139c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C5Cu;
            // 0x139c60: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c5c) {
            ctx->pc = 0x139C6Cu;
            goto label_139c6c;
        }
    }
    ctx->pc = 0x139C64u;
    // 0x139c64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x139C64u;
    {
        const bool branch_taken_0x139c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C64u;
            // 0x139c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c64) {
            ctx->pc = 0x139CA0u;
            goto label_139ca0;
        }
    }
    ctx->pc = 0x139C6Cu;
label_139c6c:
    // 0x139c6c: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x139c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x139c70: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x139c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x139c74: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x139c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139c78: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x139c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x139c7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139C7Cu;
    {
        const bool branch_taken_0x139c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C7Cu;
            // 0x139c80: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c7c) {
            ctx->pc = 0x139C94u;
            goto label_139c94;
        }
    }
    ctx->pc = 0x139C84u;
    // 0x139c84: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x139C84u;
    SET_GPR_U32(ctx, 31, 0x139C8Cu);
    ctx->pc = 0x139C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139C84u;
            // 0x139c88: 0x248425b0  addiu       $a0, $a0, 0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C8Cu; }
        if (ctx->pc != 0x139C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C8Cu; }
        if (ctx->pc != 0x139C8Cu) { return; }
    }
    ctx->pc = 0x139C8Cu;
label_139c8c:
    // 0x139c8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139C8Cu;
    {
        const bool branch_taken_0x139c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C8Cu;
            // 0x139c90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c8c) {
            ctx->pc = 0x139CA0u;
            goto label_139ca0;
        }
    }
    ctx->pc = 0x139C94u;
label_139c94:
    // 0x139c94: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x139c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x139c98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_139ca0:
    // 0x139ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x139CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CA4u;
            // 0x139ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139CACu;
}
