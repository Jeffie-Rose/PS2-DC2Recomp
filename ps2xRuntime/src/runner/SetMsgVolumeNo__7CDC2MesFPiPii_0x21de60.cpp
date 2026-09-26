#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMsgVolumeNo__7CDC2MesFPiPii
// Address: 0x21de60 - 0x21dee0
void SetMsgVolumeNo__7CDC2MesFPiPii_0x21de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMsgVolumeNo__7CDC2MesFPiPii_0x21de60");
#endif

    switch (ctx->pc) {
        case 0x21de74u: goto label_21de74;
        default: break;
    }

    ctx->pc = 0x21de60u;

    // 0x21de60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21de60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21de64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21de64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de68: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21de68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de6c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21DE6Cu;
    {
        const bool branch_taken_0x21de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DE6Cu;
            // 0x21de70: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de6c) {
            ctx->pc = 0x21DEBCu;
            goto label_21debc;
        }
    }
    ctx->pc = 0x21DE74u;
label_21de74:
    // 0x21de74: 0x8b7021  addu        $t6, $a0, $t3
    ctx->pc = 0x21de74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x21de78: 0x24680000  addiu       $t0, $v1, 0x0
    ctx->pc = 0x21de78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x21de7c: 0xab6021  addu        $t4, $a1, $t3
    ctx->pc = 0x21de7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x21de80: 0x8dc31a44  lw          $v1, 0x1A44($t6)
    ctx->pc = 0x21de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 6724)));
    // 0x21de84: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x21de84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x21de88: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x21de88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21de8c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x21de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x21de90: 0x11030002  beq         $t0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21DE90u;
    {
        const bool branch_taken_0x21de90 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x21DE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DE90u;
            // 0x21de94: 0x25cd1a44  addiu       $t5, $t6, 0x1A44 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 6724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de90) {
            ctx->pc = 0x21DE9Cu;
            goto label_21de9c;
        }
    }
    ctx->pc = 0x21DE98u;
    // 0x21de98: 0xa08921e0  sb          $t1, 0x21E0($a0)
    ctx->pc = 0x21de98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8672), (uint8_t)GPR_U32(ctx, 9));
label_21de9c:
    // 0x21de9c: 0x0  nop
    ctx->pc = 0x21de9cu;
    // NOP
    // 0x21dea0: 0xcb4021  addu        $t0, $a2, $t3
    ctx->pc = 0x21dea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x21dea4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x21dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x21dea8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x21dea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x21deac: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x21deacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21deb0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x21deb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x21deb4: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x21deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x21deb8: 0xadc81a84  sw          $t0, 0x1A84($t6)
    ctx->pc = 0x21deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 6788), GPR_U32(ctx, 8));
label_21debc:
    // 0x21debc: 0x0  nop
    ctx->pc = 0x21debcu;
    // NOP
    // 0x21dec0: 0x147082a  slt         $at, $t2, $a3
    ctx->pc = 0x21dec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x21dec4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DEC4u;
    {
        const bool branch_taken_0x21dec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DEC4u;
            // 0x21dec8: 0x29430010  slti        $v1, $t2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dec4) {
            ctx->pc = 0x21DED4u;
            goto label_21ded4;
        }
    }
    ctx->pc = 0x21DECCu;
    // 0x21decc: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x21DECCu;
    {
        const bool branch_taken_0x21decc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DECCu;
            // 0x21ded0: 0x17d1821  addu        $v1, $t3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21decc) {
            ctx->pc = 0x21DE74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21de74;
        }
    }
    ctx->pc = 0x21DED4u;
label_21ded4:
    // 0x21ded4: 0x0  nop
    ctx->pc = 0x21ded4u;
    // NOP
    // 0x21ded8: 0x3e00008  jr          $ra
    ctx->pc = 0x21DED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DED8u;
            // 0x21dedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DEE0u;
}
