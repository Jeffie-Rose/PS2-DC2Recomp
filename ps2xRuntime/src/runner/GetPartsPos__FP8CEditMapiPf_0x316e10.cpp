#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartsPos__FP8CEditMapiPf
// Address: 0x316e10 - 0x316e78
void GetPartsPos__FP8CEditMapiPf_0x316e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartsPos__FP8CEditMapiPf_0x316e10");
#endif

    switch (ctx->pc) {
        case 0x316e10u: goto label_316e10;
        case 0x316e14u: goto label_316e14;
        case 0x316e18u: goto label_316e18;
        case 0x316e1cu: goto label_316e1c;
        case 0x316e20u: goto label_316e20;
        case 0x316e24u: goto label_316e24;
        case 0x316e28u: goto label_316e28;
        case 0x316e2cu: goto label_316e2c;
        case 0x316e30u: goto label_316e30;
        case 0x316e34u: goto label_316e34;
        case 0x316e38u: goto label_316e38;
        case 0x316e3cu: goto label_316e3c;
        case 0x316e40u: goto label_316e40;
        case 0x316e44u: goto label_316e44;
        case 0x316e48u: goto label_316e48;
        case 0x316e4cu: goto label_316e4c;
        case 0x316e50u: goto label_316e50;
        case 0x316e54u: goto label_316e54;
        case 0x316e58u: goto label_316e58;
        case 0x316e5cu: goto label_316e5c;
        case 0x316e60u: goto label_316e60;
        case 0x316e64u: goto label_316e64;
        case 0x316e68u: goto label_316e68;
        case 0x316e6cu: goto label_316e6c;
        case 0x316e70u: goto label_316e70;
        case 0x316e74u: goto label_316e74;
        default: break;
    }

    ctx->pc = 0x316e10u;

label_316e10:
    // 0x316e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x316e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_316e14:
    // 0x316e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x316e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_316e18:
    // 0x316e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_316e1c:
    // 0x316e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_316e20:
    // 0x316e20: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_316e24:
    if (ctx->pc == 0x316E24u) {
        ctx->pc = 0x316E24u;
            // 0x316e24: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316E28u;
        goto label_316e28;
    }
    ctx->pc = 0x316E20u;
    {
        const bool branch_taken_0x316e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x316E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316E20u;
            // 0x316e24: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e20) {
            ctx->pc = 0x316E30u;
            goto label_316e30;
        }
    }
    ctx->pc = 0x316E28u;
label_316e28:
    // 0x316e28: 0x1000000e  b           . + 4 + (0xE << 2)
label_316e2c:
    if (ctx->pc == 0x316E2Cu) {
        ctx->pc = 0x316E2Cu;
            // 0x316e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316E30u;
        goto label_316e30;
    }
    ctx->pc = 0x316E28u;
    {
        const bool branch_taken_0x316e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316E28u;
            // 0x316e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e28) {
            ctx->pc = 0x316E64u;
            goto label_316e64;
        }
    }
    ctx->pc = 0x316E30u;
label_316e30:
    // 0x316e30: 0xc06c310  jal         func_1B0C40
label_316e34:
    if (ctx->pc == 0x316E34u) {
        ctx->pc = 0x316E38u;
        goto label_316e38;
    }
    ctx->pc = 0x316E30u;
    SET_GPR_U32(ctx, 31, 0x316E38u);
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316E38u; }
        if (ctx->pc != 0x316E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316E38u; }
        if (ctx->pc != 0x316E38u) { return; }
    }
    ctx->pc = 0x316E38u;
label_316e38:
    // 0x316e38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_316e3c:
    // 0x316e3c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_316e40:
    if (ctx->pc == 0x316E40u) {
        ctx->pc = 0x316E40u;
            // 0x316e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316E44u;
        goto label_316e44;
    }
    ctx->pc = 0x316E3Cu;
    {
        const bool branch_taken_0x316e3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x316E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316E3Cu;
            // 0x316e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e3c) {
            ctx->pc = 0x316E4Cu;
            goto label_316e4c;
        }
    }
    ctx->pc = 0x316E44u;
label_316e44:
    // 0x316e44: 0x10000008  b           . + 4 + (0x8 << 2)
label_316e48:
    if (ctx->pc == 0x316E48u) {
        ctx->pc = 0x316E48u;
            // 0x316e48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x316E4Cu;
        goto label_316e4c;
    }
    ctx->pc = 0x316E44u;
    {
        const bool branch_taken_0x316e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316E44u;
            // 0x316e48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e44) {
            ctx->pc = 0x316E68u;
            goto label_316e68;
        }
    }
    ctx->pc = 0x316E4Cu;
label_316e4c:
    // 0x316e4c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x316e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_316e50:
    // 0x316e50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_316e54:
    // 0x316e54: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x316e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_316e58:
    // 0x316e58: 0x320f809  jalr        $t9
label_316e5c:
    if (ctx->pc == 0x316E5Cu) {
        ctx->pc = 0x316E5Cu;
            // 0x316e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316E60u;
        goto label_316e60;
    }
    ctx->pc = 0x316E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316E60u);
        ctx->pc = 0x316E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316E58u;
            // 0x316e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316E60u; }
            if (ctx->pc != 0x316E60u) { return; }
        }
        }
    }
    ctx->pc = 0x316E60u;
label_316e60:
    // 0x316e60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x316e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316e64:
    // 0x316e64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x316e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_316e68:
    // 0x316e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316e6c:
    // 0x316e6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_316e70:
    // 0x316e70: 0x3e00008  jr          $ra
label_316e74:
    if (ctx->pc == 0x316E74u) {
        ctx->pc = 0x316E74u;
            // 0x316e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x316E78u;
        goto label_fallthrough_0x316e70;
    }
    ctx->pc = 0x316E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316E70u;
            // 0x316e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x316e70:
    ctx->pc = 0x316E78u;
}
