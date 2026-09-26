#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetKeyListPtr__11CCharacter2FPcPi
// Address: 0x174ad0 - 0x174bb0
void GetKeyListPtr__11CCharacter2FPcPi_0x174ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetKeyListPtr__11CCharacter2FPcPi_0x174ad0");
#endif

    switch (ctx->pc) {
        case 0x174b0cu: goto label_174b0c;
        case 0x174b24u: goto label_174b24;
        case 0x174b3cu: goto label_174b3c;
        default: break;
    }

    ctx->pc = 0x174ad0u;

    // 0x174ad0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x174ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x174ad4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x174ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x174ad8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x174ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x174adc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x174adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x174ae0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x174ae0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ae4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x174ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x174ae8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x174ae8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174aec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x174aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x174af0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x174af0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174af4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x174af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174afc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x174afcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174b08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174b0c:
    // 0x174b0c: 0x2d3a021  addu        $s4, $s6, $s3
    ctx->pc = 0x174b0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x174b10: 0x8e900510  lw          $s0, 0x510($s4)
    ctx->pc = 0x174b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x174b14: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x174B14u;
    {
        const bool branch_taken_0x174b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B14u;
            // 0x174b18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b14) {
            ctx->pc = 0x174B70u;
            goto label_174b70;
        }
    }
    ctx->pc = 0x174B1Cu;
    // 0x174b1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x174B1Cu;
    {
        const bool branch_taken_0x174b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174b1c) {
            ctx->pc = 0x174B60u;
            goto label_174b60;
        }
    }
    ctx->pc = 0x174B24u;
label_174b24:
    // 0x174b24: 0x0  nop
    ctx->pc = 0x174b24u;
    // NOP
    // 0x174b28: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174b2c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x174B2Cu;
    {
        const bool branch_taken_0x174b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B2Cu;
            // 0x174b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b2c) {
            ctx->pc = 0x174B70u;
            goto label_174b70;
        }
    }
    ctx->pc = 0x174B34u;
    // 0x174b34: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x174B34u;
    SET_GPR_U32(ctx, 31, 0x174B3Cu);
    ctx->pc = 0x174B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174B34u;
            // 0x174b38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B3Cu; }
        if (ctx->pc != 0x174B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174B3Cu; }
        if (ctx->pc != 0x174B3Cu) { return; }
    }
    ctx->pc = 0x174B3Cu;
label_174b3c:
    // 0x174b3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174B3Cu;
    {
        const bool branch_taken_0x174b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b3c) {
            ctx->pc = 0x174B58u;
            goto label_174b58;
        }
    }
    ctx->pc = 0x174B44u;
    // 0x174b44: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x174B44u;
    {
        const bool branch_taken_0x174b44 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B44u;
            // 0x174b48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b44) {
            ctx->pc = 0x174B50u;
            goto label_174b50;
        }
    }
    ctx->pc = 0x174B4Cu;
    // 0x174b4c: 0xaef10000  sw          $s1, 0x0($s7)
    ctx->pc = 0x174b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
label_174b50:
    // 0x174b50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x174B50u;
    {
        const bool branch_taken_0x174b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B50u;
            // 0x174b54: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b50) {
            ctx->pc = 0x174B88u;
            goto label_174b88;
        }
    }
    ctx->pc = 0x174B58u;
label_174b58:
    // 0x174b58: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x174b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x174b5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_174b60:
    // 0x174b60: 0x8e820530  lw          $v0, 0x530($s4)
    ctx->pc = 0x174b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x174b64: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x174b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174b68: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x174B68u;
    {
        const bool branch_taken_0x174b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174b68) {
            ctx->pc = 0x174B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174b24;
        }
    }
    ctx->pc = 0x174B70u;
label_174b70:
    // 0x174b70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x174b74: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x174b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x174b78: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x174B78u;
    {
        const bool branch_taken_0x174b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174B78u;
            // 0x174b7c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b78) {
            ctx->pc = 0x174B0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174b0c;
        }
    }
    ctx->pc = 0x174B80u;
    // 0x174b80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b84: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x174b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_174b88:
    // 0x174b88: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x174b88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174b8c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x174b8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174b90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x174b90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174b94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174b94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x174BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174BA8u;
            // 0x174bac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174BB0u;
}
