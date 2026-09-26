#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _raise_r
// Address: 0x128598 - 0x128688
void _raise_r_0x128598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_raise_r_0x128598");
#endif

    switch (ctx->pc) {
        case 0x128598u: goto label_128598;
        case 0x12859cu: goto label_12859c;
        case 0x1285a0u: goto label_1285a0;
        case 0x1285a4u: goto label_1285a4;
        case 0x1285a8u: goto label_1285a8;
        case 0x1285acu: goto label_1285ac;
        case 0x1285b0u: goto label_1285b0;
        case 0x1285b4u: goto label_1285b4;
        case 0x1285b8u: goto label_1285b8;
        case 0x1285bcu: goto label_1285bc;
        case 0x1285c0u: goto label_1285c0;
        case 0x1285c4u: goto label_1285c4;
        case 0x1285c8u: goto label_1285c8;
        case 0x1285ccu: goto label_1285cc;
        case 0x1285d0u: goto label_1285d0;
        case 0x1285d4u: goto label_1285d4;
        case 0x1285d8u: goto label_1285d8;
        case 0x1285dcu: goto label_1285dc;
        case 0x1285e0u: goto label_1285e0;
        case 0x1285e4u: goto label_1285e4;
        case 0x1285e8u: goto label_1285e8;
        case 0x1285ecu: goto label_1285ec;
        case 0x1285f0u: goto label_1285f0;
        case 0x1285f4u: goto label_1285f4;
        case 0x1285f8u: goto label_1285f8;
        case 0x1285fcu: goto label_1285fc;
        case 0x128600u: goto label_128600;
        case 0x128604u: goto label_128604;
        case 0x128608u: goto label_128608;
        case 0x12860cu: goto label_12860c;
        case 0x128610u: goto label_128610;
        case 0x128614u: goto label_128614;
        case 0x128618u: goto label_128618;
        case 0x12861cu: goto label_12861c;
        case 0x128620u: goto label_128620;
        case 0x128624u: goto label_128624;
        case 0x128628u: goto label_128628;
        case 0x12862cu: goto label_12862c;
        case 0x128630u: goto label_128630;
        case 0x128634u: goto label_128634;
        case 0x128638u: goto label_128638;
        case 0x12863cu: goto label_12863c;
        case 0x128640u: goto label_128640;
        case 0x128644u: goto label_128644;
        case 0x128648u: goto label_128648;
        case 0x12864cu: goto label_12864c;
        case 0x128650u: goto label_128650;
        case 0x128654u: goto label_128654;
        case 0x128658u: goto label_128658;
        case 0x12865cu: goto label_12865c;
        case 0x128660u: goto label_128660;
        case 0x128664u: goto label_128664;
        case 0x128668u: goto label_128668;
        case 0x12866cu: goto label_12866c;
        case 0x128670u: goto label_128670;
        case 0x128674u: goto label_128674;
        case 0x128678u: goto label_128678;
        case 0x12867cu: goto label_12867c;
        case 0x128680u: goto label_128680;
        case 0x128684u: goto label_128684;
        default: break;
    }

    ctx->pc = 0x128598u;

label_128598:
    // 0x128598: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x128598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_12859c:
    // 0x12859c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1285a0:
    // 0x1285a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1285a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1285a4:
    // 0x1285a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1285a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1285a8:
    // 0x1285a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1285a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1285ac:
    // 0x1285ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1285acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1285b0:
    // 0x1285b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1285b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1285b4:
    // 0x1285b4: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x1285b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1285b8:
    // 0x1285b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1285bc:
    if (ctx->pc == 0x1285BCu) {
        ctx->pc = 0x1285BCu;
            // 0x1285bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1285C0u;
        goto label_1285c0;
    }
    ctx->pc = 0x1285B8u;
    {
        const bool branch_taken_0x1285b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1285BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1285B8u;
            // 0x1285bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285b8) {
            ctx->pc = 0x1285D0u;
            goto label_1285d0;
        }
    }
    ctx->pc = 0x1285C0u;
label_1285c0:
    // 0x1285c0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1285c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1285c4:
    // 0x1285c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1285c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1285c8:
    // 0x1285c8: 0x10000029  b           . + 4 + (0x29 << 2)
label_1285cc:
    if (ctx->pc == 0x1285CCu) {
        ctx->pc = 0x1285CCu;
            // 0x1285cc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1285D0u;
        goto label_1285d0;
    }
    ctx->pc = 0x1285C8u;
    {
        const bool branch_taken_0x1285c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1285CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1285C8u;
            // 0x1285cc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285c8) {
            ctx->pc = 0x128670u;
            goto label_128670;
        }
    }
    ctx->pc = 0x1285D0u;
