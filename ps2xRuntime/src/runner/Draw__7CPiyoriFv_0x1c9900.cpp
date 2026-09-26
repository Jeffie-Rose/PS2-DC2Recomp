#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__7CPiyoriFv
// Address: 0x1c9900 - 0x1c9b3c
void Draw__7CPiyoriFv_0x1c9900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__7CPiyoriFv_0x1c9900");
#endif

    switch (ctx->pc) {
        case 0x1c9900u: goto label_1c9900;
        case 0x1c9904u: goto label_1c9904;
        case 0x1c9908u: goto label_1c9908;
        case 0x1c990cu: goto label_1c990c;
        case 0x1c9910u: goto label_1c9910;
        case 0x1c9914u: goto label_1c9914;
        case 0x1c9918u: goto label_1c9918;
        case 0x1c991cu: goto label_1c991c;
        case 0x1c9920u: goto label_1c9920;
        case 0x1c9924u: goto label_1c9924;
        case 0x1c9928u: goto label_1c9928;
        case 0x1c992cu: goto label_1c992c;
        case 0x1c9930u: goto label_1c9930;
        case 0x1c9934u: goto label_1c9934;
        case 0x1c9938u: goto label_1c9938;
        case 0x1c993cu: goto label_1c993c;
        case 0x1c9940u: goto label_1c9940;
        case 0x1c9944u: goto label_1c9944;
        case 0x1c9948u: goto label_1c9948;
        case 0x1c994cu: goto label_1c994c;
        case 0x1c9950u: goto label_1c9950;
        case 0x1c9954u: goto label_1c9954;
        case 0x1c9958u: goto label_1c9958;
        case 0x1c995cu: goto label_1c995c;
        case 0x1c9960u: goto label_1c9960;
        case 0x1c9964u: goto label_1c9964;
        case 0x1c9968u: goto label_1c9968;
        case 0x1c996cu: goto label_1c996c;
        case 0x1c9970u: goto label_1c9970;
        case 0x1c9974u: goto label_1c9974;
        case 0x1c9978u: goto label_1c9978;
        case 0x1c997cu: goto label_1c997c;
        case 0x1c9980u: goto label_1c9980;
        case 0x1c9984u: goto label_1c9984;
        case 0x1c9988u: goto label_1c9988;
        case 0x1c998cu: goto label_1c998c;
        case 0x1c9990u: goto label_1c9990;
        case 0x1c9994u: goto label_1c9994;
        case 0x1c9998u: goto label_1c9998;
        case 0x1c999cu: goto label_1c999c;
        case 0x1c99a0u: goto label_1c99a0;
        case 0x1c99a4u: goto label_1c99a4;
        case 0x1c99a8u: goto label_1c99a8;
        case 0x1c99acu: goto label_1c99ac;
        case 0x1c99b0u: goto label_1c99b0;
        case 0x1c99b4u: goto label_1c99b4;
        case 0x1c99b8u: goto label_1c99b8;
        case 0x1c99bcu: goto label_1c99bc;
        case 0x1c99c0u: goto label_1c99c0;
        case 0x1c99c4u: goto label_1c99c4;
        case 0x1c99c8u: goto label_1c99c8;
        case 0x1c99ccu: goto label_1c99cc;
        case 0x1c99d0u: goto label_1c99d0;
        case 0x1c99d4u: goto label_1c99d4;
        case 0x1c99d8u: goto label_1c99d8;
        case 0x1c99dcu: goto label_1c99dc;
        case 0x1c99e0u: goto label_1c99e0;
        case 0x1c99e4u: goto label_1c99e4;
        case 0x1c99e8u: goto label_1c99e8;
        case 0x1c99ecu: goto label_1c99ec;
        case 0x1c99f0u: goto label_1c99f0;
        case 0x1c99f4u: goto label_1c99f4;
        case 0x1c99f8u: goto label_1c99f8;
        case 0x1c99fcu: goto label_1c99fc;
        case 0x1c9a00u: goto label_1c9a00;
        case 0x1c9a04u: goto label_1c9a04;
        case 0x1c9a08u: goto label_1c9a08;
        case 0x1c9a0cu: goto label_1c9a0c;
        case 0x1c9a10u: goto label_1c9a10;
        case 0x1c9a14u: goto label_1c9a14;
        case 0x1c9a18u: goto label_1c9a18;
        case 0x1c9a1cu: goto label_1c9a1c;
        case 0x1c9a20u: goto label_1c9a20;
        case 0x1c9a24u: goto label_1c9a24;
        case 0x1c9a28u: goto label_1c9a28;
        case 0x1c9a2cu: goto label_1c9a2c;
        case 0x1c9a30u: goto label_1c9a30;
        case 0x1c9a34u: goto label_1c9a34;
        case 0x1c9a38u: goto label_1c9a38;
        case 0x1c9a3cu: goto label_1c9a3c;
        case 0x1c9a40u: goto label_1c9a40;
        case 0x1c9a44u: goto label_1c9a44;
        case 0x1c9a48u: goto label_1c9a48;
        case 0x1c9a4cu: goto label_1c9a4c;
        case 0x1c9a50u: goto label_1c9a50;
        case 0x1c9a54u: goto label_1c9a54;
        case 0x1c9a58u: goto label_1c9a58;
        case 0x1c9a5cu: goto label_1c9a5c;
        case 0x1c9a60u: goto label_1c9a60;
        case 0x1c9a64u: goto label_1c9a64;
        case 0x1c9a68u: goto label_1c9a68;
        case 0x1c9a6cu: goto label_1c9a6c;
        case 0x1c9a70u: goto label_1c9a70;
        case 0x1c9a74u: goto label_1c9a74;
        case 0x1c9a78u: goto label_1c9a78;
        case 0x1c9a7cu: goto label_1c9a7c;
        case 0x1c9a80u: goto label_1c9a80;
        case 0x1c9a84u: goto label_1c9a84;
        case 0x1c9a88u: goto label_1c9a88;
        case 0x1c9a8cu: goto label_1c9a8c;
        case 0x1c9a90u: goto label_1c9a90;
        case 0x1c9a94u: goto label_1c9a94;
        case 0x1c9a98u: goto label_1c9a98;
        case 0x1c9a9cu: goto label_1c9a9c;
        case 0x1c9aa0u: goto label_1c9aa0;
        case 0x1c9aa4u: goto label_1c9aa4;
        case 0x1c9aa8u: goto label_1c9aa8;
        case 0x1c9aacu: goto label_1c9aac;
        case 0x1c9ab0u: goto label_1c9ab0;
        case 0x1c9ab4u: goto label_1c9ab4;
        case 0x1c9ab8u: goto label_1c9ab8;
        case 0x1c9abcu: goto label_1c9abc;
        case 0x1c9ac0u: goto label_1c9ac0;
        case 0x1c9ac4u: goto label_1c9ac4;
        case 0x1c9ac8u: goto label_1c9ac8;
        case 0x1c9accu: goto label_1c9acc;
        case 0x1c9ad0u: goto label_1c9ad0;
        case 0x1c9ad4u: goto label_1c9ad4;
        case 0x1c9ad8u: goto label_1c9ad8;
        case 0x1c9adcu: goto label_1c9adc;
        case 0x1c9ae0u: goto label_1c9ae0;
        case 0x1c9ae4u: goto label_1c9ae4;
        case 0x1c9ae8u: goto label_1c9ae8;
        case 0x1c9aecu: goto label_1c9aec;
        case 0x1c9af0u: goto label_1c9af0;
        case 0x1c9af4u: goto label_1c9af4;
        case 0x1c9af8u: goto label_1c9af8;
        case 0x1c9afcu: goto label_1c9afc;
        case 0x1c9b00u: goto label_1c9b00;
        case 0x1c9b04u: goto label_1c9b04;
        case 0x1c9b08u: goto label_1c9b08;
        case 0x1c9b0cu: goto label_1c9b0c;
        case 0x1c9b10u: goto label_1c9b10;
        case 0x1c9b14u: goto label_1c9b14;
        case 0x1c9b18u: goto label_1c9b18;
        case 0x1c9b1cu: goto label_1c9b1c;
        case 0x1c9b20u: goto label_1c9b20;
        case 0x1c9b24u: goto label_1c9b24;
        case 0x1c9b28u: goto label_1c9b28;
        case 0x1c9b2cu: goto label_1c9b2c;
        case 0x1c9b30u: goto label_1c9b30;
        case 0x1c9b34u: goto label_1c9b34;
        case 0x1c9b38u: goto label_1c9b38;
        default: break;
    }

    ctx->pc = 0x1c9900u;

