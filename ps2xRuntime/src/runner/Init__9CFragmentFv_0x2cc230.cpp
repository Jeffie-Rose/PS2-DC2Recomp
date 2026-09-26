#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__9CFragmentFv
// Address: 0x2cc230 - 0x2cc280
void Init__9CFragmentFv_0x2cc230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9CFragmentFv_0x2cc230");
#endif

    switch (ctx->pc) {
        case 0x2cc254u: goto label_2cc254;
        case 0x2cc25cu: goto label_2cc25c;
        case 0x2cc264u: goto label_2cc264;
        case 0x2cc26cu: goto label_2cc26c;
        default: break;
    }

    ctx->pc = 0x2cc230u;

    // 0x2cc230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc240: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cc240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cc244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cc244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc248: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2cc248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2cc24c: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CC24Cu;
    SET_GPR_U32(ctx, 31, 0x2CC254u);
    ctx->pc = 0x2CC250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC24Cu;
            // 0x2cc250: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC254u; }
        if (ctx->pc != 0x2CC254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC254u; }
        if (ctx->pc != 0x2CC254u) { return; }
    }
    ctx->pc = 0x2CC254u;
label_2cc254:
    // 0x2cc254: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CC254u;
    SET_GPR_U32(ctx, 31, 0x2CC25Cu);
    ctx->pc = 0x2CC258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC254u;
            // 0x2cc258: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC25Cu; }
        if (ctx->pc != 0x2CC25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC25Cu; }
        if (ctx->pc != 0x2CC25Cu) { return; }
    }
    ctx->pc = 0x2CC25Cu;
label_2cc25c:
    // 0x2cc25c: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CC25Cu;
    SET_GPR_U32(ctx, 31, 0x2CC264u);
    ctx->pc = 0x2CC260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC25Cu;
            // 0x2cc260: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC264u; }
        if (ctx->pc != 0x2CC264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC264u; }
        if (ctx->pc != 0x2CC264u) { return; }
    }
    ctx->pc = 0x2CC264u;
label_2cc264:
    // 0x2cc264: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CC264u;
    SET_GPR_U32(ctx, 31, 0x2CC26Cu);
    ctx->pc = 0x2CC268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC264u;
            // 0x2cc268: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC26Cu; }
        if (ctx->pc != 0x2CC26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC26Cu; }
        if (ctx->pc != 0x2CC26Cu) { return; }
    }
    ctx->pc = 0x2CC26Cu;
label_2cc26c:
    // 0x2cc26c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2cc26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2cc270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cc270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc278: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC278u;
            // 0x2cc27c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC280u;
}
