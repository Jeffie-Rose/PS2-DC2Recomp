#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SET_ROT__FP12RS_STACKDATAi
// Address: 0x274a80 - 0x274bec
void ps2__EOH_SET_ROT__FP12RS_STACKDATAi_0x274a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SET_ROT__FP12RS_STACKDATAi_0x274a80");
#endif

    switch (ctx->pc) {
        case 0x274ab8u: goto label_274ab8;
        case 0x274adcu: goto label_274adc;
        case 0x274b48u: goto label_274b48;
        case 0x274b58u: goto label_274b58;
        case 0x274b68u: goto label_274b68;
        case 0x274b78u: goto label_274b78;
        case 0x274b94u: goto label_274b94;
        case 0x274ba4u: goto label_274ba4;
        case 0x274bb4u: goto label_274bb4;
        case 0x274bd4u: goto label_274bd4;
        default: break;
    }

    ctx->pc = 0x274a80u;

    // 0x274a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x274a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x274a84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x274a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x274a88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x274a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x274a8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x274a90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274a94: 0x10a20032  beq         $a1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x274A94u;
    {
        const bool branch_taken_0x274a94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x274A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274A94u;
            // 0x274a98: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a94) {
            ctx->pc = 0x274B60u;
            goto label_274b60;
        }
    }
    ctx->pc = 0x274A9Cu;
    // 0x274a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274aa0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274AA0u;
    {
        const bool branch_taken_0x274aa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x274aa0) {
            ctx->pc = 0x274AB0u;
            goto label_274ab0;
        }
    }
    ctx->pc = 0x274AA8u;
    // 0x274aa8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x274AA8u;
    {
        const bool branch_taken_0x274aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274AA8u;
            // 0x274aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274aa8) {
            ctx->pc = 0x274B80u;
            goto label_274b80;
        }
    }
    ctx->pc = 0x274AB0u;
label_274ab0:
    // 0x274ab0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274AB0u;
    SET_GPR_U32(ctx, 31, 0x274AB8u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274AB8u; }
        if (ctx->pc != 0x274AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274AB8u; }
        if (ctx->pc != 0x274AB8u) { return; }
    }
    ctx->pc = 0x274AB8u;
label_274ab8:
    // 0x274ab8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x274ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x274abc: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x274abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x274ac0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x274AC0u;
    {
        const bool branch_taken_0x274ac0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x274AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274AC0u;
            // 0x274ac4: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ac0) {
            ctx->pc = 0x274AD0u;
            goto label_274ad0;
        }
    }
    ctx->pc = 0x274AC8u;
    // 0x274ac8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x274AC8u;
    {
        const bool branch_taken_0x274ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274AC8u;
            // 0x274acc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ac8) {
            ctx->pc = 0x274B30u;
            goto label_274b30;
        }
    }
    ctx->pc = 0x274AD0u;
label_274ad0:
    // 0x274ad0: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x274ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x274ad4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274AD4u;
    {
        const bool branch_taken_0x274ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274AD4u;
            // 0x274ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ad4) {
            ctx->pc = 0x274B08u;
            goto label_274b08;
        }
    }
    ctx->pc = 0x274ADCu;
label_274adc:
    // 0x274adc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x274adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x274ae0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x274AE0u;
    {
        const bool branch_taken_0x274ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x274ae0) {
            ctx->pc = 0x274B14u;
            goto label_274b14;
        }
    }
    ctx->pc = 0x274AE8u;
    // 0x274ae8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x274ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x274aec: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x274AECu;
    {
        const bool branch_taken_0x274aec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x274aec) {
            ctx->pc = 0x274AFCu;
            goto label_274afc;
        }
    }
    ctx->pc = 0x274AF4u;
    // 0x274af4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x274AF4u;
    {
        const bool branch_taken_0x274af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274AF4u;
            // 0x274af8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274af4) {
            ctx->pc = 0x274B08u;
            goto label_274b08;
        }
    }
    ctx->pc = 0x274AFCu;
label_274afc:
    // 0x274afc: 0x0  nop
    ctx->pc = 0x274afcu;
    // NOP
    // 0x274b00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274B00u;
    {
        const bool branch_taken_0x274b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B00u;
            // 0x274b04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b00) {
            ctx->pc = 0x274B30u;
            goto label_274b30;
        }
    }
    ctx->pc = 0x274B08u;
label_274b08:
    // 0x274b08: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x274b08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x274b0c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x274B0Cu;
    {
        const bool branch_taken_0x274b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274b0c) {
            ctx->pc = 0x274ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274adc;
        }
    }
    ctx->pc = 0x274B14u;
label_274b14:
    // 0x274b14: 0x0  nop
    ctx->pc = 0x274b14u;
    // NOP
    // 0x274b18: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x274B18u;
    {
        const bool branch_taken_0x274b18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x274B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B18u;
            // 0x274b1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b18) {
            ctx->pc = 0x274B28u;
            goto label_274b28;
        }
    }
    ctx->pc = 0x274B20u;
    // 0x274b20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274B20u;
    {
        const bool branch_taken_0x274b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b20) {
            ctx->pc = 0x274B30u;
            goto label_274b30;
        }
    }
    ctx->pc = 0x274B28u;
label_274b28:
    // 0x274b28: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x274b28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x274b2c: 0x0  nop
    ctx->pc = 0x274b2cu;
    // NOP