label_1c9900:
    // 0x1c9900: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1c9900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_1c9904:
    // 0x1c9904: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c9904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c9908:
    // 0x1c9908: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c9908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1c990c:
    // 0x1c990c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c9910:
    // 0x1c9910: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c9910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9914:
    // 0x1c9914: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c9914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c9918:
    // 0x1c9918: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c9918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c991c:
    // 0x1c991c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c991cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c9920:
    // 0x1c9920: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c9920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c9924:
    // 0x1c9924: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c9924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9928:
    // 0x1c9928: 0x1080007b  beqz        $a0, . + 4 + (0x7B << 2)
label_1c992c:
    if (ctx->pc == 0x1C992Cu) {
        ctx->pc = 0x1C9930u;
        goto label_1c9930;
    }
    ctx->pc = 0x1C9928u;
    {
        const bool branch_taken_0x1c9928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9928) {
            ctx->pc = 0x1C9B18u;
            goto label_1c9b18;
        }
    }
    ctx->pc = 0x1C9930u;
label_1c9930:
    // 0x1c9930: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c9930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9934:
    // 0x1c9934: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1c9934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1c9938:
    // 0x1c9938: 0x320f809  jalr        $t9
label_1c993c:
    if (ctx->pc == 0x1C993Cu) {
        ctx->pc = 0x1C993Cu;
            // 0x1c993c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1C9940u;
        goto label_1c9940;
    }
    ctx->pc = 0x1C9938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C9940u);
        ctx->pc = 0x1C993Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9938u;
            // 0x1c993c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C9940u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C9940u; }
            if (ctx->pc != 0x1C9940u) { return; }
        }
        }
    }
    ctx->pc = 0x1C9940u;
