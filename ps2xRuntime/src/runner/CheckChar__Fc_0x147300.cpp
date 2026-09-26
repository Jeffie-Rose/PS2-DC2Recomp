#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckChar__Fc
// Address: 0x147300 - 0x147350
void CheckChar__Fc_0x147300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckChar__Fc_0x147300");
#endif

    ctx->pc = 0x147300u;

    // 0x147300: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x147300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x147304: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x147304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x147308: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x147308u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x14730c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14730Cu;
    {
        const bool branch_taken_0x14730c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x147310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14730Cu;
            // 0x147310: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14730c) {
            ctx->pc = 0x147318u;
            goto label_147318;
        }
    }
    ctx->pc = 0x147314u;
    // 0x147314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147318:
    // 0x147318: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x147318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14731c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14731Cu;
    {
        const bool branch_taken_0x14731c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x147320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14731Cu;
            // 0x147320: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14731c) {
            ctx->pc = 0x147328u;
            goto label_147328;
        }
    }
    ctx->pc = 0x147324u;
    // 0x147324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147328:
    // 0x147328: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x147328u;
    {
        const bool branch_taken_0x147328 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x14732Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147328u;
            // 0x14732c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147328) {
            ctx->pc = 0x147334u;
            goto label_147334;
        }
    }
    ctx->pc = 0x147330u;
    // 0x147330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_147334:
    // 0x147334: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147334u;
    {
        const bool branch_taken_0x147334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x147338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147334u;
            // 0x147338: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147334) {
            ctx->pc = 0x147344u;
            goto label_147344;
        }
    }
    ctx->pc = 0x14733Cu;
    // 0x14733c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14733cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147340: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x147340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_147344:
    // 0x147344: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x147344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x147348: 0x3e00008  jr          $ra
    ctx->pc = 0x147348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14734Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147348u;
            // 0x14734c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147350u;
}
