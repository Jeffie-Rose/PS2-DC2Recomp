#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FalseLoop__FP6CSceneP11CPadControl
// Address: 0x3018d0 - 0x301b48
void FalseLoop__FP6CSceneP11CPadControl_0x3018d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FalseLoop__FP6CSceneP11CPadControl_0x3018d0");
#endif

    switch (ctx->pc) {
        case 0x3018d0u: goto label_3018d0;
        case 0x3018d4u: goto label_3018d4;
        case 0x3018d8u: goto label_3018d8;
        case 0x3018dcu: goto label_3018dc;
        case 0x3018e0u: goto label_3018e0;
        case 0x3018e4u: goto label_3018e4;
        case 0x3018e8u: goto label_3018e8;
        case 0x3018ecu: goto label_3018ec;
        case 0x3018f0u: goto label_3018f0;
        case 0x3018f4u: goto label_3018f4;
        case 0x3018f8u: goto label_3018f8;
        case 0x3018fcu: goto label_3018fc;
        case 0x301900u: goto label_301900;
        case 0x301904u: goto label_301904;
        case 0x301908u: goto label_301908;
        case 0x30190cu: goto label_30190c;
        case 0x301910u: goto label_301910;
        case 0x301914u: goto label_301914;
        case 0x301918u: goto label_301918;
        case 0x30191cu: goto label_30191c;
        case 0x301920u: goto label_301920;
        case 0x301924u: goto label_301924;
        case 0x301928u: goto label_301928;
        case 0x30192cu: goto label_30192c;
        case 0x301930u: goto label_301930;
        case 0x301934u: goto label_301934;
        case 0x301938u: goto label_301938;
        case 0x30193cu: goto label_30193c;
        case 0x301940u: goto label_301940;
        case 0x301944u: goto label_301944;
        case 0x301948u: goto label_301948;
        case 0x30194cu: goto label_30194c;
        case 0x301950u: goto label_301950;
        case 0x301954u: goto label_301954;
        case 0x301958u: goto label_301958;
        case 0x30195cu: goto label_30195c;
        case 0x301960u: goto label_301960;
        case 0x301964u: goto label_301964;
        case 0x301968u: goto label_301968;
        case 0x30196cu: goto label_30196c;
        case 0x301970u: goto label_301970;
        case 0x301974u: goto label_301974;
        case 0x301978u: goto label_301978;
        case 0x30197cu: goto label_30197c;
        case 0x301980u: goto label_301980;
        case 0x301984u: goto label_301984;
        case 0x301988u: goto label_301988;
        case 0x30198cu: goto label_30198c;
        case 0x301990u: goto label_301990;
        case 0x301994u: goto label_301994;
        case 0x301998u: goto label_301998;
        case 0x30199cu: goto label_30199c;
        case 0x3019a0u: goto label_3019a0;
        case 0x3019a4u: goto label_3019a4;
        case 0x3019a8u: goto label_3019a8;
        case 0x3019acu: goto label_3019ac;
        case 0x3019b0u: goto label_3019b0;
        case 0x3019b4u: goto label_3019b4;
        case 0x3019b8u: goto label_3019b8;
        case 0x3019bcu: goto label_3019bc;
        case 0x3019c0u: goto label_3019c0;
        case 0x3019c4u: goto label_3019c4;
        case 0x3019c8u: goto label_3019c8;
        case 0x3019ccu: goto label_3019cc;
        case 0x3019d0u: goto label_3019d0;
        case 0x3019d4u: goto label_3019d4;
        case 0x3019d8u: goto label_3019d8;
        case 0x3019dcu: goto label_3019dc;
        case 0x3019e0u: goto label_3019e0;
        case 0x3019e4u: goto label_3019e4;
        case 0x3019e8u: goto label_3019e8;
        case 0x3019ecu: goto label_3019ec;
        case 0x3019f0u: goto label_3019f0;
        case 0x3019f4u: goto label_3019f4;
        case 0x3019f8u: goto label_3019f8;
        case 0x3019fcu: goto label_3019fc;
        case 0x301a00u: goto label_301a00;
        case 0x301a04u: goto label_301a04;
        case 0x301a08u: goto label_301a08;
        case 0x301a0cu: goto label_301a0c;
        case 0x301a10u: goto label_301a10;
        case 0x301a14u: goto label_301a14;
        case 0x301a18u: goto label_301a18;
        case 0x301a1cu: goto label_301a1c;
        case 0x301a20u: goto label_301a20;
        case 0x301a24u: goto label_301a24;
        case 0x301a28u: goto label_301a28;
        case 0x301a2cu: goto label_301a2c;
        case 0x301a30u: goto label_301a30;
        case 0x301a34u: goto label_301a34;
        case 0x301a38u: goto label_301a38;
        case 0x301a3cu: goto label_301a3c;
        case 0x301a40u: goto label_301a40;
        case 0x301a44u: goto label_301a44;
        case 0x301a48u: goto label_301a48;
        case 0x301a4cu: goto label_301a4c;
        case 0x301a50u: goto label_301a50;
        case 0x301a54u: goto label_301a54;
        case 0x301a58u: goto label_301a58;
        case 0x301a5cu: goto label_301a5c;
        case 0x301a60u: goto label_301a60;
        case 0x301a64u: goto label_301a64;
        case 0x301a68u: goto label_301a68;
        case 0x301a6cu: goto label_301a6c;
        case 0x301a70u: goto label_301a70;
        case 0x301a74u: goto label_301a74;
        case 0x301a78u: goto label_301a78;
        case 0x301a7cu: goto label_301a7c;
        case 0x301a80u: goto label_301a80;
        case 0x301a84u: goto label_301a84;
        case 0x301a88u: goto label_301a88;
        case 0x301a8cu: goto label_301a8c;
        case 0x301a90u: goto label_301a90;
        case 0x301a94u: goto label_301a94;
        case 0x301a98u: goto label_301a98;
        case 0x301a9cu: goto label_301a9c;
        case 0x301aa0u: goto label_301aa0;
        case 0x301aa4u: goto label_301aa4;
        case 0x301aa8u: goto label_301aa8;
        case 0x301aacu: goto label_301aac;
        case 0x301ab0u: goto label_301ab0;
        case 0x301ab4u: goto label_301ab4;
        case 0x301ab8u: goto label_301ab8;
        case 0x301abcu: goto label_301abc;
        case 0x301ac0u: goto label_301ac0;
        case 0x301ac4u: goto label_301ac4;
        case 0x301ac8u: goto label_301ac8;
        case 0x301accu: goto label_301acc;
        case 0x301ad0u: goto label_301ad0;
        case 0x301ad4u: goto label_301ad4;
        case 0x301ad8u: goto label_301ad8;
        case 0x301adcu: goto label_301adc;
        case 0x301ae0u: goto label_301ae0;
        case 0x301ae4u: goto label_301ae4;
        case 0x301ae8u: goto label_301ae8;
        case 0x301aecu: goto label_301aec;
        case 0x301af0u: goto label_301af0;
        case 0x301af4u: goto label_301af4;
        case 0x301af8u: goto label_301af8;
        case 0x301afcu: goto label_301afc;
        case 0x301b00u: goto label_301b00;
        case 0x301b04u: goto label_301b04;
        case 0x301b08u: goto label_301b08;
        case 0x301b0cu: goto label_301b0c;
        case 0x301b10u: goto label_301b10;
        case 0x301b14u: goto label_301b14;
        case 0x301b18u: goto label_301b18;
        case 0x301b1cu: goto label_301b1c;
        case 0x301b20u: goto label_301b20;
        case 0x301b24u: goto label_301b24;
        case 0x301b28u: goto label_301b28;
        case 0x301b2cu: goto label_301b2c;
        case 0x301b30u: goto label_301b30;
        case 0x301b34u: goto label_301b34;
        case 0x301b38u: goto label_301b38;
        case 0x301b3cu: goto label_301b3c;
        case 0x301b40u: goto label_301b40;
        case 0x301b44u: goto label_301b44;
        default: break;
    }

    ctx->pc = 0x3018d0u;

