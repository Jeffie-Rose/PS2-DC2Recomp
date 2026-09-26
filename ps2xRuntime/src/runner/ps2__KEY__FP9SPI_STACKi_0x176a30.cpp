#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _KEY__FP9SPI_STACKi
// Address: 0x176a30 - 0x176ae8
void ps2__KEY__FP9SPI_STACKi_0x176a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__KEY__FP9SPI_STACKi_0x176a30");
#endif

    switch (ctx->pc) {
        case 0x176a68u: goto label_176a68;
        case 0x176a74u: goto label_176a74;
        case 0x176a80u: goto label_176a80;
        case 0x176a94u: goto label_176a94;
        case 0x176aa4u: goto label_176aa4;
        default: break;
    }

    ctx->pc = 0x176a30u;

    // 0x176a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176a34: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x176a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x176a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176a3c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x176A3Cu;
    {
        const bool branch_taken_0x176a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A3Cu;
            // 0x176a40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a3c) {
            ctx->pc = 0x176A4Cu;
            goto label_176a4c;
        }
    }
    ctx->pc = 0x176A44u;
    // 0x176a44: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x176A44u;
    {
        const bool branch_taken_0x176a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A44u;
            // 0x176a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a44) {
            ctx->pc = 0x176AD8u;
            goto label_176ad8;
        }
    }
    ctx->pc = 0x176A4Cu;
label_176a4c:
    // 0x176a4c: 0x8f8289b8  lw          $v0, -0x7648($gp)
    ctx->pc = 0x176a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176a50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176A50u;
    {
        const bool branch_taken_0x176a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A50u;
            // 0x176a54: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a50) {
            ctx->pc = 0x176A60u;
            goto label_176a60;
        }
    }
    ctx->pc = 0x176A58u;
    // 0x176a58: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x176A58u;
    {
        const bool branch_taken_0x176a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176A58u;
            // 0x176a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a58) {
            ctx->pc = 0x176AD8u;
            goto label_176ad8;
        }
    }
    ctx->pc = 0x176A60u;
label_176a60:
    // 0x176a60: 0xc05191c  jal         func_146470
    ctx->pc = 0x176A60u;
    SET_GPR_U32(ctx, 31, 0x176A68u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A68u; }
        if (ctx->pc != 0x176A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A68u; }
        if (ctx->pc != 0x176A68u) { return; }
    }
    ctx->pc = 0x176A68u;
label_176a68:
    // 0x176a68: 0x8f8489b8  lw          $a0, -0x7648($gp)
    ctx->pc = 0x176a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176a6c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x176A6Cu;
    SET_GPR_U32(ctx, 31, 0x176A74u);
    ctx->pc = 0x176A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A6Cu;
            // 0x176a70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A74u; }
        if (ctx->pc != 0x176A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A74u; }
        if (ctx->pc != 0x176A74u) { return; }
    }
    ctx->pc = 0x176A74u;
label_176a74:
    // 0x176a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a78: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x176A78u;
    SET_GPR_U32(ctx, 31, 0x176A80u);
    ctx->pc = 0x176A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A78u;
            // 0x176a7c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A80u; }
        if (ctx->pc != 0x176A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A80u; }
        if (ctx->pc != 0x176A80u) { return; }
    }
    ctx->pc = 0x176A80u;
label_176a80:
    // 0x176a80: 0x8f8389b8  lw          $v1, -0x7648($gp)
    ctx->pc = 0x176a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a88: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x176a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x176a8c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x176A8Cu;
    SET_GPR_U32(ctx, 31, 0x176A94u);
    ctx->pc = 0x176A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A8Cu;
            // 0x176a90: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A94u; }
        if (ctx->pc != 0x176A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176A94u; }
        if (ctx->pc != 0x176A94u) { return; }
    }
    ctx->pc = 0x176A94u;
label_176a94:
    // 0x176a94: 0x8f8389b8  lw          $v1, -0x7648($gp)
    ctx->pc = 0x176a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176a9c: 0xc05190c  jal         func_146430
    ctx->pc = 0x176A9Cu;
    SET_GPR_U32(ctx, 31, 0x176AA4u);
    ctx->pc = 0x176AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176A9Cu;
            // 0x176aa0: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AA4u; }
        if (ctx->pc != 0x176AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176AA4u; }
        if (ctx->pc != 0x176AA4u) { return; }
    }
    ctx->pc = 0x176AA4u;
label_176aa4:
    // 0x176aa4: 0x8f8389b8  lw          $v1, -0x7648($gp)
    ctx->pc = 0x176aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176aac: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x176aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x176ab0: 0x8f8589b8  lw          $a1, -0x7648($gp)
    ctx->pc = 0x176ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x176ab4: 0x8f8389b4  lw          $v1, -0x764C($gp)
    ctx->pc = 0x176ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x176ab8: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x176ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176abc: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x176abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x176ac0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176ac4: 0xaf8589b8  sw          $a1, -0x7648($gp)
    ctx->pc = 0x176ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U32(ctx, 5));
    // 0x176ac8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x176ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176acc: 0x8c830530  lw          $v1, 0x530($a0)
    ctx->pc = 0x176accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1328)));
    // 0x176ad0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x176ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176ad4: 0xac830530  sw          $v1, 0x530($a0)
    ctx->pc = 0x176ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1328), GPR_U32(ctx, 3));
label_176ad8:
    // 0x176ad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x176AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176AE0u;
            // 0x176ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176AE8u;
}
