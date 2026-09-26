#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pcpMDS__FP9SPI_STACKi
// Address: 0x169390 - 0x16949c
void pcpMDS__FP9SPI_STACKi_0x169390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pcpMDS__FP9SPI_STACKi_0x169390");
#endif

    switch (ctx->pc) {
        case 0x169390u: goto label_169390;
        case 0x169394u: goto label_169394;
        case 0x169398u: goto label_169398;
        case 0x16939cu: goto label_16939c;
        case 0x1693a0u: goto label_1693a0;
        case 0x1693a4u: goto label_1693a4;
        case 0x1693a8u: goto label_1693a8;
        case 0x1693acu: goto label_1693ac;
        case 0x1693b0u: goto label_1693b0;
        case 0x1693b4u: goto label_1693b4;
        case 0x1693b8u: goto label_1693b8;
        case 0x1693bcu: goto label_1693bc;
        case 0x1693c0u: goto label_1693c0;
        case 0x1693c4u: goto label_1693c4;
        case 0x1693c8u: goto label_1693c8;
        case 0x1693ccu: goto label_1693cc;
        case 0x1693d0u: goto label_1693d0;
        case 0x1693d4u: goto label_1693d4;
        case 0x1693d8u: goto label_1693d8;
        case 0x1693dcu: goto label_1693dc;
        case 0x1693e0u: goto label_1693e0;
        case 0x1693e4u: goto label_1693e4;
        case 0x1693e8u: goto label_1693e8;
        case 0x1693ecu: goto label_1693ec;
        case 0x1693f0u: goto label_1693f0;
        case 0x1693f4u: goto label_1693f4;
        case 0x1693f8u: goto label_1693f8;
        case 0x1693fcu: goto label_1693fc;
        case 0x169400u: goto label_169400;
        case 0x169404u: goto label_169404;
        case 0x169408u: goto label_169408;
        case 0x16940cu: goto label_16940c;
        case 0x169410u: goto label_169410;
        case 0x169414u: goto label_169414;
        case 0x169418u: goto label_169418;
        case 0x16941cu: goto label_16941c;
        case 0x169420u: goto label_169420;
        case 0x169424u: goto label_169424;
        case 0x169428u: goto label_169428;
        case 0x16942cu: goto label_16942c;
        case 0x169430u: goto label_169430;
        case 0x169434u: goto label_169434;
        case 0x169438u: goto label_169438;
        case 0x16943cu: goto label_16943c;
        case 0x169440u: goto label_169440;
        case 0x169444u: goto label_169444;
        case 0x169448u: goto label_169448;
        case 0x16944cu: goto label_16944c;
        case 0x169450u: goto label_169450;
        case 0x169454u: goto label_169454;
        case 0x169458u: goto label_169458;
        case 0x16945cu: goto label_16945c;
        case 0x169460u: goto label_169460;
        case 0x169464u: goto label_169464;
        case 0x169468u: goto label_169468;
        case 0x16946cu: goto label_16946c;
        case 0x169470u: goto label_169470;
        case 0x169474u: goto label_169474;
        case 0x169478u: goto label_169478;
        case 0x16947cu: goto label_16947c;
        case 0x169480u: goto label_169480;
        case 0x169484u: goto label_169484;
        case 0x169488u: goto label_169488;
        case 0x16948cu: goto label_16948c;
        case 0x169490u: goto label_169490;
        case 0x169494u: goto label_169494;
        case 0x169498u: goto label_169498;
        default: break;
    }

    ctx->pc = 0x169390u;

label_169390:
    // 0x169390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_169394:
    // 0x169394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_169398:
    // 0x169398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16939c:
    // 0x16939c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16939cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1693a0:
    // 0x1693a0: 0x8f838970  lw          $v1, -0x7690($gp)
    ctx->pc = 0x1693a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_1693a4:
    // 0x1693a4: 0x8f828974  lw          $v0, -0x768C($gp)
    ctx->pc = 0x1693a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
label_1693a8:
    // 0x1693a8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1693a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1693ac:
    // 0x1693ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1693b0:
    if (ctx->pc == 0x1693B0u) {
        ctx->pc = 0x1693B4u;
        goto label_1693b4;
    }
    ctx->pc = 0x1693ACu;
    {
        const bool branch_taken_0x1693ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1693ac) {
            ctx->pc = 0x1693C0u;
            goto label_1693c0;
        }
    }
    ctx->pc = 0x1693B4u;
label_1693b4:
    // 0x1693b4: 0xaf808980  sw          $zero, -0x7680($gp)
    ctx->pc = 0x1693b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936960), GPR_U32(ctx, 0));
label_1693b8:
    // 0x1693b8: 0x10000033  b           . + 4 + (0x33 << 2)
label_1693bc:
    if (ctx->pc == 0x1693BCu) {
        ctx->pc = 0x1693BCu;
            // 0x1693bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1693C0u;
        goto label_1693c0;
    }
    ctx->pc = 0x1693B8u;
    {
        const bool branch_taken_0x1693b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1693B8u;
            // 0x1693bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693b8) {
            ctx->pc = 0x169488u;
            goto label_169488;
        }
    }
    ctx->pc = 0x1693C0u;