label_3018d0:
    // 0x3018d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3018d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3018d4:
    // 0x3018d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3018d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3018d8:
    // 0x3018d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3018d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3018dc:
    // 0x3018dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3018dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3018e0:
    // 0x3018e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3018e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3018e4:
    // 0x3018e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3018e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3018e8:
    // 0x3018e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3018e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3018ec:
    // 0x3018ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3018ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3018f0:
    // 0x3018f0: 0x1200008d  beqz        $s0, . + 4 + (0x8D << 2)
label_3018f4:
    if (ctx->pc == 0x3018F4u) {
        ctx->pc = 0x3018F4u;
            // 0x3018f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3018F8u;
        goto label_3018f8;
    }
    ctx->pc = 0x3018F0u;
    {
        const bool branch_taken_0x3018f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3018F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3018F0u;
            // 0x3018f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018f0) {
            ctx->pc = 0x301B28u;
            goto label_301b28;
        }
    }
    ctx->pc = 0x3018F8u;
label_3018f8:
    // 0x3018f8: 0xc0a0ed8  jal         func_283B60
label_3018fc:
    if (ctx->pc == 0x3018FCu) {
        ctx->pc = 0x3018FCu;
            // 0x3018fc: 0x8e252e50  lw          $a1, 0x2E50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
        ctx->pc = 0x301900u;
        goto label_301900;
    }
    ctx->pc = 0x3018F8u;
    SET_GPR_U32(ctx, 31, 0x301900u);
    ctx->pc = 0x3018FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3018F8u;
            // 0x3018fc: 0x8e252e50  lw          $a1, 0x2E50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301900u; }
        if (ctx->pc != 0x301900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301900u; }
        if (ctx->pc != 0x301900u) { return; }
    }
    ctx->pc = 0x301900u;