label_1c9940:
    // 0x1c9940: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x1c9940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1c9944:
    // 0x1c9944: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x1c9944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9948:
    // 0x1c9948: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c9948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c994c:
    // 0x1c994c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1c994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9950:
    // 0x1c9950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c9954:
    // 0x1c9954: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1c9954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1c9958:
    // 0x1c9958: 0x8670001c  lh          $s0, 0x1C($s3)
    ctx->pc = 0x1c9958u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_1c995c:
    // 0x1c995c: 0xc66c0018  lwc1        $f12, 0x18($s3)
    ctx->pc = 0x1c995cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9960:
    // 0x1c9960: 0xc6740010  lwc1        $f20, 0x10($s3)
    ctx->pc = 0x1c9960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c9964:
    // 0x1c9964: 0x2a010010  slti        $at, $s0, 0x10
    ctx->pc = 0x1c9964u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1c9968:
    // 0x1c9968: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1c996c:
    if (ctx->pc == 0x1C996Cu) {
        ctx->pc = 0x1C996Cu;
            // 0x1c996c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1C9970u;
        goto label_1c9970;
    }
    ctx->pc = 0x1C9968u;
    {
        const bool branch_taken_0x1c9968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C996Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9968u;
            // 0x1c996c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9968) {
            ctx->pc = 0x1C99ACu;
            goto label_1c99ac;
        }
    }
    ctx->pc = 0x1C9970u;
label_1c9970:
    // 0x1c9970: 0xc0a24f0  jal         func_2893C0
label_1c9974:
    if (ctx->pc == 0x1C9974u) {
        ctx->pc = 0x1C9974u;
            // 0x1c9974: 0x1088c0  sll         $s1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->pc = 0x1C9978u;
        goto label_1c9978;
    }
    ctx->pc = 0x1C9970u;
    SET_GPR_U32(ctx, 31, 0x1C9978u);
    ctx->pc = 0x1C9974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9970u;
            // 0x1c9974: 0x1088c0  sll         $s1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9978u; }
        if (ctx->pc != 0x1C9978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9978u; }
        if (ctx->pc != 0x1C9978u) { return; }
    }
    ctx->pc = 0x1C9978u;
label_1c9978:
    // 0x1c9978: 0x3c034038  lui         $v1, 0x4038
    ctx->pc = 0x1c9978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16440 << 16));
label_1c997c:
    // 0x1c997c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c997cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9980:
    // 0x1c9980: 0xc0a20a8  jal         func_2882A0
