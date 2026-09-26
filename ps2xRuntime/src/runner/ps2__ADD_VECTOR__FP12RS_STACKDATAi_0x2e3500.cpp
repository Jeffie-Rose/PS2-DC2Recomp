#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_VECTOR__FP12RS_STACKDATAi
// Address: 0x2e3500 - 0x2e3580
void ps2__ADD_VECTOR__FP12RS_STACKDATAi_0x2e3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_VECTOR__FP12RS_STACKDATAi_0x2e3500");
#endif

    switch (ctx->pc) {
        case 0x2e3528u: goto label_2e3528;
        case 0x2e3540u: goto label_2e3540;
        case 0x2e3558u: goto label_2e3558;
        case 0x2e3570u: goto label_2e3570;
        default: break;
    }

    ctx->pc = 0x2e3500u;

    // 0x2e3500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3504: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e3504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e3508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e350c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E350Cu;
    {
        const bool branch_taken_0x2e350c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E350Cu;
            // 0x2e3510: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e350c) {
            ctx->pc = 0x2E351Cu;
            goto label_2e351c;
        }
    }
    ctx->pc = 0x2E3514u;
    // 0x2e3514: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E3514u;
    {
        const bool branch_taken_0x2e3514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3514u;
            // 0x2e3518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3514) {
            ctx->pc = 0x2E3574u;
            goto label_2e3574;
        }
    }
    ctx->pc = 0x2E351Cu;
label_2e351c:
    // 0x2e351c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e351cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e3520: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E3520u;
    SET_GPR_U32(ctx, 31, 0x2E3528u);
    ctx->pc = 0x2E3524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3520u;
            // 0x2e3524: 0x24e50018  addiu       $a1, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3528u; }
        if (ctx->pc != 0x2E3528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3528u; }
        if (ctx->pc != 0x2E3528u) { return; }
    }
    ctx->pc = 0x2E3528u;
label_2e3528:
    // 0x2e3528: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2e3528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e352c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e352cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3530: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e3530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3534: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e3534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3538: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3538u;
    SET_GPR_U32(ctx, 31, 0x2E3540u);
    ctx->pc = 0x2E353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3538u;
            // 0x2e353c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3540u; }
        if (ctx->pc != 0x2E3540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3540u; }
        if (ctx->pc != 0x2E3540u) { return; }
    }
    ctx->pc = 0x2E3540u;
label_2e3540:
    // 0x2e3540: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2e3540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2e3544: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2e3544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3548: 0x24e40008  addiu       $a0, $a3, 0x8
    ctx->pc = 0x2e3548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2e354c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e354cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3550: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3550u;
    SET_GPR_U32(ctx, 31, 0x2E3558u);
    ctx->pc = 0x2E3554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3550u;
            // 0x2e3554: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3558u; }
        if (ctx->pc != 0x2E3558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3558u; }
        if (ctx->pc != 0x2E3558u) { return; }
    }
    ctx->pc = 0x2E3558u;
label_2e3558:
    // 0x2e3558: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2e3558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2e355c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3560: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x2e3560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2e3564: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3568: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3568u;
    SET_GPR_U32(ctx, 31, 0x2E3570u);
    ctx->pc = 0x2E356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3568u;
            // 0x2e356c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3570u; }
        if (ctx->pc != 0x2E3570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3570u; }
        if (ctx->pc != 0x2E3570u) { return; }
    }
    ctx->pc = 0x2E3570u;
label_2e3570:
    // 0x2e3570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3574:
    // 0x2e3574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3578: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E357Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3578u;
            // 0x2e357c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3580u;
}
