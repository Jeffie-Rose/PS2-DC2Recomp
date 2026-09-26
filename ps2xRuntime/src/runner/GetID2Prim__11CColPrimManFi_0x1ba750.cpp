#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetID2Prim__11CColPrimManFi
// Address: 0x1ba750 - 0x1ba78c
void GetID2Prim__11CColPrimManFi_0x1ba750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetID2Prim__11CColPrimManFi_0x1ba750");
#endif

    ctx->pc = 0x1ba750u;

    // 0x1ba750: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA750u;
    {
        const bool branch_taken_0x1ba750 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1BA754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA750u;
            // 0x1ba754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba750) {
            ctx->pc = 0x1BA768u;
            goto label_1ba768;
        }
    }
    ctx->pc = 0x1BA758u;
    // 0x1ba758: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x1ba758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1ba75c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA75Cu;
    {
        const bool branch_taken_0x1ba75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA75Cu;
            // 0x1ba760: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba75c) {
            ctx->pc = 0x1BA770u;
            goto label_1ba770;
        }
    }
    ctx->pc = 0x1BA764u;
    // 0x1ba764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba768:
    // 0x1ba768: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA768u;
    {
        const bool branch_taken_0x1ba768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba768) {
            ctx->pc = 0x1BA784u;
            goto label_1ba784;
        }
    }
    ctx->pc = 0x1BA770u;
label_1ba770:
    // 0x1ba770: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ba770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ba774: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba778: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ba778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ba77c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1ba77cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x1ba780: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ba780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ba784:
    // 0x1ba784: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA78Cu;
}
