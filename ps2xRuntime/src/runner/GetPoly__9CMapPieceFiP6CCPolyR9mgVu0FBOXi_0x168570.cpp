#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPoly__9CMapPieceFiP6CCPolyR9mgVu0FBOXi
// Address: 0x168570 - 0x16861c
void GetPoly__9CMapPieceFiP6CCPolyR9mgVu0FBOXi_0x168570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPoly__9CMapPieceFiP6CCPolyR9mgVu0FBOXi_0x168570");
#endif

    switch (ctx->pc) {
        case 0x168570u: goto label_168570;
        case 0x168574u: goto label_168574;
        case 0x168578u: goto label_168578;
        case 0x16857cu: goto label_16857c;
        case 0x168580u: goto label_168580;
        case 0x168584u: goto label_168584;
        case 0x168588u: goto label_168588;
        case 0x16858cu: goto label_16858c;
        case 0x168590u: goto label_168590;
        case 0x168594u: goto label_168594;
        case 0x168598u: goto label_168598;
        case 0x16859cu: goto label_16859c;
        case 0x1685a0u: goto label_1685a0;
        case 0x1685a4u: goto label_1685a4;
        case 0x1685a8u: goto label_1685a8;
        case 0x1685acu: goto label_1685ac;
        case 0x1685b0u: goto label_1685b0;
        case 0x1685b4u: goto label_1685b4;
        case 0x1685b8u: goto label_1685b8;
        case 0x1685bcu: goto label_1685bc;
        case 0x1685c0u: goto label_1685c0;
        case 0x1685c4u: goto label_1685c4;
        case 0x1685c8u: goto label_1685c8;
        case 0x1685ccu: goto label_1685cc;
        case 0x1685d0u: goto label_1685d0;
        case 0x1685d4u: goto label_1685d4;
        case 0x1685d8u: goto label_1685d8;
        case 0x1685dcu: goto label_1685dc;
        case 0x1685e0u: goto label_1685e0;
        case 0x1685e4u: goto label_1685e4;
        case 0x1685e8u: goto label_1685e8;
        case 0x1685ecu: goto label_1685ec;
        case 0x1685f0u: goto label_1685f0;
        case 0x1685f4u: goto label_1685f4;
        case 0x1685f8u: goto label_1685f8;
        case 0x1685fcu: goto label_1685fc;
        case 0x168600u: goto label_168600;
        case 0x168604u: goto label_168604;
        case 0x168608u: goto label_168608;
        case 0x16860cu: goto label_16860c;
        case 0x168610u: goto label_168610;
        case 0x168614u: goto label_168614;
        case 0x168618u: goto label_168618;
        default: break;
    }

    ctx->pc = 0x168570u;

label_168570:
    // 0x168570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_168574:
    // 0x168574: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x168574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_168578:
    // 0x168578: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16857c:
    // 0x16857c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_168580:
    // 0x168580: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x168580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168584:
    // 0x168584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_168588:
    // 0x168588: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x168588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16858c:
    // 0x16858c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_168590:
    // 0x168590: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x168590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_168594:
    // 0x168594: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_168598:
    // 0x168598: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_16859c:
    if (ctx->pc == 0x16859Cu) {
        ctx->pc = 0x16859Cu;
            // 0x16859c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1685A0u;
        goto label_1685a0;
    }
    ctx->pc = 0x168598u;
    {
        const bool branch_taken_0x168598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168598u;
            // 0x16859c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168598) {
            ctx->pc = 0x1685A8u;
            goto label_1685a8;
        }
    }
    ctx->pc = 0x1685A0u;
label_1685a0:
    // 0x1685a0: 0x10000017  b           . + 4 + (0x17 << 2)
label_1685a4:
    if (ctx->pc == 0x1685A4u) {
        ctx->pc = 0x1685A4u;
            // 0x1685a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1685A8u;
        goto label_1685a8;
    }
    ctx->pc = 0x1685A0u;
    {
        const bool branch_taken_0x1685a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1685A0u;
            // 0x1685a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685a0) {
            ctx->pc = 0x168600u;
            goto label_168600;
        }
    }
    ctx->pc = 0x1685A8u;
label_1685a8:
    // 0x1685a8: 0x866200a0  lh          $v0, 0xA0($s3)
    ctx->pc = 0x1685a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 160)));
