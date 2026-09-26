#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10CRunScriptFv
// Address: 0x186cd0 - 0x186d34
void ps2___ct__10CRunScriptFv_0x186cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10CRunScriptFv_0x186cd0");
#endif

    switch (ctx->pc) {
        case 0x186d20u: goto label_186d20;
        default: break;
    }

    ctx->pc = 0x186cd0u;

    // 0x186cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186ce0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x186ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ce8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x186ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x186cec: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x186cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x186cf0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x186cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x186cf4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x186cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x186cf8: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x186cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x186cfc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x186cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x186d00: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x186d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x186d04: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x186d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x186d08: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x186d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x186d0c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x186d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x186d10: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x186d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x186d14: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x186d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x186d18: 0xc061b50  jal         func_186D40
    ctx->pc = 0x186D18u;
    SET_GPR_U32(ctx, 31, 0x186D20u);
    ctx->pc = 0x186D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D18u;
            // 0x186d1c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (runtime->hasFunction(0x186D40u)) {
        auto targetFn = runtime->lookupFunction(0x186D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D20u; }
        if (ctx->pc != 0x186D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteProgram__10CRunScriptFv_0x186d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D20u; }
        if (ctx->pc != 0x186D20u) { return; }
    }
    ctx->pc = 0x186D20u;
label_186d20:
    // 0x186d20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186d24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x186D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D2Cu;
            // 0x186d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186D34u;
}
