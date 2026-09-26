#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPRITE_SET_POS__FP12RS_STACKDATAi
// Address: 0x26ee80 - 0x26ef24
void ps2__SPRITE_SET_POS__FP12RS_STACKDATAi_0x26ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPRITE_SET_POS__FP12RS_STACKDATAi_0x26ee80");
#endif

    switch (ctx->pc) {
        case 0x26eea0u: goto label_26eea0;
        case 0x26eeb4u: goto label_26eeb4;
        case 0x26eec4u: goto label_26eec4;
        case 0x26eed4u: goto label_26eed4;
        case 0x26eee8u: goto label_26eee8;
        case 0x26eef4u: goto label_26eef4;
        case 0x26ef0cu: goto label_26ef0c;
        default: break;
    }

    ctx->pc = 0x26ee80u;

    // 0x26ee80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26ee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26ee84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ee88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ee8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ee90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26ee90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26ee94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee98: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x26EE98u;
    SET_GPR_U32(ctx, 31, 0x26EEA0u);
    ctx->pc = 0x26EE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE98u;
            // 0x26ee9c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EEA0u; }
        if (ctx->pc != 0x26EEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EEA0u; }
        if (ctx->pc != 0x26EEA0u) { return; }
    }
    ctx->pc = 0x26EEA0u;
label_26eea0:
    // 0x26eea0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26eea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26eea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eea8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x26eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x26eeac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EEACu;
    SET_GPR_U32(ctx, 31, 0x26EEB4u);
    ctx->pc = 0x26EEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EEACu;
            // 0x26eeb0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EEB4u; }
        if (ctx->pc != 0x26EEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EEB4u; }
        if (ctx->pc != 0x26EEB4u) { return; }
    }
    ctx->pc = 0x26EEB4u;
label_26eeb4:
    // 0x26eeb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26eeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eeb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26eeb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eebc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26EEBCu;
    SET_GPR_U32(ctx, 31, 0x26EEC4u);
    ctx->pc = 0x26EEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EEBCu;
            // 0x26eec0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EEC4u; }
        if (ctx->pc != 0x26EEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EEC4u; }
        if (ctx->pc != 0x26EEC4u) { return; }
    }
    ctx->pc = 0x26EEC4u;
label_26eec4:
    // 0x26eec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26eec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eec8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26eec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26eecc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26EECCu;
    SET_GPR_U32(ctx, 31, 0x26EED4u);
    ctx->pc = 0x26EED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EECCu;
            // 0x26eed0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EED4u; }
        if (ctx->pc != 0x26EED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EED4u; }
        if (ctx->pc != 0x26EED4u) { return; }
    }
    ctx->pc = 0x26EED4u;
label_26eed4:
    // 0x26eed4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x26eed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26eed8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EED8u;
    {
        const bool branch_taken_0x26eed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EED8u;
            // 0x26eedc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eed8) {
            ctx->pc = 0x26EEECu;
            goto label_26eeec;
        }
    }
    ctx->pc = 0x26EEE0u;
    // 0x26eee0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26EEE0u;
    SET_GPR_U32(ctx, 31, 0x26EEE8u);
    ctx->pc = 0x26EEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EEE0u;
            // 0x26eee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EEE8u; }
        if (ctx->pc != 0x26EEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EEE8u; }
        if (ctx->pc != 0x26EEE8u) { return; }
    }
    ctx->pc = 0x26EEE8u;
label_26eee8:
    // 0x26eee8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x26eee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_26eeec:
    // 0x26eeec: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26EEECu;
    SET_GPR_U32(ctx, 31, 0x26EEF4u);
    ctx->pc = 0x26EEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EEECu;
            // 0x26eef0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EEF4u; }
        if (ctx->pc != 0x26EEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EEF4u; }
        if (ctx->pc != 0x26EEF4u) { return; }
    }
    ctx->pc = 0x26EEF4u;
label_26eef4:
    // 0x26eef4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EEF4u;
    {
        const bool branch_taken_0x26eef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EEF4u;
            // 0x26eef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eef4) {
            ctx->pc = 0x26EF04u;
            goto label_26ef04;
        }
    }
    ctx->pc = 0x26EEFCu;
    // 0x26eefc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26EEFCu;
    {
        const bool branch_taken_0x26eefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EEFCu;
            // 0x26ef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eefc) {
            ctx->pc = 0x26EF10u;
            goto label_26ef10;
        }
    }
    ctx->pc = 0x26EF04u;
label_26ef04:
    // 0x26ef04: 0xc0a42e0  jal         func_290B80
    ctx->pc = 0x26EF04u;
    SET_GPR_U32(ctx, 31, 0x26EF0Cu);
    ctx->pc = 0x26EF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF04u;
            // 0x26ef08: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290B80u;
    if (runtime->hasFunction(0x290B80u)) {
        auto targetFn = runtime->lookupFunction(0x290B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF0Cu; }
        if (ctx->pc != 0x26EF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPosition__13CEventSprite2FPf_0x290b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF0Cu; }
        if (ctx->pc != 0x26EF0Cu) { return; }
    }
    ctx->pc = 0x26EF0Cu;
label_26ef0c:
    // 0x26ef0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ef10:
    // 0x26ef10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ef10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ef14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ef14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ef18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ef18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ef1c: 0x3e00008  jr          $ra
    ctx->pc = 0x26EF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF1Cu;
            // 0x26ef20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EF24u;
}
