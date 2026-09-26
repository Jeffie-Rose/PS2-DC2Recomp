#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNetaCircle__11CMenuInventFii
// Address: 0x201890 - 0x201c20
void SetNetaCircle__11CMenuInventFii_0x201890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNetaCircle__11CMenuInventFii_0x201890");
#endif

    switch (ctx->pc) {
        case 0x201890u: goto label_201890;
        case 0x201894u: goto label_201894;
        case 0x201898u: goto label_201898;
        case 0x20189cu: goto label_20189c;
        case 0x2018a0u: goto label_2018a0;
        case 0x2018a4u: goto label_2018a4;
        case 0x2018a8u: goto label_2018a8;
        case 0x2018acu: goto label_2018ac;
        case 0x2018b0u: goto label_2018b0;
        case 0x2018b4u: goto label_2018b4;
        case 0x2018b8u: goto label_2018b8;
        case 0x2018bcu: goto label_2018bc;
        case 0x2018c0u: goto label_2018c0;
        case 0x2018c4u: goto label_2018c4;
        case 0x2018c8u: goto label_2018c8;
        case 0x2018ccu: goto label_2018cc;
        case 0x2018d0u: goto label_2018d0;
        case 0x2018d4u: goto label_2018d4;
        case 0x2018d8u: goto label_2018d8;
        case 0x2018dcu: goto label_2018dc;
        case 0x2018e0u: goto label_2018e0;
        case 0x2018e4u: goto label_2018e4;
        case 0x2018e8u: goto label_2018e8;
        case 0x2018ecu: goto label_2018ec;
        case 0x2018f0u: goto label_2018f0;
        case 0x2018f4u: goto label_2018f4;
        case 0x2018f8u: goto label_2018f8;
        case 0x2018fcu: goto label_2018fc;
        case 0x201900u: goto label_201900;
        case 0x201904u: goto label_201904;
        case 0x201908u: goto label_201908;
        case 0x20190cu: goto label_20190c;
        case 0x201910u: goto label_201910;
        case 0x201914u: goto label_201914;
        case 0x201918u: goto label_201918;
        case 0x20191cu: goto label_20191c;
        case 0x201920u: goto label_201920;
        case 0x201924u: goto label_201924;
        case 0x201928u: goto label_201928;
        case 0x20192cu: goto label_20192c;
        case 0x201930u: goto label_201930;
        case 0x201934u: goto label_201934;
        case 0x201938u: goto label_201938;
        case 0x20193cu: goto label_20193c;
        case 0x201940u: goto label_201940;
        case 0x201944u: goto label_201944;
        case 0x201948u: goto label_201948;
        case 0x20194cu: goto label_20194c;
        case 0x201950u: goto label_201950;
        case 0x201954u: goto label_201954;
        case 0x201958u: goto label_201958;
        case 0x20195cu: goto label_20195c;
        case 0x201960u: goto label_201960;
        case 0x201964u: goto label_201964;
        case 0x201968u: goto label_201968;
        case 0x20196cu: goto label_20196c;
        case 0x201970u: goto label_201970;
        case 0x201974u: goto label_201974;
        case 0x201978u: goto label_201978;
        case 0x20197cu: goto label_20197c;
        case 0x201980u: goto label_201980;
        case 0x201984u: goto label_201984;
        case 0x201988u: goto label_201988;
        case 0x20198cu: goto label_20198c;
        case 0x201990u: goto label_201990;
        case 0x201994u: goto label_201994;
        case 0x201998u: goto label_201998;
        case 0x20199cu: goto label_20199c;
        case 0x2019a0u: goto label_2019a0;
        case 0x2019a4u: goto label_2019a4;
        case 0x2019a8u: goto label_2019a8;
        case 0x2019acu: goto label_2019ac;
        case 0x2019b0u: goto label_2019b0;
        case 0x2019b4u: goto label_2019b4;
        case 0x2019b8u: goto label_2019b8;
        case 0x2019bcu: goto label_2019bc;
        case 0x2019c0u: goto label_2019c0;
        case 0x2019c4u: goto label_2019c4;
        case 0x2019c8u: goto label_2019c8;
        case 0x2019ccu: goto label_2019cc;
        case 0x2019d0u: goto label_2019d0;
        case 0x2019d4u: goto label_2019d4;
        case 0x2019d8u: goto label_2019d8;
        case 0x2019dcu: goto label_2019dc;
        case 0x2019e0u: goto label_2019e0;
        case 0x2019e4u: goto label_2019e4;
        case 0x2019e8u: goto label_2019e8;
        case 0x2019ecu: goto label_2019ec;
        case 0x2019f0u: goto label_2019f0;
        case 0x2019f4u: goto label_2019f4;
        case 0x2019f8u: goto label_2019f8;
        case 0x2019fcu: goto label_2019fc;
        case 0x201a00u: goto label_201a00;
        case 0x201a04u: goto label_201a04;
        case 0x201a08u: goto label_201a08;
        case 0x201a0cu: goto label_201a0c;
        case 0x201a10u: goto label_201a10;
        case 0x201a14u: goto label_201a14;
        case 0x201a18u: goto label_201a18;
        case 0x201a1cu: goto label_201a1c;
        case 0x201a20u: goto label_201a20;
        case 0x201a24u: goto label_201a24;
        case 0x201a28u: goto label_201a28;
        case 0x201a2cu: goto label_201a2c;
        case 0x201a30u: goto label_201a30;
        case 0x201a34u: goto label_201a34;
        case 0x201a38u: goto label_201a38;
        case 0x201a3cu: goto label_201a3c;
        case 0x201a40u: goto label_201a40;
        case 0x201a44u: goto label_201a44;
        case 0x201a48u: goto label_201a48;
        case 0x201a4cu: goto label_201a4c;
        case 0x201a50u: goto label_201a50;
        case 0x201a54u: goto label_201a54;
        case 0x201a58u: goto label_201a58;
        case 0x201a5cu: goto label_201a5c;
        case 0x201a60u: goto label_201a60;
        case 0x201a64u: goto label_201a64;
        case 0x201a68u: goto label_201a68;
        case 0x201a6cu: goto label_201a6c;
        case 0x201a70u: goto label_201a70;
        case 0x201a74u: goto label_201a74;
        case 0x201a78u: goto label_201a78;
        case 0x201a7cu: goto label_201a7c;
        case 0x201a80u: goto label_201a80;
        case 0x201a84u: goto label_201a84;
        case 0x201a88u: goto label_201a88;
        case 0x201a8cu: goto label_201a8c;
        case 0x201a90u: goto label_201a90;
        case 0x201a94u: goto label_201a94;
        case 0x201a98u: goto label_201a98;
        case 0x201a9cu: goto label_201a9c;
        case 0x201aa0u: goto label_201aa0;
        case 0x201aa4u: goto label_201aa4;
        case 0x201aa8u: goto label_201aa8;
        case 0x201aacu: goto label_201aac;
        case 0x201ab0u: goto label_201ab0;
        case 0x201ab4u: goto label_201ab4;
        case 0x201ab8u: goto label_201ab8;
        case 0x201abcu: goto label_201abc;
        case 0x201ac0u: goto label_201ac0;
        case 0x201ac4u: goto label_201ac4;
        case 0x201ac8u: goto label_201ac8;
        case 0x201accu: goto label_201acc;
        case 0x201ad0u: goto label_201ad0;
        case 0x201ad4u: goto label_201ad4;
        case 0x201ad8u: goto label_201ad8;
        case 0x201adcu: goto label_201adc;
        case 0x201ae0u: goto label_201ae0;
        case 0x201ae4u: goto label_201ae4;
        case 0x201ae8u: goto label_201ae8;
        case 0x201aecu: goto label_201aec;
        case 0x201af0u: goto label_201af0;
        case 0x201af4u: goto label_201af4;
        case 0x201af8u: goto label_201af8;
        case 0x201afcu: goto label_201afc;
        case 0x201b00u: goto label_201b00;
        case 0x201b04u: goto label_201b04;
        case 0x201b08u: goto label_201b08;
        case 0x201b0cu: goto label_201b0c;
        case 0x201b10u: goto label_201b10;
        case 0x201b14u: goto label_201b14;
        case 0x201b18u: goto label_201b18;
        case 0x201b1cu: goto label_201b1c;
        case 0x201b20u: goto label_201b20;
        case 0x201b24u: goto label_201b24;
        case 0x201b28u: goto label_201b28;
        case 0x201b2cu: goto label_201b2c;
        case 0x201b30u: goto label_201b30;
        case 0x201b34u: goto label_201b34;
        case 0x201b38u: goto label_201b38;
        case 0x201b3cu: goto label_201b3c;
        case 0x201b40u: goto label_201b40;
        case 0x201b44u: goto label_201b44;
        case 0x201b48u: goto label_201b48;
        case 0x201b4cu: goto label_201b4c;
        case 0x201b50u: goto label_201b50;
        case 0x201b54u: goto label_201b54;
        case 0x201b58u: goto label_201b58;
        case 0x201b5cu: goto label_201b5c;
        case 0x201b60u: goto label_201b60;
        case 0x201b64u: goto label_201b64;
        case 0x201b68u: goto label_201b68;
        case 0x201b6cu: goto label_201b6c;
        case 0x201b70u: goto label_201b70;
        case 0x201b74u: goto label_201b74;
        case 0x201b78u: goto label_201b78;
        case 0x201b7cu: goto label_201b7c;
        case 0x201b80u: goto label_201b80;
        case 0x201b84u: goto label_201b84;
        case 0x201b88u: goto label_201b88;
        case 0x201b8cu: goto label_201b8c;
        case 0x201b90u: goto label_201b90;
        case 0x201b94u: goto label_201b94;
        case 0x201b98u: goto label_201b98;
        case 0x201b9cu: goto label_201b9c;
        case 0x201ba0u: goto label_201ba0;
        case 0x201ba4u: goto label_201ba4;
        case 0x201ba8u: goto label_201ba8;
        case 0x201bacu: goto label_201bac;
        case 0x201bb0u: goto label_201bb0;
        case 0x201bb4u: goto label_201bb4;
        case 0x201bb8u: goto label_201bb8;
        case 0x201bbcu: goto label_201bbc;
        case 0x201bc0u: goto label_201bc0;
        case 0x201bc4u: goto label_201bc4;
        case 0x201bc8u: goto label_201bc8;
        case 0x201bccu: goto label_201bcc;
        case 0x201bd0u: goto label_201bd0;
        case 0x201bd4u: goto label_201bd4;
        case 0x201bd8u: goto label_201bd8;
        case 0x201bdcu: goto label_201bdc;
        case 0x201be0u: goto label_201be0;
        case 0x201be4u: goto label_201be4;
        case 0x201be8u: goto label_201be8;
        case 0x201becu: goto label_201bec;
        case 0x201bf0u: goto label_201bf0;
        case 0x201bf4u: goto label_201bf4;
        case 0x201bf8u: goto label_201bf8;
        case 0x201bfcu: goto label_201bfc;
        case 0x201c00u: goto label_201c00;
        case 0x201c04u: goto label_201c04;
        case 0x201c08u: goto label_201c08;
        case 0x201c0cu: goto label_201c0c;
        case 0x201c10u: goto label_201c10;
        case 0x201c14u: goto label_201c14;
        case 0x201c18u: goto label_201c18;
        case 0x201c1cu: goto label_201c1c;
        default: break;
    }

    ctx->pc = 0x201890u;

