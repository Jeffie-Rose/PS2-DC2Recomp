#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__15CRocketLauncherFv
// Address: 0x1b6560 - 0x1b67f8
void Draw__15CRocketLauncherFv_0x1b6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__15CRocketLauncherFv_0x1b6560");
#endif

    switch (ctx->pc) {
        case 0x1b6560u: goto label_1b6560;
        case 0x1b6564u: goto label_1b6564;
        case 0x1b6568u: goto label_1b6568;
        case 0x1b656cu: goto label_1b656c;
        case 0x1b6570u: goto label_1b6570;
        case 0x1b6574u: goto label_1b6574;
        case 0x1b6578u: goto label_1b6578;
        case 0x1b657cu: goto label_1b657c;
        case 0x1b6580u: goto label_1b6580;
        case 0x1b6584u: goto label_1b6584;
        case 0x1b6588u: goto label_1b6588;
        case 0x1b658cu: goto label_1b658c;
        case 0x1b6590u: goto label_1b6590;
        case 0x1b6594u: goto label_1b6594;
        case 0x1b6598u: goto label_1b6598;
        case 0x1b659cu: goto label_1b659c;
        case 0x1b65a0u: goto label_1b65a0;
        case 0x1b65a4u: goto label_1b65a4;
        case 0x1b65a8u: goto label_1b65a8;
        case 0x1b65acu: goto label_1b65ac;
        case 0x1b65b0u: goto label_1b65b0;
        case 0x1b65b4u: goto label_1b65b4;
        case 0x1b65b8u: goto label_1b65b8;
        case 0x1b65bcu: goto label_1b65bc;
        case 0x1b65c0u: goto label_1b65c0;
        case 0x1b65c4u: goto label_1b65c4;
        case 0x1b65c8u: goto label_1b65c8;
        case 0x1b65ccu: goto label_1b65cc;
        case 0x1b65d0u: goto label_1b65d0;
        case 0x1b65d4u: goto label_1b65d4;
        case 0x1b65d8u: goto label_1b65d8;
        case 0x1b65dcu: goto label_1b65dc;
        case 0x1b65e0u: goto label_1b65e0;
        case 0x1b65e4u: goto label_1b65e4;
        case 0x1b65e8u: goto label_1b65e8;
        case 0x1b65ecu: goto label_1b65ec;
        case 0x1b65f0u: goto label_1b65f0;
        case 0x1b65f4u: goto label_1b65f4;
        case 0x1b65f8u: goto label_1b65f8;
        case 0x1b65fcu: goto label_1b65fc;
        case 0x1b6600u: goto label_1b6600;
        case 0x1b6604u: goto label_1b6604;
        case 0x1b6608u: goto label_1b6608;
        case 0x1b660cu: goto label_1b660c;
        case 0x1b6610u: goto label_1b6610;
        case 0x1b6614u: goto label_1b6614;
        case 0x1b6618u: goto label_1b6618;
        case 0x1b661cu: goto label_1b661c;
        case 0x1b6620u: goto label_1b6620;
        case 0x1b6624u: goto label_1b6624;
        case 0x1b6628u: goto label_1b6628;
        case 0x1b662cu: goto label_1b662c;
        case 0x1b6630u: goto label_1b6630;
        case 0x1b6634u: goto label_1b6634;
        case 0x1b6638u: goto label_1b6638;
        case 0x1b663cu: goto label_1b663c;
        case 0x1b6640u: goto label_1b6640;
        case 0x1b6644u: goto label_1b6644;
        case 0x1b6648u: goto label_1b6648;
        case 0x1b664cu: goto label_1b664c;
        case 0x1b6650u: goto label_1b6650;
        case 0x1b6654u: goto label_1b6654;
        case 0x1b6658u: goto label_1b6658;
        case 0x1b665cu: goto label_1b665c;
        case 0x1b6660u: goto label_1b6660;
        case 0x1b6664u: goto label_1b6664;
        case 0x1b6668u: goto label_1b6668;
        case 0x1b666cu: goto label_1b666c;
        case 0x1b6670u: goto label_1b6670;
        case 0x1b6674u: goto label_1b6674;
        case 0x1b6678u: goto label_1b6678;
        case 0x1b667cu: goto label_1b667c;
        case 0x1b6680u: goto label_1b6680;
        case 0x1b6684u: goto label_1b6684;
        case 0x1b6688u: goto label_1b6688;
        case 0x1b668cu: goto label_1b668c;
        case 0x1b6690u: goto label_1b6690;
        case 0x1b6694u: goto label_1b6694;
        case 0x1b6698u: goto label_1b6698;
        case 0x1b669cu: goto label_1b669c;
        case 0x1b66a0u: goto label_1b66a0;
        case 0x1b66a4u: goto label_1b66a4;
        case 0x1b66a8u: goto label_1b66a8;
        case 0x1b66acu: goto label_1b66ac;
        case 0x1b66b0u: goto label_1b66b0;
        case 0x1b66b4u: goto label_1b66b4;
        case 0x1b66b8u: goto label_1b66b8;
        case 0x1b66bcu: goto label_1b66bc;
        case 0x1b66c0u: goto label_1b66c0;
        case 0x1b66c4u: goto label_1b66c4;
        case 0x1b66c8u: goto label_1b66c8;
        case 0x1b66ccu: goto label_1b66cc;
        case 0x1b66d0u: goto label_1b66d0;
        case 0x1b66d4u: goto label_1b66d4;
        case 0x1b66d8u: goto label_1b66d8;
        case 0x1b66dcu: goto label_1b66dc;
        case 0x1b66e0u: goto label_1b66e0;
        case 0x1b66e4u: goto label_1b66e4;
        case 0x1b66e8u: goto label_1b66e8;
        case 0x1b66ecu: goto label_1b66ec;
        case 0x1b66f0u: goto label_1b66f0;
        case 0x1b66f4u: goto label_1b66f4;
        case 0x1b66f8u: goto label_1b66f8;
        case 0x1b66fcu: goto label_1b66fc;
        case 0x1b6700u: goto label_1b6700;
        case 0x1b6704u: goto label_1b6704;
        case 0x1b6708u: goto label_1b6708;
        case 0x1b670cu: goto label_1b670c;
        case 0x1b6710u: goto label_1b6710;
        case 0x1b6714u: goto label_1b6714;
        case 0x1b6718u: goto label_1b6718;
        case 0x1b671cu: goto label_1b671c;
        case 0x1b6720u: goto label_1b6720;
        case 0x1b6724u: goto label_1b6724;
        case 0x1b6728u: goto label_1b6728;
        case 0x1b672cu: goto label_1b672c;
        case 0x1b6730u: goto label_1b6730;
        case 0x1b6734u: goto label_1b6734;
        case 0x1b6738u: goto label_1b6738;
        case 0x1b673cu: goto label_1b673c;
        case 0x1b6740u: goto label_1b6740;
        case 0x1b6744u: goto label_1b6744;
        case 0x1b6748u: goto label_1b6748;
        case 0x1b674cu: goto label_1b674c;
        case 0x1b6750u: goto label_1b6750;
        case 0x1b6754u: goto label_1b6754;
        case 0x1b6758u: goto label_1b6758;
        case 0x1b675cu: goto label_1b675c;
        case 0x1b6760u: goto label_1b6760;
        case 0x1b6764u: goto label_1b6764;
        case 0x1b6768u: goto label_1b6768;
        case 0x1b676cu: goto label_1b676c;
        case 0x1b6770u: goto label_1b6770;
        case 0x1b6774u: goto label_1b6774;
        case 0x1b6778u: goto label_1b6778;
        case 0x1b677cu: goto label_1b677c;
        case 0x1b6780u: goto label_1b6780;
        case 0x1b6784u: goto label_1b6784;
        case 0x1b6788u: goto label_1b6788;
        case 0x1b678cu: goto label_1b678c;
        case 0x1b6790u: goto label_1b6790;
        case 0x1b6794u: goto label_1b6794;
        case 0x1b6798u: goto label_1b6798;
        case 0x1b679cu: goto label_1b679c;
        case 0x1b67a0u: goto label_1b67a0;
        case 0x1b67a4u: goto label_1b67a4;
        case 0x1b67a8u: goto label_1b67a8;
        case 0x1b67acu: goto label_1b67ac;
        case 0x1b67b0u: goto label_1b67b0;
        case 0x1b67b4u: goto label_1b67b4;
        case 0x1b67b8u: goto label_1b67b8;
        case 0x1b67bcu: goto label_1b67bc;
        case 0x1b67c0u: goto label_1b67c0;
        case 0x1b67c4u: goto label_1b67c4;
        case 0x1b67c8u: goto label_1b67c8;
        case 0x1b67ccu: goto label_1b67cc;
        case 0x1b67d0u: goto label_1b67d0;
        case 0x1b67d4u: goto label_1b67d4;
        case 0x1b67d8u: goto label_1b67d8;
        case 0x1b67dcu: goto label_1b67dc;
        case 0x1b67e0u: goto label_1b67e0;
        case 0x1b67e4u: goto label_1b67e4;
        case 0x1b67e8u: goto label_1b67e8;
        case 0x1b67ecu: goto label_1b67ec;
        case 0x1b67f0u: goto label_1b67f0;
        case 0x1b67f4u: goto label_1b67f4;
        default: break;
    }

    ctx->pc = 0x1b6560u;

