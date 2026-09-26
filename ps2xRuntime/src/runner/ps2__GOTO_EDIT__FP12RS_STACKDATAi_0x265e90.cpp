#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_EDIT__FP12RS_STACKDATAi
// Address: 0x265e90 - 0x265f30
void ps2__GOTO_EDIT__FP12RS_STACKDATAi_0x265e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_EDIT__FP12RS_STACKDATAi_0x265e90");
#endif

    switch (ctx->pc) {
        case 0x265eb0u: goto label_265eb0;
        case 0x265eccu: goto label_265ecc;
        case 0x265ed8u: goto label_265ed8;
        case 0x265ef8u: goto label_265ef8;
        case 0x265f08u: goto label_265f08;
        default: break;
    }

    ctx->pc = 0x265e90u;

    // 0x265e90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x265e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x265e94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x265e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x265e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x265e9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265ea0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x265ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ea4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x265ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ea8: 0xc098828  jal         func_2620A0
    ctx->pc = 0x265EA8u;
    SET_GPR_U32(ctx, 31, 0x265EB0u);
    ctx->pc = 0x265EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265EA8u;
            // 0x265eac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2620A0u;
    if (runtime->hasFunction(0x2620A0u)) {
        auto targetFn = runtime->lookupFunction(0x2620A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EB0u; }
        if (ctx->pc != 0x265EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventFinish__Fv_0x2620a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EB0u; }
        if (ctx->pc != 0x265EB0u) { return; }
    }
    ctx->pc = 0x265EB0u;
label_265eb0:
    // 0x265eb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265EB0u;
    {
        const bool branch_taken_0x265eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265EB0u;
            // 0x265eb4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265eb0) {
            ctx->pc = 0x265EC0u;
            goto label_265ec0;
        }
    }
    ctx->pc = 0x265EB8u;
    // 0x265eb8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x265EB8u;
    {
        const bool branch_taken_0x265eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265EB8u;
            // 0x265ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265eb8) {
            ctx->pc = 0x265F18u;
            goto label_265f18;
        }
    }
    ctx->pc = 0x265EC0u;
label_265ec0:
    // 0x265ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ec4: 0xc049c86  jal         func_127218
    ctx->pc = 0x265EC4u;
    SET_GPR_U32(ctx, 31, 0x265ECCu);
    ctx->pc = 0x265EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265EC4u;
            // 0x265ec8: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265ECCu; }
        if (ctx->pc != 0x265ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265ECCu; }
        if (ctx->pc != 0x265ECCu) { return; }
    }
    ctx->pc = 0x265ECCu;
label_265ecc:
    // 0x265ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x265eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ed0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265ED0u;
    SET_GPR_U32(ctx, 31, 0x265ED8u);
    ctx->pc = 0x265ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265ED0u;
            // 0x265ed4: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265ED8u; }
        if (ctx->pc != 0x265ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265ED8u; }
        if (ctx->pc != 0x265ED8u) { return; }
    }
    ctx->pc = 0x265ED8u;
label_265ed8:
    // 0x265ed8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x265ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x265edc: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x265edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x265ee0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x265ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ee4: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x265ee4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x265ee8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x265EE8u;
    {
        const bool branch_taken_0x265ee8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x265EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265EE8u;
            // 0x265eec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265ee8) {
            ctx->pc = 0x265EFCu;
            goto label_265efc;
        }
    }
    ctx->pc = 0x265EF0u;
    // 0x265ef0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265EF0u;
    SET_GPR_U32(ctx, 31, 0x265EF8u);
    ctx->pc = 0x265EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265EF0u;
            // 0x265ef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EF8u; }
        if (ctx->pc != 0x265EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265EF8u; }
        if (ctx->pc != 0x265EF8u) { return; }
    }
    ctx->pc = 0x265EF8u;
label_265ef8:
    // 0x265ef8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x265ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_265efc:
    // 0x265efc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x265efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265f00: 0xc064240  jal         func_190900
    ctx->pc = 0x265F00u;
    SET_GPR_U32(ctx, 31, 0x265F08u);
    ctx->pc = 0x265F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265F00u;
            // 0x265f04: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F08u; }
        if (ctx->pc != 0x265F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265F08u; }
        if (ctx->pc != 0x265F08u) { return; }
    }
    ctx->pc = 0x265F08u;
label_265f08:
    // 0x265f08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x265f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265f0c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x265f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x265f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265f14: 0xac23e4fc  sw          $v1, -0x1B04($at)
    ctx->pc = 0x265f14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 3));
label_265f18:
    // 0x265f18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x265f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265f1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265f20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265f28: 0x3e00008  jr          $ra
    ctx->pc = 0x265F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265F28u;
            // 0x265f2c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265F30u;
}
