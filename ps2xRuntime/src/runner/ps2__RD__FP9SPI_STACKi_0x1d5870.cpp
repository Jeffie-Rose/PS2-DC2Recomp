#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RD__FP9SPI_STACKi
// Address: 0x1d5870 - 0x1d5928
void ps2__RD__FP9SPI_STACKi_0x1d5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RD__FP9SPI_STACKi_0x1d5870");
#endif

    switch (ctx->pc) {
        case 0x1d58acu: goto label_1d58ac;
        case 0x1d58b4u: goto label_1d58b4;
        case 0x1d58d4u: goto label_1d58d4;
        default: break;
    }

    ctx->pc = 0x1d5870u;

    // 0x1d5870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d5874: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d5874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d5878: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d587c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d587cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5884: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5888: 0x8f828e50  lw          $v0, -0x71B0($gp)
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938192)));
    // 0x1d588c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d5890: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d5890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d5894: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5894u;
    {
        const bool branch_taken_0x1d5894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5894u;
            // 0x1d5898: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5894) {
            ctx->pc = 0x1D58A4u;
            goto label_1d58a4;
        }
    }
    ctx->pc = 0x1D589Cu;
    // 0x1d589c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D589Cu;
    {
        const bool branch_taken_0x1d589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D589Cu;
            // 0x1d58a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d589c) {
            ctx->pc = 0x1D5910u;
            goto label_1d5910;
        }
    }
    ctx->pc = 0x1D58A4u;
label_1d58a4:
    // 0x1d58a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D58A4u;
    {
        const bool branch_taken_0x1d58a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58A4u;
            // 0x1d58a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58a4) {
            ctx->pc = 0x1D58ECu;
            goto label_1d58ec;
        }
    }
    ctx->pc = 0x1D58ACu;
label_1d58ac:
    // 0x1d58ac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1D58ACu;
    SET_GPR_U32(ctx, 31, 0x1D58B4u);
    ctx->pc = 0x1D58B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58ACu;
            // 0x1d58b0: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58B4u; }
        if (ctx->pc != 0x1D58B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58B4u; }
        if (ctx->pc != 0x1D58B4u) { return; }
    }
    ctx->pc = 0x1D58B4u;
label_1d58b4:
    // 0x1d58b4: 0x8f838e58  lw          $v1, -0x71A8($gp)
    ctx->pc = 0x1d58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938200)));
    // 0x1d58b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d58b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58bc: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x1d58bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d58c0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1d58c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d58c4: 0x8f828e58  lw          $v0, -0x71A8($gp)
    ctx->pc = 0x1d58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938200)));
    // 0x1d58c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d58cc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1D58CCu;
    SET_GPR_U32(ctx, 31, 0x1D58D4u);
    ctx->pc = 0x1D58D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58CCu;
            // 0x1d58d0: 0xaf828e58  sw          $v0, -0x71A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58D4u; }
        if (ctx->pc != 0x1D58D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D58D4u; }
        if (ctx->pc != 0x1D58D4u) { return; }
    }
    ctx->pc = 0x1D58D4u;
label_1d58d4:
    // 0x1d58d4: 0x8f838e58  lw          $v1, -0x71A8($gp)
    ctx->pc = 0x1d58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938200)));
    // 0x1d58d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d58d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d58dc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1d58dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d58e0: 0x8f828e58  lw          $v0, -0x71A8($gp)
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938200)));
    // 0x1d58e4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d58e8: 0xaf828e58  sw          $v0, -0x71A8($gp)
    ctx->pc = 0x1d58e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938200), GPR_U32(ctx, 2));
label_1d58ec:
    // 0x1d58ec: 0x0  nop
    ctx->pc = 0x1d58ecu;
    // NOP
    // 0x1d58f0: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D58F0u;
    {
        const bool branch_taken_0x1d58f0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D58F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D58F0u;
            // 0x1d58f4: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58f0) {
            ctx->pc = 0x1D5900u;
            goto label_1d5900;
        }
    }
    ctx->pc = 0x1D58F8u;
    // 0x1d58f8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1d58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d58fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d58fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d5900:
    // 0x1d5900: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d5900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5904: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D5904u;
    {
        const bool branch_taken_0x1d5904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5904u;
            // 0x1d5908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5904) {
            ctx->pc = 0x1D58ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d58ac;
        }
    }
    ctx->pc = 0x1D590Cu;
    // 0x1d590c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5910:
    // 0x1d5910: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d5910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d591c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d591cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5920: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5920u;
            // 0x1d5924: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5928u;
}
