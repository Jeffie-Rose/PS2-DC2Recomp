#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SWORD_EFFECT_ADD_POINT__FP12RS_STACKDATAi
// Address: 0x2770b0 - 0x277128
void ps2__SWORD_EFFECT_ADD_POINT__FP12RS_STACKDATAi_0x2770b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SWORD_EFFECT_ADD_POINT__FP12RS_STACKDATAi_0x2770b0");
#endif

    switch (ctx->pc) {
        case 0x2770e4u: goto label_2770e4;
        case 0x2770f0u: goto label_2770f0;
        case 0x277104u: goto label_277104;
        case 0x277118u: goto label_277118;
        default: break;
    }

    ctx->pc = 0x2770b0u;

    // 0x2770b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2770b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2770b4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2770b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2770b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2770b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2770bc: 0x8f8297e8  lw          $v0, -0x6818($gp)
    ctx->pc = 0x2770bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940648)));
    // 0x2770c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2770C0u;
    {
        const bool branch_taken_0x2770c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2770C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2770C0u;
            // 0x2770c4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770c0) {
            ctx->pc = 0x2770D0u;
            goto label_2770d0;
        }
    }
    ctx->pc = 0x2770C8u;
    // 0x2770c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2770C8u;
    {
        const bool branch_taken_0x2770c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2770CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2770C8u;
            // 0x2770cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770c8) {
            ctx->pc = 0x27711Cu;
            goto label_27711c;
        }
    }
    ctx->pc = 0x2770D0u;
label_2770d0:
    // 0x2770d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2770d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2770d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2770d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2770d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2770d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2770dc: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2770DCu;
    SET_GPR_U32(ctx, 31, 0x2770E4u);
    ctx->pc = 0x2770E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2770DCu;
            // 0x2770e0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2770E4u; }
        if (ctx->pc != 0x2770E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2770E4u; }
        if (ctx->pc != 0x2770E4u) { return; }
    }
    ctx->pc = 0x2770E4u;
label_2770e4:
    // 0x2770e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2770e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2770e8: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2770E8u;
    SET_GPR_U32(ctx, 31, 0x2770F0u);
    ctx->pc = 0x2770ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2770E8u;
            // 0x2770ec: 0x25050018  addiu       $a1, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2770F0u; }
        if (ctx->pc != 0x2770F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2770F0u; }
        if (ctx->pc != 0x2770F0u) { return; }
    }
    ctx->pc = 0x2770F0u;
label_2770f0:
    // 0x2770f0: 0x28e20007  slti        $v0, $a3, 0x7
    ctx->pc = 0x2770f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2770f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2770F4u;
    {
        const bool branch_taken_0x2770f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2770F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2770F4u;
            // 0x2770f8: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770f4) {
            ctx->pc = 0x277108u;
            goto label_277108;
        }
    }
    ctx->pc = 0x2770FCu;
    // 0x2770fc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2770FCu;
    SET_GPR_U32(ctx, 31, 0x277104u);
    ctx->pc = 0x277100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2770FCu;
            // 0x277100: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277104u; }
        if (ctx->pc != 0x277104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277104u; }
        if (ctx->pc != 0x277104u) { return; }
    }
    ctx->pc = 0x277104u;
label_277104:
    // 0x277104: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x277104u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_277108:
    // 0x277108: 0x8f8497e8  lw          $a0, -0x6818($gp)
    ctx->pc = 0x277108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940648)));
    // 0x27710c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x27710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x277110: 0xc07082c  jal         func_1C20B0
    ctx->pc = 0x277110u;
    SET_GPR_U32(ctx, 31, 0x277118u);
    ctx->pc = 0x277114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277110u;
            // 0x277114: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    if (runtime->hasFunction(0x1C20B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C20B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277118u; }
        if (ctx->pc != 0x277118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__16CSWordAfterImageFPfPff_0x1c20b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277118u; }
        if (ctx->pc != 0x277118u) { return; }
    }
    ctx->pc = 0x277118u;
label_277118:
    // 0x277118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27711c:
    // 0x27711c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27711cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277120: 0x3e00008  jr          $ra
    ctx->pc = 0x277120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277120u;
            // 0x277124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277128u;
}
