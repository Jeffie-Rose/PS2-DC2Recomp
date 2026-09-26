#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_BALL_POS__FP12RS_STACKDATAi
// Address: 0x275d00 - 0x275d64
void ps2__SPHIDA_SET_BALL_POS__FP12RS_STACKDATAi_0x275d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_BALL_POS__FP12RS_STACKDATAi_0x275d00");
#endif

    switch (ctx->pc) {
        case 0x275d10u: goto label_275d10;
        case 0x275d20u: goto label_275d20;
        case 0x275d2cu: goto label_275d2c;
        case 0x275d54u: goto label_275d54;
        default: break;
    }

    ctx->pc = 0x275d00u;

    // 0x275d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275d08: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x275D08u;
    SET_GPR_U32(ctx, 31, 0x275D10u);
    ctx->pc = 0x275D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275D08u;
            // 0x275d0c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D10u; }
        if (ctx->pc != 0x275D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D10u; }
        if (ctx->pc != 0x275D10u) { return; }
    }
    ctx->pc = 0x275D10u;
label_275d10:
    // 0x275d10: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x275d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d14: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x275d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x275d18: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x275D18u;
    SET_GPR_U32(ctx, 31, 0x275D20u);
    ctx->pc = 0x275D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275D18u;
            // 0x275d1c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D20u; }
        if (ctx->pc != 0x275D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D20u; }
        if (ctx->pc != 0x275D20u) { return; }
    }
    ctx->pc = 0x275D20u;
label_275d20:
    // 0x275d20: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x275d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d24: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x275D24u;
    SET_GPR_U32(ctx, 31, 0x275D2Cu);
    ctx->pc = 0x275D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275D24u;
            // 0x275d28: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D2Cu; }
        if (ctx->pc != 0x275D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D2Cu; }
        if (ctx->pc != 0x275D2Cu) { return; }
    }
    ctx->pc = 0x275D2Cu;
label_275d2c:
    // 0x275d2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x275d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x275d30: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x275d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x275d34: 0x8f829ed4  lw          $v0, -0x612C($gp)
    ctx->pc = 0x275d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275d38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275D38u;
    {
        const bool branch_taken_0x275d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275D38u;
            // 0x275d3c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d38) {
            ctx->pc = 0x275D48u;
            goto label_275d48;
        }
    }
    ctx->pc = 0x275D40u;
    // 0x275d40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275D40u;
    {
        const bool branch_taken_0x275d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275D40u;
            // 0x275d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d40) {
            ctx->pc = 0x275D58u;
            goto label_275d58;
        }
    }
    ctx->pc = 0x275D48u;
label_275d48:
    // 0x275d48: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x275d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x275d4c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x275D4Cu;
    SET_GPR_U32(ctx, 31, 0x275D54u);
    ctx->pc = 0x275D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275D4Cu;
            // 0x275d50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D54u; }
        if (ctx->pc != 0x275D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D54u; }
        if (ctx->pc != 0x275D54u) { return; }
    }
    ctx->pc = 0x275D54u;
label_275d54:
    // 0x275d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275d58:
    // 0x275d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x275D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275D5Cu;
            // 0x275d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275D64u;
}
