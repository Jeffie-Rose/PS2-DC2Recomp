#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepChara__6CSceneFi
// Address: 0x2c8c70 - 0x2c8d68
void StepChara__6CSceneFi_0x2c8c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepChara__6CSceneFi_0x2c8c70");
#endif

    switch (ctx->pc) {
        case 0x2c8c70u: goto label_2c8c70;
        case 0x2c8c74u: goto label_2c8c74;
        case 0x2c8c78u: goto label_2c8c78;
        case 0x2c8c7cu: goto label_2c8c7c;
        case 0x2c8c80u: goto label_2c8c80;
        case 0x2c8c84u: goto label_2c8c84;
        case 0x2c8c88u: goto label_2c8c88;
        case 0x2c8c8cu: goto label_2c8c8c;
        case 0x2c8c90u: goto label_2c8c90;
        case 0x2c8c94u: goto label_2c8c94;
        case 0x2c8c98u: goto label_2c8c98;
        case 0x2c8c9cu: goto label_2c8c9c;
        case 0x2c8ca0u: goto label_2c8ca0;
        case 0x2c8ca4u: goto label_2c8ca4;
        case 0x2c8ca8u: goto label_2c8ca8;
        case 0x2c8cacu: goto label_2c8cac;
        case 0x2c8cb0u: goto label_2c8cb0;
        case 0x2c8cb4u: goto label_2c8cb4;
        case 0x2c8cb8u: goto label_2c8cb8;
        case 0x2c8cbcu: goto label_2c8cbc;
        case 0x2c8cc0u: goto label_2c8cc0;
        case 0x2c8cc4u: goto label_2c8cc4;
        case 0x2c8cc8u: goto label_2c8cc8;
        case 0x2c8cccu: goto label_2c8ccc;
        case 0x2c8cd0u: goto label_2c8cd0;
        case 0x2c8cd4u: goto label_2c8cd4;
        case 0x2c8cd8u: goto label_2c8cd8;
        case 0x2c8cdcu: goto label_2c8cdc;
        case 0x2c8ce0u: goto label_2c8ce0;
        case 0x2c8ce4u: goto label_2c8ce4;
        case 0x2c8ce8u: goto label_2c8ce8;
        case 0x2c8cecu: goto label_2c8cec;
        case 0x2c8cf0u: goto label_2c8cf0;
        case 0x2c8cf4u: goto label_2c8cf4;
        case 0x2c8cf8u: goto label_2c8cf8;
        case 0x2c8cfcu: goto label_2c8cfc;
        case 0x2c8d00u: goto label_2c8d00;
        case 0x2c8d04u: goto label_2c8d04;
        case 0x2c8d08u: goto label_2c8d08;
        case 0x2c8d0cu: goto label_2c8d0c;
        case 0x2c8d10u: goto label_2c8d10;
        case 0x2c8d14u: goto label_2c8d14;
        case 0x2c8d18u: goto label_2c8d18;
        case 0x2c8d1cu: goto label_2c8d1c;
        case 0x2c8d20u: goto label_2c8d20;
        case 0x2c8d24u: goto label_2c8d24;
        case 0x2c8d28u: goto label_2c8d28;
        case 0x2c8d2cu: goto label_2c8d2c;
        case 0x2c8d30u: goto label_2c8d30;
        case 0x2c8d34u: goto label_2c8d34;
        case 0x2c8d38u: goto label_2c8d38;
        case 0x2c8d3cu: goto label_2c8d3c;
        case 0x2c8d40u: goto label_2c8d40;
        case 0x2c8d44u: goto label_2c8d44;
        case 0x2c8d48u: goto label_2c8d48;
        case 0x2c8d4cu: goto label_2c8d4c;
        case 0x2c8d50u: goto label_2c8d50;
        case 0x2c8d54u: goto label_2c8d54;
        case 0x2c8d58u: goto label_2c8d58;
        case 0x2c8d5cu: goto label_2c8d5c;
        case 0x2c8d60u: goto label_2c8d60;
        case 0x2c8d64u: goto label_2c8d64;
        default: break;
    }

    ctx->pc = 0x2c8c70u;

