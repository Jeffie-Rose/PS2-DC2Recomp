#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPartsGroup__4CMapFPcP9CMapPartsP9mgCMemory
// Address: 0x15c640 - 0x15c73c
void AddPartsGroup__4CMapFPcP9CMapPartsP9mgCMemory_0x15c640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPartsGroup__4CMapFPcP9CMapPartsP9mgCMemory_0x15c640");
#endif

    switch (ctx->pc) {
        case 0x15c640u: goto label_15c640;
        case 0x15c644u: goto label_15c644;
        case 0x15c648u: goto label_15c648;
        case 0x15c64cu: goto label_15c64c;
        case 0x15c650u: goto label_15c650;
        case 0x15c654u: goto label_15c654;
        case 0x15c658u: goto label_15c658;
        case 0x15c65cu: goto label_15c65c;
        case 0x15c660u: goto label_15c660;
        case 0x15c664u: goto label_15c664;
        case 0x15c668u: goto label_15c668;
        case 0x15c66cu: goto label_15c66c;
        case 0x15c670u: goto label_15c670;
        case 0x15c674u: goto label_15c674;
        case 0x15c678u: goto label_15c678;
        case 0x15c67cu: goto label_15c67c;
        case 0x15c680u: goto label_15c680;
        case 0x15c684u: goto label_15c684;
        case 0x15c688u: goto label_15c688;
        case 0x15c68cu: goto label_15c68c;
        case 0x15c690u: goto label_15c690;
        case 0x15c694u: goto label_15c694;
        case 0x15c698u: goto label_15c698;
        case 0x15c69cu: goto label_15c69c;
        case 0x15c6a0u: goto label_15c6a0;
        case 0x15c6a4u: goto label_15c6a4;
        case 0x15c6a8u: goto label_15c6a8;
        case 0x15c6acu: goto label_15c6ac;
        case 0x15c6b0u: goto label_15c6b0;
        case 0x15c6b4u: goto label_15c6b4;
        case 0x15c6b8u: goto label_15c6b8;
        case 0x15c6bcu: goto label_15c6bc;
        case 0x15c6c0u: goto label_15c6c0;
        case 0x15c6c4u: goto label_15c6c4;
        case 0x15c6c8u: goto label_15c6c8;
        case 0x15c6ccu: goto label_15c6cc;
        case 0x15c6d0u: goto label_15c6d0;
        case 0x15c6d4u: goto label_15c6d4;
        case 0x15c6d8u: goto label_15c6d8;
        case 0x15c6dcu: goto label_15c6dc;
        case 0x15c6e0u: goto label_15c6e0;
        case 0x15c6e4u: goto label_15c6e4;
        case 0x15c6e8u: goto label_15c6e8;
        case 0x15c6ecu: goto label_15c6ec;
        case 0x15c6f0u: goto label_15c6f0;
        case 0x15c6f4u: goto label_15c6f4;
        case 0x15c6f8u: goto label_15c6f8;
        case 0x15c6fcu: goto label_15c6fc;
        case 0x15c700u: goto label_15c700;
        case 0x15c704u: goto label_15c704;
        case 0x15c708u: goto label_15c708;
        case 0x15c70cu: goto label_15c70c;
        case 0x15c710u: goto label_15c710;
        case 0x15c714u: goto label_15c714;
        case 0x15c718u: goto label_15c718;
        case 0x15c71cu: goto label_15c71c;
        case 0x15c720u: goto label_15c720;
        case 0x15c724u: goto label_15c724;
        case 0x15c728u: goto label_15c728;
        case 0x15c72cu: goto label_15c72c;
        case 0x15c730u: goto label_15c730;
        case 0x15c734u: goto label_15c734;
        case 0x15c738u: goto label_15c738;
        default: break;
    }

    ctx->pc = 0x15c640u;

label_15c640:
    // 0x15c640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15c640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15c644:
    // 0x15c644: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15c648:
    // 0x15c648: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15c64c:
    // 0x15c64c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15c650:
    // 0x15c650: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15c650u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c654:
    // 0x15c654: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15c658:
    // 0x15c658: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x15c658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15c65c:
    // 0x15c65c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c660:
    // 0x15c660: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x15c660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15c664:
    // 0x15c664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c668:
    // 0x15c668: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15c668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15c66c:
    // 0x15c66c: 0xc0571e0  jal         func_15C780
label_15c670:
    if (ctx->pc == 0x15C670u) {
        ctx->pc = 0x15C670u;
            // 0x15c670: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x15C674u;
        goto label_15c674;
    }
    ctx->pc = 0x15C66Cu;
    SET_GPR_U32(ctx, 31, 0x15C674u);
    ctx->pc = 0x15C670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C66Cu;
            // 0x15c670: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C780u;
    if (runtime->hasFunction(0x15C780u)) {
        auto targetFn = runtime->lookupFunction(0x15C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C674u; }
        if (ctx->pc != 0x15C674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPartsGroupNo__4CMapFPc_0x15c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C674u; }
        if (ctx->pc != 0x15C674u) { return; }
    }
    ctx->pc = 0x15C674u;
