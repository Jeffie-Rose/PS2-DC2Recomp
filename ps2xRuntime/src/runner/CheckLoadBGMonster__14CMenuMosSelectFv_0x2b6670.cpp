#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLoadBGMonster__14CMenuMosSelectFv
// Address: 0x2b6670 - 0x2b6a74
void CheckLoadBGMonster__14CMenuMosSelectFv_0x2b6670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLoadBGMonster__14CMenuMosSelectFv_0x2b6670");
#endif

    switch (ctx->pc) {
        case 0x2b6670u: goto label_2b6670;
        case 0x2b6674u: goto label_2b6674;
        case 0x2b6678u: goto label_2b6678;
        case 0x2b667cu: goto label_2b667c;
        case 0x2b6680u: goto label_2b6680;
        case 0x2b6684u: goto label_2b6684;
        case 0x2b6688u: goto label_2b6688;
        case 0x2b668cu: goto label_2b668c;
        case 0x2b6690u: goto label_2b6690;
        case 0x2b6694u: goto label_2b6694;
        case 0x2b6698u: goto label_2b6698;
        case 0x2b669cu: goto label_2b669c;
        case 0x2b66a0u: goto label_2b66a0;
        case 0x2b66a4u: goto label_2b66a4;
        case 0x2b66a8u: goto label_2b66a8;
        case 0x2b66acu: goto label_2b66ac;
        case 0x2b66b0u: goto label_2b66b0;
        case 0x2b66b4u: goto label_2b66b4;
        case 0x2b66b8u: goto label_2b66b8;
        case 0x2b66bcu: goto label_2b66bc;
        case 0x2b66c0u: goto label_2b66c0;
        case 0x2b66c4u: goto label_2b66c4;
        case 0x2b66c8u: goto label_2b66c8;
        case 0x2b66ccu: goto label_2b66cc;
        case 0x2b66d0u: goto label_2b66d0;
        case 0x2b66d4u: goto label_2b66d4;
        case 0x2b66d8u: goto label_2b66d8;
        case 0x2b66dcu: goto label_2b66dc;
        case 0x2b66e0u: goto label_2b66e0;
        case 0x2b66e4u: goto label_2b66e4;
        case 0x2b66e8u: goto label_2b66e8;
        case 0x2b66ecu: goto label_2b66ec;
        case 0x2b66f0u: goto label_2b66f0;
        case 0x2b66f4u: goto label_2b66f4;
        case 0x2b66f8u: goto label_2b66f8;
        case 0x2b66fcu: goto label_2b66fc;
        case 0x2b6700u: goto label_2b6700;
        case 0x2b6704u: goto label_2b6704;
        case 0x2b6708u: goto label_2b6708;
        case 0x2b670cu: goto label_2b670c;
        case 0x2b6710u: goto label_2b6710;
        case 0x2b6714u: goto label_2b6714;
        case 0x2b6718u: goto label_2b6718;
        case 0x2b671cu: goto label_2b671c;
        case 0x2b6720u: goto label_2b6720;
        case 0x2b6724u: goto label_2b6724;
        case 0x2b6728u: goto label_2b6728;
        case 0x2b672cu: goto label_2b672c;
        case 0x2b6730u: goto label_2b6730;
        case 0x2b6734u: goto label_2b6734;
        case 0x2b6738u: goto label_2b6738;
        case 0x2b673cu: goto label_2b673c;
        case 0x2b6740u: goto label_2b6740;
        case 0x2b6744u: goto label_2b6744;
        case 0x2b6748u: goto label_2b6748;
        case 0x2b674cu: goto label_2b674c;
        case 0x2b6750u: goto label_2b6750;
        case 0x2b6754u: goto label_2b6754;
        case 0x2b6758u: goto label_2b6758;
        case 0x2b675cu: goto label_2b675c;
        case 0x2b6760u: goto label_2b6760;
        case 0x2b6764u: goto label_2b6764;
        case 0x2b6768u: goto label_2b6768;
        case 0x2b676cu: goto label_2b676c;
        case 0x2b6770u: goto label_2b6770;
        case 0x2b6774u: goto label_2b6774;
        case 0x2b6778u: goto label_2b6778;
        case 0x2b677cu: goto label_2b677c;
        case 0x2b6780u: goto label_2b6780;
        case 0x2b6784u: goto label_2b6784;
        case 0x2b6788u: goto label_2b6788;
        case 0x2b678cu: goto label_2b678c;
        case 0x2b6790u: goto label_2b6790;
        case 0x2b6794u: goto label_2b6794;
        case 0x2b6798u: goto label_2b6798;
        case 0x2b679cu: goto label_2b679c;
        case 0x2b67a0u: goto label_2b67a0;
        case 0x2b67a4u: goto label_2b67a4;
        case 0x2b67a8u: goto label_2b67a8;
        case 0x2b67acu: goto label_2b67ac;
        case 0x2b67b0u: goto label_2b67b0;
        case 0x2b67b4u: goto label_2b67b4;
        case 0x2b67b8u: goto label_2b67b8;
        case 0x2b67bcu: goto label_2b67bc;
        case 0x2b67c0u: goto label_2b67c0;
        case 0x2b67c4u: goto label_2b67c4;
        case 0x2b67c8u: goto label_2b67c8;
        case 0x2b67ccu: goto label_2b67cc;
        case 0x2b67d0u: goto label_2b67d0;
        case 0x2b67d4u: goto label_2b67d4;
        case 0x2b67d8u: goto label_2b67d8;
        case 0x2b67dcu: goto label_2b67dc;
        case 0x2b67e0u: goto label_2b67e0;
        case 0x2b67e4u: goto label_2b67e4;
        case 0x2b67e8u: goto label_2b67e8;
        case 0x2b67ecu: goto label_2b67ec;
        case 0x2b67f0u: goto label_2b67f0;
        case 0x2b67f4u: goto label_2b67f4;
        case 0x2b67f8u: goto label_2b67f8;
        case 0x2b67fcu: goto label_2b67fc;
        case 0x2b6800u: goto label_2b6800;
        case 0x2b6804u: goto label_2b6804;
        case 0x2b6808u: goto label_2b6808;
        case 0x2b680cu: goto label_2b680c;
        case 0x2b6810u: goto label_2b6810;
        case 0x2b6814u: goto label_2b6814;
        case 0x2b6818u: goto label_2b6818;
        case 0x2b681cu: goto label_2b681c;
        case 0x2b6820u: goto label_2b6820;
        case 0x2b6824u: goto label_2b6824;
        case 0x2b6828u: goto label_2b6828;
        case 0x2b682cu: goto label_2b682c;
        case 0x2b6830u: goto label_2b6830;
        case 0x2b6834u: goto label_2b6834;
        case 0x2b6838u: goto label_2b6838;
        case 0x2b683cu: goto label_2b683c;
        case 0x2b6840u: goto label_2b6840;
        case 0x2b6844u: goto label_2b6844;
        case 0x2b6848u: goto label_2b6848;
        case 0x2b684cu: goto label_2b684c;
        case 0x2b6850u: goto label_2b6850;
        case 0x2b6854u: goto label_2b6854;
        case 0x2b6858u: goto label_2b6858;
        case 0x2b685cu: goto label_2b685c;
        case 0x2b6860u: goto label_2b6860;
        case 0x2b6864u: goto label_2b6864;
        case 0x2b6868u: goto label_2b6868;
        case 0x2b686cu: goto label_2b686c;
        case 0x2b6870u: goto label_2b6870;
        case 0x2b6874u: goto label_2b6874;
        case 0x2b6878u: goto label_2b6878;
        case 0x2b687cu: goto label_2b687c;
        case 0x2b6880u: goto label_2b6880;
        case 0x2b6884u: goto label_2b6884;
        case 0x2b6888u: goto label_2b6888;
        case 0x2b688cu: goto label_2b688c;
        case 0x2b6890u: goto label_2b6890;
        case 0x2b6894u: goto label_2b6894;
        case 0x2b6898u: goto label_2b6898;
        case 0x2b689cu: goto label_2b689c;
        case 0x2b68a0u: goto label_2b68a0;
        case 0x2b68a4u: goto label_2b68a4;
        case 0x2b68a8u: goto label_2b68a8;
        case 0x2b68acu: goto label_2b68ac;
        case 0x2b68b0u: goto label_2b68b0;
        case 0x2b68b4u: goto label_2b68b4;
        case 0x2b68b8u: goto label_2b68b8;
        case 0x2b68bcu: goto label_2b68bc;
        case 0x2b68c0u: goto label_2b68c0;
        case 0x2b68c4u: goto label_2b68c4;
        case 0x2b68c8u: goto label_2b68c8;
        case 0x2b68ccu: goto label_2b68cc;
        case 0x2b68d0u: goto label_2b68d0;
        case 0x2b68d4u: goto label_2b68d4;
        case 0x2b68d8u: goto label_2b68d8;
        case 0x2b68dcu: goto label_2b68dc;
        case 0x2b68e0u: goto label_2b68e0;
        case 0x2b68e4u: goto label_2b68e4;
        case 0x2b68e8u: goto label_2b68e8;
        case 0x2b68ecu: goto label_2b68ec;
        case 0x2b68f0u: goto label_2b68f0;
        case 0x2b68f4u: goto label_2b68f4;
        case 0x2b68f8u: goto label_2b68f8;
        case 0x2b68fcu: goto label_2b68fc;
        case 0x2b6900u: goto label_2b6900;
        case 0x2b6904u: goto label_2b6904;
        case 0x2b6908u: goto label_2b6908;
        case 0x2b690cu: goto label_2b690c;
        case 0x2b6910u: goto label_2b6910;
        case 0x2b6914u: goto label_2b6914;
        case 0x2b6918u: goto label_2b6918;
        case 0x2b691cu: goto label_2b691c;
        case 0x2b6920u: goto label_2b6920;
        case 0x2b6924u: goto label_2b6924;
        case 0x2b6928u: goto label_2b6928;
        case 0x2b692cu: goto label_2b692c;
        case 0x2b6930u: goto label_2b6930;
        case 0x2b6934u: goto label_2b6934;
        case 0x2b6938u: goto label_2b6938;
        case 0x2b693cu: goto label_2b693c;
        case 0x2b6940u: goto label_2b6940;
        case 0x2b6944u: goto label_2b6944;
        case 0x2b6948u: goto label_2b6948;
        case 0x2b694cu: goto label_2b694c;
        case 0x2b6950u: goto label_2b6950;
        case 0x2b6954u: goto label_2b6954;
        case 0x2b6958u: goto label_2b6958;
        case 0x2b695cu: goto label_2b695c;
        case 0x2b6960u: goto label_2b6960;
        case 0x2b6964u: goto label_2b6964;
        case 0x2b6968u: goto label_2b6968;
        case 0x2b696cu: goto label_2b696c;
        case 0x2b6970u: goto label_2b6970;
        case 0x2b6974u: goto label_2b6974;
        case 0x2b6978u: goto label_2b6978;
        case 0x2b697cu: goto label_2b697c;
        case 0x2b6980u: goto label_2b6980;
        case 0x2b6984u: goto label_2b6984;
        case 0x2b6988u: goto label_2b6988;
        case 0x2b698cu: goto label_2b698c;
        case 0x2b6990u: goto label_2b6990;
        case 0x2b6994u: goto label_2b6994;
        case 0x2b6998u: goto label_2b6998;
        case 0x2b699cu: goto label_2b699c;
        case 0x2b69a0u: goto label_2b69a0;
        case 0x2b69a4u: goto label_2b69a4;
        case 0x2b69a8u: goto label_2b69a8;
        case 0x2b69acu: goto label_2b69ac;
        case 0x2b69b0u: goto label_2b69b0;
        case 0x2b69b4u: goto label_2b69b4;
        case 0x2b69b8u: goto label_2b69b8;
        case 0x2b69bcu: goto label_2b69bc;
        case 0x2b69c0u: goto label_2b69c0;
        case 0x2b69c4u: goto label_2b69c4;
        case 0x2b69c8u: goto label_2b69c8;
        case 0x2b69ccu: goto label_2b69cc;
        case 0x2b69d0u: goto label_2b69d0;
        case 0x2b69d4u: goto label_2b69d4;
        case 0x2b69d8u: goto label_2b69d8;
        case 0x2b69dcu: goto label_2b69dc;
        case 0x2b69e0u: goto label_2b69e0;
        case 0x2b69e4u: goto label_2b69e4;
        case 0x2b69e8u: goto label_2b69e8;
        case 0x2b69ecu: goto label_2b69ec;
        case 0x2b69f0u: goto label_2b69f0;
        case 0x2b69f4u: goto label_2b69f4;
        case 0x2b69f8u: goto label_2b69f8;
        case 0x2b69fcu: goto label_2b69fc;
        case 0x2b6a00u: goto label_2b6a00;
        case 0x2b6a04u: goto label_2b6a04;
        case 0x2b6a08u: goto label_2b6a08;
        case 0x2b6a0cu: goto label_2b6a0c;
        case 0x2b6a10u: goto label_2b6a10;
        case 0x2b6a14u: goto label_2b6a14;
        case 0x2b6a18u: goto label_2b6a18;
        case 0x2b6a1cu: goto label_2b6a1c;
        case 0x2b6a20u: goto label_2b6a20;
        case 0x2b6a24u: goto label_2b6a24;
        case 0x2b6a28u: goto label_2b6a28;
        case 0x2b6a2cu: goto label_2b6a2c;
        case 0x2b6a30u: goto label_2b6a30;
        case 0x2b6a34u: goto label_2b6a34;
        case 0x2b6a38u: goto label_2b6a38;
        case 0x2b6a3cu: goto label_2b6a3c;
        case 0x2b6a40u: goto label_2b6a40;
        case 0x2b6a44u: goto label_2b6a44;
        case 0x2b6a48u: goto label_2b6a48;
        case 0x2b6a4cu: goto label_2b6a4c;
        case 0x2b6a50u: goto label_2b6a50;
        case 0x2b6a54u: goto label_2b6a54;
        case 0x2b6a58u: goto label_2b6a58;
        case 0x2b6a5cu: goto label_2b6a5c;
        case 0x2b6a60u: goto label_2b6a60;
        case 0x2b6a64u: goto label_2b6a64;
        case 0x2b6a68u: goto label_2b6a68;
        case 0x2b6a6cu: goto label_2b6a6c;
        case 0x2b6a70u: goto label_2b6a70;
        default: break;
    }

    ctx->pc = 0x2b6670u;