label_1b6560:
    // 0x1b6560: 0x27bdf620  addiu       $sp, $sp, -0x9E0
    ctx->pc = 0x1b6560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964768));
label_1b6564:
    // 0x1b6564: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b6564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b6568:
    // 0x1b6568: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b6568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1b656c:
    // 0x1b656c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b6570:
    // 0x1b6570: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b6570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b6574:
    // 0x1b6574: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b6578:
    // 0x1b6578: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b6578u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b657c:
    // 0x1b657c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b657cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b6580:
    // 0x1b6580: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x1b6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_1b6584:
    // 0x1b6584: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
label_1b6588:
    if (ctx->pc == 0x1B6588u) {
        ctx->pc = 0x1B6588u;
            // 0x1b6588: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B658Cu;
        goto label_1b658c;
    }
    ctx->pc = 0x1B6584u;
    {
        const bool branch_taken_0x1b6584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6584u;
            // 0x1b6588: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6584) {
            ctx->pc = 0x1B67D4u;
            goto label_1b67d4;
        }
    }
    ctx->pc = 0x1B658Cu;
label_1b658c:
    // 0x1b658c: 0xc04d0e8  jal         func_1343A0
label_1b6590:
    if (ctx->pc == 0x1B6590u) {
        ctx->pc = 0x1B6590u;
            // 0x1b6590: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B6594u;
        goto label_1b6594;
    }
    ctx->pc = 0x1B658Cu;
    SET_GPR_U32(ctx, 31, 0x1B6594u);
    ctx->pc = 0x1B6590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B658Cu;
            // 0x1b6590: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6594u; }
        if (ctx->pc != 0x1B6594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6594u; }
        if (ctx->pc != 0x1B6594u) { return; }
    }
    ctx->pc = 0x1B6594u;
