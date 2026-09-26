#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AquaMesDispAdjustPos__FP6ClsMesPi
// Address: 0x20fa30 - 0x20fad8
void AquaMesDispAdjustPos__FP6ClsMesPi_0x20fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AquaMesDispAdjustPos__FP6ClsMesPi_0x20fa30");
#endif

    ctx->pc = 0x20fa30u;

    // 0x20fa30: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x20FA30u;
    {
        const bool branch_taken_0x20fa30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fa30) {
            ctx->pc = 0x20FAD0u;
            goto label_20fad0;
        }
    }
    ctx->pc = 0x20FA38u;
    // 0x20fa38: 0x8c871e14  lw          $a3, 0x1E14($a0)
    ctx->pc = 0x20fa38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7700)));
    // 0x20fa3c: 0x8c831e18  lw          $v1, 0x1E18($a0)
    ctx->pc = 0x20fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7704)));
    // 0x20fa40: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x20fa40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20fa44: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FA44u;
    {
        const bool branch_taken_0x20fa44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fa44) {
            ctx->pc = 0x20FA50u;
            goto label_20fa50;
        }
    }
    ctx->pc = 0x20FA4Cu;
    // 0x20fa4c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x20fa4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20fa50:
    // 0x20fa50: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x20fa50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20fa54: 0x71843  sra         $v1, $a3, 1
    ctx->pc = 0x20fa54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 1));
    // 0x20fa58: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x20fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20fa5c: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x20fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
    // 0x20fa60: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x20fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20fa64: 0xac830194  sw          $v1, 0x194($a0)
    ctx->pc = 0x20fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 3));
    // 0x20fa68: 0x8c830190  lw          $v1, 0x190($a0)
    ctx->pc = 0x20fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x20fa6c: 0x2861002c  slti        $at, $v1, 0x2C
    ctx->pc = 0x20fa6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x20fa70: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FA70u;
    {
        const bool branch_taken_0x20fa70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FA70u;
            // 0x20fa74: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa70) {
            ctx->pc = 0x20FA7Cu;
            goto label_20fa7c;
        }
    }
    ctx->pc = 0x20FA78u;
    // 0x20fa78: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x20fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
label_20fa7c:
    // 0x20fa7c: 0x8c830194  lw          $v1, 0x194($a0)
    ctx->pc = 0x20fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x20fa80: 0x2861002c  slti        $at, $v1, 0x2C
    ctx->pc = 0x20fa80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x20fa84: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FA84u;
    {
        const bool branch_taken_0x20fa84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FA84u;
            // 0x20fa88: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa84) {
            ctx->pc = 0x20FA90u;
            goto label_20fa90;
        }
    }
    ctx->pc = 0x20FA8Cu;
    // 0x20fa8c: 0xac830194  sw          $v1, 0x194($a0)
    ctx->pc = 0x20fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 3));
label_20fa90:
    // 0x20fa90: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x20fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x20fa94: 0x8c830190  lw          $v1, 0x190($a0)
    ctx->pc = 0x20fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x20fa98: 0x24a5ffca  addiu       $a1, $a1, -0x36
    ctx->pc = 0x20fa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967242));
    // 0x20fa9c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20faa0: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x20faa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20faa4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FAA4u;
    {
        const bool branch_taken_0x20faa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FAA4u;
            // 0x20faa8: 0xa71823  subu        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20faa4) {
            ctx->pc = 0x20FAB0u;
            goto label_20fab0;
        }
    }
    ctx->pc = 0x20FAACu;
    // 0x20faac: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x20faacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
label_20fab0:
    // 0x20fab0: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x20fab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x20fab4: 0x8c830194  lw          $v1, 0x194($a0)
    ctx->pc = 0x20fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x20fab8: 0x24c5ffd4  addiu       $a1, $a2, -0x2C
    ctx->pc = 0x20fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967252));
    // 0x20fabc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x20fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20fac0: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x20fac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20fac4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x20FAC4u;
    {
        const bool branch_taken_0x20fac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FAC4u;
            // 0x20fac8: 0x24c3ffa4  addiu       $v1, $a2, -0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fac4) {
            ctx->pc = 0x20FAD0u;
            goto label_20fad0;
        }
    }
    ctx->pc = 0x20FACCu;
    // 0x20facc: 0xac830194  sw          $v1, 0x194($a0)
    ctx->pc = 0x20faccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 404), GPR_U32(ctx, 3));
label_20fad0:
    // 0x20fad0: 0x3e00008  jr          $ra
    ctx->pc = 0x20FAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FAD8u;
}
