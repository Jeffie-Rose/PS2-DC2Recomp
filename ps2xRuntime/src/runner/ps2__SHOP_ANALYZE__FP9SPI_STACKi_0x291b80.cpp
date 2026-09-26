#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SHOP_ANALYZE__FP9SPI_STACKi
// Address: 0x291b80 - 0x291d30
void ps2__SHOP_ANALYZE__FP9SPI_STACKi_0x291b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SHOP_ANALYZE__FP9SPI_STACKi_0x291b80");
#endif

    switch (ctx->pc) {
        case 0x291ba4u: goto label_291ba4;
        case 0x291bd4u: goto label_291bd4;
        case 0x291c04u: goto label_291c04;
        case 0x291c0cu: goto label_291c0c;
        case 0x291c54u: goto label_291c54;
        case 0x291c5cu: goto label_291c5c;
        case 0x291ca4u: goto label_291ca4;
        case 0x291cacu: goto label_291cac;
        case 0x291ce4u: goto label_291ce4;
        case 0x291cf0u: goto label_291cf0;
        default: break;
    }

    ctx->pc = 0x291b80u;

    // 0x291b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x291b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x291b84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x291b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x291b88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x291b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x291b8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x291b90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291b94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291b98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x291b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b9c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x291B9Cu;
    SET_GPR_U32(ctx, 31, 0x291BA4u);
    ctx->pc = 0x291BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B9Cu;
            // 0x291ba0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BA4u; }
        if (ctx->pc != 0x291BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BA4u; }
        if (ctx->pc != 0x291BA4u) { return; }
    }
    ctx->pc = 0x291BA4u;
label_291ba4:
    // 0x291ba4: 0x87839854  lh          $v1, -0x67AC($gp)
    ctx->pc = 0x291ba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940756)));
    // 0x291ba8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x291ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x291bac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x291BACu;
    {
        const bool branch_taken_0x291bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x291BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291BACu;
            // 0x291bb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bac) {
            ctx->pc = 0x291BBCu;
            goto label_291bbc;
        }
    }
    ctx->pc = 0x291BB4u;
    // 0x291bb4: 0xa791984c  sh          $s1, -0x67B4($gp)
    ctx->pc = 0x291bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940748), (uint16_t)GPR_U32(ctx, 17));
    // 0x291bb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x291bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291bbc:
    // 0x291bbc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291BBCu;
    {
        const bool branch_taken_0x291bbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x291BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291BBCu;
            // 0x291bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bbc) {
            ctx->pc = 0x291BCCu;
            goto label_291bcc;
        }
    }
    ctx->pc = 0x291BC4u;
    // 0x291bc4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x291BC4u;
    {
        const bool branch_taken_0x291bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291BC4u;
            // 0x291bc8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bc4) {
            ctx->pc = 0x291D18u;
            goto label_291d18;
        }
    }
    ctx->pc = 0x291BCCu;
label_291bcc:
    // 0x291bcc: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x291BCCu;
    SET_GPR_U32(ctx, 31, 0x291BD4u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BD4u; }
        if (ctx->pc != 0x291BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291BD4u; }
        if (ctx->pc != 0x291BD4u) { return; }
    }
    ctx->pc = 0x291BD4u;
label_291bd4:
    // 0x291bd4: 0x87839854  lh          $v1, -0x67AC($gp)
    ctx->pc = 0x291bd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940756)));
    // 0x291bd8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x291bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x291bdc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291BDCu;
    {
        const bool branch_taken_0x291bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291BDCu;
            // 0x291be0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bdc) {
            ctx->pc = 0x291BF4u;
            goto label_291bf4;
        }
    }
    ctx->pc = 0x291BE4u;
    // 0x291be4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x291be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x291be8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x291BE8u;
    {
        const bool branch_taken_0x291be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291BE8u;
            // 0x291bec: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291be8) {
            ctx->pc = 0x291C38u;
            goto label_291c38;
        }
    }
    ctx->pc = 0x291BF0u;
    // 0x291bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291bf4:
    // 0x291bf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x291bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291bf8: 0xa782983c  sh          $v0, -0x67C4($gp)
    ctx->pc = 0x291bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940732), (uint16_t)GPR_U32(ctx, 2));
    // 0x291bfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291BFCu;
    {
        const bool branch_taken_0x291bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291BFCu;
            // 0x291c00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bfc) {
            ctx->pc = 0x291C20u;
            goto label_291c20;
        }
    }
    ctx->pc = 0x291C04u;