label_201890:
    // 0x201890: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x201890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_201894:
    // 0x201894: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x201894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_201898:
    // 0x201898: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x201898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20189c:
    // 0x20189c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2018a0:
    // 0x2018a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2018a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2018a4:
    // 0x2018a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2018a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2018a8:
    // 0x2018a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2018a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2018ac:
    // 0x2018ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2018acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2018b0:
    // 0x2018b0: 0x8482060c  lh          $v0, 0x60C($a0)
    ctx->pc = 0x2018b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1548)));
label_2018b4:
    // 0x2018b4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2018b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2018b8:
    // 0x2018b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2018bc:
    if (ctx->pc == 0x2018BCu) {
        ctx->pc = 0x2018BCu;
            // 0x2018bc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2018C0u;
        goto label_2018c0;
    }
    ctx->pc = 0x2018B8u;
    {
        const bool branch_taken_0x2018b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2018BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2018B8u;
            // 0x2018bc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018b8) {
            ctx->pc = 0x2018C8u;
            goto label_2018c8;
        }
    }
    ctx->pc = 0x2018C0u;
label_2018c0:
    // 0x2018c0: 0x100000cf  b           . + 4 + (0xCF << 2)
label_2018c4:
    if (ctx->pc == 0x2018C4u) {
        ctx->pc = 0x2018C4u;
            // 0x2018c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2018C8u;
        goto label_2018c8;
    }
    ctx->pc = 0x2018C0u;
    {
        const bool branch_taken_0x2018c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2018C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2018C0u;
            // 0x2018c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018c0) {
            ctx->pc = 0x201C00u;
            goto label_201c00;
        }
    }
    ctx->pc = 0x2018C8u;
