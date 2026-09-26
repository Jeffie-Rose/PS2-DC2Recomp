#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_ITEM__FP12RS_STACKDATAi
// Address: 0x263eb0 - 0x2640b0
void ps2__LOAD_ITEM__FP12RS_STACKDATAi_0x263eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_ITEM__FP12RS_STACKDATAi_0x263eb0");
#endif

    switch (ctx->pc) {
        case 0x263f08u: goto label_263f08;
        case 0x263f2cu: goto label_263f2c;
        case 0x263f9cu: goto label_263f9c;
        case 0x263facu: goto label_263fac;
        case 0x263fbcu: goto label_263fbc;
        case 0x263fccu: goto label_263fcc;
        case 0x263fe4u: goto label_263fe4;
        case 0x263ff8u: goto label_263ff8;
        case 0x264008u: goto label_264008;
        case 0x264018u: goto label_264018;
        case 0x264028u: goto label_264028;
        case 0x264040u: goto label_264040;
        case 0x26405cu: goto label_26405c;
        case 0x264068u: goto label_264068;
        case 0x264080u: goto label_264080;
        default: break;
    }

    ctx->pc = 0x263eb0u;

    // 0x263eb0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x263eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x263eb4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x263eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x263eb8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x263eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x263ebc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x263ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x263ec0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x263ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x263ec4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x263ec4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ec8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x263ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x263ecc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x263eccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ed0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x263ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x263ed4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x263ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x263edc: 0x12a20043  beq         $s5, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x263EDCu;
    {
        const bool branch_taken_0x263edc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x263EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263EDCu;
            // 0x263ee0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263edc) {
            ctx->pc = 0x263FECu;
            goto label_263fec;
        }
    }
    ctx->pc = 0x263EE4u;
    // 0x263ee4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x263ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x263ee8: 0x12a20040  beq         $s5, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x263EE8u;
    {
        const bool branch_taken_0x263ee8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x263EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263EE8u;
            // 0x263eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ee8) {
            ctx->pc = 0x263FECu;
            goto label_263fec;
        }
    }
    ctx->pc = 0x263EF0u;
    // 0x263ef0: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263EF0u;
    {
        const bool branch_taken_0x263ef0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x263ef0) {
            ctx->pc = 0x263F00u;
            goto label_263f00;
        }
    }
    ctx->pc = 0x263EF8u;
    // 0x263ef8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x263EF8u;
    {
        const bool branch_taken_0x263ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263EF8u;
            // 0x263efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ef8) {
            ctx->pc = 0x264048u;
            goto label_264048;
        }
    }
    ctx->pc = 0x263F00u;
label_263f00:
    // 0x263f00: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263F00u;
    SET_GPR_U32(ctx, 31, 0x263F08u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263F08u; }
        if (ctx->pc != 0x263F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263F08u; }
        if (ctx->pc != 0x263F08u) { return; }
    }
    ctx->pc = 0x263F08u;
label_263f08:
    // 0x263f08: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x263f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x263f0c: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x263f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x263f10: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x263F10u;
    {
        const bool branch_taken_0x263f10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x263F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F10u;
            // 0x263f14: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f10) {
            ctx->pc = 0x263F20u;
            goto label_263f20;
        }
    }
    ctx->pc = 0x263F18u;
    // 0x263f18: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x263F18u;
    {
        const bool branch_taken_0x263f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F18u;
            // 0x263f1c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f18) {
            ctx->pc = 0x263F84u;
            goto label_263f84;
        }
    }
    ctx->pc = 0x263F20u;
label_263f20:
    // 0x263f20: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x263f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x263f24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x263F24u;
    {
        const bool branch_taken_0x263f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F24u;
            // 0x263f28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f24) {
            ctx->pc = 0x263F58u;
            goto label_263f58;
        }
    }
    ctx->pc = 0x263F2Cu;
label_263f2c:
    // 0x263f2c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x263f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x263f30: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x263F30u;
    {
        const bool branch_taken_0x263f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263f30) {
            ctx->pc = 0x263F64u;
            goto label_263f64;
        }
    }
    ctx->pc = 0x263F38u;
    // 0x263f38: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x263f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x263f3c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x263F3Cu;
    {
        const bool branch_taken_0x263f3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f3c) {
            ctx->pc = 0x263F4Cu;
            goto label_263f4c;
        }
    }
    ctx->pc = 0x263F44u;
    // 0x263f44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263F44u;
    {
        const bool branch_taken_0x263f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F44u;
            // 0x263f48: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f44) {
            ctx->pc = 0x263F58u;
            goto label_263f58;
        }
    }
    ctx->pc = 0x263F4Cu;
label_263f4c:
    // 0x263f4c: 0x0  nop
    ctx->pc = 0x263f4cu;
    // NOP
    // 0x263f50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x263F50u;
    {
        const bool branch_taken_0x263f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F50u;
            // 0x263f54: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f50) {
            ctx->pc = 0x263F84u;
            goto label_263f84;
        }
    }
    ctx->pc = 0x263F58u;