label_1b6594:
    // 0x1b6594: 0x8e630164  lw          $v1, 0x164($s3)
    ctx->pc = 0x1b6594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_1b6598:
    // 0x1b6598: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1b6598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1b659c:
    // 0x1b659c: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
label_1b65a0:
    if (ctx->pc == 0x1B65A0u) {
        ctx->pc = 0x1B65A4u;
        goto label_1b65a4;
    }
    ctx->pc = 0x1B659Cu;
    {
        const bool branch_taken_0x1b659c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b659c) {
            ctx->pc = 0x1B6790u;
            goto label_1b6790;
        }
    }
    ctx->pc = 0x1B65A4u;
label_1b65a4:
    // 0x1b65a4: 0x8e680154  lw          $t0, 0x154($s3)
    ctx->pc = 0x1b65a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
label_1b65a8:
    // 0x1b65a8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b65a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b65ac:
    // 0x1b65ac: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1b65acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1b65b0:
    // 0x1b65b0: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x1b65b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_1b65b4:
    // 0x1b65b4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1b65b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b65b8:
    // 0x1b65b8: 0xc072324  jal         func_1C8C90
label_1b65bc:
    if (ctx->pc == 0x1B65BCu) {
        ctx->pc = 0x1B65BCu;
            // 0x1b65bc: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B65C0u;
        goto label_1b65c0;
    }
    ctx->pc = 0x1B65B8u;
    SET_GPR_U32(ctx, 31, 0x1B65C0u);
    ctx->pc = 0x1B65BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65B8u;
            // 0x1b65bc: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8C90u;
    if (runtime->hasFunction(0x1C8C90u)) {
        auto targetFn = runtime->lookupFunction(0x1C8C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65C0u; }
        if (ctx->pc != 0x1B65C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatSmoothPass__FPA4_fPA4_fiiii_0x1c8c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65C0u; }
        if (ctx->pc != 0x1B65C0u) { return; }
    }
    ctx->pc = 0x1B65C0u;
label_1b65c0:
    // 0x1b65c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b65c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b65c4:
    // 0x1b65c4: 0x8e620150  lw          $v0, 0x150($s3)
    ctx->pc = 0x1b65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
label_1b65c8:
    // 0x1b65c8: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1b65c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b65cc:
    // 0x1b65cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1b65d0:
    if (ctx->pc == 0x1B65D0u) {
        ctx->pc = 0x1B65D0u;
            // 0x1b65d0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B65D4u;
        goto label_1b65d4;
    }
    ctx->pc = 0x1B65CCu;
    {
        const bool branch_taken_0x1b65cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B65D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65CCu;
            // 0x1b65d0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b65cc) {
            ctx->pc = 0x1B65D8u;
            goto label_1b65d8;
        }
    }
    ctx->pc = 0x1B65D4u;
label_1b65d4:
    // 0x1b65d4: 0xae700150  sw          $s0, 0x150($s3)
    ctx->pc = 0x1b65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 16));
label_1b65d8:
    // 0x1b65d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b65d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b65dc:
    // 0x1b65dc: 0xc04d104  jal         func_134410
label_1b65e0:
    if (ctx->pc == 0x1B65E0u) {
        ctx->pc = 0x1B65E0u;
            // 0x1b65e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B65E4u;
        goto label_1b65e4;
    }
    ctx->pc = 0x1B65DCu;
    SET_GPR_U32(ctx, 31, 0x1B65E4u);
    ctx->pc = 0x1B65E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65DCu;
            // 0x1b65e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65E4u; }
        if (ctx->pc != 0x1B65E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65E4u; }
        if (ctx->pc != 0x1B65E4u) { return; }
    }
    ctx->pc = 0x1B65E4u;
label_1b65e4:
    // 0x1b65e4: 0xc079f5c  jal         func_1E7D70
label_1b65e8:
    if (ctx->pc == 0x1B65E8u) {
        ctx->pc = 0x1B65E8u;
            // 0x1b65e8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B65ECu;
        goto label_1b65ec;
    }
    ctx->pc = 0x1B65E4u;
    SET_GPR_U32(ctx, 31, 0x1B65ECu);
    ctx->pc = 0x1B65E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65E4u;
            // 0x1b65e8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65ECu; }
        if (ctx->pc != 0x1B65ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65ECu; }
        if (ctx->pc != 0x1B65ECu) { return; }
    }
    ctx->pc = 0x1B65ECu;
