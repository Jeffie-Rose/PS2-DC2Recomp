#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPutPos__7CDC2MesFPi
// Address: 0x21dac0 - 0x21db30
void SetPutPos__7CDC2MesFPi_0x21dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPutPos__7CDC2MesFPi_0x21dac0");
#endif

    ctx->pc = 0x21dac0u;

    // 0x21dac0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21dac4: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x21dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
    // 0x21dac8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x21dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21dacc: 0xac830194  sw          $v1, 0x194($a0)
    ctx->pc = 0x21daccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 3));
    // 0x21dad0: 0x808321e9  lb          $v1, 0x21E9($a0)
    ctx->pc = 0x21dad0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8681)));
    // 0x21dad4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21DAD4u;
    {
        const bool branch_taken_0x21dad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dad4) {
            ctx->pc = 0x21DAF0u;
            goto label_21daf0;
        }
    }
    ctx->pc = 0x21DADCu;
    // 0x21dadc: 0x8c8500d8  lw          $a1, 0xD8($a0)
    ctx->pc = 0x21dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x21dae0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x21dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x21dae4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x21dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21dae8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x21dae8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x21daec: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x21daecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
label_21daf0:
    // 0x21daf0: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x21daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x21daf4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x21daf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21daf8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DAF8u;
    {
        const bool branch_taken_0x21daf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21daf8) {
            ctx->pc = 0x21DB10u;
            goto label_21db10;
        }
    }
    ctx->pc = 0x21DB00u;
    // 0x21db00: 0x848321e2  lh          $v1, 0x21E2($a0)
    ctx->pc = 0x21db00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8674)));
    // 0x21db04: 0xac8301a0  sw          $v1, 0x1A0($a0)
    ctx->pc = 0x21db04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 3));
    // 0x21db08: 0x848321e4  lh          $v1, 0x21E4($a0)
    ctx->pc = 0x21db08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8676)));
    // 0x21db0c: 0xac8301a4  sw          $v1, 0x1A4($a0)
    ctx->pc = 0x21db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
label_21db10:
    // 0x21db10: 0x8c83014c  lw          $v1, 0x14C($a0)
    ctx->pc = 0x21db10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x21db14: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x21db14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21db18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DB18u;
    {
        const bool branch_taken_0x21db18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DB18u;
            // 0x21db1c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db18) {
            ctx->pc = 0x21DB28u;
            goto label_21db28;
        }
    }
    ctx->pc = 0x21DB20u;
    // 0x21db20: 0xac830194  sw          $v1, 0x194($a0)
    ctx->pc = 0x21db20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 3));
    // 0x21db24: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x21db24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
label_21db28:
    // 0x21db28: 0x3e00008  jr          $ra
    ctx->pc = 0x21DB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DB30u;
}