label_263f58:
    // 0x263f58: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x263f58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x263f5c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x263F5Cu;
    {
        const bool branch_taken_0x263f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263f5c) {
            ctx->pc = 0x263F2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263f2c;
        }
    }
    ctx->pc = 0x263F64u;
label_263f64:
    // 0x263f64: 0x0  nop
    ctx->pc = 0x263f64u;
    // NOP
    // 0x263f68: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x263F68u;
    {
        const bool branch_taken_0x263f68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x263F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F68u;
            // 0x263f6c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f68) {
            ctx->pc = 0x263F78u;
            goto label_263f78;
        }
    }
    ctx->pc = 0x263F70u;
    // 0x263f70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x263F70u;
    {
        const bool branch_taken_0x263f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f70) {
            ctx->pc = 0x263F84u;
            goto label_263f84;
        }
    }
    ctx->pc = 0x263F78u;
label_263f78:
    // 0x263f78: 0x8cd50008  lw          $s5, 0x8($a2)
    ctx->pc = 0x263f78u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x263f7c: 0x8cd40004  lw          $s4, 0x4($a2)
    ctx->pc = 0x263f7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x263f80: 0x0  nop
    ctx->pc = 0x263f80u;
    // NOP
label_263f84:
    // 0x263f84: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x263F84u;
    {
        const bool branch_taken_0x263f84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x263F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F84u;
            // 0x263f88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f84) {
            ctx->pc = 0x263F94u;
            goto label_263f94;
        }
    }
    ctx->pc = 0x263F8Cu;
    // 0x263f8c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x263F8Cu;
    {
        const bool branch_taken_0x263f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F8Cu;
            // 0x263f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f8c) {
            ctx->pc = 0x26408Cu;
            goto label_26408c;
        }
    }
    ctx->pc = 0x263F94u;
label_263f94:
    // 0x263f94: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x263F94u;
    SET_GPR_U32(ctx, 31, 0x263F9Cu);
    ctx->pc = 0x263F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263F94u;
            // 0x263f98: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263F9Cu; }
        if (ctx->pc != 0x263F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263F9Cu; }
        if (ctx->pc != 0x263F9Cu) { return; }
    }
    ctx->pc = 0x263F9Cu;
label_263f9c:
    // 0x263f9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fa4: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x263FA4u;
    SET_GPR_U32(ctx, 31, 0x263FACu);
    ctx->pc = 0x263FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263FA4u;
            // 0x263fa8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FACu; }
        if (ctx->pc != 0x263FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FACu; }
        if (ctx->pc != 0x263FACu) { return; }
    }
    ctx->pc = 0x263FACu;
label_263fac:
    // 0x263fac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x263fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fb4: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x263FB4u;
    SET_GPR_U32(ctx, 31, 0x263FBCu);
    ctx->pc = 0x263FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263FB4u;
            // 0x263fb8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FBCu; }
        if (ctx->pc != 0x263FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FBCu; }
        if (ctx->pc != 0x263FBCu) { return; }
    }
    ctx->pc = 0x263FBCu;
label_263fbc:
    // 0x263fbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fc0: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x263fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x263fc4: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x263FC4u;
    SET_GPR_U32(ctx, 31, 0x263FCCu);
    ctx->pc = 0x263FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263FC4u;
            // 0x263fc8: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FCCu; }
        if (ctx->pc != 0x263FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FCCu; }
        if (ctx->pc != 0x263FCCu) { return; }
    }
    ctx->pc = 0x263FCCu;
label_263fcc:
    // 0x263fcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x263fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fd0: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x263fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x263fd4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x263FD4u;
    {
        const bool branch_taken_0x263fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263FD4u;
            // 0x263fd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fd4) {
            ctx->pc = 0x264054u;
            goto label_264054;
        }
    }
    ctx->pc = 0x263FDCu;
    // 0x263fdc: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x263FDCu;
    SET_GPR_U32(ctx, 31, 0x263FE4u);
    ctx->pc = 0x263FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263FDCu;
            // 0x263fe0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FE4u; }
        if (ctx->pc != 0x263FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FE4u; }
        if (ctx->pc != 0x263FE4u) { return; }
    }
    ctx->pc = 0x263FE4u;
label_263fe4:
    // 0x263fe4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x263FE4u;
    {
        const bool branch_taken_0x263fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263FE4u;
            // 0x263fe8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fe4) {
            ctx->pc = 0x264050u;
            goto label_264050;
        }
    }
    ctx->pc = 0x263FECu;
label_263fec:
    // 0x263fec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ff0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263FF0u;
    SET_GPR_U32(ctx, 31, 0x263FF8u);
    ctx->pc = 0x263FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263FF0u;
            // 0x263ff4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FF8u; }
        if (ctx->pc != 0x263FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FF8u; }
        if (ctx->pc != 0x263FF8u) { return; }
    }
    ctx->pc = 0x263FF8u;
