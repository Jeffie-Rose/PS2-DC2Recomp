#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_EVENT_DATA__FP12RS_STACKDATAi
// Address: 0x277f30 - 0x2781b8
void ps2__GET_EVENT_DATA__FP12RS_STACKDATAi_0x277f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_EVENT_DATA__FP12RS_STACKDATAi_0x277f30");
#endif

    switch (ctx->pc) {
        case 0x277f64u: goto label_277f64;
        case 0x277f94u: goto label_277f94;
        case 0x277fa8u: goto label_277fa8;
        case 0x277fbcu: goto label_277fbc;
        case 0x277fd0u: goto label_277fd0;
        case 0x277fe4u: goto label_277fe4;
        case 0x277ff8u: goto label_277ff8;
        case 0x27800cu: goto label_27800c;
        case 0x278020u: goto label_278020;
        case 0x278038u: goto label_278038;
        case 0x278048u: goto label_278048;
        case 0x278058u: goto label_278058;
        case 0x278064u: goto label_278064;
        case 0x278070u: goto label_278070;
        case 0x278084u: goto label_278084;
        case 0x27809cu: goto label_27809c;
        case 0x2780acu: goto label_2780ac;
        case 0x2780b8u: goto label_2780b8;
        case 0x2780e8u: goto label_2780e8;
        case 0x278100u: goto label_278100;
        case 0x278110u: goto label_278110;
        case 0x27811cu: goto label_27811c;
        case 0x278134u: goto label_278134;
        case 0x278144u: goto label_278144;
        case 0x278150u: goto label_278150;
        case 0x278164u: goto label_278164;
        case 0x278178u: goto label_278178;
        case 0x27818cu: goto label_27818c;
        default: break;
    }

    ctx->pc = 0x277f30u;

    // 0x277f30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x277f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x277f34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x277f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x277f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x277f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x277f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277f40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x277f44: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x277f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x277f48: 0x24502e90  addiu       $s0, $v0, 0x2E90
    ctx->pc = 0x277f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11920));
    // 0x277f4c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277F4Cu;
    {
        const bool branch_taken_0x277f4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x277F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F4Cu;
            // 0x277f50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f4c) {
            ctx->pc = 0x277F5Cu;
            goto label_277f5c;
        }
    }
    ctx->pc = 0x277F54u;
    // 0x277f54: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x277F54u;
    {
        const bool branch_taken_0x277f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F54u;
            // 0x277f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f54) {
            ctx->pc = 0x2781A0u;
            goto label_2781a0;
        }
    }
    ctx->pc = 0x277F5Cu;
label_277f5c:
    // 0x277f5c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277F5Cu;
    SET_GPR_U32(ctx, 31, 0x277F64u);
    ctx->pc = 0x277F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F5Cu;
            // 0x277f60: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F64u; }
        if (ctx->pc != 0x277F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F64u; }
        if (ctx->pc != 0x277F64u) { return; }
    }
    ctx->pc = 0x277F64u;
label_277f64:
    // 0x277f64: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x277f64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x277f68: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x277F68u;
    {
        const bool branch_taken_0x277f68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F68u;
            // 0x277f6c: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f68) {
            ctx->pc = 0x278194u;
            goto label_278194;
        }
    }
    ctx->pc = 0x277F70u;
    // 0x277f70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x277f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x277f74: 0x2463cb40  addiu       $v1, $v1, -0x34C0
    ctx->pc = 0x277f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953792));
    // 0x277f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x277f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277f7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x277f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277f80: 0x400008  jr          $v0
    ctx->pc = 0x277F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277F88u: goto label_277f88;
            case 0x277F9Cu: goto label_277f9c;
            case 0x277FB0u: goto label_277fb0;
            case 0x277FC4u: goto label_277fc4;
            case 0x277FD8u: goto label_277fd8;
            case 0x277FECu: goto label_277fec;
            case 0x278000u: goto label_278000;
            case 0x278014u: goto label_278014;
            case 0x278028u: goto label_278028;
            case 0x278078u: goto label_278078;
            case 0x27808Cu: goto label_27808c;
            case 0x2780C0u: goto label_2780c0;
            case 0x278124u: goto label_278124;
            case 0x278158u: goto label_278158;
            case 0x27816Cu: goto label_27816c;
            case 0x278180u: goto label_278180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x277F88u;
