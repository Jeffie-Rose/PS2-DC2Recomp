#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCommandAnalyze__FPciPc
// Address: 0x254de0 - 0x254e54
void MenuCommandAnalyze__FPciPc_0x254de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCommandAnalyze__FPciPc_0x254de0");
#endif

    switch (ctx->pc) {
        case 0x254e10u: goto label_254e10;
        case 0x254e18u: goto label_254e18;
        case 0x254e28u: goto label_254e28;
        case 0x254e38u: goto label_254e38;
        case 0x254e40u: goto label_254e40;
        default: break;
    }

    ctx->pc = 0x254de0u;

    // 0x254de0: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x254de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x254de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x254de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x254df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254df4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x254DF4u;
    {
        const bool branch_taken_0x254df4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254DF4u;
            // 0x254df8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254df4) {
            ctx->pc = 0x254E40u;
            goto label_254e40;
        }
    }
    ctx->pc = 0x254DFCu;
    // 0x254dfc: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x254DFCu;
    {
        const bool branch_taken_0x254dfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254DFCu;
            // 0x254e00: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dfc) {
            ctx->pc = 0x254E40u;
            goto label_254e40;
        }
    }
    ctx->pc = 0x254E04u;
    // 0x254e04: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x254e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e08: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x254E08u;
    SET_GPR_U32(ctx, 31, 0x254E10u);
    ctx->pc = 0x254E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254E08u;
            // 0x254e0c: 0x2484e360  addiu       $a0, $a0, -0x1CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E10u; }
        if (ctx->pc != 0x254E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E10u; }
        if (ctx->pc != 0x254E10u) { return; }
    }
    ctx->pc = 0x254E10u;
label_254e10:
    // 0x254e10: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x254E10u;
    SET_GPR_U32(ctx, 31, 0x254E18u);
    ctx->pc = 0x254E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254E10u;
            // 0x254e14: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E18u; }
        if (ctx->pc != 0x254E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E18u; }
        if (ctx->pc != 0x254E18u) { return; }
    }
    ctx->pc = 0x254E18u;
label_254e18:
    // 0x254e18: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x254e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x254e1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x254e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254e20: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x254E20u;
    SET_GPR_U32(ctx, 31, 0x254E28u);
    ctx->pc = 0x254E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254E20u;
            // 0x254e24: 0x24a51960  addiu       $a1, $a1, 0x1960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E28u; }
        if (ctx->pc != 0x254E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E28u; }
        if (ctx->pc != 0x254E28u) { return; }
    }
    ctx->pc = 0x254E28u;
label_254e28:
    // 0x254e28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x254e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e30: 0xc051a60  jal         func_146980
    ctx->pc = 0x254E30u;
    SET_GPR_U32(ctx, 31, 0x254E38u);
    ctx->pc = 0x254E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254E30u;
            // 0x254e34: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E38u; }
        if (ctx->pc != 0x254E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E38u; }
        if (ctx->pc != 0x254E38u) { return; }
    }
    ctx->pc = 0x254E38u;
label_254e38:
    // 0x254e38: 0xc0519c8  jal         func_146720
    ctx->pc = 0x254E38u;
    SET_GPR_U32(ctx, 31, 0x254E40u);
    ctx->pc = 0x254E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254E38u;
            // 0x254e3c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E40u; }
        if (ctx->pc != 0x254E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254E40u; }
        if (ctx->pc != 0x254E40u) { return; }
    }
    ctx->pc = 0x254E40u;
label_254e40:
    // 0x254e40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x254e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x254E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254E4Cu;
            // 0x254e50: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254E54u;
}
