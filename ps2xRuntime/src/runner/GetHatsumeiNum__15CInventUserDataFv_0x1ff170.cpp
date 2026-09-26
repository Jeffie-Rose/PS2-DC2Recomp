#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetHatsumeiNum__15CInventUserDataFv
// Address: 0x1ff170 - 0x1ff1a8
void GetHatsumeiNum__15CInventUserDataFv_0x1ff170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetHatsumeiNum__15CInventUserDataFv_0x1ff170");
#endif

    switch (ctx->pc) {
        case 0x1ff17cu: goto label_1ff17c;
        default: break;
    }

    ctx->pc = 0x1ff170u;

    // 0x1ff170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff17c:
    // 0x1ff17c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1ff17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ff180: 0x846306d8  lh          $v1, 0x6D8($v1)
    ctx->pc = 0x1ff180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1752)));
    // 0x1ff184: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF184u;
    {
        const bool branch_taken_0x1ff184 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ff184) {
            ctx->pc = 0x1FF190u;
            goto label_1ff190;
        }
    }
    ctx->pc = 0x1FF18Cu;
    // 0x1ff18c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ff190:
    // 0x1ff190: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ff190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ff194: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x1ff194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ff198: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FF198u;
    {
        const bool branch_taken_0x1ff198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF198u;
            // 0x1ff19c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff198) {
            ctx->pc = 0x1FF17Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff17c;
        }
    }
    ctx->pc = 0x1FF1A0u;
    // 0x1ff1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF1A8u;
}
