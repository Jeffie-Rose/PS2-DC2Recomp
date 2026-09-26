#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SeAllStop_Sub__Fi
// Address: 0x18d750 - 0x18d7b8
void SeAllStop_Sub__Fi_0x18d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeAllStop_Sub__Fi_0x18d750");
#endif

    switch (ctx->pc) {
        case 0x18d768u: goto label_18d768;
        case 0x18d788u: goto label_18d788;
        case 0x18d7a8u: goto label_18d7a8;
        default: break;
    }

    ctx->pc = 0x18d750u;

    // 0x18d750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d758: 0x4800013  bltz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18D758u;
    {
        const bool branch_taken_0x18d758 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18D75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D758u;
            // 0x18d75c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d758) {
            ctx->pc = 0x18D7A8u;
            goto label_18d7a8;
        }
    }
    ctx->pc = 0x18D760u;
    // 0x18d760: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18D760u;
    SET_GPR_U32(ctx, 31, 0x18D768u);
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D768u; }
        if (ctx->pc != 0x18D768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D768u; }
        if (ctx->pc != 0x18D768u) { return; }
    }
    ctx->pc = 0x18D768u;
label_18d768:
    // 0x18d768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d76c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x18D76Cu;
    {
        const bool branch_taken_0x18d76c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d76c) {
            ctx->pc = 0x18D7A8u;
            goto label_18d7a8;
        }
    }
    ctx->pc = 0x18D774u;
    // 0x18d774: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18d774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18d778: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D778u;
    {
        const bool branch_taken_0x18d778 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18D77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D778u;
            // 0x18d77c: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d778) {
            ctx->pc = 0x18D788u;
            goto label_18d788;
        }
    }
    ctx->pc = 0x18D780u;
    // 0x18d780: 0xc0628a0  jal         func_18A280
    ctx->pc = 0x18D780u;
    SET_GPR_U32(ctx, 31, 0x18D788u);
    ctx->pc = 0x18A280u;
    if (runtime->hasFunction(0x18A280u)) {
        auto targetFn = runtime->lookupFunction(0x18A280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D788u; }
        if (ctx->pc != 0x18D788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stop__6CSoundFi_0x18a280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D788u; }
        if (ctx->pc != 0x18D788u) { return; }
    }
    ctx->pc = 0x18D788u;
label_18d788:
    // 0x18d788: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x18d788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18d78c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D78Cu;
    {
        const bool branch_taken_0x18d78c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x18d78c) {
            ctx->pc = 0x18D7A8u;
            goto label_18d7a8;
        }
    }
    ctx->pc = 0x18D794u;
    // 0x18d794: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18d794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18d798: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D798u;
    {
        const bool branch_taken_0x18d798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x18D79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D798u;
            // 0x18d79c: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d798) {
            ctx->pc = 0x18D7A8u;
            goto label_18d7a8;
        }
    }
    ctx->pc = 0x18D7A0u;
    // 0x18d7a0: 0xc0628a0  jal         func_18A280
    ctx->pc = 0x18D7A0u;
    SET_GPR_U32(ctx, 31, 0x18D7A8u);
    ctx->pc = 0x18A280u;
    if (runtime->hasFunction(0x18A280u)) {
        auto targetFn = runtime->lookupFunction(0x18A280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7A8u; }
        if (ctx->pc != 0x18D7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stop__6CSoundFi_0x18a280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7A8u; }
        if (ctx->pc != 0x18D7A8u) { return; }
    }
    ctx->pc = 0x18D7A8u;
label_18d7a8:
    // 0x18d7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d7ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18D7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7B0u;
            // 0x18d7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D7B8u;
}
