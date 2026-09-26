#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditPartsCmpColor__FPfPf
// Address: 0x1b5f90 - 0x1b5fd0
void EditPartsCmpColor__FPfPf_0x1b5f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditPartsCmpColor__FPfPf_0x1b5f90");
#endif

    switch (ctx->pc) {
        case 0x1b5fa0u: goto label_1b5fa0;
        default: break;
    }

    ctx->pc = 0x1b5f90u;

    // 0x1b5f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5f98: 0xc04c018  jal         func_130060
    ctx->pc = 0x1B5F98u;
    SET_GPR_U32(ctx, 31, 0x1B5FA0u);
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FA0u; }
        if (ctx->pc != 0x1B5FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5FA0u; }
        if (ctx->pc != 0x1B5FA0u) { return; }
    }
    ctx->pc = 0x1B5FA0u;
label_1b5fa0:
    // 0x1b5fa0: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x1b5fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x1b5fa4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1b5fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1b5fa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b5fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5fac: 0x0  nop
    ctx->pc = 0x1b5facu;
    // NOP
    // 0x1b5fb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b5fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5fb4: 0x0  nop
    ctx->pc = 0x1b5fb4u;
    // NOP
    // 0x1b5fb8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5FB8u;
    {
        const bool branch_taken_0x1b5fb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FB8u;
            // 0x1b5fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fb8) {
            ctx->pc = 0x1B5FC4u;
            goto label_1b5fc4;
        }
    }
    ctx->pc = 0x1B5FC0u;
    // 0x1b5fc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fc4:
    // 0x1b5fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5FC8u;
            // 0x1b5fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5FD0u;
}
