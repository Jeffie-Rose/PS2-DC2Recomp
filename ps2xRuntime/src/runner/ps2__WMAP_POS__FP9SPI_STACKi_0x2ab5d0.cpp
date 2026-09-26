#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _WMAP_POS__FP9SPI_STACKi
// Address: 0x2ab5d0 - 0x2ab6c8
void ps2__WMAP_POS__FP9SPI_STACKi_0x2ab5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__WMAP_POS__FP9SPI_STACKi_0x2ab5d0");
#endif

    switch (ctx->pc) {
        case 0x2ab5e8u: goto label_2ab5e8;
        case 0x2ab608u: goto label_2ab608;
        case 0x2ab618u: goto label_2ab618;
        case 0x2ab628u: goto label_2ab628;
        case 0x2ab638u: goto label_2ab638;
        case 0x2ab648u: goto label_2ab648;
        case 0x2ab654u: goto label_2ab654;
        case 0x2ab664u: goto label_2ab664;
        case 0x2ab670u: goto label_2ab670;
        case 0x2ab688u: goto label_2ab688;
        case 0x2ab6a4u: goto label_2ab6a4;
        default: break;
    }

    ctx->pc = 0x2ab5d0u;

    // 0x2ab5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ab5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab5d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ab5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab5d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab5e0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB5E0u;
    SET_GPR_U32(ctx, 31, 0x2AB5E8u);
    ctx->pc = 0x2AB5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB5E0u;
            // 0x2ab5e4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5E8u; }
        if (ctx->pc != 0x2AB5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB5E8u; }
        if (ctx->pc != 0x2AB5E8u) { return; }
    }
    ctx->pc = 0x2AB5E8u;
label_2ab5e8:
    // 0x2ab5e8: 0x8f839adc  lw          $v1, -0x6524($gp)
    ctx->pc = 0x2ab5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941404)));
    // 0x2ab5ec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2ab5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ab5f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ab5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ab5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ab5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ab5fc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x2ab5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ab600: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB600u;
    SET_GPR_U32(ctx, 31, 0x2AB608u);
    ctx->pc = 0x2AB604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB600u;
            // 0x2ab604: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB608u; }
        if (ctx->pc != 0x2AB608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB608u; }
        if (ctx->pc != 0x2AB608u) { return; }
    }
    ctx->pc = 0x2AB608u;
label_2ab608:
    // 0x2ab608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab60c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2ab60cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2ab610: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB610u;
    SET_GPR_U32(ctx, 31, 0x2AB618u);
    ctx->pc = 0x2AB614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB610u;
            // 0x2ab614: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB618u; }
        if (ctx->pc != 0x2AB618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB618u; }
        if (ctx->pc != 0x2AB618u) { return; }
    }
    ctx->pc = 0x2AB618u;
label_2ab618:
    // 0x2ab618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab61c: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x2ab61cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab620: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB620u;
    SET_GPR_U32(ctx, 31, 0x2AB628u);
    ctx->pc = 0x2AB624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB620u;
            // 0x2ab624: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB628u; }
        if (ctx->pc != 0x2AB628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB628u; }
        if (ctx->pc != 0x2AB628u) { return; }
    }
    ctx->pc = 0x2AB628u;
label_2ab628:
    // 0x2ab628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab62c: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x2ab62cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab630: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB630u;
    SET_GPR_U32(ctx, 31, 0x2AB638u);
    ctx->pc = 0x2AB634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB630u;
            // 0x2ab634: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB638u; }
        if (ctx->pc != 0x2AB638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB638u; }
        if (ctx->pc != 0x2AB638u) { return; }
    }
    ctx->pc = 0x2AB638u;
label_2ab638:
    // 0x2ab638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab63c: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x2ab63cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab640: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB640u;
    SET_GPR_U32(ctx, 31, 0x2AB648u);
    ctx->pc = 0x2AB644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB640u;
            // 0x2ab644: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB648u; }
        if (ctx->pc != 0x2AB648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB648u; }
        if (ctx->pc != 0x2AB648u) { return; }
    }
    ctx->pc = 0x2AB648u;
