#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATACOM__FP9SPI_STACKi
// Address: 0x1947a0 - 0x19491c
void ps2__DATACOM__FP9SPI_STACKi_0x1947a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATACOM__FP9SPI_STACKi_0x1947a0");
#endif

    switch (ctx->pc) {
        case 0x1947b4u: goto label_1947b4;
        case 0x1947c8u: goto label_1947c8;
        case 0x1947dcu: goto label_1947dc;
        case 0x1947f0u: goto label_1947f0;
        case 0x194804u: goto label_194804;
        case 0x194818u: goto label_194818;
        case 0x19482cu: goto label_19482c;
        case 0x194860u: goto label_194860;
        case 0x194874u: goto label_194874;
        case 0x194888u: goto label_194888;
        case 0x19489cu: goto label_19489c;
        case 0x1948b4u: goto label_1948b4;
        case 0x1948c0u: goto label_1948c0;
        default: break;
    }

    ctx->pc = 0x1947a0u;

    // 0x1947a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1947a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1947a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1947a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1947a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1947a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1947ac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1947ACu;
    SET_GPR_U32(ctx, 31, 0x1947B4u);
    ctx->pc = 0x1947B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1947ACu;
            // 0x1947b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947B4u; }
        if (ctx->pc != 0x1947B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947B4u; }
        if (ctx->pc != 0x1947B4u) { return; }
    }
    ctx->pc = 0x1947B4u;
label_1947b4:
    // 0x1947b4: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x1947b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x1947b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1947b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947bc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1947bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1947c0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1947C0u;
    SET_GPR_U32(ctx, 31, 0x1947C8u);
    ctx->pc = 0x1947C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1947C0u;
            // 0x1947c4: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947C8u; }
        if (ctx->pc != 0x1947C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947C8u; }
        if (ctx->pc != 0x1947C8u) { return; }
    }
    ctx->pc = 0x1947C8u;
label_1947c8:
    // 0x1947c8: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x1947c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x1947cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1947ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947d0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1947d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1947d4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1947D4u;
    SET_GPR_U32(ctx, 31, 0x1947DCu);
    ctx->pc = 0x1947D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1947D4u;
            // 0x1947d8: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947DCu; }
        if (ctx->pc != 0x1947DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947DCu; }
        if (ctx->pc != 0x1947DCu) { return; }
    }
    ctx->pc = 0x1947DCu;
label_1947dc:
    // 0x1947dc: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x1947dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x1947e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1947e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947e4: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1947e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1947e8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1947E8u;
    SET_GPR_U32(ctx, 31, 0x1947F0u);
    ctx->pc = 0x1947ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1947E8u;
            // 0x1947ec: 0xa4620004  sh          $v0, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947F0u; }
        if (ctx->pc != 0x1947F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1947F0u; }
        if (ctx->pc != 0x1947F0u) { return; }
    }
    ctx->pc = 0x1947F0u;
label_1947f0:
    // 0x1947f0: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x1947f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x1947f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1947f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947f8: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1947f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1947fc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1947FCu;
    SET_GPR_U32(ctx, 31, 0x194804u);
    ctx->pc = 0x194800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1947FCu;
            // 0x194800: 0xa062001c  sb          $v0, 0x1C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194804u; }
        if (ctx->pc != 0x194804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194804u; }
        if (ctx->pc != 0x194804u) { return; }
    }
    ctx->pc = 0x194804u;
label_194804:
    // 0x194804: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x194804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x194808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19480c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x19480cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194810: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194810u;
    SET_GPR_U32(ctx, 31, 0x194818u);
    ctx->pc = 0x194814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194810u;
            // 0x194814: 0xa462001e  sh          $v0, 0x1E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194818u; }
        if (ctx->pc != 0x194818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194818u; }
        if (ctx->pc != 0x194818u) { return; }
    }
    ctx->pc = 0x194818u;
label_194818:
    // 0x194818: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x194818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x19481c: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x19481cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x194820: 0x8f828b5c  lw          $v0, -0x74A4($gp)
    ctx->pc = 0x194820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x194824: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x194824u;
    SET_GPR_U32(ctx, 31, 0x19482Cu);
    ctx->pc = 0x194828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194824u;
            // 0x194828: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19482Cu; }
        if (ctx->pc != 0x19482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19482Cu; }
        if (ctx->pc != 0x19482Cu) { return; }
    }
    ctx->pc = 0x19482Cu;
label_19482c:
    // 0x19482c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x194830: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x194830u;
    {
        const bool branch_taken_0x194830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x194834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194830u;
            // 0x194834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194830) {
            ctx->pc = 0x194858u;
            goto label_194858;
        }
    }
    ctx->pc = 0x194838u;
    // 0x194838: 0x8f828b5c  lw          $v0, -0x74A4($gp)
    ctx->pc = 0x194838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x19483c: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x19483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x194840: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x194840u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x194844: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x194844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x194848: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x194848u;
    {
        const bool branch_taken_0x194848 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19484Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194848u;
            // 0x19484c: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194848) {
            ctx->pc = 0x194854u;
            goto label_194854;
        }
    }
    ctx->pc = 0x194850u;
    // 0x194850: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x194850u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_194854:
    // 0x194854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194858:
    // 0x194858: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194858u;
    SET_GPR_U32(ctx, 31, 0x194860u);
    ctx->pc = 0x19485Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194858u;
            // 0x19485c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194860u; }
        if (ctx->pc != 0x194860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194860u; }
        if (ctx->pc != 0x194860u) { return; }
    }
    ctx->pc = 0x194860u;