label_1c9984:
    if (ctx->pc == 0x1C9984u) {
        ctx->pc = 0x1C9984u;
            // 0x1c9984: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x1C9988u;
        goto label_1c9988;
    }
    ctx->pc = 0x1C9980u;
    SET_GPR_U32(ctx, 31, 0x1C9988u);
    ctx->pc = 0x1C9984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9980u;
            // 0x1c9984: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9988u; }
        if (ctx->pc != 0x1C9988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9988u; }
        if (ctx->pc != 0x1C9988u) { return; }
    }
    ctx->pc = 0x1C9988u;
label_1c9988:
    // 0x1c9988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c998c:
    // 0x1c998c: 0xc0a215c  jal         func_288570
label_1c9990:
    if (ctx->pc == 0x1C9990u) {
        ctx->pc = 0x1C9990u;
            // 0x1c9990: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9994u;
        goto label_1c9994;
    }
    ctx->pc = 0x1C998Cu;
    SET_GPR_U32(ctx, 31, 0x1C9994u);
    ctx->pc = 0x1C9990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C998Cu;
            // 0x1c9990: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9994u; }
        if (ctx->pc != 0x1C9994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9994u; }
        if (ctx->pc != 0x1C9994u) { return; }
    }
    ctx->pc = 0x1C9994u;
label_1c9994:
    // 0x1c9994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9998:
    // 0x1c9998: 0xc0a1ffe  jal         func_287FF8
label_1c999c:
    if (ctx->pc == 0x1C999Cu) {
        ctx->pc = 0x1C999Cu;
            // 0x1c999c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C99A0u;
        goto label_1c99a0;
    }
    ctx->pc = 0x1C9998u;
    SET_GPR_U32(ctx, 31, 0x1C99A0u);
    ctx->pc = 0x1C999Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9998u;
            // 0x1c999c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99A0u; }
        if (ctx->pc != 0x1C99A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99A0u; }
        if (ctx->pc != 0x1C99A0u) { return; }
    }
    ctx->pc = 0x1C99A0u;
label_1c99a0:
    // 0x1c99a0: 0xc0a21f2  jal         func_2887C8
label_1c99a4:
    if (ctx->pc == 0x1C99A4u) {
        ctx->pc = 0x1C99A4u;
            // 0x1c99a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C99A8u;
        goto label_1c99a8;
    }
    ctx->pc = 0x1C99A0u;
    SET_GPR_U32(ctx, 31, 0x1C99A8u);
    ctx->pc = 0x1C99A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99A0u;
            // 0x1c99a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99A8u; }
        if (ctx->pc != 0x1C99A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99A8u; }
        if (ctx->pc != 0x1C99A8u) { return; }
    }
    ctx->pc = 0x1C99A8u;
label_1c99a8:
    // 0x1c99a8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1c99a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1c99ac:
    // 0x1c99ac: 0xc04d0e8  jal         func_1343A0
label_1c99b0:
    if (ctx->pc == 0x1C99B0u) {
        ctx->pc = 0x1C99B0u;
            // 0x1c99b0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1C99B4u;
        goto label_1c99b4;
    }
    ctx->pc = 0x1C99ACu;
    SET_GPR_U32(ctx, 31, 0x1C99B4u);
    ctx->pc = 0x1C99B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99ACu;
            // 0x1c99b0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99B4u; }
        if (ctx->pc != 0x1C99B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99B4u; }
        if (ctx->pc != 0x1C99B4u) { return; }
    }
    ctx->pc = 0x1C99B4u;
label_1c99b4:
    // 0x1c99b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c99b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c99b8:
    // 0x1c99b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c99b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c99bc:
    // 0x1c99bc: 0xc04d104  jal         func_134410
label_1c99c0:
    if (ctx->pc == 0x1C99C0u) {
        ctx->pc = 0x1C99C0u;
            // 0x1c99c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C99C4u;
        goto label_1c99c4;
    }
    ctx->pc = 0x1C99BCu;
    SET_GPR_U32(ctx, 31, 0x1C99C4u);
    ctx->pc = 0x1C99C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99BCu;
            // 0x1c99c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99C4u; }
        if (ctx->pc != 0x1C99C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99C4u; }
        if (ctx->pc != 0x1C99C4u) { return; }
    }
    ctx->pc = 0x1C99C4u;
label_1c99c4:
    // 0x1c99c4: 0xc079f5c  jal         func_1E7D70
