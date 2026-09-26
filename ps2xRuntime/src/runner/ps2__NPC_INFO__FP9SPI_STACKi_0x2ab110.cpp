#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _NPC_INFO__FP9SPI_STACKi
// Address: 0x2ab110 - 0x2ab244
void ps2__NPC_INFO__FP9SPI_STACKi_0x2ab110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__NPC_INFO__FP9SPI_STACKi_0x2ab110");
#endif

    switch (ctx->pc) {
        case 0x2ab15cu: goto label_2ab15c;
        case 0x2ab16cu: goto label_2ab16c;
        case 0x2ab17cu: goto label_2ab17c;
        case 0x2ab194u: goto label_2ab194;
        case 0x2ab1a8u: goto label_2ab1a8;
        case 0x2ab1b4u: goto label_2ab1b4;
        case 0x2ab1c4u: goto label_2ab1c4;
        case 0x2ab1d4u: goto label_2ab1d4;
        case 0x2ab1e4u: goto label_2ab1e4;
        case 0x2ab1f4u: goto label_2ab1f4;
        case 0x2ab204u: goto label_2ab204;
        case 0x2ab214u: goto label_2ab214;
        case 0x2ab220u: goto label_2ab220;
        default: break;
    }

    ctx->pc = 0x2ab110u;

    // 0x2ab110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ab110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ab114: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2ab114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2ab118: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ab118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ab11c: 0x2463a3a0  addiu       $v1, $v1, -0x5C60
    ctx->pc = 0x2ab11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943648));
    // 0x2ab120: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ab120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ab124: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ab124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ab128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab130: 0x93869ac8  lbu         $a2, -0x6538($gp)
    ctx->pc = 0x2ab130u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941384)));
    // 0x2ab134: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x2ab134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ab138: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2ab138u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2ab13c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2ab13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ab140: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ab140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ab144: 0xa3829ac8  sb          $v0, -0x6538($gp)
    ctx->pc = 0x2ab144u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941384), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab148: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2ab148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ab14c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2ab14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ab150: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ab150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ab154: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB154u;
    SET_GPR_U32(ctx, 31, 0x2AB15Cu);
    ctx->pc = 0x2AB158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB154u;
            // 0x2ab158: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB15Cu; }
        if (ctx->pc != 0x2AB15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB15Cu; }
        if (ctx->pc != 0x2AB15Cu) { return; }
    }
    ctx->pc = 0x2AB15Cu;
label_2ab15c:
    // 0x2ab15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab160: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ab160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab164: 0xc05191c  jal         func_146470
    ctx->pc = 0x2AB164u;
    SET_GPR_U32(ctx, 31, 0x2AB16Cu);
    ctx->pc = 0x2AB168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB164u;
            // 0x2ab168: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB16Cu; }
        if (ctx->pc != 0x2AB16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB16Cu; }
        if (ctx->pc != 0x2AB16Cu) { return; }
    }
    ctx->pc = 0x2AB16Cu;
label_2ab16c:
    // 0x2ab16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab170: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ab170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab174: 0xc05191c  jal         func_146470
    ctx->pc = 0x2AB174u;
    SET_GPR_U32(ctx, 31, 0x2AB17Cu);
    ctx->pc = 0x2AB178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB174u;
            // 0x2ab178: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB17Cu; }
        if (ctx->pc != 0x2AB17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB17Cu; }
        if (ctx->pc != 0x2AB17Cu) { return; }
    }
    ctx->pc = 0x2AB17Cu;
label_2ab17c:
    // 0x2ab17c: 0xa6320000  sh          $s2, 0x0($s1)
    ctx->pc = 0x2ab17cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x2ab180: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB180u;
    {
        const bool branch_taken_0x2ab180 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB180u;
            // 0x2ab184: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab180) {
            ctx->pc = 0x2AB194u;
            goto label_2ab194;
        }
    }
    ctx->pc = 0x2AB188u;
    // 0x2ab188: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ab188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab18c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2AB18Cu;
    SET_GPR_U32(ctx, 31, 0x2AB194u);
    ctx->pc = 0x2AB190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB18Cu;
            // 0x2ab190: 0x26240003  addiu       $a0, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB194u; }
        if (ctx->pc != 0x2AB194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB194u; }
        if (ctx->pc != 0x2AB194u) { return; }
    }
    ctx->pc = 0x2AB194u;
label_2ab194:
    // 0x2ab194: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AB194u;
    {
        const bool branch_taken_0x2ab194 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB194u;
            // 0x2ab198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab194) {
            ctx->pc = 0x2AB1ACu;
            goto label_2ab1ac;
        }
    }
    ctx->pc = 0x2AB19Cu;
    // 0x2ab19c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ab19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1a0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2AB1A0u;
    SET_GPR_U32(ctx, 31, 0x2AB1A8u);
    ctx->pc = 0x2AB1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1A0u;
            // 0x2ab1a4: 0x2624001f  addiu       $a0, $s1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1A8u; }
        if (ctx->pc != 0x2AB1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1A8u; }
        if (ctx->pc != 0x2AB1A8u) { return; }
    }
    ctx->pc = 0x2AB1A8u;
