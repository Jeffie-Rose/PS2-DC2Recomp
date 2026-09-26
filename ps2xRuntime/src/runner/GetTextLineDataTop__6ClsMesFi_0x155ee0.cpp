#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTextLineDataTop__6ClsMesFi
// Address: 0x155ee0 - 0x155f4c
void GetTextLineDataTop__6ClsMesFi_0x155ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTextLineDataTop__6ClsMesFi_0x155ee0");
#endif

    switch (ctx->pc) {
        case 0x155efcu: goto label_155efc;
        default: break;
    }

    ctx->pc = 0x155ee0u;

    // 0x155ee0: 0x8c8221d4  lw          $v0, 0x21D4($a0)
    ctx->pc = 0x155ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8660)));
    // 0x155ee4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x155ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ee8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x155ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155eec: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x155eecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x155ef0: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x155EF0u;
    {
        const bool branch_taken_0x155ef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155EF0u;
            // 0x155ef4: 0x24460002  addiu       $a2, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ef0) {
            ctx->pc = 0x155F3Cu;
            goto label_155f3c;
        }
    }
    ctx->pc = 0x155EF8u;
    // 0x155ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155efc:
    // 0x155efc: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x155efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x155f00: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x155f00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x155f04: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x155F04u;
    {
        const bool branch_taken_0x155f04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x155f04) {
            ctx->pc = 0x155F2Cu;
            goto label_155f2c;
        }
    }
    ctx->pc = 0x155F0Cu;
    // 0x155f0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155f10: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x155f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x155f14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x155f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x155f18: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x155f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x155f1c: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x155f1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x155f20: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x155f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x155f24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x155F24u;
    {
        const bool branch_taken_0x155f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155F24u;
            // 0x155f28: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f24) {
            ctx->pc = 0x155F44u;
            goto label_155f44;
        }
    }
    ctx->pc = 0x155F2Cu;
label_155f2c:
    // 0x155f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155f30: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x155f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x155f34: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x155F34u;
    {
        const bool branch_taken_0x155f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155F34u;
            // 0x155f38: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f34) {
            ctx->pc = 0x155EFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155efc;
        }
    }
    ctx->pc = 0x155F3Cu;
label_155f3c:
    // 0x155f3c: 0x0  nop
    ctx->pc = 0x155f3cu;
    // NOP
    // 0x155f40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x155f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155f44:
    // 0x155f44: 0x3e00008  jr          $ra
    ctx->pc = 0x155F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155F4Cu;
}
