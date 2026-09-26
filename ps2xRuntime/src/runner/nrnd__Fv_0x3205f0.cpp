#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: nrnd__Fv
// Address: 0x3205f0 - 0x320640
void nrnd__Fv_0x3205f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("nrnd__Fv_0x3205f0");
#endif

    switch (ctx->pc) {
        case 0x320600u: goto label_320600;
        case 0x320608u: goto label_320608;
        default: break;
    }

    ctx->pc = 0x3205f0u;

    // 0x3205f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3205f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3205f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3205f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3205f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3205f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3205fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3205fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320600:
    // 0x320600: 0xc0c816c  jal         func_3205B0
    ctx->pc = 0x320600u;
    SET_GPR_U32(ctx, 31, 0x320608u);
    ctx->pc = 0x3205B0u;
    if (runtime->hasFunction(0x3205B0u)) {
        auto targetFn = runtime->lookupFunction(0x3205B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320608u; }
        if (ctx->pc != 0x320608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rnd__Fv_0x3205b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320608u; }
        if (ctx->pc != 0x320608u) { return; }
    }
    ctx->pc = 0x320608u;
label_320608:
    // 0x320608: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x320608u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x32060c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x32060cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x320610: 0x2942000c  slti        $v0, $t2, 0xC
    ctx->pc = 0x320610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x320614: 0x0  nop
    ctx->pc = 0x320614u;
    // NOP
    // 0x320618: 0x0  nop
    ctx->pc = 0x320618u;
    // NOP
    // 0x32061c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32061Cu;
    {
        const bool branch_taken_0x32061c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32061c) {
            ctx->pc = 0x320600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320600;
        }
    }
    ctx->pc = 0x320624u;
    // 0x320624: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x320624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x320628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32062c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32062cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320630: 0x0  nop
    ctx->pc = 0x320630u;
    // NOP
    // 0x320634: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x320634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x320638: 0x3e00008  jr          $ra
    ctx->pc = 0x320638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32063Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320638u;
            // 0x32063c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x320640u;
}
