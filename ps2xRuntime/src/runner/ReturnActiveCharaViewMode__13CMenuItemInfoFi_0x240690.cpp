#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReturnActiveCharaViewMode__13CMenuItemInfoFi
// Address: 0x240690 - 0x2407e4
void ReturnActiveCharaViewMode__13CMenuItemInfoFi_0x240690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReturnActiveCharaViewMode__13CMenuItemInfoFi_0x240690");
#endif

    switch (ctx->pc) {
        case 0x240690u: goto label_240690;
        case 0x240694u: goto label_240694;
        case 0x240698u: goto label_240698;
        case 0x24069cu: goto label_24069c;
        case 0x2406a0u: goto label_2406a0;
        case 0x2406a4u: goto label_2406a4;
        case 0x2406a8u: goto label_2406a8;
        case 0x2406acu: goto label_2406ac;
        case 0x2406b0u: goto label_2406b0;
        case 0x2406b4u: goto label_2406b4;
        case 0x2406b8u: goto label_2406b8;
        case 0x2406bcu: goto label_2406bc;
        case 0x2406c0u: goto label_2406c0;
        case 0x2406c4u: goto label_2406c4;
        case 0x2406c8u: goto label_2406c8;
        case 0x2406ccu: goto label_2406cc;
        case 0x2406d0u: goto label_2406d0;
        case 0x2406d4u: goto label_2406d4;
        case 0x2406d8u: goto label_2406d8;
        case 0x2406dcu: goto label_2406dc;
        case 0x2406e0u: goto label_2406e0;
        case 0x2406e4u: goto label_2406e4;
        case 0x2406e8u: goto label_2406e8;
        case 0x2406ecu: goto label_2406ec;
        case 0x2406f0u: goto label_2406f0;
        case 0x2406f4u: goto label_2406f4;
        case 0x2406f8u: goto label_2406f8;
        case 0x2406fcu: goto label_2406fc;
        case 0x240700u: goto label_240700;
        case 0x240704u: goto label_240704;
        case 0x240708u: goto label_240708;
        case 0x24070cu: goto label_24070c;
        case 0x240710u: goto label_240710;
        case 0x240714u: goto label_240714;
        case 0x240718u: goto label_240718;
        case 0x24071cu: goto label_24071c;
        case 0x240720u: goto label_240720;
        case 0x240724u: goto label_240724;
        case 0x240728u: goto label_240728;
        case 0x24072cu: goto label_24072c;
        case 0x240730u: goto label_240730;
        case 0x240734u: goto label_240734;
        case 0x240738u: goto label_240738;
        case 0x24073cu: goto label_24073c;
        case 0x240740u: goto label_240740;
        case 0x240744u: goto label_240744;
        case 0x240748u: goto label_240748;
        case 0x24074cu: goto label_24074c;
        case 0x240750u: goto label_240750;
        case 0x240754u: goto label_240754;
        case 0x240758u: goto label_240758;
        case 0x24075cu: goto label_24075c;
        case 0x240760u: goto label_240760;
        case 0x240764u: goto label_240764;
        case 0x240768u: goto label_240768;
        case 0x24076cu: goto label_24076c;
        case 0x240770u: goto label_240770;
        case 0x240774u: goto label_240774;
        case 0x240778u: goto label_240778;
        case 0x24077cu: goto label_24077c;
        case 0x240780u: goto label_240780;
        case 0x240784u: goto label_240784;
        case 0x240788u: goto label_240788;
        case 0x24078cu: goto label_24078c;
        case 0x240790u: goto label_240790;
        case 0x240794u: goto label_240794;
        case 0x240798u: goto label_240798;
        case 0x24079cu: goto label_24079c;
        case 0x2407a0u: goto label_2407a0;
        case 0x2407a4u: goto label_2407a4;
        case 0x2407a8u: goto label_2407a8;
        case 0x2407acu: goto label_2407ac;
        case 0x2407b0u: goto label_2407b0;
        case 0x2407b4u: goto label_2407b4;
        case 0x2407b8u: goto label_2407b8;
        case 0x2407bcu: goto label_2407bc;
        case 0x2407c0u: goto label_2407c0;
        case 0x2407c4u: goto label_2407c4;
        case 0x2407c8u: goto label_2407c8;
        case 0x2407ccu: goto label_2407cc;
        case 0x2407d0u: goto label_2407d0;
        case 0x2407d4u: goto label_2407d4;
        case 0x2407d8u: goto label_2407d8;
        case 0x2407dcu: goto label_2407dc;
        case 0x2407e0u: goto label_2407e0;
        default: break;
    }

    ctx->pc = 0x240690u;

