#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__9CRainDropFv
// Address: 0x282100 - 0x28217c
void Init__9CRainDropFv_0x282100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9CRainDropFv_0x282100");
#endif

    switch (ctx->pc) {
        case 0x282128u: goto label_282128;
        case 0x282134u: goto label_282134;
        case 0x282150u: goto label_282150;
        default: break;
    }

    ctx->pc = 0x282100u;

    // 0x282100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x282108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28210c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282110: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x282110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282114: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282118: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x282118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28211c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28211cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x282120: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x282120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282124: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x282124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_282128:
    // 0x282128: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x282128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x28212c: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x28212Cu;
    SET_GPR_U32(ctx, 31, 0x282134u);
    ctx->pc = 0x282130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28212Cu;
            // 0x282130: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282134u; }
        if (ctx->pc != 0x282134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282134u; }
        if (ctx->pc != 0x282134u) { return; }
    }
    ctx->pc = 0x282134u;
label_282134:
    // 0x282134: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x282134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x282138: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x282138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28213c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x28213cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x282140: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x282140u;
    {
        const bool branch_taken_0x282140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282140) {
            ctx->pc = 0x282128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282128;
        }
    }
    ctx->pc = 0x282148u;
    // 0x282148: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x282148u;
    SET_GPR_U32(ctx, 31, 0x282150u);
    ctx->pc = 0x28214Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282148u;
            // 0x28214c: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282150u; }
        if (ctx->pc != 0x282150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282150u; }
        if (ctx->pc != 0x282150u) { return; }
    }
    ctx->pc = 0x282150u;
label_282150:
    // 0x282150: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x282150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282154: 0xae4300a0  sw          $v1, 0xA0($s2)
    ctx->pc = 0x282154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
    // 0x282158: 0xae4300a4  sw          $v1, 0xA4($s2)
    ctx->pc = 0x282158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 3));
    // 0x28215c: 0xae4300a8  sw          $v1, 0xA8($s2)
    ctx->pc = 0x28215cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 3));
    // 0x282160: 0xae4300ac  sw          $v1, 0xAC($s2)
    ctx->pc = 0x282160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
    // 0x282164: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x282164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28216c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28216cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282174: 0x3e00008  jr          $ra
    ctx->pc = 0x282174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282174u;
            // 0x282178: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28217Cu;
}
