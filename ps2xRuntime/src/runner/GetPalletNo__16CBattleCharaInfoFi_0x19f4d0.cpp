#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPalletNo__16CBattleCharaInfoFi
// Address: 0x19f4d0 - 0x19f514
void GetPalletNo__16CBattleCharaInfoFi_0x19f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPalletNo__16CBattleCharaInfoFi_0x19f4d0");
#endif

    ctx->pc = 0x19f4d0u;

    // 0x19f4d0: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x19f4d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x19f4d4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19F4D4u;
    {
        const bool branch_taken_0x19f4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4D4u;
            // 0x19f4d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4d4) {
            ctx->pc = 0x19F50Cu;
            goto label_19f50c;
        }
    }
    ctx->pc = 0x19F4DCu;
    // 0x19f4dc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F4DCu;
    {
        const bool branch_taken_0x19f4dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4DCu;
            // 0x19f4e0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4dc) {
            ctx->pc = 0x19F4F4u;
            goto label_19f4f4;
        }
    }
    ctx->pc = 0x19F4E4u;
    // 0x19f4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f4e8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F4E8u;
    {
        const bool branch_taken_0x19f4e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f4e8) {
            ctx->pc = 0x19F508u;
            goto label_19f508;
        }
    }
    ctx->pc = 0x19F4F0u;
    // 0x19f4f0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x19f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_19f4f4:
    // 0x19f4f4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x19f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19f4f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f4fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19f500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F500u;
    {
        const bool branch_taken_0x19f500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F500u;
            // 0x19f504: 0x8442004c  lh          $v0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f500) {
            ctx->pc = 0x19F50Cu;
            goto label_19f50c;
        }
    }
    ctx->pc = 0x19F508u;
label_19f508:
    // 0x19f508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19f50c:
    // 0x19f50c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F50Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F514u;
}