label_2b6670:
    // 0x2b6670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b6670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2b6674:
    // 0x2b6674: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b6674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b6678:
    // 0x2b6678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b6678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b667c:
    // 0x2b667c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b6680:
    // 0x2b6680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b6684:
    // 0x2b6684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b6684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b6688:
    // 0x2b6688: 0x84846762  lh          $a0, 0x6762($a0)
    ctx->pc = 0x2b6688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26466)));
label_2b668c:
    // 0x2b668c: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
label_2b6690:
    if (ctx->pc == 0x2B6690u) {
        ctx->pc = 0x2B6690u;
            // 0x2b6690: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B6694u;
        goto label_2b6694;
    }
    ctx->pc = 0x2B668Cu;
    {
        const bool branch_taken_0x2b668c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B668Cu;
            // 0x2b6690: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b668c) {
            ctx->pc = 0x2B692Cu;
            goto label_2b692c;
        }
    }
    ctx->pc = 0x2B6694u;
label_2b6694:
    // 0x2b6694: 0x108300b7  beq         $a0, $v1, . + 4 + (0xB7 << 2)
label_2b6698:
    if (ctx->pc == 0x2B6698u) {
        ctx->pc = 0x2B6698u;
            // 0x2b6698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B669Cu;
        goto label_2b669c;
    }
    ctx->pc = 0x2B6694u;
    {
        const bool branch_taken_0x2b6694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6694u;
            // 0x2b6698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6694) {
            ctx->pc = 0x2B6974u;
            goto label_2b6974;
        }
    }
    ctx->pc = 0x2B669Cu;
