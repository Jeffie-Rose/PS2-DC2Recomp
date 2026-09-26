#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNetaID__15CInventUserDataFi
// Address: 0x1fec00 - 0x1fec34
void GetNetaID__15CInventUserDataFi_0x1fec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNetaID__15CInventUserDataFi_0x1fec00");
#endif

    ctx->pc = 0x1fec00u;

    // 0x1fec00: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEC00u;
    {
        const bool branch_taken_0x1fec00 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FEC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC00u;
            // 0x1fec04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec00) {
            ctx->pc = 0x1FEC18u;
            goto label_1fec18;
        }
    }
    ctx->pc = 0x1FEC08u;
    // 0x1fec08: 0x28a20200  slti        $v0, $a1, 0x200
    ctx->pc = 0x1fec08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1fec0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEC0Cu;
    {
        const bool branch_taken_0x1fec0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC0Cu;
            // 0x1fec10: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec0c) {
            ctx->pc = 0x1FEC20u;
            goto label_1fec20;
        }
    }
    ctx->pc = 0x1FEC14u;
    // 0x1fec14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fec14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fec18:
    // 0x1fec18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEC18u;
    {
        const bool branch_taken_0x1fec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec18) {
            ctx->pc = 0x1FEC2Cu;
            goto label_1fec2c;
        }
    }
    ctx->pc = 0x1FEC20u;
label_1fec20:
    // 0x1fec20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fec24: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x1fec24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fec28: 0x0  nop
    ctx->pc = 0x1fec28u;
    // NOP
label_1fec2c:
    // 0x1fec2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEC34u;
}
