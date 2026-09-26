#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: stAlign64__9mgCMemoryFv
// Address: 0x139d90 - 0x139df8
void stAlign64__9mgCMemoryFv_0x139d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stAlign64__9mgCMemoryFv_0x139d90");
#endif

    ctx->pc = 0x139d90u;

    // 0x139d90: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x139d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x139d94: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x139D94u;
    {
        const bool branch_taken_0x139d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139d94) {
            ctx->pc = 0x139DF0u;
            goto label_139df0;
        }
    }
    ctx->pc = 0x139D9Cu;
    // 0x139d9c: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x139d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x139da0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x139da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x139da4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x139da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x139da8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x139da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139dac: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x139dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x139db0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x139DB0u;
    {
        const bool branch_taken_0x139db0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x139DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139DB0u;
            // 0x139db4: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139db0) {
            ctx->pc = 0x139DD8u;
            goto label_139dd8;
        }
    }
    ctx->pc = 0x139DB8u;
    // 0x139db8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x139db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139dbc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139DBCu;
    {
        const bool branch_taken_0x139dbc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x139DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139DBCu;
            // 0x139dc0: 0x32903  sra         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139dbc) {
            ctx->pc = 0x139DCCu;
            goto label_139dcc;
        }
    }
    ctx->pc = 0x139DC4u;
    // 0x139dc4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x139dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x139dc8: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x139dc8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
label_139dcc:
    // 0x139dcc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x139dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x139dd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x139dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139dd4: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x139dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_139dd8:
    // 0x139dd8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x139dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x139ddc: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x139ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x139de0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x139de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x139de4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x139DE4u;
    {
        const bool branch_taken_0x139de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139de4) {
            ctx->pc = 0x139DF0u;
            goto label_139df0;
        }
    }
    ctx->pc = 0x139DECu;
    // 0x139dec: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x139decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
label_139df0:
    // 0x139df0: 0x3e00008  jr          $ra
    ctx->pc = 0x139DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139DF8u;
}
