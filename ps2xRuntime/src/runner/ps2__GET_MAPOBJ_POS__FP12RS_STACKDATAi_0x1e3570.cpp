#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MAPOBJ_POS__FP12RS_STACKDATAi
// Address: 0x1e3570 - 0x1e3680
void ps2__GET_MAPOBJ_POS__FP12RS_STACKDATAi_0x1e3570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MAPOBJ_POS__FP12RS_STACKDATAi_0x1e3570");
#endif

    switch (ctx->pc) {
        case 0x1e3570u: goto label_1e3570;
        case 0x1e3574u: goto label_1e3574;
        case 0x1e3578u: goto label_1e3578;
        case 0x1e357cu: goto label_1e357c;
        case 0x1e3580u: goto label_1e3580;
        case 0x1e3584u: goto label_1e3584;
        case 0x1e3588u: goto label_1e3588;
        case 0x1e358cu: goto label_1e358c;
        case 0x1e3590u: goto label_1e3590;
        case 0x1e3594u: goto label_1e3594;
        case 0x1e3598u: goto label_1e3598;
        case 0x1e359cu: goto label_1e359c;
        case 0x1e35a0u: goto label_1e35a0;
        case 0x1e35a4u: goto label_1e35a4;
        case 0x1e35a8u: goto label_1e35a8;
        case 0x1e35acu: goto label_1e35ac;
        case 0x1e35b0u: goto label_1e35b0;
        case 0x1e35b4u: goto label_1e35b4;
        case 0x1e35b8u: goto label_1e35b8;
        case 0x1e35bcu: goto label_1e35bc;
        case 0x1e35c0u: goto label_1e35c0;
        case 0x1e35c4u: goto label_1e35c4;
        case 0x1e35c8u: goto label_1e35c8;
        case 0x1e35ccu: goto label_1e35cc;
        case 0x1e35d0u: goto label_1e35d0;
        case 0x1e35d4u: goto label_1e35d4;
        case 0x1e35d8u: goto label_1e35d8;
        case 0x1e35dcu: goto label_1e35dc;
        case 0x1e35e0u: goto label_1e35e0;
        case 0x1e35e4u: goto label_1e35e4;
        case 0x1e35e8u: goto label_1e35e8;
        case 0x1e35ecu: goto label_1e35ec;
        case 0x1e35f0u: goto label_1e35f0;
        case 0x1e35f4u: goto label_1e35f4;
        case 0x1e35f8u: goto label_1e35f8;
        case 0x1e35fcu: goto label_1e35fc;
        case 0x1e3600u: goto label_1e3600;
        case 0x1e3604u: goto label_1e3604;
        case 0x1e3608u: goto label_1e3608;
        case 0x1e360cu: goto label_1e360c;
        case 0x1e3610u: goto label_1e3610;
        case 0x1e3614u: goto label_1e3614;
        case 0x1e3618u: goto label_1e3618;
        case 0x1e361cu: goto label_1e361c;
        case 0x1e3620u: goto label_1e3620;
        case 0x1e3624u: goto label_1e3624;
        case 0x1e3628u: goto label_1e3628;
        case 0x1e362cu: goto label_1e362c;
        case 0x1e3630u: goto label_1e3630;
        case 0x1e3634u: goto label_1e3634;
        case 0x1e3638u: goto label_1e3638;
        case 0x1e363cu: goto label_1e363c;
        case 0x1e3640u: goto label_1e3640;
        case 0x1e3644u: goto label_1e3644;
        case 0x1e3648u: goto label_1e3648;
        case 0x1e364cu: goto label_1e364c;
        case 0x1e3650u: goto label_1e3650;
        case 0x1e3654u: goto label_1e3654;
        case 0x1e3658u: goto label_1e3658;
        case 0x1e365cu: goto label_1e365c;
        case 0x1e3660u: goto label_1e3660;
        case 0x1e3664u: goto label_1e3664;
        case 0x1e3668u: goto label_1e3668;
        case 0x1e366cu: goto label_1e366c;
        case 0x1e3670u: goto label_1e3670;
        case 0x1e3674u: goto label_1e3674;
        case 0x1e3678u: goto label_1e3678;
        case 0x1e367cu: goto label_1e367c;
        default: break;
    }

    ctx->pc = 0x1e3570u;

