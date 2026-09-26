#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartyNPCData__Fi
// Address: 0x2ab510 - 0x2ab570
void GetPartyNPCData__Fi_0x2ab510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartyNPCData__Fi_0x2ab510");
#endif

    switch (ctx->pc) {
        case 0x2ab528u: goto label_2ab528;
        default: break;
    }

    ctx->pc = 0x2ab510u;

    // 0x2ab510: 0x8f839ac4  lw          $v1, -0x653C($gp)
    ctx->pc = 0x2ab510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941380)));
    // 0x2ab514: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2ab514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2ab518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab51c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab51cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab520: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AB520u;
    {
        const bool branch_taken_0x2ab520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB520u;
            // 0x2ab524: 0x24a5a3a0  addiu       $a1, $a1, -0x5C60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab520) {
            ctx->pc = 0x2AB554u;
            goto label_2ab554;
        }
    }
    ctx->pc = 0x2AB528u;
label_2ab528:
    // 0x2ab528: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ab528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab52c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AB52Cu;
    {
        const bool branch_taken_0x2ab52c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB52Cu;
            // 0x2ab530: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab52c) {
            ctx->pc = 0x2AB54Cu;
            goto label_2ab54c;
        }
    }
    ctx->pc = 0x2AB534u;
    // 0x2ab534: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2ab534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ab538: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ab538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ab53c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ab53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ab540: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ab540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ab544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB544u;
    {
        const bool branch_taken_0x2ab544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB544u;
            // 0x2ab548: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab544) {
            ctx->pc = 0x2AB568u;
            goto label_2ab568;
        }
    }
    ctx->pc = 0x2AB54Cu;
label_2ab54c:
    // 0x2ab54c: 0x24e70036  addiu       $a3, $a3, 0x36
    ctx->pc = 0x2ab54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 54));
    // 0x2ab550: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ab550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2ab554:
    // 0x2ab554: 0x0  nop
    ctx->pc = 0x2ab554u;
    // NOP
    // 0x2ab558: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2ab558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ab55c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2AB55Cu;
    {
        const bool branch_taken_0x2ab55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB55Cu;
            // 0x2ab560: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab55c) {
            ctx->pc = 0x2AB528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ab528;
        }
    }
    ctx->pc = 0x2AB564u;
    // 0x2ab564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ab564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab568:
    // 0x2ab568: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB570u;
}
