#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Set__11CMachineGunFPfPf
// Address: 0x1b6a40 - 0x1b6b54
void Set__11CMachineGunFPfPf_0x1b6a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set__11CMachineGunFPfPf_0x1b6a40");
#endif

    switch (ctx->pc) {
        case 0x1b6a70u: goto label_1b6a70;
        case 0x1b6adcu: goto label_1b6adc;
        case 0x1b6ae8u: goto label_1b6ae8;
        case 0x1b6afcu: goto label_1b6afc;
        case 0x1b6b08u: goto label_1b6b08;
        case 0x1b6b14u: goto label_1b6b14;
        default: break;
    }

    ctx->pc = 0x1b6a40u;

    // 0x1b6a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b6a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b6a44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b6a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b6a48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b6a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b6a4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b6a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b6a50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b6a54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b6a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6a5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b6a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6a64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b6a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a68: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1b6a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6a70:
    // 0x1b6a70: 0x86630380  lh          $v1, 0x380($s3)
    ctx->pc = 0x1b6a70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 896)));
    // 0x1b6a74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b6a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b6a78: 0xa6630380  sh          $v1, 0x380($s3)
    ctx->pc = 0x1b6a78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 896), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b6a7c: 0x86630380  lh          $v1, 0x380($s3)
    ctx->pc = 0x1b6a7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 896)));
    // 0x1b6a80: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x1b6a80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b6a84: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6A84u;
    {
        const bool branch_taken_0x1b6a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a84) {
            ctx->pc = 0x1B6A90u;
            goto label_1b6a90;
        }
    }
    ctx->pc = 0x1B6A8Cu;
    // 0x1b6a8c: 0xa6600380  sh          $zero, 0x380($s3)
    ctx->pc = 0x1b6a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 896), (uint16_t)GPR_U32(ctx, 0));
label_1b6a90:
    // 0x1b6a90: 0x86640380  lh          $a0, 0x380($s3)
    ctx->pc = 0x1b6a90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 896)));
    // 0x1b6a94: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1b6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b6a98: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1b6a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1b6a9c: 0x84630300  lh          $v1, 0x300($v1)
    ctx->pc = 0x1b6a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 768)));
    // 0x1b6aa0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6AA0u;
    {
        const bool branch_taken_0x1b6aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6aa0) {
            ctx->pc = 0x1B6AB0u;
            goto label_1b6ab0;
        }
    }
    ctx->pc = 0x1B6AA8u;
    // 0x1b6aa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6AA8u;
    {
        const bool branch_taken_0x1b6aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AA8u;
            // 0x1b6aac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6aa8) {
            ctx->pc = 0x1B6AC0u;
            goto label_1b6ac0;
        }
    }
    ctx->pc = 0x1B6AB0u;
label_1b6ab0:
    // 0x1b6ab0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b6ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b6ab4: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1b6ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b6ab8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1B6AB8u;
    {
        const bool branch_taken_0x1b6ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ab8) {
            ctx->pc = 0x1B6A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6a70;
        }
    }
    ctx->pc = 0x1B6AC0u;
label_1b6ac0:
    // 0x1b6ac0: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B6AC0u;
    {
        const bool branch_taken_0x1b6ac0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1b6ac0) {
            ctx->pc = 0x1B6B34u;
            goto label_1b6b34;
        }
    }
    ctx->pc = 0x1B6AC8u;
    // 0x1b6ac8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1b6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b6acc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ad0: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x1b6ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b6ad4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6AD4u;
    SET_GPR_U32(ctx, 31, 0x1B6ADCu);
    ctx->pc = 0x1B6AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AD4u;
            // 0x1b6ad8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6ADCu; }
        if (ctx->pc != 0x1B6ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6ADCu; }
        if (ctx->pc != 0x1B6ADCu) { return; }
    }
    ctx->pc = 0x1B6ADCu;
label_1b6adc:
    // 0x1b6adc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ae0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1B6AE0u;
    SET_GPR_U32(ctx, 31, 0x1B6AE8u);
    ctx->pc = 0x1B6AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AE0u;
            // 0x1b6ae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AE8u; }
        if (ctx->pc != 0x1B6AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AE8u; }
        if (ctx->pc != 0x1B6AE8u) { return; }
    }
    ctx->pc = 0x1B6AE8u;
label_1b6ae8:
    // 0x1b6ae8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1b6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1b6aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6af0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b6af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b6af4: 0xc041e96  jal         func_107A58
    ctx->pc = 0x1B6AF4u;
    SET_GPR_U32(ctx, 31, 0x1B6AFCu);
    ctx->pc = 0x1B6AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AF4u;
            // 0x1b6af8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AFCu; }
        if (ctx->pc != 0x1B6AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6AFCu; }
        if (ctx->pc != 0x1B6AFCu) { return; }
    }
    ctx->pc = 0x1B6AFCu;
label_1b6afc:
    // 0x1b6afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b00: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6B00u;
    SET_GPR_U32(ctx, 31, 0x1B6B08u);
    ctx->pc = 0x1B6B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B00u;
            // 0x1b6b04: 0x26840100  addiu       $a0, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B08u; }
        if (ctx->pc != 0x1B6B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B08u; }
        if (ctx->pc != 0x1B6B08u) { return; }
    }
    ctx->pc = 0x1B6B08u;
label_1b6b08:
    // 0x1b6b08: 0x26840200  addiu       $a0, $s4, 0x200
    ctx->pc = 0x1b6b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x1b6b0c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B6B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B14u);
    ctx->pc = 0x1B6B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B0Cu;
            // 0x1b6b10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B14u; }
        if (ctx->pc != 0x1B6B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B14u; }
        if (ctx->pc != 0x1B6B14u) { return; }
    }
    ctx->pc = 0x1B6B14u;
label_1b6b14:
    // 0x1b6b14: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1b6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1b6b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6b1c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x1b6b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1b6b20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b6b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b6b24: 0xa4850300  sh          $a1, 0x300($a0)
    ctx->pc = 0x1b6b24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 768), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b6b28: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1b6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1b6b2c: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x1b6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1b6b30: 0xac640340  sw          $a0, 0x340($v1)
    ctx->pc = 0x1b6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 832), GPR_U32(ctx, 4));
label_1b6b34:
    // 0x1b6b34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b6b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b6b38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b6b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6b3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6b3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6b40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B4Cu;
            // 0x1b6b50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6B54u;
}
