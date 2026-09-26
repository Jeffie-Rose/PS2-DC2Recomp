#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufEndPut__FP5ViBufi
// Address: 0x299fc0 - 0x29a01c
void viBufEndPut__FP5ViBufi_0x299fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufEndPut__FP5ViBufi_0x299fc0");
#endif

    switch (ctx->pc) {
        case 0x299fe0u: goto label_299fe0;
        case 0x29a008u: goto label_29a008;
        default: break;
    }

    ctx->pc = 0x299fc0u;

    // 0x299fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x299fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x299fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x299fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x299fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299fd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x299fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299fd4: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x299fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x299fd8: 0xc044048  jal         func_110120
    ctx->pc = 0x299FD8u;
    SET_GPR_U32(ctx, 31, 0x299FE0u);
    ctx->pc = 0x299FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299FD8u;
            // 0x299fdc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299FE0u; }
        if (ctx->pc != 0x299FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299FE0u; }
        if (ctx->pc != 0x299FE0u) { return; }
    }
    ctx->pc = 0x299FE0u;
label_299fe0:
    // 0x299fe0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x299fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x299fe4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x299fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x299fe8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x299fe8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x299fec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x299fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x299ff0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x299ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x299ff4: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x299ff4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x299ff8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x299ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x299ffc: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x299ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
    // 0x29a000: 0xc044040  jal         func_110100
    ctx->pc = 0x29A000u;
    SET_GPR_U32(ctx, 31, 0x29A008u);
    ctx->pc = 0x29A004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A000u;
            // 0x29a004: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A008u; }
        if (ctx->pc != 0x29A008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A008u; }
        if (ctx->pc != 0x29A008u) { return; }
    }
    ctx->pc = 0x29A008u;
label_29a008:
    // 0x29a008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a00c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a014: 0x3e00008  jr          $ra
    ctx->pc = 0x29A014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A014u;
            // 0x29a018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A01Cu;
}
