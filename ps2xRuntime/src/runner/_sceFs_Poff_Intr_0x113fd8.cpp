#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceFs_Poff_Intr
// Address: 0x113fd8 - 0x114004
void _sceFs_Poff_Intr_0x113fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFs_Poff_Intr_0x113fd8");
#endif

    switch (ctx->pc) {
        case 0x113fd8u: goto label_113fd8;
        case 0x113fdcu: goto label_113fdc;
        case 0x113fe0u: goto label_113fe0;
        case 0x113fe4u: goto label_113fe4;
        case 0x113fe8u: goto label_113fe8;
        case 0x113fecu: goto label_113fec;
        case 0x113ff0u: goto label_113ff0;
        case 0x113ff4u: goto label_113ff4;
        case 0x113ff8u: goto label_113ff8;
        case 0x113ffcu: goto label_113ffc;
        case 0x114000u: goto label_114000;
        default: break;
    }

    ctx->pc = 0x113fd8u;

label_113fd8:
    // 0x113fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_113fdc:
    // 0x113fdc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x113fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_113fe0:
    // 0x113fe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_113fe4:
    if (ctx->pc == 0x113FE4u) {
        ctx->pc = 0x113FE4u;
            // 0x113fe4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x113FE8u;
        goto label_113fe8;
    }
    ctx->pc = 0x113FE0u;
    {
        const bool branch_taken_0x113fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113FE0u;
            // 0x113fe4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fe0) {
            ctx->pc = 0x113FF0u;
            goto label_113ff0;
        }
    }
    ctx->pc = 0x113FE8u;
label_113fe8:
    // 0x113fe8: 0x40f809  jalr        $v0
label_113fec:
    if (ctx->pc == 0x113FECu) {
        ctx->pc = 0x113FECu;
            // 0x113fec: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->pc = 0x113FF0u;
        goto label_113ff0;
    }
    ctx->pc = 0x113FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x113FF0u);
        ctx->pc = 0x113FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113FE8u;
            // 0x113fec: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x113FF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x113FF0u; }
            if (ctx->pc != 0x113FF0u) { return; }
        }
        }
    }
    ctx->pc = 0x113FF0u;
label_113ff0:
    // 0x113ff0: 0xf  sync
    ctx->pc = 0x113ff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_113ff4:
    // 0x113ff4: 0x42000038  ei
    ctx->pc = 0x113ff4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_113ff8:
    // 0x113ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113ffc:
    // 0x113ffc: 0x3e00008  jr          $ra
label_114000:
    if (ctx->pc == 0x114000u) {
        ctx->pc = 0x114000u;
            // 0x114000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x114004u;
        goto label_fallthrough_0x113ffc;
    }
    ctx->pc = 0x113FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113FFCu;
            // 0x114000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x113ffc:
    ctx->pc = 0x114004u;
}