label_1b65ec:
    // 0x1b65ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b65f0:
    // 0x1b65f0: 0xc04d3b0  jal         func_134EC0
label_1b65f4:
    if (ctx->pc == 0x1B65F4u) {
        ctx->pc = 0x1B65F4u;
            // 0x1b65f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B65F8u;
        goto label_1b65f8;
    }
    ctx->pc = 0x1B65F0u;
    SET_GPR_U32(ctx, 31, 0x1B65F8u);
    ctx->pc = 0x1B65F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65F0u;
            // 0x1b65f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65F8u; }
        if (ctx->pc != 0x1B65F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B65F8u; }
        if (ctx->pc != 0x1B65F8u) { return; }
    }
    ctx->pc = 0x1B65F8u;
label_1b65f8:
    // 0x1b65f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b65f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b65fc:
    // 0x1b65fc: 0xc04d3bc  jal         func_134EF0
label_1b6600:
    if (ctx->pc == 0x1B6600u) {
        ctx->pc = 0x1B6600u;
            // 0x1b6600: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B6604u;
        goto label_1b6604;
    }
    ctx->pc = 0x1B65FCu;
    SET_GPR_U32(ctx, 31, 0x1B6604u);
    ctx->pc = 0x1B6600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B65FCu;
            // 0x1b6600: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6604u; }
        if (ctx->pc != 0x1B6604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6604u; }
        if (ctx->pc != 0x1B6604u) { return; }
    }
    ctx->pc = 0x1B6604u;
label_1b6604:
    // 0x1b6604: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6608:
    // 0x1b6608: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b6608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b660c:
    // 0x1b660c: 0xc04d3c4  jal         func_134F10
label_1b6610:
    if (ctx->pc == 0x1B6610u) {
        ctx->pc = 0x1B6610u;
            // 0x1b6610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6614u;
        goto label_1b6614;
    }
    ctx->pc = 0x1B660Cu;
    SET_GPR_U32(ctx, 31, 0x1B6614u);
    ctx->pc = 0x1B6610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B660Cu;
            // 0x1b6610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6614u; }
        if (ctx->pc != 0x1B6614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6614u; }
        if (ctx->pc != 0x1B6614u) { return; }
    }
    ctx->pc = 0x1B6614u;
label_1b6614:
    // 0x1b6614: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6618:
    // 0x1b6618: 0xc04d3e4  jal         func_134F90
label_1b661c:
    if (ctx->pc == 0x1B661Cu) {
        ctx->pc = 0x1B661Cu;
            // 0x1b661c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B6620u;
        goto label_1b6620;
    }
    ctx->pc = 0x1B6618u;
    SET_GPR_U32(ctx, 31, 0x1B6620u);
    ctx->pc = 0x1B661Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6618u;
            // 0x1b661c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6620u; }
        if (ctx->pc != 0x1B6620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6620u; }
        if (ctx->pc != 0x1B6620u) { return; }
    }
    ctx->pc = 0x1B6620u;
label_1b6620:
    // 0x1b6620: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6624:
    // 0x1b6624: 0xc04d424  jal         func_135090
label_1b6628:
    if (ctx->pc == 0x1B6628u) {
        ctx->pc = 0x1B6628u;
            // 0x1b6628: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B662Cu;
        goto label_1b662c;
    }
    ctx->pc = 0x1B6624u;
    SET_GPR_U32(ctx, 31, 0x1B662Cu);
    ctx->pc = 0x1B6628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6624u;
            // 0x1b6628: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B662Cu; }
        if (ctx->pc != 0x1B662Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B662Cu; }
        if (ctx->pc != 0x1B662Cu) { return; }
    }
    ctx->pc = 0x1B662Cu;
label_1b662c:
    // 0x1b662c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6630:
    // 0x1b6630: 0xc04d430  jal         func_1350C0
label_1b6634:
    if (ctx->pc == 0x1B6634u) {
        ctx->pc = 0x1B6634u;
            // 0x1b6634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B6638u;
        goto label_1b6638;
    }
    ctx->pc = 0x1B6630u;
    SET_GPR_U32(ctx, 31, 0x1B6638u);
    ctx->pc = 0x1B6634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6630u;
            // 0x1b6634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6638u; }
        if (ctx->pc != 0x1B6638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6638u; }
        if (ctx->pc != 0x1B6638u) { return; }
    }
    ctx->pc = 0x1B6638u;
label_1b6638:
    // 0x1b6638: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b663c:
    // 0x1b663c: 0xc04d428  jal         func_1350A0
label_1b6640:
    if (ctx->pc == 0x1B6640u) {
        ctx->pc = 0x1B6640u;
            // 0x1b6640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B6644u;
        goto label_1b6644;
    }
    ctx->pc = 0x1B663Cu;
    SET_GPR_U32(ctx, 31, 0x1B6644u);
    ctx->pc = 0x1B6640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B663Cu;
            // 0x1b6640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6644u; }
        if (ctx->pc != 0x1B6644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6644u; }
        if (ctx->pc != 0x1B6644u) { return; }
    }
    ctx->pc = 0x1B6644u;
