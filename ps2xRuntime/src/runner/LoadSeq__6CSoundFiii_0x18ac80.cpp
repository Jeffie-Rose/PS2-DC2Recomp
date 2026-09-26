#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSeq__6CSoundFiii
// Address: 0x18ac80 - 0x18ae00
void LoadSeq__6CSoundFiii_0x18ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSeq__6CSoundFiii_0x18ac80");
#endif

    switch (ctx->pc) {
        case 0x18acb0u: goto label_18acb0;
        case 0x18acc0u: goto label_18acc0;
        case 0x18acc8u: goto label_18acc8;
        case 0x18ace4u: goto label_18ace4;
        case 0x18acf8u: goto label_18acf8;
        case 0x18ad10u: goto label_18ad10;
        case 0x18ad24u: goto label_18ad24;
        case 0x18ad70u: goto label_18ad70;
        case 0x18ad84u: goto label_18ad84;
        case 0x18ada4u: goto label_18ada4;
        case 0x18adc4u: goto label_18adc4;
        case 0x18ade0u: goto label_18ade0;
        default: break;
    }

    ctx->pc = 0x18ac80u;

    // 0x18ac80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18ac84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18ac88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ac8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ac90: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18ac90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ac98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18ac98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac9c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18ac9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aca0: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x18aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x18aca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18aca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aca8: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18ACA8u;
    SET_GPR_U32(ctx, 31, 0x18ACB0u);
    ctx->pc = 0x18ACACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACA8u;
            // 0x18acac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACB0u; }
        if (ctx->pc != 0x18ACB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACB0u; }
        if (ctx->pc != 0x18ACB0u) { return; }
    }
    ctx->pc = 0x18ACB0u;
label_18acb0:
    // 0x18acb0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18acb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18acb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acb8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18ACB8u;
    SET_GPR_U32(ctx, 31, 0x18ACC0u);
    ctx->pc = 0x18ACBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACB8u;
            // 0x18acbc: 0x248448f0  addiu       $a0, $a0, 0x48F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACC0u; }
        if (ctx->pc != 0x18ACC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACC0u; }
        if (ctx->pc != 0x18ACC0u) { return; }
    }
    ctx->pc = 0x18ACC0u;
label_18acc0:
    // 0x18acc0: 0xc045c0e  jal         func_117038
    ctx->pc = 0x18ACC0u;
    SET_GPR_U32(ctx, 31, 0x18ACC8u);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACC8u; }
        if (ctx->pc != 0x18ACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACC8u; }
        if (ctx->pc != 0x18ACC8u) { return; }
    }
    ctx->pc = 0x18ACC8u;
label_18acc8:
    // 0x18acc8: 0x2a210101  slti        $at, $s1, 0x101
    ctx->pc = 0x18acc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x18accc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x18ACCCu;
    {
        const bool branch_taken_0x18accc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACCCu;
            // 0x18acd0: 0x26250100  addiu       $a1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18accc) {
            ctx->pc = 0x18ACECu;
            goto label_18acec;
        }
    }
    ctx->pc = 0x18ACD4u;
    // 0x18acd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18acd8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x18acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18acdc: 0xc045c4c  jal         func_117130
    ctx->pc = 0x18ACDCu;
    SET_GPR_U32(ctx, 31, 0x18ACE4u);
    ctx->pc = 0x18ACE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACDCu;
            // 0x18ace0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117130u;
    if (runtime->hasFunction(0x117130u)) {
        auto targetFn = runtime->lookupFunction(0x117130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACE4u; }
        if (ctx->pc != 0x18ACE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocSysMemory_0x117130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACE4u; }
        if (ctx->pc != 0x18ACE4u) { return; }
    }
    ctx->pc = 0x18ACE4u;
label_18ace4:
    // 0x18ace4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18ACE4u;
    {
        const bool branch_taken_0x18ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACE4u;
            // 0x18ace8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ace4) {
            ctx->pc = 0x18ACFCu;
            goto label_18acfc;
        }
    }
    ctx->pc = 0x18ACECu;
label_18acec:
    // 0x18acec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18acecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18acf0: 0xc045c4c  jal         func_117130
    ctx->pc = 0x18ACF0u;
    SET_GPR_U32(ctx, 31, 0x18ACF8u);
    ctx->pc = 0x18ACF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACF0u;
            // 0x18acf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117130u;
    if (runtime->hasFunction(0x117130u)) {
        auto targetFn = runtime->lookupFunction(0x117130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACF8u; }
        if (ctx->pc != 0x18ACF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocSysMemory_0x117130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ACF8u; }
        if (ctx->pc != 0x18ACF8u) { return; }
    }
    ctx->pc = 0x18ACF8u;
label_18acf8:
    // 0x18acf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18acf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18acfc:
    // 0x18acfc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18ACFCu;
    {
        const bool branch_taken_0x18acfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACFCu;
            // 0x18ad00: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acfc) {
            ctx->pc = 0x18AD18u;
            goto label_18ad18;
        }
    }
    ctx->pc = 0x18AD04u;
    // 0x18ad04: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18ad08: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18AD08u;
    SET_GPR_U32(ctx, 31, 0x18AD10u);
    ctx->pc = 0x18AD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD08u;
            // 0x18ad0c: 0x24844930  addiu       $a0, $a0, 0x4930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD10u; }
        if (ctx->pc != 0x18AD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD10u; }
        if (ctx->pc != 0x18AD10u) { return; }
    }
    ctx->pc = 0x18AD10u;