label_1c99c8:
    if (ctx->pc == 0x1C99C8u) {
        ctx->pc = 0x1C99C8u;
            // 0x1c99c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1C99CCu;
        goto label_1c99cc;
    }
    ctx->pc = 0x1C99C4u;
    SET_GPR_U32(ctx, 31, 0x1C99CCu);
    ctx->pc = 0x1C99C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99C4u;
            // 0x1c99c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99CCu; }
        if (ctx->pc != 0x1C99CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99CCu; }
        if (ctx->pc != 0x1C99CCu) { return; }
    }
    ctx->pc = 0x1C99CCu;
label_1c99cc:
    // 0x1c99cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c99ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c99d0:
    // 0x1c99d0: 0xc04d44c  jal         func_135130
label_1c99d4:
    if (ctx->pc == 0x1C99D4u) {
        ctx->pc = 0x1C99D4u;
            // 0x1c99d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C99D8u;
        goto label_1c99d8;
    }
    ctx->pc = 0x1C99D0u;
    SET_GPR_U32(ctx, 31, 0x1C99D8u);
    ctx->pc = 0x1C99D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99D0u;
            // 0x1c99d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99D8u; }
        if (ctx->pc != 0x1C99D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99D8u; }
        if (ctx->pc != 0x1C99D8u) { return; }
    }
    ctx->pc = 0x1C99D8u;
label_1c99d8:
    // 0x1c99d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c99d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c99dc:
    // 0x1c99dc: 0xc04d3e4  jal         func_134F90
label_1c99e0:
    if (ctx->pc == 0x1C99E0u) {
        ctx->pc = 0x1C99E0u;
            // 0x1c99e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C99E4u;
        goto label_1c99e4;
    }
    ctx->pc = 0x1C99DCu;
    SET_GPR_U32(ctx, 31, 0x1C99E4u);
    ctx->pc = 0x1C99E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99DCu;
            // 0x1c99e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99E4u; }
        if (ctx->pc != 0x1C99E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99E4u; }
        if (ctx->pc != 0x1C99E4u) { return; }
    }
    ctx->pc = 0x1C99E4u;
label_1c99e4:
    // 0x1c99e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c99e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c99e8:
    // 0x1c99e8: 0xc04d424  jal         func_135090
label_1c99ec:
    if (ctx->pc == 0x1C99ECu) {
        ctx->pc = 0x1C99ECu;
            // 0x1c99ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C99F0u;
        goto label_1c99f0;
    }
    ctx->pc = 0x1C99E8u;
    SET_GPR_U32(ctx, 31, 0x1C99F0u);
    ctx->pc = 0x1C99ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99E8u;
            // 0x1c99ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99F0u; }
        if (ctx->pc != 0x1C99F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99F0u; }
        if (ctx->pc != 0x1C99F0u) { return; }
    }
    ctx->pc = 0x1C99F0u;
label_1c99f0:
    // 0x1c99f0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c99f4:
    // 0x1c99f4: 0xc04d430  jal         func_1350C0
label_1c99f8:
    if (ctx->pc == 0x1C99F8u) {
        ctx->pc = 0x1C99F8u;
            // 0x1c99f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C99FCu;
        goto label_1c99fc;
    }
    ctx->pc = 0x1C99F4u;
    SET_GPR_U32(ctx, 31, 0x1C99FCu);
    ctx->pc = 0x1C99F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99F4u;
            // 0x1c99f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99FCu; }
        if (ctx->pc != 0x1C99FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99FCu; }
        if (ctx->pc != 0x1C99FCu) { return; }
    }
    ctx->pc = 0x1C99FCu;
label_1c99fc:
    // 0x1c99fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c9a00:
    // 0x1c9a00: 0xc04d428  jal         func_1350A0
label_1c9a04:
    if (ctx->pc == 0x1C9A04u) {
        ctx->pc = 0x1C9A04u;
            // 0x1c9a04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C9A08u;
        goto label_1c9a08;
    }
    ctx->pc = 0x1C9A00u;
    SET_GPR_U32(ctx, 31, 0x1C9A08u);
    ctx->pc = 0x1C9A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A00u;
            // 0x1c9a04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A08u; }
        if (ctx->pc != 0x1C9A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A08u; }
        if (ctx->pc != 0x1C9A08u) { return; }
    }
    ctx->pc = 0x1C9A08u;
label_1c9a08:
    // 0x1c9a08: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c9a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c9a0c:
    // 0x1c9a0c: 0xc04d128  jal         func_1344A0