label_1b6644:
    // 0x1b6644: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6648:
    // 0x1b6648: 0xc04d44c  jal         func_135130
label_1b664c:
    if (ctx->pc == 0x1B664Cu) {
        ctx->pc = 0x1B664Cu;
            // 0x1b664c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B6650u;
        goto label_1b6650;
    }
    ctx->pc = 0x1B6648u;
    SET_GPR_U32(ctx, 31, 0x1B6650u);
    ctx->pc = 0x1B664Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6648u;
            // 0x1b664c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6650u; }
        if (ctx->pc != 0x1B6650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6650u; }
        if (ctx->pc != 0x1B6650u) { return; }
    }
    ctx->pc = 0x1B6650u;
label_1b6650:
    // 0x1b6650: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6654:
    // 0x1b6654: 0xc04d128  jal         func_1344A0
label_1b6658:
    if (ctx->pc == 0x1B6658u) {
        ctx->pc = 0x1B6658u;
            // 0x1b6658: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1B665Cu;
        goto label_1b665c;
    }
    ctx->pc = 0x1B6654u;
    SET_GPR_U32(ctx, 31, 0x1B665Cu);
    ctx->pc = 0x1B6658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6654u;
            // 0x1b6658: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B665Cu; }
        if (ctx->pc != 0x1B665Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B665Cu; }
        if (ctx->pc != 0x1B665Cu) { return; }
    }
    ctx->pc = 0x1B665Cu;
label_1b665c:
    // 0x1b665c: 0x8e650178  lw          $a1, 0x178($s3)
    ctx->pc = 0x1b665cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_1b6660:
    // 0x1b6660: 0xc04d368  jal         func_134DA0
label_1b6664:
    if (ctx->pc == 0x1B6664u) {
        ctx->pc = 0x1B6664u;
            // 0x1b6664: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B6668u;
        goto label_1b6668;
    }
    ctx->pc = 0x1B6660u;
    SET_GPR_U32(ctx, 31, 0x1B6668u);
    ctx->pc = 0x1B6664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6660u;
            // 0x1b6664: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6668u; }
        if (ctx->pc != 0x1B6668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6668u; }
        if (ctx->pc != 0x1B6668u) { return; }
    }
    ctx->pc = 0x1B6668u;
label_1b6668:
    // 0x1b6668: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b666c:
    // 0x1b666c: 0xc04d3bc  jal         func_134EF0
label_1b6670:
    if (ctx->pc == 0x1B6670u) {
        ctx->pc = 0x1B6670u;
            // 0x1b6670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B6674u;
        goto label_1b6674;
    }
    ctx->pc = 0x1B666Cu;
    SET_GPR_U32(ctx, 31, 0x1B6674u);
    ctx->pc = 0x1B6670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B666Cu;
            // 0x1b6670: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6674u; }
        if (ctx->pc != 0x1B6674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6674u; }
        if (ctx->pc != 0x1B6674u) { return; }
    }
    ctx->pc = 0x1B6674u;
label_1b6674:
    // 0x1b6674: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6678:
    // 0x1b6678: 0xc079ff0  jal         func_1E7FC0
label_1b667c:
    if (ctx->pc == 0x1B667Cu) {
        ctx->pc = 0x1B667Cu;
            // 0x1b667c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B6680u;
        goto label_1b6680;
    }
    ctx->pc = 0x1B6678u;
    SET_GPR_U32(ctx, 31, 0x1B6680u);
    ctx->pc = 0x1B667Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6678u;
            // 0x1b667c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7FC0u;
    if (runtime->hasFunction(0x1E7FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6680u; }
        if (ctx->pc != 0x1B6680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaBlend__10CPreSpriteFi_0x1e7fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6680u; }
        if (ctx->pc != 0x1B6680u) { return; }
    }
    ctx->pc = 0x1B6680u;
label_1b6680:
    // 0x1b6680: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b6680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b6684:
    // 0x1b6684: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6688:
    // 0x1b6688: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b6688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b668c:
    // 0x1b668c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b668cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b6690:
    // 0x1b6690: 0xc04d320  jal         func_134C80
label_1b6694:
    if (ctx->pc == 0x1B6694u) {
        ctx->pc = 0x1B6694u;
            // 0x1b6694: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6698u;
        goto label_1b6698;
    }
    ctx->pc = 0x1B6690u;
    SET_GPR_U32(ctx, 31, 0x1B6698u);
    ctx->pc = 0x1B6694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6690u;
            // 0x1b6694: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6698u; }
        if (ctx->pc != 0x1B6698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6698u; }
        if (ctx->pc != 0x1B6698u) { return; }
    }
    ctx->pc = 0x1B6698u;
label_1b6698:
    // 0x1b6698: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b669c:
    // 0x1b669c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1b669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1b66a0:
    // 0x1b66a0: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x1b66a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1b66a4:
    // 0x1b66a4: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x1b66a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b66a8:
    // 0x1b66a8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1b66a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b66ac:
    // 0x1b66ac: 0x10000030  b           . + 4 + (0x30 << 2)