label_18ad10:
    // 0x18ad10: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x18AD10u;
    {
        const bool branch_taken_0x18ad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD10u;
            // 0x18ad14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad10) {
            ctx->pc = 0x18ADE4u;
            goto label_18ade4;
        }
    }
    ctx->pc = 0x18AD18u;
label_18ad18:
    // 0x18ad18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ad18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad1c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18AD1Cu;
    SET_GPR_U32(ctx, 31, 0x18AD24u);
    ctx->pc = 0x18AD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD1Cu;
            // 0x18ad20: 0x24844970  addiu       $a0, $a0, 0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD24u; }
        if (ctx->pc != 0x18AD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD24u; }
        if (ctx->pc != 0x18AD24u) { return; }
    }
    ctx->pc = 0x18AD24u;
label_18ad24:
    // 0x18ad24: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x18ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x18ad28: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18ad2c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x18ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18ad30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18ad30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad34: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x18ad34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ad38: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18ad3c: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x18ad3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x18ad40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18ad40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad44: 0x24632484  addiu       $v1, $v1, 0x2484
    ctx->pc = 0x18ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9348));
    // 0x18ad48: 0x78880  sll         $s1, $a3, 2
    ctx->pc = 0x18ad48u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18ad4c: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x18ad4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18ad50: 0x24422430  addiu       $v0, $v0, 0x2430
    ctx->pc = 0x18ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9264));
    // 0x18ad54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18ad58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18ad5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ad5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18ad64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18ad68: 0xc062cc4  jal         func_18B310
    ctx->pc = 0x18AD68u;
    SET_GPR_U32(ctx, 31, 0x18AD70u);
    ctx->pc = 0x18AD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD68u;
            // 0x18ad6c: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B310u;
    if (runtime->hasFunction(0x18B310u)) {
        auto targetFn = runtime->lookupFunction(0x18B310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD70u; }
        if (ctx->pc != 0x18AD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezTransToIOP2__FPvPvi_0x18b310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD70u; }
        if (ctx->pc != 0x18AD70u) { return; }
    }
    ctx->pc = 0x18AD70u;
label_18ad70:
    // 0x18ad70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18ad74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18AD74u;
    {
        const bool branch_taken_0x18ad74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD74u;
            // 0x18ad78: 0x26640040  addiu       $a0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad74) {
            ctx->pc = 0x18ADA8u;
            goto label_18ada8;
        }
    }
    ctx->pc = 0x18AD7Cu;
    // 0x18ad7c: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18AD7Cu;
    SET_GPR_U32(ctx, 31, 0x18AD84u);
    ctx->pc = 0x18AD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD7Cu;
            // 0x18ad80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD84u; }
        if (ctx->pc != 0x18AD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AD84u; }
        if (ctx->pc != 0x18AD84u) { return; }
    }
    ctx->pc = 0x18AD84u;
label_18ad84:
    // 0x18ad84: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18ad88: 0x24422458  addiu       $v0, $v0, 0x2458
    ctx->pc = 0x18ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
    // 0x18ad8c: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x18ad8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18ad90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ad94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AD94u;
    {
        const bool branch_taken_0x18ad94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ad94) {
            ctx->pc = 0x18ADA4u;
            goto label_18ada4;
        }
    }
    ctx->pc = 0x18AD9Cu;
    // 0x18ad9c: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x18AD9Cu;
    SET_GPR_U32(ctx, 31, 0x18ADA4u);
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ADA4u; }
        if (ctx->pc != 0x18ADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeSysMemory_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ADA4u; }
        if (ctx->pc != 0x18ADA4u) { return; }
    }
    ctx->pc = 0x18ADA4u;
label_18ada4:
    // 0x18ada4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x18ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_18ada8:
    // 0x18ada8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18adac: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18adb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18adb4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x18adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x18adb8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x18adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18adbc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18ADBCu;
    SET_GPR_U32(ctx, 31, 0x18ADC4u);
    ctx->pc = 0x18ADC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADBCu;
            // 0x18adc0: 0x24844990  addiu       $a0, $a0, 0x4990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ADC4u; }
        if (ctx->pc != 0x18ADC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ADC4u; }
        if (ctx->pc != 0x18ADC4u) { return; }
    }
    ctx->pc = 0x18ADC4u;
label_18adc4:
    // 0x18adc4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18adc8: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x18adc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18adcc: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x18ADCCu;
    {
        const bool branch_taken_0x18adcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADCCu;
            // 0x18add0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adcc) {
            ctx->pc = 0x18ADE4u;
            goto label_18ade4;
        }
    }
    ctx->pc = 0x18ADD4u;
    // 0x18add4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18add4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18add8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18ADD8u;
    SET_GPR_U32(ctx, 31, 0x18ADE0u);
    ctx->pc = 0x18ADDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADD8u;
            // 0x18addc: 0x248449d0  addiu       $a0, $a0, 0x49D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ADE0u; }
        if (ctx->pc != 0x18ADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ADE0u; }
        if (ctx->pc != 0x18ADE0u) { return; }
    }
    ctx->pc = 0x18ADE0u;
label_18ade0:
    // 0x18ade0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ade0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ade4:
    // 0x18ade4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18ade4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ade8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ade8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18adec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18adecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18adf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18adf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18adf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18adf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18adf8: 0x3e00008  jr          $ra
    ctx->pc = 0x18ADF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADF8u;
            // 0x18adfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AE00u;
}
