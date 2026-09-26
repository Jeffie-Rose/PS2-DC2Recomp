#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSymbolClose__14CMiniMapSymbolFv
// Address: 0x1d4bd0 - 0x1d4c38
void DrawSymbolClose__14CMiniMapSymbolFv_0x1d4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSymbolClose__14CMiniMapSymbolFv_0x1d4bd0");
#endif

    switch (ctx->pc) {
        case 0x1d4c00u: goto label_1d4c00;
        case 0x1d4c08u: goto label_1d4c08;
        default: break;
    }

    ctx->pc = 0x1d4bd0u;

    // 0x1d4bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d4bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d4bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4be4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1d4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1d4be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4bec: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1d4becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1d4bf0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d4bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d4bf4: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x1d4bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d4bf8: 0xc079fd8  jal         func_1E7F60
    ctx->pc = 0x1D4BF8u;
    SET_GPR_U32(ctx, 31, 0x1D4C00u);
    ctx->pc = 0x1D4BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BF8u;
            // 0x1d4bfc: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F60u;
    if (runtime->hasFunction(0x1E7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1E7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C00u; }
        if (ctx->pc != 0x1D4C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScirror__10CPreSpriteFiiii_0x1e7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C00u; }
        if (ctx->pc != 0x1D4C00u) { return; }
    }
    ctx->pc = 0x1D4C00u;
label_1d4c00:
    // 0x1d4c00: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1D4C00u;
    SET_GPR_U32(ctx, 31, 0x1D4C08u);
    ctx->pc = 0x1D4C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C00u;
            // 0x1d4c04: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C08u; }
        if (ctx->pc != 0x1D4C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C08u; }
        if (ctx->pc != 0x1D4C08u) { return; }
    }
    ctx->pc = 0x1D4C08u;
label_1d4c08:
    // 0x1d4c08: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x1d4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1d4c0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4c10: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x1d4c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
    // 0x1d4c14: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1d4c18: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x1d4c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d4c1c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4C1Cu;
    {
        const bool branch_taken_0x1d4c1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c1c) {
            ctx->pc = 0x1D4C28u;
            goto label_1d4c28;
        }
    }
    ctx->pc = 0x1D4C24u;
    // 0x1d4c24: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x1d4c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_1d4c28:
    // 0x1d4c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C30u;
            // 0x1d4c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4C38u;
}
