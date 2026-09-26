#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsRunEvent__11CMonsterManFv
// Address: 0x1dd4a0 - 0x1dd4ec
void IsRunEvent__11CMonsterManFv_0x1dd4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsRunEvent__11CMonsterManFv_0x1dd4a0");
#endif

    switch (ctx->pc) {
        case 0x1dd4acu: goto label_1dd4ac;
        default: break;
    }

    ctx->pc = 0x1dd4a0u;

    // 0x1dd4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd4a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dd4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dd4ac:
    // 0x1dd4ac: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1dd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1dd4b0: 0x8c460484  lw          $a2, 0x484($v0)
    ctx->pc = 0x1dd4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1dd4b4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD4B4u;
    {
        const bool branch_taken_0x1dd4b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd4b4) {
            ctx->pc = 0x1DD4D0u;
            goto label_1dd4d0;
        }
    }
    ctx->pc = 0x1DD4BCu;
    // 0x1dd4bc: 0x84c212e0  lh          $v0, 0x12E0($a2)
    ctx->pc = 0x1dd4bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4832)));
    // 0x1dd4c0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD4C0u;
    {
        const bool branch_taken_0x1dd4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dd4c0) {
            ctx->pc = 0x1DD4D0u;
            goto label_1dd4d0;
        }
    }
    ctx->pc = 0x1DD4C8u;
    // 0x1dd4c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD4C8u;
    {
        const bool branch_taken_0x1dd4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4C8u;
            // 0x1dd4cc: 0xa4c312e0  sh          $v1, 0x12E0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4832), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4c8) {
            ctx->pc = 0x1DD4E4u;
            goto label_1dd4e4;
        }
    }
    ctx->pc = 0x1DD4D0u;
label_1dd4d0:
    // 0x1dd4d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1dd4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1dd4d4: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x1dd4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1dd4d8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DD4D8u;
    {
        const bool branch_taken_0x1dd4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4D8u;
            // 0x1dd4dc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4d8) {
            ctx->pc = 0x1DD4ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dd4ac;
        }
    }
    ctx->pc = 0x1DD4E0u;
    // 0x1dd4e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dd4e4:
    // 0x1dd4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD4ECu;
}