label_1285d0:
    // 0x1285d0: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x1285d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_1285d4:
    // 0x1285d4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1285d8:
    if (ctx->pc == 0x1285D8u) {
        ctx->pc = 0x1285D8u;
            // 0x1285d8: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x1285DCu;
        goto label_1285dc;
    }
    ctx->pc = 0x1285D4u;
    {
        const bool branch_taken_0x1285d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1285D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1285D4u;
            // 0x1285d8: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285d4) {
            ctx->pc = 0x1285F4u;
            goto label_1285f4;
        }
    }
    ctx->pc = 0x1285DCu;
label_1285dc:
    // 0x1285dc: 0xc04a126  jal         func_128498
label_1285e0:
    if (ctx->pc == 0x1285E0u) {
        ctx->pc = 0x1285E0u;
            // 0x1285e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1285E4u;
        goto label_1285e4;
    }
    ctx->pc = 0x1285DCu;
    SET_GPR_U32(ctx, 31, 0x1285E4u);
    ctx->pc = 0x1285E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1285DCu;
            // 0x1285e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128498u;
    if (runtime->hasFunction(0x128498u)) {
        auto targetFn = runtime->lookupFunction(0x128498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1285E4u; }
        if (ctx->pc != 0x1285E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _init_signal_r_0x128498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1285E4u; }
        if (ctx->pc != 0x1285E4u) { return; }
    }
    ctx->pc = 0x1285E4u;
label_1285e4:
    // 0x1285e4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_1285e8:
    if (ctx->pc == 0x1285E8u) {
        ctx->pc = 0x1285E8u;
            // 0x1285e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1285ECu;
        goto label_1285ec;
    }
    ctx->pc = 0x1285E4u;
    {
        const bool branch_taken_0x1285e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1285E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1285E4u;
            // 0x1285e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285e4) {
            ctx->pc = 0x128670u;
            goto label_128670;
        }
    }
    ctx->pc = 0x1285ECu;
label_1285ec:
    // 0x1285ec: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x1285ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_1285f0:
    // 0x1285f0: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x1285f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1285f4:
    // 0x1285f4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1285f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1285f8:
    // 0x1285f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1285f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1285fc:
    // 0x1285fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_128600:
    if (ctx->pc == 0x128600u) {
        ctx->pc = 0x128604u;
        goto label_128604;
    }
    ctx->pc = 0x1285FCu;
    {
        const bool branch_taken_0x1285fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1285fc) {
            ctx->pc = 0x128630u;
            goto label_128630;
        }
    }
    ctx->pc = 0x128604u;
label_128604:
    // 0x128604: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_128608:
    if (ctx->pc == 0x128608u) {
        ctx->pc = 0x128608u;
            // 0x128608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12860Cu;
        goto label_12860c;
    }
    ctx->pc = 0x128604u;
    {
        const bool branch_taken_0x128604 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x128608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128604u;
            // 0x128608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128604) {
            ctx->pc = 0x128620u;
            goto label_128620;
        }
    }
    ctx->pc = 0x12860Cu;
label_12860c:
    // 0x12860c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_128610:
    // 0x128610: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_128614:
    if (ctx->pc == 0x128614u) {
        ctx->pc = 0x128614u;
            // 0x128614: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x128618u;
        goto label_128618;
    }
    ctx->pc = 0x128610u;
    {
        const bool branch_taken_0x128610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x128614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128610u;
            // 0x128614: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128610) {
            ctx->pc = 0x128650u;
            goto label_128650;
        }
    }
    ctx->pc = 0x128618u;
label_128618:
    // 0x128618: 0x10000011  b           . + 4 + (0x11 << 2)
label_12861c:
    if (ctx->pc == 0x12861Cu) {
        ctx->pc = 0x12861Cu;
            // 0x12861c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x128620u;
        goto label_128620;
    }
    ctx->pc = 0x128618u;
    {
        const bool branch_taken_0x128618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128618u;
            // 0x12861c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128618) {
            ctx->pc = 0x128660u;
            goto label_128660;
        }
    }
    ctx->pc = 0x128620u;
label_128620:
    // 0x128620: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_128624:
    if (ctx->pc == 0x128624u) {
        ctx->pc = 0x128624u;
            // 0x128624: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x128628u;
        goto label_128628;
    }
    ctx->pc = 0x128620u;
    {
        const bool branch_taken_0x128620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x128624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128620u;
            // 0x128624: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128620) {
            ctx->pc = 0x12866Cu;
            goto label_12866c;
        }
    }
    ctx->pc = 0x128628u;