label_1685ac:
    // 0x1685ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1685b0:
    if (ctx->pc == 0x1685B0u) {
        ctx->pc = 0x1685B0u;
            // 0x1685b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1685B4u;
        goto label_1685b4;
    }
    ctx->pc = 0x1685ACu;
    {
        const bool branch_taken_0x1685ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1685ACu;
            // 0x1685b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685ac) {
            ctx->pc = 0x1685BCu;
            goto label_1685bc;
        }
    }
    ctx->pc = 0x1685B4u;
label_1685b4:
    // 0x1685b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1685b8:
    if (ctx->pc == 0x1685B8u) {
        ctx->pc = 0x1685B8u;
            // 0x1685b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1685BCu;
        goto label_1685bc;
    }
    ctx->pc = 0x1685B4u;
    {
        const bool branch_taken_0x1685b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1685B4u;
            // 0x1685b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685b4) {
            ctx->pc = 0x168604u;
            goto label_168604;
        }
    }
    ctx->pc = 0x1685BCu;
label_1685bc:
    // 0x1685bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1685bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1685c0:
    // 0x1685c0: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x1685c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_1685c4:
    // 0x1685c4: 0x320f809  jalr        $t9
label_1685c8:
    if (ctx->pc == 0x1685C8u) {
        ctx->pc = 0x1685CCu;
        goto label_1685cc;
    }
    ctx->pc = 0x1685C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1685CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1685CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1685CCu; }
            if (ctx->pc != 0x1685CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1685CCu;
label_1685cc:
    // 0x1685cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1685d0:
    if (ctx->pc == 0x1685D0u) {
        ctx->pc = 0x1685D0u;
            // 0x1685d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1685D4u;
        goto label_1685d4;
    }
    ctx->pc = 0x1685CCu;
    {
        const bool branch_taken_0x1685cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1685D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1685CCu;
            // 0x1685d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685cc) {
            ctx->pc = 0x1685DCu;
            goto label_1685dc;
        }
    }
    ctx->pc = 0x1685D4u;
label_1685d4:
    // 0x1685d4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1685d8:
    if (ctx->pc == 0x1685D8u) {
        ctx->pc = 0x1685DCu;
        goto label_1685dc;
    }
    ctx->pc = 0x1685D4u;
    {
        const bool branch_taken_0x1685d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1685d4) {
            ctx->pc = 0x168600u;
            goto label_168600;
        }
    }
    ctx->pc = 0x1685DCu;
label_1685dc:
    // 0x1685dc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1685dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1685e0:
    // 0x1685e0: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x1685e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_1685e4:
    // 0x1685e4: 0x320f809  jalr        $t9
label_1685e8:
    if (ctx->pc == 0x1685E8u) {
        ctx->pc = 0x1685E8u;
            // 0x1685e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1685ECu;
        goto label_1685ec;
    }
    ctx->pc = 0x1685E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1685ECu);
        ctx->pc = 0x1685E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1685E4u;
            // 0x1685e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1685ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1685ECu; }
            if (ctx->pc != 0x1685ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1685ECu;
label_1685ec:
    // 0x1685ec: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x1685ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1685f0:
    // 0x1685f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1685f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1685f4:
    // 0x1685f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1685f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1685f8:
    // 0x1685f8: 0xc051ef4  jal         func_147BD0
label_1685fc:
    if (ctx->pc == 0x1685FCu) {
        ctx->pc = 0x1685FCu;
            // 0x1685fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168600u;
        goto label_168600;
    }
    ctx->pc = 0x1685F8u;
    SET_GPR_U32(ctx, 31, 0x168600u);
    ctx->pc = 0x1685FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1685F8u;
            // 0x1685fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147BD0u;
    if (runtime->hasFunction(0x147BD0u)) {
        auto targetFn = runtime->lookupFunction(0x147BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168600u; }
        if (ctx->pc != 0x168600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickUpNearPoly__9CColFrameFP6CCPolyRC9mgVu0FBOXi_0x147bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168600u; }
        if (ctx->pc != 0x168600u) { return; }
    }
    ctx->pc = 0x168600u;
label_168600:
    // 0x168600: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x168600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_168604:
    // 0x168604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x168604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_168608:
    // 0x168608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16860c:
    // 0x16860c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16860cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_168610:
    // 0x168610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168614:
    // 0x168614: 0x3e00008  jr          $ra
label_168618:
    if (ctx->pc == 0x168618u) {
        ctx->pc = 0x168618u;
            // 0x168618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16861Cu;
        goto label_fallthrough_0x168614;
    }
    ctx->pc = 0x168614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168614u;
            // 0x168618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x168614:
    ctx->pc = 0x16861Cu;
}