label_2b669c:
    // 0x2b669c: 0x10820046  beq         $a0, $v0, . + 4 + (0x46 << 2)
label_2b66a0:
    if (ctx->pc == 0x2B66A0u) {
        ctx->pc = 0x2B66A0u;
            // 0x2b66a0: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2B66A4u;
        goto label_2b66a4;
    }
    ctx->pc = 0x2B669Cu;
    {
        const bool branch_taken_0x2b669c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B66A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B669Cu;
            // 0x2b66a0: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b669c) {
            ctx->pc = 0x2B67B8u;
            goto label_2b67b8;
        }
    }
    ctx->pc = 0x2B66A4u;
label_2b66a4:
    // 0x2b66a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2b66a8:
    if (ctx->pc == 0x2B66A8u) {
        ctx->pc = 0x2B66ACu;
        goto label_2b66ac;
    }
    ctx->pc = 0x2B66A4u;
    {
        const bool branch_taken_0x2b66a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b66a4) {
            ctx->pc = 0x2B66B4u;
            goto label_2b66b4;
        }
    }
    ctx->pc = 0x2B66ACu;
label_2b66ac:
    // 0x2b66ac: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_2b66b0:
    if (ctx->pc == 0x2B66B0u) {
        ctx->pc = 0x2B66B0u;
            // 0x2b66b0: 0x8e394690  lw          $t9, 0x4690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18064)));
        ctx->pc = 0x2B66B4u;
        goto label_2b66b4;
    }
    ctx->pc = 0x2B66ACu;
    {
        const bool branch_taken_0x2b66ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B66ACu;
            // 0x2b66b0: 0x8e394690  lw          $t9, 0x4690($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66ac) {
            ctx->pc = 0x2B6978u;
            goto label_2b6978;
        }
    }
    ctx->pc = 0x2B66B4u;
label_2b66b4:
    // 0x2b66b4: 0x86226760  lh          $v0, 0x6760($s1)
    ctx->pc = 0x2b66b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26464)));
label_2b66b8:
    // 0x2b66b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b66bc:
    // 0x2b66bc: 0xa6226760  sh          $v0, 0x6760($s1)
    ctx->pc = 0x2b66bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26464), (uint16_t)GPR_U32(ctx, 2));
label_2b66c0:
    // 0x2b66c0: 0x86226760  lh          $v0, 0x6760($s1)
    ctx->pc = 0x2b66c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26464)));
label_2b66c4:
    // 0x2b66c4: 0x1c4000ab  bgtz        $v0, . + 4 + (0xAB << 2)
label_2b66c8:
    if (ctx->pc == 0x2B66C8u) {
        ctx->pc = 0x2B66CCu;
        goto label_2b66cc;
    }
    ctx->pc = 0x2B66C4u;
    {
        const bool branch_taken_0x2b66c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2b66c4) {
            ctx->pc = 0x2B6974u;
            goto label_2b6974;
        }
    }
    ctx->pc = 0x2B66CCu;
label_2b66cc:
    // 0x2b66cc: 0x8e24465c  lw          $a0, 0x465C($s1)
    ctx->pc = 0x2b66ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18012)));
label_2b66d0:
    // 0x2b66d0: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
label_2b66d4:
    if (ctx->pc == 0x2B66D4u) {
        ctx->pc = 0x2B66D4u;
            // 0x2b66d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B66D8u;
        goto label_2b66d8;
    }
    ctx->pc = 0x2B66D0u;
    {
        const bool branch_taken_0x2b66d0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2B66D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B66D0u;
            // 0x2b66d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66d0) {
            ctx->pc = 0x2B66ECu;
            goto label_2b66ec;
        }
    }
    ctx->pc = 0x2B66D8u;
label_2b66d8:
    // 0x2b66d8: 0xae224664  sw          $v0, 0x4664($s1)
    ctx->pc = 0x2b66d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18020), GPR_U32(ctx, 2));
label_2b66dc:
    // 0x2b66dc: 0xa6226762  sh          $v0, 0x6762($s1)
    ctx->pc = 0x2b66dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26466), (uint16_t)GPR_U32(ctx, 2));
label_2b66e0:
    // 0x2b66e0: 0x8e224678  lw          $v0, 0x4678($s1)
    ctx->pc = 0x2b66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18040)));
label_2b66e4:
    // 0x2b66e4: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_2b66e8:
    if (ctx->pc == 0x2B66E8u) {
        ctx->pc = 0x2B66E8u;
            // 0x2b66e8: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B66ECu;
        goto label_2b66ec;
    }
    ctx->pc = 0x2B66E4u;
    {
        const bool branch_taken_0x2b66e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B66E4u;
            // 0x2b66e8: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66e4) {
            ctx->pc = 0x2B6974u;
            goto label_2b6974;
        }
    }
    ctx->pc = 0x2B66ECu;
label_2b66ec:
    // 0x2b66ec: 0x8e224664  lw          $v0, 0x4664($s1)
    ctx->pc = 0x2b66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18020)));
label_2b66f0:
    // 0x2b66f0: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_2b66f4:
    if (ctx->pc == 0x2B66F4u) {
        ctx->pc = 0x2B66F8u;
        goto label_2b66f8;
    }
    ctx->pc = 0x2B66F0u;
    {
        const bool branch_taken_0x2b66f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b66f0) {
            ctx->pc = 0x2B6704u;
            goto label_2b6704;
        }
    }
    ctx->pc = 0x2B66F8u;
label_2b66f8:
    // 0x2b66f8: 0xa6236762  sh          $v1, 0x6762($s1)
    ctx->pc = 0x2b66f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26466), (uint16_t)GPR_U32(ctx, 3));
label_2b66fc:
    // 0x2b66fc: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_2b6700:
    if (ctx->pc == 0x2B6700u) {
        ctx->pc = 0x2B6700u;
            // 0x2b6700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6704u;
        goto label_2b6704;
    }
    ctx->pc = 0x2B66FCu;
    {
        const bool branch_taken_0x2b66fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B66FCu;
            // 0x2b6700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66fc) {
            ctx->pc = 0x2B6A60u;
            goto label_2b6a60;
        }
    }
    ctx->pc = 0x2B6704u;
label_2b6704:
    // 0x2b6704: 0xc0523b8  jal         func_148EE0
label_2b6708:
    if (ctx->pc == 0x2B6708u) {
        ctx->pc = 0x2B670Cu;
        goto label_2b670c;
    }
    ctx->pc = 0x2B6704u;
    SET_GPR_U32(ctx, 31, 0x2B670Cu);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B670Cu; }
        if (ctx->pc != 0x2B670Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B670Cu; }
        if (ctx->pc != 0x2B670Cu) { return; }
    }
    ctx->pc = 0x2B670Cu;
