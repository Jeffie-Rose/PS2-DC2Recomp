#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckRecoverPhotoNum__11CMenuInventFv
// Address: 0x200ec0 - 0x200ef8
void CheckRecoverPhotoNum__11CMenuInventFv_0x200ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckRecoverPhotoNum__11CMenuInventFv_0x200ec0");
#endif

    switch (ctx->pc) {
        case 0x200eccu: goto label_200ecc;
        default: break;
    }

    ctx->pc = 0x200ec0u;

    // 0x200ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ec8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x200ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_200ecc:
    // 0x200ecc: 0x80630508  lb          $v1, 0x508($v1)
    ctx->pc = 0x200eccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1288)));
    // 0x200ed0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x200ed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x200ed4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x200ED4u;
    {
        const bool branch_taken_0x200ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x200ed4) {
            ctx->pc = 0x200EE0u;
            goto label_200ee0;
        }
    }
    ctx->pc = 0x200EDCu;
    // 0x200edc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_200ee0:
    // 0x200ee0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x200ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x200ee4: 0x28a30032  slti        $v1, $a1, 0x32
    ctx->pc = 0x200ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x200ee8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x200EE8u;
    {
        const bool branch_taken_0x200ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200EE8u;
            // 0x200eec: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ee8) {
            ctx->pc = 0x200ECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200ecc;
        }
    }
    ctx->pc = 0x200EF0u;
    // 0x200ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x200EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200EF8u;
}