label_277f88:
    // 0x277f88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x277f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x277f8c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x277F8Cu;
    SET_GPR_U32(ctx, 31, 0x277F94u);
    ctx->pc = 0x277F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F8Cu;
            // 0x277f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F94u; }
        if (ctx->pc != 0x277F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F94u; }
        if (ctx->pc != 0x277F94u) { return; }
    }
    ctx->pc = 0x277F94u;
label_277f94:
    // 0x277f94: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x277F94u;
    {
        const bool branch_taken_0x277f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277F94u;
            // 0x277f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f94) {
            ctx->pc = 0x2781A0u;
            goto label_2781a0;
        }
    }
    ctx->pc = 0x277F9Cu;
label_277f9c:
    // 0x277f9c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x277f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x277fa0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x277FA0u;
    SET_GPR_U32(ctx, 31, 0x277FA8u);
    ctx->pc = 0x277FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277FA0u;
            // 0x277fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FA8u; }
        if (ctx->pc != 0x277FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FA8u; }
        if (ctx->pc != 0x277FA8u) { return; }
    }
    ctx->pc = 0x277FA8u;
label_277fa8:
    // 0x277fa8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x277FA8u;
    {
        const bool branch_taken_0x277fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277fa8) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x277FB0u;
label_277fb0:
    // 0x277fb0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x277fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x277fb4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x277FB4u;
    SET_GPR_U32(ctx, 31, 0x277FBCu);
    ctx->pc = 0x277FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277FB4u;
            // 0x277fb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FBCu; }
        if (ctx->pc != 0x277FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FBCu; }
        if (ctx->pc != 0x277FBCu) { return; }
    }
    ctx->pc = 0x277FBCu;
label_277fbc:
    // 0x277fbc: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x277FBCu;
    {
        const bool branch_taken_0x277fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277fbc) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x277FC4u;
label_277fc4:
    // 0x277fc4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x277fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x277fc8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x277FC8u;
    SET_GPR_U32(ctx, 31, 0x277FD0u);
    ctx->pc = 0x277FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277FC8u;
            // 0x277fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FD0u; }
        if (ctx->pc != 0x277FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FD0u; }
        if (ctx->pc != 0x277FD0u) { return; }
    }
    ctx->pc = 0x277FD0u;
label_277fd0:
    // 0x277fd0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x277FD0u;
    {
        const bool branch_taken_0x277fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277fd0) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x277FD8u;
label_277fd8:
    // 0x277fd8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x277fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x277fdc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x277FDCu;
    SET_GPR_U32(ctx, 31, 0x277FE4u);
    ctx->pc = 0x277FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277FDCu;
            // 0x277fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FE4u; }
        if (ctx->pc != 0x277FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FE4u; }
        if (ctx->pc != 0x277FE4u) { return; }
    }
    ctx->pc = 0x277FE4u;
label_277fe4:
    // 0x277fe4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x277FE4u;
    {
        const bool branch_taken_0x277fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277fe4) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x277FECu;
label_277fec:
    // 0x277fec: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x277fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x277ff0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x277FF0u;
    SET_GPR_U32(ctx, 31, 0x277FF8u);
    ctx->pc = 0x277FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277FF0u;
            // 0x277ff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FF8u; }
        if (ctx->pc != 0x277FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FF8u; }
        if (ctx->pc != 0x277FF8u) { return; }
    }
    ctx->pc = 0x277FF8u;
label_277ff8:
    // 0x277ff8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x277FF8u;
    {
        const bool branch_taken_0x277ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ff8) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x278000u;
