#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_REFERENCE__FP12RS_STACKDATAi
// Address: 0x271a00 - 0x271b50
void ps2__OBJS_REFERENCE__FP12RS_STACKDATAi_0x271a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_REFERENCE__FP12RS_STACKDATAi_0x271a00");
#endif

    switch (ctx->pc) {
        case 0x271a34u: goto label_271a34;
        case 0x271a58u: goto label_271a58;
        case 0x271ac0u: goto label_271ac0;
        case 0x271ad0u: goto label_271ad0;
        case 0x271adcu: goto label_271adc;
        case 0x271aecu: goto label_271aec;
        case 0x271afcu: goto label_271afc;
        case 0x271b08u: goto label_271b08;
        case 0x271b20u: goto label_271b20;
        case 0x271b38u: goto label_271b38;
        default: break;
    }

    ctx->pc = 0x271a00u;

    // 0x271a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x271a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x271a04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x271a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x271a08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x271a0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271a10: 0x10a20034  beq         $a1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x271A10u;
    {
        const bool branch_taken_0x271a10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x271A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A10u;
            // 0x271a14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a10) {
            ctx->pc = 0x271AE4u;
            goto label_271ae4;
        }
    }
    ctx->pc = 0x271A18u;
    // 0x271a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271a1c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271A1Cu;
    {
        const bool branch_taken_0x271a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x271a1c) {
            ctx->pc = 0x271A2Cu;
            goto label_271a2c;
        }
    }
    ctx->pc = 0x271A24u;
    // 0x271a24: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x271A24u;
    {
        const bool branch_taken_0x271a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A24u;
            // 0x271a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a24) {
            ctx->pc = 0x271B10u;
            goto label_271b10;
        }
    }
    ctx->pc = 0x271A2Cu;
label_271a2c:
    // 0x271a2c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271A2Cu;
    SET_GPR_U32(ctx, 31, 0x271A34u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271A34u; }
        if (ctx->pc != 0x271A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271A34u; }
        if (ctx->pc != 0x271A34u) { return; }
    }
    ctx->pc = 0x271A34u;
label_271a34:
    // 0x271a34: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x271a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x271a38: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x271a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x271a3c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271A3Cu;
    {
        const bool branch_taken_0x271a3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A3Cu;
            // 0x271a40: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a3c) {
            ctx->pc = 0x271A4Cu;
            goto label_271a4c;
        }
    }
    ctx->pc = 0x271A44u;
    // 0x271a44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x271A44u;
    {
        const bool branch_taken_0x271a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A44u;
            // 0x271a48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a44) {
            ctx->pc = 0x271AA8u;
            goto label_271aa8;
        }
    }
    ctx->pc = 0x271A4Cu;
label_271a4c:
    // 0x271a4c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x271a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x271a50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271A50u;
    {
        const bool branch_taken_0x271a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A50u;
            // 0x271a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a50) {
            ctx->pc = 0x271A80u;
            goto label_271a80;
        }
    }
    ctx->pc = 0x271A58u;
label_271a58:
    // 0x271a58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x271a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271a5c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x271A5Cu;
    {
        const bool branch_taken_0x271a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x271a5c) {
            ctx->pc = 0x271A8Cu;
            goto label_271a8c;
        }
    }
    ctx->pc = 0x271A64u;
    // 0x271a64: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x271a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x271a68: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271A68u;
    {
        const bool branch_taken_0x271a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x271a68) {
            ctx->pc = 0x271A78u;
            goto label_271a78;
        }
    }
    ctx->pc = 0x271A70u;
    // 0x271a70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271A70u;
    {
        const bool branch_taken_0x271a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A70u;
            // 0x271a74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a70) {
            ctx->pc = 0x271A80u;
            goto label_271a80;
        }
    }
    ctx->pc = 0x271A78u;
label_271a78:
    // 0x271a78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271A78u;
    {
        const bool branch_taken_0x271a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A78u;
            // 0x271a7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a78) {
            ctx->pc = 0x271AA8u;
            goto label_271aa8;
        }
    }
    ctx->pc = 0x271A80u;
label_271a80:
    // 0x271a80: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x271a80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x271a84: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x271A84u;
    {
        const bool branch_taken_0x271a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271a84) {
            ctx->pc = 0x271A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271a58;
        }
    }
    ctx->pc = 0x271A8Cu;
label_271a8c:
    // 0x271a8c: 0x0  nop
    ctx->pc = 0x271a8cu;
    // NOP
    // 0x271a90: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x271A90u;
    {
        const bool branch_taken_0x271a90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x271A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A90u;
            // 0x271a94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a90) {
            ctx->pc = 0x271AA0u;
            goto label_271aa0;
        }
    }
    ctx->pc = 0x271A98u;
    // 0x271a98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271A98u;
    {
        const bool branch_taken_0x271a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271a98) {
            ctx->pc = 0x271AA8u;
            goto label_271aa8;
        }
    }
    ctx->pc = 0x271AA0u;
label_271aa0:
    // 0x271aa0: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x271aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x271aa4: 0x0  nop
    ctx->pc = 0x271aa4u;
    // NOP
label_271aa8:
    // 0x271aa8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x271AA8u;
    {
        const bool branch_taken_0x271aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x271AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271AA8u;
            // 0x271aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271aa8) {
            ctx->pc = 0x271AB8u;
            goto label_271ab8;
        }
    }
    ctx->pc = 0x271AB0u;
    // 0x271ab0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x271AB0u;
    {
        const bool branch_taken_0x271ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271AB0u;
            // 0x271ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ab0) {
            ctx->pc = 0x271B3Cu;
            goto label_271b3c;
        }
    }
    ctx->pc = 0x271AB8u;
