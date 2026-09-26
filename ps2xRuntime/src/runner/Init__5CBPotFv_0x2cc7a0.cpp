#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__5CBPotFv
// Address: 0x2cc7a0 - 0x2cc81c
void Init__5CBPotFv_0x2cc7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__5CBPotFv_0x2cc7a0");
#endif

    switch (ctx->pc) {
        case 0x2cc7ccu: goto label_2cc7cc;
        case 0x2cc7e0u: goto label_2cc7e0;
        case 0x2cc7ecu: goto label_2cc7ec;
        default: break;
    }

    ctx->pc = 0x2cc7a0u;

    // 0x2cc7a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc7a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cc7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cc7a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc7ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc7b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cc7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc7b8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2cc7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2cc7bc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2cc7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2cc7c0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2cc7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2cc7c4: 0xc0a04e0  jal         func_281380
    ctx->pc = 0x2CC7C4u;
    SET_GPR_U32(ctx, 31, 0x2CC7CCu);
    ctx->pc = 0x2CC7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC7C4u;
            // 0x2cc7c8: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281380u;
    if (runtime->hasFunction(0x281380u)) {
        auto targetFn = runtime->lookupFunction(0x281380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC7CCu; }
        if (ctx->pc != 0x2CC7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitVector__FPf_0x281380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC7CCu; }
        if (ctx->pc != 0x2CC7CCu) { return; }
    }
    ctx->pc = 0x2CC7CCu;
label_2cc7cc:
    // 0x2cc7cc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2cc7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2cc7d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cc7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7d4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2cc7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2cc7d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cc7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7dc: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2cc7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_2cc7e0:
    // 0x2cc7e0: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2cc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2cc7e4: 0xc0b308c  jal         func_2CC230
    ctx->pc = 0x2CC7E4u;
    SET_GPR_U32(ctx, 31, 0x2CC7ECu);
    ctx->pc = 0x2CC7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC7E4u;
            // 0x2cc7e8: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC230u;
    if (runtime->hasFunction(0x2CC230u)) {
        auto targetFn = runtime->lookupFunction(0x2CC230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC7ECu; }
        if (ctx->pc != 0x2CC7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9CFragmentFv_0x2cc230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC7ECu; }
        if (ctx->pc != 0x2CC7ECu) { return; }
    }
    ctx->pc = 0x2CC7ECu;
label_2cc7ec:
    // 0x2cc7ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cc7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cc7f0: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x2cc7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2cc7f4: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x2cc7f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2cc7f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CC7F8u;
    {
        const bool branch_taken_0x2cc7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc7f8) {
            ctx->pc = 0x2CC7E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc7e0;
        }
    }
    ctx->pc = 0x2CC800u;
    // 0x2cc800: 0xae400c40  sw          $zero, 0xC40($s2)
    ctx->pc = 0x2cc800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3136), GPR_U32(ctx, 0));
    // 0x2cc804: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cc804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc80c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc80cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc814: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC814u;
            // 0x2cc818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC81Cu;
}
