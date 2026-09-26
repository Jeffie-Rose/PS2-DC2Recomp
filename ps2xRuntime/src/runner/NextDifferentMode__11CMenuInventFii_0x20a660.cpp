#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NextDifferentMode__11CMenuInventFii
// Address: 0x20a660 - 0x20a7b8
void NextDifferentMode__11CMenuInventFii_0x20a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NextDifferentMode__11CMenuInventFii_0x20a660");
#endif

    switch (ctx->pc) {
        case 0x20a6d8u: goto label_20a6d8;
        case 0x20a6e4u: goto label_20a6e4;
        case 0x20a6f4u: goto label_20a6f4;
        case 0x20a708u: goto label_20a708;
        case 0x20a794u: goto label_20a794;
        case 0x20a7a0u: goto label_20a7a0;
        default: break;
    }

    ctx->pc = 0x20a660u;

    // 0x20a660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20a668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20a66c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20a670: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a674: 0x2e01000a  sltiu       $at, $s0, 0xA
    ctx->pc = 0x20a674u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x20a678: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x20A678u;
    {
        const bool branch_taken_0x20a678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A678u;
            // 0x20a67c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a678) {
            ctx->pc = 0x20A794u;
            goto label_20a794;
        }
    }
    ctx->pc = 0x20A680u;
    // 0x20a680: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x20a680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x20a684: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20a684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20a688: 0x24639be0  addiu       $v1, $v1, -0x6420
    ctx->pc = 0x20a688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941664));
    // 0x20a68c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a690: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a694: 0x400008  jr          $v0
    ctx->pc = 0x20A694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A69Cu: goto label_20a69c;
            case 0x20A6ECu: goto label_20a6ec;
            case 0x20A730u: goto label_20a730;
            case 0x20A788u: goto label_20a788;
            case 0x20A794u: goto label_20a794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A69Cu;
label_20a69c:
    // 0x20a69c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x20a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x20a6a0: 0x844200c2  lh          $v0, 0xC2($v0)
    ctx->pc = 0x20a6a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x20a6a4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A6A4u;
    {
        const bool branch_taken_0x20a6a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20a6a4) {
            ctx->pc = 0x20A6B4u;
            goto label_20a6b4;
        }
    }
    ctx->pc = 0x20A6ACu;
    // 0x20a6ac: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x20A6ACu;
    {
        const bool branch_taken_0x20a6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A6ACu;
            // 0x20a6b0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6ac) {
            ctx->pc = 0x20A794u;
            goto label_20a794;
        }
    }
    ctx->pc = 0x20A6B4u;
label_20a6b4:
    // 0x20a6b4: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x20a6b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20a6b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a6bc: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20A6BCu;
    {
        const bool branch_taken_0x20a6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A6BCu;
            // 0x20a6c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6bc) {
            ctx->pc = 0x20A798u;
            goto label_20a798;
        }
    }
    ctx->pc = 0x20A6C4u;
    // 0x20a6c4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20a6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x20a6c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20a6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20a6cc: 0x8c24cb30  lw          $a0, -0x34D0($at)
    ctx->pc = 0x20a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953776)));
    // 0x20a6d0: 0xc08a240  jal         func_228900
    ctx->pc = 0x20A6D0u;
    SET_GPR_U32(ctx, 31, 0x20A6D8u);
    ctx->pc = 0x20A6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A6D0u;
            // 0x20a6d4: 0x24a59bb0  addiu       $a1, $a1, -0x6450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6D8u; }
        if (ctx->pc != 0x20A6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6D8u; }
        if (ctx->pc != 0x20A6D8u) { return; }
    }
    ctx->pc = 0x20A6D8u;
label_20a6d8:
    // 0x20a6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a6dc: 0xc080884  jal         func_202210
    ctx->pc = 0x20A6DCu;
    SET_GPR_U32(ctx, 31, 0x20A6E4u);
    ctx->pc = 0x20A6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A6DCu;
            // 0x20a6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202210u;
    if (runtime->hasFunction(0x202210u)) {
        auto targetFn = runtime->lookupFunction(0x202210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6E4u; }
        if (ctx->pc != 0x20A6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateModeSwapForm__11CMenuInventFi_0x202210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6E4u; }
        if (ctx->pc != 0x20A6E4u) { return; }
    }
    ctx->pc = 0x20A6E4u;
label_20a6e4:
    // 0x20a6e4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x20A6E4u;
    {
        const bool branch_taken_0x20a6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6e4) {
            ctx->pc = 0x20A794u;
            goto label_20a794;
        }
    }
    ctx->pc = 0x20A6ECu;
