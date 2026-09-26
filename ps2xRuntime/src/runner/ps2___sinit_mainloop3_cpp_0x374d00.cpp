#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_mainloop3.cpp
// Address: 0x374d00 - 0x374d50
void ps2___sinit_mainloop3_cpp_0x374d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_mainloop3_cpp_0x374d00");
#endif

    switch (ctx->pc) {
        case 0x374d14u: goto label_374d14;
        case 0x374d20u: goto label_374d20;
        case 0x374d2cu: goto label_374d2c;
        case 0x374d38u: goto label_374d38;
        case 0x374d44u: goto label_374d44;
        default: break;
    }

    ctx->pc = 0x374d00u;

    // 0x374d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374d04: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374d0c: 0xc04e640  jal         func_139900
    ctx->pc = 0x374D0Cu;
    SET_GPR_U32(ctx, 31, 0x374D14u);
    ctx->pc = 0x374D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374D0Cu;
            // 0x374d10: 0x248447d0  addiu       $a0, $a0, 0x47D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D14u; }
        if (ctx->pc != 0x374D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D14u; }
        if (ctx->pc != 0x374D14u) { return; }
    }
    ctx->pc = 0x374D14u;
label_374d14:
    // 0x374d14: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374d18: 0xc04e640  jal         func_139900
    ctx->pc = 0x374D18u;
    SET_GPR_U32(ctx, 31, 0x374D20u);
    ctx->pc = 0x374D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374D18u;
            // 0x374d1c: 0x24844800  addiu       $a0, $a0, 0x4800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D20u; }
        if (ctx->pc != 0x374D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D20u; }
        if (ctx->pc != 0x374D20u) { return; }
    }
    ctx->pc = 0x374D20u;
label_374d20:
    // 0x374d20: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374d24: 0xc04e640  jal         func_139900
    ctx->pc = 0x374D24u;
    SET_GPR_U32(ctx, 31, 0x374D2Cu);
    ctx->pc = 0x374D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374D24u;
            // 0x374d28: 0x24844830  addiu       $a0, $a0, 0x4830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D2Cu; }
        if (ctx->pc != 0x374D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D2Cu; }
        if (ctx->pc != 0x374D2Cu) { return; }
    }
    ctx->pc = 0x374D2Cu;
label_374d2c:
    // 0x374d2c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374d30: 0xc04e640  jal         func_139900
    ctx->pc = 0x374D30u;
    SET_GPR_U32(ctx, 31, 0x374D38u);
    ctx->pc = 0x374D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374D30u;
            // 0x374d34: 0x24844860  addiu       $a0, $a0, 0x4860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D38u; }
        if (ctx->pc != 0x374D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D38u; }
        if (ctx->pc != 0x374D38u) { return; }
    }
    ctx->pc = 0x374D38u;
label_374d38:
    // 0x374d38: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374d3c: 0xc04e640  jal         func_139900
    ctx->pc = 0x374D3Cu;
    SET_GPR_U32(ctx, 31, 0x374D44u);
    ctx->pc = 0x374D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374D3Cu;
            // 0x374d40: 0x24844890  addiu       $a0, $a0, 0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D44u; }
        if (ctx->pc != 0x374D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374D44u; }
        if (ctx->pc != 0x374D44u) { return; }
    }
    ctx->pc = 0x374D44u;
label_374d44:
    // 0x374d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374d48: 0x3e00008  jr          $ra
    ctx->pc = 0x374D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374D48u;
            // 0x374d4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374D50u;
}