label_194860:
    // 0x194860: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x194860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x194864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194868: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x194868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19486c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x19486Cu;
    SET_GPR_U32(ctx, 31, 0x194874u);
    ctx->pc = 0x194870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19486Cu;
            // 0x194870: 0xa0620020  sb          $v0, 0x20($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194874u; }
        if (ctx->pc != 0x194874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194874u; }
        if (ctx->pc != 0x194874u) { return; }
    }
    ctx->pc = 0x194874u;
label_194874:
    // 0x194874: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x194874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x194878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19487c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x19487cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194880: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194880u;
    SET_GPR_U32(ctx, 31, 0x194888u);
    ctx->pc = 0x194884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194880u;
            // 0x194884: 0xa4620006  sh          $v0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194888u; }
        if (ctx->pc != 0x194888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194888u; }
        if (ctx->pc != 0x194888u) { return; }
    }
    ctx->pc = 0x194888u;
label_194888:
    // 0x194888: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x194888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x19488c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194890: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x194890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194894: 0xc05191c  jal         func_146470
    ctx->pc = 0x194894u;
    SET_GPR_U32(ctx, 31, 0x19489Cu);
    ctx->pc = 0x194898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194894u;
            // 0x194898: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19489Cu; }
        if (ctx->pc != 0x19489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19489Cu; }
        if (ctx->pc != 0x19489Cu) { return; }
    }
    ctx->pc = 0x19489Cu;
label_19489c:
    // 0x19489c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19489Cu;
    {
        const bool branch_taken_0x19489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19489Cu;
            // 0x1948a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19489c) {
            ctx->pc = 0x1948B8u;
            goto label_1948b8;
        }
    }
    ctx->pc = 0x1948A4u;
    // 0x1948a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1948a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1948a8: 0x8f828b5c  lw          $v0, -0x74A4($gp)
    ctx->pc = 0x1948a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x1948ac: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1948ACu;
    SET_GPR_U32(ctx, 31, 0x1948B4u);
    ctx->pc = 0x1948B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1948ACu;
            // 0x1948b0: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948B4u; }
        if (ctx->pc != 0x1948B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948B4u; }
        if (ctx->pc != 0x1948B4u) { return; }
    }
    ctx->pc = 0x1948B4u;
label_1948b4:
    // 0x1948b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1948b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1948b8:
    // 0x1948b8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1948B8u;
    SET_GPR_U32(ctx, 31, 0x1948C0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948C0u; }
        if (ctx->pc != 0x1948C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948C0u; }
        if (ctx->pc != 0x1948C0u) { return; }
    }
    ctx->pc = 0x1948C0u;
label_1948c0:
    // 0x1948c0: 0x8f848b5c  lw          $a0, -0x74A4($gp)
    ctx->pc = 0x1948c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x1948c4: 0x3c0301e7  lui         $v1, 0x1E7
    ctx->pc = 0x1948c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)487 << 16));
    // 0x1948c8: 0x24631b70  addiu       $v1, $v1, 0x1B70
    ctx->pc = 0x1948c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7024));
    // 0x1948cc: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1948ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1948d0: 0x8f848b5c  lw          $a0, -0x74A4($gp)
    ctx->pc = 0x1948d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x1948d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1948d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1948d8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1948d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1948dc: 0x8f848b5c  lw          $a0, -0x74A4($gp)
    ctx->pc = 0x1948dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x1948e0: 0x87858b60  lh          $a1, -0x74A0($gp)
    ctx->pc = 0x1948e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937440)));
    // 0x1948e4: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x1948e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1948e8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1948e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1948ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1948ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1948f0: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x1948f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1948f4: 0x8f848b60  lw          $a0, -0x74A0($gp)
    ctx->pc = 0x1948f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937440)));
    // 0x1948f8: 0x8f838b5c  lw          $v1, -0x74A4($gp)
    ctx->pc = 0x1948f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937436)));
    // 0x1948fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1948fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x194900: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x194900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x194904: 0xaf848b60  sw          $a0, -0x74A0($gp)
    ctx->pc = 0x194904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937440), GPR_U32(ctx, 4));
    // 0x194908: 0xaf838b5c  sw          $v1, -0x74A4($gp)
    ctx->pc = 0x194908u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937436), GPR_U32(ctx, 3));
    // 0x19490c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19490cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194914: 0x3e00008  jr          $ra
    ctx->pc = 0x194914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194914u;
            // 0x194918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19491Cu;
}