label_240690:
    // 0x240690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240694:
    // 0x240694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_240698:
    // 0x240698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24069c:
    // 0x24069c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24069cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2406a0:
    // 0x2406a0: 0xc090c40  jal         func_243100
label_2406a4:
    if (ctx->pc == 0x2406A4u) {
        ctx->pc = 0x2406A4u;
            // 0x2406a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2406A8u;
        goto label_2406a8;
    }
    ctx->pc = 0x2406A0u;
    SET_GPR_U32(ctx, 31, 0x2406A8u);
    ctx->pc = 0x2406A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2406A0u;
            // 0x2406a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2406A8u; }
        if (ctx->pc != 0x2406A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2406A8u; }
        if (ctx->pc != 0x2406A8u) { return; }
    }
    ctx->pc = 0x2406A8u;
label_2406a8:
    // 0x2406a8: 0x86230110  lh          $v1, 0x110($s1)
    ctx->pc = 0x2406a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 272)));
label_2406ac:
    // 0x2406ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2406b0:
    if (ctx->pc == 0x2406B0u) {
        ctx->pc = 0x2406B0u;
            // 0x2406b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2406B4u;
        goto label_2406b4;
    }
    ctx->pc = 0x2406ACu;
    {
        const bool branch_taken_0x2406ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2406B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2406ACu;
            // 0x2406b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406ac) {
            ctx->pc = 0x2406BCu;
            goto label_2406bc;
        }
    }
    ctx->pc = 0x2406B4u;
label_2406b4:
    // 0x2406b4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2406b8:
    if (ctx->pc == 0x2406B8u) {
        ctx->pc = 0x2406B8u;
            // 0x2406b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2406BCu;
        goto label_2406bc;
    }
    ctx->pc = 0x2406B4u;
    {
        const bool branch_taken_0x2406b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2406B4u;
            // 0x2406b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406b4) {
            ctx->pc = 0x2406E8u;
            goto label_2406e8;
        }
    }
    ctx->pc = 0x2406BCu;
label_2406bc:
    // 0x2406bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2406bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2406c0:
    // 0x2406c0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2406c4:
    if (ctx->pc == 0x2406C4u) {
        ctx->pc = 0x2406C8u;
        goto label_2406c8;
    }
    ctx->pc = 0x2406C0u;
    {
        const bool branch_taken_0x2406c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2406c0) {
            ctx->pc = 0x2406D0u;
            goto label_2406d0;
        }
    }
    ctx->pc = 0x2406C8u;
label_2406c8:
    // 0x2406c8: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_2406cc:
    if (ctx->pc == 0x2406CCu) {
        ctx->pc = 0x2406D0u;
        goto label_2406d0;
    }
    ctx->pc = 0x2406C8u;
    {
        const bool branch_taken_0x2406c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2406c8) {
            ctx->pc = 0x2406E4u;
            goto label_2406e4;
        }
    }
    ctx->pc = 0x2406D0u;
label_2406d0:
    // 0x2406d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2406d4:
    if (ctx->pc == 0x2406D4u) {
        ctx->pc = 0x2406D8u;
        goto label_2406d8;
    }
    ctx->pc = 0x2406D0u;
    {
        const bool branch_taken_0x2406d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2406d0) {
            ctx->pc = 0x2406F0u;
            goto label_2406f0;
        }
    }
    ctx->pc = 0x2406D8u;
label_2406d8:
    // 0x2406d8: 0x86220112  lh          $v0, 0x112($s1)
    ctx->pc = 0x2406d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_2406dc:
    // 0x2406dc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2406e0:
    if (ctx->pc == 0x2406E0u) {
        ctx->pc = 0x2406E4u;
        goto label_2406e4;
    }
    ctx->pc = 0x2406DCu;
    {
        const bool branch_taken_0x2406dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2406dc) {
            ctx->pc = 0x2406F0u;
            goto label_2406f0;
        }
    }
    ctx->pc = 0x2406E4u;