label_1e3570:
    // 0x1e3570: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e3570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e3574:
    // 0x1e3574: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e3574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e3578:
    // 0x1e3578: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e3578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e357c:
    // 0x1e357c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e357cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e3580:
    // 0x1e3580: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e3584:
    if (ctx->pc == 0x1E3584u) {
        ctx->pc = 0x1E3584u;
            // 0x1e3584: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E3588u;
        goto label_1e3588;
    }
    ctx->pc = 0x1E3580u;
    {
        const bool branch_taken_0x1e3580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3580u;
            // 0x1e3584: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3580) {
            ctx->pc = 0x1E3590u;
            goto label_1e3590;
        }
    }
    ctx->pc = 0x1E3588u;
label_1e3588:
    // 0x1e3588: 0x10000038  b           . + 4 + (0x38 << 2)
label_1e358c:
    if (ctx->pc == 0x1E358Cu) {
        ctx->pc = 0x1E358Cu;
            // 0x1e358c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3590u;
        goto label_1e3590;
    }
    ctx->pc = 0x1E3588u;
    {
        const bool branch_taken_0x1e3588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3588u;
            // 0x1e358c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3588) {
            ctx->pc = 0x1E366Cu;
            goto label_1e366c;
        }
    }
    ctx->pc = 0x1E3590u;
label_1e3590:
    // 0x1e3590: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e3590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e3594:
    // 0x1e3594: 0x8c621200  lw          $v0, 0x1200($v1)
    ctx->pc = 0x1e3594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4608)));
label_1e3598:
    // 0x1e3598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e359c:
    if (ctx->pc == 0x1E359Cu) {
        ctx->pc = 0x1E359Cu;
            // 0x1e359c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E35A0u;
        goto label_1e35a0;
    }
    ctx->pc = 0x1E3598u;
    {
        const bool branch_taken_0x1e3598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E359Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3598u;
            // 0x1e359c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3598) {
            ctx->pc = 0x1E35B0u;
            goto label_1e35b0;
        }
    }
    ctx->pc = 0x1E35A0u;
label_1e35a0:
    // 0x1e35a0: 0x8c6211fc  lw          $v0, 0x11FC($v1)
    ctx->pc = 0x1e35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
label_1e35a4:
    // 0x1e35a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e35a8:
    if (ctx->pc == 0x1E35A8u) {
        ctx->pc = 0x1E35A8u;
            // 0x1e35a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E35ACu;
        goto label_1e35ac;
    }
    ctx->pc = 0x1E35A4u;
    {
        const bool branch_taken_0x1e35a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E35A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35A4u;
            // 0x1e35a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35a4) {
            ctx->pc = 0x1E35B8u;
            goto label_1e35b8;
        }
    }
    ctx->pc = 0x1E35ACu;
label_1e35ac:
    // 0x1e35ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e35acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e35b0:
    // 0x1e35b0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1e35b4:
    if (ctx->pc == 0x1E35B4u) {
        ctx->pc = 0x1E35B4u;
            // 0x1e35b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1E35B8u;
        goto label_1e35b8;
    }
    ctx->pc = 0x1E35B0u;
    {
        const bool branch_taken_0x1e35b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E35B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35B0u;
            // 0x1e35b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35b0) {
            ctx->pc = 0x1E3670u;
            goto label_1e3670;
        }
    }
    ctx->pc = 0x1E35B8u;
label_1e35b8:
    // 0x1e35b8: 0xc0781b8  jal         func_1E06E0
label_1e35bc:
    if (ctx->pc == 0x1E35BCu) {
        ctx->pc = 0x1E35C0u;
        goto label_1e35c0;
    }
    ctx->pc = 0x1E35B8u;
    SET_GPR_U32(ctx, 31, 0x1E35C0u);
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35C0u; }
        if (ctx->pc != 0x1E35C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35C0u; }
        if (ctx->pc != 0x1E35C0u) { return; }
    }
    ctx->pc = 0x1E35C0u;
label_1e35c0:
    // 0x1e35c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e35c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e35c4:
    // 0x1e35c4: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e35c8:
    // 0x1e35c8: 0x8c441200  lw          $a0, 0x1200($v0)
    ctx->pc = 0x1e35c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4608)));
label_1e35cc:
    // 0x1e35cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e35ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e35d0:
    // 0x1e35d0: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x1e35d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_1e35d4:
    // 0x1e35d4: 0x320f809  jalr        $t9
