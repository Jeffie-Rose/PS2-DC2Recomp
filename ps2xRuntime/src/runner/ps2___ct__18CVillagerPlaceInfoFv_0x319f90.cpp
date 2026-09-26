#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__18CVillagerPlaceInfoFv
// Address: 0x319f90 - 0x319fc8
void ps2___ct__18CVillagerPlaceInfoFv_0x319f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__18CVillagerPlaceInfoFv_0x319f90");
#endif

    switch (ctx->pc) {
        case 0x319facu: goto label_319fac;
        default: break;
    }

    ctx->pc = 0x319f90u;

    // 0x319f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x319f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x319f9c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x319f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x319fa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x319fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x319fa4: 0xc049c86  jal         func_127218
    ctx->pc = 0x319FA4u;
    SET_GPR_U32(ctx, 31, 0x319FACu);
    ctx->pc = 0x319FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319FA4u;
            // 0x319fa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319FACu; }
        if (ctx->pc != 0x319FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319FACu; }
        if (ctx->pc != 0x319FACu) { return; }
    }
    ctx->pc = 0x319FACu;
label_319fac:
    // 0x319fac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x319facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x319fb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x319fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319fb4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x319fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x319fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x319fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x319FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319FC0u;
            // 0x319fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x319FC8u;
}