label_2b670c:
    // 0x2b670c: 0xc052330  jal         func_148CC0
label_2b6710:
    if (ctx->pc == 0x2B6710u) {
        ctx->pc = 0x2B6714u;
        goto label_2b6714;
    }
    ctx->pc = 0x2B670Cu;
    SET_GPR_U32(ctx, 31, 0x2B6714u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6714u; }
        if (ctx->pc != 0x2B6714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6714u; }
        if (ctx->pc != 0x2B6714u) { return; }
    }
    ctx->pc = 0x2B6714u;
label_2b6714:
    // 0x2b6714: 0x8e23465c  lw          $v1, 0x465C($s1)
    ctx->pc = 0x2b6714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18012)));
label_2b6718:
    // 0x2b6718: 0x3c1001f1  lui         $s0, 0x1F1
    ctx->pc = 0x2b6718u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)497 << 16));
label_2b671c:
    // 0x2b671c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b671cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b6720:
    // 0x2b6720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6724:
    // 0x2b6724: 0x2610cea0  addiu       $s0, $s0, -0x3160
    ctx->pc = 0x2b6724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954656));
label_2b6728:
    // 0x2b6728: 0xae234664  sw          $v1, 0x4664($s1)
    ctx->pc = 0x2b6728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18020), GPR_U32(ctx, 3));
label_2b672c:
    // 0x2b672c: 0x83839b77  lb          $v1, -0x6489($gp)
    ctx->pc = 0x2b672cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2b6730:
    // 0x2b6730: 0xac20cec4  sw          $zero, -0x313C($at)
    ctx->pc = 0x2b6730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954692), GPR_U32(ctx, 0));
label_2b6734:
    // 0x2b6734: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b6734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b6738:
    // 0x2b6738: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2b673c:
    if (ctx->pc == 0x2B673Cu) {
        ctx->pc = 0x2B673Cu;
            // 0x2b673c: 0xac20cebc  sw          $zero, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 0));
        ctx->pc = 0x2B6740u;
        goto label_2b6740;
    }
    ctx->pc = 0x2B6738u;
    {
        const bool branch_taken_0x2b6738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B673Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6738u;
            // 0x2b673c: 0xac20cebc  sw          $zero, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6738) {
            ctx->pc = 0x2B675Cu;
            goto label_2b675c;
        }
    }
    ctx->pc = 0x2B6740u;
label_2b6740:
    // 0x2b6740: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b6740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b6744:
    // 0x2b6744: 0xc0a0c9c  jal         func_283270
label_2b6748:
    if (ctx->pc == 0x2B6748u) {
        ctx->pc = 0x2B6748u;
            // 0x2b6748: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B674Cu;
        goto label_2b674c;
    }
    ctx->pc = 0x2B6744u;
    SET_GPR_U32(ctx, 31, 0x2B674Cu);
    ctx->pc = 0x2B6748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6744u;
            // 0x2b6748: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B674Cu; }
        if (ctx->pc != 0x2B674Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B674Cu; }
        if (ctx->pc != 0x2B674Cu) { return; }
    }
    ctx->pc = 0x2B674Cu;
label_2b674c:
    // 0x2b674c: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b6750:
    // 0x2b6750: 0xc0a0c64  jal         func_283190
label_2b6754:
    if (ctx->pc == 0x2B6754u) {
        ctx->pc = 0x2B6754u;
            // 0x2b6754: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B6758u;
        goto label_2b6758;
    }
    ctx->pc = 0x2B6750u;
    SET_GPR_U32(ctx, 31, 0x2B6758u);
    ctx->pc = 0x2B6754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6750u;
            // 0x2b6754: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6758u; }
        if (ctx->pc != 0x2B6758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6758u; }
        if (ctx->pc != 0x2B6758u) { return; }
    }
    ctx->pc = 0x2B6758u;
label_2b6758:
    // 0x2b6758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b675c:
    // 0x2b675c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2b675cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2b6760:
    // 0x2b6760: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2b6760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2b6764:
    // 0x2b6764: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2b6764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2b6768:
    // 0x2b6768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b676c:
    // 0x2b676c: 0x8e264664  lw          $a2, 0x4664($s1)
    ctx->pc = 0x2b676cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18020)));
label_2b6770:
    // 0x2b6770: 0x24a5cf30  addiu       $a1, $a1, -0x30D0
    ctx->pc = 0x2b6770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
label_2b6774:
    // 0x2b6774: 0xc0aebc4  jal         func_2BAF10
label_2b6778:
    if (ctx->pc == 0x2B6778u) {
        ctx->pc = 0x2B6778u;
            // 0x2b6778: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B677Cu;
        goto label_2b677c;
    }
    ctx->pc = 0x2B6774u;
    SET_GPR_U32(ctx, 31, 0x2B677Cu);
    ctx->pc = 0x2B6778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6774u;
            // 0x2b6778: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF10u;
    if (runtime->hasFunction(0x2BAF10u)) {
        auto targetFn = runtime->lookupFunction(0x2BAF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B677Cu; }
        if (ctx->pc != 0x2B677Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterLoadBG__FP9mgCMemoryPP17MENU_BGREAD_INFO2ii_0x2baf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B677Cu; }
        if (ctx->pc != 0x2B677Cu) { return; }
    }
    ctx->pc = 0x2B677Cu;
label_2b677c:
    // 0x2b677c: 0x8e224678  lw          $v0, 0x4678($s1)
    ctx->pc = 0x2b677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18040)));
label_2b6780:
    // 0x2b6780: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2b6780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2b6784:
    // 0x2b6784: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b6784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6788:
    // 0x2b6788: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2b6788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_2b678c:
    // 0x2b678c: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2b678cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2b6790:
    // 0x2b6790: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_2b6794:
    if (ctx->pc == 0x2B6794u) {
        ctx->pc = 0x2B6794u;
            // 0x2b6794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6798u;
        goto label_2b6798;
    }
    ctx->pc = 0x2B6790u;
    {
        const bool branch_taken_0x2b6790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B6794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6790u;
            // 0x2b6794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6790) {
            ctx->pc = 0x2B67A0u;
            goto label_2b67a0;
        }
    }
    ctx->pc = 0x2B6798u;
label_2b6798:
    // 0x2b6798: 0xc0ae7c8  jal         func_2B9F20
label_2b679c:
    if (ctx->pc == 0x2B679Cu) {
        ctx->pc = 0x2B679Cu;
            // 0x2b679c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B67A0u;
        goto label_2b67a0;
    }
    ctx->pc = 0x2B6798u;
    SET_GPR_U32(ctx, 31, 0x2B67A0u);
    ctx->pc = 0x2B679Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6798u;
            // 0x2b679c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9F20u;
    if (runtime->hasFunction(0x2B9F20u)) {
        auto targetFn = runtime->lookupFunction(0x2B9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B67A0u; }
        if (ctx->pc != 0x2B67A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundLoad__FP9mgCMemoryii_0x2b9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B67A0u; }
        if (ctx->pc != 0x2B67A0u) { return; }
    }
    ctx->pc = 0x2B67A0u;
label_2b67a0:
    // 0x2b67a0: 0x86226762  lh          $v0, 0x6762($s1)
    ctx->pc = 0x2b67a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26466)));
label_2b67a4:
    // 0x2b67a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b67a8:
    // 0x2b67a8: 0xa6226762  sh          $v0, 0x6762($s1)
    ctx->pc = 0x2b67a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26466), (uint16_t)GPR_U32(ctx, 2));
