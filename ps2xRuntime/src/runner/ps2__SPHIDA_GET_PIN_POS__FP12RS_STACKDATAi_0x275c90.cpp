#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_PIN_POS__FP12RS_STACKDATAi
// Address: 0x275c90 - 0x275cfc
void ps2__SPHIDA_GET_PIN_POS__FP12RS_STACKDATAi_0x275c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_PIN_POS__FP12RS_STACKDATAi_0x275c90");
#endif

    switch (ctx->pc) {
        case 0x275cbcu: goto label_275cbc;
        case 0x275cccu: goto label_275ccc;
        case 0x275cdcu: goto label_275cdc;
        case 0x275ce8u: goto label_275ce8;
        default: break;
    }

    ctx->pc = 0x275c90u;

    // 0x275c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275c9c: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x275c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275ca0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275CA0u;
    {
        const bool branch_taken_0x275ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275CA0u;
            // 0x275ca4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ca0) {
            ctx->pc = 0x275CB0u;
            goto label_275cb0;
        }
    }
    ctx->pc = 0x275CA8u;
    // 0x275ca8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x275CA8u;
    {
        const bool branch_taken_0x275ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275CA8u;
            // 0x275cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ca8) {
            ctx->pc = 0x275CECu;
            goto label_275cec;
        }
    }
    ctx->pc = 0x275CB0u;
label_275cb0:
    // 0x275cb0: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x275cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x275cb4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x275CB4u;
    SET_GPR_U32(ctx, 31, 0x275CBCu);
    ctx->pc = 0x275CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275CB4u;
            // 0x275cb8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CBCu; }
        if (ctx->pc != 0x275CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CBCu; }
        if (ctx->pc != 0x275CBCu) { return; }
    }
    ctx->pc = 0x275CBCu;
label_275cbc:
    // 0x275cbc: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x275cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cc4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x275CC4u;
    SET_GPR_U32(ctx, 31, 0x275CCCu);
    ctx->pc = 0x275CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275CC4u;
            // 0x275cc8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CCCu; }
        if (ctx->pc != 0x275CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CCCu; }
        if (ctx->pc != 0x275CCCu) { return; }
    }
    ctx->pc = 0x275CCCu;
label_275ccc:
    // 0x275ccc: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x275cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cd4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x275CD4u;
    SET_GPR_U32(ctx, 31, 0x275CDCu);
    ctx->pc = 0x275CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275CD4u;
            // 0x275cd8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CDCu; }
        if (ctx->pc != 0x275CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CDCu; }
        if (ctx->pc != 0x275CDCu) { return; }
    }
    ctx->pc = 0x275CDCu;
label_275cdc:
    // 0x275cdc: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x275cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275ce0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x275CE0u;
    SET_GPR_U32(ctx, 31, 0x275CE8u);
    ctx->pc = 0x275CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275CE0u;
            // 0x275ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CE8u; }
        if (ctx->pc != 0x275CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275CE8u; }
        if (ctx->pc != 0x275CE8u) { return; }
    }
    ctx->pc = 0x275CE8u;
label_275ce8:
    // 0x275ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275cec:
    // 0x275cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x275CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275CF4u;
            // 0x275cf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275CFCu;
}