label_291c04:
    // 0x291c04: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x291C04u;
    SET_GPR_U32(ctx, 31, 0x291C0Cu);
    ctx->pc = 0x291C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291C04u;
            // 0x291c08: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C0Cu; }
        if (ctx->pc != 0x291C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C0Cu; }
        if (ctx->pc != 0x291C0Cu) { return; }
    }
    ctx->pc = 0x291C0Cu;
label_291c0c:
    // 0x291c0c: 0x8f839850  lw          $v1, -0x67B0($gp)
    ctx->pc = 0x291c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940752)));
    // 0x291c10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x291c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x291c14: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x291c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x291c18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x291c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x291c1c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x291c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_291c20:
    // 0x291c20: 0x8782984c  lh          $v0, -0x67B4($gp)
    ctx->pc = 0x291c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940748)));
    // 0x291c24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x291c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x291c28: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x291C28u;
    {
        const bool branch_taken_0x291c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291C28u;
            // 0x291c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c28) {
            ctx->pc = 0x291C04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291c04;
        }
    }
    ctx->pc = 0x291C30u;
    // 0x291c30: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x291C30u;
    {
        const bool branch_taken_0x291c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291c30) {
            ctx->pc = 0x291D0Cu;
            goto label_291d0c;
        }
    }
    ctx->pc = 0x291C38u;
label_291c38:
    // 0x291c38: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x291C38u;
    {
        const bool branch_taken_0x291c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291C38u;
            // 0x291c3c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c38) {
            ctx->pc = 0x291C88u;
            goto label_291c88;
        }
    }
    ctx->pc = 0x291C40u;
    // 0x291c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x291c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291c44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x291c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c48: 0xa782983c  sh          $v0, -0x67C4($gp)
    ctx->pc = 0x291c48u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940732), (uint16_t)GPR_U32(ctx, 2));
    // 0x291c4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291C4Cu;
    {
        const bool branch_taken_0x291c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291C4Cu;
            // 0x291c50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c4c) {
            ctx->pc = 0x291C70u;
            goto label_291c70;
        }
    }
    ctx->pc = 0x291C54u;
label_291c54:
    // 0x291c54: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x291C54u;
    SET_GPR_U32(ctx, 31, 0x291C5Cu);
    ctx->pc = 0x291C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291C54u;
            // 0x291c58: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C5Cu; }
        if (ctx->pc != 0x291C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291C5Cu; }
        if (ctx->pc != 0x291C5Cu) { return; }
    }
    ctx->pc = 0x291C5Cu;
label_291c5c:
    // 0x291c5c: 0x8f839850  lw          $v1, -0x67B0($gp)
    ctx->pc = 0x291c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940752)));
    // 0x291c60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x291c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x291c64: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x291c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x291c68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x291c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x291c6c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x291c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_291c70:
    // 0x291c70: 0x8782984c  lh          $v0, -0x67B4($gp)
    ctx->pc = 0x291c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940748)));
    // 0x291c74: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x291c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x291c78: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x291C78u;
    {
        const bool branch_taken_0x291c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291C78u;
            // 0x291c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c78) {
            ctx->pc = 0x291C54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291c54;
        }
    }
    ctx->pc = 0x291C80u;
    // 0x291c80: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x291C80u;
    {
        const bool branch_taken_0x291c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291c80) {
            ctx->pc = 0x291D0Cu;
            goto label_291d0c;
        }
    }
    ctx->pc = 0x291C88u;
