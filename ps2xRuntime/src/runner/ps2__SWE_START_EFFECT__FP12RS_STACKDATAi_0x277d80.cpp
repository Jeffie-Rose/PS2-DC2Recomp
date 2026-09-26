#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SWE_START_EFFECT__FP12RS_STACKDATAi
// Address: 0x277d80 - 0x277edc
void ps2__SWE_START_EFFECT__FP12RS_STACKDATAi_0x277d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SWE_START_EFFECT__FP12RS_STACKDATAi_0x277d80");
#endif

    switch (ctx->pc) {
        case 0x277dacu: goto label_277dac;
        case 0x277dbcu: goto label_277dbc;
        case 0x277dc8u: goto label_277dc8;
        case 0x277e00u: goto label_277e00;
        case 0x277e10u: goto label_277e10;
        case 0x277e20u: goto label_277e20;
        case 0x277e30u: goto label_277e30;
        case 0x277e3cu: goto label_277e3c;
        case 0x277e58u: goto label_277e58;
        case 0x277e84u: goto label_277e84;
        case 0x277eb0u: goto label_277eb0;
        default: break;
    }

    ctx->pc = 0x277d80u;

    // 0x277d80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x277d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x277d84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x277d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x277d88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x277d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x277d8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x277d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x277d90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x277d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x277d94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x277d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x277d98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x277d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x277d9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277da0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x277da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x277da4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277DA4u;
    SET_GPR_U32(ctx, 31, 0x277DACu);
    ctx->pc = 0x277DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277DA4u;
            // 0x277da8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277DACu; }
        if (ctx->pc != 0x277DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277DACu; }
        if (ctx->pc != 0x277DACu) { return; }
    }
    ctx->pc = 0x277DACu;
label_277dac:
    // 0x277dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277db0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x277db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277db4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277DB4u;
    SET_GPR_U32(ctx, 31, 0x277DBCu);
    ctx->pc = 0x277DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277DB4u;
            // 0x277db8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277DBCu; }
        if (ctx->pc != 0x277DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277DBCu; }
        if (ctx->pc != 0x277DBCu) { return; }
    }
    ctx->pc = 0x277DBCu;
label_277dbc:
    // 0x277dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277dc0: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x277DC0u;
    SET_GPR_U32(ctx, 31, 0x277DC8u);
    ctx->pc = 0x277DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277DC0u;
            // 0x277dc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277DC8u; }
        if (ctx->pc != 0x277DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277DC8u; }
        if (ctx->pc != 0x277DC8u) { return; }
    }
    ctx->pc = 0x277DC8u;
label_277dc8:
    // 0x277dc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277DC8u;
    {
        const bool branch_taken_0x277dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277DC8u;
            // 0x277dcc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277dc8) {
            ctx->pc = 0x277DD8u;
            goto label_277dd8;
        }
    }
    ctx->pc = 0x277DD0u;
    // 0x277dd0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x277DD0u;
    {
        const bool branch_taken_0x277dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277DD0u;
            // 0x277dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277dd0) {
            ctx->pc = 0x277EB4u;
            goto label_277eb4;
        }
    }
    ctx->pc = 0x277DD8u;
label_277dd8:
    // 0x277dd8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x277dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x277ddc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x277ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x277de0: 0x24500570  addiu       $s0, $v0, 0x570
    ctx->pc = 0x277de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x277de4: 0x8c420570  lw          $v0, 0x570($v0)
    ctx->pc = 0x277de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1392)));
    // 0x277de8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277DE8u;
    {
        const bool branch_taken_0x277de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277DE8u;
            // 0x277dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277de8) {
            ctx->pc = 0x277DF8u;
            goto label_277df8;
        }
    }
    ctx->pc = 0x277DF0u;
    // 0x277df0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x277DF0u;
    {
        const bool branch_taken_0x277df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277DF0u;
            // 0x277df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277df0) {
            ctx->pc = 0x277EB4u;
            goto label_277eb4;
        }
    }
    ctx->pc = 0x277DF8u;
label_277df8:
    // 0x277df8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x277DF8u;
    SET_GPR_U32(ctx, 31, 0x277E00u);
    ctx->pc = 0x277DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277DF8u;
            // 0x277dfc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E00u; }
        if (ctx->pc != 0x277E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E00u; }
        if (ctx->pc != 0x277E00u) { return; }
    }
    ctx->pc = 0x277E00u;
label_277e00:
    // 0x277e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x277e04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e08: 0xc097e48  jal         func_25F920
    ctx->pc = 0x277E08u;
    SET_GPR_U32(ctx, 31, 0x277E10u);
    ctx->pc = 0x277E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277E08u;
            // 0x277e0c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E10u; }
        if (ctx->pc != 0x277E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E10u; }
        if (ctx->pc != 0x277E10u) { return; }
    }
    ctx->pc = 0x277E10u;
