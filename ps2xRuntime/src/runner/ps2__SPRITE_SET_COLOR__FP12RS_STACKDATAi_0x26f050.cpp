#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPRITE_SET_COLOR__FP12RS_STACKDATAi
// Address: 0x26f050 - 0x26f0d8
void ps2__SPRITE_SET_COLOR__FP12RS_STACKDATAi_0x26f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPRITE_SET_COLOR__FP12RS_STACKDATAi_0x26f050");
#endif

    switch (ctx->pc) {
        case 0x26f064u: goto label_26f064;
        case 0x26f074u: goto label_26f074;
        case 0x26f084u: goto label_26f084;
        case 0x26f094u: goto label_26f094;
        case 0x26f0a0u: goto label_26f0a0;
        case 0x26f0acu: goto label_26f0ac;
        case 0x26f0c4u: goto label_26f0c4;
        default: break;
    }

    ctx->pc = 0x26f050u;

    // 0x26f050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26f054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f05c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F05Cu;
    SET_GPR_U32(ctx, 31, 0x26F064u);
    ctx->pc = 0x26F060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F05Cu;
            // 0x26f060: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F064u; }
        if (ctx->pc != 0x26F064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F064u; }
        if (ctx->pc != 0x26F064u) { return; }
    }
    ctx->pc = 0x26F064u;
label_26f064:
    // 0x26f064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f068: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26f068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f06c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F06Cu;
    SET_GPR_U32(ctx, 31, 0x26F074u);
    ctx->pc = 0x26F070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F06Cu;
            // 0x26f070: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F074u; }
        if (ctx->pc != 0x26F074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F074u; }
        if (ctx->pc != 0x26F074u) { return; }
    }
    ctx->pc = 0x26F074u;
label_26f074:
    // 0x26f074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f078: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26f078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26f07c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F07Cu;
    SET_GPR_U32(ctx, 31, 0x26F084u);
    ctx->pc = 0x26F080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F07Cu;
            // 0x26f080: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F084u; }
        if (ctx->pc != 0x26F084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F084u; }
        if (ctx->pc != 0x26F084u) { return; }
    }
    ctx->pc = 0x26F084u;
label_26f084:
    // 0x26f084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f088: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26f088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26f08c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F08Cu;
    SET_GPR_U32(ctx, 31, 0x26F094u);
    ctx->pc = 0x26F090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F08Cu;
            // 0x26f090: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F094u; }
        if (ctx->pc != 0x26F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F094u; }
        if (ctx->pc != 0x26F094u) { return; }
    }
    ctx->pc = 0x26F094u;
label_26f094:
    // 0x26f094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f098: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26F098u;
    SET_GPR_U32(ctx, 31, 0x26F0A0u);
    ctx->pc = 0x26F09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F098u;
            // 0x26f09c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0A0u; }
        if (ctx->pc != 0x26F0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0A0u; }
        if (ctx->pc != 0x26F0A0u) { return; }
    }
    ctx->pc = 0x26F0A0u;
label_26f0a0:
    // 0x26f0a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0a4: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26F0A4u;
    SET_GPR_U32(ctx, 31, 0x26F0ACu);
    ctx->pc = 0x26F0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0A4u;
            // 0x26f0a8: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0ACu; }
        if (ctx->pc != 0x26F0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0ACu; }
        if (ctx->pc != 0x26F0ACu) { return; }
    }
    ctx->pc = 0x26F0ACu;
label_26f0ac:
    // 0x26f0ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F0ACu;
    {
        const bool branch_taken_0x26f0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0ACu;
            // 0x26f0b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0ac) {
            ctx->pc = 0x26F0BCu;
            goto label_26f0bc;
        }
    }
    ctx->pc = 0x26F0B4u;
    // 0x26f0b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26F0B4u;
    {
        const bool branch_taken_0x26f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0B4u;
            // 0x26f0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0b4) {
            ctx->pc = 0x26F0C8u;
            goto label_26f0c8;
        }
    }
    ctx->pc = 0x26F0BCu;
label_26f0bc:
    // 0x26f0bc: 0xc0a42e4  jal         func_290B90
    ctx->pc = 0x26F0BCu;
    SET_GPR_U32(ctx, 31, 0x26F0C4u);
    ctx->pc = 0x26F0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0BCu;
            // 0x26f0c0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290B90u;
    if (runtime->hasFunction(0x290B90u)) {
        auto targetFn = runtime->lookupFunction(0x290B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0C4u; }
        if (ctx->pc != 0x26F0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__13CEventSprite2FPf_0x290b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0C4u; }
        if (ctx->pc != 0x26F0C4u) { return; }
    }
    ctx->pc = 0x26F0C4u;
label_26f0c4:
    // 0x26f0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f0c8:
    // 0x26f0c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x26F0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0D0u;
            // 0x26f0d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F0D8u;
}