label_1e35d8:
    if (ctx->pc == 0x1E35D8u) {
        ctx->pc = 0x1E35DCu;
        goto label_1e35dc;
    }
    ctx->pc = 0x1E35D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E35DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E35DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E35DCu; }
            if (ctx->pc != 0x1E35DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E35DCu;
label_1e35dc:
    // 0x1e35dc: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e35e0:
    // 0x1e35e0: 0x8c421200  lw          $v0, 0x1200($v0)
    ctx->pc = 0x1e35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4608)));
label_1e35e4:
    // 0x1e35e4: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1e35e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1e35e8:
    // 0x1e35e8: 0xc04ddb4  jal         func_1376D0
label_1e35ec:
    if (ctx->pc == 0x1E35ECu) {
        ctx->pc = 0x1E35ECu;
            // 0x1e35ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E35F0u;
        goto label_1e35f0;
    }
    ctx->pc = 0x1E35E8u;
    SET_GPR_U32(ctx, 31, 0x1E35F0u);
    ctx->pc = 0x1E35ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35E8u;
            // 0x1e35ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35F0u; }
        if (ctx->pc != 0x1E35F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E35F0u; }
        if (ctx->pc != 0x1E35F0u) { return; }
    }
    ctx->pc = 0x1E35F0u;
label_1e35f0:
    // 0x1e35f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e35f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e35f4:
    // 0x1e35f4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1e35f8:
    if (ctx->pc == 0x1E35F8u) {
        ctx->pc = 0x1E35F8u;
            // 0x1e35f8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1E35FCu;
        goto label_1e35fc;
    }
    ctx->pc = 0x1E35F4u;
    {
        const bool branch_taken_0x1e35f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E35F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35F4u;
            // 0x1e35f8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e35f4) {
            ctx->pc = 0x1E3604u;
            goto label_1e3604;
        }
    }
    ctx->pc = 0x1E35FCu;
label_1e35fc:
    // 0x1e35fc: 0xc04a0d2  jal         func_128348
label_1e3600:
    if (ctx->pc == 0x1E3600u) {
        ctx->pc = 0x1E3600u;
            // 0x1e3600: 0x24848038  addiu       $a0, $a0, -0x7FC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934584));
        ctx->pc = 0x1E3604u;
        goto label_1e3604;
    }
    ctx->pc = 0x1E35FCu;
    SET_GPR_U32(ctx, 31, 0x1E3604u);
    ctx->pc = 0x1E3600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E35FCu;
            // 0x1e3600: 0x24848038  addiu       $a0, $a0, -0x7FC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3604u; }
        if (ctx->pc != 0x1E3604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3604u; }
        if (ctx->pc != 0x1E3604u) { return; }
    }
    ctx->pc = 0x1E3604u;
label_1e3604:
    // 0x1e3604: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1e3608:
    if (ctx->pc == 0x1E3608u) {
        ctx->pc = 0x1E3608u;
            // 0x1e3608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E360Cu;
        goto label_1e360c;
    }
    ctx->pc = 0x1E3604u;
    {
        const bool branch_taken_0x1e3604 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3604u;
            // 0x1e3608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3604) {
            ctx->pc = 0x1E3614u;
            goto label_1e3614;
        }
    }
    ctx->pc = 0x1E360Cu;
label_1e360c:
    // 0x1e360c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e3610:
    if (ctx->pc == 0x1E3610u) {
        ctx->pc = 0x1E3610u;
            // 0x1e3610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3614u;
        goto label_1e3614;
    }
    ctx->pc = 0x1E360Cu;
    {
        const bool branch_taken_0x1e360c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E360Cu;
            // 0x1e3610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e360c) {
            ctx->pc = 0x1E366Cu;
            goto label_1e366c;
        }
    }
    ctx->pc = 0x1E3614u;
label_1e3614:
    // 0x1e3614: 0xc04de0c  jal         func_137830
label_1e3618:
    if (ctx->pc == 0x1E3618u) {
        ctx->pc = 0x1E3618u;
            // 0x1e3618: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1E361Cu;
        goto label_1e361c;
    }
    ctx->pc = 0x1E3614u;
    SET_GPR_U32(ctx, 31, 0x1E361Cu);
    ctx->pc = 0x1E3618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3614u;
            // 0x1e3618: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E361Cu; }
        if (ctx->pc != 0x1E361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E361Cu; }
        if (ctx->pc != 0x1E361Cu) { return; }
    }
    ctx->pc = 0x1E361Cu;
label_1e361c:
    // 0x1e361c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e3620:
    // 0x1e3620: 0x8c4411fc  lw          $a0, 0x11FC($v0)
    ctx->pc = 0x1e3620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4604)));
