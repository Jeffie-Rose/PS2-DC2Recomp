#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_ACTION_DEF__FP9SPI_STACKi
// Address: 0x252ad0 - 0x252b80
void ps2__MENU_ACTION_DEF__FP9SPI_STACKi_0x252ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_ACTION_DEF__FP9SPI_STACKi_0x252ad0");
#endif

    switch (ctx->pc) {
        case 0x252ae8u: goto label_252ae8;
        case 0x252af4u: goto label_252af4;
        case 0x252b00u: goto label_252b00;
        case 0x252b1cu: goto label_252b1c;
        case 0x252b2cu: goto label_252b2c;
        case 0x252b3cu: goto label_252b3c;
        case 0x252b4cu: goto label_252b4c;
        case 0x252b58u: goto label_252b58;
        default: break;
    }

    ctx->pc = 0x252ad0u;

    // 0x252ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252adc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x252adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x252ae0: 0xc05191c  jal         func_146470
    ctx->pc = 0x252AE0u;
    SET_GPR_U32(ctx, 31, 0x252AE8u);
    ctx->pc = 0x252AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252AE0u;
            // 0x252ae4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252AE8u; }
        if (ctx->pc != 0x252AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252AE8u; }
        if (ctx->pc != 0x252AE8u) { return; }
    }
    ctx->pc = 0x252AE8u;
label_252ae8:
    // 0x252ae8: 0x8f8497d4  lw          $a0, -0x682C($gp)
    ctx->pc = 0x252ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940628)));
    // 0x252aec: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x252AECu;
    SET_GPR_U32(ctx, 31, 0x252AF4u);
    ctx->pc = 0x252AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252AECu;
            // 0x252af0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252AF4u; }
        if (ctx->pc != 0x252AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252AF4u; }
        if (ctx->pc != 0x252AF4u) { return; }
    }
    ctx->pc = 0x252AF4u;
label_252af4:
    // 0x252af4: 0x8f8497b0  lw          $a0, -0x6850($gp)
    ctx->pc = 0x252af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
    // 0x252af8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x252AF8u;
    SET_GPR_U32(ctx, 31, 0x252B00u);
    ctx->pc = 0x252AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252AF8u;
            // 0x252afc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B00u; }
        if (ctx->pc != 0x252B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B00u; }
        if (ctx->pc != 0x252B00u) { return; }
    }
    ctx->pc = 0x252B00u;
label_252b00:
    // 0x252b00: 0x8f8397d4  lw          $v1, -0x682C($gp)
    ctx->pc = 0x252b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940628)));
    // 0x252b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b08: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x252b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x252b0c: 0x8f8297d4  lw          $v0, -0x682C($gp)
    ctx->pc = 0x252b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940628)));
    // 0x252b10: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x252b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x252b14: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252B14u;
    SET_GPR_U32(ctx, 31, 0x252B1Cu);
    ctx->pc = 0x252B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252B14u;
            // 0x252b18: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B1Cu; }
        if (ctx->pc != 0x252B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B1Cu; }
        if (ctx->pc != 0x252B1Cu) { return; }
    }
    ctx->pc = 0x252B1Cu;
label_252b1c:
    // 0x252b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b20: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x252b20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x252b24: 0xc05190c  jal         func_146430
    ctx->pc = 0x252B24u;
    SET_GPR_U32(ctx, 31, 0x252B2Cu);
    ctx->pc = 0x252B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252B24u;
            // 0x252b28: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B2Cu; }
        if (ctx->pc != 0x252B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B2Cu; }
        if (ctx->pc != 0x252B2Cu) { return; }
    }
    ctx->pc = 0x252B2Cu;
label_252b2c:
    // 0x252b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b30: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x252b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x252b34: 0xc05190c  jal         func_146430
    ctx->pc = 0x252B34u;
    SET_GPR_U32(ctx, 31, 0x252B3Cu);
    ctx->pc = 0x252B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252B34u;
            // 0x252b38: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B3Cu; }
        if (ctx->pc != 0x252B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B3Cu; }
        if (ctx->pc != 0x252B3Cu) { return; }
    }
    ctx->pc = 0x252B3Cu;
label_252b3c:
    // 0x252b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b40: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x252b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x252b44: 0xc05190c  jal         func_146430
    ctx->pc = 0x252B44u;
    SET_GPR_U32(ctx, 31, 0x252B4Cu);
    ctx->pc = 0x252B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252B44u;
            // 0x252b48: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B4Cu; }
        if (ctx->pc != 0x252B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B4Cu; }
        if (ctx->pc != 0x252B4Cu) { return; }
    }
    ctx->pc = 0x252B4Cu;
label_252b4c:
    // 0x252b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b50: 0xc05190c  jal         func_146430
    ctx->pc = 0x252B50u;
    SET_GPR_U32(ctx, 31, 0x252B58u);
    ctx->pc = 0x252B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252B50u;
            // 0x252b54: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B58u; }
        if (ctx->pc != 0x252B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252B58u; }
        if (ctx->pc != 0x252B58u) { return; }
    }
    ctx->pc = 0x252B58u;
label_252b58:
    // 0x252b58: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x252b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x252b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252b60: 0x8f8397d4  lw          $v1, -0x682C($gp)
    ctx->pc = 0x252b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940628)));
    // 0x252b64: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x252b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x252b68: 0xaf8397d4  sw          $v1, -0x682C($gp)
    ctx->pc = 0x252b68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940628), GPR_U32(ctx, 3));
    // 0x252b6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252b78: 0x3e00008  jr          $ra
    ctx->pc = 0x252B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252B78u;
            // 0x252b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252B80u;
}
