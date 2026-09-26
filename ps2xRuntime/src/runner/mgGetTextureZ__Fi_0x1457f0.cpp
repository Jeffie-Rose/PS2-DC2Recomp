#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetTextureZ__Fi
// Address: 0x1457f0 - 0x145828
void mgGetTextureZ__Fi_0x1457f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetTextureZ__Fi_0x1457f0");
#endif

    ctx->pc = 0x1457f0u;

    // 0x1457f0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1457F0u;
    {
        const bool branch_taken_0x1457f0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1457F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1457F0u;
            // 0x1457f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457f0) {
            ctx->pc = 0x145804u;
            goto label_145804;
        }
    }
    ctx->pc = 0x1457F8u;
    // 0x1457f8: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1457f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1457fc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1457FCu;
    {
        const bool branch_taken_0x1457fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x145800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1457FCu;
            // 0x145800: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457fc) {
            ctx->pc = 0x14580Cu;
            goto label_14580c;
        }
    }
    ctx->pc = 0x145804u;
label_145804:
    // 0x145804: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145804u;
    {
        const bool branch_taken_0x145804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145804) {
            ctx->pc = 0x145820u;
            goto label_145820;
        }
    }
    ctx->pc = 0x14580Cu;
label_14580c:
    // 0x14580c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x145810: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x145810u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x145814: 0x24422510  addiu       $v0, $v0, 0x2510
    ctx->pc = 0x145814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9488));
    // 0x145818: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x145818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14581c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_145820:
    // 0x145820: 0x3e00008  jr          $ra
    ctx->pc = 0x145820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145828u;
}
