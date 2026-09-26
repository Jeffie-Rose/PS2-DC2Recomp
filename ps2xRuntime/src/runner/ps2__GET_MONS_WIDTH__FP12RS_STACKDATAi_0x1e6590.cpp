#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MONS_WIDTH__FP12RS_STACKDATAi
// Address: 0x1e6590 - 0x1e661c
void ps2__GET_MONS_WIDTH__FP12RS_STACKDATAi_0x1e6590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MONS_WIDTH__FP12RS_STACKDATAi_0x1e6590");
#endif

    switch (ctx->pc) {
        case 0x1e65ccu: goto label_1e65cc;
        case 0x1e65d8u: goto label_1e65d8;
        case 0x1e65f0u: goto label_1e65f0;
        case 0x1e65f8u: goto label_1e65f8;
        case 0x1e6604u: goto label_1e6604;
        default: break;
    }

    ctx->pc = 0x1e6590u;

    // 0x1e6590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e659c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e65a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e65a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e65a4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E65A4u;
    {
        const bool branch_taken_0x1e65a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E65A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65A4u;
            // 0x1e65a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65a4) {
            ctx->pc = 0x1E65B8u;
            goto label_1e65b8;
        }
    }
    ctx->pc = 0x1E65ACu;
    // 0x1e65ac: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e65acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e65b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E65B0u;
    {
        const bool branch_taken_0x1e65b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e65b0) {
            ctx->pc = 0x1E65C0u;
            goto label_1e65c0;
        }
    }
    ctx->pc = 0x1E65B8u;
label_1e65b8:
    // 0x1e65b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E65B8u;
    {
        const bool branch_taken_0x1e65b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65B8u;
            // 0x1e65bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65b8) {
            ctx->pc = 0x1E6608u;
            goto label_1e6608;
        }
    }
    ctx->pc = 0x1E65C0u;
label_1e65c0:
    // 0x1e65c0: 0xc4541360  lwc1        $f20, 0x1360($v0)
    ctx->pc = 0x1e65c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e65c4: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E65C4u;
    SET_GPR_U32(ctx, 31, 0x1E65CCu);
    ctx->pc = 0x1E65C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65C4u;
            // 0x1e65c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E65CCu; }
        if (ctx->pc != 0x1E65CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E65CCu; }
        if (ctx->pc != 0x1E65CCu) { return; }
    }
    ctx->pc = 0x1E65CCu;
label_1e65cc:
    // 0x1e65cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e65ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e65d0: 0xc040044  jal         func_100110
    ctx->pc = 0x1E65D0u;
    SET_GPR_U32(ctx, 31, 0x1E65D8u);
    ctx->pc = 0x1E65D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65D0u;
            // 0x1e65d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100110u;
    if (runtime->hasFunction(0x100110u)) {
        auto targetFn = runtime->lookupFunction(0x100110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E65D8u; }
        if (ctx->pc != 0x1E65D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E65D8u; }
        if (ctx->pc != 0x1E65D8u) { return; }
    }
    ctx->pc = 0x1E65D8u;
label_1e65d8:
    // 0x1e65d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E65D8u;
    {
        const bool branch_taken_0x1e65d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65D8u;
            // 0x1e65dc: 0x3c02402e  lui         $v0, 0x402E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16430 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65d8) {
            ctx->pc = 0x1E65E8u;
            goto label_1e65e8;
        }
    }
    ctx->pc = 0x1E65E0u;
    // 0x1e65e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E65E0u;
    {
        const bool branch_taken_0x1e65e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65E0u;
            // 0x1e65e4: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65e0) {
            ctx->pc = 0x1E65F0u;
            goto label_1e65f0;
        }
    }
    ctx->pc = 0x1E65E8u;
label_1e65e8:
    // 0x1e65e8: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E65E8u;
    SET_GPR_U32(ctx, 31, 0x1E65F0u);
    ctx->pc = 0x1E65ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65E8u;
            // 0x1e65ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E65F0u; }
        if (ctx->pc != 0x1E65F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E65F0u; }
        if (ctx->pc != 0x1E65F0u) { return; }
    }
    ctx->pc = 0x1E65F0u;
label_1e65f0:
    // 0x1e65f0: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1E65F0u;
    SET_GPR_U32(ctx, 31, 0x1E65F8u);
    ctx->pc = 0x1E65F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65F0u;
            // 0x1e65f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E65F8u; }
        if (ctx->pc != 0x1E65F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E65F8u; }
        if (ctx->pc != 0x1E65F8u) { return; }
    }
    ctx->pc = 0x1E65F8u;
label_1e65f8:
    // 0x1e65f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e65f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e65fc: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E65FCu;
    SET_GPR_U32(ctx, 31, 0x1E6604u);
    ctx->pc = 0x1E6600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65FCu;
            // 0x1e6600: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6604u; }
        if (ctx->pc != 0x1E6604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6604u; }
        if (ctx->pc != 0x1E6604u) { return; }
    }
    ctx->pc = 0x1E6604u;
label_1e6604:
    // 0x1e6604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6608:
    // 0x1e6608: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e660c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e6610: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6614: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6614u;
            // 0x1e6618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E661Cu;
}