label_271ab8:
    // 0x271ab8: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271AB8u;
    SET_GPR_U32(ctx, 31, 0x271AC0u);
    ctx->pc = 0x271ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271AB8u;
            // 0x271abc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AC0u; }
        if (ctx->pc != 0x271AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AC0u; }
        if (ctx->pc != 0x271AC0u) { return; }
    }
    ctx->pc = 0x271AC0u;
label_271ac0:
    // 0x271ac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ac4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x271ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271ac8: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x271AC8u;
    SET_GPR_U32(ctx, 31, 0x271AD0u);
    ctx->pc = 0x271ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271AC8u;
            // 0x271acc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AD0u; }
        if (ctx->pc != 0x271AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AD0u; }
        if (ctx->pc != 0x271AD0u) { return; }
    }
    ctx->pc = 0x271AD0u;
label_271ad0:
    // 0x271ad0: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x271ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x271ad4: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x271AD4u;
    SET_GPR_U32(ctx, 31, 0x271ADCu);
    ctx->pc = 0x271AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271AD4u;
            // 0x271ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271ADCu; }
        if (ctx->pc != 0x271ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271ADCu; }
        if (ctx->pc != 0x271ADCu) { return; }
    }
    ctx->pc = 0x271ADCu;
label_271adc:
    // 0x271adc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x271ADCu;
    {
        const bool branch_taken_0x271adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271ADCu;
            // 0x271ae0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271adc) {
            ctx->pc = 0x271B18u;
            goto label_271b18;
        }
    }
    ctx->pc = 0x271AE4u;
label_271ae4:
    // 0x271ae4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271AE4u;
    SET_GPR_U32(ctx, 31, 0x271AECu);
    ctx->pc = 0x271AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271AE4u;
            // 0x271ae8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AECu; }
        if (ctx->pc != 0x271AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AECu; }
        if (ctx->pc != 0x271AECu) { return; }
    }
    ctx->pc = 0x271AECu;
label_271aec:
    // 0x271aec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271af0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x271af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271af4: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x271AF4u;
    SET_GPR_U32(ctx, 31, 0x271AFCu);
    ctx->pc = 0x271AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271AF4u;
            // 0x271af8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AFCu; }
        if (ctx->pc != 0x271AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271AFCu; }
        if (ctx->pc != 0x271AFCu) { return; }
    }
    ctx->pc = 0x271AFCu;
label_271afc:
    // 0x271afc: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x271afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x271b00: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271B00u;
    SET_GPR_U32(ctx, 31, 0x271B08u);
    ctx->pc = 0x271B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271B00u;
            // 0x271b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B08u; }
        if (ctx->pc != 0x271B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B08u; }
        if (ctx->pc != 0x271B08u) { return; }
    }
    ctx->pc = 0x271B08u;
label_271b08:
    // 0x271b08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271B08u;
    {
        const bool branch_taken_0x271b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B08u;
            // 0x271b0c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b08) {
            ctx->pc = 0x271B18u;
            goto label_271b18;
        }
    }
    ctx->pc = 0x271B10u;
label_271b10:
    // 0x271b10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271B10u;
    {
        const bool branch_taken_0x271b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B10u;
            // 0x271b14: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b10) {
            ctx->pc = 0x271B40u;
            goto label_271b40;
        }
    }
    ctx->pc = 0x271B18u;
label_271b18:
    // 0x271b18: 0xc098a44  jal         func_262910
    ctx->pc = 0x271B18u;
    SET_GPR_U32(ctx, 31, 0x271B20u);
    ctx->pc = 0x271B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271B18u;
            // 0x271b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B20u; }
        if (ctx->pc != 0x271B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B20u; }
        if (ctx->pc != 0x271B20u) { return; }
    }
    ctx->pc = 0x271B20u;
label_271b20:
    // 0x271b20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271B20u;
    {
        const bool branch_taken_0x271b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B20u;
            // 0x271b24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b20) {
            ctx->pc = 0x271B30u;
            goto label_271b30;
        }
    }
    ctx->pc = 0x271B28u;
    // 0x271b28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271B28u;
    {
        const bool branch_taken_0x271b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B28u;
            // 0x271b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b28) {
            ctx->pc = 0x271B3Cu;
            goto label_271b3c;
        }
    }
    ctx->pc = 0x271B30u;
label_271b30:
    // 0x271b30: 0xc0973a0  jal         func_25CE80
    ctx->pc = 0x271B30u;
    SET_GPR_U32(ctx, 31, 0x271B38u);
    ctx->pc = 0x271B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271B30u;
            // 0x271b34: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CE80u;
    if (runtime->hasFunction(0x25CE80u)) {
        auto targetFn = runtime->lookupFunction(0x25CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B38u; }
        if (ctx->pc != 0x271B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Reference__12CSceneObjSeqFPfi_0x25ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B38u; }
        if (ctx->pc != 0x271B38u) { return; }
    }
    ctx->pc = 0x271B38u;
label_271b38:
    // 0x271b38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271b3c:
    // 0x271b3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x271b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_271b40:
    // 0x271b40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271b44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271b48: 0x3e00008  jr          $ra
    ctx->pc = 0x271B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B48u;
            // 0x271b4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271B50u;
}
