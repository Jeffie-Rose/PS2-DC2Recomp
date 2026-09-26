#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_GET_ROT__FP12RS_STACKDATAi
// Address: 0x274c60 - 0x274ccc
void ps2__EOH_GET_ROT__FP12RS_STACKDATAi_0x274c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_GET_ROT__FP12RS_STACKDATAi_0x274c60");
#endif

    switch (ctx->pc) {
        case 0x274c74u: goto label_274c74;
        case 0x274c88u: goto label_274c88;
        case 0x274ca0u: goto label_274ca0;
        case 0x274cb0u: goto label_274cb0;
        case 0x274cbcu: goto label_274cbc;
        default: break;
    }

    ctx->pc = 0x274c60u;

    // 0x274c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274c6c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274C6Cu;
    SET_GPR_U32(ctx, 31, 0x274C74u);
    ctx->pc = 0x274C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274C6Cu;
            // 0x274c70: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C74u; }
        if (ctx->pc != 0x274C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C74u; }
        if (ctx->pc != 0x274C74u) { return; }
    }
    ctx->pc = 0x274C74u;
label_274c74:
    // 0x274c74: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274c78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x274c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c7c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x274c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x274c80: 0xc097870  jal         func_25E1C0
    ctx->pc = 0x274C80u;
    SET_GPR_U32(ctx, 31, 0x274C88u);
    ctx->pc = 0x274C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274C80u;
            // 0x274c84: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E1C0u;
    if (runtime->hasFunction(0x25E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x25E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C88u; }
        if (ctx->pc != 0x274C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRot__10CEohMotherFiPf_0x25e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274C88u; }
        if (ctx->pc != 0x274C88u) { return; }
    }
    ctx->pc = 0x274C88u;
label_274c88:
    // 0x274c88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x274C88u;
    {
        const bool branch_taken_0x274c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c88) {
            ctx->pc = 0x274CBCu;
            goto label_274cbc;
        }
    }
    ctx->pc = 0x274C90u;
    // 0x274c90: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x274c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c98: 0xc097e54  jal         func_25F950
    ctx->pc = 0x274C98u;
    SET_GPR_U32(ctx, 31, 0x274CA0u);
    ctx->pc = 0x274C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274C98u;
            // 0x274c9c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CA0u; }
        if (ctx->pc != 0x274CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CA0u; }
        if (ctx->pc != 0x274CA0u) { return; }
    }
    ctx->pc = 0x274CA0u;
label_274ca0:
    // 0x274ca0: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x274ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ca8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x274CA8u;
    SET_GPR_U32(ctx, 31, 0x274CB0u);
    ctx->pc = 0x274CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274CA8u;
            // 0x274cac: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CB0u; }
        if (ctx->pc != 0x274CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CB0u; }
        if (ctx->pc != 0x274CB0u) { return; }
    }
    ctx->pc = 0x274CB0u;
label_274cb0:
    // 0x274cb0: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x274cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274cb4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x274CB4u;
    SET_GPR_U32(ctx, 31, 0x274CBCu);
    ctx->pc = 0x274CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274CB4u;
            // 0x274cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CBCu; }
        if (ctx->pc != 0x274CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274CBCu; }
        if (ctx->pc != 0x274CBCu) { return; }
    }
    ctx->pc = 0x274CBCu;
label_274cbc:
    // 0x274cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x274CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274CC4u;
            // 0x274cc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274CCCu;
}
