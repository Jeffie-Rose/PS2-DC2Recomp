#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHANGE_DIR__FP12RS_STACKDATAi
// Address: 0x263500 - 0x263584
void ps2__CHANGE_DIR__FP12RS_STACKDATAi_0x263500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHANGE_DIR__FP12RS_STACKDATAi_0x263500");
#endif

    switch (ctx->pc) {
        case 0x26351cu: goto label_26351c;
        case 0x263538u: goto label_263538;
        case 0x26354cu: goto label_26354c;
        case 0x263560u: goto label_263560;
        case 0x263570u: goto label_263570;
        default: break;
    }

    ctx->pc = 0x263500u;

    // 0x263500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26350c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26350Cu;
    {
        const bool branch_taken_0x26350c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x263510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26350Cu;
            // 0x263510: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26350c) {
            ctx->pc = 0x263520u;
            goto label_263520;
        }
    }
    ctx->pc = 0x263514u;
    // 0x263514: 0xc097e48  jal         func_25F920
    ctx->pc = 0x263514u;
    SET_GPR_U32(ctx, 31, 0x26351Cu);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26351Cu; }
        if (ctx->pc != 0x26351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26351Cu; }
        if (ctx->pc != 0x26351Cu) { return; }
    }
    ctx->pc = 0x26351Cu;
label_26351c:
    // 0x26351c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26351cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_263520:
    // 0x263520: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x263520u;
    {
        const bool branch_taken_0x263520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x263524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263520u;
            // 0x263524: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263520) {
            ctx->pc = 0x263558u;
            goto label_263558;
        }
    }
    ctx->pc = 0x263528u;
    // 0x263528: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x263528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26352c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263530: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x263530u;
    SET_GPR_U32(ctx, 31, 0x263538u);
    ctx->pc = 0x263534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263530u;
            // 0x263534: 0x24a5c700  addiu       $a1, $a1, -0x3900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263538u; }
        if (ctx->pc != 0x263538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263538u; }
        if (ctx->pc != 0x263538u) { return; }
    }
    ctx->pc = 0x263538u;
label_263538:
    // 0x263538: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263538u;
    {
        const bool branch_taken_0x263538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26353Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263538u;
            // 0x26353c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263538) {
            ctx->pc = 0x263554u;
            goto label_263554;
        }
    }
    ctx->pc = 0x263540u;
    // 0x263540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263544: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x263544u;
    SET_GPR_U32(ctx, 31, 0x26354Cu);
    ctx->pc = 0x263548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263544u;
            // 0x263548: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26354Cu; }
        if (ctx->pc != 0x26354Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26354Cu; }
        if (ctx->pc != 0x26354Cu) { return; }
    }
    ctx->pc = 0x26354Cu;
label_26354c:
    // 0x26354c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26354Cu;
    {
        const bool branch_taken_0x26354c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26354Cu;
            // 0x263550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26354c) {
            ctx->pc = 0x263568u;
            goto label_263568;
        }
    }
    ctx->pc = 0x263554u;
label_263554:
    // 0x263554: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x263554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_263558:
    // 0x263558: 0xc0521d8  jal         func_148760
    ctx->pc = 0x263558u;
    SET_GPR_U32(ctx, 31, 0x263560u);
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263560u; }
        if (ctx->pc != 0x263560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263560u; }
        if (ctx->pc != 0x263560u) { return; }
    }
    ctx->pc = 0x263560u;
label_263560:
    // 0x263560: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263560u;
    {
        const bool branch_taken_0x263560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263560u;
            // 0x263564: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263560) {
            ctx->pc = 0x263574u;
            goto label_263574;
        }
    }
    ctx->pc = 0x263568u;
label_263568:
    // 0x263568: 0xc0521f4  jal         func_1487D0
    ctx->pc = 0x263568u;
    SET_GPR_U32(ctx, 31, 0x263570u);
    ctx->pc = 0x1487D0u;
    if (runtime->hasFunction(0x1487D0u)) {
        auto targetFn = runtime->lookupFunction(0x1487D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263570u; }
        if (ctx->pc != 0x263570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeDir__FPc_0x1487d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263570u; }
        if (ctx->pc != 0x263570u) { return; }
    }
    ctx->pc = 0x263570u;
label_263570:
    // 0x263570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_263574:
    // 0x263574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26357c: 0x3e00008  jr          $ra
    ctx->pc = 0x26357Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26357Cu;
            // 0x263580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263584u;
}
