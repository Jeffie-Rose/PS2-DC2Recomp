#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_RND_CIRCLE_STATUS__FP12RS_STACKDATAi
// Address: 0x279160 - 0x2791a0
void ps2__SET_RND_CIRCLE_STATUS__FP12RS_STACKDATAi_0x279160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_RND_CIRCLE_STATUS__FP12RS_STACKDATAi_0x279160");
#endif

    switch (ctx->pc) {
        case 0x279174u: goto label_279174;
        case 0x279180u: goto label_279180;
        case 0x27918cu: goto label_27918c;
        default: break;
    }

    ctx->pc = 0x279160u;

    // 0x279160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x279164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x279168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27916c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27916Cu;
    SET_GPR_U32(ctx, 31, 0x279174u);
    ctx->pc = 0x279170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27916Cu;
            // 0x279170: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279174u; }
        if (ctx->pc != 0x279174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279174u; }
        if (ctx->pc != 0x279174u) { return; }
    }
    ctx->pc = 0x279174u;
label_279174:
    // 0x279174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x279174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279178: 0xc0681ac  jal         func_1A06B0
    ctx->pc = 0x279178u;
    SET_GPR_U32(ctx, 31, 0x279180u);
    ctx->pc = 0x27917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279178u;
            // 0x27917c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A06B0u;
    if (runtime->hasFunction(0x1A06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279180u; }
        if (ctx->pc != 0x279180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRandamCircleStatus__FiRf_0x1a06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279180u; }
        if (ctx->pc != 0x279180u) { return; }
    }
    ctx->pc = 0x279180u;
label_279180:
    // 0x279180: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x279180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x279184: 0xc097e54  jal         func_25F950
    ctx->pc = 0x279184u;
    SET_GPR_U32(ctx, 31, 0x27918Cu);
    ctx->pc = 0x279188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279184u;
            // 0x279188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27918Cu; }
        if (ctx->pc != 0x27918Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27918Cu; }
        if (ctx->pc != 0x27918Cu) { return; }
    }
    ctx->pc = 0x27918Cu;
label_27918c:
    // 0x27918c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27918cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279198: 0x3e00008  jr          $ra
    ctx->pc = 0x279198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279198u;
            // 0x27919c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2791A0u;
}
