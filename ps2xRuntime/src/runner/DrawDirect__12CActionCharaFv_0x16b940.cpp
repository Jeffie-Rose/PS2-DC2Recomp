#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDirect__12CActionCharaFv
// Address: 0x16b940 - 0x16ba70
void DrawDirect__12CActionCharaFv_0x16b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDirect__12CActionCharaFv_0x16b940");
#endif

    switch (ctx->pc) {
        case 0x16b940u: goto label_16b940;
        case 0x16b944u: goto label_16b944;
        case 0x16b948u: goto label_16b948;
        case 0x16b94cu: goto label_16b94c;
        case 0x16b950u: goto label_16b950;
        case 0x16b954u: goto label_16b954;
        case 0x16b958u: goto label_16b958;
        case 0x16b95cu: goto label_16b95c;
        case 0x16b960u: goto label_16b960;
        case 0x16b964u: goto label_16b964;
        case 0x16b968u: goto label_16b968;
        case 0x16b96cu: goto label_16b96c;
        case 0x16b970u: goto label_16b970;
        case 0x16b974u: goto label_16b974;
        case 0x16b978u: goto label_16b978;
        case 0x16b97cu: goto label_16b97c;
        case 0x16b980u: goto label_16b980;
        case 0x16b984u: goto label_16b984;
        case 0x16b988u: goto label_16b988;
        case 0x16b98cu: goto label_16b98c;
        case 0x16b990u: goto label_16b990;
        case 0x16b994u: goto label_16b994;
        case 0x16b998u: goto label_16b998;
        case 0x16b99cu: goto label_16b99c;
        case 0x16b9a0u: goto label_16b9a0;
        case 0x16b9a4u: goto label_16b9a4;
        case 0x16b9a8u: goto label_16b9a8;
        case 0x16b9acu: goto label_16b9ac;
        case 0x16b9b0u: goto label_16b9b0;
        case 0x16b9b4u: goto label_16b9b4;
        case 0x16b9b8u: goto label_16b9b8;
        case 0x16b9bcu: goto label_16b9bc;
        case 0x16b9c0u: goto label_16b9c0;
        case 0x16b9c4u: goto label_16b9c4;
        case 0x16b9c8u: goto label_16b9c8;
        case 0x16b9ccu: goto label_16b9cc;
        case 0x16b9d0u: goto label_16b9d0;
        case 0x16b9d4u: goto label_16b9d4;
        case 0x16b9d8u: goto label_16b9d8;
        case 0x16b9dcu: goto label_16b9dc;
        case 0x16b9e0u: goto label_16b9e0;
        case 0x16b9e4u: goto label_16b9e4;
        case 0x16b9e8u: goto label_16b9e8;
        case 0x16b9ecu: goto label_16b9ec;
        case 0x16b9f0u: goto label_16b9f0;
        case 0x16b9f4u: goto label_16b9f4;
        case 0x16b9f8u: goto label_16b9f8;
        case 0x16b9fcu: goto label_16b9fc;
        case 0x16ba00u: goto label_16ba00;
        case 0x16ba04u: goto label_16ba04;
        case 0x16ba08u: goto label_16ba08;
        case 0x16ba0cu: goto label_16ba0c;
        case 0x16ba10u: goto label_16ba10;
        case 0x16ba14u: goto label_16ba14;
        case 0x16ba18u: goto label_16ba18;
        case 0x16ba1cu: goto label_16ba1c;
        case 0x16ba20u: goto label_16ba20;
        case 0x16ba24u: goto label_16ba24;
        case 0x16ba28u: goto label_16ba28;
        case 0x16ba2cu: goto label_16ba2c;
        case 0x16ba30u: goto label_16ba30;
        case 0x16ba34u: goto label_16ba34;
        case 0x16ba38u: goto label_16ba38;
        case 0x16ba3cu: goto label_16ba3c;
        case 0x16ba40u: goto label_16ba40;
        case 0x16ba44u: goto label_16ba44;
        case 0x16ba48u: goto label_16ba48;
        case 0x16ba4cu: goto label_16ba4c;
        case 0x16ba50u: goto label_16ba50;
        case 0x16ba54u: goto label_16ba54;
        case 0x16ba58u: goto label_16ba58;
        case 0x16ba5cu: goto label_16ba5c;
        case 0x16ba60u: goto label_16ba60;
        case 0x16ba64u: goto label_16ba64;
        case 0x16ba68u: goto label_16ba68;
        case 0x16ba6cu: goto label_16ba6c;
        default: break;
    }

    ctx->pc = 0x16b940u;