label_278000:
    // 0x278000: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x278000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x278004: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278004u;
    SET_GPR_U32(ctx, 31, 0x27800Cu);
    ctx->pc = 0x278008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278004u;
            // 0x278008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27800Cu; }
        if (ctx->pc != 0x27800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27800Cu; }
        if (ctx->pc != 0x27800Cu) { return; }
    }
    ctx->pc = 0x27800Cu;
label_27800c:
    // 0x27800c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x27800Cu;
    {
        const bool branch_taken_0x27800c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27800c) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x278014u;
label_278014:
    // 0x278014: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x278014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x278018: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278018u;
    SET_GPR_U32(ctx, 31, 0x278020u);
    ctx->pc = 0x27801Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278018u;
            // 0x27801c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278020u; }
        if (ctx->pc != 0x278020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278020u; }
        if (ctx->pc != 0x278020u) { return; }
    }
    ctx->pc = 0x278020u;
label_278020:
    // 0x278020: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x278020u;
    {
        const bool branch_taken_0x278020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278020) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x278028u;
label_278028:
    // 0x278028: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x278028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27802c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278030: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278030u;
    SET_GPR_U32(ctx, 31, 0x278038u);
    ctx->pc = 0x278034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278030u;
            // 0x278034: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278038u; }
        if (ctx->pc != 0x278038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278038u; }
        if (ctx->pc != 0x278038u) { return; }
    }
    ctx->pc = 0x278038u;
label_278038:
    // 0x278038: 0xc60c00a4  lwc1        $f12, 0xA4($s0)
    ctx->pc = 0x278038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27803c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278040: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278040u;
    SET_GPR_U32(ctx, 31, 0x278048u);
    ctx->pc = 0x278044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278040u;
            // 0x278044: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278048u; }
        if (ctx->pc != 0x278048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278048u; }
        if (ctx->pc != 0x278048u) { return; }
    }
    ctx->pc = 0x278048u;
label_278048:
    // 0x278048: 0xc60c00a8  lwc1        $f12, 0xA8($s0)
    ctx->pc = 0x278048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27804c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27804cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278050: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278050u;
    SET_GPR_U32(ctx, 31, 0x278058u);
    ctx->pc = 0x278054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278050u;
            // 0x278054: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278058u; }
        if (ctx->pc != 0x278058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278058u; }
        if (ctx->pc != 0x278058u) { return; }
    }
    ctx->pc = 0x278058u;
label_278058:
    // 0x278058: 0xc60d0098  lwc1        $f13, 0x98($s0)
    ctx->pc = 0x278058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27805c: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x27805Cu;
    SET_GPR_U32(ctx, 31, 0x278064u);
    ctx->pc = 0x278060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27805Cu;
            // 0x278060: 0xc60c0090  lwc1        $f12, 0x90($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278064u; }
        if (ctx->pc != 0x278064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278064u; }
        if (ctx->pc != 0x278064u) { return; }
    }
    ctx->pc = 0x278064u;
label_278064:
    // 0x278064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x278064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278068: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278068u;
    SET_GPR_U32(ctx, 31, 0x278070u);
    ctx->pc = 0x27806Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278068u;
            // 0x27806c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278070u; }
        if (ctx->pc != 0x278070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278070u; }
        if (ctx->pc != 0x278070u) { return; }
    }
    ctx->pc = 0x278070u;
label_278070:
    // 0x278070: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x278070u;
    {
        const bool branch_taken_0x278070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278070) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x278078u;
label_278078:
    // 0x278078: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x278078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x27807c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27807Cu;
    SET_GPR_U32(ctx, 31, 0x278084u);
    ctx->pc = 0x278080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27807Cu;
            // 0x278080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278084u; }
        if (ctx->pc != 0x278084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278084u; }
        if (ctx->pc != 0x278084u) { return; }
    }
    ctx->pc = 0x278084u;
label_278084:
    // 0x278084: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x278084u;
    {
        const bool branch_taken_0x278084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278084) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x27808Cu;