label_301900:
    // 0x301900: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x301900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301904:
    // 0x301904: 0x12400088  beqz        $s2, . + 4 + (0x88 << 2)
label_301908:
    if (ctx->pc == 0x301908u) {
        ctx->pc = 0x30190Cu;
        goto label_30190c;
    }
    ctx->pc = 0x301904u;
    {
        const bool branch_taken_0x301904 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x301904) {
            ctx->pc = 0x301B28u;
            goto label_301b28;
        }
    }
    ctx->pc = 0x30190Cu;
label_30190c:
    // 0x30190c: 0x8e252e54  lw          $a1, 0x2E54($s1)
    ctx->pc = 0x30190cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11860)));
label_301910:
    // 0x301910: 0xc0a0e30  jal         func_2838C0
label_301914:
    if (ctx->pc == 0x301914u) {
        ctx->pc = 0x301914u;
            // 0x301914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301918u;
        goto label_301918;
    }
    ctx->pc = 0x301910u;
    SET_GPR_U32(ctx, 31, 0x301918u);
    ctx->pc = 0x301914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301910u;
            // 0x301914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301918u; }
        if (ctx->pc != 0x301918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301918u; }
        if (ctx->pc != 0x301918u) { return; }
    }
    ctx->pc = 0x301918u;
label_301918:
    // 0x301918: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x301918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30191c:
    // 0x30191c: 0x12600082  beqz        $s3, . + 4 + (0x82 << 2)
label_301920:
    if (ctx->pc == 0x301920u) {
        ctx->pc = 0x301924u;
        goto label_301924;
    }
    ctx->pc = 0x30191Cu;
    {
        const bool branch_taken_0x30191c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x30191c) {
            ctx->pc = 0x301B28u;
            goto label_301b28;
        }
    }
    ctx->pc = 0x301924u;
label_301924:
    // 0x301924: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x301924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_301928:
    // 0x301928: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x301928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_30192c:
    // 0x30192c: 0x320f809  jalr        $t9
label_301930:
    if (ctx->pc == 0x301930u) {
        ctx->pc = 0x301930u;
            // 0x301930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301934u;
        goto label_301934;
    }
    ctx->pc = 0x30192Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301934u);
        ctx->pc = 0x301930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30192Cu;
            // 0x301930: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301934u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301934u; }
            if (ctx->pc != 0x301934u) { return; }
        }
        }
    }
    ctx->pc = 0x301934u;
label_301934:
    // 0x301934: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x301934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_301938:
    // 0x301938: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_30193c:
    if (ctx->pc == 0x30193Cu) {
        ctx->pc = 0x301940u;
        goto label_301940;
    }
    ctx->pc = 0x301938u;
    {
        const bool branch_taken_0x301938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x301938) {
            ctx->pc = 0x301948u;
            goto label_301948;
        }
    }
    ctx->pc = 0x301940u;
label_301940:
    // 0x301940: 0x1000007a  b           . + 4 + (0x7A << 2)
