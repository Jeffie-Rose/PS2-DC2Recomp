#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_VECT2__FP12RS_STACKDATAi
// Address: 0x2d1e80 - 0x2d1f38
void ps2__ESM_SET_VECT2__FP12RS_STACKDATAi_0x2d1e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_VECT2__FP12RS_STACKDATAi_0x2d1e80");
#endif

    switch (ctx->pc) {
        case 0x2d1eb0u: goto label_2d1eb0;
        case 0x2d1ec0u: goto label_2d1ec0;
        case 0x2d1ed0u: goto label_2d1ed0;
        case 0x2d1edcu: goto label_2d1edc;
        case 0x2d1f04u: goto label_2d1f04;
        case 0x2d1f28u: goto label_2d1f28;
        default: break;
    }

    ctx->pc = 0x2d1e80u;

    // 0x2d1e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1e84: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d1e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1e90: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1e94: 0x8c4207dc  lw          $v0, 0x7DC($v0)
    ctx->pc = 0x2d1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1e98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1E98u;
    {
        const bool branch_taken_0x2d1e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E98u;
            // 0x2d1e9c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e98) {
            ctx->pc = 0x2D1EA8u;
            goto label_2d1ea8;
        }
    }
    ctx->pc = 0x2D1EA0u;
    // 0x2d1ea0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2D1EA0u;
    {
        const bool branch_taken_0x2d1ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EA0u;
            // 0x2d1ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ea0) {
            ctx->pc = 0x2D1F28u;
            goto label_2d1f28;
        }
    }
    ctx->pc = 0x2D1EA8u;
label_2d1ea8:
    // 0x2d1ea8: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D1EA8u;
    SET_GPR_U32(ctx, 31, 0x2D1EB0u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EB0u; }
        if (ctx->pc != 0x2D1EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EB0u; }
        if (ctx->pc != 0x2D1EB0u) { return; }
    }
    ctx->pc = 0x2D1EB0u;
label_2d1eb0:
    // 0x2d1eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1eb4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d1eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1eb8: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2D1EB8u;
    SET_GPR_U32(ctx, 31, 0x2D1EC0u);
    ctx->pc = 0x2D1EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EB8u;
            // 0x2d1ebc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EC0u; }
        if (ctx->pc != 0x2D1EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EC0u; }
        if (ctx->pc != 0x2D1EC0u) { return; }
    }
    ctx->pc = 0x2D1EC0u;
label_2d1ec0:
    // 0x2d1ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ec4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d1ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d1ec8: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2D1EC8u;
    SET_GPR_U32(ctx, 31, 0x2D1ED0u);
    ctx->pc = 0x2D1ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EC8u;
            // 0x2d1ecc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1ED0u; }
        if (ctx->pc != 0x2D1ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1ED0u; }
        if (ctx->pc != 0x2D1ED0u) { return; }
    }
    ctx->pc = 0x2D1ED0u;
label_2d1ed0:
    // 0x2d1ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ed4: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2D1ED4u;
    SET_GPR_U32(ctx, 31, 0x2D1EDCu);
    ctx->pc = 0x2D1ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1ED4u;
            // 0x2d1ed8: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EDCu; }
        if (ctx->pc != 0x2D1EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1EDCu; }
        if (ctx->pc != 0x2D1EDCu) { return; }
    }
    ctx->pc = 0x2D1EDCu;
label_2d1edc:
    // 0x2d1edc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d1ee0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d1ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d1ee4: 0x4e00009  bltz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1EE4u;
    {
        const bool branch_taken_0x2d1ee4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2D1EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EE4u;
            // 0x2d1ee8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ee4) {
            ctx->pc = 0x2D1F0Cu;
            goto label_2d1f0c;
        }
    }
    ctx->pc = 0x2D1EECu;
    // 0x2d1eec: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1ef0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2d1ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d1ef4: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1ef8: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d1ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1efc: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2D1EFCu;
    SET_GPR_U32(ctx, 31, 0x2D1F04u);
    ctx->pc = 0x2D1F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1EFCu;
            // 0x2d1f00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F04u; }
        if (ctx->pc != 0x2D1F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F04u; }
        if (ctx->pc != 0x2D1F04u) { return; }
    }
    ctx->pc = 0x2D1F04u;
label_2d1f04:
    // 0x2d1f04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1F04u;
    {
        const bool branch_taken_0x2d1f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1f04) {
            ctx->pc = 0x2D1F28u;
            goto label_2d1f28;
        }
    }
    ctx->pc = 0x2D1F0Cu;
label_2d1f0c:
    // 0x2d1f0c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1f10: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2d1f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d1f14: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1f1c: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d1f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1f20: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2D1F20u;
    SET_GPR_U32(ctx, 31, 0x2D1F28u);
    ctx->pc = 0x2D1F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F20u;
            // 0x2d1f24: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F28u; }
        if (ctx->pc != 0x2D1F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1F28u; }
        if (ctx->pc != 0x2D1F28u) { return; }
    }
    ctx->pc = 0x2D1F28u;
label_2d1f28:
    // 0x2d1f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d1f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1f30: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1F30u;
            // 0x2d1f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1F38u;
}
