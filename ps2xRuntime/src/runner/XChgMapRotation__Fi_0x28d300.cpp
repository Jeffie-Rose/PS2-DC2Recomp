#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: XChgMapRotation__Fi
// Address: 0x28d300 - 0x28d338
void XChgMapRotation__Fi_0x28d300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("XChgMapRotation__Fi_0x28d300");
#endif

    ctx->pc = 0x28d300u;

    // 0x28d300: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D300u;
    {
        const bool branch_taken_0x28d300 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D300u;
            // 0x28d304: 0x28810004  slti        $at, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d300) {
            ctx->pc = 0x28D310u;
            goto label_28d310;
        }
    }
    ctx->pc = 0x28D308u;
    // 0x28d308: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D308u;
    {
        const bool branch_taken_0x28d308 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D308u;
            // 0x28d30c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d308) {
            ctx->pc = 0x28D31Cu;
            goto label_28d31c;
        }
    }
    ctx->pc = 0x28D310u;
label_28d310:
    // 0x28d310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d314: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28D314u;
    {
        const bool branch_taken_0x28d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d314) {
            ctx->pc = 0x28D330u;
            goto label_28d330;
        }
    }
    ctx->pc = 0x28D31Cu;
label_28d31c:
    // 0x28d31c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28d320: 0x24423f80  addiu       $v0, $v0, 0x3F80
    ctx->pc = 0x28d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16256));
    // 0x28d324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28d324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28d328: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d32c: 0x0  nop
    ctx->pc = 0x28d32cu;
    // NOP
label_28d330:
    // 0x28d330: 0x3e00008  jr          $ra
    ctx->pc = 0x28D330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D338u;
}
