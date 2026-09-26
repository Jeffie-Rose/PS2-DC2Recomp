#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckItemLimmitOver__16CUserDataManagerFv
// Address: 0x19e5a0 - 0x19e7e4
void CheckItemLimmitOver__16CUserDataManagerFv_0x19e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckItemLimmitOver__16CUserDataManagerFv_0x19e5a0");
#endif

    switch (ctx->pc) {
        case 0x19e5d8u: goto label_19e5d8;
        case 0x19e5e8u: goto label_19e5e8;
        case 0x19e5f4u: goto label_19e5f4;
        case 0x19e600u: goto label_19e600;
        case 0x19e614u: goto label_19e614;
        case 0x19e630u: goto label_19e630;
        case 0x19e650u: goto label_19e650;
        case 0x19e65cu: goto label_19e65c;
        case 0x19e66cu: goto label_19e66c;
        case 0x19e6b4u: goto label_19e6b4;
        case 0x19e6c0u: goto label_19e6c0;
        case 0x19e6ccu: goto label_19e6cc;
        case 0x19e6e8u: goto label_19e6e8;
        case 0x19e708u: goto label_19e708;
        case 0x19e714u: goto label_19e714;
        case 0x19e724u: goto label_19e724;
        case 0x19e778u: goto label_19e778;
        case 0x19e780u: goto label_19e780;
        default: break;
    }

    ctx->pc = 0x19e5a0u;

    // 0x19e5a0: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x19e5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
    // 0x19e5a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19e5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19e5ac: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x19e5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x19e5b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19e5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19e5b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19e5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19e5b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19e5bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19e5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e5c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e5c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19e5c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e5cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x19e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x19e5d0: 0xc049c86  jal         func_127218
    ctx->pc = 0x19E5D0u;
    SET_GPR_U32(ctx, 31, 0x19E5D8u);
    ctx->pc = 0x19E5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E5D0u;
            // 0x19e5d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5D8u; }
        if (ctx->pc != 0x19E5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5D8u; }
        if (ctx->pc != 0x19E5D8u) { return; }
    }
    ctx->pc = 0x19E5D8u;
label_19e5d8:
    // 0x19e5d8: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x19e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x19e5dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5e0: 0xc049c86  jal         func_127218
    ctx->pc = 0x19E5E0u;
    SET_GPR_U32(ctx, 31, 0x19E5E8u);
    ctx->pc = 0x19E5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E5E0u;
            // 0x19e5e4: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5E8u; }
        if (ctx->pc != 0x19E5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5E8u; }
        if (ctx->pc != 0x19E5E8u) { return; }
    }
    ctx->pc = 0x19E5E8u;
label_19e5e8:
    // 0x19e5e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5ec: 0xc066d14  jal         func_19B450
    ctx->pc = 0x19E5ECu;
    SET_GPR_U32(ctx, 31, 0x19E5F4u);
    ctx->pc = 0x19E5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E5ECu;
            // 0x19e5f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5F4u; }
        if (ctx->pc != 0x19E5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E5F4u; }
        if (ctx->pc != 0x19E5F4u) { return; }
    }
    ctx->pc = 0x19E5F4u;
label_19e5f4:
    // 0x19e5f4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19e5f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5f8: 0xc068644  jal         func_1A1910
    ctx->pc = 0x19E5F8u;
    SET_GPR_U32(ctx, 31, 0x19E600u);
    ctx->pc = 0x19E5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E5F8u;
            // 0x19e5fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E600u; }
        if (ctx->pc != 0x19E600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E600u; }
        if (ctx->pc != 0x19E600u) { return; }
    }
    ctx->pc = 0x19E600u;