label_15c674:
    // 0x15c674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c678:
    // 0x15c678: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_15c67c:
    if (ctx->pc == 0x15C67Cu) {
        ctx->pc = 0x15C67Cu;
            // 0x15c67c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C680u;
        goto label_15c680;
    }
    ctx->pc = 0x15C678u;
    {
        const bool branch_taken_0x15c678 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15C67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C678u;
            // 0x15c67c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c678) {
            ctx->pc = 0x15C69Cu;
            goto label_15c69c;
        }
    }
    ctx->pc = 0x15C680u;
label_15c680:
    // 0x15c680: 0xc057208  jal         func_15C820
label_15c684:
    if (ctx->pc == 0x15C684u) {
        ctx->pc = 0x15C684u;
            // 0x15c684: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C688u;
        goto label_15c688;
    }
    ctx->pc = 0x15C680u;
    SET_GPR_U32(ctx, 31, 0x15C688u);
    ctx->pc = 0x15C684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C680u;
            // 0x15c684: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C820u;
    if (runtime->hasFunction(0x15C820u)) {
        auto targetFn = runtime->lookupFunction(0x15C820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C688u; }
        if (ctx->pc != 0x15C688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SerachEmptyPartsGroupNo__4CMapFv_0x15c820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C688u; }
        if (ctx->pc != 0x15C688u) { return; }
    }
    ctx->pc = 0x15C688u;
label_15c688:
    // 0x15c688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c68c:
    // 0x15c68c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c690:
    // 0x15c690: 0xc04e7a0  jal         func_139E80
label_15c694:
    if (ctx->pc == 0x15C694u) {
        ctx->pc = 0x15C694u;
            // 0x15c694: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C698u;
        goto label_15c698;
    }
    ctx->pc = 0x15C690u;
    SET_GPR_U32(ctx, 31, 0x15C698u);
    ctx->pc = 0x15C694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C690u;
            // 0x15c694: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C698u; }
        if (ctx->pc != 0x15C698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C698u; }
        if (ctx->pc != 0x15C698u) { return; }
    }
    ctx->pc = 0x15C698u;
label_15c698:
    // 0x15c698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15c698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c69c:
    // 0x15c69c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c6a0:
    // 0x15c6a0: 0xc057180  jal         func_15C600
label_15c6a4:
    if (ctx->pc == 0x15C6A4u) {
        ctx->pc = 0x15C6A4u;
            // 0x15c6a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C6A8u;
        goto label_15c6a8;
    }
    ctx->pc = 0x15C6A0u;
    SET_GPR_U32(ctx, 31, 0x15C6A8u);
    ctx->pc = 0x15C6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6A0u;
            // 0x15c6a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C600u;
    if (runtime->hasFunction(0x15C600u)) {
        auto targetFn = runtime->lookupFunction(0x15C600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6A8u; }
        if (ctx->pc != 0x15C6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsGroup__4CMapFi_0x15c600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6A8u; }
        if (ctx->pc != 0x15C6A8u) { return; }
    }
    ctx->pc = 0x15C6A8u;
label_15c6a8:
    // 0x15c6a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c6a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c6ac:
    // 0x15c6ac: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_15c6b0:
    if (ctx->pc == 0x15C6B0u) {
        ctx->pc = 0x15C6B0u;
            // 0x15c6b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x15C6B4u;
        goto label_15c6b4;
    }
    ctx->pc = 0x15C6ACu;
    {
        const bool branch_taken_0x15c6ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6ACu;
            // 0x15c6b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6ac) {
            ctx->pc = 0x15C6BCu;
            goto label_15c6bc;
        }
    }
    ctx->pc = 0x15C6B4u;
label_15c6b4:
    // 0x15c6b4: 0x10000019  b           . + 4 + (0x19 << 2)
label_15c6b8:
    if (ctx->pc == 0x15C6B8u) {
        ctx->pc = 0x15C6B8u;
            // 0x15c6b8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x15C6BCu;
        goto label_15c6bc;
    }
    ctx->pc = 0x15C6B4u;
    {
        const bool branch_taken_0x15c6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6B4u;
            // 0x15c6b8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6b4) {
            ctx->pc = 0x15C71Cu;
            goto label_15c71c;
        }
    }
    ctx->pc = 0x15C6BCu;
label_15c6bc:
    // 0x15c6bc: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_15c6c0:
    if (ctx->pc == 0x15C6C0u) {
        ctx->pc = 0x15C6C0u;
            // 0x15c6c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C6C4u;
        goto label_15c6c4;
    }
    ctx->pc = 0x15C6BCu;
    {
        const bool branch_taken_0x15c6bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6BCu;
            // 0x15c6c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6bc) {
            ctx->pc = 0x15C6C8u;
            goto label_15c6c8;
        }
    }
    ctx->pc = 0x15C6C4u;
