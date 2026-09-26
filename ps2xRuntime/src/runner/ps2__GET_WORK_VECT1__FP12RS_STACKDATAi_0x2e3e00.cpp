#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_WORK_VECT1__FP12RS_STACKDATAi
// Address: 0x2e3e00 - 0x2e3e5c
void ps2__GET_WORK_VECT1__FP12RS_STACKDATAi_0x2e3e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_WORK_VECT1__FP12RS_STACKDATAi_0x2e3e00");
#endif

    switch (ctx->pc) {
        case 0x2e3e28u: goto label_2e3e28;
        case 0x2e3e3cu: goto label_2e3e3c;
        case 0x2e3e4cu: goto label_2e3e4c;
        default: break;
    }

    ctx->pc = 0x2e3e00u;

    // 0x2e3e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3e04: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3e08: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3E08u;
    {
        const bool branch_taken_0x2e3e08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E08u;
            // 0x2e3e0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e08) {
            ctx->pc = 0x2E3E18u;
            goto label_2e3e18;
        }
    }
    ctx->pc = 0x2E3E10u;
    // 0x2e3e10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E3E10u;
    {
        const bool branch_taken_0x2e3e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E10u;
            // 0x2e3e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e10) {
            ctx->pc = 0x2E3E50u;
            goto label_2e3e50;
        }
    }
    ctx->pc = 0x2E3E18u;
label_2e3e18:
    // 0x2e3e18: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3e1c: 0xc44c00f0  lwc1        $f12, 0xF0($v0)
    ctx->pc = 0x2e3e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3e20: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3E20u;
    SET_GPR_U32(ctx, 31, 0x2E3E28u);
    ctx->pc = 0x2E3E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E20u;
            // 0x2e3e24: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E28u; }
        if (ctx->pc != 0x2E3E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E28u; }
        if (ctx->pc != 0x2E3E28u) { return; }
    }
    ctx->pc = 0x2E3E28u;
label_2e3e28:
    // 0x2e3e28: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3e2c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e3e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e30: 0xc44c00f4  lwc1        $f12, 0xF4($v0)
    ctx->pc = 0x2e3e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3e34: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3E34u;
    SET_GPR_U32(ctx, 31, 0x2E3E3Cu);
    ctx->pc = 0x2E3E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E34u;
            // 0x2e3e38: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E3Cu; }
        if (ctx->pc != 0x2E3E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E3Cu; }
        if (ctx->pc != 0x2E3E3Cu) { return; }
    }
    ctx->pc = 0x2E3E3Cu;
label_2e3e3c:
    // 0x2e3e3c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3e40: 0xc44c00f8  lwc1        $f12, 0xF8($v0)
    ctx->pc = 0x2e3e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3e44: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3E44u;
    SET_GPR_U32(ctx, 31, 0x2E3E4Cu);
    ctx->pc = 0x2E3E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E44u;
            // 0x2e3e48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E4Cu; }
        if (ctx->pc != 0x2E3E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E4Cu; }
        if (ctx->pc != 0x2E3E4Cu) { return; }
    }
    ctx->pc = 0x2E3E4Cu;
label_2e3e4c:
    // 0x2e3e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3e50:
    // 0x2e3e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3e54: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E54u;
            // 0x2e3e58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3E5Cu;
}