label_2b67ac:
    // 0x2b67ac: 0x8e224678  lw          $v0, 0x4678($s1)
    ctx->pc = 0x2b67acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18040)));
label_2b67b0:
    // 0x2b67b0: 0x10000070  b           . + 4 + (0x70 << 2)
label_2b67b4:
    if (ctx->pc == 0x2B67B4u) {
        ctx->pc = 0x2B67B4u;
            // 0x2b67b4: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B67B8u;
        goto label_2b67b8;
    }
    ctx->pc = 0x2B67B0u;
    {
        const bool branch_taken_0x2b67b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B67B0u;
            // 0x2b67b4: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67b0) {
            ctx->pc = 0x2B6974u;
            goto label_2b6974;
        }
    }
    ctx->pc = 0x2B67B8u;
label_2b67b8:
    // 0x2b67b8: 0x8c22cf30  lw          $v0, -0x30D0($at)
    ctx->pc = 0x2b67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954800)));
label_2b67bc:
    // 0x2b67bc: 0x80420070  lb          $v0, 0x70($v0)
    ctx->pc = 0x2b67bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_2b67c0:
    // 0x2b67c0: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_2b67c4:
    if (ctx->pc == 0x2B67C4u) {
        ctx->pc = 0x2B67C4u;
            // 0x2b67c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B67C8u;
        goto label_2b67c8;
    }
    ctx->pc = 0x2B67C0u;
    {
        const bool branch_taken_0x2b67c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B67C0u;
            // 0x2b67c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67c0) {
            ctx->pc = 0x2B6924u;
            goto label_2b6924;
        }
    }
    ctx->pc = 0x2B67C8u;
label_2b67c8:
    // 0x2b67c8: 0xc05239c  jal         func_148E70
label_2b67cc:
    if (ctx->pc == 0x2B67CCu) {
        ctx->pc = 0x2B67D0u;
        goto label_2b67d0;
    }
    ctx->pc = 0x2B67C8u;
    SET_GPR_U32(ctx, 31, 0x2B67D0u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B67D0u; }
        if (ctx->pc != 0x2B67D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B67D0u; }
        if (ctx->pc != 0x2B67D0u) { return; }
    }
    ctx->pc = 0x2B67D0u;
label_2b67d0:
    // 0x2b67d0: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
label_2b67d4:
    if (ctx->pc == 0x2B67D4u) {
        ctx->pc = 0x2B67D4u;
            // 0x2b67d4: 0x3c0701f1  lui         $a3, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2B67D8u;
        goto label_2b67d8;
    }
    ctx->pc = 0x2B67D0u;
    {
        const bool branch_taken_0x2b67d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B67D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B67D0u;
            // 0x2b67d4: 0x3c0701f1  lui         $a3, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67d0) {
            ctx->pc = 0x2B6920u;
            goto label_2b6920;
        }
    }
    ctx->pc = 0x2B67D8u;
label_2b67d8:
    // 0x2b67d8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b67d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2b67dc:
    // 0x2b67dc: 0x24e7cf90  addiu       $a3, $a3, -0x3070
    ctx->pc = 0x2b67dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954896));
label_2b67e0:
    // 0x2b67e0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2b67e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b67e4:
    // 0x2b67e4: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x2b67e4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2b67e8:
    // 0x2b67e8: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x2b67e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b67ec:
    // 0x2b67ec: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x2b67ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 16)));
label_2b67f0:
    // 0x2b67f0: 0x26224690  addiu       $v0, $s1, 0x4690
    ctx->pc = 0x2b67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18064));
label_2b67f4:
    // 0x2b67f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b67f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b67f8:
    // 0x2b67f8: 0x2484cf30  addiu       $a0, $a0, -0x30D0
    ctx->pc = 0x2b67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954800));
label_2b67fc:
    // 0x2b67fc: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2b67fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_2b6800:
    // 0x2b6800: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x2b6800u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
label_2b6804:
    // 0x2b6804: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2b6804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_2b6808:
    // 0x2b6808: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2b6808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2b680c:
    // 0x2b680c: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x2b680cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2b6810:
    // 0x2b6810: 0x8427d5fc  lh          $a3, -0x2A04($at)
    ctx->pc = 0x2b6810u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
label_2b6814:
    // 0x2b6814: 0xc0aec40  jal         func_2BB100
label_2b6818:
    if (ctx->pc == 0x2B6818u) {
        ctx->pc = 0x2B6818u;
            // 0x2b6818: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B681Cu;
        goto label_2b681c;
    }
    ctx->pc = 0x2B6814u;
    SET_GPR_U32(ctx, 31, 0x2B681Cu);
    ctx->pc = 0x2B6818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6814u;
            // 0x2b6818: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB100u;
    if (runtime->hasFunction(0x2BB100u)) {
        auto targetFn = runtime->lookupFunction(0x2BB100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B681Cu; }
        if (ctx->pc != 0x2B681Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterLoadBGCheck__FPP17MENU_BGREAD_INFO2PP12CActionCharaii_0x2bb100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B681Cu; }
        if (ctx->pc != 0x2B681Cu) { return; }
    }
    ctx->pc = 0x2B681Cu;
label_2b681c:
    // 0x2b681c: 0x83829b77  lb          $v0, -0x6489($gp)
    ctx->pc = 0x2b681cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2b6820:
    // 0x2b6820: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_2b6824:
    if (ctx->pc == 0x2B6824u) {
        ctx->pc = 0x2B6828u;
        goto label_2b6828;
    }
    ctx->pc = 0x2B6820u;
    {
        const bool branch_taken_0x2b6820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6820) {
            ctx->pc = 0x2B68A4u;
            goto label_2b68a4;
        }
    }
    ctx->pc = 0x2B6828u;
label_2b6828:
    // 0x2b6828: 0xc0ad8b4  jal         func_2B62D0
label_2b682c:
    if (ctx->pc == 0x2B682Cu) {
        ctx->pc = 0x2B682Cu;
            // 0x2b682c: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2B6830u;
        goto label_2b6830;
    }
    ctx->pc = 0x2B6828u;
    SET_GPR_U32(ctx, 31, 0x2B6830u);
    ctx->pc = 0x2B682Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6828u;
            // 0x2b682c: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B62D0u;
    if (runtime->hasFunction(0x2B62D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B62D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6830u; }
        if (ctx->pc != 0x2B6830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterScaleCheck__FP11CCharacter2_0x2b62d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6830u; }
        if (ctx->pc != 0x2B6830u) { return; }
    }
    ctx->pc = 0x2B6830u;
label_2b6830:
    // 0x2b6830: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b6830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b6834:
    // 0x2b6834: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2b6834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2b6838:
    // 0x2b6838: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2b6838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_2b683c:
    // 0x2b683c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b683cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b6840:
    // 0x2b6840: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b6840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b6844:
    // 0x2b6844: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2b6844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2b6848:
    // 0x2b6848: 0x320f809  jalr        $t9
label_2b684c:
    if (ctx->pc == 0x2B684Cu) {
        ctx->pc = 0x2B684Cu;
            // 0x2b684c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x2B6850u;
        goto label_2b6850;
    }
    ctx->pc = 0x2B6848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B6850u);
        ctx->pc = 0x2B684Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6848u;
            // 0x2b684c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6850u; }
            if (ctx->pc != 0x2B6850u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6850u;
label_2b6850:
    // 0x2b6850: 0x8e244678  lw          $a0, 0x4678($s1)
    ctx->pc = 0x2b6850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18040)));
label_2b6854:
    // 0x2b6854: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b6854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6858:
    // 0x2b6858: 0x26254690  addiu       $a1, $s1, 0x4690
    ctx->pc = 0x2b6858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 18064));
