#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetRiver__9CEditGridFii
// Address: 0x297c10 - 0x297d08
void ResetRiver__9CEditGridFii_0x297c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetRiver__9CEditGridFii_0x297c10");
#endif

    switch (ctx->pc) {
        case 0x297c34u: goto label_297c34;
        case 0x297c6cu: goto label_297c6c;
        case 0x297c7cu: goto label_297c7c;
        case 0x297c8cu: goto label_297c8c;
        case 0x297c9cu: goto label_297c9c;
        case 0x297cacu: goto label_297cac;
        case 0x297cbcu: goto label_297cbc;
        case 0x297cccu: goto label_297ccc;
        case 0x297cdcu: goto label_297cdc;
        case 0x297cecu: goto label_297cec;
        default: break;
    }

    ctx->pc = 0x297c10u;

    // 0x297c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x297c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x297c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x297c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x297c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297c20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x297c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297c28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x297c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c2c: 0xc0a5e40  jal         func_297900
    ctx->pc = 0x297C2Cu;
    SET_GPR_U32(ctx, 31, 0x297C34u);
    ctx->pc = 0x297C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297C2Cu;
            // 0x297c30: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297900u;
    if (runtime->hasFunction(0x297900u)) {
        auto targetFn = runtime->lookupFunction(0x297900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C34u; }
        if (ctx->pc != 0x297C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__9CEditGridFii_0x297900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C34u; }
        if (ctx->pc != 0x297C34u) { return; }
    }
    ctx->pc = 0x297C34u;
label_297c34:
    // 0x297c34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297C34u;
    {
        const bool branch_taken_0x297c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297c34) {
            ctx->pc = 0x297C44u;
            goto label_297c44;
        }
    }
    ctx->pc = 0x297C3Cu;
    // 0x297c3c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x297C3Cu;
    {
        const bool branch_taken_0x297c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297C3Cu;
            // 0x297c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c3c) {
            ctx->pc = 0x297CF0u;
            goto label_297cf0;
        }
    }
    ctx->pc = 0x297C44u;
label_297c44:
    // 0x297c44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x297c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297c48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x297C48u;
    {
        const bool branch_taken_0x297c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297c48) {
            ctx->pc = 0x297C58u;
            goto label_297c58;
        }
    }
    ctx->pc = 0x297C50u;
    // 0x297c50: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x297C50u;
    {
        const bool branch_taken_0x297c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297C50u;
            // 0x297c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297c50) {
            ctx->pc = 0x297CF0u;
            goto label_297cf0;
        }
    }
    ctx->pc = 0x297C58u;
label_297c58:
    // 0x297c58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x297c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x297c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c64: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297C64u;
    SET_GPR_U32(ctx, 31, 0x297C6Cu);
    ctx->pc = 0x297C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297C64u;
            // 0x297c68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C6Cu; }
        if (ctx->pc != 0x297C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C6Cu; }
        if (ctx->pc != 0x297C6Cu) { return; }
    }
    ctx->pc = 0x297C6Cu;
label_297c6c:
    // 0x297c6c: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x297c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x297c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c74: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297C74u;
    SET_GPR_U32(ctx, 31, 0x297C7Cu);
    ctx->pc = 0x297C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297C74u;
            // 0x297c78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C7Cu; }
        if (ctx->pc != 0x297C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C7Cu; }
        if (ctx->pc != 0x297C7Cu) { return; }
    }
    ctx->pc = 0x297C7Cu;
label_297c7c:
    // 0x297c7c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x297c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297c80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c84: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297C84u;
    SET_GPR_U32(ctx, 31, 0x297C8Cu);
    ctx->pc = 0x297C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297C84u;
            // 0x297c88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C8Cu; }
        if (ctx->pc != 0x297C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C8Cu; }
        if (ctx->pc != 0x297C8Cu) { return; }
    }
    ctx->pc = 0x297C8Cu;
label_297c8c:
    // 0x297c8c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x297c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297c90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c94: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297C94u;
    SET_GPR_U32(ctx, 31, 0x297C9Cu);
    ctx->pc = 0x297C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297C94u;
            // 0x297c98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C9Cu; }
        if (ctx->pc != 0x297C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C9Cu; }
        if (ctx->pc != 0x297C9Cu) { return; }
    }
    ctx->pc = 0x297C9Cu;
label_297c9c:
    // 0x297c9c: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x297c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x297ca0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ca4: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297CA4u;
    SET_GPR_U32(ctx, 31, 0x297CACu);
    ctx->pc = 0x297CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297CA4u;
            // 0x297ca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CACu; }
        if (ctx->pc != 0x297CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CACu; }
        if (ctx->pc != 0x297CACu) { return; }
    }
    ctx->pc = 0x297CACu;
label_297cac:
    // 0x297cac: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x297cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x297cb0: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x297cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x297cb4: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297CB4u;
    SET_GPR_U32(ctx, 31, 0x297CBCu);
    ctx->pc = 0x297CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297CB4u;
            // 0x297cb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CBCu; }
        if (ctx->pc != 0x297CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CBCu; }
        if (ctx->pc != 0x297CBCu) { return; }
    }
    ctx->pc = 0x297CBCu;
label_297cbc:
    // 0x297cbc: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x297cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297cc0: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x297cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x297cc4: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297CC4u;
    SET_GPR_U32(ctx, 31, 0x297CCCu);
    ctx->pc = 0x297CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297CC4u;
            // 0x297cc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CCCu; }
        if (ctx->pc != 0x297CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CCCu; }
        if (ctx->pc != 0x297CCCu) { return; }
    }
    ctx->pc = 0x297CCCu;
label_297ccc:
    // 0x297ccc: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x297cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297cd0: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x297cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297cd4: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297CD4u;
    SET_GPR_U32(ctx, 31, 0x297CDCu);
    ctx->pc = 0x297CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297CD4u;
            // 0x297cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CDCu; }
        if (ctx->pc != 0x297CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CDCu; }
        if (ctx->pc != 0x297CDCu) { return; }
    }
    ctx->pc = 0x297CDCu;
label_297cdc:
    // 0x297cdc: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x297cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x297ce0: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x297ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297ce4: 0xc0a5f44  jal         func_297D10
    ctx->pc = 0x297CE4u;
    SET_GPR_U32(ctx, 31, 0x297CECu);
    ctx->pc = 0x297CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297CE4u;
            // 0x297ce8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297D10u;
    if (runtime->hasFunction(0x297D10u)) {
        auto targetFn = runtime->lookupFunction(0x297D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CECu; }
        if (ctx->pc != 0x297CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateRiver__9CEditGridFii_0x297d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297CECu; }
        if (ctx->pc != 0x297CECu) { return; }
    }
    ctx->pc = 0x297CECu;
label_297cec:
    // 0x297cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297cf0:
    // 0x297cf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x297cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297cf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x297cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297d00: 0x3e00008  jr          $ra
    ctx->pc = 0x297D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297D00u;
            // 0x297d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297D08u;
}
