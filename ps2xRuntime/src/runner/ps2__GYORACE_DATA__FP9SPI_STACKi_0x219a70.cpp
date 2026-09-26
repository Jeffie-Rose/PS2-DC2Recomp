#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GYORACE_DATA__FP9SPI_STACKi
// Address: 0x219a70 - 0x219b80
void ps2__GYORACE_DATA__FP9SPI_STACKi_0x219a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GYORACE_DATA__FP9SPI_STACKi_0x219a70");
#endif

    switch (ctx->pc) {
        case 0x219ac4u: goto label_219ac4;
        case 0x219ad0u: goto label_219ad0;
        case 0x219ae0u: goto label_219ae0;
        case 0x219aecu: goto label_219aec;
        case 0x219af8u: goto label_219af8;
        case 0x219b08u: goto label_219b08;
        case 0x219b18u: goto label_219b18;
        case 0x219b28u: goto label_219b28;
        case 0x219b38u: goto label_219b38;
        case 0x219b48u: goto label_219b48;
        case 0x219b54u: goto label_219b54;
        default: break;
    }

    ctx->pc = 0x219a70u;

    // 0x219a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x219a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x219a74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x219a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x219a78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x219a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x219a7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219a80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219a84: 0x87829268  lh          $v0, -0x6D98($gp)
    ctx->pc = 0x219a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939240)));
    // 0x219a88: 0x8785926c  lh          $a1, -0x6D94($gp)
    ctx->pc = 0x219a88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939244)));
    // 0x219a8c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x219a8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x219a90: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x219A90u;
    {
        const bool branch_taken_0x219a90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x219A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219A90u;
            // 0x219a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a90) {
            ctx->pc = 0x219AA0u;
            goto label_219aa0;
        }
    }
    ctx->pc = 0x219A98u;
    // 0x219a98: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x219A98u;
    {
        const bool branch_taken_0x219a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219A98u;
            // 0x219a9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a98) {
            ctx->pc = 0x219B6Cu;
            goto label_219b6c;
        }
    }
    ctx->pc = 0x219AA0u;
label_219aa0:
    // 0x219aa0: 0x8f829264  lw          $v0, -0x6D9C($gp)
    ctx->pc = 0x219aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939236)));
    // 0x219aa4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x219aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x219aa8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x219aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x219aac: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x219aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x219ab0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x219ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x219ab4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x219ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x219ab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x219ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x219abc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219ABCu;
    SET_GPR_U32(ctx, 31, 0x219AC4u);
    ctx->pc = 0x219AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219ABCu;
            // 0x219ac0: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AC4u; }
        if (ctx->pc != 0x219AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AC4u; }
        if (ctx->pc != 0x219AC4u) { return; }
    }
    ctx->pc = 0x219AC4u;
label_219ac4:
    // 0x219ac4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ac8: 0xc066750  jal         func_199D40
    ctx->pc = 0x219AC8u;
    SET_GPR_U32(ctx, 31, 0x219AD0u);
    ctx->pc = 0x219ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219AC8u;
            // 0x219acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199D40u;
    if (runtime->hasFunction(0x199D40u)) {
        auto targetFn = runtime->lookupFunction(0x199D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AD0u; }
        if (ctx->pc != 0x219AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataFish__13CGameDataUsedFi_0x199d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AD0u; }
        if (ctx->pc != 0x219AD0u) { return; }
    }
    ctx->pc = 0x219AD0u;
label_219ad0:
    // 0x219ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ad4: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x219ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x219ad8: 0xc05191c  jal         func_146470
    ctx->pc = 0x219AD8u;
    SET_GPR_U32(ctx, 31, 0x219AE0u);
    ctx->pc = 0x219ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219AD8u;
            // 0x219adc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AE0u; }
        if (ctx->pc != 0x219AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AE0u; }
        if (ctx->pc != 0x219AE0u) { return; }
    }
    ctx->pc = 0x219AE0u;
label_219ae0:
    // 0x219ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ae4: 0xc065d8c  jal         func_197630
    ctx->pc = 0x219AE4u;
    SET_GPR_U32(ctx, 31, 0x219AECu);
    ctx->pc = 0x219AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219AE4u;
            // 0x219ae8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197630u;
    if (runtime->hasFunction(0x197630u)) {
        auto targetFn = runtime->lookupFunction(0x197630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AECu; }
        if (ctx->pc != 0x219AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__13CGameDataUsedFPc_0x197630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AECu; }
        if (ctx->pc != 0x219AECu) { return; }
    }
    ctx->pc = 0x219AECu;
