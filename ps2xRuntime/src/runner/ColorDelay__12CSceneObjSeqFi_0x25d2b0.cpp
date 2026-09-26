#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ColorDelay__12CSceneObjSeqFi
// Address: 0x25d2b0 - 0x25d2e4
void ColorDelay__12CSceneObjSeqFi_0x25d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColorDelay__12CSceneObjSeqFi_0x25d2b0");
#endif

    switch (ctx->pc) {
        case 0x25d2c4u: goto label_25d2c4;
        default: break;
    }

    ctx->pc = 0x25d2b0u;

    // 0x25d2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d2bc: 0xc097160  jal         func_25C580
    ctx->pc = 0x25D2BCu;
    SET_GPR_U32(ctx, 31, 0x25D2C4u);
    ctx->pc = 0x25D2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D2BCu;
            // 0x25d2c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C580u;
    if (runtime->hasFunction(0x25C580u)) {
        auto targetFn = runtime->lookupFunction(0x25C580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D2C4u; }
        if (ctx->pc != 0x25D2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextColSeq__12CSceneObjSeqFv_0x25c580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D2C4u; }
        if (ctx->pc != 0x25D2C4u) { return; }
    }
    ctx->pc = 0x25D2C4u;
label_25d2c4:
    // 0x25d2c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D2C4u;
    {
        const bool branch_taken_0x25d2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D2C4u;
            // 0x25d2c8: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2c4) {
            ctx->pc = 0x25D2D4u;
            goto label_25d2d4;
        }
    }
    ctx->pc = 0x25D2CCu;
    // 0x25d2cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25d2d0: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x25d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_25d2d4:
    // 0x25d2d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x25D2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D2DCu;
            // 0x25d2e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D2E4u;
}
