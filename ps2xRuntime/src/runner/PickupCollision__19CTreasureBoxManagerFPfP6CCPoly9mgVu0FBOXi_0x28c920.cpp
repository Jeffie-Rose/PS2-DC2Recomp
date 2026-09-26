#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PickupCollision__19CTreasureBoxManagerFPfP6CCPoly9mgVu0FBOXi
// Address: 0x28c920 - 0x28ca68
void PickupCollision__19CTreasureBoxManagerFPfP6CCPoly9mgVu0FBOXi_0x28c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PickupCollision__19CTreasureBoxManagerFPfP6CCPoly9mgVu0FBOXi_0x28c920");
#endif

    switch (ctx->pc) {
        case 0x28c920u: goto label_28c920;
        case 0x28c924u: goto label_28c924;
        case 0x28c928u: goto label_28c928;
        case 0x28c92cu: goto label_28c92c;
        case 0x28c930u: goto label_28c930;
        case 0x28c934u: goto label_28c934;
        case 0x28c938u: goto label_28c938;
        case 0x28c93cu: goto label_28c93c;
        case 0x28c940u: goto label_28c940;
        case 0x28c944u: goto label_28c944;
        case 0x28c948u: goto label_28c948;
        case 0x28c94cu: goto label_28c94c;
        case 0x28c950u: goto label_28c950;
        case 0x28c954u: goto label_28c954;
        case 0x28c958u: goto label_28c958;
        case 0x28c95cu: goto label_28c95c;
        case 0x28c960u: goto label_28c960;
        case 0x28c964u: goto label_28c964;
        case 0x28c968u: goto label_28c968;
        case 0x28c96cu: goto label_28c96c;
        case 0x28c970u: goto label_28c970;
        case 0x28c974u: goto label_28c974;
        case 0x28c978u: goto label_28c978;
        case 0x28c97cu: goto label_28c97c;
        case 0x28c980u: goto label_28c980;
        case 0x28c984u: goto label_28c984;
        case 0x28c988u: goto label_28c988;
        case 0x28c98cu: goto label_28c98c;
        case 0x28c990u: goto label_28c990;
        case 0x28c994u: goto label_28c994;
        case 0x28c998u: goto label_28c998;
        case 0x28c99cu: goto label_28c99c;
        case 0x28c9a0u: goto label_28c9a0;
        case 0x28c9a4u: goto label_28c9a4;
        case 0x28c9a8u: goto label_28c9a8;
        case 0x28c9acu: goto label_28c9ac;
        case 0x28c9b0u: goto label_28c9b0;
        case 0x28c9b4u: goto label_28c9b4;
        case 0x28c9b8u: goto label_28c9b8;
        case 0x28c9bcu: goto label_28c9bc;
        case 0x28c9c0u: goto label_28c9c0;
        case 0x28c9c4u: goto label_28c9c4;
        case 0x28c9c8u: goto label_28c9c8;
        case 0x28c9ccu: goto label_28c9cc;
        case 0x28c9d0u: goto label_28c9d0;
        case 0x28c9d4u: goto label_28c9d4;
        case 0x28c9d8u: goto label_28c9d8;
        case 0x28c9dcu: goto label_28c9dc;
        case 0x28c9e0u: goto label_28c9e0;
        case 0x28c9e4u: goto label_28c9e4;
        case 0x28c9e8u: goto label_28c9e8;
        case 0x28c9ecu: goto label_28c9ec;
        case 0x28c9f0u: goto label_28c9f0;
        case 0x28c9f4u: goto label_28c9f4;
        case 0x28c9f8u: goto label_28c9f8;
        case 0x28c9fcu: goto label_28c9fc;
        case 0x28ca00u: goto label_28ca00;
        case 0x28ca04u: goto label_28ca04;
        case 0x28ca08u: goto label_28ca08;
        case 0x28ca0cu: goto label_28ca0c;
        case 0x28ca10u: goto label_28ca10;
        case 0x28ca14u: goto label_28ca14;
        case 0x28ca18u: goto label_28ca18;
        case 0x28ca1cu: goto label_28ca1c;
        case 0x28ca20u: goto label_28ca20;
        case 0x28ca24u: goto label_28ca24;
        case 0x28ca28u: goto label_28ca28;
        case 0x28ca2cu: goto label_28ca2c;
        case 0x28ca30u: goto label_28ca30;
        case 0x28ca34u: goto label_28ca34;
        case 0x28ca38u: goto label_28ca38;
        case 0x28ca3cu: goto label_28ca3c;
        case 0x28ca40u: goto label_28ca40;
        case 0x28ca44u: goto label_28ca44;
        case 0x28ca48u: goto label_28ca48;
        case 0x28ca4cu: goto label_28ca4c;
        case 0x28ca50u: goto label_28ca50;
        case 0x28ca54u: goto label_28ca54;
        case 0x28ca58u: goto label_28ca58;
        case 0x28ca5cu: goto label_28ca5c;
        case 0x28ca60u: goto label_28ca60;
        case 0x28ca64u: goto label_28ca64;
        default: break;
    }

    ctx->pc = 0x28c920u;

