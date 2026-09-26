#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __mcmp
// Address: 0x127c48 - 0x127cb0
void ps2___mcmp_0x127c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mcmp_0x127c48");
#endif

    switch (ctx->pc) {
        case 0x127c64u: goto label_127c64;
        case 0x127c88u: goto label_127c88;
        default: break;
    }

    ctx->pc = 0x127c48u;

    // 0x127c48: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x127c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x127c4c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x127c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x127c50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x127c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127c54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x127C54u;
    {
        const bool branch_taken_0x127c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127C54u;
            // 0x127c58: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127c54) {
            ctx->pc = 0x127C74u;
            goto label_127c74;
        }
    }
    ctx->pc = 0x127C5Cu;
    // 0x127c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x127C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127C64u;
label_127c64:
    // 0x127c64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127c68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x127C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127C6Cu;
            // 0x127c70: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127C74u;
label_127c74:
    // 0x127c74: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x127c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x127c78: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x127c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x127c7c: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x127c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x127c80: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x127c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127c84: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x127c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_127c88:
    // 0x127c88: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x127c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x127c8c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x127c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x127c90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x127c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127c94: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x127C94u;
    {
        const bool branch_taken_0x127c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x127c94) {
            ctx->pc = 0x127C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127C94u;
            // 0x127c98: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x127C64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127c64;
        }
    }
    ctx->pc = 0x127C9Cu;
    // 0x127c9c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x127c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x127ca0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x127CA0u;
    {
        const bool branch_taken_0x127ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CA0u;
            // 0x127ca4: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ca0) {
            ctx->pc = 0x127C88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127c88;
        }
    }
    ctx->pc = 0x127CA8u;
    // 0x127ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x127CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CA8u;
            // 0x127cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127CB0u;
}
