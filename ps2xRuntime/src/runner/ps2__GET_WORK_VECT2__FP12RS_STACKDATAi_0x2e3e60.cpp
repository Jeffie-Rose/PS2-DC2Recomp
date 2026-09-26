#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_WORK_VECT2__FP12RS_STACKDATAi
// Address: 0x2e3e60 - 0x2e3ebc
void ps2__GET_WORK_VECT2__FP12RS_STACKDATAi_0x2e3e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_WORK_VECT2__FP12RS_STACKDATAi_0x2e3e60");
#endif

    switch (ctx->pc) {
        case 0x2e3e88u: goto label_2e3e88;
        case 0x2e3e9cu: goto label_2e3e9c;
        case 0x2e3eacu: goto label_2e3eac;
        default: break;
    }

    ctx->pc = 0x2e3e60u;

    // 0x2e3e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3e64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3e68: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3E68u;
    {
        const bool branch_taken_0x2e3e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E68u;
            // 0x2e3e6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e68) {
            ctx->pc = 0x2E3E78u;
            goto label_2e3e78;
        }
    }
    ctx->pc = 0x2E3E70u;
    // 0x2e3e70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E3E70u;
    {
        const bool branch_taken_0x2e3e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E70u;
            // 0x2e3e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3e70) {
            ctx->pc = 0x2E3EB0u;
            goto label_2e3eb0;
        }
    }
    ctx->pc = 0x2E3E78u;
label_2e3e78:
    // 0x2e3e78: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3e7c: 0xc44c0100  lwc1        $f12, 0x100($v0)
    ctx->pc = 0x2e3e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3e80: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3E80u;
    SET_GPR_U32(ctx, 31, 0x2E3E88u);
    ctx->pc = 0x2E3E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E80u;
            // 0x2e3e84: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E88u; }
        if (ctx->pc != 0x2E3E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E88u; }
        if (ctx->pc != 0x2E3E88u) { return; }
    }
    ctx->pc = 0x2E3E88u;
label_2e3e88:
    // 0x2e3e88: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3e8c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e3e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e90: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x2e3e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3e94: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3E94u;
    SET_GPR_U32(ctx, 31, 0x2E3E9Cu);
    ctx->pc = 0x2E3E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3E94u;
            // 0x2e3e98: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E9Cu; }
        if (ctx->pc != 0x2E3E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3E9Cu; }
        if (ctx->pc != 0x2E3E9Cu) { return; }
    }
    ctx->pc = 0x2E3E9Cu;
label_2e3e9c:
    // 0x2e3e9c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3ea0: 0xc44c0108  lwc1        $f12, 0x108($v0)
    ctx->pc = 0x2e3ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3ea4: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3EA4u;
    SET_GPR_U32(ctx, 31, 0x2E3EACu);
    ctx->pc = 0x2E3EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EA4u;
            // 0x2e3ea8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3EACu; }
        if (ctx->pc != 0x2E3EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3EACu; }
        if (ctx->pc != 0x2E3EACu) { return; }
    }
    ctx->pc = 0x2E3EACu;
label_2e3eac:
    // 0x2e3eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3eb0:
    // 0x2e3eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3EB4u;
            // 0x2e3eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3EBCu;
}
