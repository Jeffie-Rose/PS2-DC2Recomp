#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgWATER_SURFACE_END__FP9SPI_STACKi
// Address: 0x164a70 - 0x164abc
void cfgWATER_SURFACE_END__FP9SPI_STACKi_0x164a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgWATER_SURFACE_END__FP9SPI_STACKi_0x164a70");
#endif

    ctx->pc = 0x164a70u;

    // 0x164a70: 0x8f858914  lw          $a1, -0x76EC($gp)
    ctx->pc = 0x164a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x164a74: 0x8f838954  lw          $v1, -0x76AC($gp)
    ctx->pc = 0x164a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936916)));
    // 0x164a78: 0x8ca20cec  lw          $v0, 0xCEC($a1)
    ctx->pc = 0x164a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3308)));
    // 0x164a7c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x164a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164a80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164A80u;
    {
        const bool branch_taken_0x164a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164A80u;
            // 0x164a84: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a80) {
            ctx->pc = 0x164A90u;
            goto label_164a90;
        }
    }
    ctx->pc = 0x164A88u;
    // 0x164a88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x164A88u;
    {
        const bool branch_taken_0x164a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164A88u;
            // 0x164a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a88) {
            ctx->pc = 0x164AB4u;
            goto label_164ab4;
        }
    }
    ctx->pc = 0x164A90u;
label_164a90:
    // 0x164a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164a94: 0x8ca30cf0  lw          $v1, 0xCF0($a1)
    ctx->pc = 0x164a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3312)));
    // 0x164a98: 0x8f858958  lw          $a1, -0x76A8($gp)
    ctx->pc = 0x164a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936920)));
    // 0x164a9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x164aa0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x164aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x164aa4: 0x8f838954  lw          $v1, -0x76AC($gp)
    ctx->pc = 0x164aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936916)));
    // 0x164aa8: 0xaf808958  sw          $zero, -0x76A8($gp)
    ctx->pc = 0x164aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936920), GPR_U32(ctx, 0));
    // 0x164aac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164ab0: 0xaf838954  sw          $v1, -0x76AC($gp)
    ctx->pc = 0x164ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936916), GPR_U32(ctx, 3));
label_164ab4:
    // 0x164ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x164AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164ABCu;
}
