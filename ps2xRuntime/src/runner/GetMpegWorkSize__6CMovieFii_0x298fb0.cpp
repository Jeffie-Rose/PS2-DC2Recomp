#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMpegWorkSize__6CMovieFii
// Address: 0x298fb0 - 0x298fd4
void GetMpegWorkSize__6CMovieFii_0x298fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMpegWorkSize__6CMovieFii_0x298fb0");
#endif

    ctx->pc = 0x298fb0u;

    // 0x298fb0: 0xa61818  mult        $v1, $a1, $a2
    ctx->pc = 0x298fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x298fb4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x298fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x298fb8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x298fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298fbc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x298FBCu;
    {
        const bool branch_taken_0x298fbc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x298FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298FBCu;
            // 0x298fc0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fbc) {
            ctx->pc = 0x298FCCu;
            goto label_298fcc;
        }
    }
    ctx->pc = 0x298FC4u;
    // 0x298fc4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x298fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x298fc8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x298fc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_298fcc:
    // 0x298fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x298FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298FCCu;
            // 0x298fd0: 0x24421768  addiu       $v0, $v0, 0x1768 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298FD4u;
}