label_128628:
    // 0x128628: 0x1000000d  b           . + 4 + (0xD << 2)
label_12862c:
    if (ctx->pc == 0x12862Cu) {
        ctx->pc = 0x12862Cu;
            // 0x12862c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x128630u;
        goto label_128630;
    }
    ctx->pc = 0x128628u;
    {
        const bool branch_taken_0x128628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128628u;
            // 0x12862c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128628) {
            ctx->pc = 0x128660u;
            goto label_128660;
        }
    }
    ctx->pc = 0x128630u;
label_128630:
    // 0x128630: 0xc04a212  jal         func_128848
label_128634:
    if (ctx->pc == 0x128634u) {
        ctx->pc = 0x128634u;
            // 0x128634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128638u;
        goto label_128638;
    }
    ctx->pc = 0x128630u;
    SET_GPR_U32(ctx, 31, 0x128638u);
    ctx->pc = 0x128634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128630u;
            // 0x128634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128848u;
    if (runtime->hasFunction(0x128848u)) {
        auto targetFn = runtime->lookupFunction(0x128848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128638u; }
        if (ctx->pc != 0x128638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getpid_r_0x128848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128638u; }
        if (ctx->pc != 0x128638u) { return; }
    }
    ctx->pc = 0x128638u;
label_128638:
    // 0x128638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12863c:
    // 0x12863c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12863cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_128640:
    // 0x128640: 0xc04a1fa  jal         func_1287E8
label_128644:
    if (ctx->pc == 0x128644u) {
        ctx->pc = 0x128644u;
            // 0x128644: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128648u;
        goto label_128648;
    }
    ctx->pc = 0x128640u;
    SET_GPR_U32(ctx, 31, 0x128648u);
    ctx->pc = 0x128644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128640u;
            // 0x128644: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1287E8u;
    if (runtime->hasFunction(0x1287E8u)) {
        auto targetFn = runtime->lookupFunction(0x1287E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128648u; }
        if (ctx->pc != 0x128648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _kill_r_0x1287e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128648u; }
        if (ctx->pc != 0x128648u) { return; }
    }
    ctx->pc = 0x128648u;
label_128648:
    // 0x128648: 0x1000000a  b           . + 4 + (0xA << 2)
label_12864c:
    if (ctx->pc == 0x12864Cu) {
        ctx->pc = 0x12864Cu;
            // 0x12864c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x128650u;
        goto label_128650;
    }
    ctx->pc = 0x128648u;
    {
        const bool branch_taken_0x128648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12864Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128648u;
            // 0x12864c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128648) {
            ctx->pc = 0x128674u;
            goto label_128674;
        }
    }
    ctx->pc = 0x128650u;
label_128650:
    // 0x128650: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x128650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_128654:
    // 0x128654: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x128654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128658:
    // 0x128658: 0x10000004  b           . + 4 + (0x4 << 2)
label_12865c:
    if (ctx->pc == 0x12865Cu) {
        ctx->pc = 0x12865Cu;
            // 0x12865c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x128660u;
        goto label_128660;
    }
    ctx->pc = 0x128658u;
    {
        const bool branch_taken_0x128658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12865Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128658u;
            // 0x12865c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128658) {
            ctx->pc = 0x12866Cu;
            goto label_12866c;
        }
    }
    ctx->pc = 0x128660u;
label_128660:
    // 0x128660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_128664:
    // 0x128664: 0x60f809  jalr        $v1
label_128668:
    if (ctx->pc == 0x128668u) {
        ctx->pc = 0x128668u;
            // 0x128668: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x12866Cu;
        goto label_12866c;
    }
    ctx->pc = 0x128664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12866Cu);
        ctx->pc = 0x128668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128664u;
            // 0x128668: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12866Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12866Cu; }
            if (ctx->pc != 0x12866Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12866Cu;
label_12866c:
    // 0x12866c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12866cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_128670:
    // 0x128670: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x128670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_128674:
    // 0x128674: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x128674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_128678:
    // 0x128678: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12867c:
    // 0x12867c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12867cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128680:
    // 0x128680: 0x3e00008  jr          $ra
label_128684:
    if (ctx->pc == 0x128684u) {
        ctx->pc = 0x128684u;
            // 0x128684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x128688u;
        goto label_fallthrough_0x128680;
    }
    ctx->pc = 0x128680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128680u;
            // 0x128684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x128680:
    ctx->pc = 0x128688u;
}