label_301944:
    if (ctx->pc == 0x301944u) {
        ctx->pc = 0x301944u;
            // 0x301944: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x301948u;
        goto label_301948;
    }
    ctx->pc = 0x301940u;
    {
        const bool branch_taken_0x301940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301940u;
            // 0x301944: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301940) {
            ctx->pc = 0x301B2Cu;
            goto label_301b2c;
        }
    }
    ctx->pc = 0x301948u;
label_301948:
    // 0x301948: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x301948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30194c:
    // 0x30194c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30194cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301950:
    // 0x301950: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x301950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_301954:
    // 0x301954: 0x320f809  jalr        $t9
label_301958:
    if (ctx->pc == 0x301958u) {
        ctx->pc = 0x301958u;
            // 0x301958: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x30195Cu;
        goto label_30195c;
    }
    ctx->pc = 0x301954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30195Cu);
        ctx->pc = 0x301958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301954u;
            // 0x301958: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30195Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30195Cu; }
            if (ctx->pc != 0x30195Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30195Cu;
label_30195c:
    // 0x30195c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x30195cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_301960:
    // 0x301960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301964:
    // 0x301964: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x301964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_301968:
    // 0x301968: 0x320f809  jalr        $t9
label_30196c:
    if (ctx->pc == 0x30196Cu) {
        ctx->pc = 0x30196Cu;
            // 0x30196c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x301970u;
        goto label_301970;
    }
    ctx->pc = 0x301968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301970u);
        ctx->pc = 0x30196Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301968u;
            // 0x30196c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301970u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301970u; }
            if (ctx->pc != 0x301970u) { return; }
        }
        }
    }
    ctx->pc = 0x301970u;
label_301970:
    // 0x301970: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x301970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_301974:
    // 0x301974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301978:
    // 0x301978: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x301978u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_30197c:
    // 0x30197c: 0x320f809  jalr        $t9
label_301980:
    if (ctx->pc == 0x301980u) {
        ctx->pc = 0x301980u;
            // 0x301980: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x301984u;
        goto label_301984;
    }
    ctx->pc = 0x30197Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301984u);
        ctx->pc = 0x301980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30197Cu;
            // 0x301980: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301984u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301984u; }
            if (ctx->pc != 0x301984u) { return; }
        }
        }
    }
    ctx->pc = 0x301984u;
label_301984:
    // 0x301984: 0xc0bafe8  jal         func_2EBFA0
label_301988:
    if (ctx->pc == 0x301988u) {
        ctx->pc = 0x301988u;
            // 0x301988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30198Cu;
        goto label_30198c;
    }
    ctx->pc = 0x301984u;
    SET_GPR_U32(ctx, 31, 0x30198Cu);
    ctx->pc = 0x301988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301984u;
            // 0x301988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30198Cu; }
        if (ctx->pc != 0x30198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30198Cu; }
        if (ctx->pc != 0x30198Cu) { return; }
    }
    ctx->pc = 0x30198Cu;
label_30198c:
    // 0x30198c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x30198cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_301990:
    // 0x301990: 0x3c05c0a0  lui         $a1, 0xC0A0
    ctx->pc = 0x301990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49312 << 16));
label_301994:
    // 0x301994: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x301994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_301998:
    // 0x301998: 0x27b40084  addiu       $s4, $sp, 0x84
    ctx->pc = 0x301998u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_30199c:
    // 0x30199c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x30199cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3019a0:
    // 0x3019a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3019a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3019a4:
    // 0x3019a4: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x3019a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
label_3019a8:
    // 0x3019a8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x3019a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_3019ac:
    // 0x3019ac: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x3019acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_3019b0:
    // 0x3019b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3019b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3019b4:
    // 0x3019b4: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x3019b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_3019b8:
    // 0x3019b8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x3019b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3019bc:
    // 0x3019bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3019bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3019c0:
    // 0x3019c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3019c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3019c4:
    // 0x3019c4: 0xc04c574  jal         func_1315D0
label_3019c8:
    if (ctx->pc == 0x3019C8u) {
        ctx->pc = 0x3019C8u;
            // 0x3019c8: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->pc = 0x3019CCu;
        goto label_3019cc;
    }
    ctx->pc = 0x3019C4u;
    SET_GPR_U32(ctx, 31, 0x3019CCu);
    ctx->pc = 0x3019C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3019C4u;
            // 0x3019c8: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019CCu; }
        if (ctx->pc != 0x3019CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019CCu; }
        if (ctx->pc != 0x3019CCu) { return; }
    }
    ctx->pc = 0x3019CCu;
