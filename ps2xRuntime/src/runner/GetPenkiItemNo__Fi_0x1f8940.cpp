#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPenkiItemNo__Fi
// Address: 0x1f8940 - 0x1f897c
void GetPenkiItemNo__Fi_0x1f8940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPenkiItemNo__Fi_0x1f8940");
#endif

    ctx->pc = 0x1f8940u;

    // 0x1f8940: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8940u;
    {
        const bool branch_taken_0x1f8940 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1F8944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8940u;
            // 0x1f8944: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8940) {
            ctx->pc = 0x1F8950u;
            goto label_1f8950;
        }
    }
    ctx->pc = 0x1F8948u;
    // 0x1f8948: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F8948u;
    {
        const bool branch_taken_0x1f8948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F894Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8948u;
            // 0x1f894c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8948) {
            ctx->pc = 0x1F8974u;
            goto label_1f8974;
        }
    }
    ctx->pc = 0x1F8950u;
label_1f8950:
    // 0x1f8950: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8950u;
    {
        const bool branch_taken_0x1f8950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8950u;
            // 0x1f8954: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8950) {
            ctx->pc = 0x1F8960u;
            goto label_1f8960;
        }
    }
    ctx->pc = 0x1F8958u;
    // 0x1f8958: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8958u;
    {
        const bool branch_taken_0x1f8958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8958u;
            // 0x1f895c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8958) {
            ctx->pc = 0x1F8974u;
            goto label_1f8974;
        }
    }
    ctx->pc = 0x1F8960u;
label_1f8960:
    // 0x1f8960: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f8960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f8964: 0x2442e390  addiu       $v0, $v0, -0x1C70
    ctx->pc = 0x1f8964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960016));
    // 0x1f8968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f896c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1f896cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8970: 0x0  nop
    ctx->pc = 0x1f8970u;
    // NOP
label_1f8974:
    // 0x1f8974: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F897Cu;
}