label_1c9a10:
    if (ctx->pc == 0x1C9A10u) {
        ctx->pc = 0x1C9A10u;
            // 0x1c9a10: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1C9A14u;
        goto label_1c9a14;
    }
    ctx->pc = 0x1C9A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A14u);
    ctx->pc = 0x1C9A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A0Cu;
            // 0x1c9a10: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A14u; }
        if (ctx->pc != 0x1C9A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A14u; }
        if (ctx->pc != 0x1C9A14u) { return; }
    }
    ctx->pc = 0x1C9A14u;
label_1c9a14:
    // 0x1c9a14: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c9a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c9a18:
    // 0x1c9a18: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c9a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a1c:
    // 0x1c9a1c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c9a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c9a20:
    // 0x1c9a20: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c9a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a24:
    // 0x1c9a24: 0xc04d320  jal         func_134C80
label_1c9a28:
    if (ctx->pc == 0x1C9A28u) {
        ctx->pc = 0x1C9A28u;
            // 0x1c9a28: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A2Cu;
        goto label_1c9a2c;
    }
    ctx->pc = 0x1C9A24u;
    SET_GPR_U32(ctx, 31, 0x1C9A2Cu);
    ctx->pc = 0x1C9A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A24u;
            // 0x1c9a28: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A2Cu; }
        if (ctx->pc != 0x1C9A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A2Cu; }
        if (ctx->pc != 0x1C9A2Cu) { return; }
    }
    ctx->pc = 0x1C9A2Cu;
label_1c9a2c:
    // 0x1c9a2c: 0x8f858e90  lw          $a1, -0x7170($gp)
    ctx->pc = 0x1c9a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
label_1c9a30:
    // 0x1c9a30: 0xc04d368  jal         func_134DA0
label_1c9a34:
    if (ctx->pc == 0x1C9A34u) {
        ctx->pc = 0x1C9A34u;
            // 0x1c9a34: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1C9A38u;
        goto label_1c9a38;
    }
    ctx->pc = 0x1C9A30u;
    SET_GPR_U32(ctx, 31, 0x1C9A38u);
    ctx->pc = 0x1C9A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A30u;
            // 0x1c9a34: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A38u; }
        if (ctx->pc != 0x1C9A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A38u; }
        if (ctx->pc != 0x1C9A38u) { return; }
    }
    ctx->pc = 0x1C9A38u;
label_1c9a38:
    // 0x1c9a38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c9a3c:
    // 0x1c9a3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c9a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a40:
    // 0x1c9a40: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1c9a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_1c9a44:
    // 0x1c9a44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c9a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a48:
    // 0x1c9a48: 0xc047964  jal         func_11E590
label_1c9a4c:
    if (ctx->pc == 0x1C9A4Cu) {
        ctx->pc = 0x1C9A4Cu;
            // 0x1c9a4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1C9A50u;
        goto label_1c9a50;
    }
    ctx->pc = 0x1C9A48u;
    SET_GPR_U32(ctx, 31, 0x1C9A50u);
    ctx->pc = 0x1C9A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A48u;
            // 0x1c9a4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A50u; }
        if (ctx->pc != 0x1C9A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A50u; }
        if (ctx->pc != 0x1C9A50u) { return; }
    }
    ctx->pc = 0x1C9A50u;
label_1c9a50:
    // 0x1c9a50: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x1c9a50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1c9a54:
    // 0x1c9a54: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1c9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1c9a58:
    // 0x1c9a58: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c9a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9a5c:
    // 0x1c9a5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c9a60:
    // 0x1c9a60: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1c9a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c9a64:
    // 0x1c9a64: 0xc047a42  jal         func_11E908
label_1c9a68:
    if (ctx->pc == 0x1C9A68u) {
        ctx->pc = 0x1C9A68u;
            // 0x1c9a68: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1C9A6Cu;
        goto label_1c9a6c;
    }
    ctx->pc = 0x1C9A64u;
    SET_GPR_U32(ctx, 31, 0x1C9A6Cu);
    ctx->pc = 0x1C9A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A64u;
            // 0x1c9a68: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A6Cu; }
        if (ctx->pc != 0x1C9A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A6Cu; }
        if (ctx->pc != 0x1C9A6Cu) { return; }
    }
    ctx->pc = 0x1C9A6Cu;
