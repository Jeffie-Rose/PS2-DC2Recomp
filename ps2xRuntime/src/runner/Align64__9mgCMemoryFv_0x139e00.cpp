#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Align64__9mgCMemoryFv
// Address: 0x139e00 - 0x139e68
void Align64__9mgCMemoryFv_0x139e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Align64__9mgCMemoryFv_0x139e00");
#endif

    ctx->pc = 0x139e00u;

    // 0x139e00: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x139e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x139e04: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x139E04u;
    {
        const bool branch_taken_0x139e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139e04) {
            ctx->pc = 0x139E60u;
            goto label_139e60;
        }
    }
    ctx->pc = 0x139E0Cu;
    // 0x139e0c: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x139e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x139e10: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x139e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x139e14: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x139e14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x139e18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x139e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139e1c: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x139e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x139e20: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x139E20u;
    {
        const bool branch_taken_0x139e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139E20u;
            // 0x139e24: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e20) {
            ctx->pc = 0x139E48u;
            goto label_139e48;
        }
    }
    ctx->pc = 0x139E28u;
    // 0x139e28: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x139e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139e2c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139E2Cu;
    {
        const bool branch_taken_0x139e2c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x139E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139E2Cu;
            // 0x139e30: 0x32903  sra         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e2c) {
            ctx->pc = 0x139E3Cu;
            goto label_139e3c;
        }
    }
    ctx->pc = 0x139E34u;
    // 0x139e34: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x139e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x139e38: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x139e38u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
label_139e3c:
    // 0x139e3c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x139e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x139e40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x139e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139e44: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x139e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_139e48:
    // 0x139e48: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x139e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x139e4c: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x139e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x139e50: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x139e50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x139e54: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x139E54u;
    {
        const bool branch_taken_0x139e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139e54) {
            ctx->pc = 0x139E60u;
            goto label_139e60;
        }
    }
    ctx->pc = 0x139E5Cu;
    // 0x139e5c: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x139e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
label_139e60:
    // 0x139e60: 0x3e00008  jr          $ra
    ctx->pc = 0x139E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139E68u;
}