label_263ff8:
    // 0x263ff8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x263ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264000: 0xc097e18  jal         func_25F860
    ctx->pc = 0x264000u;
    SET_GPR_U32(ctx, 31, 0x264008u);
    ctx->pc = 0x264004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264000u;
            // 0x264004: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264008u; }
        if (ctx->pc != 0x264008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264008u; }
        if (ctx->pc != 0x264008u) { return; }
    }
    ctx->pc = 0x264008u;
label_264008:
    // 0x264008: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x264008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26400c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26400cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264010: 0xc097e48  jal         func_25F920
    ctx->pc = 0x264010u;
    SET_GPR_U32(ctx, 31, 0x264018u);
    ctx->pc = 0x264014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264010u;
            // 0x264014: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264018u; }
        if (ctx->pc != 0x264018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264018u; }
        if (ctx->pc != 0x264018u) { return; }
    }
    ctx->pc = 0x264018u;
label_264018:
    // 0x264018: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x264018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26401c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x26401cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x264020: 0xc097e18  jal         func_25F860
    ctx->pc = 0x264020u;
    SET_GPR_U32(ctx, 31, 0x264028u);
    ctx->pc = 0x264024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264020u;
            // 0x264024: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264028u; }
        if (ctx->pc != 0x264028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264028u; }
        if (ctx->pc != 0x264028u) { return; }
    }
    ctx->pc = 0x264028u;
label_264028:
    // 0x264028: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x264028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26402c: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x26402cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x264030: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264030u;
    {
        const bool branch_taken_0x264030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264030u;
            // 0x264034: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264030) {
            ctx->pc = 0x264050u;
            goto label_264050;
        }
    }
    ctx->pc = 0x264038u;
    // 0x264038: 0xc097e18  jal         func_25F860
    ctx->pc = 0x264038u;
    SET_GPR_U32(ctx, 31, 0x264040u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264040u; }
        if (ctx->pc != 0x264040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264040u; }
        if (ctx->pc != 0x264040u) { return; }
    }
    ctx->pc = 0x264040u;
label_264040:
    // 0x264040: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264040u;
    {
        const bool branch_taken_0x264040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264040u;
            // 0x264044: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264040) {
            ctx->pc = 0x264050u;
            goto label_264050;
        }
    }
    ctx->pc = 0x264048u;
label_264048:
    // 0x264048: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x264048u;
    {
        const bool branch_taken_0x264048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264048u;
            // 0x26404c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264048) {
            ctx->pc = 0x264090u;
            goto label_264090;
        }
    }
    ctx->pc = 0x264050u;
label_264050:
    // 0x264050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_264054:
    // 0x264054: 0xc065750  jal         func_195D40
    ctx->pc = 0x264054u;
    SET_GPR_U32(ctx, 31, 0x26405Cu);
    ctx->pc = 0x264058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264054u;
            // 0x264058: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26405Cu; }
        if (ctx->pc != 0x26405Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26405Cu; }
        if (ctx->pc != 0x26405Cu) { return; }
    }
    ctx->pc = 0x26405Cu;
label_26405c:
    // 0x26405c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264060: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x264060u;
    SET_GPR_U32(ctx, 31, 0x264068u);
    ctx->pc = 0x264064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264060u;
            // 0x264064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264068u; }
        if (ctx->pc != 0x264068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264068u; }
        if (ctx->pc != 0x264068u) { return; }
    }
    ctx->pc = 0x264068u;
label_264068:
    // 0x264068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264068u;
    {
        const bool branch_taken_0x264068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26406Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264068u;
            // 0x26406c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264068) {
            ctx->pc = 0x264088u;
            goto label_264088;
        }
    }
    ctx->pc = 0x264070u;
    // 0x264070: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x264070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264074: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x264074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x264078: 0xc098b9c  jal         func_262E70
    ctx->pc = 0x264078u;
    SET_GPR_U32(ctx, 31, 0x264080u);
    ctx->pc = 0x26407Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264078u;
            // 0x26407c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262E70u;
    if (runtime->hasFunction(0x262E70u)) {
        auto targetFn = runtime->lookupFunction(0x262E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264080u; }
        if (ctx->pc != 0x264080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__LOAD_CHARA_sub__FiPPciPUi_0x262e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264080u; }
        if (ctx->pc != 0x264080u) { return; }
    }
    ctx->pc = 0x264080u;
label_264080:
    // 0x264080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x264080u;
    {
        const bool branch_taken_0x264080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264080) {
            ctx->pc = 0x26408Cu;
            goto label_26408c;
        }
    }
    ctx->pc = 0x264088u;
label_264088:
    // 0x264088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x264088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26408c:
    // 0x26408c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26408cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_264090:
    // 0x264090: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x264090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264094: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x264094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26409c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26409cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2640a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2640a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2640a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2640a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2640a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2640A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2640ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2640A8u;
            // 0x2640ac: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2640B0u;
}
