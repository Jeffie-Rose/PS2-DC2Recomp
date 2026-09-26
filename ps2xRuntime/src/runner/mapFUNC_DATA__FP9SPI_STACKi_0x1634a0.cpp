#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_DATA__FP9SPI_STACKi
// Address: 0x1634a0 - 0x163678
void mapFUNC_DATA__FP9SPI_STACKi_0x1634a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_DATA__FP9SPI_STACKi_0x1634a0");
#endif

    switch (ctx->pc) {
        case 0x1634bcu: goto label_1634bc;
        case 0x1634dcu: goto label_1634dc;
        case 0x1634f8u: goto label_1634f8;
        case 0x163514u: goto label_163514;
        case 0x163530u: goto label_163530;
        case 0x16354cu: goto label_16354c;
        case 0x163568u: goto label_163568;
        case 0x163584u: goto label_163584;
        case 0x1635acu: goto label_1635ac;
        case 0x1635c8u: goto label_1635c8;
        case 0x163608u: goto label_163608;
        case 0x163618u: goto label_163618;
        case 0x163634u: goto label_163634;
        case 0x163658u: goto label_163658;
        default: break;
    }

    ctx->pc = 0x1634a0u;

    // 0x1634a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1634a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1634a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1634a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1634a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1634a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1634ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1634acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1634b0: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1634b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1634b4: 0xc05191c  jal         func_146470
    ctx->pc = 0x1634B4u;
    SET_GPR_U32(ctx, 31, 0x1634BCu);
    ctx->pc = 0x1634B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1634B4u;
            // 0x1634b8: 0xaf808940  sw          $zero, -0x76C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634BCu; }
        if (ctx->pc != 0x1634BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634BCu; }
        if (ctx->pc != 0x1634BCu) { return; }
    }
    ctx->pc = 0x1634BCu;
label_1634bc:
    // 0x1634bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1634bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634c0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1634C0u;
    {
        const bool branch_taken_0x1634c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1634C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1634C0u;
            // 0x1634c4: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634c0) {
            ctx->pc = 0x1634D0u;
            goto label_1634d0;
        }
    }
    ctx->pc = 0x1634C8u;
    // 0x1634c8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1634C8u;
    {
        const bool branch_taken_0x1634c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1634C8u;
            // 0x1634cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634c8) {
            ctx->pc = 0x163664u;
            goto label_163664;
        }
    }
    ctx->pc = 0x1634D0u;
label_1634d0:
    // 0x1634d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1634d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634d4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1634D4u;
    SET_GPR_U32(ctx, 31, 0x1634DCu);
    ctx->pc = 0x1634D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1634D4u;
            // 0x1634d8: 0x24a530b8  addiu       $a1, $a1, 0x30B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634DCu; }
        if (ctx->pc != 0x1634DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634DCu; }
        if (ctx->pc != 0x1634DCu) { return; }
    }
    ctx->pc = 0x1634DCu;
label_1634dc:
    // 0x1634dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1634DCu;
    {
        const bool branch_taken_0x1634dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1634E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1634DCu;
            // 0x1634e0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634dc) {
            ctx->pc = 0x1634ECu;
            goto label_1634ec;
        }
    }
    ctx->pc = 0x1634E4u;
    // 0x1634e4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1634E4u;
    {
        const bool branch_taken_0x1634e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1634E4u;
            // 0x1634e8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634e4) {
            ctx->pc = 0x1635E0u;
            goto label_1635e0;
        }
    }
    ctx->pc = 0x1634ECu;
label_1634ec:
    // 0x1634ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1634ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634f0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1634F0u;
    SET_GPR_U32(ctx, 31, 0x1634F8u);
    ctx->pc = 0x1634F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1634F0u;
            // 0x1634f4: 0x24a530c0  addiu       $a1, $a1, 0x30C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634F8u; }
        if (ctx->pc != 0x1634F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1634F8u; }
        if (ctx->pc != 0x1634F8u) { return; }
    }
    ctx->pc = 0x1634F8u;