label_2b685c:
    // 0x2b685c: 0xc0896c8  jal         func_225B20
label_2b6860:
    if (ctx->pc == 0x2B6860u) {
        ctx->pc = 0x2B6860u;
            // 0x2b6860: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B6864u;
        goto label_2b6864;
    }
    ctx->pc = 0x2B685Cu;
    SET_GPR_U32(ctx, 31, 0x2B6864u);
    ctx->pc = 0x2B6860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B685Cu;
            // 0x2b6860: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6864u; }
        if (ctx->pc != 0x2B6864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6864u; }
        if (ctx->pc != 0x2B6864u) { return; }
    }
    ctx->pc = 0x2B6864u;
label_2b6864:
    // 0x2b6864: 0x8e224678  lw          $v0, 0x4678($s1)
    ctx->pc = 0x2b6864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18040)));
label_2b6868:
    // 0x2b6868: 0x2403fff2  addiu       $v1, $zero, -0xE
    ctx->pc = 0x2b6868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
label_2b686c:
    // 0x2b686c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6870:
    // 0x2b6870: 0x26244690  addiu       $a0, $s1, 0x4690
    ctx->pc = 0x2b6870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18064));
label_2b6874:
    // 0x2b6874: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2b6874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_2b6878:
    // 0x2b6878: 0x8e224678  lw          $v0, 0x4678($s1)
    ctx->pc = 0x2b6878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18040)));
label_2b687c:
    // 0x2b687c: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x2b687cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
label_2b6880:
    // 0x2b6880: 0x8e394690  lw          $t9, 0x4690($s1)
    ctx->pc = 0x2b6880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18064)));
label_2b6884:
    // 0x2b6884: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x2b6884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_2b6888:
    // 0x2b6888: 0x320f809  jalr        $t9
label_2b688c:
    if (ctx->pc == 0x2B688Cu) {
        ctx->pc = 0x2B688Cu;
            // 0x2b688c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6890u;
        goto label_2b6890;
    }
    ctx->pc = 0x2B6888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B6890u);
        ctx->pc = 0x2B688Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6888u;
            // 0x2b688c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6890u; }
            if (ctx->pc != 0x2B6890u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6890u;
label_2b6890:
    // 0x2b6890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6894:
    // 0x2b6894: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2b6894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_2b6898:
    // 0x2b6898: 0xae2346e4  sw          $v1, 0x46E4($s1)
    ctx->pc = 0x2b6898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18148), GPR_U32(ctx, 3));
label_2b689c:
    // 0x2b689c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b689cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2b68a0:
    // 0x2b68a0: 0xae2246ec  sw          $v0, 0x46EC($s1)
    ctx->pc = 0x2b68a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18156), GPR_U32(ctx, 2));
label_2b68a4:
    // 0x2b68a4: 0x86236762  lh          $v1, 0x6762($s1)
    ctx->pc = 0x2b68a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26466)));
label_2b68a8:
    // 0x2b68a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b68ac:
    // 0x2b68ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b68acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2b68b0:
    // 0x2b68b0: 0xa6236762  sh          $v1, 0x6762($s1)
    ctx->pc = 0x2b68b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26466), (uint16_t)GPR_U32(ctx, 3));
label_2b68b4:
    // 0x2b68b4: 0x83839b77  lb          $v1, -0x6489($gp)
    ctx->pc = 0x2b68b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941559)));
label_2b68b8:
    // 0x2b68b8: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_2b68bc:
    if (ctx->pc == 0x2B68BCu) {
        ctx->pc = 0x2B68C0u;
        goto label_2b68c0;
    }
    ctx->pc = 0x2B68B8u;
    {
        const bool branch_taken_0x2b68b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b68b8) {
            ctx->pc = 0x2B6920u;
            goto label_2b6920;
        }
    }
    ctx->pc = 0x2B68C0u;
label_2b68c0:
    // 0x2b68c0: 0x86236762  lh          $v1, 0x6762($s1)
    ctx->pc = 0x2b68c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26466)));
label_2b68c4:
    // 0x2b68c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b68c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b68c8:
    // 0x2b68c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b68c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b68cc:
    // 0x2b68cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2b68d0:
    // 0x2b68d0: 0xa6236762  sh          $v1, 0x6762($s1)
    ctx->pc = 0x2b68d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26466), (uint16_t)GPR_U32(ctx, 3));
label_2b68d4:
    // 0x2b68d4: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b68d8:
    // 0x2b68d8: 0xc0a0ed8  jal         func_283B60
label_2b68dc:
    if (ctx->pc == 0x2B68DCu) {
        ctx->pc = 0x2B68DCu;
            // 0x2b68dc: 0xaf828488  sw          $v0, -0x7B78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935688), GPR_U32(ctx, 2));
        ctx->pc = 0x2B68E0u;
        goto label_2b68e0;
    }
    ctx->pc = 0x2B68D8u;
    SET_GPR_U32(ctx, 31, 0x2B68E0u);
    ctx->pc = 0x2B68DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B68D8u;
            // 0x2b68dc: 0xaf828488  sw          $v0, -0x7B78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B68E0u; }
        if (ctx->pc != 0x2B68E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B68E0u; }
        if (ctx->pc != 0x2B68E0u) { return; }
    }
    ctx->pc = 0x2B68E0u;
label_2b68e0:
    // 0x2b68e0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2b68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2b68e4:
    // 0x2b68e4: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b68e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b68e8:
    // 0x2b68e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b68e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b68ec:
    // 0x2b68ec: 0xc0ae808  jal         func_2BA020
label_2b68f0:
    if (ctx->pc == 0x2B68F0u) {
        ctx->pc = 0x2B68F0u;
            // 0x2b68f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B68F4u;
        goto label_2b68f4;
    }
    ctx->pc = 0x2B68ECu;
    SET_GPR_U32(ctx, 31, 0x2B68F4u);
    ctx->pc = 0x2B68F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B68ECu;
            // 0x2b68f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA020u;
    if (runtime->hasFunction(0x2BA020u)) {
        auto targetFn = runtime->lookupFunction(0x2BA020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B68F4u; }
        if (ctx->pc != 0x2B68F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundEnter__FP6CSceneP12CActionCharai_0x2ba020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B68F4u; }
        if (ctx->pc != 0x2B68F4u) { return; }
    }
    ctx->pc = 0x2B68F4u;
label_2b68f4:
    // 0x2b68f4: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b68f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b68f8:
    // 0x2b68f8: 0xc0a0c64  jal         func_283190
label_2b68fc:
    if (ctx->pc == 0x2B68FCu) {
        ctx->pc = 0x2B68FCu;
            // 0x2b68fc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B6900u;
        goto label_2b6900;
    }
    ctx->pc = 0x2B68F8u;
    SET_GPR_U32(ctx, 31, 0x2B6900u);
    ctx->pc = 0x2B68FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B68F8u;
            // 0x2b68fc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6900u; }
        if (ctx->pc != 0x2B6900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6900u; }
        if (ctx->pc != 0x2B6900u) { return; }
    }
    ctx->pc = 0x2B6900u;
label_2b6900:
    // 0x2b6900: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2b6900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2b6904:
    // 0x2b6904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6908:
    // 0x2b6908: 0xc052330  jal         func_148CC0
label_2b690c:
    if (ctx->pc == 0x2B690Cu) {
        ctx->pc = 0x2B690Cu;
            // 0x2b690c: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x2B6910u;
        goto label_2b6910;
    }
    ctx->pc = 0x2B6908u;
    SET_GPR_U32(ctx, 31, 0x2B6910u);
    ctx->pc = 0x2B690Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6908u;
            // 0x2b690c: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6910u; }
        if (ctx->pc != 0x2B6910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6910u; }
        if (ctx->pc != 0x2B6910u) { return; }
    }
    ctx->pc = 0x2B6910u;
