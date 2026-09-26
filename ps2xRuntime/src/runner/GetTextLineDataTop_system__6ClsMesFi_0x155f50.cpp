#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTextLineDataTop_system__6ClsMesFi
// Address: 0x155f50 - 0x155fbc
void GetTextLineDataTop_system__6ClsMesFi_0x155f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTextLineDataTop_system__6ClsMesFi_0x155f50");
#endif

    switch (ctx->pc) {
        case 0x155f6cu: goto label_155f6c;
        default: break;
    }

    ctx->pc = 0x155f50u;

    // 0x155f50: 0x8c8221d8  lw          $v0, 0x21D8($a0)
    ctx->pc = 0x155f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8664)));
    // 0x155f54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x155f54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f58: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x155f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155f5c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x155f5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x155f60: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x155F60u;
    {
        const bool branch_taken_0x155f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155F60u;
            // 0x155f64: 0x24460002  addiu       $a2, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f60) {
            ctx->pc = 0x155FACu;
            goto label_155fac;
        }
    }
    ctx->pc = 0x155F68u;
    // 0x155f68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155f6c:
    // 0x155f6c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x155f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x155f70: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x155f70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x155f74: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155F74u;
    {
        const bool branch_taken_0x155f74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x155f74) {
            ctx->pc = 0x155F9Cu;
            goto label_155f9c;
        }
    }
    ctx->pc = 0x155F7Cu;
    // 0x155f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155f80: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x155f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x155f84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x155f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x155f88: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x155f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x155f8c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x155f8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x155f90: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x155f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x155f94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155F94u;
    {
        const bool branch_taken_0x155f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155F94u;
            // 0x155f98: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f94) {
            ctx->pc = 0x155FB4u;
            goto label_155fb4;
        }
    }
    ctx->pc = 0x155F9Cu;
label_155f9c:
    // 0x155f9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155fa0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x155fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x155fa4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x155FA4u;
    {
        const bool branch_taken_0x155fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155FA4u;
            // 0x155fa8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155fa4) {
            ctx->pc = 0x155F6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155f6c;
        }
    }
    ctx->pc = 0x155FACu;
label_155fac:
    // 0x155fac: 0x0  nop
    ctx->pc = 0x155facu;
    // NOP
    // 0x155fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x155fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155fb4:
    // 0x155fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x155FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155FBCu;
}
