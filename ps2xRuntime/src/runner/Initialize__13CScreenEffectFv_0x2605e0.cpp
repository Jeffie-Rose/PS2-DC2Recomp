#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__13CScreenEffectFv
// Address: 0x2605e0 - 0x260624
void Initialize__13CScreenEffectFv_0x2605e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__13CScreenEffectFv_0x2605e0");
#endif

    switch (ctx->pc) {
        case 0x2605f4u: goto label_2605f4;
        default: break;
    }

    ctx->pc = 0x2605e0u;

    // 0x2605e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2605e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2605e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2605e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2605e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2605e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2605ec: 0xc097fc0  jal         func_25FF00
    ctx->pc = 0x2605ECu;
    SET_GPR_U32(ctx, 31, 0x2605F4u);
    ctx->pc = 0x2605F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2605ECu;
            // 0x2605f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FF00u;
    if (runtime->hasFunction(0x25FF00u)) {
        auto targetFn = runtime->lookupFunction(0x25FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2605F4u; }
        if (ctx->pc != 0x2605F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CRasterFv_0x25ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2605F4u; }
        if (ctx->pc != 0x2605F4u) { return; }
    }
    ctx->pc = 0x2605F4u;
label_2605f4:
    // 0x2605f4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2605f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2605f8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2605f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2605fc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2605fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x260600: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x260600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x260604: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x260604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x260608: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x260608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x26060c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x26060cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x260610: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x260610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x260614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x260614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x260618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26061c: 0x3e00008  jr          $ra
    ctx->pc = 0x26061Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26061Cu;
            // 0x260620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x260624u;
}
