#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: irn55__Fv
// Address: 0x3203e0 - 0x32047c
void irn55__Fv_0x3203e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("irn55__Fv_0x3203e0");
#endif

    switch (ctx->pc) {
        case 0x3203f8u: goto label_3203f8;
        case 0x320444u: goto label_320444;
        default: break;
    }

    ctx->pc = 0x3203e0u;

    // 0x3203e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3203e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3203e4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3203e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3203e8: 0x3c033b9a  lui         $v1, 0x3B9A
    ctx->pc = 0x3203e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15258 << 16));
    // 0x3203ec: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x3203ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x3203f0: 0x24c649c0  addiu       $a2, $a2, 0x49C0
    ctx->pc = 0x3203f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18880));
    // 0x3203f4: 0x3463ca00  ori         $v1, $v1, 0xCA00
    ctx->pc = 0x3203f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51712);
label_3203f8:
    // 0x3203f8: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x3203f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3203fc: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x3203fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x320400: 0x8d24007c  lw          $a0, 0x7C($t1)
    ctx->pc = 0x320400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 124)));
    // 0x320404: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x320404u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x320408: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x320408u;
    {
        const bool branch_taken_0x320408 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x320408) {
            ctx->pc = 0x320414u;
            goto label_320414;
        }
    }
    ctx->pc = 0x320410u;
    // 0x320410: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x320410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_320414:
    // 0x320414: 0x0  nop
    ctx->pc = 0x320414u;
    // NOP
    // 0x320418: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x320418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32041c: 0x28e10019  slti        $at, $a3, 0x19
    ctx->pc = 0x32041cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x320420: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x320420u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x320424: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x320424u;
    {
        const bool branch_taken_0x320424 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x320428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320424u;
            // 0x320428: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320424) {
            ctx->pc = 0x3203F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3203f8;
        }
    }
    ctx->pc = 0x32042Cu;
    // 0x32042c: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x32042cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x320430: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x320430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x320434: 0x3c033b9a  lui         $v1, 0x3B9A
    ctx->pc = 0x320434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15258 << 16));
    // 0x320438: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x320438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x32043c: 0x24c649c0  addiu       $a2, $a2, 0x49C0
    ctx->pc = 0x32043cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18880));
    // 0x320440: 0x3463ca00  ori         $v1, $v1, 0xCA00
    ctx->pc = 0x320440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51712);
label_320444:
    // 0x320444: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x320444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x320448: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x320448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32044c: 0x8d04ffa0  lw          $a0, -0x60($t0)
    ctx->pc = 0x32044cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967200)));
    // 0x320450: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x320450u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x320454: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x320454u;
    {
        const bool branch_taken_0x320454 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x320454) {
            ctx->pc = 0x320460u;
            goto label_320460;
        }
    }
    ctx->pc = 0x32045Cu;
    // 0x32045c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x32045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_320460:
    // 0x320460: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x320460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x320464: 0x29210038  slti        $at, $t1, 0x38
    ctx->pc = 0x320464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)56) ? 1 : 0);
    // 0x320468: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x320468u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x32046c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x32046Cu;
    {
        const bool branch_taken_0x32046c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x320470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32046Cu;
            // 0x320470: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32046c) {
            ctx->pc = 0x320444u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320444;
        }
    }
    ctx->pc = 0x320474u;
    // 0x320474: 0x3e00008  jr          $ra
    ctx->pc = 0x320474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32047Cu;
}