label_3019cc:
    // 0x3019cc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x3019ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3019d0:
    // 0x3019d0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3019d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_3019d4:
    // 0x3019d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3019d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3019d8:
    // 0x3019d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3019d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3019dc:
    // 0x3019dc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3019dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3019e0:
    // 0x3019e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3019e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3019e4:
    // 0x3019e4: 0xc04c518  jal         func_131460
label_3019e8:
    if (ctx->pc == 0x3019E8u) {
        ctx->pc = 0x3019E8u;
            // 0x3019e8: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->pc = 0x3019ECu;
        goto label_3019ec;
    }
    ctx->pc = 0x3019E4u;
    SET_GPR_U32(ctx, 31, 0x3019ECu);
    ctx->pc = 0x3019E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3019E4u;
            // 0x3019e8: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019ECu; }
        if (ctx->pc != 0x3019ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019ECu; }
        if (ctx->pc != 0x3019ECu) { return; }
    }
    ctx->pc = 0x3019ECu;
label_3019ec:
    // 0x3019ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3019ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3019f0:
    // 0x3019f0: 0xc04c504  jal         func_131410
label_3019f4:
    if (ctx->pc == 0x3019F4u) {
        ctx->pc = 0x3019F4u;
            // 0x3019f4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3019F8u;
        goto label_3019f8;
    }
    ctx->pc = 0x3019F0u;
    SET_GPR_U32(ctx, 31, 0x3019F8u);
    ctx->pc = 0x3019F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3019F0u;
            // 0x3019f4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019F8u; }
        if (ctx->pc != 0x3019F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019F8u; }
        if (ctx->pc != 0x3019F8u) { return; }
    }
    ctx->pc = 0x3019F8u;
label_3019f8:
    // 0x3019f8: 0x27b40064  addiu       $s4, $sp, 0x64
    ctx->pc = 0x3019f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_3019fc:
    // 0x3019fc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3019fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_301a00:
    // 0x301a00: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x301a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301a04:
    // 0x301a04: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x301a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_301a08:
    // 0x301a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x301a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301a0c:
    // 0x301a0c: 0xc04c374  jal         func_130DD0
label_301a10:
    if (ctx->pc == 0x301A10u) {
        ctx->pc = 0x301A10u;
            // 0x301a10: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x301A14u;
        goto label_301a14;
    }
    ctx->pc = 0x301A0Cu;
    SET_GPR_U32(ctx, 31, 0x301A14u);
    ctx->pc = 0x301A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301A0Cu;
            // 0x301a10: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A14u; }
        if (ctx->pc != 0x301A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A14u; }
        if (ctx->pc != 0x301A14u) { return; }
    }
    ctx->pc = 0x301A14u;
label_301a14:
    // 0x301a14: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x301a14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_301a18:
    // 0x301a18: 0xc0bb1e4  jal         func_2EC790
label_301a1c:
    if (ctx->pc == 0x301A1Cu) {
        ctx->pc = 0x301A1Cu;
            // 0x301a1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301A20u;
        goto label_301a20;
    }
    ctx->pc = 0x301A18u;
    SET_GPR_U32(ctx, 31, 0x301A20u);
    ctx->pc = 0x301A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301A18u;
            // 0x301a1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC790u;
    if (runtime->hasFunction(0x2EC790u)) {
        auto targetFn = runtime->lookupFunction(0x2EC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A20u; }
        if (ctx->pc != 0x301A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotate__14CCameraControlFf_0x2ec790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A20u; }
        if (ctx->pc != 0x301A20u) { return; }
    }
    ctx->pc = 0x301A20u;
label_301a20:
    // 0x301a20: 0x8e790060  lw          $t9, 0x60($s3)
    ctx->pc = 0x301a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_301a24:
    // 0x301a24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301a28:
    // 0x301a28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x301a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_301a2c:
    // 0x301a2c: 0x320f809  jalr        $t9
