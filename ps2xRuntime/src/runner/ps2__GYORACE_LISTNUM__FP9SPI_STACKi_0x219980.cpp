#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GYORACE_LISTNUM__FP9SPI_STACKi
// Address: 0x219980 - 0x219a6c
void ps2__GYORACE_LISTNUM__FP9SPI_STACKi_0x219980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GYORACE_LISTNUM__FP9SPI_STACKi_0x219980");
#endif

    switch (ctx->pc) {
        case 0x219998u: goto label_219998;
        case 0x2199a4u: goto label_2199a4;
        case 0x2199f4u: goto label_2199f4;
        case 0x219a14u: goto label_219a14;
        case 0x219a30u: goto label_219a30;
        default: break;
    }

    ctx->pc = 0x219980u;

    // 0x219980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x219988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21998c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219990: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219990u;
    SET_GPR_U32(ctx, 31, 0x219998u);
    ctx->pc = 0x219994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219990u;
            // 0x219994: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219998u; }
        if (ctx->pc != 0x219998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219998u; }
        if (ctx->pc != 0x219998u) { return; }
    }
    ctx->pc = 0x219998u;
label_219998:
    // 0x219998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21999c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x21999Cu;
    SET_GPR_U32(ctx, 31, 0x2199A4u);
    ctx->pc = 0x2199A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21999Cu;
            // 0x2199a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2199A4u; }
        if (ctx->pc != 0x2199A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2199A4u; }
        if (ctx->pc != 0x2199A4u) { return; }
    }
    ctx->pc = 0x2199A4u;
label_2199a4:
    // 0x2199a4: 0xa7829268  sh          $v0, -0x6D98($gp)
    ctx->pc = 0x2199a4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939240), (uint16_t)GPR_U32(ctx, 2));
    // 0x2199a8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2199a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2199ac: 0x8f829260  lw          $v0, -0x6DA0($gp)
    ctx->pc = 0x2199acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939232)));
    // 0x2199b0: 0x87849268  lh          $a0, -0x6D98($gp)
    ctx->pc = 0x2199b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939240)));
    // 0x2199b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2199b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2199b8: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2199b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2199bc: 0x87919268  lh          $s1, -0x6D98($gp)
    ctx->pc = 0x2199bcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939240)));
    // 0x2199c0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2199c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2199c4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2199c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2199c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2199c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2199cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2199ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2199d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2199d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2199d4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2199d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2199d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2199D8u;
    {
        const bool branch_taken_0x2199d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2199DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2199D8u;
            // 0x2199dc: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2199d8) {
            ctx->pc = 0x2199E8u;
            goto label_2199e8;
        }
    }
    ctx->pc = 0x2199E0u;
    // 0x2199e0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2199e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2199e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2199e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2199e8:
    // 0x2199e8: 0x8f84925c  lw          $a0, -0x6DA4($gp)
    ctx->pc = 0x2199e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939228)));
    // 0x2199ec: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2199ECu;
    SET_GPR_U32(ctx, 31, 0x2199F4u);
    ctx->pc = 0x2199F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2199ECu;
            // 0x2199f0: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2199F4u; }
        if (ctx->pc != 0x2199F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2199F4u; }
        if (ctx->pc != 0x2199F4u) { return; }
    }
    ctx->pc = 0x2199F4u;
label_2199f4:
    // 0x2199f4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2199f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2199f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2199f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2199fc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2199fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x219a00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x219a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x219a04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x219a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219a08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x219a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x219a0c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x219A0Cu;
    SET_GPR_U32(ctx, 31, 0x219A14u);
    ctx->pc = 0x219A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219A0Cu;
            // 0x219a10: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219A14u; }
        if (ctx->pc != 0x219A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219A14u; }
        if (ctx->pc != 0x219A14u) { return; }
    }
    ctx->pc = 0x219A14u;
label_219a14:
    // 0x219a14: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x219a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x219a18: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x219a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x219a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a20: 0x24a57090  addiu       $a1, $a1, 0x7090
    ctx->pc = 0x219a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28816));
    // 0x219a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x219a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a28: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x219A28u;
    SET_GPR_U32(ctx, 31, 0x219A30u);
    ctx->pc = 0x219A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219A28u;
            // 0x219a2c: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219A30u; }
        if (ctx->pc != 0x219A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219A30u; }
        if (ctx->pc != 0x219A30u) { return; }
    }
    ctx->pc = 0x219A30u;
label_219a30:
    // 0x219a30: 0x8f839260  lw          $v1, -0x6DA0($gp)
    ctx->pc = 0x219a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939232)));
    // 0x219a34: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x219a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x219a38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x219a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x219a3c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x219a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x219a40: 0x8f839260  lw          $v1, -0x6DA0($gp)
    ctx->pc = 0x219a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939232)));
    // 0x219a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219a48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x219a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x219a4c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x219a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x219a50: 0xaf839264  sw          $v1, -0x6D9C($gp)
    ctx->pc = 0x219a50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939236), GPR_U32(ctx, 3));
    // 0x219a54: 0xa780926c  sh          $zero, -0x6D94($gp)
    ctx->pc = 0x219a54u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939244), (uint16_t)GPR_U32(ctx, 0));
    // 0x219a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219a64: 0x3e00008  jr          $ra
    ctx->pc = 0x219A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219A64u;
            // 0x219a68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219A6Cu;
}
