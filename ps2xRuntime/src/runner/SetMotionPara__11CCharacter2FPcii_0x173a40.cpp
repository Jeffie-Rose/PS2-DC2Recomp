#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotionPara__11CCharacter2FPcii
// Address: 0x173a40 - 0x173af8
void SetMotionPara__11CCharacter2FPcii_0x173a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotionPara__11CCharacter2FPcii_0x173a40");
#endif

    switch (ctx->pc) {
        case 0x173a70u: goto label_173a70;
        case 0x173ac4u: goto label_173ac4;
        default: break;
    }

    ctx->pc = 0x173a40u;

    // 0x173a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x173a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x173a44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x173a48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x173a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x173a4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173a50: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x173a50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173a58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x173a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173a60: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x173a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a68: 0xc05d2b4  jal         func_174AD0
    ctx->pc = 0x173A68u;
    SET_GPR_U32(ctx, 31, 0x173A70u);
    ctx->pc = 0x173A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173A68u;
            // 0x173a6c: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AD0u;
    if (runtime->hasFunction(0x174AD0u)) {
        auto targetFn = runtime->lookupFunction(0x174AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A70u; }
        if (ctx->pc != 0x173A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListPtr__11CCharacter2FPcPi_0x174ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A70u; }
        if (ctx->pc != 0x173A70u) { return; }
    }
    ctx->pc = 0x173A70u;
label_173a70:
    // 0x173a70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x173A70u;
    {
        const bool branch_taken_0x173a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A70u;
            // 0x173a74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a70) {
            ctx->pc = 0x173AB8u;
            goto label_173ab8;
        }
    }
    ctx->pc = 0x173A78u;
    // 0x173a78: 0xae020368  sw          $v0, 0x368($s0)
    ctx->pc = 0x173a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x173a7c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x173a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x173a80: 0xae12036c  sw          $s2, 0x36C($s0)
    ctx->pc = 0x173a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 18));
    // 0x173a84: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x173a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x173a88: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x173a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x173a8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x173a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x173a90: 0xae050370  sw          $a1, 0x370($s0)
    ctx->pc = 0x173a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 5));
    // 0x173a94: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x173A94u;
    {
        const bool branch_taken_0x173a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x173A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173A94u;
            // 0x173a98: 0xae04050c  sw          $a0, 0x50C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1292), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a94) {
            ctx->pc = 0x173AA4u;
            goto label_173aa4;
        }
    }
    ctx->pc = 0x173A9Cu;
    // 0x173a9c: 0x1620000f  bnez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x173A9Cu;
    {
        const bool branch_taken_0x173a9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x173a9c) {
            ctx->pc = 0x173ADCu;
            goto label_173adc;
        }
    }
    ctx->pc = 0x173AA4u;
label_173aa4:
    // 0x173aa4: 0xae000378  sw          $zero, 0x378($s0)
    ctx->pc = 0x173aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 0));
    // 0x173aa8: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x173aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
    // 0x173aac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x173AACu;
    {
        const bool branch_taken_0x173aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173AACu;
            // 0x173ab0: 0xae0003b8  sw          $zero, 0x3B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173aac) {
            ctx->pc = 0x173ADCu;
            goto label_173adc;
        }
    }
    ctx->pc = 0x173AB4u;
    // 0x173ab4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x173ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173ab8:
    // 0x173ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173abc: 0xc05d2ec  jal         func_174BB0
    ctx->pc = 0x173ABCu;
    SET_GPR_U32(ctx, 31, 0x173AC4u);
    ctx->pc = 0x173AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173ABCu;
            // 0x173ac0: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174BB0u;
    if (runtime->hasFunction(0x174BB0u)) {
        auto targetFn = runtime->lookupFunction(0x174BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AC4u; }
        if (ctx->pc != 0x173AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeqHeaderPtr__11CCharacter2FPcPi_0x174bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AC4u; }
        if (ctx->pc != 0x173AC4u) { return; }
    }
    ctx->pc = 0x173AC4u;
label_173ac4:
    // 0x173ac4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173AC4u;
    {
        const bool branch_taken_0x173ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ac4) {
            ctx->pc = 0x173ADCu;
            goto label_173adc;
        }
    }
    ctx->pc = 0x173ACCu;
    // 0x173acc: 0xae0203a4  sw          $v0, 0x3A4($s0)
    ctx->pc = 0x173accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 2));
    // 0x173ad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173ad4: 0xae030378  sw          $v1, 0x378($s0)
    ctx->pc = 0x173ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 3));
    // 0x173ad8: 0xae1203b0  sw          $s2, 0x3B0($s0)
    ctx->pc = 0x173ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 18));
label_173adc:
    // 0x173adc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x173adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173ae0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x173ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173ae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173ae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173af0: 0x3e00008  jr          $ra
    ctx->pc = 0x173AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173AF0u;
            // 0x173af4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173AF8u;
}
