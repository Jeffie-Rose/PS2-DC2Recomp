#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Alloc__9mgCMemoryFi
// Address: 0x139d20 - 0x139d90
void Alloc__9mgCMemoryFi_0x139d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Alloc__9mgCMemoryFi_0x139d20");
#endif

    switch (ctx->pc) {
        case 0x139d6cu: goto label_139d6c;
        default: break;
    }

    ctx->pc = 0x139d20u;

    // 0x139d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139d28: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x139d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x139d2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139D2Cu;
    {
        const bool branch_taken_0x139d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D2Cu;
            // 0x139d30: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d2c) {
            ctx->pc = 0x139D3Cu;
            goto label_139d3c;
        }
    }
    ctx->pc = 0x139D34u;
    // 0x139d34: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x139D34u;
    {
        const bool branch_taken_0x139d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D34u;
            // 0x139d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d34) {
            ctx->pc = 0x139D84u;
            goto label_139d84;
        }
    }
    ctx->pc = 0x139D3Cu;
label_139d3c:
    // 0x139d3c: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139D3Cu;
    {
        const bool branch_taken_0x139d3c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x139D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D3Cu;
            // 0x139d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d3c) {
            ctx->pc = 0x139D4Cu;
            goto label_139d4c;
        }
    }
    ctx->pc = 0x139D44u;
    // 0x139d44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x139D44u;
    {
        const bool branch_taken_0x139d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D44u;
            // 0x139d48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d44) {
            ctx->pc = 0x139D88u;
            goto label_139d88;
        }
    }
    ctx->pc = 0x139D4Cu;
label_139d4c:
    // 0x139d4c: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x139d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x139d50: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x139d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x139d54: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x139d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139d58: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x139d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x139d5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139D5Cu;
    {
        const bool branch_taken_0x139d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D5Cu;
            // 0x139d60: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d5c) {
            ctx->pc = 0x139D74u;
            goto label_139d74;
        }
    }
    ctx->pc = 0x139D64u;
    // 0x139d64: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x139D64u;
    SET_GPR_U32(ctx, 31, 0x139D6Cu);
    ctx->pc = 0x139D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139D64u;
            // 0x139d68: 0x248425b0  addiu       $a0, $a0, 0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139D6Cu; }
        if (ctx->pc != 0x139D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139D6Cu; }
        if (ctx->pc != 0x139D6Cu) { return; }
    }
    ctx->pc = 0x139D6Cu;
label_139d6c:
    // 0x139d6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x139D6Cu;
    {
        const bool branch_taken_0x139d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D6Cu;
            // 0x139d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d6c) {
            ctx->pc = 0x139D84u;
            goto label_139d84;
        }
    }
    ctx->pc = 0x139D74u;
label_139d74:
    // 0x139d74: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x139d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x139d78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139d7c: 0xace50024  sw          $a1, 0x24($a3)
    ctx->pc = 0x139d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 5));
    // 0x139d80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_139d84:
    // 0x139d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139d88:
    // 0x139d88: 0x3e00008  jr          $ra
    ctx->pc = 0x139D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D88u;
            // 0x139d8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139D90u;
}
