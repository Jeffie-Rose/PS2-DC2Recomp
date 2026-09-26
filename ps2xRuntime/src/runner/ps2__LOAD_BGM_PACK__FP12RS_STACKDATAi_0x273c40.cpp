#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_BGM_PACK__FP12RS_STACKDATAi
// Address: 0x273c40 - 0x273cc0
void ps2__LOAD_BGM_PACK__FP12RS_STACKDATAi_0x273c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_BGM_PACK__FP12RS_STACKDATAi_0x273c40");
#endif

    switch (ctx->pc) {
        case 0x273c50u: goto label_273c50;
        case 0x273c60u: goto label_273c60;
        case 0x273c80u: goto label_273c80;
        case 0x273c8cu: goto label_273c8c;
        case 0x273ca4u: goto label_273ca4;
        default: break;
    }

    ctx->pc = 0x273c40u;

    // 0x273c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x273c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x273c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273c48: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273C48u;
    SET_GPR_U32(ctx, 31, 0x273C50u);
    ctx->pc = 0x273C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C48u;
            // 0x273c4c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C50u; }
        if (ctx->pc != 0x273C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C50u; }
        if (ctx->pc != 0x273C50u) { return; }
    }
    ctx->pc = 0x273C50u;
label_273c50:
    // 0x273c50: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273c54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x273c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c58: 0xc0a9ac4  jal         func_2A6B10
    ctx->pc = 0x273C58u;
    SET_GPR_U32(ctx, 31, 0x273C60u);
    ctx->pc = 0x273C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C58u;
            // 0x273c5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B10u;
    if (runtime->hasFunction(0x2A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C60u; }
        if (ctx->pc != 0x273C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadBGM__6CSceneFi_0x2a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C60u; }
        if (ctx->pc != 0x273C60u) { return; }
    }
    ctx->pc = 0x273C60u;
label_273c60:
    // 0x273c60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273C60u;
    {
        const bool branch_taken_0x273c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273C60u;
            // 0x273c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c60) {
            ctx->pc = 0x273C70u;
            goto label_273c70;
        }
    }
    ctx->pc = 0x273C68u;
    // 0x273c68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x273C68u;
    {
        const bool branch_taken_0x273c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273C68u;
            // 0x273c6c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c68) {
            ctx->pc = 0x273CB4u;
            goto label_273cb4;
        }
    }
    ctx->pc = 0x273C70u;
label_273c70:
    // 0x273c70: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273c74: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x273c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x273c78: 0xc0a9a74  jal         func_2A69D0
    ctx->pc = 0x273C78u;
    SET_GPR_U32(ctx, 31, 0x273C80u);
    ctx->pc = 0x273C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C78u;
            // 0x273c7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A69D0u;
    if (runtime->hasFunction(0x2A69D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A69D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C80u; }
        if (ctx->pc != 0x273C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBgmFile__6CSceneFPci_0x2a69d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C80u; }
        if (ctx->pc != 0x273C80u) { return; }
    }
    ctx->pc = 0x273C80u;
label_273c80:
    // 0x273c80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x273c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x273c84: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x273C84u;
    SET_GPR_U32(ctx, 31, 0x273C8Cu);
    ctx->pc = 0x273C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C84u;
            // 0x273c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C8Cu; }
        if (ctx->pc != 0x273C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C8Cu; }
        if (ctx->pc != 0x273C8Cu) { return; }
    }
    ctx->pc = 0x273C8Cu;
label_273c8c:
    // 0x273c8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x273C8Cu;
    {
        const bool branch_taken_0x273c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273c8c) {
            ctx->pc = 0x273CACu;
            goto label_273cac;
        }
    }
    ctx->pc = 0x273C94u;
    // 0x273c94: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c9c: 0xc0a9ca4  jal         func_2A7290
    ctx->pc = 0x273C9Cu;
    SET_GPR_U32(ctx, 31, 0x273CA4u);
    ctx->pc = 0x273CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C9Cu;
            // 0x273ca0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7290u;
    if (runtime->hasFunction(0x2A7290u)) {
        auto targetFn = runtime->lookupFunction(0x2A7290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273CA4u; }
        if (ctx->pc != 0x273CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGMPack__6CSceneFiPUi_0x2a7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273CA4u; }
        if (ctx->pc != 0x273CA4u) { return; }
    }
    ctx->pc = 0x273CA4u;
label_273ca4:
    // 0x273ca4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x273CA4u;
    {
        const bool branch_taken_0x273ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273ca4) {
            ctx->pc = 0x273CB0u;
            goto label_273cb0;
        }
    }
    ctx->pc = 0x273CACu;
label_273cac:
    // 0x273cac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273cb0:
    // 0x273cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_273cb4:
    // 0x273cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x273CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273CB8u;
            // 0x273cbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273CC0u;
}
