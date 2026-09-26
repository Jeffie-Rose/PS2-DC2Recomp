#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: OpenSystemMes__FP6CSceneii
// Address: 0x2d89e0 - 0x2d8a58
void OpenSystemMes__FP6CSceneii_0x2d89e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OpenSystemMes__FP6CSceneii_0x2d89e0");
#endif

    switch (ctx->pc) {
        case 0x2d8a04u: goto label_2d8a04;
        case 0x2d8a18u: goto label_2d8a18;
        case 0x2d8a24u: goto label_2d8a24;
        case 0x2d8a30u: goto label_2d8a30;
        default: break;
    }

    ctx->pc = 0x2d89e0u;

    // 0x2d89e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d89e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d89e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d89e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d89e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d89e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d89ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d89ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d89f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d89f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d89f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d89f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d89f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d89f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d89fc: 0xc0a0e78  jal         func_2839E0
    ctx->pc = 0x2D89FCu;
    SET_GPR_U32(ctx, 31, 0x2D8A04u);
    ctx->pc = 0x2D8A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D89FCu;
            // 0x2d8a00: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2839E0u;
    if (runtime->hasFunction(0x2839E0u)) {
        auto targetFn = runtime->lookupFunction(0x2839E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A04u; }
        if (ctx->pc != 0x2D8A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMessage__6CSceneFi_0x2839e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A04u; }
        if (ctx->pc != 0x2D8A04u) { return; }
    }
    ctx->pc = 0x2D8A04u;
label_2d8a04:
    // 0x2d8a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d8a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a08: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8A08u;
    {
        const bool branch_taken_0x2d8a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A08u;
            // 0x2d8a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a08) {
            ctx->pc = 0x2D8A40u;
            goto label_2d8a40;
        }
    }
    ctx->pc = 0x2D8A10u;
    // 0x2d8a10: 0xc054bb4  jal         func_152ED0
    ctx->pc = 0x2D8A10u;
    SET_GPR_U32(ctx, 31, 0x2D8A18u);
    ctx->pc = 0x2D8A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A10u;
            // 0x2d8a14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A18u; }
        if (ctx->pc != 0x2D8A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A18u; }
        if (ctx->pc != 0x2D8A18u) { return; }
    }
    ctx->pc = 0x2D8A18u;
label_2d8a18:
    // 0x2d8a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a1c: 0xc054cdc  jal         func_153370
    ctx->pc = 0x2D8A1Cu;
    SET_GPR_U32(ctx, 31, 0x2D8A24u);
    ctx->pc = 0x2D8A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A1Cu;
            // 0x2d8a20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A24u; }
        if (ctx->pc != 0x2D8A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A24u; }
        if (ctx->pc != 0x2D8A24u) { return; }
    }
    ctx->pc = 0x2D8A24u;
label_2d8a24:
    // 0x2d8a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a28: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x2D8A28u;
    SET_GPR_U32(ctx, 31, 0x2D8A30u);
    ctx->pc = 0x2D8A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A28u;
            // 0x2d8a2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A30u; }
        if (ctx->pc != 0x2D8A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8A30u; }
        if (ctx->pc != 0x2D8A30u) { return; }
    }
    ctx->pc = 0x2D8A30u;
label_2d8a30:
    // 0x2d8a30: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2d8a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d8a34: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x2d8a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
    // 0x2d8a38: 0xaf919e98  sw          $s1, -0x6168($gp)
    ctx->pc = 0x2d8a38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942360), GPR_U32(ctx, 17));
    // 0x2d8a3c: 0xaf928554  sw          $s2, -0x7AAC($gp)
    ctx->pc = 0x2d8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 18));
label_2d8a40:
    // 0x2d8a40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d8a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8a44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d8a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8a50: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A50u;
            // 0x2d8a54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8A58u;
}