label_2ab1a8:
    // 0x2ab1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ab1ac:
    // 0x2ab1ac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB1ACu;
    SET_GPR_U32(ctx, 31, 0x2AB1B4u);
    ctx->pc = 0x2AB1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1ACu;
            // 0x2ab1b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1B4u; }
        if (ctx->pc != 0x2AB1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1B4u; }
        if (ctx->pc != 0x2AB1B4u) { return; }
    }
    ctx->pc = 0x2AB1B4u;
label_2ab1b4:
    // 0x2ab1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1b8: 0xa2220031  sb          $v0, 0x31($s1)
    ctx->pc = 0x2ab1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab1bc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB1BCu;
    SET_GPR_U32(ctx, 31, 0x2AB1C4u);
    ctx->pc = 0x2AB1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1BCu;
            // 0x2ab1c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1C4u; }
        if (ctx->pc != 0x2AB1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1C4u; }
        if (ctx->pc != 0x2AB1C4u) { return; }
    }
    ctx->pc = 0x2AB1C4u;
label_2ab1c4:
    // 0x2ab1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1c8: 0xa2220030  sb          $v0, 0x30($s1)
    ctx->pc = 0x2ab1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab1cc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB1CCu;
    SET_GPR_U32(ctx, 31, 0x2AB1D4u);
    ctx->pc = 0x2AB1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1CCu;
            // 0x2ab1d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1D4u; }
        if (ctx->pc != 0x2AB1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1D4u; }
        if (ctx->pc != 0x2AB1D4u) { return; }
    }
    ctx->pc = 0x2AB1D4u;
label_2ab1d4:
    // 0x2ab1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1d8: 0xa222002f  sb          $v0, 0x2F($s1)
    ctx->pc = 0x2ab1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab1dc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB1DCu;
    SET_GPR_U32(ctx, 31, 0x2AB1E4u);
    ctx->pc = 0x2AB1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1DCu;
            // 0x2ab1e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1E4u; }
        if (ctx->pc != 0x2AB1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1E4u; }
        if (ctx->pc != 0x2AB1E4u) { return; }
    }
    ctx->pc = 0x2AB1E4u;
label_2ab1e4:
    // 0x2ab1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1e8: 0xa2220032  sb          $v0, 0x32($s1)
    ctx->pc = 0x2ab1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab1ec: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB1ECu;
    SET_GPR_U32(ctx, 31, 0x2AB1F4u);
    ctx->pc = 0x2AB1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1ECu;
            // 0x2ab1f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1F4u; }
        if (ctx->pc != 0x2AB1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1F4u; }
        if (ctx->pc != 0x2AB1F4u) { return; }
    }
    ctx->pc = 0x2AB1F4u;
label_2ab1f4:
    // 0x2ab1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab1f8: 0xa2220033  sb          $v0, 0x33($s1)
    ctx->pc = 0x2ab1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab1fc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB1FCu;
    SET_GPR_U32(ctx, 31, 0x2AB204u);
    ctx->pc = 0x2AB200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1FCu;
            // 0x2ab200: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB204u; }
        if (ctx->pc != 0x2AB204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB204u; }
        if (ctx->pc != 0x2AB204u) { return; }
    }
    ctx->pc = 0x2AB204u;
label_2ab204:
    // 0x2ab204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab208: 0xa2220034  sb          $v0, 0x34($s1)
    ctx->pc = 0x2ab208u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab20c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB20Cu;
    SET_GPR_U32(ctx, 31, 0x2AB214u);
    ctx->pc = 0x2AB210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB20Cu;
            // 0x2ab210: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB214u; }
        if (ctx->pc != 0x2AB214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB214u; }
        if (ctx->pc != 0x2AB214u) { return; }
    }
    ctx->pc = 0x2AB214u;
label_2ab214:
    // 0x2ab214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab218: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB218u;
    SET_GPR_U32(ctx, 31, 0x2AB220u);
    ctx->pc = 0x2AB21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB218u;
            // 0x2ab21c: 0xa2220035  sb          $v0, 0x35($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 53), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB220u; }
        if (ctx->pc != 0x2AB220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB220u; }
        if (ctx->pc != 0x2AB220u) { return; }
    }
    ctx->pc = 0x2AB220u;
label_2ab220:
    // 0x2ab220: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x2ab220u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab224: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ab224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab22c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ab22cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ab230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab23c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB23Cu;
            // 0x2ab240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB244u;
}
