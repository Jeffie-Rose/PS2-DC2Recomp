#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTransMatrix__8mgCFrameFPA4_f
// Address: 0x137590 - 0x1375c0
void SetTransMatrix__8mgCFrameFPA4_f_0x137590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTransMatrix__8mgCFrameFPA4_f_0x137590");
#endif

    switch (ctx->pc) {
        case 0x1375a8u: goto label_1375a8;
        default: break;
    }

    ctx->pc = 0x137590u;

    // 0x137590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13759c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13759cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375a0: 0xc041c60  jal         func_107180
    ctx->pc = 0x1375A0u;
    SET_GPR_U32(ctx, 31, 0x1375A8u);
    ctx->pc = 0x1375A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1375A0u;
            // 0x1375a4: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1375A8u; }
        if (ctx->pc != 0x1375A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1375A8u; }
        if (ctx->pc != 0x1375A8u) { return; }
    }
    ctx->pc = 0x1375A8u;
label_1375a8:
    // 0x1375a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1375a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1375ac: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1375acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1375b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1375b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1375b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1375b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1375b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1375B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1375BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375B8u;
            // 0x1375bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1375C0u;
}
