#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ROT__FP12RS_STACKDATAi
// Address: 0x2cea00 - 0x2cea78
void ps2__GET_ROT__FP12RS_STACKDATAi_0x2cea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ROT__FP12RS_STACKDATAi_0x2cea00");
#endif

    switch (ctx->pc) {
        case 0x2cea00u: goto label_2cea00;
        case 0x2cea04u: goto label_2cea04;
        case 0x2cea08u: goto label_2cea08;
        case 0x2cea0cu: goto label_2cea0c;
        case 0x2cea10u: goto label_2cea10;
        case 0x2cea14u: goto label_2cea14;
        case 0x2cea18u: goto label_2cea18;
        case 0x2cea1cu: goto label_2cea1c;
        case 0x2cea20u: goto label_2cea20;
        case 0x2cea24u: goto label_2cea24;
        case 0x2cea28u: goto label_2cea28;
        case 0x2cea2cu: goto label_2cea2c;
        case 0x2cea30u: goto label_2cea30;
        case 0x2cea34u: goto label_2cea34;
        case 0x2cea38u: goto label_2cea38;
        case 0x2cea3cu: goto label_2cea3c;
        case 0x2cea40u: goto label_2cea40;
        case 0x2cea44u: goto label_2cea44;
        case 0x2cea48u: goto label_2cea48;
        case 0x2cea4cu: goto label_2cea4c;
        case 0x2cea50u: goto label_2cea50;
        case 0x2cea54u: goto label_2cea54;
        case 0x2cea58u: goto label_2cea58;
        case 0x2cea5cu: goto label_2cea5c;
        case 0x2cea60u: goto label_2cea60;
        case 0x2cea64u: goto label_2cea64;
        case 0x2cea68u: goto label_2cea68;
        case 0x2cea6cu: goto label_2cea6c;
        case 0x2cea70u: goto label_2cea70;
        case 0x2cea74u: goto label_2cea74;
        default: break;
    }

    ctx->pc = 0x2cea00u;

label_2cea00:
    // 0x2cea00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cea04:
    // 0x2cea04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cea08:
    // 0x2cea08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cea0c:
    // 0x2cea0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cea10:
    // 0x2cea10: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2cea14:
    if (ctx->pc == 0x2CEA14u) {
        ctx->pc = 0x2CEA14u;
            // 0x2cea14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA18u;
        goto label_2cea18;
    }
    ctx->pc = 0x2CEA10u;
    {
        const bool branch_taken_0x2cea10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CEA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA10u;
            // 0x2cea14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea10) {
            ctx->pc = 0x2CEA20u;
            goto label_2cea20;
        }
    }
    ctx->pc = 0x2CEA18u;
label_2cea18:
    // 0x2cea18: 0x10000013  b           . + 4 + (0x13 << 2)
label_2cea1c:
    if (ctx->pc == 0x2CEA1Cu) {
        ctx->pc = 0x2CEA1Cu;
            // 0x2cea1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA20u;
        goto label_2cea20;
    }
    ctx->pc = 0x2CEA18u;
    {
        const bool branch_taken_0x2cea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA18u;
            // 0x2cea1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea18) {
            ctx->pc = 0x2CEA68u;
            goto label_2cea68;
        }
    }
    ctx->pc = 0x2CEA20u;
label_2cea20:
    // 0x2cea20: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cea20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2cea24:
    // 0x2cea24: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cea24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2cea28:
    // 0x2cea28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cea28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cea2c:
    // 0x2cea2c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2cea2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2cea30:
    // 0x2cea30: 0x320f809  jalr        $t9
label_2cea34:
    if (ctx->pc == 0x2CEA34u) {
        ctx->pc = 0x2CEA34u;
            // 0x2cea34: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CEA38u;
        goto label_2cea38;
    }
    ctx->pc = 0x2CEA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CEA38u);
        ctx->pc = 0x2CEA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA30u;
            // 0x2cea34: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CEA38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CEA38u; }
            if (ctx->pc != 0x2CEA38u) { return; }
        }
        }
    }
    ctx->pc = 0x2CEA38u;
label_2cea38:
    // 0x2cea38: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2cea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2cea3c:
    // 0x2cea3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cea40:
    // 0x2cea40: 0xc0b37b4  jal         func_2CDED0
label_2cea44:
    if (ctx->pc == 0x2CEA44u) {
        ctx->pc = 0x2CEA44u;
            // 0x2cea44: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2CEA48u;
        goto label_2cea48;
    }
    ctx->pc = 0x2CEA40u;
    SET_GPR_U32(ctx, 31, 0x2CEA48u);
    ctx->pc = 0x2CEA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA40u;
            // 0x2cea44: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEA48u; }
        if (ctx->pc != 0x2CEA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEA48u; }
        if (ctx->pc != 0x2CEA48u) { return; }
    }
    ctx->pc = 0x2CEA48u;
label_2cea48:
    // 0x2cea48: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2cea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2cea4c:
    // 0x2cea4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cea50:
    // 0x2cea50: 0xc0b37b4  jal         func_2CDED0
label_2cea54:
    if (ctx->pc == 0x2CEA54u) {
        ctx->pc = 0x2CEA54u;
            // 0x2cea54: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2CEA58u;
        goto label_2cea58;
    }
    ctx->pc = 0x2CEA50u;
    SET_GPR_U32(ctx, 31, 0x2CEA58u);
    ctx->pc = 0x2CEA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA50u;
            // 0x2cea54: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEA58u; }
        if (ctx->pc != 0x2CEA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEA58u; }
        if (ctx->pc != 0x2CEA58u) { return; }
    }
    ctx->pc = 0x2CEA58u;
label_2cea58:
    // 0x2cea58: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2cea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2cea5c:
    // 0x2cea5c: 0xc0b37b4  jal         func_2CDED0
label_2cea60:
    if (ctx->pc == 0x2CEA60u) {
        ctx->pc = 0x2CEA60u;
            // 0x2cea60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA64u;
        goto label_2cea64;
    }
    ctx->pc = 0x2CEA5Cu;
    SET_GPR_U32(ctx, 31, 0x2CEA64u);
    ctx->pc = 0x2CEA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA5Cu;
            // 0x2cea60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEA64u; }
        if (ctx->pc != 0x2CEA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEA64u; }
        if (ctx->pc != 0x2CEA64u) { return; }
    }
    ctx->pc = 0x2CEA64u;
label_2cea64:
    // 0x2cea64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cea68:
    // 0x2cea68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cea68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cea6c:
    // 0x2cea6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cea6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cea70:
    // 0x2cea70: 0x3e00008  jr          $ra
label_2cea74:
    if (ctx->pc == 0x2CEA74u) {
        ctx->pc = 0x2CEA74u;
            // 0x2cea74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CEA78u;
        goto label_fallthrough_0x2cea70;
    }
    ctx->pc = 0x2CEA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEA70u;
            // 0x2cea74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cea70:
    ctx->pc = 0x2CEA78u;
}
