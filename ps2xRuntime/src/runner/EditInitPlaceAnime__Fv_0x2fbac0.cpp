#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditInitPlaceAnime__Fv
// Address: 0x2fbac0 - 0x2fbb0c
void EditInitPlaceAnime__Fv_0x2fbac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditInitPlaceAnime__Fv_0x2fbac0");
#endif

    ctx->pc = 0x2fbac0u;

    // 0x2fbac0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fbac4: 0xac2096d0  sw          $zero, -0x6930($at)
    ctx->pc = 0x2fbac4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940368), GPR_U32(ctx, 0));
    // 0x2fbac8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fbacc: 0xac2096d4  sw          $zero, -0x692C($at)
    ctx->pc = 0x2fbaccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940372), GPR_U32(ctx, 0));
    // 0x2fbad0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fbad4: 0xac2096d8  sw          $zero, -0x6928($at)
    ctx->pc = 0x2fbad4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940376), GPR_U32(ctx, 0));
    // 0x2fbad8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fbadc: 0xac209760  sw          $zero, -0x68A0($at)
    ctx->pc = 0x2fbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940512), GPR_U32(ctx, 0));
    // 0x2fbae0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fbae4: 0xac209764  sw          $zero, -0x689C($at)
    ctx->pc = 0x2fbae4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940516), GPR_U32(ctx, 0));
    // 0x2fbae8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fbaec: 0xac209768  sw          $zero, -0x6898($at)
    ctx->pc = 0x2fbaecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940520), GPR_U32(ctx, 0));
    // 0x2fbaf0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fbaf4: 0xac2097f0  sw          $zero, -0x6810($at)
    ctx->pc = 0x2fbaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940656), GPR_U32(ctx, 0));
    // 0x2fbaf8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fbafc: 0xac2097f4  sw          $zero, -0x680C($at)
    ctx->pc = 0x2fbafcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940660), GPR_U32(ctx, 0));
    // 0x2fbb00: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fbb04: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB04u;
            // 0x2fbb08: 0xac2097f8  sw          $zero, -0x6808($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FBB0Cu;
}
