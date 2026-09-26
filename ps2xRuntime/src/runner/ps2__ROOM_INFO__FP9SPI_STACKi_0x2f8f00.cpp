#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_INFO__FP9SPI_STACKi
// Address: 0x2f8f00 - 0x2f8fcc
void ps2__ROOM_INFO__FP9SPI_STACKi_0x2f8f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_INFO__FP9SPI_STACKi_0x2f8f00");
#endif

    switch (ctx->pc) {
        case 0x2f8f1cu: goto label_2f8f1c;
        case 0x2f8f30u: goto label_2f8f30;
        case 0x2f8f44u: goto label_2f8f44;
        case 0x2f8f5cu: goto label_2f8f5c;
        case 0x2f8f68u: goto label_2f8f68;
        default: break;
    }

    ctx->pc = 0x2f8f00u;

    // 0x2f8f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f8f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f8f04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f8f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f8f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f8f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f8f10: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2f8f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f8f14: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8F14u;
    SET_GPR_U32(ctx, 31, 0x2F8F1Cu);
    ctx->pc = 0x2F8F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F14u;
            // 0x2f8f18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F1Cu; }
        if (ctx->pc != 0x2F8F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F1Cu; }
        if (ctx->pc != 0x2F8F1Cu) { return; }
    }
    ctx->pc = 0x2F8F1Cu;
label_2f8f1c:
    // 0x2f8f1c: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f8f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8f24: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2f8f24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f8f28: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8F28u;
    SET_GPR_U32(ctx, 31, 0x2F8F30u);
    ctx->pc = 0x2F8F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F28u;
            // 0x2f8f2c: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F30u; }
        if (ctx->pc != 0x2F8F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F30u; }
        if (ctx->pc != 0x2F8F30u) { return; }
    }
    ctx->pc = 0x2F8F30u;
label_2f8f30:
    // 0x2f8f30: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f8f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8f38: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2f8f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2f8f3c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F8F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F8F44u);
    ctx->pc = 0x2F8F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F3Cu;
            // 0x2f8f40: 0xa0620009  sb          $v0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F44u; }
        if (ctx->pc != 0x2F8F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F44u; }
        if (ctx->pc != 0x2F8F44u) { return; }
    }
    ctx->pc = 0x2F8F44u;
label_2f8f44:
    // 0x2f8f44: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8f48: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2f8f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f8f4c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F8F4Cu;
    {
        const bool branch_taken_0x2f8f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F4Cu;
            // 0x2f8f50: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f4c) {
            ctx->pc = 0x2F8F70u;
            goto label_2f8f70;
        }
    }
    ctx->pc = 0x2F8F54u;
    // 0x2f8f54: 0xc05191c  jal         func_146470
    ctx->pc = 0x2F8F54u;
    SET_GPR_U32(ctx, 31, 0x2F8F5Cu);
    ctx->pc = 0x2F8F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F54u;
            // 0x2f8f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F5Cu; }
        if (ctx->pc != 0x2F8F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F5Cu; }
        if (ctx->pc != 0x2F8F5Cu) { return; }
    }
    ctx->pc = 0x2F8F5Cu;
label_2f8f5c:
    // 0x2f8f5c: 0x8f859f54  lw          $a1, -0x60AC($gp)
    ctx->pc = 0x2f8f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942548)));
    // 0x2f8f60: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2F8F60u;
    SET_GPR_U32(ctx, 31, 0x2F8F68u);
    ctx->pc = 0x2F8F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F60u;
            // 0x2f8f64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F68u; }
        if (ctx->pc != 0x2F8F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F68u; }
        if (ctx->pc != 0x2F8F68u) { return; }
    }
    ctx->pc = 0x2F8F68u;
label_2f8f68:
    // 0x2f8f68: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8f6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2f8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2f8f70:
    // 0x2f8f70: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8f78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f8f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8f7c: 0xa0600044  sb          $zero, 0x44($v1)
    ctx->pc = 0x2f8f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8f80: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8f84: 0xa0600045  sb          $zero, 0x45($v1)
    ctx->pc = 0x2f8f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8f88: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8f8c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2f8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2f8f90: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8f94: 0xa4600040  sh          $zero, 0x40($v1)
    ctx->pc = 0x2f8f94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f8f98: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8f9c: 0xa460003e  sh          $zero, 0x3E($v1)
    ctx->pc = 0x2f8f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f8fa0: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8fa4: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x2f8fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f8fa8: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8fac: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x2f8facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x2f8fb0: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f8fb4: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x2f8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x2f8fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f8fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f8fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8FC4u;
            // 0x2f8fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8FCCu;
}
