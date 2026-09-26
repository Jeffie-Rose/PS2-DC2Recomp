#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLightingInfo__8CMapInfoFi
// Address: 0x165040 - 0x165088
void GetLightingInfo__8CMapInfoFi_0x165040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLightingInfo__8CMapInfoFi_0x165040");
#endif

    ctx->pc = 0x165040u;

    // 0x165040: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165040u;
    {
        const bool branch_taken_0x165040 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x165044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165040u;
            // 0x165044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165040) {
            ctx->pc = 0x16505Cu;
            goto label_16505c;
        }
    }
    ctx->pc = 0x165048u;
    // 0x165048: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x165048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x16504c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x16504cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x165050: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165050u;
    {
        const bool branch_taken_0x165050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165050) {
            ctx->pc = 0x165064u;
            goto label_165064;
        }
    }
    ctx->pc = 0x165058u;
    // 0x165058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16505c:
    // 0x16505c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16505Cu;
    {
        const bool branch_taken_0x16505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16505c) {
            ctx->pc = 0x165080u;
            goto label_165080;
        }
    }
    ctx->pc = 0x165064u;
label_165064:
    // 0x165064: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x165064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x165068: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x165068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x16506c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x16506cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x165070: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x165070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165074: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x165074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x165078: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x165078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16507c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_165080:
    // 0x165080: 0x3e00008  jr          $ra
    ctx->pc = 0x165080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165088u;
}