label_301a30:
    if (ctx->pc == 0x301A30u) {
        ctx->pc = 0x301A30u;
            // 0x301a30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x301A34u;
        goto label_301a34;
    }
    ctx->pc = 0x301A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301A34u);
        ctx->pc = 0x301A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301A2Cu;
            // 0x301a30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301A34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301A34u; }
            if (ctx->pc != 0x301A34u) { return; }
        }
        }
    }
    ctx->pc = 0x301A34u;
label_301a34:
    // 0x301a34: 0x8f84a0d0  lw          $a0, -0x5F30($gp)
    ctx->pc = 0x301a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
label_301a38:
    // 0x301a38: 0x8f83a0c8  lw          $v1, -0x5F38($gp)
    ctx->pc = 0x301a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
label_301a3c:
    // 0x301a3c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x301a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_301a40:
    // 0x301a40: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_301a44:
    if (ctx->pc == 0x301A44u) {
        ctx->pc = 0x301A44u;
            // 0x301a44: 0xaf84a0d0  sw          $a0, -0x5F30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 4));
        ctx->pc = 0x301A48u;
        goto label_301a48;
    }
    ctx->pc = 0x301A40u;
    {
        const bool branch_taken_0x301a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x301A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301A40u;
            // 0x301a44: 0xaf84a0d0  sw          $a0, -0x5F30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a40) {
            ctx->pc = 0x301A98u;
            goto label_301a98;
        }
    }
    ctx->pc = 0x301A48u;
label_301a48:
    // 0x301a48: 0x8f82a0d0  lw          $v0, -0x5F30($gp)
    ctx->pc = 0x301a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
label_301a4c:
    // 0x301a4c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_301a50:
    if (ctx->pc == 0x301A50u) {
        ctx->pc = 0x301A54u;
        goto label_301a54;
    }
    ctx->pc = 0x301A4Cu;
    {
        const bool branch_taken_0x301a4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x301a4c) {
            ctx->pc = 0x301A6Cu;
            goto label_301a6c;
        }
    }
    ctx->pc = 0x301A54u;
label_301a54:
    // 0x301a54: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x301a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_301a58:
    // 0x301a58: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x301a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_301a5c:
    // 0x301a5c: 0x320f809  jalr        $t9
label_301a60:
    if (ctx->pc == 0x301A60u) {
        ctx->pc = 0x301A60u;
            // 0x301a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301A64u;
        goto label_301a64;
    }
    ctx->pc = 0x301A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301A64u);
        ctx->pc = 0x301A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301A5Cu;
            // 0x301a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301A64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301A64u; }
            if (ctx->pc != 0x301A64u) { return; }
        }
        }
    }
    ctx->pc = 0x301A64u;
label_301a64:
    // 0x301a64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_301a68:
    if (ctx->pc == 0x301A68u) {
        ctx->pc = 0x301A6Cu;
        goto label_301a6c;
    }
    ctx->pc = 0x301A64u;
    {
        const bool branch_taken_0x301a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301a64) {
            ctx->pc = 0x301A98u;
            goto label_301a98;
        }
    }
    ctx->pc = 0x301A6Cu;
label_301a6c:
    // 0x301a6c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x301a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_301a70:
    // 0x301a70: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x301a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_301a74:
    // 0x301a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301a78:
    // 0x301a78: 0x24a520b0  addiu       $a1, $a1, 0x20B0
    ctx->pc = 0x301a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8368));
label_301a7c:
    // 0x301a7c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x301a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_301a80:
    // 0x301a80: 0x320f809  jalr        $t9
label_301a84:
    if (ctx->pc == 0x301A84u) {
        ctx->pc = 0x301A84u;
            // 0x301a84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x301A88u;
        goto label_301a88;
    }
    ctx->pc = 0x301A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301A88u);
        ctx->pc = 0x301A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301A80u;
            // 0x301a84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301A88u; }
            if (ctx->pc != 0x301A88u) { return; }
        }
        }
    }
    ctx->pc = 0x301A88u;
label_301a88:
    // 0x301a88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301a8c:
    // 0x301a8c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x301a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_301a90:
    // 0x301a90: 0xaf84a0c8  sw          $a0, -0x5F38($gp)
    ctx->pc = 0x301a90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942920), GPR_U32(ctx, 4));
label_301a94:
    // 0x301a94: 0xaf83a0d0  sw          $v1, -0x5F30($gp)
    ctx->pc = 0x301a94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942928), GPR_U32(ctx, 3));
