#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitBalanceDraw__FP6CScene
// Address: 0x2dd240 - 0x2dd28c
void InitBalanceDraw__FP6CScene_0x2dd240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitBalanceDraw__FP6CScene_0x2dd240");
#endif

    switch (ctx->pc) {
        case 0x2dd258u: goto label_2dd258;
        case 0x2dd26cu: goto label_2dd26c;
        case 0x2dd27cu: goto label_2dd27c;
        default: break;
    }

    ctx->pc = 0x2dd240u;

    // 0x2dd240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dd244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dd244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dd248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd24c: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2dd24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x2dd250: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2DD250u;
    SET_GPR_U32(ctx, 31, 0x2DD258u);
    ctx->pc = 0x2DD254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD250u;
            // 0x2dd254: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD258u; }
        if (ctx->pc != 0x2DD258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD258u; }
        if (ctx->pc != 0x2DD258u) { return; }
    }
    ctx->pc = 0x2DD258u;
label_2dd258:
    // 0x2dd258: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD258u;
    {
        const bool branch_taken_0x2dd258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd258) {
            ctx->pc = 0x2DD26Cu;
            goto label_2dd26c;
        }
    }
    ctx->pc = 0x2DD260u;
    // 0x2dd260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dd260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd264: 0xc0bbc2c  jal         func_2EF0B0
    ctx->pc = 0x2DD264u;
    SET_GPR_U32(ctx, 31, 0x2DD26Cu);
    ctx->pc = 0x2DD268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD264u;
            // 0x2dd268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF0B0u;
    if (runtime->hasFunction(0x2EF0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD26Cu; }
        if (ctx->pc != 0x2DD26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GroundBalance__8CEditMapFi_0x2ef0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD26Cu; }
        if (ctx->pc != 0x2DD26Cu) { return; }
    }
    ctx->pc = 0x2DD26Cu;
label_2dd26c:
    // 0x2dd26c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2dd26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2dd270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd274: 0xc0b74a4  jal         func_2DD290
    ctx->pc = 0x2DD274u;
    SET_GPR_U32(ctx, 31, 0x2DD27Cu);
    ctx->pc = 0x2DD278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD274u;
            // 0x2dd278: 0x24a58cf0  addiu       $a1, $a1, -0x7310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD290u;
    if (runtime->hasFunction(0x2DD290u)) {
        auto targetFn = runtime->lookupFunction(0x2DD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD27Cu; }
        if (ctx->pc != 0x2DD27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBalanceHeight__FP6CScenePf_0x2dd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD27Cu; }
        if (ctx->pc != 0x2DD27Cu) { return; }
    }
    ctx->pc = 0x2DD27Cu;
label_2dd27c:
    // 0x2dd27c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dd27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd284: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD284u;
            // 0x2dd288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD28Cu;
}
