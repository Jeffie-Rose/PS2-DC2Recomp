#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SubTime__Fff
// Address: 0x29c5f0 - 0x29c63c
void SubTime__Fff_0x29c5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SubTime__Fff_0x29c5f0");
#endif

    switch (ctx->pc) {
        case 0x29c600u: goto label_29c600;
        default: break;
    }

    ctx->pc = 0x29c5f0u;

    // 0x29c5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c5f8: 0xc0a714c  jal         func_29C530
    ctx->pc = 0x29C5F8u;
    SET_GPR_U32(ctx, 31, 0x29C600u);
    ctx->pc = 0x29C5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C5F8u;
            // 0x29c5fc: 0x460d6301  sub.s       $f12, $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C530u;
    if (runtime->hasFunction(0x29C530u)) {
        auto targetFn = runtime->lookupFunction(0x29C530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C600u; }
        if (ctx->pc != 0x29C600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LimitTime__Ff_0x29c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C600u; }
        if (ctx->pc != 0x29C600u) { return; }
    }
    ctx->pc = 0x29C600u;
label_29c600:
    // 0x29c600: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x29c600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x29c604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29c604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c608: 0x0  nop
    ctx->pc = 0x29c608u;
    // NOP
    // 0x29c60c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29c60cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c610: 0x0  nop
    ctx->pc = 0x29c610u;
    // NOP
    // 0x29c614: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29C614u;
    {
        const bool branch_taken_0x29c614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C614u;
            // 0x29c618: 0x3c0241c0  lui         $v0, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c614) {
            ctx->pc = 0x29C624u;
            goto label_29c624;
        }
    }
    ctx->pc = 0x29C61Cu;
    // 0x29c61c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29C61Cu;
    {
        const bool branch_taken_0x29c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C61Cu;
            // 0x29c620: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c61c) {
            ctx->pc = 0x29C634u;
            goto label_29c634;
        }
    }
    ctx->pc = 0x29C624u;
label_29c624:
    // 0x29c624: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29c624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c628: 0x0  nop
    ctx->pc = 0x29c628u;
    // NOP
    // 0x29c62c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29c62cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c634:
    // 0x29c634: 0x3e00008  jr          $ra
    ctx->pc = 0x29C634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C634u;
            // 0x29c638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C63Cu;
}