label_2c8c70:
    // 0x2c8c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c8c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c8c74:
    // 0x2c8c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c8c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c8c78:
    // 0x2c8c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c8c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c8c7c:
    // 0x2c8c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c8c80:
    // 0x2c8c80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c8c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c84:
    // 0x2c8c84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c8c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c88:
    // 0x2c8c88: 0xc0a0ed8  jal         func_283B60
label_2c8c8c:
    if (ctx->pc == 0x2C8C8Cu) {
        ctx->pc = 0x2C8C8Cu;
            // 0x2c8c8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2C8C90u;
        goto label_2c8c90;
    }
    ctx->pc = 0x2C8C88u;
    SET_GPR_U32(ctx, 31, 0x2C8C90u);
    ctx->pc = 0x2C8C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C88u;
            // 0x2c8c8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C90u; }
        if (ctx->pc != 0x2C8C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C90u; }
        if (ctx->pc != 0x2C8C90u) { return; }
    }
    ctx->pc = 0x2C8C90u;
label_2c8c90:
    // 0x2c8c90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c8c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c94:
    // 0x2c8c94: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2c8c98:
    if (ctx->pc == 0x2C8C98u) {
        ctx->pc = 0x2C8C98u;
            // 0x2c8c98: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x2C8C9Cu;
        goto label_2c8c9c;
    }
    ctx->pc = 0x2C8C94u;
    {
        const bool branch_taken_0x2c8c94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C94u;
            // 0x2c8c98: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c94) {
            ctx->pc = 0x2C8CA4u;
            goto label_2c8ca4;
        }
    }
    ctx->pc = 0x2C8C9Cu;
label_2c8c9c:
    // 0x2c8c9c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2c8ca0:
    if (ctx->pc == 0x2C8CA0u) {
        ctx->pc = 0x2C8CA0u;
            // 0x2c8ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CA4u;
        goto label_2c8ca4;
    }
    ctx->pc = 0x2C8C9Cu;
    {
        const bool branch_taken_0x2c8c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C9Cu;
            // 0x2c8ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c9c) {
            ctx->pc = 0x2C8D50u;
            goto label_2c8d50;
        }
    }
    ctx->pc = 0x2C8CA4u;
label_2c8ca4:
    // 0x2c8ca4: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x2c8ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_2c8ca8:
    // 0x2c8ca8: 0x8c22a498  lw          $v0, -0x5B68($at)
    ctx->pc = 0x2c8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
label_2c8cac:
    // 0x2c8cac: 0xae02057c  sw          $v0, 0x57C($s0)
    ctx->pc = 0x2c8cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 2));
label_2c8cb0:
    // 0x2c8cb0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c8cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c8cb4:
    // 0x2c8cb4: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x2c8cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_2c8cb8:
    // 0x2c8cb8: 0x320f809  jalr        $t9
label_2c8cbc:
    if (ctx->pc == 0x2C8CBCu) {
        ctx->pc = 0x2C8CBCu;
            // 0x2c8cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CC0u;
        goto label_2c8cc0;
    }
    ctx->pc = 0x2C8CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8CC0u);
        ctx->pc = 0x2C8CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CB8u;
            // 0x2c8cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8CC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CC0u; }
            if (ctx->pc != 0x2C8CC0u) { return; }
        }
        }
    }
    ctx->pc = 0x2C8CC0u;
label_2c8cc0:
    // 0x2c8cc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c8cc4:
    if (ctx->pc == 0x2C8CC4u) {
        ctx->pc = 0x2C8CC4u;
            // 0x2c8cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CC8u;
        goto label_2c8cc8;
    }
    ctx->pc = 0x2C8CC0u;
    {
        const bool branch_taken_0x2c8cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CC0u;
            // 0x2c8cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cc0) {
            ctx->pc = 0x2C8CD0u;
            goto label_2c8cd0;
        }
    }
    ctx->pc = 0x2C8CC8u;
label_2c8cc8:
    // 0x2c8cc8: 0x10000021  b           . + 4 + (0x21 << 2)
