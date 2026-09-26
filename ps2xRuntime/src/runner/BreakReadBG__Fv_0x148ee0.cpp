#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BreakReadBG__Fv
// Address: 0x148ee0 - 0x148f6c
void BreakReadBG__Fv_0x148ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BreakReadBG__Fv_0x148ee0");
#endif

    switch (ctx->pc) {
        case 0x148ef4u: goto label_148ef4;
        case 0x148f04u: goto label_148f04;
        case 0x148f10u: goto label_148f10;
        case 0x148f34u: goto label_148f34;
        case 0x148f58u: goto label_148f58;
        default: break;
    }

    ctx->pc = 0x148ee0u;

    // 0x148ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148ee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x148ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x148ee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148eec: 0xc05239c  jal         func_148E70
    ctx->pc = 0x148EECu;
    SET_GPR_U32(ctx, 31, 0x148EF4u);
    ctx->pc = 0x148EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148EECu;
            // 0x148ef0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EF4u; }
        if (ctx->pc != 0x148EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EF4u; }
        if (ctx->pc != 0x148EF4u) { return; }
    }
    ctx->pc = 0x148EF4u;
label_148ef4:
    // 0x148ef4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x148EF4u;
    {
        const bool branch_taken_0x148ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ef4) {
            ctx->pc = 0x148F58u;
            goto label_148f58;
        }
    }
    ctx->pc = 0x148EFCu;
    // 0x148efc: 0xc04829e  jal         func_120A78
    ctx->pc = 0x148EFCu;
    SET_GPR_U32(ctx, 31, 0x148F04u);
    ctx->pc = 0x120A78u;
    if (runtime->hasFunction(0x120A78u)) {
        auto targetFn = runtime->lookupFunction(0x120A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F04u; }
        if (ctx->pc != 0x148F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdBreak_0x120a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F04u; }
        if (ctx->pc != 0x148F04u) { return; }
    }
    ctx->pc = 0x148F04u;
label_148f04:
    // 0x148f04: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x148f04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x148f08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x148f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f0c: 0x26108680  addiu       $s0, $s0, -0x7980
    ctx->pc = 0x148f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936192));
label_148f10:
    // 0x148f10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x148f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148f14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x148F14u;
    {
        const bool branch_taken_0x148f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148f14) {
            ctx->pc = 0x148F3Cu;
            goto label_148f3c;
        }
    }
    ctx->pc = 0x148F1Cu;
    // 0x148f1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x148f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148f24: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148F24u;
    {
        const bool branch_taken_0x148f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x148f24) {
            ctx->pc = 0x148F3Cu;
            goto label_148f3c;
        }
    }
    ctx->pc = 0x148F2Cu;
    // 0x148f2c: 0xc045148  jal         func_114520
    ctx->pc = 0x148F2Cu;
    SET_GPR_U32(ctx, 31, 0x148F34u);
    ctx->pc = 0x148F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F2Cu;
            // 0x148f30: 0x8e040118  lw          $a0, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F34u; }
        if (ctx->pc != 0x148F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F34u; }
        if (ctx->pc != 0x148F34u) { return; }
    }
    ctx->pc = 0x148F34u;
label_148f34:
    // 0x148f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148f38: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x148f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_148f3c:
    // 0x148f3c: 0x0  nop
    ctx->pc = 0x148f3cu;
    // NOP
    // 0x148f40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x148f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x148f44: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x148f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x148f48: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x148F48u;
    {
        const bool branch_taken_0x148f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F48u;
            // 0x148f4c: 0x26100120  addiu       $s0, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f48) {
            ctx->pc = 0x148F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148f10;
        }
    }
    ctx->pc = 0x148F50u;
    // 0x148f50: 0xc052234  jal         func_1488D0
    ctx->pc = 0x148F50u;
    SET_GPR_U32(ctx, 31, 0x148F58u);
    ctx->pc = 0x1488D0u;
    if (runtime->hasFunction(0x1488D0u)) {
        auto targetFn = runtime->lookupFunction(0x1488D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F58u; }
        if (ctx->pc != 0x148F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitReadBG__Fv_0x1488d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F58u; }
        if (ctx->pc != 0x148F58u) { return; }
    }
    ctx->pc = 0x148F58u;
label_148f58:
    // 0x148f58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x148f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148f5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148f60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148f64: 0x3e00008  jr          $ra
    ctx->pc = 0x148F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F64u;
            // 0x148f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148F6Cu;
}
