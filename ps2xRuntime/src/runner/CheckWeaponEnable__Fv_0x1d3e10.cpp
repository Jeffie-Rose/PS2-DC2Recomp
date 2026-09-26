#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckWeaponEnable__Fv
// Address: 0x1d3e10 - 0x1d3eb8
void CheckWeaponEnable__Fv_0x1d3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckWeaponEnable__Fv_0x1d3e10");
#endif

    switch (ctx->pc) {
        case 0x1d3e10u: goto label_1d3e10;
        case 0x1d3e14u: goto label_1d3e14;
        case 0x1d3e18u: goto label_1d3e18;
        case 0x1d3e1cu: goto label_1d3e1c;
        case 0x1d3e20u: goto label_1d3e20;
        case 0x1d3e24u: goto label_1d3e24;
        case 0x1d3e28u: goto label_1d3e28;
        case 0x1d3e2cu: goto label_1d3e2c;
        case 0x1d3e30u: goto label_1d3e30;
        case 0x1d3e34u: goto label_1d3e34;
        case 0x1d3e38u: goto label_1d3e38;
        case 0x1d3e3cu: goto label_1d3e3c;
        case 0x1d3e40u: goto label_1d3e40;
        case 0x1d3e44u: goto label_1d3e44;
        case 0x1d3e48u: goto label_1d3e48;
        case 0x1d3e4cu: goto label_1d3e4c;
        case 0x1d3e50u: goto label_1d3e50;
        case 0x1d3e54u: goto label_1d3e54;
        case 0x1d3e58u: goto label_1d3e58;
        case 0x1d3e5cu: goto label_1d3e5c;
        case 0x1d3e60u: goto label_1d3e60;
        case 0x1d3e64u: goto label_1d3e64;
        case 0x1d3e68u: goto label_1d3e68;
        case 0x1d3e6cu: goto label_1d3e6c;
        case 0x1d3e70u: goto label_1d3e70;
        case 0x1d3e74u: goto label_1d3e74;
        case 0x1d3e78u: goto label_1d3e78;
        case 0x1d3e7cu: goto label_1d3e7c;
        case 0x1d3e80u: goto label_1d3e80;
        case 0x1d3e84u: goto label_1d3e84;
        case 0x1d3e88u: goto label_1d3e88;
        case 0x1d3e8cu: goto label_1d3e8c;
        case 0x1d3e90u: goto label_1d3e90;
        case 0x1d3e94u: goto label_1d3e94;
        case 0x1d3e98u: goto label_1d3e98;
        case 0x1d3e9cu: goto label_1d3e9c;
        case 0x1d3ea0u: goto label_1d3ea0;
        case 0x1d3ea4u: goto label_1d3ea4;
        case 0x1d3ea8u: goto label_1d3ea8;
        case 0x1d3eacu: goto label_1d3eac;
        case 0x1d3eb0u: goto label_1d3eb0;
        case 0x1d3eb4u: goto label_1d3eb4;
        default: break;
    }

    ctx->pc = 0x1d3e10u;

label_1d3e10:
    // 0x1d3e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d3e14:
    // 0x1d3e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3e18:
    // 0x1d3e18: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d3e1c:
    // 0x1d3e1c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d3e20:
    // 0x1d3e20: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1d3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_1d3e24:
    // 0x1d3e24: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1d3e28:
    if (ctx->pc == 0x1D3E28u) {
        ctx->pc = 0x1D3E2Cu;
        goto label_1d3e2c;
    }
    ctx->pc = 0x1D3E24u;
    {
        const bool branch_taken_0x1d3e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e24) {
            ctx->pc = 0x1D3E94u;
            goto label_1d3e94;
        }
    }
    ctx->pc = 0x1D3E2Cu;
label_1d3e2c:
    // 0x1d3e2c: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d3e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d3e30:
    // 0x1d3e30: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d3e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d3e34:
    // 0x1d3e34: 0xc05af24  jal         func_16BC90
label_1d3e38:
    if (ctx->pc == 0x1D3E38u) {
        ctx->pc = 0x1D3E38u;
            // 0x1d3e38: 0x24a57300  addiu       $a1, $a1, 0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29440));
        ctx->pc = 0x1D3E3Cu;
        goto label_1d3e3c;
    }
    ctx->pc = 0x1D3E34u;
    SET_GPR_U32(ctx, 31, 0x1D3E3Cu);
    ctx->pc = 0x1D3E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E34u;
            // 0x1d3e38: 0x24a57300  addiu       $a1, $a1, 0x7300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E3Cu; }
        if (ctx->pc != 0x1D3E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E3Cu; }
        if (ctx->pc != 0x1D3E3Cu) { return; }
    }
    ctx->pc = 0x1D3E3Cu;
label_1d3e3c:
    // 0x1d3e3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d3e40:
    if (ctx->pc == 0x1D3E40u) {
        ctx->pc = 0x1D3E44u;
        goto label_1d3e44;
    }
    ctx->pc = 0x1D3E3Cu;
    {
        const bool branch_taken_0x1d3e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e3c) {
            ctx->pc = 0x1D3E5Cu;
            goto label_1d3e5c;
        }
    }
    ctx->pc = 0x1D3E44u;