label_2c8ccc:
    if (ctx->pc == 0x2C8CCCu) {
        ctx->pc = 0x2C8CCCu;
            // 0x2c8ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CD0u;
        goto label_2c8cd0;
    }
    ctx->pc = 0x2C8CC8u;
    {
        const bool branch_taken_0x2c8cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CC8u;
            // 0x2c8ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cc8) {
            ctx->pc = 0x2C8D50u;
            goto label_2c8d50;
        }
    }
    ctx->pc = 0x2C8CD0u;
label_2c8cd0:
    // 0x2c8cd0: 0xc0b22dc  jal         func_2C8B70
label_2c8cd4:
    if (ctx->pc == 0x2C8CD4u) {
        ctx->pc = 0x2C8CD4u;
            // 0x2c8cd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CD8u;
        goto label_2c8cd8;
    }
    ctx->pc = 0x2C8CD0u;
    SET_GPR_U32(ctx, 31, 0x2C8CD8u);
    ctx->pc = 0x2C8CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CD0u;
            // 0x2c8cd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CD8u; }
        if (ctx->pc != 0x2C8CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CD8u; }
        if (ctx->pc != 0x2C8CD8u) { return; }
    }
    ctx->pc = 0x2C8CD8u;
label_2c8cd8:
    // 0x2c8cd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2c8cdc:
    if (ctx->pc == 0x2C8CDCu) {
        ctx->pc = 0x2C8CDCu;
            // 0x2c8cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CE0u;
        goto label_2c8ce0;
    }
    ctx->pc = 0x2C8CD8u;
    {
        const bool branch_taken_0x2c8cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CD8u;
            // 0x2c8cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cd8) {
            ctx->pc = 0x2C8CF8u;
            goto label_2c8cf8;
        }
    }
    ctx->pc = 0x2C8CE0u;
label_2c8ce0:
    // 0x2c8ce0: 0xc0b22fc  jal         func_2C8BF0
label_2c8ce4:
    if (ctx->pc == 0x2C8CE4u) {
        ctx->pc = 0x2C8CE4u;
            // 0x2c8ce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CE8u;
        goto label_2c8ce8;
    }
    ctx->pc = 0x2C8CE0u;
    SET_GPR_U32(ctx, 31, 0x2C8CE8u);
    ctx->pc = 0x2C8CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CE0u;
            // 0x2c8ce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BF0u;
    if (runtime->hasFunction(0x2C8BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CE8u; }
        if (ctx->pc != 0x2C8CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawCharaShadow__6CSceneFi_0x2c8bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CE8u; }
        if (ctx->pc != 0x2C8CE8u) { return; }
    }
    ctx->pc = 0x2C8CE8u;
label_2c8ce8:
    // 0x2c8ce8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c8cec:
    if (ctx->pc == 0x2C8CECu) {
        ctx->pc = 0x2C8CECu;
            // 0x2c8cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CF0u;
        goto label_2c8cf0;
    }
    ctx->pc = 0x2C8CE8u;
    {
        const bool branch_taken_0x2c8ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CE8u;
            // 0x2c8cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ce8) {
            ctx->pc = 0x2C8CF8u;
            goto label_2c8cf8;
        }
    }
    ctx->pc = 0x2C8CF0u;
label_2c8cf0:
    // 0x2c8cf0: 0x10000018  b           . + 4 + (0x18 << 2)
label_2c8cf4:
    if (ctx->pc == 0x2C8CF4u) {
        ctx->pc = 0x2C8CF4u;
            // 0x2c8cf4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2C8CF8u;
        goto label_2c8cf8;
    }
    ctx->pc = 0x2C8CF0u;
    {
        const bool branch_taken_0x2c8cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CF0u;
            // 0x2c8cf4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cf0) {
            ctx->pc = 0x2C8D54u;
            goto label_2c8d54;
        }
    }
    ctx->pc = 0x2C8CF8u;
label_2c8cf8:
    // 0x2c8cf8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c8cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c8cfc:
    // 0x2c8cfc: 0xc64c2f78  lwc1        $f12, 0x2F78($s2)
    ctx->pc = 0x2c8cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c8d00:
    // 0x2c8d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d04:
    // 0x2c8d04: 0x8f3900dc  lw          $t9, 0xDC($t9)
    ctx->pc = 0x2c8d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 220)));
