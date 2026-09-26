#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: audioDecDelete__FP8AudioDec
// Address: 0x29b170 - 0x29b1a4
void audioDecDelete__FP8AudioDec_0x29b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecDelete__FP8AudioDec_0x29b170");
#endif

    switch (ctx->pc) {
        case 0x29b188u: goto label_29b188;
        case 0x29b190u: goto label_29b190;
        default: break;
    }

    ctx->pc = 0x29b170u;

    // 0x29b170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b180: 0xc045c8a  jal         func_117228
    ctx->pc = 0x29B180u;
    SET_GPR_U32(ctx, 31, 0x29B188u);
    ctx->pc = 0x29B184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B180u;
            // 0x29b184: 0x8c840044  lw          $a0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117228u;
    if (runtime->hasFunction(0x117228u)) {
        auto targetFn = runtime->lookupFunction(0x117228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B188u; }
        if (ctx->pc != 0x29B188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x117228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B188u; }
        if (ctx->pc != 0x29B188u) { return; }
    }
    ctx->pc = 0x29B188u;
label_29b188:
    // 0x29b188: 0xc045c8a  jal         func_117228
    ctx->pc = 0x29B188u;
    SET_GPR_U32(ctx, 31, 0x29B190u);
    ctx->pc = 0x29B18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B188u;
            // 0x29b18c: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117228u;
    if (runtime->hasFunction(0x117228u)) {
        auto targetFn = runtime->lookupFunction(0x117228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B190u; }
        if (ctx->pc != 0x29B190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x117228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B190u; }
        if (ctx->pc != 0x29B190u) { return; }
    }
    ctx->pc = 0x29B190u;
label_29b190:
    // 0x29b190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b19c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B19Cu;
            // 0x29b1a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B1A4u;
}
