#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPRITE_SET_SCALE__FP12RS_STACKDATAi
// Address: 0x26f0e0 - 0x26f144
void ps2__SPRITE_SET_SCALE__FP12RS_STACKDATAi_0x26f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPRITE_SET_SCALE__FP12RS_STACKDATAi_0x26f0e0");
#endif

    switch (ctx->pc) {
        case 0x26f0f4u: goto label_26f0f4;
        case 0x26f104u: goto label_26f104;
        case 0x26f110u: goto label_26f110;
        case 0x26f118u: goto label_26f118;
        case 0x26f130u: goto label_26f130;
        default: break;
    }

    ctx->pc = 0x26f0e0u;

    // 0x26f0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f0e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f0ec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F0ECu;
    SET_GPR_U32(ctx, 31, 0x26F0F4u);
    ctx->pc = 0x26F0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0ECu;
            // 0x26f0f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0F4u; }
        if (ctx->pc != 0x26F0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0F4u; }
        if (ctx->pc != 0x26F0F4u) { return; }
    }
    ctx->pc = 0x26F0F4u;
label_26f0f4:
    // 0x26f0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26f0f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0fc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F0FCu;
    SET_GPR_U32(ctx, 31, 0x26F104u);
    ctx->pc = 0x26F100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0FCu;
            // 0x26f100: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F104u; }
        if (ctx->pc != 0x26F104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F104u; }
        if (ctx->pc != 0x26F104u) { return; }
    }
    ctx->pc = 0x26F104u;
label_26f104:
    // 0x26f104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f108: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F108u;
    SET_GPR_U32(ctx, 31, 0x26F110u);
    ctx->pc = 0x26F10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F108u;
            // 0x26f10c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F110u; }
        if (ctx->pc != 0x26F110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F110u; }
        if (ctx->pc != 0x26F110u) { return; }
    }
    ctx->pc = 0x26F110u;
label_26f110:
    // 0x26f110: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26F110u;
    SET_GPR_U32(ctx, 31, 0x26F118u);
    ctx->pc = 0x26F114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F110u;
            // 0x26f114: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F118u; }
        if (ctx->pc != 0x26F118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F118u; }
        if (ctx->pc != 0x26F118u) { return; }
    }
    ctx->pc = 0x26F118u;
label_26f118:
    // 0x26f118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F118u;
    {
        const bool branch_taken_0x26f118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F118u;
            // 0x26f11c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f118) {
            ctx->pc = 0x26F128u;
            goto label_26f128;
        }
    }
    ctx->pc = 0x26F120u;
    // 0x26f120: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26F120u;
    {
        const bool branch_taken_0x26f120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F120u;
            // 0x26f124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f120) {
            ctx->pc = 0x26F134u;
            goto label_26f134;
        }
    }
    ctx->pc = 0x26F128u;
label_26f128:
    // 0x26f128: 0xc0a42f4  jal         func_290BD0
    ctx->pc = 0x26F128u;
    SET_GPR_U32(ctx, 31, 0x26F130u);
    ctx->pc = 0x26F12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F128u;
            // 0x26f12c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x290BD0u;
    if (runtime->hasFunction(0x290BD0u)) {
        auto targetFn = runtime->lookupFunction(0x290BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F130u; }
        if (ctx->pc != 0x26F130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScale__13CEventSprite2Fff_0x290bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F130u; }
        if (ctx->pc != 0x26F130u) { return; }
    }
    ctx->pc = 0x26F130u;
label_26f130:
    // 0x26f130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f134:
    // 0x26f134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f13c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F13Cu;
            // 0x26f140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F144u;
}