label_291c88:
    // 0x291c88: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x291C88u;
    {
        const bool branch_taken_0x291c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291C88u;
            // 0x291c8c: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c88) {
            ctx->pc = 0x291CD8u;
            goto label_291cd8;
        }
    }
    ctx->pc = 0x291C90u;
    // 0x291c90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x291c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x291c94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x291c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c98: 0xa782983c  sh          $v0, -0x67C4($gp)
    ctx->pc = 0x291c98u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940732), (uint16_t)GPR_U32(ctx, 2));
    // 0x291c9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291C9Cu;
    {
        const bool branch_taken_0x291c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291C9Cu;
            // 0x291ca0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c9c) {
            ctx->pc = 0x291CC0u;
            goto label_291cc0;
        }
    }
    ctx->pc = 0x291CA4u;
label_291ca4:
    // 0x291ca4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x291CA4u;
    SET_GPR_U32(ctx, 31, 0x291CACu);
    ctx->pc = 0x291CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291CA4u;
            // 0x291ca8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CACu; }
        if (ctx->pc != 0x291CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CACu; }
        if (ctx->pc != 0x291CACu) { return; }
    }
    ctx->pc = 0x291CACu;
label_291cac:
    // 0x291cac: 0x8f839850  lw          $v1, -0x67B0($gp)
    ctx->pc = 0x291cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940752)));
    // 0x291cb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x291cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x291cb4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x291cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x291cb8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x291cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x291cbc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x291cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_291cc0:
    // 0x291cc0: 0x8782984c  lh          $v0, -0x67B4($gp)
    ctx->pc = 0x291cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940748)));
    // 0x291cc4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x291cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x291cc8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x291CC8u;
    {
        const bool branch_taken_0x291cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291CC8u;
            // 0x291ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291cc8) {
            ctx->pc = 0x291CA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291ca4;
        }
    }
    ctx->pc = 0x291CD0u;
    // 0x291cd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x291CD0u;
    {
        const bool branch_taken_0x291cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291cd0) {
            ctx->pc = 0x291D0Cu;
            goto label_291d0c;
        }
    }
    ctx->pc = 0x291CD8u;
label_291cd8:
    // 0x291cd8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x291CD8u;
    {
        const bool branch_taken_0x291cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x291CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291CD8u;
            // 0x291cdc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291cd8) {
            ctx->pc = 0x291D0Cu;
            goto label_291d0c;
        }
    }
    ctx->pc = 0x291CE0u;
    // 0x291ce0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x291ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291ce4:
    // 0x291ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ce8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x291CE8u;
    SET_GPR_U32(ctx, 31, 0x291CF0u);
    ctx->pc = 0x291CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291CE8u;
            // 0x291cec: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CF0u; }
        if (ctx->pc != 0x291CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291CF0u; }
        if (ctx->pc != 0x291CF0u) { return; }
    }
    ctx->pc = 0x291CF0u;
label_291cf0:
    // 0x291cf0: 0x8f849850  lw          $a0, -0x67B0($gp)
    ctx->pc = 0x291cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940752)));
    // 0x291cf4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x291cf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x291cf8: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x291cf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x291cfc: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x291cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x291d00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x291d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x291d04: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x291D04u;
    {
        const bool branch_taken_0x291d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291D04u;
            // 0x291d08: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d04) {
            ctx->pc = 0x291CE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291ce4;
        }
    }
    ctx->pc = 0x291D0Cu;
label_291d0c:
    // 0x291d0c: 0x0  nop
    ctx->pc = 0x291d0cu;
    // NOP
    // 0x291d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291d14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x291d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_291d18:
    // 0x291d18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x291d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x291d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291d28: 0x3e00008  jr          $ra
    ctx->pc = 0x291D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291D28u;
            // 0x291d2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291D30u;
}