label_2b6910:
    // 0x2b6910: 0x8e254664  lw          $a1, 0x4664($s1)
    ctx->pc = 0x2b6910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18020)));
label_2b6914:
    // 0x2b6914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6918:
    // 0x2b6918: 0xc0ad8d0  jal         func_2B6340
label_2b691c:
    if (ctx->pc == 0x2B691Cu) {
        ctx->pc = 0x2B691Cu;
            // 0x2b691c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B6920u;
        goto label_2b6920;
    }
    ctx->pc = 0x2B6918u;
    SET_GPR_U32(ctx, 31, 0x2B6920u);
    ctx->pc = 0x2B691Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6918u;
            // 0x2b691c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6340u;
    if (runtime->hasFunction(0x2B6340u)) {
        auto targetFn = runtime->lookupFunction(0x2B6340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6920u; }
        if (ctx->pc != 0x2B6920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterEffectRead__FP9mgCMemoryii_0x2b6340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6920u; }
        if (ctx->pc != 0x2B6920u) { return; }
    }
    ctx->pc = 0x2B6920u;
label_2b6920:
    // 0x2b6920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6924:
    // 0x2b6924: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2b6928:
    if (ctx->pc == 0x2B6928u) {
        ctx->pc = 0x2B6928u;
            // 0x2b6928: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2B692Cu;
        goto label_2b692c;
    }
    ctx->pc = 0x2B6924u;
    {
        const bool branch_taken_0x2b6924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6924u;
            // 0x2b6928: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6924) {
            ctx->pc = 0x2B6A64u;
            goto label_2b6a64;
        }
    }
    ctx->pc = 0x2B692Cu;
label_2b692c:
    // 0x2b692c: 0xc05239c  jal         func_148E70
label_2b6930:
    if (ctx->pc == 0x2B6930u) {
        ctx->pc = 0x2B6934u;
        goto label_2b6934;
    }
    ctx->pc = 0x2B692Cu;
    SET_GPR_U32(ctx, 31, 0x2B6934u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6934u; }
        if (ctx->pc != 0x2B6934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6934u; }
        if (ctx->pc != 0x2B6934u) { return; }
    }
    ctx->pc = 0x2B6934u;
label_2b6934:
    // 0x2b6934: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2b6938:
    if (ctx->pc == 0x2B6938u) {
        ctx->pc = 0x2B693Cu;
        goto label_2b693c;
    }
    ctx->pc = 0x2B6934u;
    {
        const bool branch_taken_0x2b6934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6934) {
            ctx->pc = 0x2B6974u;
            goto label_2b6974;
        }
    }
    ctx->pc = 0x2B693Cu;
label_2b693c:
    // 0x2b693c: 0x86226762  lh          $v0, 0x6762($s1)
    ctx->pc = 0x2b693cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26466)));
label_2b6940:
    // 0x2b6940: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b6940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2b6944:
    // 0x2b6944: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2b6944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
label_2b6948:
    // 0x2b6948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b694c:
    // 0x2b694c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b6950:
    // 0x2b6950: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2b6954:
    if (ctx->pc == 0x2B6954u) {
        ctx->pc = 0x2B6954u;
            // 0x2b6954: 0xa6226762  sh          $v0, 0x6762($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 26466), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B6958u;
        goto label_2b6958;
    }
    ctx->pc = 0x2B6950u;
    {
        const bool branch_taken_0x2b6950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6950u;
            // 0x2b6954: 0xa6226762  sh          $v0, 0x6762($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 26466), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6950) {
            ctx->pc = 0x2B6968u;
            goto label_2b6968;
        }
    }
    ctx->pc = 0x2B6958u;
label_2b6958:
    // 0x2b6958: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2b6958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2b695c:
    // 0x2b695c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2b695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2b6960:
    // 0x2b6960: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b6960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2b6964:
    // 0x2b6964: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2b6964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b6968:
    // 0x2b6968: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b6968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b696c:
    // 0x2b696c: 0xc0ad954  jal         func_2B6550
label_2b6970:
    if (ctx->pc == 0x2B6970u) {
        ctx->pc = 0x2B6970u;
            // 0x2b6970: 0x240600aa  addiu       $a2, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->pc = 0x2B6974u;
        goto label_2b6974;
    }
    ctx->pc = 0x2B696Cu;
    SET_GPR_U32(ctx, 31, 0x2B6974u);
    ctx->pc = 0x2B6970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B696Cu;
            // 0x2b6970: 0x240600aa  addiu       $a2, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6550u;
    if (runtime->hasFunction(0x2B6550u)) {
        auto targetFn = runtime->lookupFunction(0x2B6550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6974u; }
        if (ctx->pc != 0x2B6974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterEffectEnter__FP6CSceneP1i_0x2b6550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6974u; }
        if (ctx->pc != 0x2B6974u) { return; }
    }
    ctx->pc = 0x2B6974u;
label_2b6974:
    // 0x2b6974: 0x8e394690  lw          $t9, 0x4690($s1)
    ctx->pc = 0x2b6974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18064)));
label_2b6978:
    // 0x2b6978: 0x26244690  addiu       $a0, $s1, 0x4690
    ctx->pc = 0x2b6978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18064));
label_2b697c:
    // 0x2b697c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2b697cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2b6980:
    // 0x2b6980: 0x320f809  jalr        $t9
label_2b6984:
    if (ctx->pc == 0x2B6984u) {
        ctx->pc = 0x2B6984u;
            // 0x2b6984: 0x26254680  addiu       $a1, $s1, 0x4680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 18048));
        ctx->pc = 0x2B6988u;
        goto label_2b6988;
    }
    ctx->pc = 0x2B6980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B6988u);
        ctx->pc = 0x2B6984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6980u;
            // 0x2b6984: 0x26254680  addiu       $a1, $s1, 0x4680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 18048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6988u; }
            if (ctx->pc != 0x2B6988u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6988u;
label_2b6988:
    // 0x2b6988: 0x9223467c  lbu         $v1, 0x467C($s1)
    ctx->pc = 0x2b6988u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18044)));
label_2b698c:
    // 0x2b698c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_2b6990:
    if (ctx->pc == 0x2B6990u) {
        ctx->pc = 0x2B6990u;
            // 0x2b6990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B6994u;
        goto label_2b6994;
    }
    ctx->pc = 0x2B698Cu;
    {
        const bool branch_taken_0x2b698c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B698Cu;
            // 0x2b6990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b698c) {
            ctx->pc = 0x2B69C4u;
            goto label_2b69c4;
        }
    }
    ctx->pc = 0x2B6994u;
label_2b6994:
    // 0x2b6994: 0xc6224680  lwc1        $f2, 0x4680($s1)
    ctx->pc = 0x2b6994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 18048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b6998:
    // 0x2b6998: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2b6998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_2b699c:
    // 0x2b699c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b699cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b69a0:
    // 0x2b69a0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2b69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2b69a4:
    // 0x2b69a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b69a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b69a8:
    // 0x2b69a8: 0x0  nop
    ctx->pc = 0x2b69a8u;
    // NOP
label_2b69ac:
    // 0x2b69ac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2b69acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2b69b0:
    // 0x2b69b0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b69b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2b69b4:
    // 0x2b69b4: 0x0  nop
    ctx->pc = 0x2b69b4u;
    // NOP