label_19e600:
    // 0x19e600: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19e600u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e604: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x19e604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x19e608: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x19E608u;
    {
        const bool branch_taken_0x19e608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E608u;
            // 0x19e60c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e608) {
            ctx->pc = 0x19E6A8u;
            goto label_19e6a8;
        }
    }
    ctx->pc = 0x19E610u;
    // 0x19e610: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19e610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e614:
    // 0x19e614: 0x2d08821  addu        $s1, $s6, $s0
    ctx->pc = 0x19e614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x19e618: 0x86340002  lh          $s4, 0x2($s1)
    ctx->pc = 0x19e618u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x19e61c: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x19e61cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x19e620: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x19E620u;
    {
        const bool branch_taken_0x19e620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E620u;
            // 0x19e624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e620) {
            ctx->pc = 0x19E698u;
            goto label_19e698;
        }
    }
    ctx->pc = 0x19E628u;
    // 0x19e628: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x19E628u;
    SET_GPR_U32(ctx, 31, 0x19E630u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E630u; }
        if (ctx->pc != 0x19E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E630u; }
        if (ctx->pc != 0x19E630u) { return; }
    }
    ctx->pc = 0x19E630u;
label_19e630:
    // 0x19e630: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x19e630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x19e634: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x19e634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19e638: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x19e638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x19e63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e640: 0x94620080  lhu         $v0, 0x80($v1)
    ctx->pc = 0x19e640u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x19e644: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19e648: 0xc066618  jal         func_199860
    ctx->pc = 0x19E648u;
    SET_GPR_U32(ctx, 31, 0x19E650u);
    ctx->pc = 0x19E64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E648u;
            // 0x19e64c: 0xa4620080  sh          $v0, 0x80($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199860u;
    if (runtime->hasFunction(0x199860u)) {
        auto targetFn = runtime->lookupFunction(0x199860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E650u; }
        if (ctx->pc != 0x19E650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNum__13CGameDataUsedFv_0x199860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E650u; }
        if (ctx->pc != 0x19E650u) { return; }
    }
    ctx->pc = 0x19E650u;
label_19e650:
    // 0x19e650: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19e650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19e654: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x19E654u;
    {
        const bool branch_taken_0x19e654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E654u;
            // 0x19e658: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e654) {
            ctx->pc = 0x19E698u;
            goto label_19e698;
        }
    }
    ctx->pc = 0x19E65Cu;
label_19e65c:
    // 0x19e65c: 0x0  nop
    ctx->pc = 0x19e65cu;
    // NOP
    // 0x19e660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e664: 0xc066648  jal         func_199920
    ctx->pc = 0x19E664u;
    SET_GPR_U32(ctx, 31, 0x19E66Cu);
    ctx->pc = 0x19E668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E664u;
            // 0x19e668: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199920u;
    if (runtime->hasFunction(0x199920u)) {
        auto targetFn = runtime->lookupFunction(0x199920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E66Cu; }
        if (ctx->pc != 0x19E66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNo__13CGameDataUsedFi_0x199920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E66Cu; }
        if (ctx->pc != 0x19E66Cu) { return; }
    }
    ctx->pc = 0x19E66Cu;
label_19e66c:
    // 0x19e66c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E66Cu;
    {
        const bool branch_taken_0x19e66c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19e66c) {
            ctx->pc = 0x19E688u;
            goto label_19e688;
        }
    }
    ctx->pc = 0x19E674u;
    // 0x19e674: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19e674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19e678: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x19e678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19e67c: 0x94620080  lhu         $v0, 0x80($v1)
    ctx->pc = 0x19e67cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x19e680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19e684: 0xa4620080  sh          $v0, 0x80($v1)
    ctx->pc = 0x19e684u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 2));
label_19e688:
    // 0x19e688: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19e688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x19e68c: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x19e68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19e690: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19E690u;
    {
        const bool branch_taken_0x19e690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e690) {
            ctx->pc = 0x19E65Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e65c;
        }
    }
    ctx->pc = 0x19E698u;