label_1693c0:
    // 0x1693c0: 0xc05191c  jal         func_146470
label_1693c4:
    if (ctx->pc == 0x1693C4u) {
        ctx->pc = 0x1693C8u;
        goto label_1693c8;
    }
    ctx->pc = 0x1693C0u;
    SET_GPR_U32(ctx, 31, 0x1693C8u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693C8u; }
        if (ctx->pc != 0x1693C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693C8u; }
        if (ctx->pc != 0x1693C8u) { return; }
    }
    ctx->pc = 0x1693C8u;
label_1693c8:
    // 0x1693c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1693c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1693cc:
    // 0x1693cc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1693d0:
    if (ctx->pc == 0x1693D0u) {
        ctx->pc = 0x1693D4u;
        goto label_1693d4;
    }
    ctx->pc = 0x1693CCu;
    {
        const bool branch_taken_0x1693cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1693cc) {
            ctx->pc = 0x169400u;
            goto label_169400;
        }
    }
    ctx->pc = 0x1693D4u;
label_1693d4:
    // 0x1693d4: 0x8f848978  lw          $a0, -0x7688($gp)
    ctx->pc = 0x1693d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_1693d8:
    // 0x1693d8: 0xc05a490  jal         func_169240
label_1693dc:
    if (ctx->pc == 0x1693DCu) {
        ctx->pc = 0x1693DCu;
            // 0x1693dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1693E0u;
        goto label_1693e0;
    }
    ctx->pc = 0x1693D8u;
    SET_GPR_U32(ctx, 31, 0x1693E0u);
    ctx->pc = 0x1693DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1693D8u;
            // 0x1693dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169240u;
    if (runtime->hasFunction(0x169240u)) {
        auto targetFn = runtime->lookupFunction(0x169240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693E0u; }
        if (ctx->pc != 0x1693E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__8CMdsListFPc_0x169240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693E0u; }
        if (ctx->pc != 0x1693E0u) { return; }
    }
    ctx->pc = 0x1693E0u;
label_1693e0:
    // 0x1693e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1693e4:
    if (ctx->pc == 0x1693E4u) {
        ctx->pc = 0x1693E4u;
            // 0x1693e4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1693E8u;
        goto label_1693e8;
    }
    ctx->pc = 0x1693E0u;
    {
        const bool branch_taken_0x1693e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1693E0u;
            // 0x1693e4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693e0) {
            ctx->pc = 0x169400u;
            goto label_169400;
        }
    }
    ctx->pc = 0x1693E8u;
label_1693e8:
    // 0x1693e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1693e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1693ec:
    // 0x1693ec: 0xc04a0d2  jal         func_128348
label_1693f0:
    if (ctx->pc == 0x1693F0u) {
        ctx->pc = 0x1693F0u;
            // 0x1693f0: 0x248434e0  addiu       $a0, $a0, 0x34E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13536));
        ctx->pc = 0x1693F4u;
        goto label_1693f4;
    }
    ctx->pc = 0x1693ECu;
    SET_GPR_U32(ctx, 31, 0x1693F4u);
    ctx->pc = 0x1693F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1693ECu;
            // 0x1693f0: 0x248434e0  addiu       $a0, $a0, 0x34E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693F4u; }
        if (ctx->pc != 0x1693F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693F4u; }
        if (ctx->pc != 0x1693F4u) { return; }
    }
    ctx->pc = 0x1693F4u;
label_1693f4:
    // 0x1693f4: 0xaf808980  sw          $zero, -0x7680($gp)
    ctx->pc = 0x1693f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936960), GPR_U32(ctx, 0));
label_1693f8:
    // 0x1693f8: 0x10000023  b           . + 4 + (0x23 << 2)
label_1693fc:
    if (ctx->pc == 0x1693FCu) {
        ctx->pc = 0x1693FCu;
            // 0x1693fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169400u;
        goto label_169400;
    }
    ctx->pc = 0x1693F8u;
    {
        const bool branch_taken_0x1693f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1693F8u;
            // 0x1693fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693f8) {
            ctx->pc = 0x169488u;
            goto label_169488;
        }
    }
    ctx->pc = 0x169400u;
label_169400:
    // 0x169400: 0x8f828970  lw          $v0, -0x7690($gp)
    ctx->pc = 0x169400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_169404:
    // 0x169404: 0x8f83897c  lw          $v1, -0x7684($gp)
    ctx->pc = 0x169404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936956)));
label_169408:
    // 0x169408: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x169408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_16940c:
    // 0x16940c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169410:
    // 0x169410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_169414:
    // 0x169414: 0xaf838980  sw          $v1, -0x7680($gp)
    ctx->pc = 0x169414u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936960), GPR_U32(ctx, 3));
label_169418:
    // 0x169418: 0x8f848980  lw          $a0, -0x7680($gp)
    ctx->pc = 0x169418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_16941c:
    // 0x16941c: 0xaf828970  sw          $v0, -0x7690($gp)
    ctx->pc = 0x16941cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936944), GPR_U32(ctx, 2));