label_301a98:
    // 0x301a98: 0x8f83a0c8  lw          $v1, -0x5F38($gp)
    ctx->pc = 0x301a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942920)));
label_301a9c:
    // 0x301a9c: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
label_301aa0:
    if (ctx->pc == 0x301AA0u) {
        ctx->pc = 0x301AA4u;
        goto label_301aa4;
    }
    ctx->pc = 0x301A9Cu;
    {
        const bool branch_taken_0x301a9c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x301a9c) {
            ctx->pc = 0x301B28u;
            goto label_301b28;
        }
    }
    ctx->pc = 0x301AA4u;
label_301aa4:
    // 0x301aa4: 0x8f83a0d0  lw          $v1, -0x5F30($gp)
    ctx->pc = 0x301aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942928)));
label_301aa8:
    // 0x301aa8: 0x1c60001f  bgtz        $v1, . + 4 + (0x1F << 2)
label_301aac:
    if (ctx->pc == 0x301AACu) {
        ctx->pc = 0x301AB0u;
        goto label_301ab0;
    }
    ctx->pc = 0x301AA8u;
    {
        const bool branch_taken_0x301aa8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x301aa8) {
            ctx->pc = 0x301B28u;
            goto label_301b28;
        }
    }
    ctx->pc = 0x301AB0u;
label_301ab0:
    // 0x301ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301ab4:
    // 0x301ab4: 0xc0bb538  jal         func_2ED4E0
label_301ab8:
    if (ctx->pc == 0x301AB8u) {
        ctx->pc = 0x301AB8u;
            // 0x301ab8: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x301ABCu;
        goto label_301abc;
    }
    ctx->pc = 0x301AB4u;
    SET_GPR_U32(ctx, 31, 0x301ABCu);
    ctx->pc = 0x301AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301AB4u;
            // 0x301ab8: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301ABCu; }
        if (ctx->pc != 0x301ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301ABCu; }
        if (ctx->pc != 0x301ABCu) { return; }
    }
    ctx->pc = 0x301ABCu;
label_301abc:
    // 0x301abc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_301ac0:
    if (ctx->pc == 0x301AC0u) {
        ctx->pc = 0x301AC4u;
        goto label_301ac4;
    }
    ctx->pc = 0x301ABCu;
    {
        const bool branch_taken_0x301abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301abc) {
            ctx->pc = 0x301B28u;
            goto label_301b28;
        }
    }
    ctx->pc = 0x301AC4u;
label_301ac4:
    // 0x301ac4: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x301ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_301ac8:
    // 0x301ac8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301acc:
    // 0x301acc: 0xc0c3e94  jal         func_30FA50
label_301ad0:
    if (ctx->pc == 0x301AD0u) {
        ctx->pc = 0x301AD4u;
        goto label_301ad4;
    }
    ctx->pc = 0x301ACCu;
    SET_GPR_U32(ctx, 31, 0x301AD4u);
    ctx->pc = 0x30FA50u;
    if (runtime->hasFunction(0x30FA50u)) {
        auto targetFn = runtime->lookupFunction(0x30FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301AD4u; }
        if (ctx->pc != 0x301AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendLine__Ff_0x30fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301AD4u; }
        if (ctx->pc != 0x301AD4u) { return; }
    }
    ctx->pc = 0x301AD4u;
label_301ad4:
    // 0x301ad4: 0xc0c4244  jal         func_310910
label_301ad8:
    if (ctx->pc == 0x301AD8u) {
        ctx->pc = 0x301ADCu;
        goto label_301adc;
    }
    ctx->pc = 0x301AD4u;
    SET_GPR_U32(ctx, 31, 0x301ADCu);
    ctx->pc = 0x310910u;
    if (runtime->hasFunction(0x310910u)) {
        auto targetFn = runtime->lookupFunction(0x310910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301ADCu; }
        if (ctx->pc != 0x301ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetLineVelo__Fv_0x310910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301ADCu; }
        if (ctx->pc != 0x301ADCu) { return; }
    }
    ctx->pc = 0x301ADCu;
label_301adc:
    // 0x301adc: 0xc0bfd3c  jal         func_2FF4F0
