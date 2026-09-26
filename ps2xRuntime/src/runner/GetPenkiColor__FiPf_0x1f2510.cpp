#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPenkiColor__FiPf
// Address: 0x1f2510 - 0x1f2554
void GetPenkiColor__FiPf_0x1f2510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPenkiColor__FiPf_0x1f2510");
#endif

    ctx->pc = 0x1f2510u;

    // 0x1f2510: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F2510u;
    {
        const bool branch_taken_0x1f2510 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1F2514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2510u;
            // 0x1f2514: 0x28810008  slti        $at, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2510) {
            ctx->pc = 0x1F254Cu;
            goto label_1f254c;
        }
    }
    ctx->pc = 0x1F2518u;
    // 0x1f2518: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1F2518u;
    {
        const bool branch_taken_0x1f2518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F251Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2518u;
            // 0x1f251c: 0x43040  sll         $a2, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2518) {
            ctx->pc = 0x1F254Cu;
            goto label_1f254c;
        }
    }
    ctx->pc = 0x1F2520u;
    // 0x1f2520: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1f2520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1f2524: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1f2524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1f2528: 0x2463e3a0  addiu       $v1, $v1, -0x1C60
    ctx->pc = 0x1f2528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960032));
    // 0x1f252c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f252cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f2530: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f2530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f2534: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f2534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2538: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1f2538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1f253c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1f253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2540: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1f2540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1f2544: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f2544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2548: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1f2548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1f254c:
    // 0x1f254c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F254Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F2554u;
}