label_1e3624:
    // 0x1e3624: 0xc059cc0  jal         func_167300
label_1e3628:
    if (ctx->pc == 0x1E3628u) {
        ctx->pc = 0x1E3628u;
            // 0x1e3628: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E362Cu;
        goto label_1e362c;
    }
    ctx->pc = 0x1E3624u;
    SET_GPR_U32(ctx, 31, 0x1E362Cu);
    ctx->pc = 0x1E3628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3624u;
            // 0x1e3628: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E362Cu; }
        if (ctx->pc != 0x1E362Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E362Cu; }
        if (ctx->pc != 0x1E362Cu) { return; }
    }
    ctx->pc = 0x1E362Cu;
label_1e362c:
    // 0x1e362c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e3630:
    // 0x1e3630: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e3630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e3634:
    // 0x1e3634: 0xc041bb0  jal         func_106EC0
label_1e3638:
    if (ctx->pc == 0x1E3638u) {
        ctx->pc = 0x1E3638u;
            // 0x1e3638: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E363Cu;
        goto label_1e363c;
    }
    ctx->pc = 0x1E3634u;
    SET_GPR_U32(ctx, 31, 0x1E363Cu);
    ctx->pc = 0x1E3638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3634u;
            // 0x1e3638: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E363Cu; }
        if (ctx->pc != 0x1E363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E363Cu; }
        if (ctx->pc != 0x1E363Cu) { return; }
    }
    ctx->pc = 0x1E363Cu;
label_1e363c:
    // 0x1e363c: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1e363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3640:
    // 0x1e3640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3644:
    // 0x1e3644: 0xc0781c4  jal         func_1E0710
label_1e3648:
    if (ctx->pc == 0x1E3648u) {
        ctx->pc = 0x1E3648u;
            // 0x1e3648: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E364Cu;
        goto label_1e364c;
    }
    ctx->pc = 0x1E3644u;
    SET_GPR_U32(ctx, 31, 0x1E364Cu);
    ctx->pc = 0x1E3648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3644u;
            // 0x1e3648: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E364Cu; }
        if (ctx->pc != 0x1E364Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E364Cu; }
        if (ctx->pc != 0x1E364Cu) { return; }
    }
    ctx->pc = 0x1E364Cu;
label_1e364c:
    // 0x1e364c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x1e364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3650:
    // 0x1e3650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3654:
    // 0x1e3654: 0xc0781c4  jal         func_1E0710
label_1e3658:
    if (ctx->pc == 0x1E3658u) {
        ctx->pc = 0x1E3658u;
            // 0x1e3658: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E365Cu;
        goto label_1e365c;
    }
    ctx->pc = 0x1E3654u;
    SET_GPR_U32(ctx, 31, 0x1E365Cu);
    ctx->pc = 0x1E3658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3654u;
            // 0x1e3658: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E365Cu; }
        if (ctx->pc != 0x1E365Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E365Cu; }
        if (ctx->pc != 0x1E365Cu) { return; }
    }
    ctx->pc = 0x1E365Cu;
label_1e365c:
    // 0x1e365c: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x1e365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3660:
    // 0x1e3660: 0xc0781c4  jal         func_1E0710
label_1e3664:
    if (ctx->pc == 0x1E3664u) {
        ctx->pc = 0x1E3664u;
            // 0x1e3664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3668u;
        goto label_1e3668;
    }
    ctx->pc = 0x1E3660u;
    SET_GPR_U32(ctx, 31, 0x1E3668u);
    ctx->pc = 0x1E3664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3660u;
            // 0x1e3664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3668u; }
        if (ctx->pc != 0x1E3668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3668u; }
        if (ctx->pc != 0x1E3668u) { return; }
    }
    ctx->pc = 0x1E3668u;
label_1e3668:
    // 0x1e3668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e366c:
    // 0x1e366c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e366cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3670:
    // 0x1e3670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3674:
    // 0x1e3674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3678:
    // 0x1e3678: 0x3e00008  jr          $ra
label_1e367c:
    if (ctx->pc == 0x1E367Cu) {
        ctx->pc = 0x1E367Cu;
            // 0x1e367c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1E3680u;
        goto label_fallthrough_0x1e3678;
    }
    ctx->pc = 0x1E3678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3678u;
            // 0x1e367c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e3678:
    ctx->pc = 0x1E3680u;
}
