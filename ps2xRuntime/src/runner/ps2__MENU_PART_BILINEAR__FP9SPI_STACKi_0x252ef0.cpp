#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_PART_BILINEAR__FP9SPI_STACKi
// Address: 0x252ef0 - 0x252f30
void ps2__MENU_PART_BILINEAR__FP9SPI_STACKi_0x252ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_PART_BILINEAR__FP9SPI_STACKi_0x252ef0");
#endif

    ctx->pc = 0x252ef0u;

    // 0x252ef0: 0x8f8297c0  lw          $v0, -0x6840($gp)
    ctx->pc = 0x252ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252ef4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252EF4u;
    {
        const bool branch_taken_0x252ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252EF4u;
            // 0x252ef8: 0x24430019  addiu       $v1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ef4) {
            ctx->pc = 0x252F04u;
            goto label_252f04;
        }
    }
    ctx->pc = 0x252EFCu;
    // 0x252efc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x252EFCu;
    {
        const bool branch_taken_0x252efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252EFCu;
            // 0x252f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252efc) {
            ctx->pc = 0x252F28u;
            goto label_252f28;
        }
    }
    ctx->pc = 0x252F04u;
label_252f04:
    // 0x252f04: 0x90420019  lbu         $v0, 0x19($v0)
    ctx->pc = 0x252f04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x252f08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x252F08u;
    {
        const bool branch_taken_0x252f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252f08) {
            ctx->pc = 0x252F1Cu;
            goto label_252f1c;
        }
    }
    ctx->pc = 0x252F10u;
    // 0x252f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252f14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252F14u;
    {
        const bool branch_taken_0x252f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252F14u;
            // 0x252f18: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252f14) {
            ctx->pc = 0x252F24u;
            goto label_252f24;
        }
    }
    ctx->pc = 0x252F1Cu;
label_252f1c:
    // 0x252f1c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x252f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x252f20: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x252f20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_252f24:
    // 0x252f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_252f28:
    // 0x252f28: 0x3e00008  jr          $ra
    ctx->pc = 0x252F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252F30u;
}