label_2c8d08:
    // 0x2c8d08: 0x320f809  jalr        $t9
label_2c8d0c:
    if (ctx->pc == 0x2C8D0Cu) {
        ctx->pc = 0x2C8D0Cu;
            // 0x2c8d0c: 0x26452f80  addiu       $a1, $s2, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12160));
        ctx->pc = 0x2C8D10u;
        goto label_2c8d10;
    }
    ctx->pc = 0x2C8D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8D10u);
        ctx->pc = 0x2C8D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D08u;
            // 0x2c8d0c: 0x26452f80  addiu       $a1, $s2, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8D10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D10u; }
            if (ctx->pc != 0x2C8D10u) { return; }
        }
        }
    }
    ctx->pc = 0x2C8D10u;
label_2c8d10:
    // 0x2c8d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d14:
    // 0x2c8d14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8d18:
    // 0x2c8d18: 0xc05d3d4  jal         func_174F50
label_2c8d1c:
    if (ctx->pc == 0x2C8D1Cu) {
        ctx->pc = 0x2C8D1Cu;
            // 0x2c8d1c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2C8D20u;
        goto label_2c8d20;
    }
    ctx->pc = 0x2C8D18u;
    SET_GPR_U32(ctx, 31, 0x2C8D20u);
    ctx->pc = 0x2C8D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D18u;
            // 0x2c8d1c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D20u; }
        if (ctx->pc != 0x2C8D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D20u; }
        if (ctx->pc != 0x2C8D20u) { return; }
    }
    ctx->pc = 0x2C8D20u;
label_2c8d20:
    // 0x2c8d20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c8d24:
    if (ctx->pc == 0x2C8D24u) {
        ctx->pc = 0x2C8D28u;
        goto label_2c8d28;
    }
    ctx->pc = 0x2C8D20u;
    {
        const bool branch_taken_0x2c8d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d20) {
            ctx->pc = 0x2C8D3Cu;
            goto label_2c8d3c;
        }
    }
    ctx->pc = 0x2C8D28u;
label_2c8d28:
    // 0x2c8d28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c8d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c8d2c:
    // 0x2c8d2c: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2c8d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c8d30:
    // 0x2c8d30: 0x8f3900e4  lw          $t9, 0xE4($t9)
    ctx->pc = 0x2c8d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 228)));
label_2c8d34:
    // 0x2c8d34: 0x320f809  jalr        $t9
label_2c8d38:
    if (ctx->pc == 0x2C8D38u) {
        ctx->pc = 0x2C8D38u;
            // 0x2c8d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D3Cu;
        goto label_2c8d3c;
    }
    ctx->pc = 0x2C8D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8D3Cu);
        ctx->pc = 0x2C8D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D34u;
            // 0x2c8d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8D3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D3Cu; }
            if (ctx->pc != 0x2C8D3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C8D3Cu;
label_2c8d3c:
    // 0x2c8d3c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c8d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c8d40:
    // 0x2c8d40: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2c8d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2c8d44:
    // 0x2c8d44: 0x320f809  jalr        $t9
label_2c8d48:
    if (ctx->pc == 0x2C8D48u) {
        ctx->pc = 0x2C8D48u;
            // 0x2c8d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D4Cu;
        goto label_2c8d4c;
    }
    ctx->pc = 0x2C8D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8D4Cu);
        ctx->pc = 0x2C8D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D44u;
            // 0x2c8d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8D4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8D4Cu; }
            if (ctx->pc != 0x2C8D4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C8D4Cu;
label_2c8d4c:
    // 0x2c8d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8d50:
    // 0x2c8d50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c8d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c8d54:
    // 0x2c8d54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8d58:
    // 0x2c8d58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8d58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8d5c:
    // 0x2c8d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8d60:
    // 0x2c8d60: 0x3e00008  jr          $ra
label_2c8d64:
    if (ctx->pc == 0x2C8D64u) {
        ctx->pc = 0x2C8D64u;
            // 0x2c8d64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C8D68u;
        goto label_fallthrough_0x2c8d60;
    }
    ctx->pc = 0x2C8D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D60u;
            // 0x2c8d64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c8d60:
    ctx->pc = 0x2C8D68u;
}