label_1634f8:
    // 0x1634f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1634F8u;
    {
        const bool branch_taken_0x1634f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1634FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1634F8u;
            // 0x1634fc: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634f8) {
            ctx->pc = 0x163508u;
            goto label_163508;
        }
    }
    ctx->pc = 0x163500u;
    // 0x163500: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x163500u;
    {
        const bool branch_taken_0x163500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163500u;
            // 0x163504: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163500) {
            ctx->pc = 0x1635E0u;
            goto label_1635e0;
        }
    }
    ctx->pc = 0x163508u;
label_163508:
    // 0x163508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16350c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x16350Cu;
    SET_GPR_U32(ctx, 31, 0x163514u);
    ctx->pc = 0x163510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16350Cu;
            // 0x163510: 0x24a530c8  addiu       $a1, $a1, 0x30C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163514u; }
        if (ctx->pc != 0x163514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163514u; }
        if (ctx->pc != 0x163514u) { return; }
    }
    ctx->pc = 0x163514u;
label_163514:
    // 0x163514: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163514u;
    {
        const bool branch_taken_0x163514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163514u;
            // 0x163518: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163514) {
            ctx->pc = 0x163524u;
            goto label_163524;
        }
    }
    ctx->pc = 0x16351Cu;
    // 0x16351c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16351Cu;
    {
        const bool branch_taken_0x16351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16351Cu;
            // 0x163520: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16351c) {
            ctx->pc = 0x1635E0u;
            goto label_1635e0;
        }
    }
    ctx->pc = 0x163524u;
label_163524:
    // 0x163524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163528: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x163528u;
    SET_GPR_U32(ctx, 31, 0x163530u);
    ctx->pc = 0x16352Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163528u;
            // 0x16352c: 0x24a530d0  addiu       $a1, $a1, 0x30D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163530u; }
        if (ctx->pc != 0x163530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163530u; }
        if (ctx->pc != 0x163530u) { return; }
    }
    ctx->pc = 0x163530u;
label_163530:
    // 0x163530: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163530u;
    {
        const bool branch_taken_0x163530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163530u;
            // 0x163534: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163530) {
            ctx->pc = 0x163540u;
            goto label_163540;
        }
    }
    ctx->pc = 0x163538u;
    // 0x163538: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x163538u;
    {
        const bool branch_taken_0x163538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16353Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163538u;
            // 0x16353c: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163538) {
            ctx->pc = 0x1635E0u;
            goto label_1635e0;
        }
    }
    ctx->pc = 0x163540u;
label_163540:
    // 0x163540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163544: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x163544u;
    SET_GPR_U32(ctx, 31, 0x16354Cu);
    ctx->pc = 0x163548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163544u;
            // 0x163548: 0x24a530d8  addiu       $a1, $a1, 0x30D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16354Cu; }
        if (ctx->pc != 0x16354Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16354Cu; }
        if (ctx->pc != 0x16354Cu) { return; }
    }
    ctx->pc = 0x16354Cu;
label_16354c:
    // 0x16354c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16354Cu;
    {
        const bool branch_taken_0x16354c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16354Cu;
            // 0x163550: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16354c) {
            ctx->pc = 0x16355Cu;
            goto label_16355c;
        }
    }
    ctx->pc = 0x163554u;
    // 0x163554: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x163554u;
    {
        const bool branch_taken_0x163554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163554u;
            // 0x163558: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163554) {
            ctx->pc = 0x1635E0u;
            goto label_1635e0;
        }
    }
    ctx->pc = 0x16355Cu;
label_16355c:
    // 0x16355c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163560: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x163560u;
    SET_GPR_U32(ctx, 31, 0x163568u);
    ctx->pc = 0x163564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163560u;
            // 0x163564: 0x24a530e0  addiu       $a1, $a1, 0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163568u; }
        if (ctx->pc != 0x163568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163568u; }
        if (ctx->pc != 0x163568u) { return; }
    }
    ctx->pc = 0x163568u;
label_163568:
    // 0x163568: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163568u;
    {
        const bool branch_taken_0x163568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163568u;
            // 0x16356c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163568) {
            ctx->pc = 0x163578u;
            goto label_163578;
        }
    }
    ctx->pc = 0x163570u;
    // 0x163570: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x163570u;
    {
        const bool branch_taken_0x163570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163570u;
            // 0x163574: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163570) {
            ctx->pc = 0x1635E0u;
            goto label_1635e0;
        }
    }
    ctx->pc = 0x163578u;
