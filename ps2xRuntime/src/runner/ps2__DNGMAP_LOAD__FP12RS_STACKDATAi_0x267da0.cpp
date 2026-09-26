#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNGMAP_LOAD__FP12RS_STACKDATAi
// Address: 0x267da0 - 0x267ea4
void ps2__DNGMAP_LOAD__FP12RS_STACKDATAi_0x267da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNGMAP_LOAD__FP12RS_STACKDATAi_0x267da0");
#endif

    switch (ctx->pc) {
        case 0x267dc8u: goto label_267dc8;
        case 0x267dd4u: goto label_267dd4;
        case 0x267de4u: goto label_267de4;
        case 0x267e14u: goto label_267e14;
        case 0x267e24u: goto label_267e24;
        case 0x267e30u: goto label_267e30;
        case 0x267e3cu: goto label_267e3c;
        case 0x267e5cu: goto label_267e5c;
        case 0x267e68u: goto label_267e68;
        default: break;
    }

    ctx->pc = 0x267da0u;

    // 0x267da0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x267da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x267da4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x267da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x267da8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x267da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x267dac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x267dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x267db0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x267db4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267dbc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x267dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x267dc0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267DC0u;
    SET_GPR_U32(ctx, 31, 0x267DC8u);
    ctx->pc = 0x267DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267DC0u;
            // 0x267dc4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267DC8u; }
        if (ctx->pc != 0x267DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267DC8u; }
        if (ctx->pc != 0x267DC8u) { return; }
    }
    ctx->pc = 0x267DC8u;
label_267dc8:
    // 0x267dc8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x267dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x267dcc: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x267DCCu;
    SET_GPR_U32(ctx, 31, 0x267DD4u);
    ctx->pc = 0x267DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267DCCu;
            // 0x267dd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267DD4u; }
        if (ctx->pc != 0x267DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267DD4u; }
        if (ctx->pc != 0x267DD4u) { return; }
    }
    ctx->pc = 0x267DD4u;
label_267dd4:
    // 0x267dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267dd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x267dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ddc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267DDCu;
    SET_GPR_U32(ctx, 31, 0x267DE4u);
    ctx->pc = 0x267DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267DDCu;
            // 0x267de0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267DE4u; }
        if (ctx->pc != 0x267DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267DE4u; }
        if (ctx->pc != 0x267DE4u) { return; }
    }
    ctx->pc = 0x267DE4u;
label_267de4:
    // 0x267de4: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x267de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x267de8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x267de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267dec: 0x8c622e80  lw          $v0, 0x2E80($v1)
    ctx->pc = 0x267decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11904)));
    // 0x267df0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267DF0u;
    {
        const bool branch_taken_0x267df0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x267DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267DF0u;
            // 0x267df4: 0x8c702e7c  lw          $s0, 0x2E7C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267df0) {
            ctx->pc = 0x267E04u;
            goto label_267e04;
        }
    }
    ctx->pc = 0x267DF8u;
    // 0x267df8: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x267df8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x267dfc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x267DFCu;
    {
        const bool branch_taken_0x267dfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267DFCu;
            // 0x267e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267dfc) {
            ctx->pc = 0x267E0Cu;
            goto label_267e0c;
        }
    }
    ctx->pc = 0x267E04u;
label_267e04:
    // 0x267e04: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x267E04u;
    {
        const bool branch_taken_0x267e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E04u;
            // 0x267e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e04) {
            ctx->pc = 0x267E80u;
            goto label_267e80;
        }
    }
    ctx->pc = 0x267E0Cu;
label_267e0c:
    // 0x267e0c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267E0Cu;
    SET_GPR_U32(ctx, 31, 0x267E14u);
    ctx->pc = 0x267E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E0Cu;
            // 0x267e10: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E14u; }
        if (ctx->pc != 0x267E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E14u; }
        if (ctx->pc != 0x267E14u) { return; }
    }
    ctx->pc = 0x267E14u;
label_267e14:
    // 0x267e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x267e18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e1c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267E1Cu;
    SET_GPR_U32(ctx, 31, 0x267E24u);
    ctx->pc = 0x267E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E1Cu;
            // 0x267e20: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E24u; }
        if (ctx->pc != 0x267E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E24u; }
        if (ctx->pc != 0x267E24u) { return; }
    }
    ctx->pc = 0x267E24u;
label_267e24:
    // 0x267e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e28: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267E28u;
    SET_GPR_U32(ctx, 31, 0x267E30u);
    ctx->pc = 0x267E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E28u;
            // 0x267e2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E30u; }
        if (ctx->pc != 0x267E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E30u; }
        if (ctx->pc != 0x267E30u) { return; }
    }
    ctx->pc = 0x267E30u;
label_267e30:
    // 0x267e30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x267e30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e34: 0xc04e780  jal         func_139E00
    ctx->pc = 0x267E34u;
    SET_GPR_U32(ctx, 31, 0x267E3Cu);
    ctx->pc = 0x267E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E34u;
            // 0x267e38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E3Cu; }
        if (ctx->pc != 0x267E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E3Cu; }
        if (ctx->pc != 0x267E3Cu) { return; }
    }
    ctx->pc = 0x267E3Cu;
label_267e3c:
    // 0x267e3c: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x267e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x267e40: 0x2133021  addu        $a2, $s0, $s3
    ctx->pc = 0x267e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x267e44: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x267e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e48: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x267e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e4c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x267e4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e50: 0x24849810  addiu       $a0, $a0, -0x67F0
    ctx->pc = 0x267e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    // 0x267e54: 0xc07ba1c  jal         func_1EE870
    ctx->pc = 0x267E54u;
    SET_GPR_U32(ctx, 31, 0x267E5Cu);
    ctx->pc = 0x267E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E54u;
            // 0x267e58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE870u;
    if (runtime->hasFunction(0x1EE870u)) {
        auto targetFn = runtime->lookupFunction(0x1EE870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E5Cu; }
        if (ctx->pc != 0x267E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadDngInfo__11CDngFreeMapFP9mgCMemoryiiii_0x1ee870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E5Cu; }
        if (ctx->pc != 0x267E5Cu) { return; }
    }
    ctx->pc = 0x267E5Cu;
label_267e5c:
    // 0x267e5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e60: 0xc04e704  jal         func_139C10
    ctx->pc = 0x267E60u;
    SET_GPR_U32(ctx, 31, 0x267E68u);
    ctx->pc = 0x267E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E60u;
            // 0x267e64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E68u; }
        if (ctx->pc != 0x267E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E68u; }
        if (ctx->pc != 0x267E68u) { return; }
    }
    ctx->pc = 0x267E68u;
label_267e68:
    // 0x267e68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267E68u;
    {
        const bool branch_taken_0x267e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E68u;
            // 0x267e6c: 0x3c0101ef  lui         $at, 0x1EF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)495 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e68) {
            ctx->pc = 0x267E78u;
            goto label_267e78;
        }
    }
    ctx->pc = 0x267E70u;
    // 0x267e70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267E70u;
    {
        const bool branch_taken_0x267e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E70u;
            // 0x267e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e70) {
            ctx->pc = 0x267E80u;
            goto label_267e80;
        }
    }
    ctx->pc = 0x267E78u;
label_267e78:
    // 0x267e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267e7c: 0xa0209818  sb          $zero, -0x67E8($at)
    ctx->pc = 0x267e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294940696), (uint8_t)GPR_U32(ctx, 0));
label_267e80:
    // 0x267e80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x267e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267e84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x267e84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267e88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x267e88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267e8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267e90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267e94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x267E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E9Cu;
            // 0x267ea0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267EA4u;
}
