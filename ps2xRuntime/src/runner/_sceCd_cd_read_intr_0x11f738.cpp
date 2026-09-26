#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceCd_cd_read_intr
// Address: 0x11f738 - 0x11f7d8
void _sceCd_cd_read_intr_0x11f738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_cd_read_intr_0x11f738");
#endif

    switch (ctx->pc) {
        case 0x11f768u: goto label_11f768;
        case 0x11f7b0u: goto label_11f7b0;
        default: break;
    }

    ctx->pc = 0x11f738u;

    // 0x11f738: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11f738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11f73c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x11f73cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x11f740: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11f744: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11F744u;
    {
        const bool branch_taken_0x11f744 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11F748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F744u;
            // 0x11f748: 0x3c090033  lui         $t1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f744) {
            ctx->pc = 0x11F790u;
            goto label_11f790;
        }
    }
    ctx->pc = 0x11F74Cu;
    // 0x11f74c: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x11f74cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11f750: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11F750u;
    {
        const bool branch_taken_0x11f750 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11F754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F750u;
            // 0x11f754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f750) {
            ctx->pc = 0x11F790u;
            goto label_11f790;
        }
    }
    ctx->pc = 0x11F758u;
    // 0x11f758: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x11f758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x11f75c: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x11f75cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x11f760: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x11f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x11f764: 0x0  nop
    ctx->pc = 0x11f764u;
    // NOP
label_11f768:
    // 0x11f768: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x11f768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x11f76c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11f76cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11f770: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11f770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11f774: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11f774u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11f778: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11f77c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x11f77cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11f780: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11F780u;
    {
        const bool branch_taken_0x11f780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F780u;
            // 0x11f784: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f780) {
            ctx->pc = 0x11F768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11f768;
        }
    }
    ctx->pc = 0x11F788u;
    // 0x11f788: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F788u;
    {
        const bool branch_taken_0x11f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F788u;
            // 0x11f78c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f788) {
            ctx->pc = 0x11F794u;
            goto label_11f794;
        }
    }
    ctx->pc = 0x11F790u;
label_11f790:
    // 0x11f790: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x11f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_11f794:
    // 0x11f794: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11F794u;
    {
        const bool branch_taken_0x11f794 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11f794) {
            ctx->pc = 0x11F7D0u;
            goto label_11f7d0;
        }
    }
    ctx->pc = 0x11F79Cu;
    // 0x11f79c: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x11f79cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x11f7a0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11F7A0u;
    {
        const bool branch_taken_0x11f7a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7A0u;
            // 0x11f7a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7a0) {
            ctx->pc = 0x11F7D0u;
            goto label_11f7d0;
        }
    }
    ctx->pc = 0x11F7A8u;
    // 0x11f7a8: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x11f7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x11f7ac: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x11f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_11f7b0:
    // 0x11f7b0: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x11f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x11f7b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11f7b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11f7b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11f7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11f7bc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11f7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11f7c0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x11f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11f7c4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x11f7c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11f7c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11F7C8u;
    {
        const bool branch_taken_0x11f7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7C8u;
            // 0x11f7cc: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7c8) {
            ctx->pc = 0x11F7B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11f7b0;
        }
    }
    ctx->pc = 0x11F7D0u;
label_11f7d0:
    // 0x11f7d0: 0x8047d40  j           func_11F500
    ctx->pc = 0x11F7D0u;
    ctx->pc = 0x11F7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7D0u;
            // 0x11f7d4: 0x25241e14  addiu       $a0, $t1, 0x1E14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 7700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F500u;
    if (runtime->hasFunction(0x11F500u)) {
        auto targetFn = runtime->lookupFunction(0x11F500u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _sceCd_cd_callback_0x11f500(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11F7D8u;
}
