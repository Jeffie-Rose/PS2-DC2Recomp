#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SQ_Play__6CSoundFiii
// Address: 0x189a80 - 0x189bac
void SQ_Play__6CSoundFiii_0x189a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SQ_Play__6CSoundFiii_0x189a80");
#endif

    switch (ctx->pc) {
        case 0x189afcu: goto label_189afc;
        case 0x189b10u: goto label_189b10;
        case 0x189b20u: goto label_189b20;
        case 0x189b2cu: goto label_189b2c;
        case 0x189b40u: goto label_189b40;
        case 0x189b68u: goto label_189b68;
        case 0x189b78u: goto label_189b78;
        case 0x189b84u: goto label_189b84;
        case 0x189b90u: goto label_189b90;
        default: break;
    }

    ctx->pc = 0x189a80u;

    // 0x189a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x189a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x189a84: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x189a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x189a88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x189a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x189a8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x189a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x189a90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189a94: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x189a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189a98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189a9c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x189a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x189aa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189aa4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x189aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x189aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189aac: 0x24422484  addiu       $v0, $v0, 0x2484
    ctx->pc = 0x189aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9348));
    // 0x189ab0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x189ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x189ab4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x189ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ab8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x189ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189abc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x189abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ac0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189ac4: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x189ac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189ac8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x189AC8u;
    {
        const bool branch_taken_0x189ac8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x189ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189AC8u;
            // 0x189acc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ac8) {
            ctx->pc = 0x189AECu;
            goto label_189aec;
        }
    }
    ctx->pc = 0x189AD0u;
    // 0x189ad0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x189ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x189ad4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x189ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x189ad8: 0x24632430  addiu       $v1, $v1, 0x2430
    ctx->pc = 0x189ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9264));
    // 0x189adc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189ae4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x189AE4u;
    {
        const bool branch_taken_0x189ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189AE4u;
            // 0x189ae8: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ae4) {
            ctx->pc = 0x189B04u;
            goto label_189b04;
        }
    }
    ctx->pc = 0x189AECu;
label_189aec:
    // 0x189aec: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x189aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x189af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189af4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x189AF4u;
    SET_GPR_U32(ctx, 31, 0x189AFCu);
    ctx->pc = 0x189AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189AF4u;
            // 0x189af8: 0x24844710  addiu       $a0, $a0, 0x4710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189AFCu; }
        if (ctx->pc != 0x189AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189AFCu; }
        if (ctx->pc != 0x189AFCu) { return; }
    }
    ctx->pc = 0x189AFCu;
label_189afc:
    // 0x189afc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x189AFCu;
    {
        const bool branch_taken_0x189afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189AFCu;
            // 0x189b00: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189afc) {
            ctx->pc = 0x189B94u;
            goto label_189b94;
        }
    }
    ctx->pc = 0x189B04u;
label_189b04:
    // 0x189b04: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x189b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x189b08: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189B08u;
    SET_GPR_U32(ctx, 31, 0x189B10u);
    ctx->pc = 0x189B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B08u;
            // 0x189b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B10u; }
        if (ctx->pc != 0x189B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B10u; }
        if (ctx->pc != 0x189B10u) { return; }
    }
    ctx->pc = 0x189B10u;
label_189b10:
    // 0x189b10: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x189b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x189b14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x189b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b18: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x189B18u;
    SET_GPR_U32(ctx, 31, 0x189B20u);
    ctx->pc = 0x189B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B18u;
            // 0x189b1c: 0x248446f0  addiu       $a0, $a0, 0x46F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B20u; }
        if (ctx->pc != 0x189B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B20u; }
        if (ctx->pc != 0x189B20u) { return; }
    }
    ctx->pc = 0x189B20u;
label_189b20:
    // 0x189b20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x189b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b24: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189B24u;
    SET_GPR_U32(ctx, 31, 0x189B2Cu);
    ctx->pc = 0x189B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B24u;
            // 0x189b28: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B2Cu; }
        if (ctx->pc != 0x189B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B2Cu; }
        if (ctx->pc != 0x189B2Cu) { return; }
    }
    ctx->pc = 0x189B2Cu;
label_189b2c:
    // 0x189b2c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x189b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x189b30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b34: 0x24844750  addiu       $a0, $a0, 0x4750
    ctx->pc = 0x189b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18256));
    // 0x189b38: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x189B38u;
    SET_GPR_U32(ctx, 31, 0x189B40u);
    ctx->pc = 0x189B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B38u;
            // 0x189b3c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B40u; }
        if (ctx->pc != 0x189B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B40u; }
        if (ctx->pc != 0x189B40u) { return; }
    }
    ctx->pc = 0x189B40u;
label_189b40:
    // 0x189b40: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x189b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x189b44: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189B44u;
    {
        const bool branch_taken_0x189b44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x189b44) {
            ctx->pc = 0x189B6Cu;
            goto label_189b6c;
        }
    }
    ctx->pc = 0x189B4Cu;
    // 0x189b4c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x189b4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189b50: 0x3c024001  lui         $v0, 0x4001
    ctx->pc = 0x189b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16385 << 16));
    // 0x189b54: 0x34420204  ori         $v0, $v0, 0x204
    ctx->pc = 0x189b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)516);
    // 0x189b58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x189b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x189b5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189b60: 0xc0a248c  jal         func_289230
    ctx->pc = 0x189B60u;
    SET_GPR_U32(ctx, 31, 0x189B68u);
    ctx->pc = 0x189B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B60u;
            // 0x189b64: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B68u; }
        if (ctx->pc != 0x189B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B68u; }
        if (ctx->pc != 0x189B68u) { return; }
    }
    ctx->pc = 0x189B68u;
label_189b68:
    // 0x189b68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189b6c:
    // 0x189b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b70: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189B70u;
    SET_GPR_U32(ctx, 31, 0x189B78u);
    ctx->pc = 0x189B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B70u;
            // 0x189b74: 0x264400b0  addiu       $a0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B78u; }
        if (ctx->pc != 0x189B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B78u; }
        if (ctx->pc != 0x189B78u) { return; }
    }
    ctx->pc = 0x189B78u;
label_189b78:
    // 0x189b78: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x189b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x189b7c: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189B7Cu;
    SET_GPR_U32(ctx, 31, 0x189B84u);
    ctx->pc = 0x189B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B7Cu;
            // 0x189b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B84u; }
        if (ctx->pc != 0x189B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B84u; }
        if (ctx->pc != 0x189B84u) { return; }
    }
    ctx->pc = 0x189B84u;
label_189b84:
    // 0x189b84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b88: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189B88u;
    SET_GPR_U32(ctx, 31, 0x189B90u);
    ctx->pc = 0x189B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B88u;
            // 0x189b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B90u; }
        if (ctx->pc != 0x189B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B90u; }
        if (ctx->pc != 0x189B90u) { return; }
    }
    ctx->pc = 0x189B90u;
label_189b90:
    // 0x189b90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x189b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_189b94:
    // 0x189b94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x189b94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189b98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189b9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x189BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189BA4u;
            // 0x189ba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189BACu;
}
