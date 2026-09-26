#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CLOTH__FP9SPI_STACKi
// Address: 0x176ef0 - 0x17706c
void ps2__CLOTH__FP9SPI_STACKi_0x176ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CLOTH__FP9SPI_STACKi_0x176ef0");
#endif

    switch (ctx->pc) {
        case 0x176f24u: goto label_176f24;
        case 0x176f4cu: goto label_176f4c;
        case 0x176f64u: goto label_176f64;
        case 0x176fa4u: goto label_176fa4;
        case 0x176fd4u: goto label_176fd4;
        case 0x176fe8u: goto label_176fe8;
        case 0x177008u: goto label_177008;
        case 0x177030u: goto label_177030;
        default: break;
    }

    ctx->pc = 0x176ef0u;

    // 0x176ef0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x176ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x176ef4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x176ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x176ef8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x176ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x176efc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x176f00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x176f04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176f0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x176f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176f18: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x176f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x176f1c: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x176F1Cu;
    {
        const bool branch_taken_0x176f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176F1Cu;
            // 0x176f20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f1c) {
            ctx->pc = 0x176FB8u;
            goto label_176fb8;
        }
    }
    ctx->pc = 0x176F24u;
label_176f24:
    // 0x176f24: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x176f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176f28: 0x8f8389c4  lw          $v1, -0x763C($gp)
    ctx->pc = 0x176f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937028)));
    // 0x176f2c: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x176f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x176f30: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x176f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176f34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176F34u;
    {
        const bool branch_taken_0x176f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176F34u;
            // 0x176f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f34) {
            ctx->pc = 0x176F44u;
            goto label_176f44;
        }
    }
    ctx->pc = 0x176F3Cu;
    // 0x176f3c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x176F3Cu;
    {
        const bool branch_taken_0x176f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176F3Cu;
            // 0x176f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176f3c) {
            ctx->pc = 0x177048u;
            goto label_177048;
        }
    }
    ctx->pc = 0x176F44u;
label_176f44:
    // 0x176f44: 0xc05191c  jal         func_146470
    ctx->pc = 0x176F44u;
    SET_GPR_U32(ctx, 31, 0x176F4Cu);
    ctx->pc = 0x176F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F44u;
            // 0x176f48: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F4Cu; }
        if (ctx->pc != 0x176F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F4Cu; }
        if (ctx->pc != 0x176F4Cu) { return; }
    }
    ctx->pc = 0x176F4Cu;
label_176f4c:
    // 0x176f4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x176F4Cu;
    {
        const bool branch_taken_0x176f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176f4c) {
            ctx->pc = 0x176FA4u;
            goto label_176fa4;
        }
    }
    ctx->pc = 0x176F54u;
    // 0x176f54: 0x8f8489f0  lw          $a0, -0x7610($gp)
    ctx->pc = 0x176f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x176f58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f5c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x176F5Cu;
    SET_GPR_U32(ctx, 31, 0x176F64u);
    ctx->pc = 0x176F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F5Cu;
            // 0x176f60: 0x27a6007c  addiu       $a2, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F64u; }
        if (ctx->pc != 0x176F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F64u; }
        if (ctx->pc != 0x176F64u) { return; }
    }
    ctx->pc = 0x176F64u;
label_176f64:
    // 0x176f64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x176F64u;
    {
        const bool branch_taken_0x176f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176f64) {
            ctx->pc = 0x176FA4u;
            goto label_176fa4;
        }
    }
    ctx->pc = 0x176F6Cu;
    // 0x176f6c: 0x8f8989a8  lw          $t1, -0x7658($gp)
    ctx->pc = 0x176f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176f74: 0x8f8389c4  lw          $v1, -0x763C($gp)
    ctx->pc = 0x176f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937028)));
    // 0x176f78: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x176f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x176f7c: 0x8f8889e8  lw          $t0, -0x7618($gp)
    ctx->pc = 0x176f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x176f80: 0x8d270070  lw          $a3, 0x70($t1)
    ctx->pc = 0x176f80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x176f84: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x176f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x176f88: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x176f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176f90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176f94: 0xaf8489c4  sw          $a0, -0x763C($gp)
    ctx->pc = 0x176f94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937028), GPR_U32(ctx, 4));
    // 0x176f98: 0x8d220130  lw          $v0, 0x130($t1)
    ctx->pc = 0x176f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 304)));
    // 0x176f9c: 0xc05efc0  jal         func_17BF00
    ctx->pc = 0x176F9Cu;
    SET_GPR_U32(ctx, 31, 0x176FA4u);
    ctx->pc = 0x176FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F9Cu;
            // 0x176fa0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BF00u;
    if (runtime->hasFunction(0x17BF00u)) {
        auto targetFn = runtime->lookupFunction(0x17BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FA4u; }
        if (ctx->pc != 0x176FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__13CDynamicAnimeFPciP8mgCFrameP9mgCMemory_0x17bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FA4u; }
        if (ctx->pc != 0x176FA4u) { return; }
    }
    ctx->pc = 0x176FA4u;
