#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ORIGIN__FP12RS_STACKDATAi
// Address: 0x2e3ca0 - 0x2e3cf4
void ps2__SET_ORIGIN__FP12RS_STACKDATAi_0x2e3ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ORIGIN__FP12RS_STACKDATAi_0x2e3ca0");
#endif

    switch (ctx->pc) {
        case 0x2e3cb0u: goto label_2e3cb0;
        case 0x2e3cc4u: goto label_2e3cc4;
        case 0x2e3cd4u: goto label_2e3cd4;
        default: break;
    }

    ctx->pc = 0x2e3ca0u;

    // 0x2e3ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3ca8: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E3CA8u;
    SET_GPR_U32(ctx, 31, 0x2E3CB0u);
    ctx->pc = 0x2E3CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CA8u;
            // 0x2e3cac: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3CB0u; }
        if (ctx->pc != 0x2E3CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3CB0u; }
        if (ctx->pc != 0x2E3CB0u) { return; }
    }
    ctx->pc = 0x2E3CB0u;
label_2e3cb0:
    // 0x2e3cb0: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3cb4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e3cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3cb8: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2e3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e3cbc: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E3CBCu;
    SET_GPR_U32(ctx, 31, 0x2E3CC4u);
    ctx->pc = 0x2E3CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CBCu;
            // 0x2e3cc0: 0xe44000b0  swc1        $f0, 0xB0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3CC4u; }
        if (ctx->pc != 0x2E3CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3CC4u; }
        if (ctx->pc != 0x2E3CC4u) { return; }
    }
    ctx->pc = 0x2E3CC4u;
label_2e3cc4:
    // 0x2e3cc4: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3cc8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e3cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3ccc: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E3CCCu;
    SET_GPR_U32(ctx, 31, 0x2E3CD4u);
    ctx->pc = 0x2E3CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CCCu;
            // 0x2e3cd0: 0xe44000b4  swc1        $f0, 0xB4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3CD4u; }
        if (ctx->pc != 0x2E3CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3CD4u; }
        if (ctx->pc != 0x2E3CD4u) { return; }
    }
    ctx->pc = 0x2E3CD4u;
label_2e3cd4:
    // 0x2e3cd4: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e3cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3cdc: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x2e3cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x2e3ce0: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e3ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3ce4: 0xac6000bc  sw          $zero, 0xBC($v1)
    ctx->pc = 0x2e3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 0));
    // 0x2e3ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3cec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3CECu;
            // 0x2e3cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3CF4u;
}