label_28c920:
    // 0x28c920: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x28c920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_28c924:
    // 0x28c924: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28c924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_28c928:
    // 0x28c928: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28c928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_28c92c:
    // 0x28c92c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28c92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_28c930:
    // 0x28c930: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x28c930u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28c934:
    // 0x28c934: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28c934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28c938:
    // 0x28c938: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x28c938u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28c93c:
    // 0x28c93c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28c93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28c940:
    // 0x28c940: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28c940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c944:
    // 0x28c944: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28c948:
    // 0x28c948: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x28c948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_28c94c:
    // 0x28c94c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28c950:
    // 0x28c950: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28c950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c954:
    // 0x28c954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28c958:
    // 0x28c958: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28c958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c95c:
    // 0x28c95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28c960:
    // 0x28c960: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28c960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c964:
    // 0x28c964: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x28c964u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_28c968:
    // 0x28c968: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c96c:
    // 0x28c96c: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x28c96cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_28c970:
    // 0x28c970: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x28c970u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_28c974:
    // 0x28c974: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x28c974u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_28c978:
    // 0x28c978: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x28c978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_28c97c:
    // 0x28c97c: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x28c97cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_28c980:
    // 0x28c980: 0x80420064  lb          $v0, 0x64($v0)
    ctx->pc = 0x28c980u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_28c984:
    // 0x28c984: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_28c988:
    if (ctx->pc == 0x28C988u) {
        ctx->pc = 0x28C98Cu;
        goto label_28c98c;
    }
    ctx->pc = 0x28C984u;
    {
        const bool branch_taken_0x28c984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c984) {
            ctx->pc = 0x28CA28u;
            goto label_28ca28;
        }
    }
    ctx->pc = 0x28C98Cu;
label_28c98c:
    // 0x28c98c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x28c98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28c990:
    // 0x28c990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28c990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c994:
    // 0x28c994: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28c994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28c998:
    // 0x28c998: 0x320f809  jalr        $t9
label_28c99c:
    if (ctx->pc == 0x28C99Cu) {
        ctx->pc = 0x28C99Cu;
            // 0x28c99c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x28C9A0u;
        goto label_28c9a0;
    }
    ctx->pc = 0x28C998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C9A0u);
        ctx->pc = 0x28C99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C998u;
            // 0x28c99c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C9A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C9A0u; }
            if (ctx->pc != 0x28C9A0u) { return; }
        }
        }
    }
    ctx->pc = 0x28C9A0u;
label_28c9a0:
    // 0x28c9a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x28c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_28c9a4:
    // 0x28c9a4: 0xc04c018  jal         func_130060
label_28c9a8:
    if (ctx->pc == 0x28C9A8u) {
        ctx->pc = 0x28C9A8u;
            // 0x28c9a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28C9ACu;
        goto label_28c9ac;
    }
    ctx->pc = 0x28C9A4u;
    SET_GPR_U32(ctx, 31, 0x28C9ACu);
    ctx->pc = 0x28C9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9A4u;
            // 0x28c9a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C9ACu; }
        if (ctx->pc != 0x28C9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C9ACu; }
        if (ctx->pc != 0x28C9ACu) { return; }
    }
    ctx->pc = 0x28C9ACu;
label_28c9ac:
    // 0x28c9ac: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x28c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_28c9b0:
    // 0x28c9b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28c9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28c9b4:
    // 0x28c9b4: 0x0  nop
    ctx->pc = 0x28c9b4u;
    // NOP
label_28c9b8:
    // 0x28c9b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28c9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28c9bc:
    // 0x28c9bc: 0x0  nop
    ctx->pc = 0x28c9bcu;
    // NOP
label_28c9c0:
    // 0x28c9c0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_28c9c4:
    if (ctx->pc == 0x28C9C4u) {
        ctx->pc = 0x28C9C8u;
        goto label_28c9c8;
    }
    ctx->pc = 0x28C9C0u;
    {
        const bool branch_taken_0x28c9c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28c9c0) {
            ctx->pc = 0x28CA28u;
            goto label_28ca28;
        }
    }
    ctx->pc = 0x28C9C8u;
label_28c9c8:
    // 0x28c9c8: 0x8ea40a98  lw          $a0, 0xA98($s5)
    ctx->pc = 0x28c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2712)));
label_28c9cc:
    // 0x28c9cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c9ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c9d0:
    // 0x28c9d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28c9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28c9d4:
    // 0x28c9d4: 0x320f809  jalr        $t9
label_28c9d8:
    if (ctx->pc == 0x28C9D8u) {
        ctx->pc = 0x28C9D8u;
            // 0x28c9d8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x28C9DCu;
        goto label_28c9dc;
    }
    ctx->pc = 0x28C9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C9DCu);
        ctx->pc = 0x28C9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9D4u;
            // 0x28c9d8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C9DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C9DCu; }
            if (ctx->pc != 0x28C9DCu) { return; }
        }
        }
    }
    ctx->pc = 0x28C9DCu;