label_16b940:
    // 0x16b940: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_16b944:
    // 0x16b944: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16b948:
    // 0x16b948: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16b948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_16b94c:
    // 0x16b94c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16b94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16b950:
    // 0x16b950: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16b954:
    // 0x16b954: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16b954u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16b958:
    // 0x16b958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16b95c:
    // 0x16b95c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16b960:
    // 0x16b960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16b964:
    // 0x16b964: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16b964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16b968:
    // 0x16b968: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16b968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16b96c:
    // 0x16b96c: 0x320f809  jalr        $t9
label_16b970:
    if (ctx->pc == 0x16B970u) {
        ctx->pc = 0x16B970u;
            // 0x16b970: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16B974u;
        goto label_16b974;
    }
    ctx->pc = 0x16B96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16B974u);
        ctx->pc = 0x16B970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B96Cu;
            // 0x16b970: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16B974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B974u; }
            if (ctx->pc != 0x16B974u) { return; }
        }
        }
    }
    ctx->pc = 0x16B974u;
label_16b974:
    // 0x16b974: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16b974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16b978:
    // 0x16b978: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16b978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16b97c:
    // 0x16b97c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16b97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16b980:
    // 0x16b980: 0x320f809  jalr        $t9
label_16b984:
    if (ctx->pc == 0x16B984u) {
        ctx->pc = 0x16B984u;
            // 0x16b984: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16B988u;
        goto label_16b988;
    }
    ctx->pc = 0x16B980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16B988u);
        ctx->pc = 0x16B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B980u;
            // 0x16b984: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16B988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B988u; }
            if (ctx->pc != 0x16B988u) { return; }
        }
        }
    }
    ctx->pc = 0x16B988u;
label_16b988:
    // 0x16b988: 0x86820bf8  lh          $v0, 0xBF8($s4)
    ctx->pc = 0x16b988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 3064)));
label_16b98c:
    // 0x16b98c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_16b990:
    if (ctx->pc == 0x16B990u) {
        ctx->pc = 0x16B994u;
        goto label_16b994;
    }
    ctx->pc = 0x16B98Cu;
    {
        const bool branch_taken_0x16b98c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16b98c) {
            ctx->pc = 0x16B9A4u;
            goto label_16b9a4;
        }
    }
    ctx->pc = 0x16B994u;
label_16b994:
    // 0x16b994: 0xc6810bfc  lwc1        $f1, 0xBFC($s4)
    ctx->pc = 0x16b994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16b998:
    // 0x16b998: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x16b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16b99c:
    // 0x16b99c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16b99cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16b9a0:
    // 0x16b9a0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x16b9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_16b9a4:
    // 0x16b9a4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16b9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16b9a8:
    // 0x16b9a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16b9ac:
    // 0x16b9ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16b9acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_16b9b0:
    // 0x16b9b0: 0x320f809  jalr        $t9
label_16b9b4:
    if (ctx->pc == 0x16B9B4u) {
        ctx->pc = 0x16B9B4u;
            // 0x16b9b4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16B9B8u;
        goto label_16b9b8;
    }
    ctx->pc = 0x16B9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16B9B8u);
        ctx->pc = 0x16B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9B0u;
            // 0x16b9b4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16B9B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B9B8u; }
            if (ctx->pc != 0x16B9B8u) { return; }
        }
        }
    }
    ctx->pc = 0x16B9B8u;
label_16b9b8:
    // 0x16b9b8: 0xc050df4  jal         func_1437D0
label_16b9bc:
    if (ctx->pc == 0x16B9BCu) {
        ctx->pc = 0x16B9BCu;
            // 0x16b9bc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x16B9C0u;
        goto label_16b9c0;
    }
    ctx->pc = 0x16B9B8u;
    SET_GPR_U32(ctx, 31, 0x16B9C0u);
    ctx->pc = 0x16B9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9B8u;
            // 0x16b9bc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9C0u; }
        if (ctx->pc != 0x16B9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9C0u; }
        if (ctx->pc != 0x16B9C0u) { return; }
    }
    ctx->pc = 0x16B9C0u;
