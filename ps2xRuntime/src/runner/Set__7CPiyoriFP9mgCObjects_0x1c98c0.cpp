#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__7CPiyoriFP9mgCObjects
// Address: 0x1c98c0 - 0x1c98f8
void Set__7CPiyoriFP9mgCObjects_0x1c98c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__7CPiyoriFP9mgCObjects_0x1c98c0");
#endif

    switch (ctx->pc) {
        case 0x1c98ecu: goto label_1c98ec;
        default: break;
    }

    ctx->pc = 0x1c98c0u;

    // 0x1c98c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c98c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c98c4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C98C4u;
    {
        const bool branch_taken_0x1c98c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C98C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98C4u;
            // 0x1c98c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98c4) {
            ctx->pc = 0x1C98ECu;
            goto label_1c98ec;
        }
    }
    ctx->pc = 0x1C98CCu;
    // 0x1c98cc: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x1c98ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c98d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c98d4: 0xc4a0010c  lwc1        $f0, 0x10C($a1)
    ctx->pc = 0x1c98d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c98d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c98d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c98dc: 0x0  nop
    ctx->pc = 0x1c98dcu;
    // NOP
    // 0x1c98e0: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1c98e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c98e4: 0xc07260c  jal         func_1C9830
    ctx->pc = 0x1C98E4u;
    SET_GPR_U32(ctx, 31, 0x1C98ECu);
    ctx->pc = 0x1C98E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98E4u;
            // 0x1c98e8: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9830u;
    if (runtime->hasFunction(0x1C9830u)) {
        auto targetFn = runtime->lookupFunction(0x1C9830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98ECu; }
        if (ctx->pc != 0x1C98ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__7CPiyoriFP9mgCObjectffs_0x1c9830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98ECu; }
        if (ctx->pc != 0x1C98ECu) { return; }
    }
    ctx->pc = 0x1C98ECu;
label_1c98ec:
    // 0x1c98ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c98ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c98f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C98F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C98F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98F0u;
            // 0x1c98f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C98F8u;
}
