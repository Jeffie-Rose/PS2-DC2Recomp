#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDeltaTime__FPcPi
// Address: 0x18b470 - 0x18b4a4
void GetDeltaTime__FPcPi_0x18b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDeltaTime__FPcPi_0x18b470");
#endif

    switch (ctx->pc) {
        case 0x18b474u: goto label_18b474;
        default: break;
    }

    ctx->pc = 0x18b470u;

    // 0x18b470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b474:
    // 0x18b474: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x18b474u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b478: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x18b478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x18b47c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x18b47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18b480: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x18b480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x18b484: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B484u;
    {
        const bool branch_taken_0x18b484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B484u;
            // 0x18b488: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b484) {
            ctx->pc = 0x18B494u;
            goto label_18b494;
        }
    }
    ctx->pc = 0x18B48Cu;
    // 0x18b48c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x18B48Cu;
    {
        const bool branch_taken_0x18b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B48Cu;
            // 0x18b490: 0x631c0  sll         $a2, $a2, 7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b48c) {
            ctx->pc = 0x18B474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b474;
        }
    }
    ctx->pc = 0x18B494u;
label_18b494:
    // 0x18b494: 0x0  nop
    ctx->pc = 0x18b494u;
    // NOP
    // 0x18b498: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x18b498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x18b49c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B49Cu;
            // 0x18b4a0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B4A4u;
}
