#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemSelectDraw__Fv
// Address: 0x250590 - 0x2506b4
void MenuItemSelectDraw__Fv_0x250590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemSelectDraw__Fv_0x250590");
#endif

    switch (ctx->pc) {
        case 0x2505d8u: goto label_2505d8;
        case 0x2505f0u: goto label_2505f0;
        case 0x250614u: goto label_250614;
        case 0x25064cu: goto label_25064c;
        case 0x25066cu: goto label_25066c;
        case 0x250694u: goto label_250694;
        case 0x2506a8u: goto label_2506a8;
        default: break;
    }

    ctx->pc = 0x250590u;

    // 0x250590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x250590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x250594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x250594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x250598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25059c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x25059cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x2505a0: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x2505a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2505a4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2505A4u;
    {
        const bool branch_taken_0x2505a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2505A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2505A4u;
            // 0x2505a8: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505a4) {
            ctx->pc = 0x2505B4u;
            goto label_2505b4;
        }
    }
    ctx->pc = 0x2505ACu;
    // 0x2505ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2505acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2505b0: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x2505b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_2505b4:
    // 0x2505b4: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x2505b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2505b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2505B8u;
    {
        const bool branch_taken_0x2505b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2505BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2505B8u;
            // 0x2505bc: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505b8) {
            ctx->pc = 0x2505C8u;
            goto label_2505c8;
        }
    }
    ctx->pc = 0x2505C0u;
    // 0x2505c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2505c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2505c4: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x2505c4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
label_2505c8:
    // 0x2505c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2505c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2505cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2505ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2505D0u;
    SET_GPR_U32(ctx, 31, 0x2505D8u);
    ctx->pc = 0x2505D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2505D0u;
            // 0x2505d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2505D8u; }
        if (ctx->pc != 0x2505D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2505D8u; }
        if (ctx->pc != 0x2505D8u) { return; }
    }
    ctx->pc = 0x2505D8u;
label_2505d8:
    // 0x2505d8: 0x8f878780  lw          $a3, -0x7880($gp)
    ctx->pc = 0x2505d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2505dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2505dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2505e0: 0x8f888784  lw          $t0, -0x787C($gp)
    ctx->pc = 0x2505e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2505e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2505e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505e8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2505E8u;
    SET_GPR_U32(ctx, 31, 0x2505F0u);
    ctx->pc = 0x2505ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2505E8u;
            // 0x2505ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2505F0u; }
        if (ctx->pc != 0x2505F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2505F0u; }
        if (ctx->pc != 0x2505F0u) { return; }
    }
    ctx->pc = 0x2505F0u;
label_2505f0:
    // 0x2505f0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2505f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2505f4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2505f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2505f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2505f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2505fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2505fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x250600: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x250600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250604: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x250604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250608: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x250608u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25060c: 0xc088fc0  jal         func_223F00
    ctx->pc = 0x25060Cu;
    SET_GPR_U32(ctx, 31, 0x250614u);
    ctx->pc = 0x250610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25060Cu;
            // 0x250610: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223F00u;
    if (runtime->hasFunction(0x223F00u)) {
        auto targetFn = runtime->lookupFunction(0x223F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250614u; }
        if (ctx->pc != 0x250614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuMainFrmImg__FRi9mgRect_i_9mgRect_i_iiiii_0x223f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250614u; }
        if (ctx->pc != 0x250614u) { return; }
    }
    ctx->pc = 0x250614u;
label_250614:
    // 0x250614: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x250614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x250618: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250618u;
    {
        const bool branch_taken_0x250618 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25061Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250618u;
            // 0x25061c: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250618) {
            ctx->pc = 0x250628u;
            goto label_250628;
        }
    }
    ctx->pc = 0x250620u;
    // 0x250620: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x250620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x250624: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x250624u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_250628:
    // 0x250628: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x250628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x25062c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25062Cu;
    {
        const bool branch_taken_0x25062c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x250630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25062Cu;
            // 0x250630: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25062c) {
            ctx->pc = 0x25063Cu;
            goto label_25063c;
        }
    }
    ctx->pc = 0x250634u;
    // 0x250634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x250634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x250638: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x250638u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
label_25063c:
    // 0x25063c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x250640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250644: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x250644u;
    SET_GPR_U32(ctx, 31, 0x25064Cu);
    ctx->pc = 0x250648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250644u;
            // 0x250648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25064Cu; }
        if (ctx->pc != 0x25064Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25064Cu; }
        if (ctx->pc != 0x25064Cu) { return; }
    }
    ctx->pc = 0x25064Cu;
label_25064c:
    // 0x25064c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x25064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x250650: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x250650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x250654: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x250654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x250658: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x250658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25065c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x25065cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250660: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x250660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x250664: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x250664u;
    SET_GPR_U32(ctx, 31, 0x25066Cu);
    ctx->pc = 0x250668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250664u;
            // 0x250668: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25066Cu; }
        if (ctx->pc != 0x25066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25066Cu; }
        if (ctx->pc != 0x25066Cu) { return; }
    }
    ctx->pc = 0x25066Cu;
label_25066c:
    // 0x25066c: 0x8f829788  lw          $v0, -0x6878($gp)
    ctx->pc = 0x25066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940552)));
    // 0x250670: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x250670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x250674: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x250674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x250678: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x250678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25067c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25067cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x250680: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x250680u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250684: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x250684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250688: 0x8c4a0408  lw          $t2, 0x408($v0)
    ctx->pc = 0x250688u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1032)));
    // 0x25068c: 0xc088fc0  jal         func_223F00
    ctx->pc = 0x25068Cu;
    SET_GPR_U32(ctx, 31, 0x250694u);
    ctx->pc = 0x250690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25068Cu;
            // 0x250690: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223F00u;
    if (runtime->hasFunction(0x223F00u)) {
        auto targetFn = runtime->lookupFunction(0x223F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250694u; }
        if (ctx->pc != 0x250694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuMainFrmImg__FRi9mgRect_i_9mgRect_i_iiiii_0x223f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250694u; }
        if (ctx->pc != 0x250694u) { return; }
    }
    ctx->pc = 0x250694u;
label_250694:
    // 0x250694: 0x8f849788  lw          $a0, -0x6878($gp)
    ctx->pc = 0x250694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940552)));
    // 0x250698: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250698u;
    {
        const bool branch_taken_0x250698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x250698) {
            ctx->pc = 0x2506A8u;
            goto label_2506a8;
        }
    }
    ctx->pc = 0x2506A0u;
    // 0x2506a0: 0xc093e68  jal         func_24F9A0
    ctx->pc = 0x2506A0u;
    SET_GPR_U32(ctx, 31, 0x2506A8u);
    ctx->pc = 0x24F9A0u;
    if (runtime->hasFunction(0x24F9A0u)) {
        auto targetFn = runtime->lookupFunction(0x24F9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2506A8u; }
        if (ctx->pc != 0x2506A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CItemSelectFv_0x24f9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2506A8u; }
        if (ctx->pc != 0x2506A8u) { return; }
    }
    ctx->pc = 0x2506A8u;
label_2506a8:
    // 0x2506a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2506a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2506ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2506ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2506B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2506ACu;
            // 0x2506b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2506B4u;
}
