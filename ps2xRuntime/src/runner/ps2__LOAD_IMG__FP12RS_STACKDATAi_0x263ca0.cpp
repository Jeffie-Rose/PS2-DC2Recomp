#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_IMG__FP12RS_STACKDATAi
// Address: 0x263ca0 - 0x263e3c
void ps2__LOAD_IMG__FP12RS_STACKDATAi_0x263ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_IMG__FP12RS_STACKDATAi_0x263ca0");
#endif

    switch (ctx->pc) {
        case 0x263cd0u: goto label_263cd0;
        case 0x263ce0u: goto label_263ce0;
        case 0x263cf0u: goto label_263cf0;
        case 0x263d24u: goto label_263d24;
        case 0x263d44u: goto label_263d44;
        case 0x263d50u: goto label_263d50;
        case 0x263d70u: goto label_263d70;
        case 0x263da4u: goto label_263da4;
        case 0x263db4u: goto label_263db4;
        case 0x263dd0u: goto label_263dd0;
        case 0x263df0u: goto label_263df0;
        case 0x263e10u: goto label_263e10;
        default: break;
    }

    ctx->pc = 0x263ca0u;

    // 0x263ca0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x263ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x263ca4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x263ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x263ca8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x263ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x263cac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x263cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x263cb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x263cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x263cb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x263cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x263cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x263cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x263cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x263cc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263cc4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x263cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x263cc8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263CC8u;
    SET_GPR_U32(ctx, 31, 0x263CD0u);
    ctx->pc = 0x263CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263CC8u;
            // 0x263ccc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CD0u; }
        if (ctx->pc != 0x263CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CD0u; }
        if (ctx->pc != 0x263CD0u) { return; }
    }
    ctx->pc = 0x263CD0u;
label_263cd0:
    // 0x263cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cd4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x263cd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cd8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x263CD8u;
    SET_GPR_U32(ctx, 31, 0x263CE0u);
    ctx->pc = 0x263CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263CD8u;
            // 0x263cdc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CE0u; }
        if (ctx->pc != 0x263CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CE0u; }
        if (ctx->pc != 0x263CE0u) { return; }
    }
    ctx->pc = 0x263CE0u;
label_263ce0:
    // 0x263ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ce4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x263ce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ce8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263CE8u;
    SET_GPR_U32(ctx, 31, 0x263CF0u);
    ctx->pc = 0x263CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263CE8u;
            // 0x263cec: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CF0u; }
        if (ctx->pc != 0x263CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263CF0u; }
        if (ctx->pc != 0x263CF0u) { return; }
    }
    ctx->pc = 0x263CF0u;
label_263cf0:
    // 0x263cf0: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x263cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x263cf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x263cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263cf8: 0x8c622e80  lw          $v0, 0x2E80($v1)
    ctx->pc = 0x263cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11904)));
    // 0x263cfc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263CFCu;
    {
        const bool branch_taken_0x263cfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x263D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263CFCu;
            // 0x263d00: 0x8c632e7c  lw          $v1, 0x2E7C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263cfc) {
            ctx->pc = 0x263D10u;
            goto label_263d10;
        }
    }
    ctx->pc = 0x263D04u;
    // 0x263d04: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x263d04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x263d08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x263D08u;
    {
        const bool branch_taken_0x263d08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D08u;
            // 0x263d0c: 0x729821  addu        $s3, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d08) {
            ctx->pc = 0x263D18u;
            goto label_263d18;
        }
    }
    ctx->pc = 0x263D10u;
label_263d10:
    // 0x263d10: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x263D10u;
    {
        const bool branch_taken_0x263d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D10u;
            // 0x263d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d10) {
            ctx->pc = 0x263E14u;
            goto label_263e14;
        }
    }
    ctx->pc = 0x263D18u;
label_263d18:
    // 0x263d18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d1c: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x263D1Cu;
    SET_GPR_U32(ctx, 31, 0x263D24u);
    ctx->pc = 0x263D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263D1Cu;
            // 0x263d20: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D24u; }
        if (ctx->pc != 0x263D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D24u; }
        if (ctx->pc != 0x263D24u) { return; }
    }
    ctx->pc = 0x263D24u;
label_263d24:
    // 0x263d24: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x263d24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d28: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x263D28u;
    {
        const bool branch_taken_0x263d28 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x263D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D28u;
            // 0x263d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d28) {
            ctx->pc = 0x263D38u;
            goto label_263d38;
        }
    }
    ctx->pc = 0x263D30u;
    // 0x263d30: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x263D30u;
    {
        const bool branch_taken_0x263d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D30u;
            // 0x263d34: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d30) {
            ctx->pc = 0x263E18u;
            goto label_263e18;
        }
    }
    ctx->pc = 0x263D38u;
label_263d38:
    // 0x263d38: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x263d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x263d3c: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x263D3Cu;
    SET_GPR_U32(ctx, 31, 0x263D44u);
    ctx->pc = 0x263D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263D3Cu;
            // 0x263d40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D44u; }
        if (ctx->pc != 0x263D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D44u; }
        if (ctx->pc != 0x263D44u) { return; }
    }
    ctx->pc = 0x263D44u;
label_263d44:
    // 0x263d44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x263d44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d48: 0xc04e780  jal         func_139E00
    ctx->pc = 0x263D48u;
    SET_GPR_U32(ctx, 31, 0x263D50u);
    ctx->pc = 0x263D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263D48u;
            // 0x263d4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D50u; }
        if (ctx->pc != 0x263D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D50u; }
        if (ctx->pc != 0x263D50u) { return; }
    }
    ctx->pc = 0x263D50u;
