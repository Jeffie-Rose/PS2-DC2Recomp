#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_MES_MONS_TALK__FP12RS_STACKDATAi
// Address: 0x26d9b0 - 0x26da30
void ps2__LOAD_MES_MONS_TALK__FP12RS_STACKDATAi_0x26d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_MES_MONS_TALK__FP12RS_STACKDATAi_0x26d9b0");
#endif

    switch (ctx->pc) {
        case 0x26d9c8u: goto label_26d9c8;
        case 0x26d9d0u: goto label_26d9d0;
        case 0x26d9ecu: goto label_26d9ec;
        case 0x26da0cu: goto label_26da0c;
        case 0x26da1cu: goto label_26da1c;
        default: break;
    }

    ctx->pc = 0x26d9b0u;

    // 0x26d9b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26d9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26d9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26d9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26d9b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d9bc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26d9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d9c0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D9C0u;
    SET_GPR_U32(ctx, 31, 0x26D9C8u);
    ctx->pc = 0x26D9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9C0u;
            // 0x26d9c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9C8u; }
        if (ctx->pc != 0x26D9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9C8u; }
        if (ctx->pc != 0x26D9C8u) { return; }
    }
    ctx->pc = 0x26D9C8u;
label_26d9c8:
    // 0x26d9c8: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D9C8u;
    SET_GPR_U32(ctx, 31, 0x26D9D0u);
    ctx->pc = 0x26D9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9C8u;
            // 0x26d9cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9D0u; }
        if (ctx->pc != 0x26D9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9D0u; }
        if (ctx->pc != 0x26D9D0u) { return; }
    }
    ctx->pc = 0x26D9D0u;
label_26d9d0:
    // 0x26d9d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9d4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D9D4u;
    {
        const bool branch_taken_0x26d9d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9D4u;
            // 0x26d9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d9d4) {
            ctx->pc = 0x26D9E4u;
            goto label_26d9e4;
        }
    }
    ctx->pc = 0x26D9DCu;
    // 0x26d9dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26D9DCu;
    {
        const bool branch_taken_0x26d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9DCu;
            // 0x26d9e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d9dc) {
            ctx->pc = 0x26DA1Cu;
            goto label_26da1c;
        }
    }
    ctx->pc = 0x26D9E4u;
label_26d9e4:
    // 0x26d9e4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D9E4u;
    SET_GPR_U32(ctx, 31, 0x26D9ECu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9ECu; }
        if (ctx->pc != 0x26D9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9ECu; }
        if (ctx->pc != 0x26D9ECu) { return; }
    }
    ctx->pc = 0x26D9ECu;
label_26d9ec:
    // 0x26d9ec: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x26d9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x26d9f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26d9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26d9f4: 0x8c26f6e4  lw          $a2, -0x91C($at)
    ctx->pc = 0x26d9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964964)));
    // 0x26d9f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d9f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9fc: 0x8f878ad0  lw          $a3, -0x7530($gp)
    ctx->pc = 0x26d9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x26da00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26da04: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x26DA04u;
    SET_GPR_U32(ctx, 31, 0x26DA0Cu);
    ctx->pc = 0x26DA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA04u;
            // 0x26da08: 0x24a5c710  addiu       $a1, $a1, -0x38F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA0Cu; }
        if (ctx->pc != 0x26DA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA0Cu; }
        if (ctx->pc != 0x26DA0Cu) { return; }
    }
    ctx->pc = 0x26DA0Cu;
label_26da0c:
    // 0x26da0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26da0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26da10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da14: 0xc09b608  jal         func_26D820
    ctx->pc = 0x26DA14u;
    SET_GPR_U32(ctx, 31, 0x26DA1Cu);
    ctx->pc = 0x26DA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA14u;
            // 0x26da18: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D820u;
    if (runtime->hasFunction(0x26D820u)) {
        auto targetFn = runtime->lookupFunction(0x26D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA1Cu; }
        if (ctx->pc != 0x26DA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__LOAD_MES_sub__FPciP6ClsMes_0x26d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA1Cu; }
        if (ctx->pc != 0x26DA1Cu) { return; }
    }
    ctx->pc = 0x26DA1Cu;
label_26da1c:
    // 0x26da1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26da1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26da20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26da20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26da24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26da24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26da28: 0x3e00008  jr          $ra
    ctx->pc = 0x26DA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA28u;
            // 0x26da2c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26DA30u;
}
