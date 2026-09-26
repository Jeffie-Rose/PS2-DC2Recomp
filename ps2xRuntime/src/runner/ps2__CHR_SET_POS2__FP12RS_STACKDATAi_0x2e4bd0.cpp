#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_SET_POS2__FP12RS_STACKDATAi
// Address: 0x2e4bd0 - 0x2e4c3c
void ps2__CHR_SET_POS2__FP12RS_STACKDATAi_0x2e4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_SET_POS2__FP12RS_STACKDATAi_0x2e4bd0");
#endif

    switch (ctx->pc) {
        case 0x2e4bd0u: goto label_2e4bd0;
        case 0x2e4bd4u: goto label_2e4bd4;
        case 0x2e4bd8u: goto label_2e4bd8;
        case 0x2e4bdcu: goto label_2e4bdc;
        case 0x2e4be0u: goto label_2e4be0;
        case 0x2e4be4u: goto label_2e4be4;
        case 0x2e4be8u: goto label_2e4be8;
        case 0x2e4becu: goto label_2e4bec;
        case 0x2e4bf0u: goto label_2e4bf0;
        case 0x2e4bf4u: goto label_2e4bf4;
        case 0x2e4bf8u: goto label_2e4bf8;
        case 0x2e4bfcu: goto label_2e4bfc;
        case 0x2e4c00u: goto label_2e4c00;
        case 0x2e4c04u: goto label_2e4c04;
        case 0x2e4c08u: goto label_2e4c08;
        case 0x2e4c0cu: goto label_2e4c0c;
        case 0x2e4c10u: goto label_2e4c10;
        case 0x2e4c14u: goto label_2e4c14;
        case 0x2e4c18u: goto label_2e4c18;
        case 0x2e4c1cu: goto label_2e4c1c;
        case 0x2e4c20u: goto label_2e4c20;
        case 0x2e4c24u: goto label_2e4c24;
        case 0x2e4c28u: goto label_2e4c28;
        case 0x2e4c2cu: goto label_2e4c2c;
        case 0x2e4c30u: goto label_2e4c30;
        case 0x2e4c34u: goto label_2e4c34;
        case 0x2e4c38u: goto label_2e4c38;
        default: break;
    }

    ctx->pc = 0x2e4bd0u;

label_2e4bd0:
    // 0x2e4bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e4bd4:
    // 0x2e4bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e4bd8:
    // 0x2e4bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e4bdc:
    // 0x2e4bdc: 0xc0b8ca0  jal         func_2E3280
label_2e4be0:
    if (ctx->pc == 0x2E4BE0u) {
        ctx->pc = 0x2E4BE0u;
            // 0x2e4be0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2E4BE4u;
        goto label_2e4be4;
    }
    ctx->pc = 0x2E4BDCu;
    SET_GPR_U32(ctx, 31, 0x2E4BE4u);
    ctx->pc = 0x2E4BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4BDCu;
            // 0x2e4be0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4BE4u; }
        if (ctx->pc != 0x2E4BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4BE4u; }
        if (ctx->pc != 0x2E4BE4u) { return; }
    }
    ctx->pc = 0x2E4BE4u;
label_2e4be4:
    // 0x2e4be4: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x2e4be4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e4be8:
    // 0x2e4be8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4bec:
    // 0x2e4bec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2e4becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2e4bf0:
    // 0x2e4bf0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4bf4:
    // 0x2e4bf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4bf8:
    if (ctx->pc == 0x2E4BF8u) {
        ctx->pc = 0x2E4BF8u;
            // 0x2e4bf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4BFCu;
        goto label_2e4bfc;
    }
    ctx->pc = 0x2E4BF4u;
    {
        const bool branch_taken_0x2e4bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4BF4u;
            // 0x2e4bf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4bf4) {
            ctx->pc = 0x2E4C04u;
            goto label_2e4c04;
        }
    }
    ctx->pc = 0x2E4BFCu;
label_2e4bfc:
    // 0x2e4bfc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e4c00:
    if (ctx->pc == 0x2E4C00u) {
        ctx->pc = 0x2E4C00u;
            // 0x2e4c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C04u;
        goto label_2e4c04;
    }
    ctx->pc = 0x2E4BFCu;
    {
        const bool branch_taken_0x2e4bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4BFCu;
            // 0x2e4c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4bfc) {
            ctx->pc = 0x2E4C2Cu;
            goto label_2e4c2c;
        }
    }
    ctx->pc = 0x2E4C04u;
label_2e4c04:
    // 0x2e4c04: 0xc0b8cbc  jal         func_2E32F0
label_2e4c08:
    if (ctx->pc == 0x2E4C08u) {
        ctx->pc = 0x2E4C08u;
            // 0x2e4c08: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4C0Cu;
        goto label_2e4c0c;
    }
    ctx->pc = 0x2E4C04u;
    SET_GPR_U32(ctx, 31, 0x2E4C0Cu);
    ctx->pc = 0x2E4C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4C04u;
            // 0x2e4c08: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4C0Cu; }
        if (ctx->pc != 0x2E4C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4C0Cu; }
        if (ctx->pc != 0x2E4C0Cu) { return; }
    }
    ctx->pc = 0x2E4C0Cu;
label_2e4c0c:
    // 0x2e4c0c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4c10:
    // 0x2e4c10: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2e4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_2e4c14:
    // 0x2e4c14: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4c18:
    // 0x2e4c18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4c1c:
    // 0x2e4c1c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2e4c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e4c20:
    // 0x2e4c20: 0x320f809  jalr        $t9
label_2e4c24:
    if (ctx->pc == 0x2E4C24u) {
        ctx->pc = 0x2E4C24u;
            // 0x2e4c24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4C28u;
        goto label_2e4c28;
    }
    ctx->pc = 0x2E4C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4C28u);
        ctx->pc = 0x2E4C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4C20u;
            // 0x2e4c24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4C28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4C28u; }
            if (ctx->pc != 0x2E4C28u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4C28u;
label_2e4c28:
    // 0x2e4c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4c2c:
    // 0x2e4c2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4c30:
    // 0x2e4c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4c34:
    // 0x2e4c34: 0x3e00008  jr          $ra
label_2e4c38:
    if (ctx->pc == 0x2E4C38u) {
        ctx->pc = 0x2E4C38u;
            // 0x2e4c38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4C3Cu;
        goto label_fallthrough_0x2e4c34;
    }
    ctx->pc = 0x2E4C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4C34u;
            // 0x2e4c38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4c34:
    ctx->pc = 0x2E4C3Cu;
}
