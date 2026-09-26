#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRiver__9CEditGridFii
// Address: 0x297b20 - 0x297c04
void SetRiver__9CEditGridFii_0x297b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRiver__9CEditGridFii_0x297b20");
#endif

    switch (ctx->pc) {
        case 0x297b44u: goto label_297b44;
        case 0x297b68u: goto label_297b68;
        case 0x297b78u: goto label_297b78;
        case 0x297b88u: goto label_297b88;
        case 0x297b98u: goto label_297b98;
        case 0x297ba8u: goto label_297ba8;
        case 0x297bb8u: goto label_297bb8;
        case 0x297bc8u: goto label_297bc8;
        case 0x297bd8u: goto label_297bd8;
        case 0x297be8u: goto label_297be8;
        default: break;
    }

    ctx->pc = 0x297b20u;

    // 0x297b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297b24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x297b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x297b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x297b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x297b2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297b30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x297b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297b38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x297b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b3c: 0xc0a5e40  jal         func_297900
    ctx->pc = 0x297B3Cu;
    SET_GPR_U32(ctx, 31, 0x297B44u);
    ctx->pc = 0x297B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297B3Cu;
            // 0x297b40: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297900u;
    if (runtime->hasFunction(0x297900u)) {
        auto targetFn = runtime->lookupFunction(0x297900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B44u; }
        if (ctx->pc != 0x297B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__9CEditGridFii_0x297900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B44u; }
        if (ctx->pc != 0x297B44u) { return; }
    }
    ctx->pc = 0x297B44u;
label_297b44:
    // 0x297b44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297B44u;
    {
        const bool branch_taken_0x297b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297B44u;
            // 0x297b48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b44) {
            ctx->pc = 0x297B54u;
            goto label_297b54;
        }
    }
    ctx->pc = 0x297B4Cu;
    // 0x297b4c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x297B4Cu;
    {
        const bool branch_taken_0x297b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297B4Cu;
            // 0x297b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b4c) {
            ctx->pc = 0x297BECu;
            goto label_297bec;
        }
    }
    ctx->pc = 0x297B54u;
label_297b54:
    // 0x297b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x297b5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x297b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b60: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297B60u;
    SET_GPR_U32(ctx, 31, 0x297B68u);
    ctx->pc = 0x297B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297B60u;
            // 0x297b64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B68u; }
        if (ctx->pc != 0x297B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B68u; }
        if (ctx->pc != 0x297B68u) { return; }
    }
    ctx->pc = 0x297B68u;
label_297b68:
    // 0x297b68: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x297b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x297b6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b70: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297B70u;
    SET_GPR_U32(ctx, 31, 0x297B78u);
    ctx->pc = 0x297B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297B70u;
            // 0x297b74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B78u; }
        if (ctx->pc != 0x297B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B78u; }
        if (ctx->pc != 0x297B78u) { return; }
    }
    ctx->pc = 0x297B78u;
label_297b78:
    // 0x297b78: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x297b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b80: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297B80u;
    SET_GPR_U32(ctx, 31, 0x297B88u);
    ctx->pc = 0x297B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297B80u;
            // 0x297b84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B88u; }
        if (ctx->pc != 0x297B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B88u; }
        if (ctx->pc != 0x297B88u) { return; }
    }
    ctx->pc = 0x297B88u;
label_297b88:
    // 0x297b88: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x297b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b90: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297B90u;
    SET_GPR_U32(ctx, 31, 0x297B98u);
    ctx->pc = 0x297B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297B90u;
            // 0x297b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B98u; }
        if (ctx->pc != 0x297B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B98u; }
        if (ctx->pc != 0x297B98u) { return; }
    }
    ctx->pc = 0x297B98u;
label_297b98:
    // 0x297b98: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x297b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x297b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ba0: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297BA0u;
    SET_GPR_U32(ctx, 31, 0x297BA8u);
    ctx->pc = 0x297BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297BA0u;
            // 0x297ba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BA8u; }
        if (ctx->pc != 0x297BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BA8u; }
        if (ctx->pc != 0x297BA8u) { return; }
    }
    ctx->pc = 0x297BA8u;
label_297ba8:
    // 0x297ba8: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x297ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x297bac: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x297bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x297bb0: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297BB0u;
    SET_GPR_U32(ctx, 31, 0x297BB8u);
    ctx->pc = 0x297BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297BB0u;
            // 0x297bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BB8u; }
        if (ctx->pc != 0x297BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BB8u; }
        if (ctx->pc != 0x297BB8u) { return; }
    }
    ctx->pc = 0x297BB8u;
label_297bb8:
    // 0x297bb8: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x297bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297bbc: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x297bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x297bc0: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297BC0u;
    SET_GPR_U32(ctx, 31, 0x297BC8u);
    ctx->pc = 0x297BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297BC0u;
            // 0x297bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BC8u; }
        if (ctx->pc != 0x297BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BC8u; }
        if (ctx->pc != 0x297BC8u) { return; }
    }
    ctx->pc = 0x297BC8u;
label_297bc8:
    // 0x297bc8: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x297bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297bcc: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x297bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297bd0: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297BD0u;
    SET_GPR_U32(ctx, 31, 0x297BD8u);
    ctx->pc = 0x297BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297BD0u;
            // 0x297bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BD8u; }
        if (ctx->pc != 0x297BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BD8u; }
        if (ctx->pc != 0x297BD8u) { return; }
    }
    ctx->pc = 0x297BD8u;
label_297bd8:
    // 0x297bd8: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x297bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x297bdc: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x297bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297be0: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297BE0u;
    SET_GPR_U32(ctx, 31, 0x297BE8u);
    ctx->pc = 0x297BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297BE0u;
            // 0x297be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BE8u; }
        if (ctx->pc != 0x297BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BE8u; }
        if (ctx->pc != 0x297BE8u) { return; }
    }
    ctx->pc = 0x297BE8u;
label_297be8:
    // 0x297be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297bec:
    // 0x297bec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297bf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x297bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297bf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x297BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297BFCu;
            // 0x297c00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297C04u;
}
