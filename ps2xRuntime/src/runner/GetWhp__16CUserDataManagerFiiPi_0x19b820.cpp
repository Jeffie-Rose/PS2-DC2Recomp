#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWhp__16CUserDataManagerFiiPi
// Address: 0x19b820 - 0x19b87c
void GetWhp__16CUserDataManagerFiiPi_0x19b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWhp__16CUserDataManagerFiiPi_0x19b820");
#endif

    switch (ctx->pc) {
        case 0x19b838u: goto label_19b838;
        case 0x19b85cu: goto label_19b85c;
        case 0x19b868u: goto label_19b868;
        default: break;
    }

    ctx->pc = 0x19b820u;

    // 0x19b820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19b824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19b828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b82c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19b82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b830: 0xc066d88  jal         func_19B620
    ctx->pc = 0x19B830u;
    SET_GPR_U32(ctx, 31, 0x19B838u);
    ctx->pc = 0x19B834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B830u;
            // 0x19b834: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B620u;
    if (runtime->hasFunction(0x19B620u)) {
        auto targetFn = runtime->lookupFunction(0x19B620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B838u; }
        if (ctx->pc != 0x19B838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWHpGage__16CUserDataManagerFii_0x19b620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B838u; }
        if (ctx->pc != 0x19B838u) { return; }
    }
    ctx->pc = 0x19B838u;
label_19b838:
    // 0x19b838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19b838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b83c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B83Cu;
    {
        const bool branch_taken_0x19b83c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B83Cu;
            // 0x19b840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b83c) {
            ctx->pc = 0x19B84Cu;
            goto label_19b84c;
        }
    }
    ctx->pc = 0x19B844u;
    // 0x19b844: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19B844u;
    {
        const bool branch_taken_0x19b844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B844u;
            // 0x19b848: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b844) {
            ctx->pc = 0x19B86Cu;
            goto label_19b86c;
        }
    }
    ctx->pc = 0x19B84Cu;
label_19b84c:
    // 0x19b84c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B84Cu;
    {
        const bool branch_taken_0x19b84c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b84c) {
            ctx->pc = 0x19B860u;
            goto label_19b860;
        }
    }
    ctx->pc = 0x19B854u;
    // 0x19b854: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19B854u;
    SET_GPR_U32(ctx, 31, 0x19B85Cu);
    ctx->pc = 0x19B858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B854u;
            // 0x19b858: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B85Cu; }
        if (ctx->pc != 0x19B85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B85Cu; }
        if (ctx->pc != 0x19B85Cu) { return; }
    }
    ctx->pc = 0x19B85Cu;
label_19b85c:
    // 0x19b85c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_19b860:
    // 0x19b860: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19B860u;
    SET_GPR_U32(ctx, 31, 0x19B868u);
    ctx->pc = 0x19B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B860u;
            // 0x19b864: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B868u; }
        if (ctx->pc != 0x19B868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B868u; }
        if (ctx->pc != 0x19B868u) { return; }
    }
    ctx->pc = 0x19B868u;
label_19b868:
    // 0x19b868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19b868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19b86c:
    // 0x19b86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b874: 0x3e00008  jr          $ra
    ctx->pc = 0x19B874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B874u;
            // 0x19b878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B87Cu;
}