label_2018c8:
    // 0x2018c8: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
label_2018cc:
    if (ctx->pc == 0x2018CCu) {
        ctx->pc = 0x2018CCu;
            // 0x2018cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2018D0u;
        goto label_2018d0;
    }
    ctx->pc = 0x2018C8u;
    {
        const bool branch_taken_0x2018c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2018CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2018C8u;
            // 0x2018cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018c8) {
            ctx->pc = 0x201948u;
            goto label_201948;
        }
    }
    ctx->pc = 0x2018D0u;
label_2018d0:
    // 0x2018d0: 0xc080780  jal         func_201E00
label_2018d4:
    if (ctx->pc == 0x2018D4u) {
        ctx->pc = 0x2018D4u;
            // 0x2018d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2018D8u;
        goto label_2018d8;
    }
    ctx->pc = 0x2018D0u;
    SET_GPR_U32(ctx, 31, 0x2018D8u);
    ctx->pc = 0x2018D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2018D0u;
            // 0x2018d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201E00u;
    if (runtime->hasFunction(0x201E00u)) {
        auto targetFn = runtime->lookupFunction(0x201E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2018D8u; }
        if (ctx->pc != 0x2018D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectedNetaPhotoAlready__11CMenuInventFi_0x201e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2018D8u; }
        if (ctx->pc != 0x2018D8u) { return; }
    }
    ctx->pc = 0x2018D8u;
label_2018d8:
    // 0x2018d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2018dc:
    if (ctx->pc == 0x2018DCu) {
        ctx->pc = 0x2018DCu;
            // 0x2018dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2018E0u;
        goto label_2018e0;
    }
    ctx->pc = 0x2018D8u;
    {
        const bool branch_taken_0x2018d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2018DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2018D8u;
            // 0x2018dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018d8) {
            ctx->pc = 0x2018E8u;
            goto label_2018e8;
        }
    }
    ctx->pc = 0x2018E0u;
label_2018e0:
    // 0x2018e0: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_2018e4:
    if (ctx->pc == 0x2018E4u) {
        ctx->pc = 0x2018E4u;
            // 0x2018e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2018E8u;
        goto label_2018e8;
    }
    ctx->pc = 0x2018E0u;
    {
        const bool branch_taken_0x2018e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2018E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2018E0u;
            // 0x2018e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018e0) {
            ctx->pc = 0x201C04u;
            goto label_201c04;
        }
    }
    ctx->pc = 0x2018E8u;
label_2018e8:
    // 0x2018e8: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x2018e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_2018ec:
    // 0x2018ec: 0xc07faac  jal         func_1FEAB0
label_2018f0:
    if (ctx->pc == 0x2018F0u) {
        ctx->pc = 0x2018F0u;
            // 0x2018f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2018F4u;
        goto label_2018f4;
    }
    ctx->pc = 0x2018ECu;
    SET_GPR_U32(ctx, 31, 0x2018F4u);
    ctx->pc = 0x2018F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2018ECu;
            // 0x2018f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2018F4u; }
        if (ctx->pc != 0x2018F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2018F4u; }
        if (ctx->pc != 0x2018F4u) { return; }
    }
    ctx->pc = 0x2018F4u;
label_2018f4:
    // 0x2018f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2018f8:
    if (ctx->pc == 0x2018F8u) {
        ctx->pc = 0x2018FCu;
        goto label_2018fc;
    }
    ctx->pc = 0x2018F4u;
    {
        const bool branch_taken_0x2018f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2018f4) {
            ctx->pc = 0x201904u;
            goto label_201904;
        }
    }
    ctx->pc = 0x2018FCu;