label_277e10:
    // 0x277e10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x277e14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e18: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277E18u;
    SET_GPR_U32(ctx, 31, 0x277E20u);
    ctx->pc = 0x277E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277E18u;
            // 0x277e1c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E20u; }
        if (ctx->pc != 0x277E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E20u; }
        if (ctx->pc != 0x277E20u) { return; }
    }
    ctx->pc = 0x277E20u;
label_277e20:
    // 0x277e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x277e24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e28: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277E28u;
    SET_GPR_U32(ctx, 31, 0x277E30u);
    ctx->pc = 0x277E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277E28u;
            // 0x277e2c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E30u; }
        if (ctx->pc != 0x277E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E30u; }
        if (ctx->pc != 0x277E30u) { return; }
    }
    ctx->pc = 0x277E30u;
label_277e30:
    // 0x277e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e34: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277E34u;
    SET_GPR_U32(ctx, 31, 0x277E3Cu);
    ctx->pc = 0x277E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277E34u;
            // 0x277e38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E3Cu; }
        if (ctx->pc != 0x277E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E3Cu; }
        if (ctx->pc != 0x277E3Cu) { return; }
    }
    ctx->pc = 0x277E3Cu;
label_277e3c:
    // 0x277e3c: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x277e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x277e40: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277E40u;
    {
        const bool branch_taken_0x277e40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x277E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E40u;
            // 0x277e44: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e40) {
            ctx->pc = 0x277E50u;
            goto label_277e50;
        }
    }
    ctx->pc = 0x277E48u;
    // 0x277e48: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x277E48u;
    {
        const bool branch_taken_0x277e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E48u;
            // 0x277e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e48) {
            ctx->pc = 0x277EB4u;
            goto label_277eb4;
        }
    }
    ctx->pc = 0x277E50u;
label_277e50:
    // 0x277e50: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x277E50u;
    SET_GPR_U32(ctx, 31, 0x277E58u);
    ctx->pc = 0x277E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277E50u;
            // 0x277e54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E58u; }
        if (ctx->pc != 0x277E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E58u; }
        if (ctx->pc != 0x277E58u) { return; }
    }
    ctx->pc = 0x277E58u;
label_277e58:
    // 0x277e58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277E58u;
    {
        const bool branch_taken_0x277e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E58u;
            // 0x277e5c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e58) {
            ctx->pc = 0x277E68u;
            goto label_277e68;
        }
    }
    ctx->pc = 0x277E60u;
    // 0x277e60: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x277E60u;
    {
        const bool branch_taken_0x277e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E60u;
            // 0x277e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e60) {
            ctx->pc = 0x277EB4u;
            goto label_277eb4;
        }
    }
    ctx->pc = 0x277E68u;
label_277e68:
    // 0x277e68: 0x8e440070  lw          $a0, 0x70($s2)
    ctx->pc = 0x277e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x277e6c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277E6Cu;
    {
        const bool branch_taken_0x277e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x277E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E6Cu;
            // 0x277e70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e6c) {
            ctx->pc = 0x277E7Cu;
            goto label_277e7c;
        }
    }
    ctx->pc = 0x277E74u;
    // 0x277e74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x277E74u;
    {
        const bool branch_taken_0x277e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E74u;
            // 0x277e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e74) {
            ctx->pc = 0x277EB4u;
            goto label_277eb4;
        }
    }
    ctx->pc = 0x277E7Cu;
label_277e7c:
    // 0x277e7c: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x277E7Cu;
    SET_GPR_U32(ctx, 31, 0x277E84u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E84u; }
        if (ctx->pc != 0x277E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277E84u; }
        if (ctx->pc != 0x277E84u) { return; }
    }
    ctx->pc = 0x277E84u;
label_277e84:
    // 0x277e84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277E84u;
    {
        const bool branch_taken_0x277e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277e84) {
            ctx->pc = 0x277E94u;
            goto label_277e94;
        }
    }
    ctx->pc = 0x277E8Cu;
    // 0x277e8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x277E8Cu;
    {
        const bool branch_taken_0x277e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277E8Cu;
            // 0x277e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e8c) {
            ctx->pc = 0x277EB4u;
            goto label_277eb4;
        }
    }
    ctx->pc = 0x277E94u;
label_277e94:
    // 0x277e94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x277e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x277e98: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277e9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x277e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ea0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x277ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ea4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ea8: 0xc0bd738  jal         func_2F5CE0
    ctx->pc = 0x277EA8u;
    SET_GPR_U32(ctx, 31, 0x277EB0u);
    ctx->pc = 0x277EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277EA8u;
            // 0x277eac: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE0u;
    if (runtime->hasFunction(0x2F5CE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277EB0u; }
        if (ctx->pc != 0x277EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartEffect__17CSWordAfterEffectFP8mgCFrameP8mgCFrameiii_0x2f5ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277EB0u; }
        if (ctx->pc != 0x277EB0u) { return; }
    }
    ctx->pc = 0x277EB0u;
label_277eb0:
    // 0x277eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277eb4:
    // 0x277eb4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x277eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277eb8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x277eb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277ebc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x277ebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277ec0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x277ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277ec4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x277ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277ec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x277ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x277ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277ED4u;
            // 0x277ed8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277EDCu;
}
