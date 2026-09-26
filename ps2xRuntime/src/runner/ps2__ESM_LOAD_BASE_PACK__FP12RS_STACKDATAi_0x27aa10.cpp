#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_LOAD_BASE_PACK__FP12RS_STACKDATAi
// Address: 0x27aa10 - 0x27aa8c
void ps2__ESM_LOAD_BASE_PACK__FP12RS_STACKDATAi_0x27aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_LOAD_BASE_PACK__FP12RS_STACKDATAi_0x27aa10");
#endif

    switch (ctx->pc) {
        case 0x27aa38u: goto label_27aa38;
        case 0x27aa44u: goto label_27aa44;
        case 0x27aa50u: goto label_27aa50;
        case 0x27aa70u: goto label_27aa70;
        default: break;
    }

    ctx->pc = 0x27aa10u;

    // 0x27aa10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27aa14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27aa18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27aa1c: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27aa20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AA20u;
    {
        const bool branch_taken_0x27aa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA20u;
            // 0x27aa24: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa20) {
            ctx->pc = 0x27AA30u;
            goto label_27aa30;
        }
    }
    ctx->pc = 0x27AA28u;
    // 0x27aa28: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x27AA28u;
    {
        const bool branch_taken_0x27aa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA28u;
            // 0x27aa2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa28) {
            ctx->pc = 0x27AA7Cu;
            goto label_27aa7c;
        }
    }
    ctx->pc = 0x27AA30u;
label_27aa30:
    // 0x27aa30: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27AA30u;
    SET_GPR_U32(ctx, 31, 0x27AA38u);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA38u; }
        if (ctx->pc != 0x27AA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA38u; }
        if (ctx->pc != 0x27AA38u) { return; }
    }
    ctx->pc = 0x27AA38u;
label_27aa38:
    // 0x27aa38: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x27aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa3c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27AA3Cu;
    SET_GPR_U32(ctx, 31, 0x27AA44u);
    ctx->pc = 0x27AA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA3Cu;
            // 0x27aa40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA44u; }
        if (ctx->pc != 0x27AA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA44u; }
        if (ctx->pc != 0x27AA44u) { return; }
    }
    ctx->pc = 0x27AA44u;
label_27aa44:
    // 0x27aa44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27aa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa48: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x27AA48u;
    SET_GPR_U32(ctx, 31, 0x27AA50u);
    ctx->pc = 0x27AA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA48u;
            // 0x27aa4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA50u; }
        if (ctx->pc != 0x27AA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA50u; }
        if (ctx->pc != 0x27AA50u) { return; }
    }
    ctx->pc = 0x27AA50u;
label_27aa50:
    // 0x27aa50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27AA50u;
    {
        const bool branch_taken_0x27aa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aa50) {
            ctx->pc = 0x27AA78u;
            goto label_27aa78;
        }
    }
    ctx->pc = 0x27AA58u;
    // 0x27aa58: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27aa5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27aa5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27aa60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27aa64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa68: 0xc0b8300  jal         func_2E0C00
    ctx->pc = 0x27AA68u;
    SET_GPR_U32(ctx, 31, 0x27AA70u);
    ctx->pc = 0x27AA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA68u;
            // 0x27aa6c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA70u; }
        if (ctx->pc != 0x27AA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AA70u; }
        if (ctx->pc != 0x27AA70u) { return; }
    }
    ctx->pc = 0x27AA70u;
label_27aa70:
    // 0x27aa70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27AA70u;
    {
        const bool branch_taken_0x27aa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aa70) {
            ctx->pc = 0x27AA7Cu;
            goto label_27aa7c;
        }
    }
    ctx->pc = 0x27AA78u;
label_27aa78:
    // 0x27aa78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27aa78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27aa7c:
    // 0x27aa7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27aa7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27aa80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27aa80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27aa84: 0x3e00008  jr          $ra
    ctx->pc = 0x27AA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AA84u;
            // 0x27aa88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27AA8Cu;
}
