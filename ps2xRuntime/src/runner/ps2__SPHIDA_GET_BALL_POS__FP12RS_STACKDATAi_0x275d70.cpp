#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_BALL_POS__FP12RS_STACKDATAi
// Address: 0x275d70 - 0x275ddc
void ps2__SPHIDA_GET_BALL_POS__FP12RS_STACKDATAi_0x275d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_BALL_POS__FP12RS_STACKDATAi_0x275d70");
#endif

    switch (ctx->pc) {
        case 0x275d9cu: goto label_275d9c;
        case 0x275dacu: goto label_275dac;
        case 0x275dbcu: goto label_275dbc;
        case 0x275dc8u: goto label_275dc8;
        default: break;
    }

    ctx->pc = 0x275d70u;

    // 0x275d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275d7c: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x275d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275d80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275D80u;
    {
        const bool branch_taken_0x275d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275D80u;
            // 0x275d84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d80) {
            ctx->pc = 0x275D90u;
            goto label_275d90;
        }
    }
    ctx->pc = 0x275D88u;
    // 0x275d88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x275D88u;
    {
        const bool branch_taken_0x275d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275D88u;
            // 0x275d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d88) {
            ctx->pc = 0x275DCCu;
            goto label_275dcc;
        }
    }
    ctx->pc = 0x275D90u;
label_275d90:
    // 0x275d90: 0x244500a0  addiu       $a1, $v0, 0xA0
    ctx->pc = 0x275d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x275d94: 0xc041c5c  jal         func_107170
    ctx->pc = 0x275D94u;
    SET_GPR_U32(ctx, 31, 0x275D9Cu);
    ctx->pc = 0x275D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275D94u;
            // 0x275d98: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D9Cu; }
        if (ctx->pc != 0x275D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D9Cu; }
        if (ctx->pc != 0x275D9Cu) { return; }
    }
    ctx->pc = 0x275D9Cu;
label_275d9c:
    // 0x275d9c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x275d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275da4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x275DA4u;
    SET_GPR_U32(ctx, 31, 0x275DACu);
    ctx->pc = 0x275DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275DA4u;
            // 0x275da8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DACu; }
        if (ctx->pc != 0x275DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DACu; }
        if (ctx->pc != 0x275DACu) { return; }
    }
    ctx->pc = 0x275DACu;
label_275dac:
    // 0x275dac: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x275dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275db4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x275DB4u;
    SET_GPR_U32(ctx, 31, 0x275DBCu);
    ctx->pc = 0x275DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275DB4u;
            // 0x275db8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DBCu; }
        if (ctx->pc != 0x275DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DBCu; }
        if (ctx->pc != 0x275DBCu) { return; }
    }
    ctx->pc = 0x275DBCu;
label_275dbc:
    // 0x275dbc: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x275dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x275dc0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x275DC0u;
    SET_GPR_U32(ctx, 31, 0x275DC8u);
    ctx->pc = 0x275DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275DC0u;
            // 0x275dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DC8u; }
        if (ctx->pc != 0x275DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DC8u; }
        if (ctx->pc != 0x275DC8u) { return; }
    }
    ctx->pc = 0x275DC8u;
label_275dc8:
    // 0x275dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275dcc:
    // 0x275dcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x275DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275DD4u;
            // 0x275dd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275DDCu;
}
