#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsClear
// Address: 0x1053e0 - 0x105438
void sceDevConsClear_0x1053e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsClear_0x1053e0");
#endif

    switch (ctx->pc) {
        case 0x105410u: goto label_105410;
        default: break;
    }

    ctx->pc = 0x1053e0u;

    // 0x1053e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1053e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1053e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1053e8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1053e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1053ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1053ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1053f0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1053f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1053f4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1053f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1053f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1053f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1053fc: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1053FCu;
    {
        const bool branch_taken_0x1053fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x105400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1053FCu;
            // 0x105400: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053fc) {
            ctx->pc = 0x10542Cu;
            goto label_10542c;
        }
    }
    ctx->pc = 0x105404u;
    // 0x105404: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x105404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x105408: 0x24030720  addiu       $v1, $zero, 0x720
    ctx->pc = 0x105408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1824));
    // 0x10540c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10540cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_105410:
    // 0x105410: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x105410u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x105414: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x105414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x105418: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x105418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x10541c: 0x0  nop
    ctx->pc = 0x10541cu;
    // NOP
    // 0x105420: 0x0  nop
    ctx->pc = 0x105420u;
    // NOP
    // 0x105424: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105424u;
    {
        const bool branch_taken_0x105424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x105424) {
            ctx->pc = 0x105410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105410;
        }
    }
    ctx->pc = 0x10542Cu;
label_10542c:
    // 0x10542c: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x10542cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x105430: 0x3e00008  jr          $ra
    ctx->pc = 0x105430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105430u;
            // 0x105434: 0xacc00010  sw          $zero, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105438u;
}