label_163578:
    // 0x163578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16357c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x16357Cu;
    SET_GPR_U32(ctx, 31, 0x163584u);
    ctx->pc = 0x163580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16357Cu;
            // 0x163580: 0x24a530e8  addiu       $a1, $a1, 0x30E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163584u; }
        if (ctx->pc != 0x163584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163584u; }
        if (ctx->pc != 0x163584u) { return; }
    }
    ctx->pc = 0x163584u;
label_163584:
    // 0x163584: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x163584u;
    {
        const bool branch_taken_0x163584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163584u;
            // 0x163588: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163584) {
            ctx->pc = 0x1635A0u;
            goto label_1635a0;
        }
    }
    ctx->pc = 0x16358Cu;
    // 0x16358c: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x16358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x163590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163594: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x163594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x163598: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x163598u;
    {
        const bool branch_taken_0x163598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16359Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163598u;
            // 0x16359c: 0xac430cac  sw          $v1, 0xCAC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163598) {
            ctx->pc = 0x1635E0u;
            goto label_1635e0;
        }
    }
    ctx->pc = 0x1635A0u;
label_1635a0:
    // 0x1635a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1635a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1635a4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1635A4u;
    SET_GPR_U32(ctx, 31, 0x1635ACu);
    ctx->pc = 0x1635A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1635A4u;
            // 0x1635a8: 0x24a530f0  addiu       $a1, $a1, 0x30F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635ACu; }
        if (ctx->pc != 0x1635ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635ACu; }
        if (ctx->pc != 0x1635ACu) { return; }
    }
    ctx->pc = 0x1635ACu;
label_1635ac:
    // 0x1635ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1635ACu;
    {
        const bool branch_taken_0x1635ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1635B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1635ACu;
            // 0x1635b0: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635ac) {
            ctx->pc = 0x1635BCu;
            goto label_1635bc;
        }
    }
    ctx->pc = 0x1635B4u;
    // 0x1635b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1635B4u;
    {
        const bool branch_taken_0x1635b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1635B4u;
            // 0x1635b8: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635b4) {
            ctx->pc = 0x1635E0u;
            goto label_1635e0;
        }
    }
    ctx->pc = 0x1635BCu;
label_1635bc:
    // 0x1635bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1635bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1635c0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1635C0u;
    SET_GPR_U32(ctx, 31, 0x1635C8u);
    ctx->pc = 0x1635C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1635C0u;
            // 0x1635c4: 0x24a530f8  addiu       $a1, $a1, 0x30F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635C8u; }
        if (ctx->pc != 0x1635C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1635C8u; }
        if (ctx->pc != 0x1635C8u) { return; }
    }
    ctx->pc = 0x1635C8u;
label_1635c8:
    // 0x1635c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1635C8u;
    {
        const bool branch_taken_0x1635c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1635CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1635C8u;
            // 0x1635cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635c8) {
            ctx->pc = 0x1635D8u;
            goto label_1635d8;
        }
    }
    ctx->pc = 0x1635D0u;
    // 0x1635d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1635D0u;
    {
        const bool branch_taken_0x1635d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1635D0u;
            // 0x1635d4: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635d0) {
            ctx->pc = 0x1635E0u;
            goto label_1635e0;
        }
    }
    ctx->pc = 0x1635D8u;
label_1635d8:
    // 0x1635d8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1635D8u;
    {
        const bool branch_taken_0x1635d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1635D8u;
            // 0x1635dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635d8) {
            ctx->pc = 0x163668u;
            goto label_163668;
        }
    }
    ctx->pc = 0x1635E0u;