label_1b66b0:
    if (ctx->pc == 0x1B66B0u) {
        ctx->pc = 0x1B66B0u;
            // 0x1b66b0: 0x119100  sll         $s2, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x1B66B4u;
        goto label_1b66b4;
    }
    ctx->pc = 0x1B66ACu;
    {
        const bool branch_taken_0x1b66ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B66B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66ACu;
            // 0x1b66b0: 0x119100  sll         $s2, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b66ac) {
            ctx->pc = 0x1B6770u;
            goto label_1b6770;
        }
    }
    ctx->pc = 0x1B66B4u;
label_1b66b4:
    // 0x1b66b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b66b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b66b8:
    // 0x1b66b8: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x1b66b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_1b66bc:
    // 0x1b66bc: 0x27a40980  addiu       $a0, $sp, 0x980
    ctx->pc = 0x1b66bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
label_1b66c0:
    // 0x1b66c0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1b66c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_1b66c4:
    // 0x1b66c4: 0x27a50990  addiu       $a1, $sp, 0x990
    ctx->pc = 0x1b66c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
label_1b66c8:
    // 0x1b66c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b66c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b66cc:
    // 0x1b66cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b66ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b66d0:
    // 0x1b66d0: 0xc0516ec  jal         func_145BB0
label_1b66d4:
    if (ctx->pc == 0x1B66D4u) {
        ctx->pc = 0x1B66D4u;
            // 0x1b66d4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1B66D8u;
        goto label_1b66d8;
    }
    ctx->pc = 0x1B66D0u;
    SET_GPR_U32(ctx, 31, 0x1B66D8u);
    ctx->pc = 0x1B66D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66D0u;
            // 0x1b66d4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66D8u; }
        if (ctx->pc != 0x1B66D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66D8u; }
        if (ctx->pc != 0x1B66D8u) { return; }
    }
    ctx->pc = 0x1B66D8u;
label_1b66d8:
    // 0x1b66d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1b66dc:
    if (ctx->pc == 0x1B66DCu) {
        ctx->pc = 0x1B66DCu;
            // 0x1b66dc: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->pc = 0x1B66E0u;
        goto label_1b66e0;
    }
    ctx->pc = 0x1B66D8u;
    {
        const bool branch_taken_0x1b66d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B66DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66D8u;
            // 0x1b66dc: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b66d8) {
            ctx->pc = 0x1B673Cu;
            goto label_1b673c;
        }
    }
    ctx->pc = 0x1B66E0u;
label_1b66e0:
    // 0x1b66e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b66e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b66e4:
    // 0x1b66e4: 0xc0a248c  jal         func_289230
label_1b66e8:
    if (ctx->pc == 0x1B66E8u) {
        ctx->pc = 0x1B66E8u;
            // 0x1b66e8: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x1B66ECu;
        goto label_1b66ec;
    }
    ctx->pc = 0x1B66E4u;
    SET_GPR_U32(ctx, 31, 0x1B66ECu);
    ctx->pc = 0x1B66E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66E4u;
            // 0x1b66e8: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66ECu; }
        if (ctx->pc != 0x1B66ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B66ECu; }
        if (ctx->pc != 0x1B66ECu) { return; }
    }
    ctx->pc = 0x1B66ECu;
label_1b66ec:
    // 0x1b66ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b66ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b66f0:
    // 0x1b66f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b66f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b66f4:
    // 0x1b66f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b66f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b66f8:
    // 0x1b66f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b66f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b66fc:
    // 0x1b66fc: 0xc04d320  jal         func_134C80
label_1b6700:
    if (ctx->pc == 0x1B6700u) {
        ctx->pc = 0x1B6700u;
            // 0x1b6700: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6704u;
        goto label_1b6704;
    }
    ctx->pc = 0x1B66FCu;
    SET_GPR_U32(ctx, 31, 0x1B6704u);
    ctx->pc = 0x1B6700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B66FCu;
            // 0x1b6700: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6704u; }
        if (ctx->pc != 0x1B6704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6704u; }
        if (ctx->pc != 0x1B6704u) { return; }
    }
    ctx->pc = 0x1B6704u;
label_1b6704:
    // 0x1b6704: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6708:
    // 0x1b6708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b670c:
    // 0x1b670c: 0xc04d35c  jal         func_134D70
label_1b6710:
    if (ctx->pc == 0x1B6710u) {
        ctx->pc = 0x1B6710u;
            // 0x1b6710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6714u;
        goto label_1b6714;
    }
    ctx->pc = 0x1B670Cu;
    SET_GPR_U32(ctx, 31, 0x1B6714u);
    ctx->pc = 0x1B6710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B670Cu;
            // 0x1b6710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6714u; }
        if (ctx->pc != 0x1B6714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6714u; }
        if (ctx->pc != 0x1B6714u) { return; }
    }
    ctx->pc = 0x1B6714u;
label_1b6714:
    // 0x1b6714: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6718:
    // 0x1b6718: 0xc04d318  jal         func_134C60
