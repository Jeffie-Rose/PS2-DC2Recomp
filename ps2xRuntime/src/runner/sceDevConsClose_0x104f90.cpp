#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsClose
// Address: 0x104f90 - 0x104fc4
void sceDevConsClose_0x104f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsClose_0x104f90");
#endif

    switch (ctx->pc) {
        case 0x104fa8u: goto label_104fa8;
        default: break;
    }

    ctx->pc = 0x104f90u;

    // 0x104f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x104f94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x104f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x104f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fa0: 0xc0418f6  jal         func_1063D8
    ctx->pc = 0x104FA0u;
    SET_GPR_U32(ctx, 31, 0x104FA8u);
    ctx->pc = 0x104FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x104FA0u;
            // 0x104fa4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063D8u;
    if (runtime->hasFunction(0x1063D8u)) {
        auto targetFn = runtime->lookupFunction(0x1063D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104FA8u; }
        if (ctx->pc != 0x104FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chaMemFree_0x1063d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104FA8u; }
        if (ctx->pc != 0x104FA8u) { return; }
    }
    ctx->pc = 0x104FA8u;
label_104fa8:
    // 0x104fa8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x104fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x104fac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x104facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x104fb0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x104fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x104fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x104fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x104FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104FBCu;
            // 0x104fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104FC4u;
}
