#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSeDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25c0f0 - 0x25c124
void scsSeDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSeDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25c0f0");
#endif

    ctx->pc = 0x25c0f0u;

    // 0x25c0f0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25c0f4: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x25c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x25c0f8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25c0f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25c0fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C0FCu;
    {
        const bool branch_taken_0x25c0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c0fc) {
            ctx->pc = 0x25C110u;
            goto label_25c110;
        }
    }
    ctx->pc = 0x25C104u;
    // 0x25c104: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x25c104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
    // 0x25c108: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C108u;
    {
        const bool branch_taken_0x25c108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C108u;
            // 0x25c10c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c108) {
            ctx->pc = 0x25C11Cu;
            goto label_25c11c;
        }
    }
    ctx->pc = 0x25C110u;
label_25c110:
    // 0x25c110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25c110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25c114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c118: 0xaca30058  sw          $v1, 0x58($a1)
    ctx->pc = 0x25c118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 3));
label_25c11c:
    // 0x25c11c: 0x3e00008  jr          $ra
    ctx->pc = 0x25C11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C124u;
}