label_19e698:
    // 0x19e698: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19e698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19e69c: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x19e69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x19e6a0: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x19E6A0u;
    {
        const bool branch_taken_0x19e6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E6A0u;
            // 0x19e6a4: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6a0) {
            ctx->pc = 0x19E614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e614;
        }
    }
    ctx->pc = 0x19E6A8u;
label_19e6a8:
    // 0x19e6a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6ac: 0xc066d24  jal         func_19B490
    ctx->pc = 0x19E6ACu;
    SET_GPR_U32(ctx, 31, 0x19E6B4u);
    ctx->pc = 0x19E6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E6ACu;
            // 0x19e6b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6B4u; }
        if (ctx->pc != 0x19E6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6B4u; }
        if (ctx->pc != 0x19E6B4u) { return; }
    }
    ctx->pc = 0x19E6B4u;
label_19e6b4:
    // 0x19e6b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19e6b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19e6b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19e6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e6c0:
    // 0x19e6c0: 0x2d1b021  addu        $s6, $s6, $s1
    ctx->pc = 0x19e6c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x19e6c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19e6c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19e6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e6cc:
    // 0x19e6cc: 0x0  nop
    ctx->pc = 0x19e6ccu;
    // NOP
    // 0x19e6d0: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x19e6d4: 0x8455002e  lh          $s5, 0x2E($v0)
    ctx->pc = 0x19e6d4u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x19e6d8: 0x1aa0001d  blez        $s5, . + 4 + (0x1D << 2)
    ctx->pc = 0x19E6D8u;
    {
        const bool branch_taken_0x19e6d8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x19E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E6D8u;
            // 0x19e6dc: 0x2454002c  addiu       $s4, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6d8) {
            ctx->pc = 0x19E750u;
            goto label_19e750;
        }
    }
    ctx->pc = 0x19E6E0u;
    // 0x19e6e0: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x19E6E0u;
    SET_GPR_U32(ctx, 31, 0x19E6E8u);
    ctx->pc = 0x19E6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E6E0u;
            // 0x19e6e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6E8u; }
        if (ctx->pc != 0x19E6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E6E8u; }
        if (ctx->pc != 0x19E6E8u) { return; }
    }
    ctx->pc = 0x19E6E8u;
label_19e6e8:
    // 0x19e6e8: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x19e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x19e6ec: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x19e6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19e6f0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x19e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x19e6f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19e6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e6f8: 0x94620080  lhu         $v0, 0x80($v1)
    ctx->pc = 0x19e6f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x19e6fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19e700: 0xc066618  jal         func_199860
    ctx->pc = 0x19E700u;
    SET_GPR_U32(ctx, 31, 0x19E708u);
    ctx->pc = 0x19E704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E700u;
            // 0x19e704: 0xa4620080  sh          $v0, 0x80($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199860u;
    if (runtime->hasFunction(0x199860u)) {
        auto targetFn = runtime->lookupFunction(0x199860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E708u; }
        if (ctx->pc != 0x19E708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNum__13CGameDataUsedFv_0x199860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E708u; }
        if (ctx->pc != 0x19E708u) { return; }
    }
    ctx->pc = 0x19E708u;
label_19e708:
    // 0x19e708: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x19e708u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19e70c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x19E70Cu;
    {
        const bool branch_taken_0x19e70c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E70Cu;
            // 0x19e710: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e70c) {
            ctx->pc = 0x19E750u;
            goto label_19e750;
        }
    }
    ctx->pc = 0x19E714u;
label_19e714:
    // 0x19e714: 0x0  nop
    ctx->pc = 0x19e714u;
    // NOP
    // 0x19e718: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19e718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e71c: 0xc066648  jal         func_199920
    ctx->pc = 0x19E71Cu;
    SET_GPR_U32(ctx, 31, 0x19E724u);
    ctx->pc = 0x19E720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E71Cu;
            // 0x19e720: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199920u;
    if (runtime->hasFunction(0x199920u)) {
        auto targetFn = runtime->lookupFunction(0x199920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E724u; }
        if (ctx->pc != 0x19E724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNo__13CGameDataUsedFi_0x199920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E724u; }
        if (ctx->pc != 0x19E724u) { return; }
    }
    ctx->pc = 0x19E724u;