label_219aec:
    // 0x219aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219af0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219AF0u;
    SET_GPR_U32(ctx, 31, 0x219AF8u);
    ctx->pc = 0x219AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219AF0u;
            // 0x219af4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AF8u; }
        if (ctx->pc != 0x219AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219AF8u; }
        if (ctx->pc != 0x219AF8u) { return; }
    }
    ctx->pc = 0x219AF8u;
label_219af8:
    // 0x219af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219afc: 0xa2420016  sb          $v0, 0x16($s2)
    ctx->pc = 0x219afcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x219b00: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219B00u;
    SET_GPR_U32(ctx, 31, 0x219B08u);
    ctx->pc = 0x219B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219B00u;
            // 0x219b04: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B08u; }
        if (ctx->pc != 0x219B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B08u; }
        if (ctx->pc != 0x219B08u) { return; }
    }
    ctx->pc = 0x219B08u;
label_219b08:
    // 0x219b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b0c: 0xa642002e  sh          $v0, 0x2E($s2)
    ctx->pc = 0x219b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x219b10: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219B10u;
    SET_GPR_U32(ctx, 31, 0x219B18u);
    ctx->pc = 0x219B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219B10u;
            // 0x219b14: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B18u; }
        if (ctx->pc != 0x219B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B18u; }
        if (ctx->pc != 0x219B18u) { return; }
    }
    ctx->pc = 0x219B18u;
label_219b18:
    // 0x219b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b1c: 0xa6420026  sh          $v0, 0x26($s2)
    ctx->pc = 0x219b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x219b20: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219B20u;
    SET_GPR_U32(ctx, 31, 0x219B28u);
    ctx->pc = 0x219B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219B20u;
            // 0x219b24: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B28u; }
        if (ctx->pc != 0x219B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B28u; }
        if (ctx->pc != 0x219B28u) { return; }
    }
    ctx->pc = 0x219B28u;
label_219b28:
    // 0x219b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b2c: 0xa6420028  sh          $v0, 0x28($s2)
    ctx->pc = 0x219b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x219b30: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219B30u;
    SET_GPR_U32(ctx, 31, 0x219B38u);
    ctx->pc = 0x219B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219B30u;
            // 0x219b34: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B38u; }
        if (ctx->pc != 0x219B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B38u; }
        if (ctx->pc != 0x219B38u) { return; }
    }
    ctx->pc = 0x219B38u;
label_219b38:
    // 0x219b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b3c: 0xa642002a  sh          $v0, 0x2A($s2)
    ctx->pc = 0x219b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x219b40: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219B40u;
    SET_GPR_U32(ctx, 31, 0x219B48u);
    ctx->pc = 0x219B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219B40u;
            // 0x219b44: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B48u; }
        if (ctx->pc != 0x219B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B48u; }
        if (ctx->pc != 0x219B48u) { return; }
    }
    ctx->pc = 0x219B48u;
label_219b48:
    // 0x219b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b4c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x219B4Cu;
    SET_GPR_U32(ctx, 31, 0x219B54u);
    ctx->pc = 0x219B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219B4Cu;
            // 0x219b50: 0xa642002c  sh          $v0, 0x2C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B54u; }
        if (ctx->pc != 0x219B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219B54u; }
        if (ctx->pc != 0x219B54u) { return; }
    }
    ctx->pc = 0x219B54u;
label_219b54:
    // 0x219b54: 0xa6420018  sh          $v0, 0x18($s2)
    ctx->pc = 0x219b54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x219b58: 0x8783926c  lh          $v1, -0x6D94($gp)
    ctx->pc = 0x219b58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939244)));
    // 0x219b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219b60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x219b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x219b64: 0xa783926c  sh          $v1, -0x6D94($gp)
    ctx->pc = 0x219b64u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939244), (uint16_t)GPR_U32(ctx, 3));
    // 0x219b68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x219b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_219b6c:
    // 0x219b6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x219b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219b78: 0x3e00008  jr          $ra
    ctx->pc = 0x219B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219B78u;
            // 0x219b7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219B80u;
}
