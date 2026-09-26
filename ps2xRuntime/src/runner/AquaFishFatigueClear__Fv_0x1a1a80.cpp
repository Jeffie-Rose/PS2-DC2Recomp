#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AquaFishFatigueClear__Fv
// Address: 0x1a1a80 - 0x1a1b74
void AquaFishFatigueClear__Fv_0x1a1a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AquaFishFatigueClear__Fv_0x1a1a80");
#endif

    switch (ctx->pc) {
        case 0x1a1a94u: goto label_1a1a94;
        case 0x1a1aa8u: goto label_1a1aa8;
        case 0x1a1ab4u: goto label_1a1ab4;
        case 0x1a1af8u: goto label_1a1af8;
        case 0x1a1b00u: goto label_1a1b00;
        case 0x1a1b1cu: goto label_1a1b1c;
        default: break;
    }

    ctx->pc = 0x1a1a80u;

    // 0x1a1a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a1a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a1a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1a8c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A1A8Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A94u);
    ctx->pc = 0x1A1A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A8Cu;
            // 0x1a1a90: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A94u; }
        if (ctx->pc != 0x1A1A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A94u; }
        if (ctx->pc != 0x1A1A94u) { return; }
    }
    ctx->pc = 0x1A1A94u;
label_1a1a94:
    // 0x1a1a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a1a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a98: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A1A98u;
    {
        const bool branch_taken_0x1a1a98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A98u;
            // 0x1a1a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a98) {
            ctx->pc = 0x1A1B60u;
            goto label_1a1b60;
        }
    }
    ctx->pc = 0x1A1AA0u;
    // 0x1a1aa0: 0xc066d14  jal         func_19B450
    ctx->pc = 0x1A1AA0u;
    SET_GPR_U32(ctx, 31, 0x1A1AA8u);
    ctx->pc = 0x1A1AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AA0u;
            // 0x1a1aa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AA8u; }
        if (ctx->pc != 0x1A1AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AA8u; }
        if (ctx->pc != 0x1A1AA8u) { return; }
    }
    ctx->pc = 0x1A1AA8u;
label_1a1aa8:
    // 0x1a1aa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1aac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a1aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1ab0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1a1ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a1ab4:
    // 0x1a1ab4: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x1a1ab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1a1ab8: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1AB8u;
    {
        const bool branch_taken_0x1a1ab8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a1ab8) {
            ctx->pc = 0x1A1AD4u;
            goto label_1a1ad4;
        }
    }
    ctx->pc = 0x1A1AC0u;
    // 0x1a1ac0: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x1a1ac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1ac4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1AC4u;
    {
        const bool branch_taken_0x1a1ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a1ac4) {
            ctx->pc = 0x1A1AD4u;
            goto label_1a1ad4;
        }
    }
    ctx->pc = 0x1A1ACCu;
    // 0x1a1acc: 0xa4a00034  sh          $zero, 0x34($a1)
    ctx->pc = 0x1a1accu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a1ad0: 0xa0a0004d  sb          $zero, 0x4D($a1)
    ctx->pc = 0x1a1ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 77), (uint8_t)GPR_U32(ctx, 0));
label_1a1ad4:
    // 0x1a1ad4: 0x0  nop
    ctx->pc = 0x1a1ad4u;
    // NOP
    // 0x1a1ad8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a1ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a1adc: 0x28c30096  slti        $v1, $a2, 0x96
    ctx->pc = 0x1a1adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1a1ae0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A1AE0u;
    {
        const bool branch_taken_0x1a1ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AE0u;
            // 0x1a1ae4: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ae0) {
            ctx->pc = 0x1A1AB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1ab4;
        }
    }
    ctx->pc = 0x1A1AE8u;
    // 0x1a1ae8: 0x26114958  addiu       $s1, $s0, 0x4958
    ctx->pc = 0x1a1ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 18776));
    // 0x1a1aec: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A1AECu;
    {
        const bool branch_taken_0x1a1aec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AECu;
            // 0x1a1af0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1aec) {
            ctx->pc = 0x1A1B60u;
            goto label_1a1b60;
        }
    }
    ctx->pc = 0x1A1AF4u;
    // 0x1a1af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1af8:
    // 0x1a1af8: 0xc066888  jal         func_19A220
    ctx->pc = 0x1A1AF8u;
    SET_GPR_U32(ctx, 31, 0x1A1B00u);
    ctx->pc = 0x1A1AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AF8u;
            // 0x1a1afc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A220u;
    if (runtime->hasFunction(0x19A220u)) {
        auto targetFn = runtime->lookupFunction(0x19A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B00u; }
        if (ctx->pc != 0x1A1B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishTop__13CFishAquariumFi_0x19a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B00u; }
        if (ctx->pc != 0x1A1B00u) { return; }
    }
    ctx->pc = 0x1A1B00u;
label_1a1b00:
    // 0x1a1b00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a1b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b04: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A1B04u;
    {
        const bool branch_taken_0x1a1b04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B04u;
            // 0x1a1b08: 0x27838098  addiu       $v1, $gp, -0x7F68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b04) {
            ctx->pc = 0x1A1B50u;
            goto label_1a1b50;
        }
    }
    ctx->pc = 0x1A1B0Cu;
    // 0x1a1b0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a1b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b10: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a1b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a1b14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A1B14u;
    {
        const bool branch_taken_0x1a1b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B14u;
            // 0x1a1b18: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b14) {
            ctx->pc = 0x1A1B40u;
            goto label_1a1b40;
        }
    }
    ctx->pc = 0x1A1B1Cu;
label_1a1b1c:
    // 0x1a1b1c: 0x0  nop
    ctx->pc = 0x1a1b1cu;
    // NOP
    // 0x1a1b20: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x1a1b20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a1b24: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1B24u;
    {
        const bool branch_taken_0x1a1b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a1b24) {
            ctx->pc = 0x1A1B34u;
            goto label_1a1b34;
        }
    }
    ctx->pc = 0x1A1B2Cu;
    // 0x1a1b2c: 0xa4c00034  sh          $zero, 0x34($a2)
    ctx->pc = 0x1a1b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a1b30: 0xa0c0004d  sb          $zero, 0x4D($a2)
    ctx->pc = 0x1a1b30u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 77), (uint8_t)GPR_U32(ctx, 0));
label_1a1b34:
    // 0x1a1b34: 0x0  nop
    ctx->pc = 0x1a1b34u;
    // NOP
    // 0x1a1b38: 0x24c6006c  addiu       $a2, $a2, 0x6C
    ctx->pc = 0x1a1b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
    // 0x1a1b3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a1b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1a1b40:
    // 0x1a1b40: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1a1b40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1b44: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x1a1b44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a1b48: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A1B48u;
    {
        const bool branch_taken_0x1a1b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b48) {
            ctx->pc = 0x1A1B1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1b1c;
        }
    }
    ctx->pc = 0x1A1B50u;
label_1a1b50:
    // 0x1a1b50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a1b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a1b54: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x1a1b54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a1b58: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1A1B58u;
    {
        const bool branch_taken_0x1a1b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B58u;
            // 0x1a1b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b58) {
            ctx->pc = 0x1A1AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1af8;
        }
    }
    ctx->pc = 0x1A1B60u;
label_1a1b60:
    // 0x1a1b60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1b64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B6Cu;
            // 0x1a1b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1B74u;
}
