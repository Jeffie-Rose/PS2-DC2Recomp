#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PLAY_BGM__FP12RS_STACKDATAi
// Address: 0x272de0 - 0x272e70
void ps2__PLAY_BGM__FP12RS_STACKDATAi_0x272de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PLAY_BGM__FP12RS_STACKDATAi_0x272de0");
#endif

    switch (ctx->pc) {
        case 0x272e10u: goto label_272e10;
        case 0x272e28u: goto label_272e28;
        case 0x272e38u: goto label_272e38;
        case 0x272e44u: goto label_272e44;
        case 0x272e5cu: goto label_272e5c;
        default: break;
    }

    ctx->pc = 0x272de0u;

    // 0x272de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272de4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272dec: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x272DECu;
    {
        const bool branch_taken_0x272dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x272DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272DECu;
            // 0x272df0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272dec) {
            ctx->pc = 0x272E30u;
            goto label_272e30;
        }
    }
    ctx->pc = 0x272DF4u;
    // 0x272df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272df8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272DF8u;
    {
        const bool branch_taken_0x272df8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x272df8) {
            ctx->pc = 0x272E08u;
            goto label_272e08;
        }
    }
    ctx->pc = 0x272E00u;
    // 0x272e00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x272E00u;
    {
        const bool branch_taken_0x272e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272E00u;
            // 0x272e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e00) {
            ctx->pc = 0x272E60u;
            goto label_272e60;
        }
    }
    ctx->pc = 0x272E08u;
label_272e08:
    // 0x272e08: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272E08u;
    SET_GPR_U32(ctx, 31, 0x272E10u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E10u; }
        if (ctx->pc != 0x272E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E10u; }
        if (ctx->pc != 0x272E10u) { return; }
    }
    ctx->pc = 0x272E10u;
label_272e10:
    // 0x272e10: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x272e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x272e14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x272e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272e1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x272e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272e20: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x272E20u;
    SET_GPR_U32(ctx, 31, 0x272E28u);
    ctx->pc = 0x272E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272E20u;
            // 0x272e24: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E28u; }
        if (ctx->pc != 0x272E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E28u; }
        if (ctx->pc != 0x272E28u) { return; }
    }
    ctx->pc = 0x272E28u;
label_272e28:
    // 0x272e28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x272E28u;
    {
        const bool branch_taken_0x272e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272E28u;
            // 0x272e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272e28) {
            ctx->pc = 0x272E60u;
            goto label_272e60;
        }
    }
    ctx->pc = 0x272E30u;
label_272e30:
    // 0x272e30: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272E30u;
    SET_GPR_U32(ctx, 31, 0x272E38u);
    ctx->pc = 0x272E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272E30u;
            // 0x272e34: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E38u; }
        if (ctx->pc != 0x272E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E38u; }
        if (ctx->pc != 0x272E38u) { return; }
    }
    ctx->pc = 0x272E38u;
label_272e38:
    // 0x272e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e3c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272E3Cu;
    SET_GPR_U32(ctx, 31, 0x272E44u);
    ctx->pc = 0x272E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272E3Cu;
            // 0x272e40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E44u; }
        if (ctx->pc != 0x272E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E44u; }
        if (ctx->pc != 0x272E44u) { return; }
    }
    ctx->pc = 0x272E44u;
label_272e44:
    // 0x272e44: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x272e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x272e48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x272e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272e4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x272e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272e50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x272e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272e54: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x272E54u;
    SET_GPR_U32(ctx, 31, 0x272E5Cu);
    ctx->pc = 0x272E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272E54u;
            // 0x272e58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E5Cu; }
        if (ctx->pc != 0x272E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272E5Cu; }
        if (ctx->pc != 0x272E5Cu) { return; }
    }
    ctx->pc = 0x272E5Cu;
label_272e5c:
    // 0x272e5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272e60:
    // 0x272e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272e68: 0x3e00008  jr          $ra
    ctx->pc = 0x272E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272E68u;
            // 0x272e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272E70u;
}