label_2018fc:
    // 0x2018fc: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_201900:
    if (ctx->pc == 0x201900u) {
        ctx->pc = 0x201900u;
            // 0x201900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201904u;
        goto label_201904;
    }
    ctx->pc = 0x2018FCu;
    {
        const bool branch_taken_0x2018fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2018FCu;
            // 0x201900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018fc) {
            ctx->pc = 0x201C00u;
            goto label_201c00;
        }
    }
    ctx->pc = 0x201904u;
label_201904:
    // 0x201904: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x201904u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_201908:
    // 0x201908: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_20190c:
    if (ctx->pc == 0x20190Cu) {
        ctx->pc = 0x201910u;
        goto label_201910;
    }
    ctx->pc = 0x201908u;
    {
        const bool branch_taken_0x201908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x201908) {
            ctx->pc = 0x201918u;
            goto label_201918;
        }
    }
    ctx->pc = 0x201910u;
label_201910:
    // 0x201910: 0x100000bb  b           . + 4 + (0xBB << 2)
label_201914:
    if (ctx->pc == 0x201914u) {
        ctx->pc = 0x201914u;
            // 0x201914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201918u;
        goto label_201918;
    }
    ctx->pc = 0x201910u;
    {
        const bool branch_taken_0x201910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201910u;
            // 0x201914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201910) {
            ctx->pc = 0x201C00u;
            goto label_201c00;
        }
    }
    ctx->pc = 0x201918u;
label_201918:
    // 0x201918: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x201918u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_20191c:
    // 0x20191c: 0xc07fe48  jal         func_1FF920
label_201920:
    if (ctx->pc == 0x201920u) {
        ctx->pc = 0x201920u;
            // 0x201920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201924u;
        goto label_201924;
    }
    ctx->pc = 0x20191Cu;
    SET_GPR_U32(ctx, 31, 0x201924u);
    ctx->pc = 0x201920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20191Cu;
            // 0x201920: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF920u;
    if (runtime->hasFunction(0x1FF920u)) {
        auto targetFn = runtime->lookupFunction(0x1FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201924u; }
        if (ctx->pc != 0x201924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201924u; }
        if (ctx->pc != 0x201924u) { return; }
    }
    ctx->pc = 0x201924u;
label_201924:
    // 0x201924: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x201924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201928:
    // 0x201928: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x201928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_20192c:
    // 0x20192c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_201930:
    // 0x201930: 0xa040061c  sb          $zero, 0x61C($v0)
    ctx->pc = 0x201930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1564), (uint8_t)GPR_U32(ctx, 0));
label_201934:
    // 0x201934: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x201934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_201938:
    // 0x201938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x201938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20193c:
    // 0x20193c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_201940:
    // 0x201940: 0x1000001b  b           . + 4 + (0x1B << 2)
label_201944:
    if (ctx->pc == 0x201944u) {
        ctx->pc = 0x201944u;
            // 0x201944: 0xac500610  sw          $s0, 0x610($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1552), GPR_U32(ctx, 16));
        ctx->pc = 0x201948u;
        goto label_201948;
    }
    ctx->pc = 0x201940u;
    {
        const bool branch_taken_0x201940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201940u;
            // 0x201944: 0xac500610  sw          $s0, 0x610($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1552), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201940) {
            ctx->pc = 0x2019B0u;
            goto label_2019b0;
        }
    }
    ctx->pc = 0x201948u;
label_201948:
    // 0x201948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20194c:
    // 0x20194c: 0x14a20018  bne         $a1, $v0, . + 4 + (0x18 << 2)
label_201950:
    if (ctx->pc == 0x201950u) {
        ctx->pc = 0x201950u;
            // 0x201950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201954u;
        goto label_201954;
    }
    ctx->pc = 0x20194Cu;
    {
        const bool branch_taken_0x20194c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x201950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20194Cu;
            // 0x201950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20194c) {
            ctx->pc = 0x2019B0u;
            goto label_2019b0;
        }
    }
    ctx->pc = 0x201954u;
label_201954:
    // 0x201954: 0xc080794  jal         func_201E50
label_201958:
    if (ctx->pc == 0x201958u) {
        ctx->pc = 0x20195Cu;
        goto label_20195c;
    }
    ctx->pc = 0x201954u;
    SET_GPR_U32(ctx, 31, 0x20195Cu);
    ctx->pc = 0x201E50u;
    if (runtime->hasFunction(0x201E50u)) {
        auto targetFn = runtime->lookupFunction(0x201E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20195Cu; }
        if (ctx->pc != 0x20195Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectedNetaMemoListAlready__11CMenuInventFi_0x201e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20195Cu; }
        if (ctx->pc != 0x20195Cu) { return; }
    }
    ctx->pc = 0x20195Cu;
label_20195c:
    // 0x20195c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_201960:
    if (ctx->pc == 0x201960u) {
        ctx->pc = 0x201960u;
            // 0x201960: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x201964u;
        goto label_201964;
    }
    ctx->pc = 0x20195Cu;
    {
        const bool branch_taken_0x20195c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20195Cu;
            // 0x201960: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20195c) {
            ctx->pc = 0x20196Cu;
            goto label_20196c;
        }
    }
    ctx->pc = 0x201964u;
label_201964:
    // 0x201964: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_201968:
    if (ctx->pc == 0x201968u) {
        ctx->pc = 0x201968u;
            // 0x201968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20196Cu;
        goto label_20196c;
    }
    ctx->pc = 0x201964u;
    {
        const bool branch_taken_0x201964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201964u;
            // 0x201968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201964) {
            ctx->pc = 0x201C00u;
            goto label_201c00;
        }
    }
    ctx->pc = 0x20196Cu;
label_20196c:
    // 0x20196c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20196cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201970:
    // 0x201970: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x201970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_201974:
    // 0x201974: 0x2442bfd0  addiu       $v0, $v0, -0x4030
    ctx->pc = 0x201974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950864));