label_27808c:
    // 0x27808c: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x27808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x278090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278094: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278094u;
    SET_GPR_U32(ctx, 31, 0x27809Cu);
    ctx->pc = 0x278098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278094u;
            // 0x278098: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27809Cu; }
        if (ctx->pc != 0x27809Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27809Cu; }
        if (ctx->pc != 0x27809Cu) { return; }
    }
    ctx->pc = 0x27809Cu;
label_27809c:
    // 0x27809c: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x27809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2780a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2780a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780a4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2780A4u;
    SET_GPR_U32(ctx, 31, 0x2780ACu);
    ctx->pc = 0x2780A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2780A4u;
            // 0x2780a8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780ACu; }
        if (ctx->pc != 0x2780ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780ACu; }
        if (ctx->pc != 0x2780ACu) { return; }
    }
    ctx->pc = 0x2780ACu;
label_2780ac:
    // 0x2780ac: 0xc60c0038  lwc1        $f12, 0x38($s0)
    ctx->pc = 0x2780acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2780b0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2780B0u;
    SET_GPR_U32(ctx, 31, 0x2780B8u);
    ctx->pc = 0x2780B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2780B0u;
            // 0x2780b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780B8u; }
        if (ctx->pc != 0x2780B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780B8u; }
        if (ctx->pc != 0x2780B8u) { return; }
    }
    ctx->pc = 0x2780B8u;
label_2780b8:
    // 0x2780b8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2780B8u;
    {
        const bool branch_taken_0x2780b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2780b8) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x2780C0u;
label_2780c0:
    // 0x2780c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2780c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2780c4: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2780C4u;
    {
        const bool branch_taken_0x2780c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2780C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2780C4u;
            // 0x2780c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2780c4) {
            ctx->pc = 0x2780F0u;
            goto label_2780f0;
        }
    }
    ctx->pc = 0x2780CCu;
    // 0x2780cc: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2780CCu;
    {
        const bool branch_taken_0x2780cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2780cc) {
            ctx->pc = 0x2780DCu;
            goto label_2780dc;
        }
    }
    ctx->pc = 0x2780D4u;
    // 0x2780d4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2780D4u;
    {
        const bool branch_taken_0x2780d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2780d4) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x2780DCu;
label_2780dc:
    // 0x2780dc: 0xc60c0044  lwc1        $f12, 0x44($s0)
    ctx->pc = 0x2780dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2780e0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2780E0u;
    SET_GPR_U32(ctx, 31, 0x2780E8u);
    ctx->pc = 0x2780E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2780E0u;
            // 0x2780e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780E8u; }
        if (ctx->pc != 0x2780E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780E8u; }
        if (ctx->pc != 0x2780E8u) { return; }
    }
    ctx->pc = 0x2780E8u;
label_2780e8:
    // 0x2780e8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2780E8u;
    {
        const bool branch_taken_0x2780e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2780e8) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x2780F0u;
label_2780f0:
    // 0x2780f0: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x2780f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2780f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2780f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780f8: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2780F8u;
    SET_GPR_U32(ctx, 31, 0x278100u);
    ctx->pc = 0x2780FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2780F8u;
            // 0x2780fc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278100u; }
        if (ctx->pc != 0x278100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278100u; }
        if (ctx->pc != 0x278100u) { return; }
    }
    ctx->pc = 0x278100u;
label_278100:
    // 0x278100: 0xc60c0044  lwc1        $f12, 0x44($s0)
    ctx->pc = 0x278100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x278104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278108: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278108u;
    SET_GPR_U32(ctx, 31, 0x278110u);
    ctx->pc = 0x27810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278108u;
            // 0x27810c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278110u; }
        if (ctx->pc != 0x278110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278110u; }
        if (ctx->pc != 0x278110u) { return; }
    }
    ctx->pc = 0x278110u;
