#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndGetMasterVol__Fi
// Address: 0x18d270 - 0x18d2a4
void sndGetMasterVol__Fi_0x18d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndGetMasterVol__Fi_0x18d270");
#endif

    ctx->pc = 0x18d270u;

    // 0x18d270: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D270u;
    {
        const bool branch_taken_0x18d270 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18D274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D270u;
            // 0x18d274: 0x28810002  slti        $at, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d270) {
            ctx->pc = 0x18D280u;
            goto label_18d280;
        }
    }
    ctx->pc = 0x18D278u;
    // 0x18d278: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D278u;
    {
        const bool branch_taken_0x18d278 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D278u;
            // 0x18d27c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d278) {
            ctx->pc = 0x18D28Cu;
            goto label_18d28c;
        }
    }
    ctx->pc = 0x18D280u;
label_18d280:
    // 0x18d280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d284: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18D284u;
    {
        const bool branch_taken_0x18d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d284) {
            ctx->pc = 0x18D29Cu;
            goto label_18d29c;
        }
    }
    ctx->pc = 0x18D28Cu;
label_18d28c:
    // 0x18d28c: 0x27828040  addiu       $v0, $gp, -0x7FC0
    ctx->pc = 0x18d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934592));
    // 0x18d290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d294: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d298: 0x0  nop
    ctx->pc = 0x18d298u;
    // NOP
label_18d29c:
    // 0x18d29c: 0x3e00008  jr          $ra
    ctx->pc = 0x18D29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D2A4u;
}
