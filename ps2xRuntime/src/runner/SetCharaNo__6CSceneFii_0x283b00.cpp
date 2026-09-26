#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCharaNo__6CSceneFii
// Address: 0x283b00 - 0x283b30
void SetCharaNo__6CSceneFii_0x283b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCharaNo__6CSceneFii_0x283b00");
#endif

    switch (ctx->pc) {
        case 0x283b14u: goto label_283b14;
        default: break;
    }

    ctx->pc = 0x283b00u;

    // 0x283b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283b0c: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x283B0Cu;
    SET_GPR_U32(ctx, 31, 0x283B14u);
    ctx->pc = 0x283B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283B0Cu;
            // 0x283b10: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B14u; }
        if (ctx->pc != 0x283B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283B14u; }
        if (ctx->pc != 0x283B14u) { return; }
    }
    ctx->pc = 0x283B14u;
label_283b14:
    // 0x283b14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x283B14u;
    {
        const bool branch_taken_0x283b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b14) {
            ctx->pc = 0x283B20u;
            goto label_283b20;
        }
    }
    ctx->pc = 0x283B1Cu;
    // 0x283b1c: 0xac50003c  sw          $s0, 0x3C($v0)
    ctx->pc = 0x283b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 16));
label_283b20:
    // 0x283b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283b28: 0x3e00008  jr          $ra
    ctx->pc = 0x283B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B28u;
            // 0x283b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283B30u;
}
