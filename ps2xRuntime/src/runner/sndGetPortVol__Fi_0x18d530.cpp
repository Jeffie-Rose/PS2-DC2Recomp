#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndGetPortVol__Fi
// Address: 0x18d530 - 0x18d568
void sndGetPortVol__Fi_0x18d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndGetPortVol__Fi_0x18d530");
#endif

    ctx->pc = 0x18d530u;

    // 0x18d530: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D530u;
    {
        const bool branch_taken_0x18d530 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18D534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D530u;
            // 0x18d534: 0x28820010  slti        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d530) {
            ctx->pc = 0x18D540u;
            goto label_18d540;
        }
    }
    ctx->pc = 0x18D538u;
    // 0x18d538: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D538u;
    {
        const bool branch_taken_0x18d538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D538u;
            // 0x18d53c: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d538) {
            ctx->pc = 0x18D54Cu;
            goto label_18d54c;
        }
    }
    ctx->pc = 0x18D540u;
label_18d540:
    // 0x18d540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d544: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18D544u;
    {
        const bool branch_taken_0x18d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d544) {
            ctx->pc = 0x18D560u;
            goto label_18d560;
        }
    }
    ctx->pc = 0x18D54Cu;
label_18d54c:
    // 0x18d54c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18d550: 0x24427640  addiu       $v0, $v0, 0x7640
    ctx->pc = 0x18d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30272));
    // 0x18d554: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d558: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18d558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d55c: 0x0  nop
    ctx->pc = 0x18d55cu;
    // NOP
label_18d560:
    // 0x18d560: 0x3e00008  jr          $ra
    ctx->pc = 0x18D560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D568u;
}