label_1b671c:
    if (ctx->pc == 0x1B671Cu) {
        ctx->pc = 0x1B671Cu;
            // 0x1b671c: 0x27a50980  addiu       $a1, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->pc = 0x1B6720u;
        goto label_1b6720;
    }
    ctx->pc = 0x1B6718u;
    SET_GPR_U32(ctx, 31, 0x1B6720u);
    ctx->pc = 0x1B671Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6718u;
            // 0x1b671c: 0x27a50980  addiu       $a1, $sp, 0x980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6720u; }
        if (ctx->pc != 0x1B6720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6720u; }
        if (ctx->pc != 0x1B6720u) { return; }
    }
    ctx->pc = 0x1B6720u;
label_1b6720:
    // 0x1b6720: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1b6720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1b6724:
    // 0x1b6724: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6728:
    // 0x1b6728: 0xc04d35c  jal         func_134D70
label_1b672c:
    if (ctx->pc == 0x1B672Cu) {
        ctx->pc = 0x1B672Cu;
            // 0x1b672c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6730u;
        goto label_1b6730;
    }
    ctx->pc = 0x1B6728u;
    SET_GPR_U32(ctx, 31, 0x1B6730u);
    ctx->pc = 0x1B672Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6728u;
            // 0x1b672c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6730u; }
        if (ctx->pc != 0x1B6730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6730u; }
        if (ctx->pc != 0x1B6730u) { return; }
    }
    ctx->pc = 0x1B6730u;
label_1b6730:
    // 0x1b6730: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b6734:
    // 0x1b6734: 0xc04d318  jal         func_134C60
label_1b6738:
    if (ctx->pc == 0x1B6738u) {
        ctx->pc = 0x1B6738u;
            // 0x1b6738: 0x27a50990  addiu       $a1, $sp, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
        ctx->pc = 0x1B673Cu;
        goto label_1b673c;
    }
    ctx->pc = 0x1B6734u;
    SET_GPR_U32(ctx, 31, 0x1B673Cu);
    ctx->pc = 0x1B6738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6734u;
            // 0x1b6738: 0x27a50990  addiu       $a1, $sp, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B673Cu; }
        if (ctx->pc != 0x1B673Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B673Cu; }
        if (ctx->pc != 0x1B673Cu) { return; }
    }
    ctx->pc = 0x1B673Cu;
label_1b673c:
    // 0x1b673c: 0x0  nop
    ctx->pc = 0x1b673cu;
    // NOP
label_1b6740:
    // 0x1b6740: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b6744:
    // 0x1b6744: 0xc6620150  lwc1        $f2, 0x150($s3)
    ctx->pc = 0x1b6744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b6748:
    // 0x1b6748: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1b6748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_1b674c:
    // 0x1b674c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b674cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b6750:
    // 0x1b6750: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x1b6750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_1b6754:
    // 0x1b6754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b6754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6758:
    // 0x1b6758: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b6758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1b675c:
    // 0x1b675c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b675cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b6760:
    // 0x1b6760: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1b6760u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_1b6764:
    // 0x1b6764: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b6764u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1b6768:
    // 0x1b6768: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x1b6768u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_1b676c:
    // 0x1b676c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1b676cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1b6770:
    // 0x1b6770: 0x8e620150  lw          $v0, 0x150($s3)
    ctx->pc = 0x1b6770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
label_1b6774:
    // 0x1b6774: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1b6774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b6778:
    // 0x1b6778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b677c:
    // 0x1b677c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1b677cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b6780:
    // 0x1b6780: 0x1020ffcc  beqz        $at, . + 4 + (-0x34 << 2)
label_1b6784:
    if (ctx->pc == 0x1B6784u) {
        ctx->pc = 0x1B6784u;
            // 0x1b6784: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->pc = 0x1B6788u;
        goto label_1b6788;
    }
    ctx->pc = 0x1B6780u;
    {
        const bool branch_taken_0x1b6780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6780u;
            // 0x1b6784: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6780) {
            ctx->pc = 0x1B66B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b66b4;
        }
    }
    ctx->pc = 0x1B6788u;
label_1b6788:
    // 0x1b6788: 0xc04d1a4  jal         func_134690
label_1b678c:
    if (ctx->pc == 0x1B678Cu) {
        ctx->pc = 0x1B678Cu;
            // 0x1b678c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B6790u;
        goto label_1b6790;
    }
    ctx->pc = 0x1B6788u;
    SET_GPR_U32(ctx, 31, 0x1B6790u);
    ctx->pc = 0x1B678Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6788u;
            // 0x1b678c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6790u; }
        if (ctx->pc != 0x1B6790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6790u; }
        if (ctx->pc != 0x1B6790u) { return; }
    }
    ctx->pc = 0x1B6790u;
label_1b6790:
    // 0x1b6790: 0x8e630164  lw          $v1, 0x164($s3)
    ctx->pc = 0x1b6790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_1b6794:
    // 0x1b6794: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1b6794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1b6798:
    // 0x1b6798: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1b679c:
    if (ctx->pc == 0x1B679Cu) {
        ctx->pc = 0x1B67A0u;
        goto label_1b67a0;
    }
    ctx->pc = 0x1B6798u;
    {
        const bool branch_taken_0x1b6798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6798) {
            ctx->pc = 0x1B67D4u;
            goto label_1b67d4;
        }
    }
    ctx->pc = 0x1B67A0u;