label_20a6ec:
    // 0x20a6ec: 0xc080884  jal         func_202210
    ctx->pc = 0x20A6ECu;
    SET_GPR_U32(ctx, 31, 0x20A6F4u);
    ctx->pc = 0x20A6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A6ECu;
            // 0x20a6f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202210u;
    if (runtime->hasFunction(0x202210u)) {
        auto targetFn = runtime->lookupFunction(0x202210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6F4u; }
        if (ctx->pc != 0x20A6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateModeSwapForm__11CMenuInventFi_0x202210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A6F4u; }
        if (ctx->pc != 0x20A6F4u) { return; }
    }
    ctx->pc = 0x20A6F4u;
label_20a6f4:
    // 0x20a6f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20a6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x20a6f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20a6fc: 0x8c24cb30  lw          $a0, -0x34D0($at)
    ctx->pc = 0x20a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953776)));
    // 0x20a700: 0xc08a240  jal         func_228900
    ctx->pc = 0x20A700u;
    SET_GPR_U32(ctx, 31, 0x20A708u);
    ctx->pc = 0x20A704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A700u;
            // 0x20a704: 0x24a592a8  addiu       $a1, $a1, -0x6D58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A708u; }
        if (ctx->pc != 0x20A708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A708u; }
        if (ctx->pc != 0x20A708u) { return; }
    }
    ctx->pc = 0x20A708u;
label_20a708:
    // 0x20a708: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x20a708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x20a70c: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x20a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x20a710: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x20a710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x20a714: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x20a714u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20a718: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20a718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a71c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20a720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a724: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20a724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20a728: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20A728u;
    {
        const bool branch_taken_0x20a728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A728u;
            // 0x20a72c: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a728) {
            ctx->pc = 0x20A794u;
            goto label_20a794;
        }
    }
    ctx->pc = 0x20A730u;
label_20a730:
    // 0x20a730: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x20a730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x20a734: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20a734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20a738: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x20a738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x20a73c: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x20a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x20a740: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A740u;
    {
        const bool branch_taken_0x20a740 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20A744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A740u;
            // 0x20a744: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a740) {
            ctx->pc = 0x20A750u;
            goto label_20a750;
        }
    }
    ctx->pc = 0x20A748u;
    // 0x20a748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a74c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x20a74cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_20a750:
    // 0x20a750: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x20a750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x20a754: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x20a754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a758: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x20a758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20a75c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A75Cu;
    {
        const bool branch_taken_0x20a75c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a75c) {
            ctx->pc = 0x20A76Cu;
            goto label_20a76c;
        }
    }
    ctx->pc = 0x20A764u;
    // 0x20a764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20A764u;
    {
        const bool branch_taken_0x20a764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A764u;
            // 0x20a768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a764) {
            ctx->pc = 0x20A770u;
            goto label_20a770;
        }
    }
    ctx->pc = 0x20A76Cu;
label_20a76c:
    // 0x20a76c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x20a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_20a770:
    // 0x20a770: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x20a770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20a774: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x20a774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x20a778: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20a778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20a77c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a780: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20A780u;
    {
        const bool branch_taken_0x20a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A780u;
            // 0x20a784: 0xae220124  sw          $v0, 0x124($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a780) {
            ctx->pc = 0x20A794u;
            goto label_20a794;
        }
    }
    ctx->pc = 0x20A788u;
label_20a788:
    // 0x20a788: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20a788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20a78c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20A78Cu;
    SET_GPR_U32(ctx, 31, 0x20A794u);
    ctx->pc = 0x20A790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A78Cu;
            // 0x20a790: 0x24a59bc0  addiu       $a1, $a1, -0x6440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A794u; }
        if (ctx->pc != 0x20A794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A794u; }
        if (ctx->pc != 0x20A794u) { return; }
    }
    ctx->pc = 0x20A794u;
label_20a794:
    // 0x20a794: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a798:
    // 0x20a798: 0xc094274  jal         func_2509D0
    ctx->pc = 0x20A798u;
    SET_GPR_U32(ctx, 31, 0x20A7A0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A7A0u; }
        if (ctx->pc != 0x20A7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A7A0u; }
        if (ctx->pc != 0x20A7A0u) { return; }
    }
    ctx->pc = 0x20A7A0u;
label_20a7a0:
    // 0x20a7a0: 0xa6300014  sh          $s0, 0x14($s1)
    ctx->pc = 0x20a7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 16));
    // 0x20a7a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a7a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a7ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20a7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x20A7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A7B0u;
            // 0x20a7b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A7B8u;
}