label_2406e4:
    // 0x2406e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2406e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2406e8:
    // 0x2406e8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2406ec:
    if (ctx->pc == 0x2406ECu) {
        ctx->pc = 0x2406ECu;
            // 0x2406ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2406F0u;
        goto label_2406f0;
    }
    ctx->pc = 0x2406E8u;
    {
        const bool branch_taken_0x2406e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2406E8u;
            // 0x2406ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406e8) {
            ctx->pc = 0x2407D4u;
            goto label_2407d4;
        }
    }
    ctx->pc = 0x2406F0u;
label_2406f0:
    // 0x2406f0: 0x86230112  lh          $v1, 0x112($s1)
    ctx->pc = 0x2406f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_2406f4:
    // 0x2406f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2406f8:
    if (ctx->pc == 0x2406F8u) {
        ctx->pc = 0x2406F8u;
            // 0x2406f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2406FCu;
        goto label_2406fc;
    }
    ctx->pc = 0x2406F4u;
    {
        const bool branch_taken_0x2406f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2406F4u;
            // 0x2406f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406f4) {
            ctx->pc = 0x240704u;
            goto label_240704;
        }
    }
    ctx->pc = 0x2406FCu;
label_2406fc:
    // 0x2406fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_240700:
    if (ctx->pc == 0x240700u) {
        ctx->pc = 0x240704u;
        goto label_240704;
    }
    ctx->pc = 0x2406FCu;
    {
        const bool branch_taken_0x2406fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2406fc) {
            ctx->pc = 0x240708u;
            goto label_240708;
        }
    }
    ctx->pc = 0x240704u;
label_240704:
    // 0x240704: 0xa6300114  sh          $s0, 0x114($s1)
    ctx->pc = 0x240704u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 16));
label_240708:
    // 0x240708: 0x86230112  lh          $v1, 0x112($s1)
    ctx->pc = 0x240708u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_24070c:
    // 0x24070c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_240710:
    // 0x240710: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_240714:
    if (ctx->pc == 0x240714u) {
        ctx->pc = 0x240714u;
            // 0x240714: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x240718u;
        goto label_240718;
    }
    ctx->pc = 0x240710u;
    {
        const bool branch_taken_0x240710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x240714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240710u;
            // 0x240714: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240710) {
            ctx->pc = 0x24072Cu;
            goto label_24072c;
        }
    }
    ctx->pc = 0x240718u;
label_240718:
    // 0x240718: 0x8c24cab4  lw          $a0, -0x354C($at)
    ctx->pc = 0x240718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953652)));
label_24071c:
    // 0x24071c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24071cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_240720:
    // 0x240720: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x240720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_240724:
    // 0x240724: 0x320f809  jalr        $t9
label_240728:
    if (ctx->pc == 0x240728u) {
        ctx->pc = 0x240728u;
            // 0x240728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24072Cu;
        goto label_24072c;
    }
    ctx->pc = 0x240724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24072Cu);
        ctx->pc = 0x240728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240724u;
            // 0x240728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24072Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24072Cu; }
            if (ctx->pc != 0x24072Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24072Cu;
label_24072c:
    // 0x24072c: 0x8f8894f8  lw          $t0, -0x6B08($gp)
    ctx->pc = 0x24072cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_240730:
    // 0x240730: 0x2782839c  addiu       $v0, $gp, -0x7C64
    ctx->pc = 0x240730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935452));
label_240734:
    // 0x240734: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x240734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_240738:
    // 0x240738: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x240738u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
label_24073c:
    // 0x24073c: 0x24e70d00  addiu       $a3, $a3, 0xD00
    ctx->pc = 0x24073cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3328));
label_240740:
    // 0x240740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240744:
    // 0x240744: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x240744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_240748:
    // 0x240748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24074c:
    // 0x24074c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24074cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240750:
    // 0x240750: 0xad000070  sw          $zero, 0x70($t0)
    ctx->pc = 0x240750u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 0));
label_240754:
    // 0x240754: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x240754u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_240758:
    // 0x240758: 0xa6260014  sh          $a2, 0x14($s1)
    ctx->pc = 0x240758u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 6));
label_24075c:
    // 0x24075c: 0x86260112  lh          $a2, 0x112($s1)
    ctx->pc = 0x24075cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_240760:
    // 0x240760: 0xa6260110  sh          $a2, 0x110($s1)
    ctx->pc = 0x240760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 6));
