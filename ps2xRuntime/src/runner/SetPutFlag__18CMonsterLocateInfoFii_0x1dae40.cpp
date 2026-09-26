#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPutFlag__18CMonsterLocateInfoFii
// Address: 0x1dae40 - 0x1daeb8
void SetPutFlag__18CMonsterLocateInfoFii_0x1dae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPutFlag__18CMonsterLocateInfoFii_0x1dae40");
#endif

    ctx->pc = 0x1dae40u;

    // 0x1dae40: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1DAE40u;
    {
        const bool branch_taken_0x1dae40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dae40) {
            ctx->pc = 0x1DAE80u;
            goto label_1dae80;
        }
    }
    ctx->pc = 0x1DAE48u;
    // 0x1dae48: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1dae48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dae4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dae50: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1dae50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dae54: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DAE54u;
    {
        const bool branch_taken_0x1dae54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dae54) {
            ctx->pc = 0x1DAEB0u;
            goto label_1daeb0;
        }
    }
    ctx->pc = 0x1DAE5Cu;
    // 0x1dae5c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1dae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dae60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dae60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dae64: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x1dae64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x1dae68: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1dae68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1dae6c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1dae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1dae70: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1dae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dae74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dae78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DAE78u;
    {
        const bool branch_taken_0x1dae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAE78u;
            // 0x1dae7c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae78) {
            ctx->pc = 0x1DAEB0u;
            goto label_1daeb0;
        }
    }
    ctx->pc = 0x1DAE80u;
label_1dae80:
    // 0x1dae80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1dae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dae84: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DAE84u;
    {
        const bool branch_taken_0x1dae84 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1dae84) {
            ctx->pc = 0x1DAEB0u;
            goto label_1daeb0;
        }
    }
    ctx->pc = 0x1DAE8Cu;
    // 0x1dae8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1dae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dae90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dae90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dae94: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x1dae94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x1dae98: 0xa02827  not         $a1, $a1
    ctx->pc = 0x1dae98u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x1dae9c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1dae9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1daea0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1daea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1daea4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1daea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1daea8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1daea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1daeac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1daeacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1daeb0:
    // 0x1daeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DAEB8u;
}
