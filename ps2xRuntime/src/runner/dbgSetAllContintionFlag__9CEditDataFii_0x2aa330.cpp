#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dbgSetAllContintionFlag__9CEditDataFii
// Address: 0x2aa330 - 0x2aa36c
void dbgSetAllContintionFlag__9CEditDataFii_0x2aa330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dbgSetAllContintionFlag__9CEditDataFii_0x2aa330");
#endif

    switch (ctx->pc) {
        case 0x2aa334u: goto label_2aa334;
        default: break;
    }

    ctx->pc = 0x2aa330u;

    // 0x2aa330: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa334:
    // 0x2aa334: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x2aa334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2aa338: 0xa0a65050  sb          $a2, 0x5050($a1)
    ctx->pc = 0x2aa338u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20560), (uint8_t)GPR_U32(ctx, 6));
    // 0x2aa33c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2aa33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2aa340: 0xa0a65051  sb          $a2, 0x5051($a1)
    ctx->pc = 0x2aa340u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20561), (uint8_t)GPR_U32(ctx, 6));
    // 0x2aa344: 0x28e30040  slti        $v1, $a3, 0x40
    ctx->pc = 0x2aa344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2aa348: 0xa0a65052  sb          $a2, 0x5052($a1)
    ctx->pc = 0x2aa348u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20562), (uint8_t)GPR_U32(ctx, 6));
    // 0x2aa34c: 0xa0a65053  sb          $a2, 0x5053($a1)
    ctx->pc = 0x2aa34cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20563), (uint8_t)GPR_U32(ctx, 6));
    // 0x2aa350: 0xa0a65054  sb          $a2, 0x5054($a1)
    ctx->pc = 0x2aa350u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20564), (uint8_t)GPR_U32(ctx, 6));
    // 0x2aa354: 0xa0a65055  sb          $a2, 0x5055($a1)
    ctx->pc = 0x2aa354u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20565), (uint8_t)GPR_U32(ctx, 6));
    // 0x2aa358: 0xa0a65056  sb          $a2, 0x5056($a1)
    ctx->pc = 0x2aa358u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20566), (uint8_t)GPR_U32(ctx, 6));
    // 0x2aa35c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2AA35Cu;
    {
        const bool branch_taken_0x2aa35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA35Cu;
            // 0x2aa360: 0xa0a65057  sb          $a2, 0x5057($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 20567), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa35c) {
            ctx->pc = 0x2AA334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa334;
        }
    }
    ctx->pc = 0x2AA364u;
    // 0x2aa364: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA36Cu;
}