label_201978:
    // 0x201978: 0xa3a50060  sb          $a1, 0x60($sp)
    ctx->pc = 0x201978u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 5));
label_20197c:
    // 0x20197c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201980:
    // 0x201980: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x201980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_201984:
    // 0x201984: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x201984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_201988:
    // 0x201988: 0xa7a2006a  sh          $v0, 0x6A($sp)
    ctx->pc = 0x201988u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 106), (uint16_t)GPR_U32(ctx, 2));
label_20198c:
    // 0x20198c: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x20198cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_201990:
    // 0x201990: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x201990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_201994:
    // 0x201994: 0xa045061c  sb          $a1, 0x61C($v0)
    ctx->pc = 0x201994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1564), (uint8_t)GPR_U32(ctx, 5));
label_201998:
    // 0x201998: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x201998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_20199c:
    // 0x20199c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20199cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2019a0:
    // 0x2019a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2019a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2019a4:
    // 0x2019a4: 0xc07fe48  jal         func_1FF920
label_2019a8:
    if (ctx->pc == 0x2019A8u) {
        ctx->pc = 0x2019A8u;
            // 0x2019a8: 0xac500610  sw          $s0, 0x610($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1552), GPR_U32(ctx, 16));
        ctx->pc = 0x2019ACu;
        goto label_2019ac;
    }
    ctx->pc = 0x2019A4u;
    SET_GPR_U32(ctx, 31, 0x2019ACu);
    ctx->pc = 0x2019A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2019A4u;
            // 0x2019a8: 0xac500610  sw          $s0, 0x610($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1552), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF920u;
    if (runtime->hasFunction(0x1FF920u)) {
        auto targetFn = runtime->lookupFunction(0x1FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019ACu; }
        if (ctx->pc != 0x2019ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019ACu; }
        if (ctx->pc != 0x2019ACu) { return; }
    }
    ctx->pc = 0x2019ACu;
label_2019ac:
    // 0x2019ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2019acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2019b0:
    // 0x2019b0: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x2019b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_2019b4:
    // 0x2019b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2019b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2019b8:
    // 0x2019b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2019b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2019bc:
    // 0x2019bc: 0xa043061f  sb          $v1, 0x61F($v0)
    ctx->pc = 0x2019bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1567), (uint8_t)GPR_U32(ctx, 3));
label_2019c0:
    // 0x2019c0: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x2019c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_2019c4:
    // 0x2019c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2019c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2019c8:
    // 0x2019c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2019c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2019cc:
    // 0x2019cc: 0x8c530ef0  lw          $s3, 0xEF0($v0)
    ctx->pc = 0x2019ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3824)));
label_2019d0:
    // 0x2019d0: 0x12600059  beqz        $s3, . + 4 + (0x59 << 2)
label_2019d4:
    if (ctx->pc == 0x2019D4u) {
        ctx->pc = 0x2019D8u;
        goto label_2019d8;
    }
    ctx->pc = 0x2019D0u;
    {
        const bool branch_taken_0x2019d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2019d0) {
            ctx->pc = 0x201B38u;
            goto label_201b38;
        }
    }
    ctx->pc = 0x2019D8u;
label_2019d8:
    // 0x2019d8: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x2019d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
label_2019dc:
    // 0x2019dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2019dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2019e0:
    // 0x2019e0: 0xa2620055  sb          $v0, 0x55($s3)
    ctx->pc = 0x2019e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 2));
label_2019e4:
    // 0x2019e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2019e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2019e8:
    // 0x2019e8: 0xa2620056  sb          $v0, 0x56($s3)
    ctx->pc = 0x2019e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
label_2019ec:
    // 0x2019ec: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x2019ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_2019f0:
    // 0x2019f0: 0xa2620058  sb          $v0, 0x58($s3)
    ctx->pc = 0x2019f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 2));
label_2019f4:
    // 0x2019f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2019f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2019f8:
    // 0x2019f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2019f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2019fc:
    // 0x2019fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2019fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201a00:
    // 0x201a00: 0xc0896cc  jal         func_225B30
label_201a04:
    if (ctx->pc == 0x201A04u) {
        ctx->pc = 0x201A04u;
            // 0x201a04: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x201A08u;
        goto label_201a08;
    }
    ctx->pc = 0x201A00u;
    SET_GPR_U32(ctx, 31, 0x201A08u);
    ctx->pc = 0x201A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201A00u;
            // 0x201a04: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A08u; }
        if (ctx->pc != 0x201A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A08u; }
        if (ctx->pc != 0x201A08u) { return; }
    }
    ctx->pc = 0x201A08u;
label_201a08:
    // 0x201a08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x201a08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_201a0c:
    // 0x201a0c: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x201a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_201a10:
    // 0x201a10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_201a14:
    if (ctx->pc == 0x201A14u) {
        ctx->pc = 0x201A14u;
            // 0x201a14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201A18u;
        goto label_201a18;
    }
    ctx->pc = 0x201A10u;
    {
        const bool branch_taken_0x201a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201A10u;
            // 0x201a14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a10) {
            ctx->pc = 0x2019F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2019f8;
        }
    }
    ctx->pc = 0x201A18u;
label_201a18:
    // 0x201a18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x201a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_201a1c:
    // 0x201a1c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x201a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201a20:
    // 0x201a20: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x201a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_201a24:
    // 0x201a24: 0xc0896cc  jal         func_225B30
