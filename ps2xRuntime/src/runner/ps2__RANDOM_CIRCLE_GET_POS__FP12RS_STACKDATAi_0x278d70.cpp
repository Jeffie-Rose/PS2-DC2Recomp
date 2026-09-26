#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RANDOM_CIRCLE_GET_POS__FP12RS_STACKDATAi
// Address: 0x278d70 - 0x278dec
void ps2__RANDOM_CIRCLE_GET_POS__FP12RS_STACKDATAi_0x278d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RANDOM_CIRCLE_GET_POS__FP12RS_STACKDATAi_0x278d70");
#endif

    switch (ctx->pc) {
        case 0x278d84u: goto label_278d84;
        case 0x278d98u: goto label_278d98;
        case 0x278dbcu: goto label_278dbc;
        case 0x278dccu: goto label_278dcc;
        case 0x278dd8u: goto label_278dd8;
        default: break;
    }

    ctx->pc = 0x278d70u;

    // 0x278d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278d7c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278D7Cu;
    SET_GPR_U32(ctx, 31, 0x278D84u);
    ctx->pc = 0x278D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D7Cu;
            // 0x278d80: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D84u; }
        if (ctx->pc != 0x278D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D84u; }
        if (ctx->pc != 0x278D84u) { return; }
    }
    ctx->pc = 0x278D84u;
label_278d84:
    // 0x278d84: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x278d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x278d88: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x278d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278d8c: 0x24844b20  addiu       $a0, $a0, 0x4B20
    ctx->pc = 0x278d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
    // 0x278d90: 0xc0a2fe8  jal         func_28BFA0
    ctx->pc = 0x278D90u;
    SET_GPR_U32(ctx, 31, 0x278D98u);
    ctx->pc = 0x278D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D90u;
            // 0x278d94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BFA0u;
    if (runtime->hasFunction(0x28BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x28BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D98u; }
        if (ctx->pc != 0x278D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosition__13CRandomCircleFPfi_0x28bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D98u; }
        if (ctx->pc != 0x278D98u) { return; }
    }
    ctx->pc = 0x278D98u;
label_278d98:
    // 0x278d98: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x278d98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x278d9c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x278D9Cu;
    {
        const bool branch_taken_0x278d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D9Cu;
            // 0x278da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d9c) {
            ctx->pc = 0x278DACu;
            goto label_278dac;
        }
    }
    ctx->pc = 0x278DA4u;
    // 0x278da4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x278DA4u;
    {
        const bool branch_taken_0x278da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278DA4u;
            // 0x278da8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278da4) {
            ctx->pc = 0x278DE0u;
            goto label_278de0;
        }
    }
    ctx->pc = 0x278DACu;
label_278dac:
    // 0x278dac: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x278dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278db4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278DB4u;
    SET_GPR_U32(ctx, 31, 0x278DBCu);
    ctx->pc = 0x278DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278DB4u;
            // 0x278db8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278DBCu; }
        if (ctx->pc != 0x278DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278DBCu; }
        if (ctx->pc != 0x278DBCu) { return; }
    }
    ctx->pc = 0x278DBCu;
label_278dbc:
    // 0x278dbc: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x278dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278dc4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278DC4u;
    SET_GPR_U32(ctx, 31, 0x278DCCu);
    ctx->pc = 0x278DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278DC4u;
            // 0x278dc8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278DCCu; }
        if (ctx->pc != 0x278DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278DCCu; }
        if (ctx->pc != 0x278DCCu) { return; }
    }
    ctx->pc = 0x278DCCu;
label_278dcc:
    // 0x278dcc: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x278dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278dd0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278DD0u;
    SET_GPR_U32(ctx, 31, 0x278DD8u);
    ctx->pc = 0x278DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278DD0u;
            // 0x278dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278DD8u; }
        if (ctx->pc != 0x278DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278DD8u; }
        if (ctx->pc != 0x278DD8u) { return; }
    }
    ctx->pc = 0x278DD8u;
label_278dd8:
    // 0x278dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_278de0:
    // 0x278de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278de4: 0x3e00008  jr          $ra
    ctx->pc = 0x278DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278DE4u;
            // 0x278de8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278DECu;
}