label_16b9c0:
    // 0x16b9c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16b9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b9c4:
    // 0x16b9c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16b9c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b9c8:
    // 0x16b9c8: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x16b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_16b9cc:
    // 0x16b9cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x16b9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_16b9d0:
    // 0x16b9d0: 0x24440734  addiu       $a0, $v0, 0x734
    ctx->pc = 0x16b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
label_16b9d4:
    // 0x16b9d4: 0xc070490  jal         func_1C1240
label_16b9d8:
    if (ctx->pc == 0x16B9D8u) {
        ctx->pc = 0x16B9D8u;
            // 0x16b9d8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x16B9DCu;
        goto label_16b9dc;
    }
    ctx->pc = 0x16B9D4u;
    SET_GPR_U32(ctx, 31, 0x16B9DCu);
    ctx->pc = 0x16B9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9D4u;
            // 0x16b9d8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1240u;
    if (runtime->hasFunction(0x1C1240u)) {
        auto targetFn = runtime->lookupFunction(0x1C1240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9DCu; }
        if (ctx->pc != 0x16B9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatPallet__12CPalletAnimeFPfPf_0x1c1240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9DCu; }
        if (ctx->pc != 0x16B9DCu) { return; }
    }
    ctx->pc = 0x16B9DCu;
label_16b9dc:
    // 0x16b9dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_16b9e0:
    if (ctx->pc == 0x16B9E0u) {
        ctx->pc = 0x16B9E0u;
            // 0x16b9e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16B9E4u;
        goto label_16b9e4;
    }
    ctx->pc = 0x16B9DCu;
    {
        const bool branch_taken_0x16b9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9DCu;
            // 0x16b9e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9dc) {
            ctx->pc = 0x16B9F4u;
            goto label_16b9f4;
        }
    }
    ctx->pc = 0x16B9E4u;
label_16b9e4:
    // 0x16b9e4: 0xc050dec  jal         func_1437B0
label_16b9e8:
    if (ctx->pc == 0x16B9E8u) {
        ctx->pc = 0x16B9ECu;
        goto label_16b9ec;
    }
    ctx->pc = 0x16B9E4u;
    SET_GPR_U32(ctx, 31, 0x16B9ECu);
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9ECu; }
        if (ctx->pc != 0x16B9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B9ECu; }
        if (ctx->pc != 0x16B9ECu) { return; }
    }
    ctx->pc = 0x16B9ECu;
label_16b9ec:
    // 0x16b9ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_16b9f0:
    if (ctx->pc == 0x16B9F0u) {
        ctx->pc = 0x16B9F4u;
        goto label_16b9f4;
    }
    ctx->pc = 0x16B9ECu;
    {
        const bool branch_taken_0x16b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b9ec) {
            ctx->pc = 0x16BA04u;
            goto label_16ba04;
        }
    }
    ctx->pc = 0x16B9F4u;
label_16b9f4:
    // 0x16b9f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16b9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16b9f8:
    // 0x16b9f8: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x16b9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_16b9fc:
    // 0x16b9fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_16ba00:
    if (ctx->pc == 0x16BA00u) {
        ctx->pc = 0x16BA00u;
            // 0x16ba00: 0x2673000e  addiu       $s3, $s3, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
        ctx->pc = 0x16BA04u;
        goto label_16ba04;
    }
    ctx->pc = 0x16B9FCu;
    {
        const bool branch_taken_0x16b9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B9FCu;
            // 0x16ba00: 0x2673000e  addiu       $s3, $s3, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9fc) {
            ctx->pc = 0x16B9C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b9c8;
        }
    }
    ctx->pc = 0x16BA04u;
label_16ba04:
    // 0x16ba04: 0x0  nop
    ctx->pc = 0x16ba04u;
    // NOP
label_16ba08:
    // 0x16ba08: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_16ba0c:
    if (ctx->pc == 0x16BA0Cu) {
        ctx->pc = 0x16BA10u;
        goto label_16ba10;
    }
    ctx->pc = 0x16BA08u;
    {
        const bool branch_taken_0x16ba08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba08) {
            ctx->pc = 0x16BA30u;
            goto label_16ba30;
        }
    }
    ctx->pc = 0x16BA10u;
label_16ba10:
    // 0x16ba10: 0xc05cc7c  jal         func_1731F0