label_201a28:
    if (ctx->pc == 0x201A28u) {
        ctx->pc = 0x201A28u;
            // 0x201a28: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x201A2Cu;
        goto label_201a2c;
    }
    ctx->pc = 0x201A24u;
    SET_GPR_U32(ctx, 31, 0x201A2Cu);
    ctx->pc = 0x201A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201A24u;
            // 0x201a28: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A2Cu; }
        if (ctx->pc != 0x201A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A2Cu; }
        if (ctx->pc != 0x201A2Cu) { return; }
    }
    ctx->pc = 0x201A2Cu;
label_201a2c:
    // 0x201a2c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_201a30:
    // 0x201a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x201a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_201a34:
    // 0x201a34: 0xc089664  jal         func_225990
label_201a38:
    if (ctx->pc == 0x201A38u) {
        ctx->pc = 0x201A38u;
            // 0x201a38: 0x24a592b0  addiu       $a1, $a1, -0x6D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939312));
        ctx->pc = 0x201A3Cu;
        goto label_201a3c;
    }
    ctx->pc = 0x201A34u;
    SET_GPR_U32(ctx, 31, 0x201A3Cu);
    ctx->pc = 0x201A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201A34u;
            // 0x201a38: 0x24a592b0  addiu       $a1, $a1, -0x6D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A3Cu; }
        if (ctx->pc != 0x201A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A3Cu; }
        if (ctx->pc != 0x201A3Cu) { return; }
    }
    ctx->pc = 0x201A3Cu;
label_201a3c:
    // 0x201a3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201a40:
    // 0x201a40: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x201a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201a44:
    // 0x201a44: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x201a44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
label_201a48:
    // 0x201a48: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x201a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_201a4c:
    // 0x201a4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x201a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_201a50:
    // 0x201a50: 0x8042061c  lb          $v0, 0x61C($v0)
    ctx->pc = 0x201a50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1564)));
label_201a54:
    // 0x201a54: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_201a58:
    if (ctx->pc == 0x201A58u) {
        ctx->pc = 0x201A58u;
            // 0x201a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201A5Cu;
        goto label_201a5c;
    }
    ctx->pc = 0x201A54u;
    {
        const bool branch_taken_0x201a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201A54u;
            // 0x201a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a54) {
            ctx->pc = 0x201A90u;
            goto label_201a90;
        }
    }
    ctx->pc = 0x201A5Cu;
label_201a5c:
    // 0x201a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201a60:
    // 0x201a60: 0xc082128  jal         func_2084A0
label_201a64:
    if (ctx->pc == 0x201A64u) {
        ctx->pc = 0x201A64u;
            // 0x201a64: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x201A68u;
        goto label_201a68;
    }
    ctx->pc = 0x201A60u;
    SET_GPR_U32(ctx, 31, 0x201A68u);
    ctx->pc = 0x201A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201A60u;
            // 0x201a64: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2084A0u;
    if (runtime->hasFunction(0x2084A0u)) {
        auto targetFn = runtime->lookupFunction(0x2084A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A68u; }
        if (ctx->pc != 0x201A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaBoardCursorPosition__11CMenuInventFiPi_0x2084a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A68u; }
        if (ctx->pc != 0x201A68u) { return; }
    }
    ctx->pc = 0x201A68u;
label_201a68:
    // 0x201a68: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x201a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201a6c:
    // 0x201a6c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x201a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_201a70:
    // 0x201a70: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x201a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201a74:
    // 0x201a74: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x201a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_201a78:
    // 0x201a78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x201a78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_201a7c:
    // 0x201a7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_201a80:
    // 0x201a80: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x201a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_201a84:
    // 0x201a84: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x201a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_201a88:
    // 0x201a88: 0xae900030  sw          $s0, 0x30($s4)
    ctx->pc = 0x201a88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 16));
label_201a8c:
    // 0x201a8c: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x201a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
label_201a90:
    // 0x201a90: 0x8623060c  lh          $v1, 0x60C($s1)
    ctx->pc = 0x201a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_201a94:
    // 0x201a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201a98:
    // 0x201a98: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x201a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_201a9c:
    // 0x201a9c: 0x8063061c  lb          $v1, 0x61C($v1)
    ctx->pc = 0x201a9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1564)));
label_201aa0:
    // 0x201aa0: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_201aa4:
    if (ctx->pc == 0x201AA4u) {
        ctx->pc = 0x201AA8u;
        goto label_201aa8;
    }
    ctx->pc = 0x201AA0u;
    {
        const bool branch_taken_0x201aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201aa0) {
            ctx->pc = 0x201B38u;
            goto label_201b38;
        }
    }
    ctx->pc = 0x201AA8u;
label_201aa8:
    // 0x201aa8: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x201aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_201aac:
    // 0x201aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201ab0:
    // 0x201ab0: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x201ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_201ab4:
    // 0x201ab4: 0xc082150  jal         func_208540
label_201ab8:
    if (ctx->pc == 0x201AB8u) {
        ctx->pc = 0x201AB8u;
            // 0x201ab8: 0x2022823  subu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x201ABCu;
        goto label_201abc;
    }
    ctx->pc = 0x201AB4u;
    SET_GPR_U32(ctx, 31, 0x201ABCu);
    ctx->pc = 0x201AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201AB4u;
            // 0x201ab8: 0x2022823  subu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208540u;
    if (runtime->hasFunction(0x208540u)) {
        auto targetFn = runtime->lookupFunction(0x208540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ABCu; }
        if (ctx->pc != 0x201ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaMemoCursorPosition__11CMenuInventFiPi_0x208540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ABCu; }
        if (ctx->pc != 0x201ABCu) { return; }
    }
    ctx->pc = 0x201ABCu;
label_201abc:
    // 0x201abc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x201abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_201ac0:
    // 0x201ac0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x201ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_201ac4:
    // 0x201ac4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x201ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201ac8:
    // 0x201ac8: 0x246300dc  addiu       $v1, $v1, 0xDC
    ctx->pc = 0x201ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