label_1635e0:
    // 0x1635e0: 0x8f828948  lw          $v0, -0x76B8($gp)
    ctx->pc = 0x1635e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
    // 0x1635e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1635E4u;
    {
        const bool branch_taken_0x1635e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1635e4) {
            ctx->pc = 0x163620u;
            goto label_163620;
        }
    }
    ctx->pc = 0x1635ECu;
    // 0x1635ec: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x1635ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x1635f0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1635F0u;
    {
        const bool branch_taken_0x1635f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1635F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1635F0u;
            // 0x1635f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635f0) {
            ctx->pc = 0x163600u;
            goto label_163600;
        }
    }
    ctx->pc = 0x1635F8u;
    // 0x1635f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1635F8u;
    {
        const bool branch_taken_0x1635f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1635f8) {
            ctx->pc = 0x163664u;
            goto label_163664;
        }
    }
    ctx->pc = 0x163600u;
label_163600:
    // 0x163600: 0xc05874c  jal         func_161D30
    ctx->pc = 0x163600u;
    SET_GPR_U32(ctx, 31, 0x163608u);
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163608u; }
        if (ctx->pc != 0x163608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163608u; }
        if (ctx->pc != 0x163608u) { return; }
    }
    ctx->pc = 0x163608u;
label_163608:
    // 0x163608: 0x8f868920  lw          $a2, -0x76E0($gp)
    ctx->pc = 0x163608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x16360c: 0x244402b0  addiu       $a0, $v0, 0x2B0
    ctx->pc = 0x16360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x163610: 0xc0a74e8  jal         func_29D3A0
    ctx->pc = 0x163610u;
    SET_GPR_U32(ctx, 31, 0x163618u);
    ctx->pc = 0x163614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163610u;
            // 0x163614: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D3A0u;
    if (runtime->hasFunction(0x29D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163618u; }
        if (ctx->pc != 0x163618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__14CFuncPointMngrFiP9mgCMemory_0x29d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163618u; }
        if (ctx->pc != 0x163618u) { return; }
    }
    ctx->pc = 0x163618u;
label_163618:
    // 0x163618: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x163618u;
    {
        const bool branch_taken_0x163618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16361Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163618u;
            // 0x16361c: 0xaf828940  sw          $v0, -0x76C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163618) {
            ctx->pc = 0x163638u;
            goto label_163638;
        }
    }
    ctx->pc = 0x163620u;
label_163620:
    // 0x163620: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x163620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x163624: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163628: 0x8f868920  lw          $a2, -0x76E0($gp)
    ctx->pc = 0x163628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x16362c: 0xc0a74e8  jal         func_29D3A0
    ctx->pc = 0x16362Cu;
    SET_GPR_U32(ctx, 31, 0x163634u);
    ctx->pc = 0x163630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16362Cu;
            // 0x163630: 0x24440cb0  addiu       $a0, $v0, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D3A0u;
    if (runtime->hasFunction(0x29D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163634u; }
        if (ctx->pc != 0x163634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__14CFuncPointMngrFiP9mgCMemory_0x29d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163634u; }
        if (ctx->pc != 0x163634u) { return; }
    }
    ctx->pc = 0x163634u;
label_163634:
    // 0x163634: 0xaf828940  sw          $v0, -0x76C0($gp)
    ctx->pc = 0x163634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 2));
label_163638:
    // 0x163638: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x16363c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16363Cu;
    {
        const bool branch_taken_0x16363c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16363c) {
            ctx->pc = 0x16364Cu;
            goto label_16364c;
        }
    }
    ctx->pc = 0x163644u;
    // 0x163644: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x163644u;
    {
        const bool branch_taken_0x163644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163644u;
            // 0x163648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163644) {
            ctx->pc = 0x163664u;
            goto label_163664;
        }
    }
    ctx->pc = 0x16364Cu;
label_16364c:
    // 0x16364c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x16364cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x163650: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163650u;
    SET_GPR_U32(ctx, 31, 0x163658u);
    ctx->pc = 0x163654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163650u;
            // 0x163654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163658u; }
        if (ctx->pc != 0x163658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163658u; }
        if (ctx->pc != 0x163658u) { return; }
    }
    ctx->pc = 0x163658u;
label_163658:
    // 0x163658: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x163658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x16365c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x16365cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x163660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163664:
    // 0x163664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x163664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_163668:
    // 0x163668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16366c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16366cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163670: 0x3e00008  jr          $ra
    ctx->pc = 0x163670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163670u;
            // 0x163674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163678u;
}
