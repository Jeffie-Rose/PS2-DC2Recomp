#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COLPRIM_GET_HIT_POS__FP12RS_STACKDATAi
// Address: 0x2e86e0 - 0x2e8758
void ps2__COLPRIM_GET_HIT_POS__FP12RS_STACKDATAi_0x2e86e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COLPRIM_GET_HIT_POS__FP12RS_STACKDATAi_0x2e86e0");
#endif

    switch (ctx->pc) {
        case 0x2e871cu: goto label_2e871c;
        case 0x2e8734u: goto label_2e8734;
        case 0x2e8748u: goto label_2e8748;
        default: break;
    }

    ctx->pc = 0x2e86e0u;

    // 0x2e86e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e86e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e86e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e86e8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E86E8u;
    {
        const bool branch_taken_0x2e86e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E86ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E86E8u;
            // 0x2e86ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86e8) {
            ctx->pc = 0x2E86F8u;
            goto label_2e86f8;
        }
    }
    ctx->pc = 0x2E86F0u;
    // 0x2e86f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E86F0u;
    {
        const bool branch_taken_0x2e86f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E86F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E86F0u;
            // 0x2e86f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86f0) {
            ctx->pc = 0x2E874Cu;
            goto label_2e874c;
        }
    }
    ctx->pc = 0x2E86F8u;
label_2e86f8:
    // 0x2e86f8: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e86fc: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2e86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8700: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8700u;
    {
        const bool branch_taken_0x2e8700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8700) {
            ctx->pc = 0x2E8710u;
            goto label_2e8710;
        }
    }
    ctx->pc = 0x2E8708u;
    // 0x2e8708: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E8708u;
    {
        const bool branch_taken_0x2e8708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E870Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8708u;
            // 0x2e870c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8708) {
            ctx->pc = 0x2E874Cu;
            goto label_2e874c;
        }
    }
    ctx->pc = 0x2E8710u;
label_2e8710:
    // 0x2e8710: 0xc44c0100  lwc1        $f12, 0x100($v0)
    ctx->pc = 0x2e8710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8714: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E8714u;
    SET_GPR_U32(ctx, 31, 0x2E871Cu);
    ctx->pc = 0x2E8718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8714u;
            // 0x2e8718: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E871Cu; }
        if (ctx->pc != 0x2E871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E871Cu; }
        if (ctx->pc != 0x2E871Cu) { return; }
    }
    ctx->pc = 0x2E871Cu;
label_2e871c:
    // 0x2e871c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8720: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2e8720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8724: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2e8724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e8728: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x2e8728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e872c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E872Cu;
    SET_GPR_U32(ctx, 31, 0x2E8734u);
    ctx->pc = 0x2E8730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E872Cu;
            // 0x2e8730: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8734u; }
        if (ctx->pc != 0x2E8734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8734u; }
        if (ctx->pc != 0x2E8734u) { return; }
    }
    ctx->pc = 0x2E8734u;
label_2e8734:
    // 0x2e8734: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8738: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x2e8738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x2e873c: 0xc44c0108  lwc1        $f12, 0x108($v0)
    ctx->pc = 0x2e873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8740: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E8740u;
    SET_GPR_U32(ctx, 31, 0x2E8748u);
    ctx->pc = 0x2E8744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8740u;
            // 0x2e8744: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8748u; }
        if (ctx->pc != 0x2E8748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8748u; }
        if (ctx->pc != 0x2E8748u) { return; }
    }
    ctx->pc = 0x2E8748u;
label_2e8748:
    // 0x2e8748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e874c:
    // 0x2e874c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e874cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8750: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8750u;
            // 0x2e8754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8758u;
}
