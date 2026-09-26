#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_POS__FP12RS_STACKDATAi
// Address: 0x1e3f40 - 0x1e3fa0
void ps2__SET_POS__FP12RS_STACKDATAi_0x1e3f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_POS__FP12RS_STACKDATAi_0x1e3f40");
#endif

    switch (ctx->pc) {
        case 0x1e3f40u: goto label_1e3f40;
        case 0x1e3f44u: goto label_1e3f44;
        case 0x1e3f48u: goto label_1e3f48;
        case 0x1e3f4cu: goto label_1e3f4c;
        case 0x1e3f50u: goto label_1e3f50;
        case 0x1e3f54u: goto label_1e3f54;
        case 0x1e3f58u: goto label_1e3f58;
        case 0x1e3f5cu: goto label_1e3f5c;
        case 0x1e3f60u: goto label_1e3f60;
        case 0x1e3f64u: goto label_1e3f64;
        case 0x1e3f68u: goto label_1e3f68;
        case 0x1e3f6cu: goto label_1e3f6c;
        case 0x1e3f70u: goto label_1e3f70;
        case 0x1e3f74u: goto label_1e3f74;
        case 0x1e3f78u: goto label_1e3f78;
        case 0x1e3f7cu: goto label_1e3f7c;
        case 0x1e3f80u: goto label_1e3f80;
        case 0x1e3f84u: goto label_1e3f84;
        case 0x1e3f88u: goto label_1e3f88;
        case 0x1e3f8cu: goto label_1e3f8c;
        case 0x1e3f90u: goto label_1e3f90;
        case 0x1e3f94u: goto label_1e3f94;
        case 0x1e3f98u: goto label_1e3f98;
        case 0x1e3f9cu: goto label_1e3f9c;
        default: break;
    }

    ctx->pc = 0x1e3f40u;

label_1e3f40:
    // 0x1e3f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e3f44:
    // 0x1e3f44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e3f48:
    // 0x1e3f48: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e3f4c:
    if (ctx->pc == 0x1E3F4Cu) {
        ctx->pc = 0x1E3F4Cu;
            // 0x1e3f4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1E3F50u;
        goto label_1e3f50;
    }
    ctx->pc = 0x1E3F48u;
    {
        const bool branch_taken_0x1e3f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F48u;
            // 0x1e3f4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f48) {
            ctx->pc = 0x1E3F58u;
            goto label_1e3f58;
        }
    }
    ctx->pc = 0x1E3F50u;
label_1e3f50:
    // 0x1e3f50: 0x10000010  b           . + 4 + (0x10 << 2)
label_1e3f54:
    if (ctx->pc == 0x1E3F54u) {
        ctx->pc = 0x1E3F54u;
            // 0x1e3f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F58u;
        goto label_1e3f58;
    }
    ctx->pc = 0x1E3F50u;
    {
        const bool branch_taken_0x1e3f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F50u;
            // 0x1e3f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f50) {
            ctx->pc = 0x1E3F94u;
            goto label_1e3f94;
        }
    }
    ctx->pc = 0x1E3F58u;
label_1e3f58:
    // 0x1e3f58: 0xc0781ac  jal         func_1E06B0
label_1e3f5c:
    if (ctx->pc == 0x1E3F5Cu) {
        ctx->pc = 0x1E3F5Cu;
            // 0x1e3f5c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E3F60u;
        goto label_1e3f60;
    }
    ctx->pc = 0x1E3F58u;
    SET_GPR_U32(ctx, 31, 0x1E3F60u);
    ctx->pc = 0x1E3F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F58u;
            // 0x1e3f5c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F60u; }
        if (ctx->pc != 0x1E3F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F60u; }
        if (ctx->pc != 0x1E3F60u) { return; }
    }
    ctx->pc = 0x1E3F60u;
label_1e3f60:
    // 0x1e3f60: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e3f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e3f64:
    // 0x1e3f64: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e3f64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1e3f68:
    // 0x1e3f68: 0xc0781ac  jal         func_1E06B0
label_1e3f6c:
    if (ctx->pc == 0x1E3F6Cu) {
        ctx->pc = 0x1E3F6Cu;
            // 0x1e3f6c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E3F70u;
        goto label_1e3f70;
    }
    ctx->pc = 0x1E3F68u;
    SET_GPR_U32(ctx, 31, 0x1E3F70u);
    ctx->pc = 0x1E3F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F68u;
            // 0x1e3f6c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F70u; }
        if (ctx->pc != 0x1E3F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F70u; }
        if (ctx->pc != 0x1E3F70u) { return; }
    }
    ctx->pc = 0x1E3F70u;
label_1e3f70:
    // 0x1e3f70: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e3f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e3f74:
    // 0x1e3f74: 0xc0781ac  jal         func_1E06B0
label_1e3f78:
    if (ctx->pc == 0x1E3F78u) {
        ctx->pc = 0x1E3F78u;
            // 0x1e3f78: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E3F7Cu;
        goto label_1e3f7c;
    }
    ctx->pc = 0x1E3F74u;
    SET_GPR_U32(ctx, 31, 0x1E3F7Cu);
    ctx->pc = 0x1E3F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F74u;
            // 0x1e3f78: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F7Cu; }
        if (ctx->pc != 0x1E3F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F7Cu; }
        if (ctx->pc != 0x1E3F7Cu) { return; }
    }
    ctx->pc = 0x1E3F7Cu;
label_1e3f7c:
    // 0x1e3f7c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e3f80:
    // 0x1e3f80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3f84:
    // 0x1e3f84: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e3f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e3f88:
    // 0x1e3f88: 0x320f809  jalr        $t9
label_1e3f8c:
    if (ctx->pc == 0x1E3F8Cu) {
        ctx->pc = 0x1E3F8Cu;
            // 0x1e3f8c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E3F90u;
        goto label_1e3f90;
    }
    ctx->pc = 0x1E3F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3F90u);
        ctx->pc = 0x1E3F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F88u;
            // 0x1e3f8c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E3F90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F90u; }
            if (ctx->pc != 0x1E3F90u) { return; }
        }
        }
    }
    ctx->pc = 0x1E3F90u;
label_1e3f90:
    // 0x1e3f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3f94:
    // 0x1e3f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3f98:
    // 0x1e3f98: 0x3e00008  jr          $ra
label_1e3f9c:
    if (ctx->pc == 0x1E3F9Cu) {
        ctx->pc = 0x1E3F9Cu;
            // 0x1e3f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E3FA0u;
        goto label_fallthrough_0x1e3f98;
    }
    ctx->pc = 0x1E3F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F98u;
            // 0x1e3f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e3f98:
    ctx->pc = 0x1E3FA0u;
}
