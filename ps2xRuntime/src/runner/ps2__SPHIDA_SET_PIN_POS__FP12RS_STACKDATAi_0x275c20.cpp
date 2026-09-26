#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_PIN_POS__FP12RS_STACKDATAi
// Address: 0x275c20 - 0x275c84
void ps2__SPHIDA_SET_PIN_POS__FP12RS_STACKDATAi_0x275c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_PIN_POS__FP12RS_STACKDATAi_0x275c20");
#endif

    switch (ctx->pc) {
        case 0x275c30u: goto label_275c30;
        case 0x275c40u: goto label_275c40;
        case 0x275c4cu: goto label_275c4c;
        case 0x275c74u: goto label_275c74;
        default: break;
    }

    ctx->pc = 0x275c20u;

    // 0x275c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275c28: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x275C28u;
    SET_GPR_U32(ctx, 31, 0x275C30u);
    ctx->pc = 0x275C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275C28u;
            // 0x275c2c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C30u; }
        if (ctx->pc != 0x275C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C30u; }
        if (ctx->pc != 0x275C30u) { return; }
    }
    ctx->pc = 0x275C30u;
label_275c30:
    // 0x275c30: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x275c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c34: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x275c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x275c38: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x275C38u;
    SET_GPR_U32(ctx, 31, 0x275C40u);
    ctx->pc = 0x275C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275C38u;
            // 0x275c3c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C40u; }
        if (ctx->pc != 0x275C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C40u; }
        if (ctx->pc != 0x275C40u) { return; }
    }
    ctx->pc = 0x275C40u;
label_275c40:
    // 0x275c40: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x275c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c44: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x275C44u;
    SET_GPR_U32(ctx, 31, 0x275C4Cu);
    ctx->pc = 0x275C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275C44u;
            // 0x275c48: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C4Cu; }
        if (ctx->pc != 0x275C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C4Cu; }
        if (ctx->pc != 0x275C4Cu) { return; }
    }
    ctx->pc = 0x275C4Cu;
label_275c4c:
    // 0x275c4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x275c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x275c50: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x275c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x275c54: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x275c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275c58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275C58u;
    {
        const bool branch_taken_0x275c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C58u;
            // 0x275c5c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c58) {
            ctx->pc = 0x275C68u;
            goto label_275c68;
        }
    }
    ctx->pc = 0x275C60u;
    // 0x275c60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275C60u;
    {
        const bool branch_taken_0x275c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C60u;
            // 0x275c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c60) {
            ctx->pc = 0x275C78u;
            goto label_275c78;
        }
    }
    ctx->pc = 0x275C68u;
label_275c68:
    // 0x275c68: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x275c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x275c6c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x275C6Cu;
    SET_GPR_U32(ctx, 31, 0x275C74u);
    ctx->pc = 0x275C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275C6Cu;
            // 0x275c70: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C74u; }
        if (ctx->pc != 0x275C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C74u; }
        if (ctx->pc != 0x275C74u) { return; }
    }
    ctx->pc = 0x275C74u;
label_275c74:
    // 0x275c74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275c78:
    // 0x275c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x275C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C7Cu;
            // 0x275c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275C84u;
}