label_1c9a6c:
    // 0x1c9a6c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1c9a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c9a70:
    // 0x1c9a70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c9a70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1c9a74:
    // 0x1c9a74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c9a74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c9a78:
    // 0x1c9a78: 0xc047a42  jal         func_11E908
label_1c9a7c:
    if (ctx->pc == 0x1C9A7Cu) {
        ctx->pc = 0x1C9A7Cu;
            // 0x1c9a7c: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->pc = 0x1C9A80u;
        goto label_1c9a80;
    }
    ctx->pc = 0x1C9A78u;
    SET_GPR_U32(ctx, 31, 0x1C9A80u);
    ctx->pc = 0x1C9A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A78u;
            // 0x1c9a7c: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A80u; }
        if (ctx->pc != 0x1C9A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A80u; }
        if (ctx->pc != 0x1C9A80u) { return; }
    }
    ctx->pc = 0x1C9A80u;
label_1c9a80:
    // 0x1c9a80: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x1c9a80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1c9a84:
    // 0x1c9a84: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1c9a88:
    // 0x1c9a88: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1c9a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1c9a8c:
    // 0x1c9a8c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1c9a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1c9a90:
    // 0x1c9a90: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c9a94:
    // 0x1c9a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a98:
    // 0x1c9a98: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c9a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9a9c:
    // 0x1c9a9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c9a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c9aa0:
    // 0x1c9aa0: 0x0  nop
    ctx->pc = 0x1c9aa0u;
    // NOP
label_1c9aa4:
    // 0x1c9aa4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c9aa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1c9aa8:
    // 0x1c9aa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c9aac:
    // 0x1c9aac: 0xc0516ec  jal         func_145BB0
label_1c9ab0:
    if (ctx->pc == 0x1C9AB0u) {
        ctx->pc = 0x1C9AB0u;
            // 0x1c9ab0: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x1C9AB4u;
        goto label_1c9ab4;
    }
    ctx->pc = 0x1C9AACu;
    SET_GPR_U32(ctx, 31, 0x1C9AB4u);
    ctx->pc = 0x1C9AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9AACu;
            // 0x1c9ab0: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AB4u; }
        if (ctx->pc != 0x1C9AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AB4u; }
        if (ctx->pc != 0x1C9AB4u) { return; }
    }
    ctx->pc = 0x1C9AB4u;
label_1c9ab4:
    // 0x1c9ab4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1c9ab8:
    if (ctx->pc == 0x1C9AB8u) {
        ctx->pc = 0x1C9AB8u;
            // 0x1c9ab8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1C9ABCu;
        goto label_1c9abc;
    }
    ctx->pc = 0x1C9AB4u;
    {
        const bool branch_taken_0x1c9ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9AB4u;
            // 0x1c9ab8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ab4) {
            ctx->pc = 0x1C9AF0u;
            goto label_1c9af0;
        }
    }
    ctx->pc = 0x1C9ABCu;
label_1c9abc:
    // 0x1c9abc: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x1c9abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_1c9ac0:
    // 0x1c9ac0: 0xc04d35c  jal         func_134D70
label_1c9ac4:
    if (ctx->pc == 0x1C9AC4u) {
        ctx->pc = 0x1C9AC4u;
            // 0x1c9ac4: 0x24060061  addiu       $a2, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->pc = 0x1C9AC8u;
        goto label_1c9ac8;
    }
    ctx->pc = 0x1C9AC0u;
    SET_GPR_U32(ctx, 31, 0x1C9AC8u);
    ctx->pc = 0x1C9AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9AC0u;
            // 0x1c9ac4: 0x24060061  addiu       $a2, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AC8u; }
        if (ctx->pc != 0x1C9AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AC8u; }
        if (ctx->pc != 0x1C9AC8u) { return; }
    }
    ctx->pc = 0x1C9AC8u;
label_1c9ac8:
    // 0x1c9ac8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c9ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c9acc:
    // 0x1c9acc: 0xc04d318  jal         func_134C60
label_1c9ad0:
    if (ctx->pc == 0x1C9AD0u) {
        ctx->pc = 0x1C9AD0u;
            // 0x1c9ad0: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x1C9AD4u;
        goto label_1c9ad4;
    }
    ctx->pc = 0x1C9ACCu;
    SET_GPR_U32(ctx, 31, 0x1C9AD4u);
    ctx->pc = 0x1C9AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9ACCu;
            // 0x1c9ad0: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AD4u; }
        if (ctx->pc != 0x1C9AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AD4u; }
        if (ctx->pc != 0x1C9AD4u) { return; }
    }
    ctx->pc = 0x1C9AD4u;