label_15c6c4:
    // 0x15c6c4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x15c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_15c6c8:
    // 0x15c6c8: 0xc04e748  jal         func_139D20
label_15c6cc:
    if (ctx->pc == 0x15C6CCu) {
        ctx->pc = 0x15C6CCu;
            // 0x15c6cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x15C6D0u;
        goto label_15c6d0;
    }
    ctx->pc = 0x15C6C8u;
    SET_GPR_U32(ctx, 31, 0x15C6D0u);
    ctx->pc = 0x15C6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6C8u;
            // 0x15c6cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6D0u; }
        if (ctx->pc != 0x15C6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6D0u; }
        if (ctx->pc != 0x15C6D0u) { return; }
    }
    ctx->pc = 0x15C6D0u;
label_15c6d0:
    // 0x15c6d0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x15c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15c6d4:
    // 0x15c6d4: 0xc04e638  jal         func_1398E0
label_15c6d8:
    if (ctx->pc == 0x15C6D8u) {
        ctx->pc = 0x15C6D8u;
            // 0x15c6d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C6DCu;
        goto label_15c6dc;
    }
    ctx->pc = 0x15C6D4u;
    SET_GPR_U32(ctx, 31, 0x15C6DCu);
    ctx->pc = 0x15C6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6D4u;
            // 0x15c6d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6DCu; }
        if (ctx->pc != 0x15C6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6DCu; }
        if (ctx->pc != 0x15C6DCu) { return; }
    }
    ctx->pc = 0x15C6DCu;
label_15c6dc:
    // 0x15c6dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15c6e0:
    if (ctx->pc == 0x15C6E0u) {
        ctx->pc = 0x15C6E0u;
            // 0x15c6e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C6E4u;
        goto label_15c6e4;
    }
    ctx->pc = 0x15C6DCu;
    {
        const bool branch_taken_0x15c6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6DCu;
            // 0x15c6e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6dc) {
            ctx->pc = 0x15C704u;
            goto label_15c704;
        }
    }
    ctx->pc = 0x15C6E4u;
label_15c6e4:
    // 0x15c6e4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x15c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_15c6e8:
    // 0x15c6e8: 0x24425308  addiu       $v0, $v0, 0x5308
    ctx->pc = 0x15c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21256));
label_15c6ec:
    // 0x15c6ec: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x15c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_15c6f0:
    // 0x15c6f0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x15c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_15c6f4:
    // 0x15c6f4: 0x8e39000c  lw          $t9, 0xC($s1)
    ctx->pc = 0x15c6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15c6f8:
    // 0x15c6f8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x15c6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_15c6fc:
    // 0x15c6fc: 0x320f809  jalr        $t9
label_15c700:
    if (ctx->pc == 0x15C700u) {
        ctx->pc = 0x15C700u;
            // 0x15c700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C704u;
        goto label_15c704;
    }
    ctx->pc = 0x15C6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15C704u);
        ctx->pc = 0x15C700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6FCu;
            // 0x15c700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15C704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15C704u; }
            if (ctx->pc != 0x15C704u) { return; }
        }
        }
    }
    ctx->pc = 0x15C704u;
label_15c704:
    // 0x15c704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c708:
    // 0x15c708: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15c708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c70c:
    // 0x15c70c: 0xc057150  jal         func_15C540
label_15c710:
    if (ctx->pc == 0x15C710u) {
        ctx->pc = 0x15C710u;
            // 0x15c710: 0xae340008  sw          $s4, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
        ctx->pc = 0x15C714u;
        goto label_15c714;
    }
    ctx->pc = 0x15C70Cu;
    SET_GPR_U32(ctx, 31, 0x15C714u);
    ctx->pc = 0x15C710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C70Cu;
            // 0x15c710: 0xae340008  sw          $s4, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C540u;
    if (runtime->hasFunction(0x15C540u)) {
        auto targetFn = runtime->lookupFunction(0x15C540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C714u; }
        if (ctx->pc != 0x15C714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__11CPartsGroupFP23CList_14PartsGroupData__0x15c540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C714u; }
        if (ctx->pc != 0x15C714u) { return; }
    }
    ctx->pc = 0x15C714u;
label_15c714:
    // 0x15c714: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15c714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c718:
    // 0x15c718: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15c718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15c71c:
    // 0x15c71c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c71cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15c720:
    // 0x15c720: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15c724:
    // 0x15c724: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15c728:
    // 0x15c728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15c72c:
    // 0x15c72c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c72cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15c730:
    // 0x15c730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15c734:
    // 0x15c734: 0x3e00008  jr          $ra
label_15c738:
    if (ctx->pc == 0x15C738u) {
        ctx->pc = 0x15C738u;
            // 0x15c738: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15C73Cu;
        goto label_fallthrough_0x15c734;
    }
    ctx->pc = 0x15C734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C734u;
            // 0x15c738: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15c734:
    ctx->pc = 0x15C73Cu;
}