label_301ae0:
    if (ctx->pc == 0x301AE0u) {
        ctx->pc = 0x301AE0u;
            // 0x301ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301AE4u;
        goto label_301ae4;
    }
    ctx->pc = 0x301ADCu;
    SET_GPR_U32(ctx, 31, 0x301AE4u);
    ctx->pc = 0x301AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301ADCu;
            // 0x301ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FF4F0u;
    if (runtime->hasFunction(0x2FF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301AE4u; }
        if (ctx->pc != 0x301AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndSelectCastingPoint__FP6CScene_0x2ff4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301AE4u; }
        if (ctx->pc != 0x301AE4u) { return; }
    }
    ctx->pc = 0x301AE4u;
label_301ae4:
    // 0x301ae4: 0xc0bf1d0  jal         func_2FC740
label_301ae8:
    if (ctx->pc == 0x301AE8u) {
        ctx->pc = 0x301AE8u;
            // 0x301ae8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301AECu;
        goto label_301aec;
    }
    ctx->pc = 0x301AE4u;
    SET_GPR_U32(ctx, 31, 0x301AECu);
    ctx->pc = 0x301AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301AE4u;
            // 0x301ae8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301AECu; }
        if (ctx->pc != 0x301AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301AECu; }
        if (ctx->pc != 0x301AECu) { return; }
    }
    ctx->pc = 0x301AECu;
label_301aec:
    // 0x301aec: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x301aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_301af0:
    // 0x301af0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x301af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_301af4:
    // 0x301af4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_301af8:
    // 0x301af8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x301af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_301afc:
    // 0x301afc: 0xc04c374  jal         func_130DD0
label_301b00:
    if (ctx->pc == 0x301B00u) {
        ctx->pc = 0x301B00u;
            // 0x301b00: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x301B04u;
        goto label_301b04;
    }
    ctx->pc = 0x301AFCu;
    SET_GPR_U32(ctx, 31, 0x301B04u);
    ctx->pc = 0x301B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301AFCu;
            // 0x301b00: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B04u; }
        if (ctx->pc != 0x301B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B04u; }
        if (ctx->pc != 0x301B04u) { return; }
    }
    ctx->pc = 0x301B04u;
label_301b04:
    // 0x301b04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_301b08:
    // 0x301b08: 0xc0bb224  jal         func_2EC890
label_301b0c:
    if (ctx->pc == 0x301B0Cu) {
        ctx->pc = 0x301B0Cu;
            // 0x301b0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x301B10u;
        goto label_301b10;
    }
    ctx->pc = 0x301B08u;
    SET_GPR_U32(ctx, 31, 0x301B10u);
    ctx->pc = 0x301B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301B08u;
            // 0x301b0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B10u; }
        if (ctx->pc != 0x301B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B10u; }
        if (ctx->pc != 0x301B10u) { return; }
    }
    ctx->pc = 0x301B10u;
label_301b10:
    // 0x301b10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x301b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_301b14:
    // 0x301b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301b18:
    // 0x301b18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301b1c:
    // 0x301b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301b20:
    // 0x301b20: 0xc0a9844  jal         func_2A6110
label_301b24:
    if (ctx->pc == 0x301B24u) {
        ctx->pc = 0x301B24u;
            // 0x301b24: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x301B28u;
        goto label_301b28;
    }
    ctx->pc = 0x301B20u;
    SET_GPR_U32(ctx, 31, 0x301B28u);
    ctx->pc = 0x301B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301B20u;
            // 0x301b24: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B28u; }
        if (ctx->pc != 0x301B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301B28u; }
        if (ctx->pc != 0x301B28u) { return; }
    }
    ctx->pc = 0x301B28u;
label_301b28:
    // 0x301b28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x301b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_301b2c:
    // 0x301b2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x301b2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_301b30:
    // 0x301b30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x301b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_301b34:
    // 0x301b34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x301b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_301b38:
    // 0x301b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x301b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_301b3c:
    // 0x301b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_301b40:
    // 0x301b40: 0x3e00008  jr          $ra
label_301b44:
    if (ctx->pc == 0x301B44u) {
        ctx->pc = 0x301B44u;
            // 0x301b44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x301B48u;
        goto label_fallthrough_0x301b40;
    }
    ctx->pc = 0x301B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301B40u;
            // 0x301b44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x301b40:
    ctx->pc = 0x301B48u;
}