label_169420:
    // 0x169420: 0x8c990018  lw          $t9, 0x18($a0)
    ctx->pc = 0x169420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_169424:
    // 0x169424: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x169424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_169428:
    // 0x169428: 0x320f809  jalr        $t9
label_16942c:
    if (ctx->pc == 0x16942Cu) {
        ctx->pc = 0x169430u;
        goto label_169430;
    }
    ctx->pc = 0x169428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169430u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x169430u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169430u; }
            if (ctx->pc != 0x169430u) { return; }
        }
        }
    }
    ctx->pc = 0x169430u;
label_169430:
    // 0x169430: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_169434:
    if (ctx->pc == 0x169434u) {
        ctx->pc = 0x169434u;
            // 0x169434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169438u;
        goto label_169438;
    }
    ctx->pc = 0x169430u;
    {
        const bool branch_taken_0x169430 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x169434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169430u;
            // 0x169434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169430) {
            ctx->pc = 0x169444u;
            goto label_169444;
        }
    }
    ctx->pc = 0x169438u;
label_169438:
    // 0x169438: 0x8f828980  lw          $v0, -0x7680($gp)
    ctx->pc = 0x169438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_16943c:
    // 0x16943c: 0x10000011  b           . + 4 + (0x11 << 2)
label_169440:
    if (ctx->pc == 0x169440u) {
        ctx->pc = 0x169440u;
            // 0x169440: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x169444u;
        goto label_169444;
    }
    ctx->pc = 0x16943Cu;
    {
        const bool branch_taken_0x16943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16943Cu;
            // 0x169440: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16943c) {
            ctx->pc = 0x169484u;
            goto label_169484;
        }
    }
    ctx->pc = 0x169444u;
label_169444:
    // 0x169444: 0xc04a422  jal         func_129088
label_169448:
    if (ctx->pc == 0x169448u) {
        ctx->pc = 0x16944Cu;
        goto label_16944c;
    }
    ctx->pc = 0x169444u;
    SET_GPR_U32(ctx, 31, 0x16944Cu);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16944Cu; }
        if (ctx->pc != 0x16944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16944Cu; }
        if (ctx->pc != 0x16944Cu) { return; }
    }
    ctx->pc = 0x16944Cu;
label_16944c:
    // 0x16944c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x16944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_169450:
    // 0x169450: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x169450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_169454:
    // 0x169454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_169458:
    if (ctx->pc == 0x169458u) {
        ctx->pc = 0x169458u;
            // 0x169458: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x16945Cu;
        goto label_16945c;
    }
    ctx->pc = 0x169454u;
    {
        const bool branch_taken_0x169454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169454u;
            // 0x169458: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169454) {
            ctx->pc = 0x169464u;
            goto label_169464;
        }
    }
    ctx->pc = 0x16945Cu;
label_16945c:
    // 0x16945c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x16945cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_169460:
    // 0x169460: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x169460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_169464:
    // 0x169464: 0xc04e748  jal         func_139D20
label_169468:
    if (ctx->pc == 0x169468u) {
        ctx->pc = 0x169468u;
            // 0x169468: 0x8f848984  lw          $a0, -0x767C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936964)));
        ctx->pc = 0x16946Cu;
        goto label_16946c;
    }
    ctx->pc = 0x169464u;
    SET_GPR_U32(ctx, 31, 0x16946Cu);
    ctx->pc = 0x169468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169464u;
            // 0x169468: 0x8f848984  lw          $a0, -0x767C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936964)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16946Cu; }
        if (ctx->pc != 0x16946Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16946Cu; }
        if (ctx->pc != 0x16946Cu) { return; }
    }
    ctx->pc = 0x16946Cu;
label_16946c:
    // 0x16946c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16946cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169470:
    // 0x169470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169474:
    // 0x169474: 0xc04a3dc  jal         func_128F70
label_169478:
    if (ctx->pc == 0x169478u) {
        ctx->pc = 0x169478u;
            // 0x169478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16947Cu;
        goto label_16947c;
    }
    ctx->pc = 0x169474u;
    SET_GPR_U32(ctx, 31, 0x16947Cu);
    ctx->pc = 0x169478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169474u;
            // 0x169478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16947Cu; }
        if (ctx->pc != 0x16947Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16947Cu; }
        if (ctx->pc != 0x16947Cu) { return; }
    }
    ctx->pc = 0x16947Cu;
label_16947c:
    // 0x16947c: 0x8f828980  lw          $v0, -0x7680($gp)
    ctx->pc = 0x16947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_169480:
    // 0x169480: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x169480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_169484:
    // 0x169484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169488:
    // 0x169488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16948c:
    // 0x16948c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16948cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169490:
    // 0x169490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169494:
    // 0x169494: 0x3e00008  jr          $ra
label_169498:
    if (ctx->pc == 0x169498u) {
        ctx->pc = 0x169498u;
            // 0x169498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16949Cu;
        goto label_fallthrough_0x169494;
    }
    ctx->pc = 0x169494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169494u;
            // 0x169498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x169494:
    ctx->pc = 0x16949Cu;
}