label_28c9dc:
    // 0x28c9dc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x28c9dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28c9e0:
    // 0x28c9e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c9e4:
    // 0x28c9e4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x28c9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_28c9e8:
    // 0x28c9e8: 0x320f809  jalr        $t9
label_28c9ec:
    if (ctx->pc == 0x28C9ECu) {
        ctx->pc = 0x28C9ECu;
            // 0x28c9ec: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x28C9F0u;
        goto label_28c9f0;
    }
    ctx->pc = 0x28C9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C9F0u);
        ctx->pc = 0x28C9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9E8u;
            // 0x28c9ec: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C9F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C9F0u; }
            if (ctx->pc != 0x28C9F0u) { return; }
        }
        }
    }
    ctx->pc = 0x28C9F0u;
label_28c9f0:
    // 0x28c9f0: 0x8ea40a98  lw          $a0, 0xA98($s5)
    ctx->pc = 0x28c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2712)));
label_28c9f4:
    // 0x28c9f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c9f8:
    // 0x28c9f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x28c9f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_28c9fc:
    // 0x28c9fc: 0x320f809  jalr        $t9
label_28ca00:
    if (ctx->pc == 0x28CA00u) {
        ctx->pc = 0x28CA00u;
            // 0x28ca00: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x28CA04u;
        goto label_28ca04;
    }
    ctx->pc = 0x28C9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28CA04u);
        ctx->pc = 0x28CA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9FCu;
            // 0x28ca00: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28CA04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28CA04u; }
            if (ctx->pc != 0x28CA04u) { return; }
        }
        }
    }
    ctx->pc = 0x28CA04u;
label_28ca04:
    // 0x28ca04: 0x8ea40a98  lw          $a0, 0xA98($s5)
    ctx->pc = 0x28ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2712)));
label_28ca08:
    // 0x28ca08: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x28ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_28ca0c:
    // 0x28ca0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28ca10:
    // 0x28ca10: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x28ca10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_28ca14:
    // 0x28ca14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28ca18:
    // 0x28ca18: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x28ca18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28ca1c:
    // 0x28ca1c: 0xc051ef4  jal         func_147BD0
label_28ca20:
    if (ctx->pc == 0x28CA20u) {
        ctx->pc = 0x28CA20u;
            // 0x28ca20: 0x2c22821  addu        $a1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->pc = 0x28CA24u;
        goto label_28ca24;
    }
    ctx->pc = 0x28CA1Cu;
    SET_GPR_U32(ctx, 31, 0x28CA24u);
    ctx->pc = 0x28CA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA1Cu;
            // 0x28ca20: 0x2c22821  addu        $a1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147BD0u;
    if (runtime->hasFunction(0x147BD0u)) {
        auto targetFn = runtime->lookupFunction(0x147BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA24u; }
        if (ctx->pc != 0x28CA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickUpNearPoly__9CColFrameFP6CCPolyRC9mgVu0FBOXi_0x147bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA24u; }
        if (ctx->pc != 0x28CA24u) { return; }
    }
    ctx->pc = 0x28CA24u;
label_28ca24:
    // 0x28ca24: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28ca24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28ca28:
    // 0x28ca28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28ca28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28ca2c:
    // 0x28ca2c: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x28ca2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
label_28ca30:
    // 0x28ca30: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_28ca34:
    if (ctx->pc == 0x28CA34u) {
        ctx->pc = 0x28CA34u;
            // 0x28ca34: 0x26730070  addiu       $s3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x28CA38u;
        goto label_28ca38;
    }
    ctx->pc = 0x28CA30u;
    {
        const bool branch_taken_0x28ca30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA30u;
            // 0x28ca34: 0x26730070  addiu       $s3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca30) {
            ctx->pc = 0x28C978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c978;
        }
    }
    ctx->pc = 0x28CA38u;
label_28ca38:
    // 0x28ca38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28ca38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ca3c:
    // 0x28ca3c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28ca3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28ca40:
    // 0x28ca40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28ca40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28ca44:
    // 0x28ca44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28ca44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28ca48:
    // 0x28ca48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28ca48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28ca4c:
    // 0x28ca4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28ca4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28ca50:
    // 0x28ca50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ca50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28ca54:
    // 0x28ca54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ca54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28ca58:
    // 0x28ca58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ca58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28ca5c:
    // 0x28ca5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ca5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28ca60:
    // 0x28ca60: 0x3e00008  jr          $ra
label_28ca64:
    if (ctx->pc == 0x28CA64u) {
        ctx->pc = 0x28CA64u;
            // 0x28ca64: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x28CA68u;
        goto label_fallthrough_0x28ca60;
    }
    ctx->pc = 0x28CA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA60u;
            // 0x28ca64: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28ca60:
    ctx->pc = 0x28CA68u;
}