label_1c9ad4:
    // 0x1c9ad4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c9ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c9ad8:
    // 0x1c9ad8: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x1c9ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_1c9adc:
    // 0x1c9adc: 0xc04d35c  jal         func_134D70
label_1c9ae0:
    if (ctx->pc == 0x1C9AE0u) {
        ctx->pc = 0x1C9AE0u;
            // 0x1c9ae0: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x1C9AE4u;
        goto label_1c9ae4;
    }
    ctx->pc = 0x1C9ADCu;
    SET_GPR_U32(ctx, 31, 0x1C9AE4u);
    ctx->pc = 0x1C9AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9ADCu;
            // 0x1c9ae0: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AE4u; }
        if (ctx->pc != 0x1C9AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AE4u; }
        if (ctx->pc != 0x1C9AE4u) { return; }
    }
    ctx->pc = 0x1C9AE4u;
label_1c9ae4:
    // 0x1c9ae4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c9ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c9ae8:
    // 0x1c9ae8: 0xc04d318  jal         func_134C60
label_1c9aec:
    if (ctx->pc == 0x1C9AECu) {
        ctx->pc = 0x1C9AECu;
            // 0x1c9aec: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x1C9AF0u;
        goto label_1c9af0;
    }
    ctx->pc = 0x1C9AE8u;
    SET_GPR_U32(ctx, 31, 0x1C9AF0u);
    ctx->pc = 0x1C9AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9AE8u;
            // 0x1c9aec: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AF0u; }
        if (ctx->pc != 0x1C9AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AF0u; }
        if (ctx->pc != 0x1C9AF0u) { return; }
    }
    ctx->pc = 0x1C9AF0u;
label_1c9af0:
    // 0x1c9af0: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x1c9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
label_1c9af4:
    // 0x1c9af4: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1c9af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_1c9af8:
    // 0x1c9af8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c9af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c9afc:
    // 0x1c9afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c9b00:
    // 0x1c9b00: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1c9b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1c9b04:
    // 0x1c9b04: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1c9b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1c9b08:
    // 0x1c9b08: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_1c9b0c:
    if (ctx->pc == 0x1C9B0Cu) {
        ctx->pc = 0x1C9B0Cu;
            // 0x1c9b0c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1C9B10u;
        goto label_1c9b10;
    }
    ctx->pc = 0x1C9B08u;
    {
        const bool branch_taken_0x1c9b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B08u;
            // 0x1c9b0c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b08) {
            ctx->pc = 0x1C9A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9a48;
        }
    }
    ctx->pc = 0x1C9B10u;
label_1c9b10:
    // 0x1c9b10: 0xc04d1a4  jal         func_134690
label_1c9b14:
    if (ctx->pc == 0x1C9B14u) {
        ctx->pc = 0x1C9B14u;
            // 0x1c9b14: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1C9B18u;
        goto label_1c9b18;
    }
    ctx->pc = 0x1C9B10u;
    SET_GPR_U32(ctx, 31, 0x1C9B18u);
    ctx->pc = 0x1C9B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B10u;
            // 0x1c9b14: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B18u; }
        if (ctx->pc != 0x1C9B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B18u; }
        if (ctx->pc != 0x1C9B18u) { return; }
    }
    ctx->pc = 0x1C9B18u;
label_1c9b18:
    // 0x1c9b18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c9b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c9b1c:
    // 0x1c9b1c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c9b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c9b20:
    // 0x1c9b20: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c9b20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c9b24:
    // 0x1c9b24: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c9b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c9b28:
    // 0x1c9b28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c9b28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c9b2c:
    // 0x1c9b2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c9b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9b30:
    // 0x1c9b30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c9b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9b34:
    // 0x1c9b34: 0x3e00008  jr          $ra
label_1c9b38:
    if (ctx->pc == 0x1C9B38u) {
        ctx->pc = 0x1C9B38u;
            // 0x1c9b38: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x1C9B3Cu;
        goto label_fallthrough_0x1c9b34;
    }
    ctx->pc = 0x1C9B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B34u;
            // 0x1c9b38: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c9b34:
    ctx->pc = 0x1C9B3Cu;
}