label_1d3e44:
    // 0x1d3e44: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d3e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d3e48:
    // 0x1d3e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3e4c:
    // 0x1d3e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3e50:
    // 0x1d3e50: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x1d3e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_1d3e54:
    // 0x1d3e54: 0x320f809  jalr        $t9
label_1d3e58:
    if (ctx->pc == 0x1D3E58u) {
        ctx->pc = 0x1D3E58u;
            // 0x1d3e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E5Cu;
        goto label_1d3e5c;
    }
    ctx->pc = 0x1D3E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D3E5Cu);
        ctx->pc = 0x1D3E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E54u;
            // 0x1d3e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3E5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E5Cu; }
            if (ctx->pc != 0x1D3E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D3E5Cu;
label_1d3e5c:
    // 0x1d3e5c: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d3e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d3e60:
    // 0x1d3e60: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d3e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d3e64:
    // 0x1d3e64: 0xc05af24  jal         func_16BC90
label_1d3e68:
    if (ctx->pc == 0x1D3E68u) {
        ctx->pc = 0x1D3E68u;
            // 0x1d3e68: 0x24a57278  addiu       $a1, $a1, 0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29304));
        ctx->pc = 0x1D3E6Cu;
        goto label_1d3e6c;
    }
    ctx->pc = 0x1D3E64u;
    SET_GPR_U32(ctx, 31, 0x1D3E6Cu);
    ctx->pc = 0x1D3E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E64u;
            // 0x1d3e68: 0x24a57278  addiu       $a1, $a1, 0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E6Cu; }
        if (ctx->pc != 0x1D3E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E6Cu; }
        if (ctx->pc != 0x1D3E6Cu) { return; }
    }
    ctx->pc = 0x1D3E6Cu;
label_1d3e6c:
    // 0x1d3e6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3e70:
    // 0x1d3e70: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_1d3e74:
    if (ctx->pc == 0x1D3E74u) {
        ctx->pc = 0x1D3E78u;
        goto label_1d3e78;
    }
    ctx->pc = 0x1D3E70u;
    {
        const bool branch_taken_0x1d3e70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e70) {
            ctx->pc = 0x1D3EACu;
            goto label_1d3eac;
        }
    }
    ctx->pc = 0x1D3E78u;
label_1d3e78:
    // 0x1d3e78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d3e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d3e7c:
    // 0x1d3e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3e80:
    // 0x1d3e80: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x1d3e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_1d3e84:
    // 0x1d3e84: 0x320f809  jalr        $t9
label_1d3e88:
    if (ctx->pc == 0x1D3E88u) {
        ctx->pc = 0x1D3E88u;
            // 0x1d3e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E8Cu;
        goto label_1d3e8c;
    }
    ctx->pc = 0x1D3E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D3E8Cu);
        ctx->pc = 0x1D3E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E84u;
            // 0x1d3e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3E8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3E8Cu; }
            if (ctx->pc != 0x1D3E8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D3E8Cu;
label_1d3e8c:
    // 0x1d3e8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d3e90:
    if (ctx->pc == 0x1D3E90u) {
        ctx->pc = 0x1D3E90u;
            // 0x1d3e90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1D3E94u;
        goto label_1d3e94;
    }
    ctx->pc = 0x1D3E8Cu;
    {
        const bool branch_taken_0x1d3e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3E8Cu;
            // 0x1d3e90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e8c) {
            ctx->pc = 0x1D3EB0u;
            goto label_1d3eb0;
        }
    }
    ctx->pc = 0x1D3E94u;
label_1d3e94:
    // 0x1d3e94: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d3e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d3e98:
    // 0x1d3e98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3e9c:
    // 0x1d3e9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d3ea0:
    // 0x1d3ea0: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x1d3ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_1d3ea4:
    // 0x1d3ea4: 0x320f809  jalr        $t9
label_1d3ea8:
    if (ctx->pc == 0x1D3EA8u) {
        ctx->pc = 0x1D3EA8u;
            // 0x1d3ea8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EACu;
        goto label_1d3eac;
    }
    ctx->pc = 0x1D3EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D3EACu);
        ctx->pc = 0x1D3EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EA4u;
            // 0x1d3ea8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3EACu; }
            if (ctx->pc != 0x1D3EACu) { return; }
        }
        }
    }
    ctx->pc = 0x1D3EACu;
label_1d3eac:
    // 0x1d3eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3eb0:
    // 0x1d3eb0: 0x3e00008  jr          $ra
label_1d3eb4:
    if (ctx->pc == 0x1D3EB4u) {
        ctx->pc = 0x1D3EB4u;
            // 0x1d3eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D3EB8u;
        goto label_fallthrough_0x1d3eb0;
    }
    ctx->pc = 0x1D3EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3EB0u;
            // 0x1d3eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d3eb0:
    ctx->pc = 0x1D3EB8u;
}
