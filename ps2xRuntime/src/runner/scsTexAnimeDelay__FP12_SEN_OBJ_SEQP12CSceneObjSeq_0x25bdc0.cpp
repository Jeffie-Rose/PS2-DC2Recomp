#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsTexAnimeDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25bdc0 - 0x25bdf4
void scsTexAnimeDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsTexAnimeDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bdc0");
#endif

    ctx->pc = 0x25bdc0u;

    // 0x25bdc0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25bdc4: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x25bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x25bdc8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25bdc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25bdcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BDCCu;
    {
        const bool branch_taken_0x25bdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bdcc) {
            ctx->pc = 0x25BDE0u;
            goto label_25bde0;
        }
    }
    ctx->pc = 0x25BDD4u;
    // 0x25bdd4: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x25bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x25bdd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25BDD8u;
    {
        const bool branch_taken_0x25bdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BDD8u;
            // 0x25bddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bdd8) {
            ctx->pc = 0x25BDECu;
            goto label_25bdec;
        }
    }
    ctx->pc = 0x25BDE0u;
label_25bde0:
    // 0x25bde0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25bde4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bde8: 0xaca3004c  sw          $v1, 0x4C($a1)
    ctx->pc = 0x25bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
label_25bdec:
    // 0x25bdec: 0x3e00008  jr          $ra
    ctx->pc = 0x25BDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BDF4u;
}
