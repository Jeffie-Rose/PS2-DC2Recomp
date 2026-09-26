#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_ADD_SCALE__FP12RS_STACKDATAi
// Address: 0x2e4b00 - 0x2e4b78
void ps2__CHR_ADD_SCALE__FP12RS_STACKDATAi_0x2e4b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_ADD_SCALE__FP12RS_STACKDATAi_0x2e4b00");
#endif

    switch (ctx->pc) {
        case 0x2e4b00u: goto label_2e4b00;
        case 0x2e4b04u: goto label_2e4b04;
        case 0x2e4b08u: goto label_2e4b08;
        case 0x2e4b0cu: goto label_2e4b0c;
        case 0x2e4b10u: goto label_2e4b10;
        case 0x2e4b14u: goto label_2e4b14;
        case 0x2e4b18u: goto label_2e4b18;
        case 0x2e4b1cu: goto label_2e4b1c;
        case 0x2e4b20u: goto label_2e4b20;
        case 0x2e4b24u: goto label_2e4b24;
        case 0x2e4b28u: goto label_2e4b28;
        case 0x2e4b2cu: goto label_2e4b2c;
        case 0x2e4b30u: goto label_2e4b30;
        case 0x2e4b34u: goto label_2e4b34;
        case 0x2e4b38u: goto label_2e4b38;
        case 0x2e4b3cu: goto label_2e4b3c;
        case 0x2e4b40u: goto label_2e4b40;
        case 0x2e4b44u: goto label_2e4b44;
        case 0x2e4b48u: goto label_2e4b48;
        case 0x2e4b4cu: goto label_2e4b4c;
        case 0x2e4b50u: goto label_2e4b50;
        case 0x2e4b54u: goto label_2e4b54;
        case 0x2e4b58u: goto label_2e4b58;
        case 0x2e4b5cu: goto label_2e4b5c;
        case 0x2e4b60u: goto label_2e4b60;
        case 0x2e4b64u: goto label_2e4b64;
        case 0x2e4b68u: goto label_2e4b68;
        case 0x2e4b6cu: goto label_2e4b6c;
        case 0x2e4b70u: goto label_2e4b70;
        case 0x2e4b74u: goto label_2e4b74;
        default: break;
    }

    ctx->pc = 0x2e4b00u;

label_2e4b00:
    // 0x2e4b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e4b04:
    // 0x2e4b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e4b08:
    // 0x2e4b08: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4b0c:
    // 0x2e4b0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4b10:
    // 0x2e4b10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4b14:
    if (ctx->pc == 0x2E4B14u) {
        ctx->pc = 0x2E4B14u;
            // 0x2e4b14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B18u;
        goto label_2e4b18;
    }
    ctx->pc = 0x2E4B10u;
    {
        const bool branch_taken_0x2e4b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4B10u;
            // 0x2e4b14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b10) {
            ctx->pc = 0x2E4B20u;
            goto label_2e4b20;
        }
    }
    ctx->pc = 0x2E4B18u;
label_2e4b18:
    // 0x2e4b18: 0x10000014  b           . + 4 + (0x14 << 2)
label_2e4b1c:
    if (ctx->pc == 0x2E4B1Cu) {
        ctx->pc = 0x2E4B1Cu;
            // 0x2e4b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B20u;
        goto label_2e4b20;
    }
    ctx->pc = 0x2E4B18u;
    {
        const bool branch_taken_0x2e4b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4B18u;
            // 0x2e4b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b18) {
            ctx->pc = 0x2E4B6Cu;
            goto label_2e4b6c;
        }
    }
    ctx->pc = 0x2E4B20u;
label_2e4b20:
    // 0x2e4b20: 0xc0b8cbc  jal         func_2E32F0
label_2e4b24:
    if (ctx->pc == 0x2E4B24u) {
        ctx->pc = 0x2E4B24u;
            // 0x2e4b24: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2E4B28u;
        goto label_2e4b28;
    }
    ctx->pc = 0x2E4B20u;
    SET_GPR_U32(ctx, 31, 0x2E4B28u);
    ctx->pc = 0x2E4B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4B20u;
            // 0x2e4b24: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4B28u; }
        if (ctx->pc != 0x2E4B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4B28u; }
        if (ctx->pc != 0x2E4B28u) { return; }
    }
    ctx->pc = 0x2E4B28u;
label_2e4b28:
    // 0x2e4b28: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4b2c:
    // 0x2e4b2c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4b30:
    // 0x2e4b30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4b34:
    // 0x2e4b34: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2e4b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2e4b38:
    // 0x2e4b38: 0x320f809  jalr        $t9
label_2e4b3c:
    if (ctx->pc == 0x2E4B3Cu) {
        ctx->pc = 0x2E4B3Cu;
            // 0x2e4b3c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4B40u;
        goto label_2e4b40;
    }
    ctx->pc = 0x2E4B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4B40u);
        ctx->pc = 0x2E4B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4B38u;
            // 0x2e4b3c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4B40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4B40u; }
            if (ctx->pc != 0x2E4B40u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4B40u;
label_2e4b40:
    // 0x2e4b40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e4b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e4b44:
    // 0x2e4b44: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2e4b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e4b48:
    // 0x2e4b48: 0xc041c38  jal         func_1070E0
label_2e4b4c:
    if (ctx->pc == 0x2E4B4Cu) {
        ctx->pc = 0x2E4B4Cu;
            // 0x2e4b4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B50u;
        goto label_2e4b50;
    }
    ctx->pc = 0x2E4B48u;
    SET_GPR_U32(ctx, 31, 0x2E4B50u);
    ctx->pc = 0x2E4B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4B48u;
            // 0x2e4b4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4B50u; }
        if (ctx->pc != 0x2E4B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4B50u; }
        if (ctx->pc != 0x2E4B50u) { return; }
    }
    ctx->pc = 0x2E4B50u;
label_2e4b50:
    // 0x2e4b50: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4b54:
    // 0x2e4b54: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4b58:
    // 0x2e4b58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4b5c:
    // 0x2e4b5c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2e4b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2e4b60:
    // 0x2e4b60: 0x320f809  jalr        $t9
label_2e4b64:
    if (ctx->pc == 0x2E4B64u) {
        ctx->pc = 0x2E4B64u;
            // 0x2e4b64: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4B68u;
        goto label_2e4b68;
    }
    ctx->pc = 0x2E4B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4B68u);
        ctx->pc = 0x2E4B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4B60u;
            // 0x2e4b64: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4B68u; }
            if (ctx->pc != 0x2E4B68u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4B68u;
label_2e4b68:
    // 0x2e4b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4b6c:
    // 0x2e4b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4b70:
    // 0x2e4b70: 0x3e00008  jr          $ra
label_2e4b74:
    if (ctx->pc == 0x2E4B74u) {
        ctx->pc = 0x2E4B74u;
            // 0x2e4b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4B78u;
        goto label_fallthrough_0x2e4b70;
    }
    ctx->pc = 0x2E4B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4B70u;
            // 0x2e4b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4b70:
    ctx->pc = 0x2E4B78u;
}