label_240764:
    // 0x240764: 0x86290014  lh          $t1, 0x14($s1)
    ctx->pc = 0x240764u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_240768:
    // 0x240768: 0x8f8694f8  lw          $a2, -0x6B08($gp)
    ctx->pc = 0x240768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_24076c:
    // 0x24076c: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x24076cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_240770:
    // 0x240770: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x240770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_240774:
    // 0x240774: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x240774u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_240778:
    // 0x240778: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x240778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_24077c:
    // 0x24077c: 0xacc70134  sw          $a3, 0x134($a2)
    ctx->pc = 0x24077cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 308), GPR_U32(ctx, 7));
label_240780:
    // 0x240780: 0xa3839b72  sb          $v1, -0x648E($gp)
    ctx->pc = 0x240780u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 3));
label_240784:
    // 0x240784: 0xa3809b75  sb          $zero, -0x648B($gp)
    ctx->pc = 0x240784u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
label_240788:
    // 0x240788: 0xc090320  jal         func_240C80
label_24078c:
    if (ctx->pc == 0x24078Cu) {
        ctx->pc = 0x24078Cu;
            // 0x24078c: 0xa3829b74  sb          $v0, -0x648C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x240790u;
        goto label_240790;
    }
    ctx->pc = 0x240788u;
    SET_GPR_U32(ctx, 31, 0x240790u);
    ctx->pc = 0x24078Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240788u;
            // 0x24078c: 0xa3829b74  sb          $v0, -0x648C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240790u; }
        if (ctx->pc != 0x240790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240790u; }
        if (ctx->pc != 0x240790u) { return; }
    }
    ctx->pc = 0x240790u;
label_240790:
    // 0x240790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240794:
    // 0x240794: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x240794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_240798:
    // 0x240798: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x240798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_24079c:
    // 0x24079c: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x24079cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_2407a0:
    // 0x2407a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2407a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2407a4:
    // 0x2407a4: 0xa3829b77  sb          $v0, -0x6489($gp)
    ctx->pc = 0x2407a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 2));
label_2407a8:
    // 0x2407a8: 0x2484db90  addiu       $a0, $a0, -0x2470
    ctx->pc = 0x2407a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
label_2407ac:
    // 0x2407ac: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x2407acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
label_2407b0:
    // 0x2407b0: 0xc0ac028  jal         func_2B00A0
label_2407b4:
    if (ctx->pc == 0x2407B4u) {
        ctx->pc = 0x2407B4u;
            // 0x2407b4: 0x24c6cac0  addiu       $a2, $a2, -0x3540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
        ctx->pc = 0x2407B8u;
        goto label_2407b8;
    }
    ctx->pc = 0x2407B0u;
    SET_GPR_U32(ctx, 31, 0x2407B8u);
    ctx->pc = 0x2407B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2407B0u;
            // 0x2407b4: 0x24c6cac0  addiu       $a2, $a2, -0x3540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A0u;
    if (runtime->hasFunction(0x2B00A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B00A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2407B8u; }
        if (ctx->pc != 0x2407B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2407B8u; }
        if (ctx->pc != 0x2407B8u) { return; }
    }
    ctx->pc = 0x2407B8u;
label_2407b8:
    // 0x2407b8: 0x86250110  lh          $a1, 0x110($s1)
    ctx->pc = 0x2407b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 272)));
label_2407bc:
    // 0x2407bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2407bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2407c0:
    // 0x2407c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2407c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2407c4:
    // 0x2407c4: 0xc093114  jal         func_24C450
label_2407c8:
    if (ctx->pc == 0x2407C8u) {
        ctx->pc = 0x2407C8u;
            // 0x2407c8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2407CCu;
        goto label_2407cc;
    }
    ctx->pc = 0x2407C4u;
    SET_GPR_U32(ctx, 31, 0x2407CCu);
    ctx->pc = 0x2407C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2407C4u;
            // 0x2407c8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2407CCu; }
        if (ctx->pc != 0x2407CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2407CCu; }
        if (ctx->pc != 0x2407CCu) { return; }
    }
    ctx->pc = 0x2407CCu;
label_2407cc:
    // 0x2407cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2407ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2407d0:
    // 0x2407d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2407d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2407d4:
    // 0x2407d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2407d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2407d8:
    // 0x2407d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2407d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2407dc:
    // 0x2407dc: 0x3e00008  jr          $ra
label_2407e0:
    if (ctx->pc == 0x2407E0u) {
        ctx->pc = 0x2407E0u;
            // 0x2407e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2407E4u;
        goto label_fallthrough_0x2407dc;
    }
    ctx->pc = 0x2407DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2407E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2407DCu;
            // 0x2407e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2407dc:
    ctx->pc = 0x2407E4u;
}
