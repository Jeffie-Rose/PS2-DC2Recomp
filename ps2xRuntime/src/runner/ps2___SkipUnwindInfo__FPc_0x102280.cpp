#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __SkipUnwindInfo__FPc
// Address: 0x102280 - 0x1022cc
void ps2___SkipUnwindInfo__FPc_0x102280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___SkipUnwindInfo__FPc_0x102280");
#endif

    switch (ctx->pc) {
        case 0x1022a0u: goto label_1022a0;
        case 0x1022acu: goto label_1022ac;
        case 0x1022bcu: goto label_1022bc;
        default: break;
    }

    ctx->pc = 0x102280u;

    // 0x102280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x102284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102288: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x102288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10228c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10228cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x102290: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x102290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102294: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x102294u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x102298: 0xc04028c  jal         func_100A30
    ctx->pc = 0x102298u;
    SET_GPR_U32(ctx, 31, 0x1022A0u);
    ctx->pc = 0x10229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102298u;
            // 0x10229c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022A0u; }
        if (ctx->pc != 0x1022A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022A0u; }
        if (ctx->pc != 0x1022A0u) { return; }
    }
    ctx->pc = 0x1022A0u;
label_1022a0:
    // 0x1022a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1022a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022a4: 0xc04028c  jal         func_100A30
    ctx->pc = 0x1022A4u;
    SET_GPR_U32(ctx, 31, 0x1022ACu);
    ctx->pc = 0x1022A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1022A4u;
            // 0x1022a8: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022ACu; }
        if (ctx->pc != 0x1022ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022ACu; }
        if (ctx->pc != 0x1022ACu) { return; }
    }
    ctx->pc = 0x1022ACu;
label_1022ac:
    // 0x1022ac: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1022ACu;
    {
        const bool branch_taken_0x1022ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022ACu;
            // 0x1022b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022ac) {
            ctx->pc = 0x1022BCu;
            goto label_1022bc;
        }
    }
    ctx->pc = 0x1022B4u;
    // 0x1022b4: 0xc04028c  jal         func_100A30
    ctx->pc = 0x1022B4u;
    SET_GPR_U32(ctx, 31, 0x1022BCu);
    ctx->pc = 0x1022B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1022B4u;
            // 0x1022b8: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022BCu; }
        if (ctx->pc != 0x1022BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022BCu; }
        if (ctx->pc != 0x1022BCu) { return; }
    }
    ctx->pc = 0x1022BCu;
label_1022bc:
    // 0x1022bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1022bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1022c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1022c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1022c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1022C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1022C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022C4u;
            // 0x1022c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1022CCu;
}