label_16ba14:
    if (ctx->pc == 0x16BA14u) {
        ctx->pc = 0x16BA14u;
            // 0x16ba14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BA18u;
        goto label_16ba18;
    }
    ctx->pc = 0x16BA10u;
    SET_GPR_U32(ctx, 31, 0x16BA18u);
    ctx->pc = 0x16BA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA10u;
            // 0x16ba14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1731F0u;
    if (runtime->hasFunction(0x1731F0u)) {
        auto targetFn = runtime->lookupFunction(0x1731F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA18u; }
        if (ctx->pc != 0x16BA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__11CCharacter2Fv_0x1731f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA18u; }
        if (ctx->pc != 0x16BA18u) { return; }
    }
    ctx->pc = 0x16BA18u;
label_16ba18:
    // 0x16ba18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ba18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ba1c:
    // 0x16ba1c: 0xc05a970  jal         func_16A5C0
label_16ba20:
    if (ctx->pc == 0x16BA20u) {
        ctx->pc = 0x16BA20u;
            // 0x16ba20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16BA24u;
        goto label_16ba24;
    }
    ctx->pc = 0x16BA1Cu;
    SET_GPR_U32(ctx, 31, 0x16BA24u);
    ctx->pc = 0x16BA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA1Cu;
            // 0x16ba20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A5C0u;
    if (runtime->hasFunction(0x16A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x16A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA24u; }
        if (ctx->pc != 0x16BA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCollision__12CActionCharaFv_0x16a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA24u; }
        if (ctx->pc != 0x16BA24u) { return; }
    }
    ctx->pc = 0x16BA24u;
label_16ba24:
    // 0x16ba24: 0x8e310678  lw          $s1, 0x678($s1)
    ctx->pc = 0x16ba24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_16ba28:
    // 0x16ba28: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_16ba2c:
    if (ctx->pc == 0x16BA2Cu) {
        ctx->pc = 0x16BA30u;
        goto label_16ba30;
    }
    ctx->pc = 0x16BA28u;
    {
        const bool branch_taken_0x16ba28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ba28) {
            ctx->pc = 0x16BA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16ba10;
        }
    }
    ctx->pc = 0x16BA30u;
label_16ba30:
    // 0x16ba30: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x16ba30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_16ba34:
    // 0x16ba34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16ba34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16ba38:
    // 0x16ba38: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16ba38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_16ba3c:
    // 0x16ba3c: 0x320f809  jalr        $t9
label_16ba40:
    if (ctx->pc == 0x16BA40u) {
        ctx->pc = 0x16BA40u;
            // 0x16ba40: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16BA44u;
        goto label_16ba44;
    }
    ctx->pc = 0x16BA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BA44u);
        ctx->pc = 0x16BA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA3Cu;
            // 0x16ba40: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16BA44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16BA44u; }
            if (ctx->pc != 0x16BA44u) { return; }
        }
        }
    }
    ctx->pc = 0x16BA44u;
label_16ba44:
    // 0x16ba44: 0xc050dec  jal         func_1437B0
label_16ba48:
    if (ctx->pc == 0x16BA48u) {
        ctx->pc = 0x16BA48u;
            // 0x16ba48: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x16BA4Cu;
        goto label_16ba4c;
    }
    ctx->pc = 0x16BA44u;
    SET_GPR_U32(ctx, 31, 0x16BA4Cu);
    ctx->pc = 0x16BA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA44u;
            // 0x16ba48: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA4Cu; }
        if (ctx->pc != 0x16BA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA4Cu; }
        if (ctx->pc != 0x16BA4Cu) { return; }
    }
    ctx->pc = 0x16BA4Cu;
label_16ba4c:
    // 0x16ba4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16ba4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ba50:
    // 0x16ba50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16ba54:
    // 0x16ba54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16ba54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16ba58:
    // 0x16ba58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16ba58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16ba5c:
    // 0x16ba5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16ba5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16ba60:
    // 0x16ba60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ba60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16ba64:
    // 0x16ba64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ba64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16ba68:
    // 0x16ba68: 0x3e00008  jr          $ra
label_16ba6c:
    if (ctx->pc == 0x16BA6Cu) {
        ctx->pc = 0x16BA6Cu;
            // 0x16ba6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x16BA70u;
        goto label_fallthrough_0x16ba68;
    }
    ctx->pc = 0x16BA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BA68u;
            // 0x16ba6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16ba68:
    ctx->pc = 0x16BA70u;
}
