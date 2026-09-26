#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddBuildPartsNum__9CSaveDataFii
// Address: 0x2f6620 - 0x2f6684
void AddBuildPartsNum__9CSaveDataFii_0x2f6620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddBuildPartsNum__9CSaveDataFii_0x2f6620");
#endif

    ctx->pc = 0x2f6620u;

    // 0x2f6620: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6620u;
    {
        const bool branch_taken_0x2f6620 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F6624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6620u;
            // 0x2f6624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6620) {
            ctx->pc = 0x2F6638u;
            goto label_2f6638;
        }
    }
    ctx->pc = 0x2F6628u;
    // 0x2f6628: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x2f6628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2f662c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F662Cu;
    {
        const bool branch_taken_0x2f662c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F662Cu;
            // 0x2f6630: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f662c) {
            ctx->pc = 0x2F6640u;
            goto label_2f6640;
        }
    }
    ctx->pc = 0x2F6634u;
    // 0x2f6634: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6638:
    // 0x2f6638: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F6638u;
    {
        const bool branch_taken_0x2f6638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6638) {
            ctx->pc = 0x2F667Cu;
            goto label_2f667c;
        }
    }
    ctx->pc = 0x2F6640u;
label_2f6640:
    // 0x2f6640: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2f6640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f6644: 0x84621a24  lh          $v0, 0x1A24($v1)
    ctx->pc = 0x2f6644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6692)));
    // 0x2f6648: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2f6648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f664c: 0xa4621a24  sh          $v0, 0x1A24($v1)
    ctx->pc = 0x2f664cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6692), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f6650: 0x84621a24  lh          $v0, 0x1A24($v1)
    ctx->pc = 0x2f6650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6692)));
    // 0x2f6654: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6654u;
    {
        const bool branch_taken_0x2f6654 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F6658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6654u;
            // 0x2f6658: 0x24641a24  addiu       $a0, $v1, 0x1A24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6692));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6654) {
            ctx->pc = 0x2F6660u;
            goto label_2f6660;
        }
    }
    ctx->pc = 0x2F665Cu;
    // 0x2f665c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x2f665cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_2f6660:
    // 0x2f6660: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2f6660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6664: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x2f6664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x2f6668: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6668u;
    {
        const bool branch_taken_0x2f6668 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F666Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6668u;
            // 0x2f666c: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6668) {
            ctx->pc = 0x2F6674u;
            goto label_2f6674;
        }
    }
    ctx->pc = 0x2F6670u;
    // 0x2f6670: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2f6670u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_2f6674:
    // 0x2f6674: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2f6674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f6678: 0x0  nop
    ctx->pc = 0x2f6678u;
    // NOP
label_2f667c:
    // 0x2f667c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F667Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6684u;
}
