#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CURRENT_DIR__FP12RS_STACKDATAi
// Address: 0x263470 - 0x2634f4
void ps2__SET_CURRENT_DIR__FP12RS_STACKDATAi_0x263470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CURRENT_DIR__FP12RS_STACKDATAi_0x263470");
#endif

    switch (ctx->pc) {
        case 0x26348cu: goto label_26348c;
        case 0x2634a8u: goto label_2634a8;
        case 0x2634bcu: goto label_2634bc;
        case 0x2634d0u: goto label_2634d0;
        case 0x2634e0u: goto label_2634e0;
        default: break;
    }

    ctx->pc = 0x263470u;

    // 0x263470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26347c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26347Cu;
    {
        const bool branch_taken_0x26347c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x263480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26347Cu;
            // 0x263480: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26347c) {
            ctx->pc = 0x263490u;
            goto label_263490;
        }
    }
    ctx->pc = 0x263484u;
    // 0x263484: 0xc097e48  jal         func_25F920
    ctx->pc = 0x263484u;
    SET_GPR_U32(ctx, 31, 0x26348Cu);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26348Cu; }
        if (ctx->pc != 0x26348Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26348Cu; }
        if (ctx->pc != 0x26348Cu) { return; }
    }
    ctx->pc = 0x26348Cu;
label_26348c:
    // 0x26348c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26348cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263490:
    // 0x263490: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x263490u;
    {
        const bool branch_taken_0x263490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x263494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263490u;
            // 0x263494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263490) {
            ctx->pc = 0x2634C8u;
            goto label_2634c8;
        }
    }
    ctx->pc = 0x263498u;
    // 0x263498: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x263498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26349c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26349cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2634a0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2634A0u;
    SET_GPR_U32(ctx, 31, 0x2634A8u);
    ctx->pc = 0x2634A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2634A0u;
            // 0x2634a4: 0x24a5c700  addiu       $a1, $a1, -0x3900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634A8u; }
        if (ctx->pc != 0x2634A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634A8u; }
        if (ctx->pc != 0x2634A8u) { return; }
    }
    ctx->pc = 0x2634A8u;
label_2634a8:
    // 0x2634a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2634A8u;
    {
        const bool branch_taken_0x2634a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634A8u;
            // 0x2634ac: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634a8) {
            ctx->pc = 0x2634C4u;
            goto label_2634c4;
        }
    }
    ctx->pc = 0x2634B0u;
    // 0x2634b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2634b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2634b4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2634B4u;
    SET_GPR_U32(ctx, 31, 0x2634BCu);
    ctx->pc = 0x2634B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2634B4u;
            // 0x2634b8: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634BCu; }
        if (ctx->pc != 0x2634BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634BCu; }
        if (ctx->pc != 0x2634BCu) { return; }
    }
    ctx->pc = 0x2634BCu;
label_2634bc:
    // 0x2634bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2634BCu;
    {
        const bool branch_taken_0x2634bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2634C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634BCu;
            // 0x2634c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634bc) {
            ctx->pc = 0x2634D8u;
            goto label_2634d8;
        }
    }
    ctx->pc = 0x2634C4u;
label_2634c4:
    // 0x2634c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2634c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2634c8:
    // 0x2634c8: 0xc0521d8  jal         func_148760
    ctx->pc = 0x2634C8u;
    SET_GPR_U32(ctx, 31, 0x2634D0u);
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634D0u; }
        if (ctx->pc != 0x2634D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634D0u; }
        if (ctx->pc != 0x2634D0u) { return; }
    }
    ctx->pc = 0x2634D0u;
label_2634d0:
    // 0x2634d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2634D0u;
    {
        const bool branch_taken_0x2634d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2634D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634D0u;
            // 0x2634d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2634d0) {
            ctx->pc = 0x2634E4u;
            goto label_2634e4;
        }
    }
    ctx->pc = 0x2634D8u;
label_2634d8:
    // 0x2634d8: 0xc0521d8  jal         func_148760
    ctx->pc = 0x2634D8u;
    SET_GPR_U32(ctx, 31, 0x2634E0u);
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634E0u; }
        if (ctx->pc != 0x2634E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2634E0u; }
        if (ctx->pc != 0x2634E0u) { return; }
    }
    ctx->pc = 0x2634E0u;
label_2634e0:
    // 0x2634e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2634e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2634e4:
    // 0x2634e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2634e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2634e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2634e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2634ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2634ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2634F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2634ECu;
            // 0x2634f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2634F4u;
}