label_263d50:
    // 0x263d50: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x263d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x263d54: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263D54u;
    {
        const bool branch_taken_0x263d54 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x263D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D54u;
            // 0x263d58: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d54) {
            ctx->pc = 0x263D64u;
            goto label_263d64;
        }
    }
    ctx->pc = 0x263D5Cu;
    // 0x263d5c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x263d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x263d60: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x263d60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_263d64:
    // 0x263d64: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x263d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x263d68: 0xc04e714  jal         func_139C50
    ctx->pc = 0x263D68u;
    SET_GPR_U32(ctx, 31, 0x263D70u);
    ctx->pc = 0x263D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263D68u;
            // 0x263d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D70u; }
        if (ctx->pc != 0x263D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D70u; }
        if (ctx->pc != 0x263D70u) { return; }
    }
    ctx->pc = 0x263D70u;
label_263d70:
    // 0x263d70: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x263d70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d74: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x263D74u;
    {
        const bool branch_taken_0x263d74 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x263D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D74u;
            // 0x263d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d74) {
            ctx->pc = 0x263D84u;
            goto label_263d84;
        }
    }
    ctx->pc = 0x263D7Cu;
    // 0x263d7c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x263D7Cu;
    {
        const bool branch_taken_0x263d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263d7c) {
            ctx->pc = 0x263E14u;
            goto label_263e14;
        }
    }
    ctx->pc = 0x263D84u;
label_263d84:
    // 0x263d84: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x263d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x263d88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263D88u;
    {
        const bool branch_taken_0x263d88 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x263D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D88u;
            // 0x263d8c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d88) {
            ctx->pc = 0x263D98u;
            goto label_263d98;
        }
    }
    ctx->pc = 0x263D90u;
    // 0x263d90: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x263d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x263d94: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x263d94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_263d98:
    // 0x263d98: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x263d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x263d9c: 0xc04e704  jal         func_139C10
    ctx->pc = 0x263D9Cu;
    SET_GPR_U32(ctx, 31, 0x263DA4u);
    ctx->pc = 0x263DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263D9Cu;
            // 0x263da0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263DA4u; }
        if (ctx->pc != 0x263DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263DA4u; }
        if (ctx->pc != 0x263DA4u) { return; }
    }
    ctx->pc = 0x263DA4u;
label_263da4:
    // 0x263da4: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x263da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x263da8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x263da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263dac: 0xc049c18  jal         func_127060
    ctx->pc = 0x263DACu;
    SET_GPR_U32(ctx, 31, 0x263DB4u);
    ctx->pc = 0x263DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263DACu;
            // 0x263db0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263DB4u; }
        if (ctx->pc != 0x263DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263DB4u; }
        if (ctx->pc != 0x263DB4u) { return; }
    }
    ctx->pc = 0x263DB4u;
label_263db4:
    // 0x263db4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x263db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x263db8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x263db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263dbc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x263dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263dc0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x263dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x263dc4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x263dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263dc8: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x263DC8u;
    SET_GPR_U32(ctx, 31, 0x263DD0u);
    ctx->pc = 0x263DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263DC8u;
            // 0x263dcc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263DD0u; }
        if (ctx->pc != 0x263DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263DD0u; }
        if (ctx->pc != 0x263DD0u) { return; }
    }
    ctx->pc = 0x263DD0u;
label_263dd0:
    // 0x263dd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x263dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x263dd4: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x263DD4u;
    {
        const bool branch_taken_0x263dd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x263DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263DD4u;
            // 0x263dd8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263dd4) {
            ctx->pc = 0x263E00u;
            goto label_263e00;
        }
    }
    ctx->pc = 0x263DDCu;
    // 0x263ddc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x263ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x263de0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x263de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263de4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x263de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263de8: 0xc0a4258  jal         func_290960
    ctx->pc = 0x263DE8u;
    SET_GPR_U32(ctx, 31, 0x263DF0u);
    ctx->pc = 0x263DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263DE8u;
            // 0x263dec: 0x2484ea80  addiu       $a0, $a0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290960u;
    if (runtime->hasFunction(0x290960u)) {
        auto targetFn = runtime->lookupFunction(0x290960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263DF0u; }
        if (ctx->pc != 0x263DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__18CEventSpriteMotherFii_0x290960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263DF0u; }
        if (ctx->pc != 0x263DF0u) { return; }
    }
    ctx->pc = 0x263DF0u;
label_263df0:
    // 0x263df0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x263DF0u;
    {
        const bool branch_taken_0x263df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263DF0u;
            // 0x263df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263df0) {
            ctx->pc = 0x263E14u;
            goto label_263e14;
        }
    }
    ctx->pc = 0x263DF8u;
    // 0x263df8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x263DF8u;
    {
        const bool branch_taken_0x263df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263DF8u;
            // 0x263dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263df8) {
            ctx->pc = 0x263E14u;
            goto label_263e14;
        }
    }
    ctx->pc = 0x263E00u;
label_263e00:
    // 0x263e00: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263E00u;
    {
        const bool branch_taken_0x263e00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x263E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E00u;
            // 0x263e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e00) {
            ctx->pc = 0x263E10u;
            goto label_263e10;
        }
    }
    ctx->pc = 0x263E08u;
    // 0x263e08: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x263E08u;
    SET_GPR_U32(ctx, 31, 0x263E10u);
    ctx->pc = 0x263E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263E08u;
            // 0x263e0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E10u; }
        if (ctx->pc != 0x263E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E10u; }
        if (ctx->pc != 0x263E10u) { return; }
    }
    ctx->pc = 0x263E10u;
label_263e10:
    // 0x263e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263e14:
    // 0x263e14: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x263e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_263e18:
    // 0x263e18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x263e18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x263e1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x263e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263e20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x263e20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263e24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x263e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x263e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263e34: 0x3e00008  jr          $ra
    ctx->pc = 0x263E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E34u;
            // 0x263e38: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263E3Cu;
}
