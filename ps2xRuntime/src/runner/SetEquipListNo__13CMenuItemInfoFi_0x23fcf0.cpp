#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEquipListNo__13CMenuItemInfoFi
// Address: 0x23fcf0 - 0x23fdbc
void SetEquipListNo__13CMenuItemInfoFi_0x23fcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEquipListNo__13CMenuItemInfoFi_0x23fcf0");
#endif

    ctx->pc = 0x23fcf0u;

    // 0x23fcf0: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x23fcf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23fcf4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x23FCF4u;
    {
        const bool branch_taken_0x23fcf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FCF4u;
            // 0x23fcf8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcf4) {
            ctx->pc = 0x23FD3Cu;
            goto label_23fd3c;
        }
    }
    ctx->pc = 0x23FCFCu;
    // 0x23fcfc: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x23fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x23fd00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23fd04: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x23fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x23fd08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23fd0c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23fd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fd10: 0x84a30172  lh          $v1, 0x172($a1)
    ctx->pc = 0x23fd10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 370)));
    // 0x23fd14: 0xa4830120  sh          $v1, 0x120($a0)
    ctx->pc = 0x23fd14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fd18: 0x84a301de  lh          $v1, 0x1DE($a1)
    ctx->pc = 0x23fd18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 478)));
    // 0x23fd1c: 0xa4830122  sh          $v1, 0x122($a0)
    ctx->pc = 0x23fd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fd20: 0x84a3024a  lh          $v1, 0x24A($a1)
    ctx->pc = 0x23fd20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 586)));
    // 0x23fd24: 0xa4830124  sh          $v1, 0x124($a0)
    ctx->pc = 0x23fd24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 292), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fd28: 0x84a302b6  lh          $v1, 0x2B6($a1)
    ctx->pc = 0x23fd28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 694)));
    // 0x23fd2c: 0xa4830126  sh          $v1, 0x126($a0)
    ctx->pc = 0x23fd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 294), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fd30: 0x84a30322  lh          $v1, 0x322($a1)
    ctx->pc = 0x23fd30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 802)));
    // 0x23fd34: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x23FD34u;
    {
        const bool branch_taken_0x23fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FD34u;
            // 0x23fd38: 0xa4830128  sh          $v1, 0x128($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 296), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd34) {
            ctx->pc = 0x23FDB4u;
            goto label_23fdb4;
        }
    }
    ctx->pc = 0x23FD3Cu;
label_23fd3c:
    // 0x23fd3c: 0x14a30019  bne         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x23FD3Cu;
    {
        const bool branch_taken_0x23fd3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x23FD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FD3Cu;
            // 0x23fd40: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd3c) {
            ctx->pc = 0x23FDA4u;
            goto label_23fda4;
        }
    }
    ctx->pc = 0x23FD44u;
    // 0x23fd44: 0x8c23d8c8  lw          $v1, -0x2738($at)
    ctx->pc = 0x23fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x23fd48: 0x84630032  lh          $v1, 0x32($v1)
    ctx->pc = 0x23fd48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x23fd4c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23fd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23fd50: 0xa4830120  sh          $v1, 0x120($a0)
    ctx->pc = 0x23fd50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fd54: 0x8c23d8c8  lw          $v1, -0x2738($at)
    ctx->pc = 0x23fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x23fd58: 0x8463009e  lh          $v1, 0x9E($v1)
    ctx->pc = 0x23fd58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 158)));
    // 0x23fd5c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23fd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23fd60: 0xa4830122  sh          $v1, 0x122($a0)
    ctx->pc = 0x23fd60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fd64: 0x8c23d8c8  lw          $v1, -0x2738($at)
    ctx->pc = 0x23fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x23fd68: 0x8463010a  lh          $v1, 0x10A($v1)
    ctx->pc = 0x23fd68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 266)));
    // 0x23fd6c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23fd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23fd70: 0xa4830124  sh          $v1, 0x124($a0)
    ctx->pc = 0x23fd70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 292), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fd74: 0x8c23d8c8  lw          $v1, -0x2738($at)
    ctx->pc = 0x23fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x23fd78: 0x84630176  lh          $v1, 0x176($v1)
    ctx->pc = 0x23fd78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 374)));
    // 0x23fd7c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23fd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23fd80: 0xa4830126  sh          $v1, 0x126($a0)
    ctx->pc = 0x23fd80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 294), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fd84: 0x8c23d8c0  lw          $v1, -0x2740($at)
    ctx->pc = 0x23fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x23fd88: 0x84630322  lh          $v1, 0x322($v1)
    ctx->pc = 0x23fd88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 802)));
    // 0x23fd8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23fd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23fd90: 0xa4830128  sh          $v1, 0x128($a0)
    ctx->pc = 0x23fd90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 296), (uint16_t)GPR_U32(ctx, 3));
    // 0x23fd94: 0x8c23d8c0  lw          $v1, -0x2740($at)
    ctx->pc = 0x23fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x23fd98: 0x8463024a  lh          $v1, 0x24A($v1)
    ctx->pc = 0x23fd98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 586)));
    // 0x23fd9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23FD9Cu;
    {
        const bool branch_taken_0x23fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FD9Cu;
            // 0x23fda0: 0xa483012a  sh          $v1, 0x12A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 298), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd9c) {
            ctx->pc = 0x23FDB4u;
            goto label_23fdb4;
        }
    }
    ctx->pc = 0x23FDA4u;
label_23fda4:
    // 0x23fda4: 0xa4800126  sh          $zero, 0x126($a0)
    ctx->pc = 0x23fda4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 294), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fda8: 0xa4800124  sh          $zero, 0x124($a0)
    ctx->pc = 0x23fda8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 292), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fdac: 0xa4800122  sh          $zero, 0x122($a0)
    ctx->pc = 0x23fdacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 290), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fdb0: 0xa4800120  sh          $zero, 0x120($a0)
    ctx->pc = 0x23fdb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 0));
label_23fdb4:
    // 0x23fdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x23FDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23FDBCu;
}
