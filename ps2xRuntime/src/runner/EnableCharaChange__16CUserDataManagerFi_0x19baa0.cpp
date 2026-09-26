#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnableCharaChange__16CUserDataManagerFi
// Address: 0x19baa0 - 0x19baec
void EnableCharaChange__16CUserDataManagerFi_0x19baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableCharaChange__16CUserDataManagerFi_0x19baa0");
#endif

    ctx->pc = 0x19baa0u;

    // 0x19baa0: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19BAA0u;
    {
        const bool branch_taken_0x19baa0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x19baa0) {
            ctx->pc = 0x19BAE4u;
            goto label_19bae4;
        }
    }
    ctx->pc = 0x19BAA8u;
    // 0x19baa8: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x19baa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19baac: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BAACu;
    {
        const bool branch_taken_0x19baac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAACu;
            // 0x19bab0: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19baac) {
            ctx->pc = 0x19BAC0u;
            goto label_19bac0;
        }
    }
    ctx->pc = 0x19BAB4u;
    // 0x19bab4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19BAB4u;
    {
        const bool branch_taken_0x19bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bab4) {
            ctx->pc = 0x19BAE4u;
            goto label_19bae4;
        }
    }
    ctx->pc = 0x19BABCu;
    // 0x19babc: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19babcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_19bac0:
    // 0x19bac0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19bac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bac4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19bac4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19bac8: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x19bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x19bacc: 0x94234d92  lhu         $v1, 0x4D92($at)
    ctx->pc = 0x19baccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19858)));
    // 0x19bad0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x19bad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x19bad4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19bad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19bad8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x19bad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x19badc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19badcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19bae0: 0xa4234d92  sh          $v1, 0x4D92($at)
    ctx->pc = 0x19bae0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19858), (uint16_t)GPR_U32(ctx, 3));
label_19bae4:
    // 0x19bae4: 0x3e00008  jr          $ra
    ctx->pc = 0x19BAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BAECu;
}
