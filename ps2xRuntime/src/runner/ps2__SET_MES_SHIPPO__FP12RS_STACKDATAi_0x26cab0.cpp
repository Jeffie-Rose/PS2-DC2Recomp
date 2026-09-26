#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_SHIPPO__FP12RS_STACKDATAi
// Address: 0x26cab0 - 0x26cb44
void ps2__SET_MES_SHIPPO__FP12RS_STACKDATAi_0x26cab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_SHIPPO__FP12RS_STACKDATAi_0x26cab0");
#endif

    switch (ctx->pc) {
        case 0x26cad0u: goto label_26cad0;
        case 0x26cad8u: goto label_26cad8;
        case 0x26caf4u: goto label_26caf4;
        case 0x26cb0cu: goto label_26cb0c;
        case 0x26cb24u: goto label_26cb24;
        default: break;
    }

    ctx->pc = 0x26cab0u;

    // 0x26cab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26cab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26cab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26cab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26cab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26cabc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26cabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26cac0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x26cac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26cac4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26cac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cac8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CAC8u;
    SET_GPR_U32(ctx, 31, 0x26CAD0u);
    ctx->pc = 0x26CACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAC8u;
            // 0x26cacc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAD0u; }
        if (ctx->pc != 0x26CAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAD0u; }
        if (ctx->pc != 0x26CAD0u) { return; }
    }
    ctx->pc = 0x26CAD0u;
label_26cad0:
    // 0x26cad0: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CAD0u;
    SET_GPR_U32(ctx, 31, 0x26CAD8u);
    ctx->pc = 0x26CAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAD0u;
            // 0x26cad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAD8u; }
        if (ctx->pc != 0x26CAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAD8u; }
        if (ctx->pc != 0x26CAD8u) { return; }
    }
    ctx->pc = 0x26CAD8u;
label_26cad8:
    // 0x26cad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cadc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CADCu;
    {
        const bool branch_taken_0x26cadc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CADCu;
            // 0x26cae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cadc) {
            ctx->pc = 0x26CAECu;
            goto label_26caec;
        }
    }
    ctx->pc = 0x26CAE4u;
    // 0x26cae4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26CAE4u;
    {
        const bool branch_taken_0x26cae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAE4u;
            // 0x26cae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cae4) {
            ctx->pc = 0x26CB2Cu;
            goto label_26cb2c;
        }
    }
    ctx->pc = 0x26CAECu;
label_26caec:
    // 0x26caec: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CAECu;
    SET_GPR_U32(ctx, 31, 0x26CAF4u);
    ctx->pc = 0x26CAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAECu;
            // 0x26caf0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAF4u; }
        if (ctx->pc != 0x26CAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAF4u; }
        if (ctx->pc != 0x26CAF4u) { return; }
    }
    ctx->pc = 0x26CAF4u;
label_26caf4:
    // 0x26caf4: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x26caf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26caf8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CAF8u;
    {
        const bool branch_taken_0x26caf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAF8u;
            // 0x26cafc: 0xae020150  sw          $v0, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26caf8) {
            ctx->pc = 0x26CB10u;
            goto label_26cb10;
        }
    }
    ctx->pc = 0x26CB00u;
    // 0x26cb00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26cb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb04: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CB04u;
    SET_GPR_U32(ctx, 31, 0x26CB0Cu);
    ctx->pc = 0x26CB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB04u;
            // 0x26cb08: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB0Cu; }
        if (ctx->pc != 0x26CB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB0Cu; }
        if (ctx->pc != 0x26CB0Cu) { return; }
    }
    ctx->pc = 0x26CB0Cu;
label_26cb0c:
    // 0x26cb0c: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x26cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
label_26cb10:
    // 0x26cb10: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x26cb10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26cb14: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CB14u;
    {
        const bool branch_taken_0x26cb14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB14u;
            // 0x26cb18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb14) {
            ctx->pc = 0x26CB2Cu;
            goto label_26cb2c;
        }
    }
    ctx->pc = 0x26CB1Cu;
    // 0x26cb1c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CB1Cu;
    SET_GPR_U32(ctx, 31, 0x26CB24u);
    ctx->pc = 0x26CB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB1Cu;
            // 0x26cb20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB24u; }
        if (ctx->pc != 0x26CB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB24u; }
        if (ctx->pc != 0x26CB24u) { return; }
    }
    ctx->pc = 0x26CB24u;
label_26cb24:
    // 0x26cb24: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x26cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x26cb28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cb2c:
    // 0x26cb2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26cb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26cb30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26cb30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cb34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26cb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cb38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x26CB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB3Cu;
            // 0x26cb40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CB44u;
}