label_19e724:
    // 0x19e724: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E724u;
    {
        const bool branch_taken_0x19e724 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19e724) {
            ctx->pc = 0x19E740u;
            goto label_19e740;
        }
    }
    ctx->pc = 0x19E72Cu;
    // 0x19e72c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19e730: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x19e730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19e734: 0x94620080  lhu         $v0, 0x80($v1)
    ctx->pc = 0x19e734u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x19e738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19e738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19e73c: 0xa4620080  sh          $v0, 0x80($v1)
    ctx->pc = 0x19e73cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 2));
label_19e740:
    // 0x19e740: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19e740u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x19e744: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x19e744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19e748: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19E748u;
    {
        const bool branch_taken_0x19e748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e748) {
            ctx->pc = 0x19E714u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e714;
        }
    }
    ctx->pc = 0x19E750u;
label_19e750:
    // 0x19e750: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19e750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19e754: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x19e754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19e758: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x19E758u;
    {
        const bool branch_taken_0x19e758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E758u;
            // 0x19e75c: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e758) {
            ctx->pc = 0x19E6CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e6cc;
        }
    }
    ctx->pc = 0x19E760u;
    // 0x19e760: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19e760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19e764: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x19e764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19e768: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x19E768u;
    {
        const bool branch_taken_0x19e768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E768u;
            // 0x19e76c: 0x2631038c  addiu       $s1, $s1, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e768) {
            ctx->pc = 0x19E6C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e6c0;
        }
    }
    ctx->pc = 0x19E770u;
    // 0x19e770: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x19e770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e774: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x19e774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e778:
    // 0x19e778: 0xc065708  jal         func_195C20
    ctx->pc = 0x19E778u;
    SET_GPR_U32(ctx, 31, 0x19E780u);
    ctx->pc = 0x19E77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E778u;
            // 0x19e77c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E780u; }
        if (ctx->pc != 0x19E780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E780u; }
        if (ctx->pc != 0x19E780u) { return; }
    }
    ctx->pc = 0x19E780u;
label_19e780:
    // 0x19e780: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E780u;
    {
        const bool branch_taken_0x19e780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e780) {
            ctx->pc = 0x19E7A8u;
            goto label_19e7a8;
        }
    }
    ctx->pc = 0x19E788u;
    // 0x19e788: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x19e788u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x19e78c: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x19e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x19e790: 0x94420080  lhu         $v0, 0x80($v0)
    ctx->pc = 0x19e790u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x19e794: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19e794u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19e798: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E798u;
    {
        const bool branch_taken_0x19e798 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E798u;
            // 0x19e79c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e798) {
            ctx->pc = 0x19E7A8u;
            goto label_19e7a8;
        }
    }
    ctx->pc = 0x19E7A0u;
    // 0x19e7a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19E7A0u;
    {
        const bool branch_taken_0x19e7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E7A0u;
            // 0x19e7a4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7a0) {
            ctx->pc = 0x19E7C0u;
            goto label_19e7c0;
        }
    }
    ctx->pc = 0x19E7A8u;
label_19e7a8:
    // 0x19e7a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19e7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19e7ac: 0x2a220200  slti        $v0, $s1, 0x200
    ctx->pc = 0x19e7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x19e7b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19E7B0u;
    {
        const bool branch_taken_0x19e7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E7B0u;
            // 0x19e7b4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7b0) {
            ctx->pc = 0x19E778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e778;
        }
    }
    ctx->pc = 0x19E7B8u;
    // 0x19e7b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19e7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19e7c0:
    // 0x19e7c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19e7c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e7c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19e7c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e7c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19e7c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e7cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19e7ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e7d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e7d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e7d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e7d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19E7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E7DCu;
            // 0x19e7e0: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E7E4u;
}
