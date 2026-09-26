#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadCfgFile__4CMapFPciP9mgCMemory
// Address: 0x164dd0 - 0x164e40
void LoadCfgFile__4CMapFPciP9mgCMemory_0x164dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadCfgFile__4CMapFPciP9mgCMemory_0x164dd0");
#endif

    switch (ctx->pc) {
        case 0x164e04u: goto label_164e04;
        case 0x164e14u: goto label_164e14;
        case 0x164e24u: goto label_164e24;
        case 0x164e2cu: goto label_164e2c;
        default: break;
    }

    ctx->pc = 0x164dd0u;

    // 0x164dd0: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x164dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x164dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164de0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x164de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164de4: 0xaf848914  sw          $a0, -0x76EC($gp)
    ctx->pc = 0x164de4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936852), GPR_U32(ctx, 4));
    // 0x164de8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x164de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164dec: 0xaf878920  sw          $a3, -0x76E0($gp)
    ctx->pc = 0x164decu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 7));
    // 0x164df0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x164df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x164df4: 0xaf808950  sw          $zero, -0x76B0($gp)
    ctx->pc = 0x164df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936912), GPR_U32(ctx, 0));
    // 0x164df8: 0xaf808954  sw          $zero, -0x76AC($gp)
    ctx->pc = 0x164df8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936916), GPR_U32(ctx, 0));
    // 0x164dfc: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x164DFCu;
    SET_GPR_U32(ctx, 31, 0x164E04u);
    ctx->pc = 0x164E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164DFCu;
            // 0x164e00: 0xaf808958  sw          $zero, -0x76A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E04u; }
        if (ctx->pc != 0x164E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E04u; }
        if (ctx->pc != 0x164E04u) { return; }
    }
    ctx->pc = 0x164E04u;
label_164e04:
    // 0x164e04: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x164e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x164e08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x164e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x164e0c: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x164E0Cu;
    SET_GPR_U32(ctx, 31, 0x164E14u);
    ctx->pc = 0x164E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E0Cu;
            // 0x164e10: 0x24a549f0  addiu       $a1, $a1, 0x49F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E14u; }
        if (ctx->pc != 0x164E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E14u; }
        if (ctx->pc != 0x164E14u) { return; }
    }
    ctx->pc = 0x164E14u;
label_164e14:
    // 0x164e14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x164e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e1c: 0xc051a60  jal         func_146980
    ctx->pc = 0x164E1Cu;
    SET_GPR_U32(ctx, 31, 0x164E24u);
    ctx->pc = 0x164E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E1Cu;
            // 0x164e20: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E24u; }
        if (ctx->pc != 0x164E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E24u; }
        if (ctx->pc != 0x164E24u) { return; }
    }
    ctx->pc = 0x164E24u;
label_164e24:
    // 0x164e24: 0xc0519c8  jal         func_146720
    ctx->pc = 0x164E24u;
    SET_GPR_U32(ctx, 31, 0x164E2Cu);
    ctx->pc = 0x164E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164E24u;
            // 0x164e28: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E2Cu; }
        if (ctx->pc != 0x164E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164E2Cu; }
        if (ctx->pc != 0x164E2Cu) { return; }
    }
    ctx->pc = 0x164E2Cu;
label_164e2c:
    // 0x164e2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x164e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164e38: 0x3e00008  jr          $ra
    ctx->pc = 0x164E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164E38u;
            // 0x164e3c: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164E40u;
}