label_2ab648:
    // 0x2ab648: 0xa222000e  sb          $v0, 0xE($s1)
    ctx->pc = 0x2ab648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab64c: 0xc0b4a20  jal         func_2D2880
    ctx->pc = 0x2AB64Cu;
    SET_GPR_U32(ctx, 31, 0x2AB654u);
    ctx->pc = 0x2AB650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB64Cu;
            // 0x2ab650: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2880u;
    if (runtime->hasFunction(0x2D2880u)) {
        auto targetFn = runtime->lookupFunction(0x2D2880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB654u; }
        if (ctx->pc != 0x2AB654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapTitle__Fi_0x2d2880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB654u; }
        if (ctx->pc != 0x2AB654u) { return; }
    }
    ctx->pc = 0x2AB654u;
label_2ab654:
    // 0x2ab654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab658: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ab658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2ab65c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB65Cu;
    SET_GPR_U32(ctx, 31, 0x2AB664u);
    ctx->pc = 0x2AB660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB65Cu;
            // 0x2ab660: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB664u; }
        if (ctx->pc != 0x2AB664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB664u; }
        if (ctx->pc != 0x2AB664u) { return; }
    }
    ctx->pc = 0x2AB664u;
label_2ab664:
    // 0x2ab664: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2ab664u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab668: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2AB668u;
    SET_GPR_U32(ctx, 31, 0x2AB670u);
    ctx->pc = 0x2AB66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB668u;
            // 0x2ab66c: 0x86240010  lh          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB670u; }
        if (ctx->pc != 0x2AB670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB670u; }
        if (ctx->pc != 0x2AB670u) { return; }
    }
    ctx->pc = 0x2AB670u;
label_2ab670:
    // 0x2ab670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB670u;
    {
        const bool branch_taken_0x2ab670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB670u;
            // 0x2ab674: 0xa220000f  sb          $zero, 0xF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab670) {
            ctx->pc = 0x2AB680u;
            goto label_2ab680;
        }
    }
    ctx->pc = 0x2AB678u;
    // 0x2ab678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab67c: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x2ab67cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
label_2ab680:
    // 0x2ab680: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB680u;
    SET_GPR_U32(ctx, 31, 0x2AB688u);
    ctx->pc = 0x2AB684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB680u;
            // 0x2ab684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB688u; }
        if (ctx->pc != 0x2AB688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB688u; }
        if (ctx->pc != 0x2AB688u) { return; }
    }
    ctx->pc = 0x2AB688u;
label_2ab688:
    // 0x2ab688: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x2ab688u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab68c: 0x82230012  lb          $v1, 0x12($s1)
    ctx->pc = 0x2ab68cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2ab690: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ab690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ab694: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AB694u;
    {
        const bool branch_taken_0x2ab694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB694u;
            // 0x2ab698: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab694) {
            ctx->pc = 0x2AB6B0u;
            goto label_2ab6b0;
        }
    }
    ctx->pc = 0x2AB69Cu;
    // 0x2ab69c: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2AB69Cu;
    SET_GPR_U32(ctx, 31, 0x2AB6A4u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB6A4u; }
        if (ctx->pc != 0x2AB6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB6A4u; }
        if (ctx->pc != 0x2AB6A4u) { return; }
    }
    ctx->pc = 0x2AB6A4u;
label_2ab6a4:
    // 0x2ab6a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB6A4u;
    {
        const bool branch_taken_0x2ab6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab6a4) {
            ctx->pc = 0x2AB6B0u;
            goto label_2ab6b0;
        }
    }
    ctx->pc = 0x2AB6ACu;
    // 0x2ab6ac: 0xa220000f  sb          $zero, 0xF($s1)
    ctx->pc = 0x2ab6acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
label_2ab6b0:
    // 0x2ab6b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ab6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab6b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB6C0u;
            // 0x2ab6c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB6C8u;
}
