#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_INTERIOR__FP12RS_STACKDATAi
// Address: 0x262ce0 - 0x262d94
void ps2__GOTO_INTERIOR__FP12RS_STACKDATAi_0x262ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_INTERIOR__FP12RS_STACKDATAi_0x262ce0");
#endif

    switch (ctx->pc) {
        case 0x262cfcu: goto label_262cfc;
        case 0x262d10u: goto label_262d10;
        case 0x262d20u: goto label_262d20;
        case 0x262d38u: goto label_262d38;
        case 0x262d60u: goto label_262d60;
        default: break;
    }

    ctx->pc = 0x262ce0u;

    // 0x262ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262cf0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x262cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x262cf4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x262CF4u;
    SET_GPR_U32(ctx, 31, 0x262CFCu);
    ctx->pc = 0x262CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262CF4u;
            // 0x262cf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262CFCu; }
        if (ctx->pc != 0x262CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262CFCu; }
        if (ctx->pc != 0x262CFCu) { return; }
    }
    ctx->pc = 0x262CFCu;
label_262cfc:
    // 0x262cfc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d04: 0xac22e494  sw          $v0, -0x1B6C($at)
    ctx->pc = 0x262d04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960276), GPR_U32(ctx, 2));
    // 0x262d08: 0xc097e48  jal         func_25F920
    ctx->pc = 0x262D08u;
    SET_GPR_U32(ctx, 31, 0x262D10u);
    ctx->pc = 0x262D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262D08u;
            // 0x262d0c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D10u; }
        if (ctx->pc != 0x262D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D10u; }
        if (ctx->pc != 0x262D10u) { return; }
    }
    ctx->pc = 0x262D10u;
label_262d10:
    // 0x262d10: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x262d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x262d14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x262d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d18: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x262D18u;
    SET_GPR_U32(ctx, 31, 0x262D20u);
    ctx->pc = 0x262D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262D18u;
            // 0x262d1c: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D20u; }
        if (ctx->pc != 0x262D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D20u; }
        if (ctx->pc != 0x262D20u) { return; }
    }
    ctx->pc = 0x262D20u;
label_262d20:
    // 0x262d20: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x262d20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x262d24: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x262D24u;
    {
        const bool branch_taken_0x262d24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x262D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D24u;
            // 0x262d28: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d24) {
            ctx->pc = 0x262D44u;
            goto label_262d44;
        }
    }
    ctx->pc = 0x262D2Cu;
    // 0x262d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d30: 0xc097e18  jal         func_25F860
    ctx->pc = 0x262D30u;
    SET_GPR_U32(ctx, 31, 0x262D38u);
    ctx->pc = 0x262D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262D30u;
            // 0x262d34: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D38u; }
        if (ctx->pc != 0x262D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D38u; }
        if (ctx->pc != 0x262D38u) { return; }
    }
    ctx->pc = 0x262D38u;
label_262d38:
    // 0x262d38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262d3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262D3Cu;
    {
        const bool branch_taken_0x262d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D3Cu;
            // 0x262d40: 0xac22e4b8  sw          $v0, -0x1B48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d3c) {
            ctx->pc = 0x262D4Cu;
            goto label_262d4c;
        }
    }
    ctx->pc = 0x262D44u;
label_262d44:
    // 0x262d44: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262d48: 0xac22e4b8  sw          $v0, -0x1B48($at)
    ctx->pc = 0x262d48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
label_262d4c:
    // 0x262d4c: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x262d4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x262d50: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x262D50u;
    {
        const bool branch_taken_0x262d50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x262D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D50u;
            // 0x262d54: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d50) {
            ctx->pc = 0x262D6Cu;
            goto label_262d6c;
        }
    }
    ctx->pc = 0x262D58u;
    // 0x262d58: 0xc097e18  jal         func_25F860
    ctx->pc = 0x262D58u;
    SET_GPR_U32(ctx, 31, 0x262D60u);
    ctx->pc = 0x262D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262D58u;
            // 0x262d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D60u; }
        if (ctx->pc != 0x262D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D60u; }
        if (ctx->pc != 0x262D60u) { return; }
    }
    ctx->pc = 0x262D60u;
label_262d60:
    // 0x262d60: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262d64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x262D64u;
    {
        const bool branch_taken_0x262d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D64u;
            // 0x262d68: 0xac22e5fc  sw          $v0, -0x1A04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d64) {
            ctx->pc = 0x262D70u;
            goto label_262d70;
        }
    }
    ctx->pc = 0x262D6Cu;
label_262d6c:
    // 0x262d6c: 0xac20e5fc  sw          $zero, -0x1A04($at)
    ctx->pc = 0x262d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960636), GPR_U32(ctx, 0));
label_262d70:
    // 0x262d70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x262d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x262d74: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262d78: 0xac23e4fc  sw          $v1, -0x1B04($at)
    ctx->pc = 0x262d78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 3));
    // 0x262d7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x262D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D8Cu;
            // 0x262d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262D94u;
}