label_176fa4:
    // 0x176fa4: 0x0  nop
    ctx->pc = 0x176fa4u;
    // NOP
    // 0x176fa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x176fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x176fac: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x176facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x176fb0: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x176FB0u;
    {
        const bool branch_taken_0x176fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176fb0) {
            ctx->pc = 0x176F24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176f24;
        }
    }
    ctx->pc = 0x176FB8u;
label_176fb8:
    // 0x176fb8: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x176fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176fbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x176fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fc0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x176fc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fc4: 0x8c540070  lw          $s4, 0x70($v0)
    ctx->pc = 0x176fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x176fc8: 0x8c5002c0  lw          $s0, 0x2C0($v0)
    ctx->pc = 0x176fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x176fcc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x176FCCu;
    {
        const bool branch_taken_0x176fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176FCCu;
            // 0x176fd0: 0x2451035c  addiu       $s1, $v0, 0x35C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 860));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fcc) {
            ctx->pc = 0x177038u;
            goto label_177038;
        }
    }
    ctx->pc = 0x176FD4u;
label_176fd4:
    // 0x176fd4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x176fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x176fd8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x176fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x176fdc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x176fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176fe0: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x176FE0u;
    SET_GPR_U32(ctx, 31, 0x176FE8u);
    ctx->pc = 0x176FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FE0u;
            // 0x176fe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FE8u; }
        if (ctx->pc != 0x176FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FE8u; }
        if (ctx->pc != 0x176FE8u) { return; }
    }
    ctx->pc = 0x176FE8u;
label_176fe8:
    // 0x176fe8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x176fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176fec: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x176FECu;
    {
        const bool branch_taken_0x176fec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x176fec) {
            ctx->pc = 0x177030u;
            goto label_177030;
        }
    }
    ctx->pc = 0x176FF4u;
    // 0x176ff4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x176ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x176ff8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x176ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x176ffc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x176ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177000: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x177000u;
    SET_GPR_U32(ctx, 31, 0x177008u);
    ctx->pc = 0x177004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177000u;
            // 0x177004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177008u; }
        if (ctx->pc != 0x177008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177008u; }
        if (ctx->pc != 0x177008u) { return; }
    }
    ctx->pc = 0x177008u;
label_177008:
    // 0x177008: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x177008u;
    {
        const bool branch_taken_0x177008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177008) {
            ctx->pc = 0x177030u;
            goto label_177030;
        }
    }
    ctx->pc = 0x177010u;
    // 0x177010: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x177010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x177014: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x177014u;
    {
        const bool branch_taken_0x177014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177014) {
            ctx->pc = 0x177030u;
            goto label_177030;
        }
    }
    ctx->pc = 0x17701Cu;
    // 0x17701c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x17701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x177020: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177020u;
    {
        const bool branch_taken_0x177020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177020u;
            // 0x177024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177020) {
            ctx->pc = 0x177030u;
            goto label_177030;
        }
    }
    ctx->pc = 0x177028u;
    // 0x177028: 0xc04daf0  jal         func_136BC0
    ctx->pc = 0x177028u;
    SET_GPR_U32(ctx, 31, 0x177030u);
    ctx->pc = 0x136BC0u;
    if (runtime->hasFunction(0x136BC0u)) {
        auto targetFn = runtime->lookupFunction(0x136BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177030u; }
        if (ctx->pc != 0x177030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteParent__8mgCFrameFv_0x136bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177030u; }
        if (ctx->pc != 0x177030u) { return; }
    }
    ctx->pc = 0x177030u;
label_177030:
    // 0x177030: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x177030u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x177034: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x177034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_177038:
    // 0x177038: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x177038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17703c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17703cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177040: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x177040u;
    {
        const bool branch_taken_0x177040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177040u;
            // 0x177044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177040) {
            ctx->pc = 0x176FD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176fd4;
        }
    }
    ctx->pc = 0x177048u;
label_177048:
    // 0x177048: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x177048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17704c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17704cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177050: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177054: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17705c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17705cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177064: 0x3e00008  jr          $ra
    ctx->pc = 0x177064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177064u;
            // 0x177068: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17706Cu;
}