label_201acc:
    // 0x201acc: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x201accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_201ad0:
    // 0x201ad0: 0xa2620055  sb          $v0, 0x55($s3)
    ctx->pc = 0x201ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 2));
label_201ad4:
    // 0x201ad4: 0xa2620056  sb          $v0, 0x56($s3)
    ctx->pc = 0x201ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
label_201ad8:
    // 0x201ad8: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x201ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_201adc:
    // 0x201adc: 0xa2600058  sb          $zero, 0x58($s3)
    ctx->pc = 0x201adcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 0));
label_201ae0:
    // 0x201ae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x201ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_201ae4:
    // 0x201ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201ae8:
    // 0x201ae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201aec:
    // 0x201aec: 0xc0896cc  jal         func_225B30
label_201af0:
    if (ctx->pc == 0x201AF0u) {
        ctx->pc = 0x201AF0u;
            // 0x201af0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x201AF4u;
        goto label_201af4;
    }
    ctx->pc = 0x201AECu;
    SET_GPR_U32(ctx, 31, 0x201AF4u);
    ctx->pc = 0x201AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201AECu;
            // 0x201af0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201AF4u; }
        if (ctx->pc != 0x201AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201AF4u; }
        if (ctx->pc != 0x201AF4u) { return; }
    }
    ctx->pc = 0x201AF4u;
label_201af4:
    // 0x201af4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x201af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_201af8:
    // 0x201af8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x201af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_201afc:
    // 0x201afc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_201b00:
    if (ctx->pc == 0x201B00u) {
        ctx->pc = 0x201B00u;
            // 0x201b00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201B04u;
        goto label_201b04;
    }
    ctx->pc = 0x201AFCu;
    {
        const bool branch_taken_0x201afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201AFCu;
            // 0x201b00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201afc) {
            ctx->pc = 0x201AE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_201ae4;
        }
    }
    ctx->pc = 0x201B04u;
label_201b04:
    // 0x201b04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x201b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_201b08:
    // 0x201b08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x201b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201b0c:
    // 0x201b0c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x201b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_201b10:
    // 0x201b10: 0xc0896cc  jal         func_225B30
label_201b14:
    if (ctx->pc == 0x201B14u) {
        ctx->pc = 0x201B14u;
            // 0x201b14: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x201B18u;
        goto label_201b18;
    }
    ctx->pc = 0x201B10u;
    SET_GPR_U32(ctx, 31, 0x201B18u);
    ctx->pc = 0x201B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201B10u;
            // 0x201b14: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B18u; }
        if (ctx->pc != 0x201B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B18u; }
        if (ctx->pc != 0x201B18u) { return; }
    }
    ctx->pc = 0x201B18u;
label_201b18:
    // 0x201b18: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x201b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201b1c:
    // 0x201b1c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x201b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_201b20:
    // 0x201b20: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x201b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_201b24:
    // 0x201b24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x201b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_201b28:
    // 0x201b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_201b2c:
    // 0x201b2c: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x201b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_201b30:
    // 0x201b30: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x201b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_201b34:
    // 0x201b34: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x201b34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
label_201b38:
    // 0x201b38: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x201b38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_201b3c:
    // 0x201b3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x201b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_201b40:
    // 0x201b40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x201b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_201b44:
    // 0x201b44: 0x8c440f00  lw          $a0, 0xF00($v0)
    ctx->pc = 0x201b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3840)));
label_201b48:
    // 0x201b48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_201b4c:
    if (ctx->pc == 0x201B4Cu) {
        ctx->pc = 0x201B50u;
        goto label_201b50;
    }
    ctx->pc = 0x201B48u;
    {
        const bool branch_taken_0x201b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b48) {
            ctx->pc = 0x201B5Cu;
            goto label_201b5c;
        }
    }
    ctx->pc = 0x201B50u;
label_201b50:
    // 0x201b50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_201b54:
    // 0x201b54: 0xc08a240  jal         func_228900
label_201b58:
    if (ctx->pc == 0x201B58u) {
        ctx->pc = 0x201B58u;
            // 0x201b58: 0x24a592a8  addiu       $a1, $a1, -0x6D58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939304));
        ctx->pc = 0x201B5Cu;
        goto label_201b5c;
    }
    ctx->pc = 0x201B54u;
    SET_GPR_U32(ctx, 31, 0x201B5Cu);
    ctx->pc = 0x201B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201B54u;
            // 0x201b58: 0x24a592a8  addiu       $a1, $a1, -0x6D58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B5Cu; }
        if (ctx->pc != 0x201B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B5Cu; }
        if (ctx->pc != 0x201B5Cu) { return; }
    }
    ctx->pc = 0x201B5Cu;
label_201b5c:
    // 0x201b5c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x201b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_201b60:
    // 0x201b60: 0x8c23ca5c  lw          $v1, -0x35A4($at)
    ctx->pc = 0x201b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_201b64:
    // 0x201b64: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_201b68:
    if (ctx->pc == 0x201B68u) {
        ctx->pc = 0x201B68u;
            // 0x201b68: 0x8622060c  lh          $v0, 0x60C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
        ctx->pc = 0x201B6Cu;
        goto label_201b6c;
    }
    ctx->pc = 0x201B64u;
    {
        const bool branch_taken_0x201b64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201B64u;
            // 0x201b68: 0x8622060c  lh          $v0, 0x60C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b64) {
            ctx->pc = 0x201B80u;
            goto label_201b80;
        }
    }
    ctx->pc = 0x201B6Cu;
label_201b6c:
    // 0x201b6c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x201b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_201b70:
    // 0x201b70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x201b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201b74:
    // 0x201b74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x201b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_201b78:
    // 0x201b78: 0xc04a3dc  jal         func_128F70
