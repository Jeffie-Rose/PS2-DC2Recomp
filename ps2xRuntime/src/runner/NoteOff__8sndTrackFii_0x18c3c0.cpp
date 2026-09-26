#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NoteOff__8sndTrackFii
// Address: 0x18c3c0 - 0x18c3f8
void NoteOff__8sndTrackFii_0x18c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NoteOff__8sndTrackFii_0x18c3c0");
#endif

    switch (ctx->pc) {
        case 0x18c3d4u: goto label_18c3d4;
        default: break;
    }

    ctx->pc = 0x18c3c0u;

    // 0x18c3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c3c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x18c3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c3cc: 0xc0630a4  jal         func_18C290
    ctx->pc = 0x18C3CCu;
    SET_GPR_U32(ctx, 31, 0x18C3D4u);
    ctx->pc = 0x18C3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3CCu;
            // 0x18c3d0: 0x80850002  lb          $a1, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C290u;
    if (runtime->hasFunction(0x18C290u)) {
        auto targetFn = runtime->lookupFunction(0x18C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C3D4u; }
        if (ctx->pc != 0x18C3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaerchVoice__8sndTrackFii_0x18c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C3D4u; }
        if (ctx->pc != 0x18C3D4u) { return; }
    }
    ctx->pc = 0x18C3D4u;
label_18c3d4:
    // 0x18c3d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C3D4u;
    {
        const bool branch_taken_0x18c3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c3d4) {
            ctx->pc = 0x18C3E4u;
            goto label_18c3e4;
        }
    }
    ctx->pc = 0x18C3DCu;
    // 0x18c3dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C3DCu;
    {
        const bool branch_taken_0x18c3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3DCu;
            // 0x18c3e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3dc) {
            ctx->pc = 0x18C3ECu;
            goto label_18c3ec;
        }
    }
    ctx->pc = 0x18C3E4u;
label_18c3e4:
    // 0x18c3e4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x18c3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c3e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c3ec:
    // 0x18c3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x18C3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C3F0u;
            // 0x18c3f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C3F8u;
}