label_274b30:
    // 0x274b30: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x274B30u;
    {
        const bool branch_taken_0x274b30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x274B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B30u;
            // 0x274b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b30) {
            ctx->pc = 0x274B40u;
            goto label_274b40;
        }
    }
    ctx->pc = 0x274B38u;
    // 0x274b38: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x274B38u;
    {
        const bool branch_taken_0x274b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B38u;
            // 0x274b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b38) {
            ctx->pc = 0x274BD4u;
            goto label_274bd4;
        }
    }
    ctx->pc = 0x274B40u;
label_274b40:
    // 0x274b40: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x274B40u;
    SET_GPR_U32(ctx, 31, 0x274B48u);
    ctx->pc = 0x274B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274B40u;
            // 0x274b44: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B48u; }
        if (ctx->pc != 0x274B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B48u; }
        if (ctx->pc != 0x274B48u) { return; }
    }
    ctx->pc = 0x274B48u;
label_274b48:
    // 0x274b48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b50: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x274B50u;
    SET_GPR_U32(ctx, 31, 0x274B58u);
    ctx->pc = 0x274B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274B50u;
            // 0x274b54: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B58u; }
        if (ctx->pc != 0x274B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B58u; }
        if (ctx->pc != 0x274B58u) { return; }
    }
    ctx->pc = 0x274B58u;
label_274b58:
    // 0x274b58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274B58u;
    {
        const bool branch_taken_0x274b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B58u;
            // 0x274b5c: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b58) {
            ctx->pc = 0x274B8Cu;
            goto label_274b8c;
        }
    }
    ctx->pc = 0x274B60u;
label_274b60:
    // 0x274b60: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274B60u;
    SET_GPR_U32(ctx, 31, 0x274B68u);
    ctx->pc = 0x274B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274B60u;
            // 0x274b64: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B68u; }
        if (ctx->pc != 0x274B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B68u; }
        if (ctx->pc != 0x274B68u) { return; }
    }
    ctx->pc = 0x274B68u;
label_274b68:
    // 0x274b68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b70: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x274B70u;
    SET_GPR_U32(ctx, 31, 0x274B78u);
    ctx->pc = 0x274B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274B70u;
            // 0x274b74: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B78u; }
        if (ctx->pc != 0x274B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B78u; }
        if (ctx->pc != 0x274B78u) { return; }
    }
    ctx->pc = 0x274B78u;
label_274b78:
    // 0x274b78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274B78u;
    {
        const bool branch_taken_0x274b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b78) {
            ctx->pc = 0x274B88u;
            goto label_274b88;
        }
    }
    ctx->pc = 0x274B80u;
label_274b80:
    // 0x274b80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x274B80u;
    {
        const bool branch_taken_0x274b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274B80u;
            // 0x274b84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b80) {
            ctx->pc = 0x274BD8u;
            goto label_274bd8;
        }
    }
    ctx->pc = 0x274B88u;
label_274b88:
    // 0x274b88: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x274b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_274b8c:
    // 0x274b8c: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x274B8Cu;
    SET_GPR_U32(ctx, 31, 0x274B94u);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B94u; }
        if (ctx->pc != 0x274B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274B94u; }
        if (ctx->pc != 0x274B94u) { return; }
    }
    ctx->pc = 0x274B94u;
label_274b94:
    // 0x274b94: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x274b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x274b98: 0x27b10044  addiu       $s1, $sp, 0x44
    ctx->pc = 0x274b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x274b9c: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x274B9Cu;
    SET_GPR_U32(ctx, 31, 0x274BA4u);
    ctx->pc = 0x274BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274B9Cu;
            // 0x274ba0: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BA4u; }
        if (ctx->pc != 0x274BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BA4u; }
        if (ctx->pc != 0x274BA4u) { return; }
    }
    ctx->pc = 0x274BA4u;
label_274ba4:
    // 0x274ba4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x274ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x274ba8: 0x27b20048  addiu       $s2, $sp, 0x48
    ctx->pc = 0x274ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x274bac: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x274BACu;
    SET_GPR_U32(ctx, 31, 0x274BB4u);
    ctx->pc = 0x274BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274BACu;
            // 0x274bb0: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BB4u; }
        if (ctx->pc != 0x274BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BB4u; }
        if (ctx->pc != 0x274BB4u) { return; }
    }
    ctx->pc = 0x274BB4u;
label_274bb4:
    // 0x274bb4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x274bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x274bb8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274bbc: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x274bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x274bc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274bc4: 0xc64e0000  lwc1        $f14, 0x0($s2)
    ctx->pc = 0x274bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x274bc8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x274bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x274bcc: 0xc097780  jal         func_25DE00
    ctx->pc = 0x274BCCu;
    SET_GPR_U32(ctx, 31, 0x274BD4u);
    ctx->pc = 0x274BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274BCCu;
            // 0x274bd0: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DE00u;
    if (runtime->hasFunction(0x25DE00u)) {
        auto targetFn = runtime->lookupFunction(0x25DE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BD4u; }
        if (ctx->pc != 0x274BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRot__10CEohMotherFifff_0x25de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274BD4u; }
        if (ctx->pc != 0x274BD4u) { return; }
    }
    ctx->pc = 0x274BD4u;
label_274bd4:
    // 0x274bd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x274bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_274bd8:
    // 0x274bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x274bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274be4: 0x3e00008  jr          $ra
    ctx->pc = 0x274BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274BE4u;
            // 0x274be8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274BECu;
}