label_278110:
    // 0x278110: 0xc60c0048  lwc1        $f12, 0x48($s0)
    ctx->pc = 0x278110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278114: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278114u;
    SET_GPR_U32(ctx, 31, 0x27811Cu);
    ctx->pc = 0x278118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278114u;
            // 0x278118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27811Cu; }
        if (ctx->pc != 0x27811Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27811Cu; }
        if (ctx->pc != 0x27811Cu) { return; }
    }
    ctx->pc = 0x27811Cu;
label_27811c:
    // 0x27811c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27811Cu;
    {
        const bool branch_taken_0x27811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27811c) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x278124u;
label_278124:
    // 0x278124: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x278124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x278128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27812c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27812Cu;
    SET_GPR_U32(ctx, 31, 0x278134u);
    ctx->pc = 0x278130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27812Cu;
            // 0x278130: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278134u; }
        if (ctx->pc != 0x278134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278134u; }
        if (ctx->pc != 0x278134u) { return; }
    }
    ctx->pc = 0x278134u;
label_278134:
    // 0x278134: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x278134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x278138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27813c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27813Cu;
    SET_GPR_U32(ctx, 31, 0x278144u);
    ctx->pc = 0x278140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27813Cu;
            // 0x278140: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278144u; }
        if (ctx->pc != 0x278144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278144u; }
        if (ctx->pc != 0x278144u) { return; }
    }
    ctx->pc = 0x278144u;
label_278144:
    // 0x278144: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x278144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278148: 0xc097e54  jal         func_25F950
    ctx->pc = 0x278148u;
    SET_GPR_U32(ctx, 31, 0x278150u);
    ctx->pc = 0x27814Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278148u;
            // 0x27814c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278150u; }
        if (ctx->pc != 0x278150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278150u; }
        if (ctx->pc != 0x278150u) { return; }
    }
    ctx->pc = 0x278150u;
label_278150:
    // 0x278150: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x278150u;
    {
        const bool branch_taken_0x278150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278150) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x278158u;
label_278158:
    // 0x278158: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x278158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x27815c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27815Cu;
    SET_GPR_U32(ctx, 31, 0x278164u);
    ctx->pc = 0x278160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27815Cu;
            // 0x278160: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278164u; }
        if (ctx->pc != 0x278164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278164u; }
        if (ctx->pc != 0x278164u) { return; }
    }
    ctx->pc = 0x278164u;
label_278164:
    // 0x278164: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x278164u;
    {
        const bool branch_taken_0x278164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278164) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x27816Cu;
label_27816c:
    // 0x27816c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x27816cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x278170: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278170u;
    SET_GPR_U32(ctx, 31, 0x278178u);
    ctx->pc = 0x278174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278170u;
            // 0x278174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278178u; }
        if (ctx->pc != 0x278178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278178u; }
        if (ctx->pc != 0x278178u) { return; }
    }
    ctx->pc = 0x278178u;
label_278178:
    // 0x278178: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x278178u;
    {
        const bool branch_taken_0x278178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278178) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x278180u;
label_278180:
    // 0x278180: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x278180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x278184: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278184u;
    SET_GPR_U32(ctx, 31, 0x27818Cu);
    ctx->pc = 0x278188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278184u;
            // 0x278188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27818Cu; }
        if (ctx->pc != 0x27818Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27818Cu; }
        if (ctx->pc != 0x27818Cu) { return; }
    }
    ctx->pc = 0x27818Cu;
label_27818c:
    // 0x27818c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27818Cu;
    {
        const bool branch_taken_0x27818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27818c) {
            ctx->pc = 0x27819Cu;
            goto label_27819c;
        }
    }
    ctx->pc = 0x278194u;
label_278194:
    // 0x278194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x278194u;
    {
        const bool branch_taken_0x278194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278194u;
            // 0x278198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278194) {
            ctx->pc = 0x2781A0u;
            goto label_2781a0;
        }
    }
    ctx->pc = 0x27819Cu;
label_27819c:
    // 0x27819c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2781a0:
    // 0x2781a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2781a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2781a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2781a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2781a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2781a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2781ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2781acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2781b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2781B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2781B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781B0u;
            // 0x2781b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2781B8u;
}