label_201b7c:
    if (ctx->pc == 0x201B7Cu) {
        ctx->pc = 0x201B7Cu;
            // 0x201b7c: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->pc = 0x201B80u;
        goto label_201b80;
    }
    ctx->pc = 0x201B78u;
    SET_GPR_U32(ctx, 31, 0x201B80u);
    ctx->pc = 0x201B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201B78u;
            // 0x201b7c: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B80u; }
        if (ctx->pc != 0x201B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B80u; }
        if (ctx->pc != 0x201B80u) { return; }
    }
    ctx->pc = 0x201B80u;
label_201b80:
    // 0x201b80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x201b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_201b84:
    // 0x201b84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x201b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_201b88:
    // 0x201b88: 0x8c22ca5c  lw          $v0, -0x35A4($at)
    ctx->pc = 0x201b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_201b8c:
    // 0x201b8c: 0xac4317e4  sw          $v1, 0x17E4($v0)
    ctx->pc = 0x201b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6116), GPR_U32(ctx, 3));
label_201b90:
    // 0x201b90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x201b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_201b94:
    // 0x201b94: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x201b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_201b98:
    // 0x201b98: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x201b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_201b9c:
    // 0x201b9c: 0xc0877e0  jal         func_21DF80
label_201ba0:
    if (ctx->pc == 0x201BA0u) {
        ctx->pc = 0x201BA0u;
            // 0x201ba0: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->pc = 0x201BA4u;
        goto label_201ba4;
    }
    ctx->pc = 0x201B9Cu;
    SET_GPR_U32(ctx, 31, 0x201BA4u);
    ctx->pc = 0x201BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201B9Cu;
            // 0x201ba0: 0x24450032  addiu       $a1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BA4u; }
        if (ctx->pc != 0x201BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201BA4u; }
        if (ctx->pc != 0x201BA4u) { return; }
    }
    ctx->pc = 0x201BA4u;
label_201ba4:
    // 0x201ba4: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x201ba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_201ba8:
    // 0x201ba8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x201ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201bac:
    // 0x201bac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x201bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_201bb0:
    // 0x201bb0: 0xa622060c  sh          $v0, 0x60C($s1)
    ctx->pc = 0x201bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1548), (uint16_t)GPR_U32(ctx, 2));
label_201bb4:
    // 0x201bb4: 0x8622060c  lh          $v0, 0x60C($s1)
    ctx->pc = 0x201bb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1548)));
label_201bb8:
    // 0x201bb8: 0x1447000a  bne         $v0, $a3, . + 4 + (0xA << 2)
label_201bbc:
    if (ctx->pc == 0x201BBCu) {
        ctx->pc = 0x201BBCu;
            // 0x201bbc: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x201BC0u;
        goto label_201bc0;
    }
    ctx->pc = 0x201BB8u;
    {
        const bool branch_taken_0x201bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x201BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201BB8u;
            // 0x201bbc: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bb8) {
            ctx->pc = 0x201BE4u;
            goto label_201be4;
        }
    }
    ctx->pc = 0x201BC0u;
label_201bc0:
    // 0x201bc0: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x201bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_201bc4:
    // 0x201bc4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_201bc8:
    if (ctx->pc == 0x201BC8u) {
        ctx->pc = 0x201BCCu;
        goto label_201bcc;
    }
    ctx->pc = 0x201BC4u;
    {
        const bool branch_taken_0x201bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201bc4) {
            ctx->pc = 0x201BE4u;
            goto label_201be4;
        }
    }
    ctx->pc = 0x201BCCu;
label_201bcc:
    // 0x201bcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x201bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_201bd0:
    // 0x201bd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_201bd4:
    // 0x201bd4: 0x24a592b8  addiu       $a1, $a1, -0x6D48
    ctx->pc = 0x201bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939320));
label_201bd8:
    // 0x201bd8: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x201bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_201bdc:
    // 0x201bdc: 0x320f809  jalr        $t9
label_201be0:
    if (ctx->pc == 0x201BE0u) {
        ctx->pc = 0x201BE0u;
            // 0x201be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x201BE4u;
        goto label_201be4;
    }
    ctx->pc = 0x201BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201BE4u);
        ctx->pc = 0x201BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201BDCu;
            // 0x201be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201BE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201BE4u; }
            if (ctx->pc != 0x201BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x201BE4u;
label_201be4:
    // 0x201be4: 0xc621062c  lwc1        $f1, 0x62C($s1)
    ctx->pc = 0x201be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_201be8:
    // 0x201be8: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x201be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_201bec:
    // 0x201bec: 0x34437750  ori         $v1, $v0, 0x7750
    ctx->pc = 0x201becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_201bf0:
    // 0x201bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x201bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_201bf4:
    // 0x201bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201bf8:
    // 0x201bf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x201bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_201bfc:
    // 0x201bfc: 0xe620062c  swc1        $f0, 0x62C($s1)
    ctx->pc = 0x201bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1580), bits); }
label_201c00:
    // 0x201c00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x201c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_201c04:
    // 0x201c04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x201c04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_201c08:
    // 0x201c08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201c0c:
    // 0x201c0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201c10:
    // 0x201c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201c14:
    // 0x201c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201c18:
    // 0x201c18: 0x3e00008  jr          $ra
label_201c1c:
    if (ctx->pc == 0x201C1Cu) {
        ctx->pc = 0x201C1Cu;
            // 0x201c1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x201C20u;
        goto label_fallthrough_0x201c18;
    }
    ctx->pc = 0x201C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201C18u;
            // 0x201c1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x201c18:
    ctx->pc = 0x201C20u;
}