label_1b67a0:
    // 0x1b67a0: 0x8e64017c  lw          $a0, 0x17C($s3)
    ctx->pc = 0x1b67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
label_1b67a4:
    // 0x1b67a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b67a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b67a8:
    // 0x1b67a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b67a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b67ac:
    // 0x1b67ac: 0x320f809  jalr        $t9
label_1b67b0:
    if (ctx->pc == 0x1B67B0u) {
        ctx->pc = 0x1B67B0u;
            // 0x1b67b0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x1B67B4u;
        goto label_1b67b4;
    }
    ctx->pc = 0x1B67ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B67B4u);
        ctx->pc = 0x1B67B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67ACu;
            // 0x1b67b0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B67B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B67B4u; }
            if (ctx->pc != 0x1B67B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B67B4u;
label_1b67b4:
    // 0x1b67b4: 0x27a409a0  addiu       $a0, $sp, 0x9A0
    ctx->pc = 0x1b67b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
label_1b67b8:
    // 0x1b67b8: 0xc04c16c  jal         func_1305B0
label_1b67bc:
    if (ctx->pc == 0x1B67BCu) {
        ctx->pc = 0x1B67BCu;
            // 0x1b67bc: 0x26650040  addiu       $a1, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->pc = 0x1B67C0u;
        goto label_1b67c0;
    }
    ctx->pc = 0x1B67B8u;
    SET_GPR_U32(ctx, 31, 0x1B67C0u);
    ctx->pc = 0x1B67BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67B8u;
            // 0x1b67bc: 0x26650040  addiu       $a1, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1305B0u;
    if (runtime->hasFunction(0x1305B0u)) {
        auto targetFn = runtime->lookupFunction(0x1305B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67C0u; }
        if (ctx->pc != 0x1B67C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLookAtMatrixZ__FPA4_fPf_0x1305b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67C0u; }
        if (ctx->pc != 0x1B67C0u) { return; }
    }
    ctx->pc = 0x1B67C0u;
label_1b67c0:
    // 0x1b67c0: 0x8e64017c  lw          $a0, 0x17C($s3)
    ctx->pc = 0x1b67c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
label_1b67c4:
    // 0x1b67c4: 0xc04dd64  jal         func_137590
label_1b67c8:
    if (ctx->pc == 0x1B67C8u) {
        ctx->pc = 0x1B67C8u;
            // 0x1b67c8: 0x27a509a0  addiu       $a1, $sp, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
        ctx->pc = 0x1B67CCu;
        goto label_1b67cc;
    }
    ctx->pc = 0x1B67C4u;
    SET_GPR_U32(ctx, 31, 0x1B67CCu);
    ctx->pc = 0x1B67C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67C4u;
            // 0x1b67c8: 0x27a509a0  addiu       $a1, $sp, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67CCu; }
        if (ctx->pc != 0x1B67CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67CCu; }
        if (ctx->pc != 0x1B67CCu) { return; }
    }
    ctx->pc = 0x1B67CCu;
label_1b67cc:
    // 0x1b67cc: 0xc050bf4  jal         func_142FD0
label_1b67d0:
    if (ctx->pc == 0x1B67D0u) {
        ctx->pc = 0x1B67D0u;
            // 0x1b67d0: 0x8e64017c  lw          $a0, 0x17C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
        ctx->pc = 0x1B67D4u;
        goto label_1b67d4;
    }
    ctx->pc = 0x1B67CCu;
    SET_GPR_U32(ctx, 31, 0x1B67D4u);
    ctx->pc = 0x1B67D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67CCu;
            // 0x1b67d0: 0x8e64017c  lw          $a0, 0x17C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67D4u; }
        if (ctx->pc != 0x1B67D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B67D4u; }
        if (ctx->pc != 0x1B67D4u) { return; }
    }
    ctx->pc = 0x1B67D4u;
label_1b67d4:
    // 0x1b67d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b67d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b67d8:
    // 0x1b67d8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b67d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b67dc:
    // 0x1b67dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b67dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b67e0:
    // 0x1b67e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b67e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b67e4:
    // 0x1b67e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b67e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b67e8:
    // 0x1b67e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b67e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b67ec:
    // 0x1b67ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b67ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b67f0:
    // 0x1b67f0: 0x3e00008  jr          $ra
label_1b67f4:
    if (ctx->pc == 0x1B67F4u) {
        ctx->pc = 0x1B67F4u;
            // 0x1b67f4: 0x27bd09e0  addiu       $sp, $sp, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2528));
        ctx->pc = 0x1B67F8u;
        goto label_fallthrough_0x1b67f0;
    }
    ctx->pc = 0x1B67F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B67F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67F0u;
            // 0x1b67f4: 0x27bd09e0  addiu       $sp, $sp, 0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b67f0:
    ctx->pc = 0x1B67F8u;
}
