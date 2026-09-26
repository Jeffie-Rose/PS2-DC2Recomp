#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE
// Address: 0x2c2430 - 0x2c2478
void DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DefaultButton__11CMenuOptionFPP18MENUFORMPARTS_TYPE_0x2c2430");
#endif

    switch (ctx->pc) {
        case 0x2c243cu: goto label_2c243c;
        default: break;
    }

    ctx->pc = 0x2c2430u;

    // 0x2c2430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c2430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2434: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2438: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2c2438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2c243c:
    // 0x2c243c: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x2c243cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2c2440: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2c2440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c2444: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2444u;
    {
        const bool branch_taken_0x2c2444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2444) {
            ctx->pc = 0x2C2460u;
            goto label_2c2460;
        }
    }
    ctx->pc = 0x2C244Cu;
    // 0x2c244c: 0xa0640007  sb          $a0, 0x7($v1)
    ctx->pc = 0x2c244cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2450: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2c2450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c2454: 0xa0640008  sb          $a0, 0x8($v1)
    ctx->pc = 0x2c2454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2458: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2c2458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c245c: 0xa0640009  sb          $a0, 0x9($v1)
    ctx->pc = 0x2c245cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 4));
label_2c2460:
    // 0x2c2460: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c2460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c2464: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x2c2464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c2468: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C2468u;
    {
        const bool branch_taken_0x2c2468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C246Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2468u;
            // 0x2c246c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2468) {
            ctx->pc = 0x2C243Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c243c;
        }
    }
    ctx->pc = 0x2C2470u;
    // 0x2c2470: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2478u;
}
