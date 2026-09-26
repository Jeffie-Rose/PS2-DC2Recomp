#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__8CMapInfoFv
// Address: 0x164f50 - 0x164f94
void Initialize__8CMapInfoFv_0x164f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__8CMapInfoFv_0x164f50");
#endif

    switch (ctx->pc) {
        case 0x164f6cu: goto label_164f6c;
        default: break;
    }

    ctx->pc = 0x164f50u;

    // 0x164f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164f54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x164f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x164f5c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x164f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x164f60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164f64: 0xc049c86  jal         func_127218
    ctx->pc = 0x164F64u;
    SET_GPR_U32(ctx, 31, 0x164F6Cu);
    ctx->pc = 0x164F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164F64u;
            // 0x164f68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F6Cu; }
        if (ctx->pc != 0x164F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164F6Cu; }
        if (ctx->pc != 0x164F6Cu) { return; }
    }
    ctx->pc = 0x164F6Cu;
label_164f6c:
    // 0x164f6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x164f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164f70: 0x3c044140  lui         $a0, 0x4140
    ctx->pc = 0x164f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16704 << 16));
    // 0x164f74: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x164f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x164f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164f7c: 0xae0400c8  sw          $a0, 0xC8($s0)
    ctx->pc = 0x164f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 4));
    // 0x164f80: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x164f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x164f84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x164f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x164F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F8Cu;
            // 0x164f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F94u;
}