label_2b69b8:
    // 0x2b69b8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2b69b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b69bc:
    // 0x2b69bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_2b69c0:
    if (ctx->pc == 0x2B69C0u) {
        ctx->pc = 0x2B69C0u;
            // 0x2b69c0: 0xe6204680  swc1        $f0, 0x4680($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 18048), bits); }
        ctx->pc = 0x2B69C4u;
        goto label_2b69c4;
    }
    ctx->pc = 0x2B69BCu;
    {
        const bool branch_taken_0x2b69bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B69C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B69BCu;
            // 0x2b69c0: 0xe6204680  swc1        $f0, 0x4680($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 18048), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b69bc) {
            ctx->pc = 0x2B69F4u;
            goto label_2b69f4;
        }
    }
    ctx->pc = 0x2B69C4u;
label_2b69c4:
    // 0x2b69c4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_2b69c8:
    if (ctx->pc == 0x2B69C8u) {
        ctx->pc = 0x2B69CCu;
        goto label_2b69cc;
    }
    ctx->pc = 0x2B69C4u;
    {
        const bool branch_taken_0x2b69c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b69c4) {
            ctx->pc = 0x2B69F4u;
            goto label_2b69f4;
        }
    }
    ctx->pc = 0x2B69CCu;
label_2b69cc:
    // 0x2b69cc: 0xc6224680  lwc1        $f2, 0x4680($s1)
    ctx->pc = 0x2b69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 18048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b69d0:
    // 0x2b69d0: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x2b69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
label_2b69d4:
    // 0x2b69d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b69d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b69d8:
    // 0x2b69d8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2b69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_2b69dc:
    // 0x2b69dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b69dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b69e0:
    // 0x2b69e0: 0x0  nop
    ctx->pc = 0x2b69e0u;
    // NOP
label_2b69e4:
    // 0x2b69e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2b69e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2b69e8:
    // 0x2b69e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b69e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2b69ec:
    // 0x2b69ec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2b69ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b69f0:
    // 0x2b69f0: 0xe6204680  swc1        $f0, 0x4680($s1)
    ctx->pc = 0x2b69f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 18048), bits); }
label_2b69f4:
    // 0x2b69f4: 0x8e394690  lw          $t9, 0x4690($s1)
    ctx->pc = 0x2b69f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18064)));
label_2b69f8:
    // 0x2b69f8: 0x26244690  addiu       $a0, $s1, 0x4690
    ctx->pc = 0x2b69f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18064));
label_2b69fc:
    // 0x2b69fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2b69fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2b6a00:
    // 0x2b6a00: 0x320f809  jalr        $t9
label_2b6a04:
    if (ctx->pc == 0x2B6A04u) {
        ctx->pc = 0x2B6A04u;
            // 0x2b6a04: 0x26254680  addiu       $a1, $s1, 0x4680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 18048));
        ctx->pc = 0x2B6A08u;
        goto label_2b6a08;
    }
    ctx->pc = 0x2B6A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B6A08u);
        ctx->pc = 0x2B6A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6A00u;
            // 0x2b6a04: 0x26254680  addiu       $a1, $s1, 0x4680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 18048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6A08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A08u; }
            if (ctx->pc != 0x2B6A08u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6A08u;
label_2b6a08:
    // 0x2b6a08: 0x8e224678  lw          $v0, 0x4678($s1)
    ctx->pc = 0x2b6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18040)));
label_2b6a0c:
    // 0x2b6a0c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2b6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2b6a10:
    // 0x2b6a10: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x2b6a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_2b6a14:
    // 0x2b6a14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2b6a18:
    if (ctx->pc == 0x2B6A18u) {
        ctx->pc = 0x2B6A1Cu;
        goto label_2b6a1c;
    }
    ctx->pc = 0x2B6A14u;
    {
        const bool branch_taken_0x2b6a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6a14) {
            ctx->pc = 0x2B6A34u;
            goto label_2b6a34;
        }
    }
    ctx->pc = 0x2B6A1Cu;
label_2b6a1c:
    // 0x2b6a1c: 0x8e394690  lw          $t9, 0x4690($s1)
    ctx->pc = 0x2b6a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18064)));
label_2b6a20:
    // 0x2b6a20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b6a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6a24:
    // 0x2b6a24: 0x26244690  addiu       $a0, $s1, 0x4690
    ctx->pc = 0x2b6a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18064));
label_2b6a28:
    // 0x2b6a28: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x2b6a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_2b6a2c:
    // 0x2b6a2c: 0x320f809  jalr        $t9
label_2b6a30:
    if (ctx->pc == 0x2B6A30u) {
        ctx->pc = 0x2B6A30u;
            // 0x2b6a30: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A34u;
        goto label_2b6a34;
    }
    ctx->pc = 0x2B6A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B6A34u);
        ctx->pc = 0x2B6A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6A2Cu;
            // 0x2b6a30: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6A34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A34u; }
            if (ctx->pc != 0x2B6A34u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6A34u;
label_2b6a34:
    // 0x2b6a34: 0x8222466c  lb          $v0, 0x466C($s1)
    ctx->pc = 0x2b6a34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 18028)));
label_2b6a38:
    // 0x2b6a38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b6a3c:
    if (ctx->pc == 0x2B6A3Cu) {
        ctx->pc = 0x2B6A40u;
        goto label_2b6a40;
    }
    ctx->pc = 0x2B6A38u;
    {
        const bool branch_taken_0x2b6a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6a38) {
            ctx->pc = 0x2B6A50u;
            goto label_2b6a50;
        }
    }
    ctx->pc = 0x2B6A40u;
label_2b6a40:
    // 0x2b6a40: 0x8e394690  lw          $t9, 0x4690($s1)
    ctx->pc = 0x2b6a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18064)));
label_2b6a44:
    // 0x2b6a44: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2b6a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2b6a48:
    // 0x2b6a48: 0x320f809  jalr        $t9
label_2b6a4c:
    if (ctx->pc == 0x2B6A4Cu) {
        ctx->pc = 0x2B6A4Cu;
            // 0x2b6a4c: 0x26244690  addiu       $a0, $s1, 0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18064));
        ctx->pc = 0x2B6A50u;
        goto label_2b6a50;
    }
    ctx->pc = 0x2B6A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B6A50u);
        ctx->pc = 0x2B6A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6A48u;
            // 0x2b6a4c: 0x26244690  addiu       $a0, $s1, 0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18064));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6A50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A50u; }
            if (ctx->pc != 0x2B6A50u) { return; }
        }
        }
    }
    ctx->pc = 0x2B6A50u;
label_2b6a50:
    // 0x2b6a50: 0x8223466c  lb          $v1, 0x466C($s1)
    ctx->pc = 0x2b6a50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 18028)));
label_2b6a54:
    // 0x2b6a54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6a58:
    // 0x2b6a58: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2b6a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2b6a5c:
    // 0x2b6a5c: 0xa223466c  sb          $v1, 0x466C($s1)
    ctx->pc = 0x2b6a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18028), (uint8_t)GPR_U32(ctx, 3));
label_2b6a60:
    // 0x2b6a60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b6a64:
    // 0x2b6a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b6a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6a68:
    // 0x2b6a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6a6c:
    // 0x2b6a6c: 0x3e00008  jr          $ra
label_2b6a70:
    if (ctx->pc == 0x2B6A70u) {
        ctx->pc = 0x2B6A70u;
            // 0x2b6a70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2B6A74u;
        goto label_fallthrough_0x2b6a6c;
    }
    ctx->pc = 0x2B6A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6A6Cu;
            // 0x2b6a70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b6a6c:
    ctx->pc = 0x2B6A74u;
}
