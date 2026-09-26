#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FCAMERA_FOLLOW_A__FP12RS_STACKDATAi
// Address: 0x268b20 - 0x268b88
void ps2__SET_FCAMERA_FOLLOW_A__FP12RS_STACKDATAi_0x268b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FCAMERA_FOLLOW_A__FP12RS_STACKDATAi_0x268b20");
#endif

    switch (ctx->pc) {
        case 0x268b20u: goto label_268b20;
        case 0x268b24u: goto label_268b24;
        case 0x268b28u: goto label_268b28;
        case 0x268b2cu: goto label_268b2c;
        case 0x268b30u: goto label_268b30;
        case 0x268b34u: goto label_268b34;
        case 0x268b38u: goto label_268b38;
        case 0x268b3cu: goto label_268b3c;
        case 0x268b40u: goto label_268b40;
        case 0x268b44u: goto label_268b44;
        case 0x268b48u: goto label_268b48;
        case 0x268b4cu: goto label_268b4c;
        case 0x268b50u: goto label_268b50;
        case 0x268b54u: goto label_268b54;
        case 0x268b58u: goto label_268b58;
        case 0x268b5cu: goto label_268b5c;
        case 0x268b60u: goto label_268b60;
        case 0x268b64u: goto label_268b64;
        case 0x268b68u: goto label_268b68;
        case 0x268b6cu: goto label_268b6c;
        case 0x268b70u: goto label_268b70;
        case 0x268b74u: goto label_268b74;
        case 0x268b78u: goto label_268b78;
        case 0x268b7cu: goto label_268b7c;
        case 0x268b80u: goto label_268b80;
        case 0x268b84u: goto label_268b84;
        default: break;
    }

    ctx->pc = 0x268b20u;

label_268b20:
    // 0x268b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_268b24:
    // 0x268b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_268b28:
    // 0x268b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_268b2c:
    // 0x268b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_268b30:
    // 0x268b30: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x268b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_268b34:
    // 0x268b34: 0xc0a0e30  jal         func_2838C0
label_268b38:
    if (ctx->pc == 0x268B38u) {
        ctx->pc = 0x268B38u;
            // 0x268b38: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x268B3Cu;
        goto label_268b3c;
    }
    ctx->pc = 0x268B34u;
    SET_GPR_U32(ctx, 31, 0x268B3Cu);
    ctx->pc = 0x268B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268B34u;
            // 0x268b38: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B3Cu; }
        if (ctx->pc != 0x268B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B3Cu; }
        if (ctx->pc != 0x268B3Cu) { return; }
    }
    ctx->pc = 0x268B3Cu;
label_268b3c:
    // 0x268b3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x268b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268b40:
    // 0x268b40: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_268b44:
    if (ctx->pc == 0x268B44u) {
        ctx->pc = 0x268B44u;
            // 0x268b44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268B48u;
        goto label_268b48;
    }
    ctx->pc = 0x268B40u;
    {
        const bool branch_taken_0x268b40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x268B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268B40u;
            // 0x268b44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b40) {
            ctx->pc = 0x268B50u;
            goto label_268b50;
        }
    }
    ctx->pc = 0x268B48u;
label_268b48:
    // 0x268b48: 0x1000000b  b           . + 4 + (0xB << 2)
label_268b4c:
    if (ctx->pc == 0x268B4Cu) {
        ctx->pc = 0x268B4Cu;
            // 0x268b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268B50u;
        goto label_268b50;
    }
    ctx->pc = 0x268B48u;
    {
        const bool branch_taken_0x268b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268B48u;
            // 0x268b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b48) {
            ctx->pc = 0x268B78u;
            goto label_268b78;
        }
    }
    ctx->pc = 0x268B50u;
label_268b50:
    // 0x268b50: 0xc097e34  jal         func_25F8D0
label_268b54:
    if (ctx->pc == 0x268B54u) {
        ctx->pc = 0x268B54u;
            // 0x268b54: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x268B58u;
        goto label_268b58;
    }
    ctx->pc = 0x268B50u;
    SET_GPR_U32(ctx, 31, 0x268B58u);
    ctx->pc = 0x268B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268B50u;
            // 0x268b54: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B58u; }
        if (ctx->pc != 0x268B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268B58u; }
        if (ctx->pc != 0x268B58u) { return; }
    }
    ctx->pc = 0x268B58u;
label_268b58:
    // 0x268b58: 0x8cf90060  lw          $t9, 0x60($a3)
    ctx->pc = 0x268b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
label_268b5c:
    // 0x268b5c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x268b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_268b60:
    // 0x268b60: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x268b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_268b64:
    // 0x268b64: 0xc7ae0028  lwc1        $f14, 0x28($sp)
    ctx->pc = 0x268b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_268b68:
    // 0x268b68: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x268b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_268b6c:
    // 0x268b6c: 0x320f809  jalr        $t9
label_268b70:
    if (ctx->pc == 0x268B70u) {
        ctx->pc = 0x268B70u;
            // 0x268b70: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x268B74u;
        goto label_268b74;
    }
    ctx->pc = 0x268B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x268B74u);
        ctx->pc = 0x268B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268B6Cu;
            // 0x268b70: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x268B74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x268B74u; }
            if (ctx->pc != 0x268B74u) { return; }
        }
        }
    }
    ctx->pc = 0x268B74u;
label_268b74:
    // 0x268b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268b78:
    // 0x268b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_268b7c:
    // 0x268b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_268b80:
    // 0x268b80: 0x3e00008  jr          $ra
label_268b84:
    if (ctx->pc == 0x268B84u) {
        ctx->pc = 0x268B84u;
            // 0x268b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x268B88u;
        goto label_fallthrough_0x268b80;
    }
    ctx->pc = 0x268B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268B80u;
            // 0x268b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x268b80:
    ctx->pc = 0x268B88u;
}
