#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetObjectNameList__FPcP11CCharacter2PP8mgCFramei
// Address: 0x2c9a60 - 0x2c9b80
void GetObjectNameList__FPcP11CCharacter2PP8mgCFramei_0x2c9a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjectNameList__FPcP11CCharacter2PP8mgCFramei_0x2c9a60");
#endif

    switch (ctx->pc) {
        case 0x2c9ac8u: goto label_2c9ac8;
        case 0x2c9adcu: goto label_2c9adc;
        case 0x2c9b18u: goto label_2c9b18;
        default: break;
    }

    ctx->pc = 0x2c9a60u;

    // 0x2c9a60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c9a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c9a64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c9a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c9a68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c9a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c9a6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c9a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c9a70: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c9a70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c9a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9a78: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2c9a78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9a80: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c9a80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9a88: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9A88u;
    {
        const bool branch_taken_0x2c9a88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A88u;
            // 0x2c9a8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a88) {
            ctx->pc = 0x2C9AA0u;
            goto label_2c9aa0;
        }
    }
    ctx->pc = 0x2C9A90u;
    // 0x2c9a90: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9A90u;
    {
        const bool branch_taken_0x2c9a90 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2C9A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A90u;
            // 0x2c9a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9a90) {
            ctx->pc = 0x2C9AA4u;
            goto label_2c9aa4;
        }
    }
    ctx->pc = 0x2C9A98u;
    // 0x2c9a98: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9A98u;
    {
        const bool branch_taken_0x2c9a98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9a98) {
            ctx->pc = 0x2C9AACu;
            goto label_2c9aac;
        }
    }
    ctx->pc = 0x2C9AA0u;
label_2c9aa0:
    // 0x2c9aa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9aa4:
    // 0x2c9aa4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2C9AA4u;
    {
        const bool branch_taken_0x2c9aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9AA4u;
            // 0x2c9aa8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9aa4) {
            ctx->pc = 0x2C9B60u;
            goto label_2c9b60;
        }
    }
    ctx->pc = 0x2C9AACu;
label_2c9aac:
    // 0x2c9aac: 0x8cb10070  lw          $s1, 0x70($a1)
    ctx->pc = 0x2c9aacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x2c9ab0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9AB0u;
    {
        const bool branch_taken_0x2c9ab0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9AB0u;
            // 0x2c9ab4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ab0) {
            ctx->pc = 0x2C9AC0u;
            goto label_2c9ac0;
        }
    }
    ctx->pc = 0x2C9AB8u;
    // 0x2c9ab8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C9AB8u;
    {
        const bool branch_taken_0x2c9ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9AB8u;
            // 0x2c9abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ab8) {
            ctx->pc = 0x2C9B5Cu;
            goto label_2c9b5c;
        }
    }
    ctx->pc = 0x2C9AC0u;
label_2c9ac0:
    // 0x2c9ac0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C9AC0u;
    {
        const bool branch_taken_0x2c9ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9AC0u;
            // 0x2c9ac4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ac0) {
            ctx->pc = 0x2C9B48u;
            goto label_2c9b48;
        }
    }
    ctx->pc = 0x2C9AC8u;
label_2c9ac8:
    // 0x2c9ac8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9AC8u;
    {
        const bool branch_taken_0x2c9ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9AC8u;
            // 0x2c9acc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ac8) {
            ctx->pc = 0x2C9AD8u;
            goto label_2c9ad8;
        }
    }
    ctx->pc = 0x2C9AD0u;
    // 0x2c9ad0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C9AD0u;
    {
        const bool branch_taken_0x2c9ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9AD0u;
            // 0x2c9ad4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ad0) {
            ctx->pc = 0x2C9B5Cu;
            goto label_2c9b5c;
        }
    }
    ctx->pc = 0x2C9AD8u;
label_2c9ad8:
    // 0x2c9ad8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2c9ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2c9adc:
    // 0x2c9adc: 0x0  nop
    ctx->pc = 0x2c9adcu;
    // NOP
    // 0x2c9ae0: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x2c9ae0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c9ae4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9AE4u;
    {
        const bool branch_taken_0x2c9ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c9ae4) {
            ctx->pc = 0x2C9B04u;
            goto label_2c9b04;
        }
    }
    ctx->pc = 0x2C9AECu;
    // 0x2c9aec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9AECu;
    {
        const bool branch_taken_0x2c9aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9aec) {
            ctx->pc = 0x2C9B04u;
            goto label_2c9b04;
        }
    }
    ctx->pc = 0x2C9AF4u;
    // 0x2c9af4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2c9af4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9af8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2c9af8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2c9afc: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C9AFCu;
    {
        const bool branch_taken_0x2c9afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9AFCu;
            // 0x2c9b00: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9afc) {
            ctx->pc = 0x2C9ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9adc;
        }
    }
    ctx->pc = 0x2C9B04u;
label_2c9b04:
    // 0x2c9b04: 0x0  nop
    ctx->pc = 0x2c9b04u;
    // NOP
    // 0x2c9b08: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2c9b08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c9b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9b10: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2C9B10u;
    SET_GPR_U32(ctx, 31, 0x2C9B18u);
    ctx->pc = 0x2C9B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B10u;
            // 0x2c9b14: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9B18u; }
        if (ctx->pc != 0x2C9B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9B18u; }
        if (ctx->pc != 0x2C9B18u) { return; }
    }
    ctx->pc = 0x2C9B18u;
label_2c9b18:
    // 0x2c9b18: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x2c9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2c9b1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c9b20: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2c9b20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c9b24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9B24u;
    {
        const bool branch_taken_0x2c9b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9b24) {
            ctx->pc = 0x2C9B34u;
            goto label_2c9b34;
        }
    }
    ctx->pc = 0x2C9B2Cu;
    // 0x2c9b2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9B2Cu;
    {
        const bool branch_taken_0x2c9b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B2Cu;
            // 0x2c9b30: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b2c) {
            ctx->pc = 0x2C9B54u;
            goto label_2c9b54;
        }
    }
    ctx->pc = 0x2C9B34u;
label_2c9b34:
    // 0x2c9b34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9b38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9B38u;
    {
        const bool branch_taken_0x2c9b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B38u;
            // 0x2c9b3c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b38) {
            ctx->pc = 0x2C9B48u;
            goto label_2c9b48;
        }
    }
    ctx->pc = 0x2C9B40u;
    // 0x2c9b40: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2c9b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2c9b44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c9b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c9b48:
    // 0x2c9b48: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2c9b48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c9b4c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2C9B4Cu;
    {
        const bool branch_taken_0x2c9b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B4Cu;
            // 0x2c9b50: 0x213102a  slt         $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9b4c) {
            ctx->pc = 0x2C9AC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9ac8;
        }
    }
    ctx->pc = 0x2C9B54u;
label_2c9b54:
    // 0x2c9b54: 0x0  nop
    ctx->pc = 0x2c9b54u;
    // NOP
    // 0x2c9b58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9b5c:
    // 0x2c9b5c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c9b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c9b60:
    // 0x2c9b60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c9b60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c9b64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c9b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9b68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9b6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9b78: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9B78u;
            // 0x2c9b7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9B80u;
}
