#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBoundBox__9CMapPieceFP9mgVu0FBOX
// Address: 0x1686d0 - 0x168730
void GetBoundBox__9CMapPieceFP9mgVu0FBOX_0x1686d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBoundBox__9CMapPieceFP9mgVu0FBOX_0x1686d0");
#endif

    switch (ctx->pc) {
        case 0x1686d0u: goto label_1686d0;
        case 0x1686d4u: goto label_1686d4;
        case 0x1686d8u: goto label_1686d8;
        case 0x1686dcu: goto label_1686dc;
        case 0x1686e0u: goto label_1686e0;
        case 0x1686e4u: goto label_1686e4;
        case 0x1686e8u: goto label_1686e8;
        case 0x1686ecu: goto label_1686ec;
        case 0x1686f0u: goto label_1686f0;
        case 0x1686f4u: goto label_1686f4;
        case 0x1686f8u: goto label_1686f8;
        case 0x1686fcu: goto label_1686fc;
        case 0x168700u: goto label_168700;
        case 0x168704u: goto label_168704;
        case 0x168708u: goto label_168708;
        case 0x16870cu: goto label_16870c;
        case 0x168710u: goto label_168710;
        case 0x168714u: goto label_168714;
        case 0x168718u: goto label_168718;
        case 0x16871cu: goto label_16871c;
        case 0x168720u: goto label_168720;
        case 0x168724u: goto label_168724;
        case 0x168728u: goto label_168728;
        case 0x16872cu: goto label_16872c;
        default: break;
    }

    ctx->pc = 0x1686d0u;

label_1686d0:
    // 0x1686d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1686d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1686d4:
    // 0x1686d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1686d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1686d8:
    // 0x1686d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1686d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1686dc:
    // 0x1686dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1686dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1686e0:
    // 0x1686e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1686e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1686e4:
    // 0x1686e4: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1686e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_1686e8:
    // 0x1686e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1686ec:
    if (ctx->pc == 0x1686ECu) {
        ctx->pc = 0x1686ECu;
            // 0x1686ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1686F0u;
        goto label_1686f0;
    }
    ctx->pc = 0x1686E8u;
    {
        const bool branch_taken_0x1686e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1686ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1686E8u;
            // 0x1686ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686e8) {
            ctx->pc = 0x1686F8u;
            goto label_1686f8;
        }
    }
    ctx->pc = 0x1686F0u;
label_1686f0:
    // 0x1686f0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1686f4:
    if (ctx->pc == 0x1686F4u) {
        ctx->pc = 0x1686F4u;
            // 0x1686f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1686F8u;
        goto label_1686f8;
    }
    ctx->pc = 0x1686F0u;
    {
        const bool branch_taken_0x1686f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1686F0u;
            // 0x1686f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686f0) {
            ctx->pc = 0x16871Cu;
            goto label_16871c;
        }
    }
    ctx->pc = 0x1686F8u;
label_1686f8:
    // 0x1686f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1686f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1686fc:
    // 0x1686fc: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x1686fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_168700:
    // 0x168700: 0x320f809  jalr        $t9
label_168704:
    if (ctx->pc == 0x168704u) {
        ctx->pc = 0x168708u;
        goto label_168708;
    }
    ctx->pc = 0x168700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168708u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x168708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168708u; }
            if (ctx->pc != 0x168708u) { return; }
        }
        }
    }
    ctx->pc = 0x168708u;
label_168708:
    // 0x168708: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x168708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16870c:
    // 0x16870c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16870cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_168710:
    // 0x168710: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x168710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_168714:
    // 0x168714: 0x320f809  jalr        $t9
label_168718:
    if (ctx->pc == 0x168718u) {
        ctx->pc = 0x168718u;
            // 0x168718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16871Cu;
        goto label_16871c;
    }
    ctx->pc = 0x168714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16871Cu);
        ctx->pc = 0x168718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168714u;
            // 0x168718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16871Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16871Cu; }
            if (ctx->pc != 0x16871Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16871Cu;
label_16871c:
    // 0x16871c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16871cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_168720:
    // 0x168720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_168724:
    // 0x168724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168728:
    // 0x168728: 0x3e00008  jr          $ra
label_16872c:
    if (ctx->pc == 0x16872Cu) {
        ctx->pc = 0x16872Cu;
            // 0x16872c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x168730u;
        goto label_fallthrough_0x168728;
    }
    ctx->pc = 0x168728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168728u;
            // 0x16872c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x168728:
    ctx->pc = 0x168730u;
}
