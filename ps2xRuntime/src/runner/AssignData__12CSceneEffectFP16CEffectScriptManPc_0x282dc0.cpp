#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignData__12CSceneEffectFP16CEffectScriptManPc
// Address: 0x282dc0 - 0x282e3c
void AssignData__12CSceneEffectFP16CEffectScriptManPc_0x282dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignData__12CSceneEffectFP16CEffectScriptManPc_0x282dc0");
#endif

    switch (ctx->pc) {
        case 0x282df4u: goto label_282df4;
        case 0x282e14u: goto label_282e14;
        default: break;
    }

    ctx->pc = 0x282dc0u;

    // 0x282dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282dc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x282dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282dd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x282dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282dd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282dd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x282dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ddc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282DDCu;
    {
        const bool branch_taken_0x282ddc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x282DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282DDCu;
            // 0x282de0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ddc) {
            ctx->pc = 0x282DECu;
            goto label_282dec;
        }
    }
    ctx->pc = 0x282DE4u;
    // 0x282de4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x282DE4u;
    {
        const bool branch_taken_0x282de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282DE4u;
            // 0x282de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282de4) {
            ctx->pc = 0x282E24u;
            goto label_282e24;
        }
    }
    ctx->pc = 0x282DECu;
label_282dec:
    // 0x282dec: 0xc0a0b6c  jal         func_282DB0
    ctx->pc = 0x282DECu;
    SET_GPR_U32(ctx, 31, 0x282DF4u);
    ctx->pc = 0x282DB0u;
    if (runtime->hasFunction(0x282DB0u)) {
        auto targetFn = runtime->lookupFunction(0x282DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DF4u; }
        if (ctx->pc != 0x282DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneEffectFv_0x282db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DF4u; }
        if (ctx->pc != 0x282DF4u) { return; }
    }
    ctx->pc = 0x282DF4u;
label_282df4:
    // 0x282df4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x282df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x282df8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282DF8u;
    {
        const bool branch_taken_0x282df8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x282DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282DF8u;
            // 0x282dfc: 0xae510034  sw          $s1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282df8) {
            ctx->pc = 0x282E08u;
            goto label_282e08;
        }
    }
    ctx->pc = 0x282E00u;
    // 0x282e00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282E00u;
    {
        const bool branch_taken_0x282e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E00u;
            // 0x282e04: 0xa2400008  sb          $zero, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e00) {
            ctx->pc = 0x282E14u;
            goto label_282e14;
        }
    }
    ctx->pc = 0x282E08u;
label_282e08:
    // 0x282e08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x282e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e0c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x282E0Cu;
    SET_GPR_U32(ctx, 31, 0x282E14u);
    ctx->pc = 0x282E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282E0Cu;
            // 0x282e10: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E14u; }
        if (ctx->pc != 0x282E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E14u; }
        if (ctx->pc != 0x282E14u) { return; }
    }
    ctx->pc = 0x282E14u;
label_282e14:
    // 0x282e14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x282e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x282e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282e1c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x282e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x282e20: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x282e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_282e24:
    // 0x282e24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x282e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282e34: 0x3e00008  jr          $ra
    ctx->pc = 0x282E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E34u;
            // 0x282e38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282E3Cu;
}
