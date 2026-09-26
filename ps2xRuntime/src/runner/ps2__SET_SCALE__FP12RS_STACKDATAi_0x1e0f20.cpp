#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_SCALE__FP12RS_STACKDATAi
// Address: 0x1e0f20 - 0x1e0f7c
void ps2__SET_SCALE__FP12RS_STACKDATAi_0x1e0f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_SCALE__FP12RS_STACKDATAi_0x1e0f20");
#endif

    switch (ctx->pc) {
        case 0x1e0f20u: goto label_1e0f20;
        case 0x1e0f24u: goto label_1e0f24;
        case 0x1e0f28u: goto label_1e0f28;
        case 0x1e0f2cu: goto label_1e0f2c;
        case 0x1e0f30u: goto label_1e0f30;
        case 0x1e0f34u: goto label_1e0f34;
        case 0x1e0f38u: goto label_1e0f38;
        case 0x1e0f3cu: goto label_1e0f3c;
        case 0x1e0f40u: goto label_1e0f40;
        case 0x1e0f44u: goto label_1e0f44;
        case 0x1e0f48u: goto label_1e0f48;
        case 0x1e0f4cu: goto label_1e0f4c;
        case 0x1e0f50u: goto label_1e0f50;
        case 0x1e0f54u: goto label_1e0f54;
        case 0x1e0f58u: goto label_1e0f58;
        case 0x1e0f5cu: goto label_1e0f5c;
        case 0x1e0f60u: goto label_1e0f60;
        case 0x1e0f64u: goto label_1e0f64;
        case 0x1e0f68u: goto label_1e0f68;
        case 0x1e0f6cu: goto label_1e0f6c;
        case 0x1e0f70u: goto label_1e0f70;
        case 0x1e0f74u: goto label_1e0f74;
        case 0x1e0f78u: goto label_1e0f78;
        default: break;
    }

    ctx->pc = 0x1e0f20u;

label_1e0f20:
    // 0x1e0f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0f24:
    // 0x1e0f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0f28:
    // 0x1e0f28: 0xc0781ac  jal         func_1E06B0
label_1e0f2c:
    if (ctx->pc == 0x1E0F2Cu) {
        ctx->pc = 0x1E0F2Cu;
            // 0x1e0f2c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E0F30u;
        goto label_1e0f30;
    }
    ctx->pc = 0x1E0F28u;
    SET_GPR_U32(ctx, 31, 0x1E0F30u);
    ctx->pc = 0x1E0F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F28u;
            // 0x1e0f2c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F30u; }
        if (ctx->pc != 0x1E0F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F30u; }
        if (ctx->pc != 0x1E0F30u) { return; }
    }
    ctx->pc = 0x1E0F30u;
label_1e0f30:
    // 0x1e0f30: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e0f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f34:
    // 0x1e0f34: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e0f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e0f38:
    // 0x1e0f38: 0xc0781ac  jal         func_1E06B0
label_1e0f3c:
    if (ctx->pc == 0x1E0F3Cu) {
        ctx->pc = 0x1E0F3Cu;
            // 0x1e0f3c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E0F40u;
        goto label_1e0f40;
    }
    ctx->pc = 0x1E0F38u;
    SET_GPR_U32(ctx, 31, 0x1E0F40u);
    ctx->pc = 0x1E0F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F38u;
            // 0x1e0f3c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F40u; }
        if (ctx->pc != 0x1E0F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F40u; }
        if (ctx->pc != 0x1E0F40u) { return; }
    }
    ctx->pc = 0x1E0F40u;
label_1e0f40:
    // 0x1e0f40: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e0f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f44:
    // 0x1e0f44: 0xc0781ac  jal         func_1E06B0
label_1e0f48:
    if (ctx->pc == 0x1E0F48u) {
        ctx->pc = 0x1E0F48u;
            // 0x1e0f48: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->pc = 0x1E0F4Cu;
        goto label_1e0f4c;
    }
    ctx->pc = 0x1E0F44u;
    SET_GPR_U32(ctx, 31, 0x1E0F4Cu);
    ctx->pc = 0x1E0F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F44u;
            // 0x1e0f48: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F4Cu; }
        if (ctx->pc != 0x1E0F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F4Cu; }
        if (ctx->pc != 0x1E0F4Cu) { return; }
    }
    ctx->pc = 0x1E0F4Cu;
label_1e0f4c:
    // 0x1e0f4c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e0f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e0f50:
    // 0x1e0f50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e0f54:
    // 0x1e0f54: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1e0f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1e0f58:
    // 0x1e0f58: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1e0f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1e0f5c:
    // 0x1e0f5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e0f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0f60:
    // 0x1e0f60: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e0f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e0f64:
    // 0x1e0f64: 0x320f809  jalr        $t9
label_1e0f68:
    if (ctx->pc == 0x1E0F68u) {
        ctx->pc = 0x1E0F68u;
            // 0x1e0f68: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E0F6Cu;
        goto label_1e0f6c;
    }
    ctx->pc = 0x1E0F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0F6Cu);
        ctx->pc = 0x1E0F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F64u;
            // 0x1e0f68: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0F6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F6Cu; }
            if (ctx->pc != 0x1E0F6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E0F6Cu;
label_1e0f6c:
    // 0x1e0f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0f70:
    // 0x1e0f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0f74:
    // 0x1e0f74: 0x3e00008  jr          $ra
label_1e0f78:
    if (ctx->pc == 0x1E0F78u) {
        ctx->pc = 0x1E0F78u;
            // 0x1e0f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E0F7Cu;
        goto label_fallthrough_0x1e0f74;
    }
    ctx->pc = 0x1E0F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F74u;
            // 0x1e0f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e0f74:
    ctx->pc = 0x1E0F7Cu;
}
