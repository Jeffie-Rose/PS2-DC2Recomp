#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_FLOOR_INFO__FP9SPI_STACKi
// Address: 0x2f9230 - 0x2f932c
void ps2__ROOM_FLOOR_INFO__FP9SPI_STACKi_0x2f9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_FLOOR_INFO__FP9SPI_STACKi_0x2f9230");
#endif

    switch (ctx->pc) {
        case 0x2f9250u: goto label_2f9250;
        case 0x2f925cu: goto label_2f925c;
        case 0x2f9278u: goto label_2f9278;
        case 0x2f9288u: goto label_2f9288;
        case 0x2f9298u: goto label_2f9298;
        case 0x2f92a8u: goto label_2f92a8;
        case 0x2f92b8u: goto label_2f92b8;
        case 0x2f92c8u: goto label_2f92c8;
        case 0x2f92d4u: goto label_2f92d4;
        case 0x2f92e0u: goto label_2f92e0;
        case 0x2f92f4u: goto label_2f92f4;
        default: break;
    }

    ctx->pc = 0x2f9230u;

    // 0x2f9230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f9230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f9234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f9234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f9238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f9238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f923c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f9240: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f9244: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f9244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f9248: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9248u;
    SET_GPR_U32(ctx, 31, 0x2F9250u);
    ctx->pc = 0x2F924Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9248u;
            // 0x2f924c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9250u; }
        if (ctx->pc != 0x2F9250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9250u; }
        if (ctx->pc != 0x2F9250u) { return; }
    }
    ctx->pc = 0x2F9250u;
label_2f9250:
    // 0x2f9250: 0x8f849f4c  lw          $a0, -0x60B4($gp)
    ctx->pc = 0x2f9250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942540)));
    // 0x2f9254: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2F9254u;
    SET_GPR_U32(ctx, 31, 0x2F925Cu);
    ctx->pc = 0x2F9258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9254u;
            // 0x2f9258: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F925Cu; }
        if (ctx->pc != 0x2F925Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F925Cu; }
        if (ctx->pc != 0x2F925Cu) { return; }
    }
    ctx->pc = 0x2F925Cu;
label_2f925c:
    // 0x2f925c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f925cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9260: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9260u;
    {
        const bool branch_taken_0x2f9260 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9260u;
            // 0x2f9264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9260) {
            ctx->pc = 0x2F9270u;
            goto label_2f9270;
        }
    }
    ctx->pc = 0x2F9268u;
    // 0x2f9268: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F9268u;
    {
        const bool branch_taken_0x2f9268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9268u;
            // 0x2f926c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9268) {
            ctx->pc = 0x2F9310u;
            goto label_2f9310;
        }
    }
    ctx->pc = 0x2F9270u;
label_2f9270:
    // 0x2f9270: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9270u;
    SET_GPR_U32(ctx, 31, 0x2F9278u);
    ctx->pc = 0x2F9274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9270u;
            // 0x2f9274: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9278u; }
        if (ctx->pc != 0x2F9278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9278u; }
        if (ctx->pc != 0x2F9278u) { return; }
    }
    ctx->pc = 0x2F9278u;
label_2f9278:
    // 0x2f9278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f927c: 0xa2220016  sb          $v0, 0x16($s1)
    ctx->pc = 0x2f927cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f9280: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9280u;
    SET_GPR_U32(ctx, 31, 0x2F9288u);
    ctx->pc = 0x2F9284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9280u;
            // 0x2f9284: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9288u; }
        if (ctx->pc != 0x2F9288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9288u; }
        if (ctx->pc != 0x2F9288u) { return; }
    }
    ctx->pc = 0x2F9288u;
label_2f9288:
    // 0x2f9288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f928c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2f928cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2f9290: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9290u;
    SET_GPR_U32(ctx, 31, 0x2F9298u);
    ctx->pc = 0x2F9294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9290u;
            // 0x2f9294: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9298u; }
        if (ctx->pc != 0x2F9298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9298u; }
        if (ctx->pc != 0x2F9298u) { return; }
    }
    ctx->pc = 0x2F9298u;
label_2f9298:
    // 0x2f9298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f9298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f929c: 0xa2220017  sb          $v0, 0x17($s1)
    ctx->pc = 0x2f929cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 23), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f92a0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F92A0u;
    SET_GPR_U32(ctx, 31, 0x2F92A8u);
    ctx->pc = 0x2F92A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92A0u;
            // 0x2f92a4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92A8u; }
        if (ctx->pc != 0x2F92A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92A8u; }
        if (ctx->pc != 0x2F92A8u) { return; }
    }
    ctx->pc = 0x2F92A8u;
label_2f92a8:
    // 0x2f92a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f92a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f92ac: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x2f92acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f92b0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F92B0u;
    SET_GPR_U32(ctx, 31, 0x2F92B8u);
    ctx->pc = 0x2F92B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92B0u;
            // 0x2f92b4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92B8u; }
        if (ctx->pc != 0x2F92B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92B8u; }
        if (ctx->pc != 0x2F92B8u) { return; }
    }
    ctx->pc = 0x2F92B8u;
label_2f92b8:
    // 0x2f92b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f92b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f92bc: 0xa2220014  sb          $v0, 0x14($s1)
    ctx->pc = 0x2f92bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f92c0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F92C0u;
    SET_GPR_U32(ctx, 31, 0x2F92C8u);
    ctx->pc = 0x2F92C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92C0u;
            // 0x2f92c4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92C8u; }
        if (ctx->pc != 0x2F92C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92C8u; }
        if (ctx->pc != 0x2F92C8u) { return; }
    }
    ctx->pc = 0x2F92C8u;
label_2f92c8:
    // 0x2f92c8: 0xa2220015  sb          $v0, 0x15($s1)
    ctx->pc = 0x2f92c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f92cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f92ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f92d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f92d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f92d4:
    // 0x2f92d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f92d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f92d8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F92D8u;
    SET_GPR_U32(ctx, 31, 0x2F92E0u);
    ctx->pc = 0x2F92DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92D8u;
            // 0x2f92dc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92E0u; }
        if (ctx->pc != 0x2F92E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92E0u; }
        if (ctx->pc != 0x2F92E0u) { return; }
    }
    ctx->pc = 0x2F92E0u;
label_2f92e0:
    // 0x2f92e0: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x2f92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2f92e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f92e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f92e8: 0xa4620024  sh          $v0, 0x24($v1)
    ctx->pc = 0x2f92e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f92ec: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F92ECu;
    SET_GPR_U32(ctx, 31, 0x2F92F4u);
    ctx->pc = 0x2F92F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92ECu;
            // 0x2f92f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92F4u; }
        if (ctx->pc != 0x2F92F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92F4u; }
        if (ctx->pc != 0x2F92F4u) { return; }
    }
    ctx->pc = 0x2F92F4u;
label_2f92f4:
    // 0x2f92f4: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2f92f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2f92f8: 0xa062002a  sb          $v0, 0x2A($v1)
    ctx->pc = 0x2f92f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f92fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f92fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f9300: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2f9300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f9304: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F9304u;
    {
        const bool branch_taken_0x2f9304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9304u;
            // 0x2f9308: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9304) {
            ctx->pc = 0x2F92D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f92d4;
        }
    }
    ctx->pc = 0x2F930Cu;
    // 0x2f930c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9310:
    // 0x2f9310: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f9310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f9314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f931c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f931cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f9320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9324: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9324u;
            // 0x2f9328: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F932Cu;
}
