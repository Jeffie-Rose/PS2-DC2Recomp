#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10CPowerLineFv
// Address: 0x1c5940 - 0x1c5990
void ps2___ct__10CPowerLineFv_0x1c5940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10CPowerLineFv_0x1c5940");
#endif

    switch (ctx->pc) {
        case 0x1c5968u: goto label_1c5968;
        default: break;
    }

    ctx->pc = 0x1c5940u;

    // 0x1c5940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c594c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c594cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5954: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5958: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c595c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c595cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5960: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1C5960u;
    SET_GPR_U32(ctx, 31, 0x1C5968u);
    ctx->pc = 0x1C5964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5960u;
            // 0x1c5964: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5968u; }
        if (ctx->pc != 0x1C5968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5968u; }
        if (ctx->pc != 0x1C5968u) { return; }
    }
    ctx->pc = 0x1C5968u;
label_1c5968:
    // 0x1c5968: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1c5968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c596c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c596cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5970: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1c5970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1c5974: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x1c5974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x1c5978: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x1c5978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x1c597c: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x1c597cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x1c5980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5988: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C598Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5988u;
            // 0x1c598c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5990u;
}
