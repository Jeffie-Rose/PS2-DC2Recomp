#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: WeaponBuildCheck__13CMenuItemInfoFP12CActionCharaii
// Address: 0x24c890 - 0x24ca94
void WeaponBuildCheck__13CMenuItemInfoFP12CActionCharaii_0x24c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WeaponBuildCheck__13CMenuItemInfoFP12CActionCharaii_0x24c890");
#endif

    switch (ctx->pc) {
        case 0x24c890u: goto label_24c890;
        case 0x24c894u: goto label_24c894;
        case 0x24c898u: goto label_24c898;
        case 0x24c89cu: goto label_24c89c;
        case 0x24c8a0u: goto label_24c8a0;
        case 0x24c8a4u: goto label_24c8a4;
        case 0x24c8a8u: goto label_24c8a8;
        case 0x24c8acu: goto label_24c8ac;
        case 0x24c8b0u: goto label_24c8b0;
        case 0x24c8b4u: goto label_24c8b4;
        case 0x24c8b8u: goto label_24c8b8;
        case 0x24c8bcu: goto label_24c8bc;
        case 0x24c8c0u: goto label_24c8c0;
        case 0x24c8c4u: goto label_24c8c4;
        case 0x24c8c8u: goto label_24c8c8;
        case 0x24c8ccu: goto label_24c8cc;
        case 0x24c8d0u: goto label_24c8d0;
        case 0x24c8d4u: goto label_24c8d4;
        case 0x24c8d8u: goto label_24c8d8;
        case 0x24c8dcu: goto label_24c8dc;
        case 0x24c8e0u: goto label_24c8e0;
        case 0x24c8e4u: goto label_24c8e4;
        case 0x24c8e8u: goto label_24c8e8;
        case 0x24c8ecu: goto label_24c8ec;
        case 0x24c8f0u: goto label_24c8f0;
        case 0x24c8f4u: goto label_24c8f4;
        case 0x24c8f8u: goto label_24c8f8;
        case 0x24c8fcu: goto label_24c8fc;
        case 0x24c900u: goto label_24c900;
        case 0x24c904u: goto label_24c904;
        case 0x24c908u: goto label_24c908;
        case 0x24c90cu: goto label_24c90c;
        case 0x24c910u: goto label_24c910;
        case 0x24c914u: goto label_24c914;
        case 0x24c918u: goto label_24c918;
        case 0x24c91cu: goto label_24c91c;
        case 0x24c920u: goto label_24c920;
        case 0x24c924u: goto label_24c924;
        case 0x24c928u: goto label_24c928;
        case 0x24c92cu: goto label_24c92c;
        case 0x24c930u: goto label_24c930;
        case 0x24c934u: goto label_24c934;
        case 0x24c938u: goto label_24c938;
        case 0x24c93cu: goto label_24c93c;
        case 0x24c940u: goto label_24c940;
        case 0x24c944u: goto label_24c944;
        case 0x24c948u: goto label_24c948;
        case 0x24c94cu: goto label_24c94c;
        case 0x24c950u: goto label_24c950;
        case 0x24c954u: goto label_24c954;
        case 0x24c958u: goto label_24c958;
        case 0x24c95cu: goto label_24c95c;
        case 0x24c960u: goto label_24c960;
        case 0x24c964u: goto label_24c964;
        case 0x24c968u: goto label_24c968;
        case 0x24c96cu: goto label_24c96c;
        case 0x24c970u: goto label_24c970;
        case 0x24c974u: goto label_24c974;
        case 0x24c978u: goto label_24c978;
        case 0x24c97cu: goto label_24c97c;
        case 0x24c980u: goto label_24c980;
        case 0x24c984u: goto label_24c984;
        case 0x24c988u: goto label_24c988;
        case 0x24c98cu: goto label_24c98c;
        case 0x24c990u: goto label_24c990;
        case 0x24c994u: goto label_24c994;
        case 0x24c998u: goto label_24c998;
        case 0x24c99cu: goto label_24c99c;
        case 0x24c9a0u: goto label_24c9a0;
        case 0x24c9a4u: goto label_24c9a4;
        case 0x24c9a8u: goto label_24c9a8;
        case 0x24c9acu: goto label_24c9ac;
        case 0x24c9b0u: goto label_24c9b0;
        case 0x24c9b4u: goto label_24c9b4;
        case 0x24c9b8u: goto label_24c9b8;
        case 0x24c9bcu: goto label_24c9bc;
        case 0x24c9c0u: goto label_24c9c0;
        case 0x24c9c4u: goto label_24c9c4;
        case 0x24c9c8u: goto label_24c9c8;
        case 0x24c9ccu: goto label_24c9cc;
        case 0x24c9d0u: goto label_24c9d0;
        case 0x24c9d4u: goto label_24c9d4;
        case 0x24c9d8u: goto label_24c9d8;
        case 0x24c9dcu: goto label_24c9dc;
        case 0x24c9e0u: goto label_24c9e0;
        case 0x24c9e4u: goto label_24c9e4;
        case 0x24c9e8u: goto label_24c9e8;
        case 0x24c9ecu: goto label_24c9ec;
        case 0x24c9f0u: goto label_24c9f0;
        case 0x24c9f4u: goto label_24c9f4;
        case 0x24c9f8u: goto label_24c9f8;
        case 0x24c9fcu: goto label_24c9fc;
        case 0x24ca00u: goto label_24ca00;
        case 0x24ca04u: goto label_24ca04;
        case 0x24ca08u: goto label_24ca08;
        case 0x24ca0cu: goto label_24ca0c;
        case 0x24ca10u: goto label_24ca10;
        case 0x24ca14u: goto label_24ca14;
        case 0x24ca18u: goto label_24ca18;
        case 0x24ca1cu: goto label_24ca1c;
        case 0x24ca20u: goto label_24ca20;
        case 0x24ca24u: goto label_24ca24;
        case 0x24ca28u: goto label_24ca28;
        case 0x24ca2cu: goto label_24ca2c;
        case 0x24ca30u: goto label_24ca30;
        case 0x24ca34u: goto label_24ca34;
        case 0x24ca38u: goto label_24ca38;
        case 0x24ca3cu: goto label_24ca3c;
        case 0x24ca40u: goto label_24ca40;
        case 0x24ca44u: goto label_24ca44;
        case 0x24ca48u: goto label_24ca48;
        case 0x24ca4cu: goto label_24ca4c;
        case 0x24ca50u: goto label_24ca50;
        case 0x24ca54u: goto label_24ca54;
        case 0x24ca58u: goto label_24ca58;
        case 0x24ca5cu: goto label_24ca5c;
        case 0x24ca60u: goto label_24ca60;
        case 0x24ca64u: goto label_24ca64;
        case 0x24ca68u: goto label_24ca68;
        case 0x24ca6cu: goto label_24ca6c;
        case 0x24ca70u: goto label_24ca70;
        case 0x24ca74u: goto label_24ca74;
        case 0x24ca78u: goto label_24ca78;
        case 0x24ca7cu: goto label_24ca7c;
        case 0x24ca80u: goto label_24ca80;
        case 0x24ca84u: goto label_24ca84;
        case 0x24ca88u: goto label_24ca88;
        case 0x24ca8cu: goto label_24ca8c;
        case 0x24ca90u: goto label_24ca90;
        default: break;
    }

    ctx->pc = 0x24c890u;

label_24c890:
    // 0x24c890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_24c894:
    // 0x24c894: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x24c894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
label_24c898:
    // 0x24c898: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_24c89c:
    // 0x24c89c: 0x3c06c180  lui         $a2, 0xC180
    ctx->pc = 0x24c89cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49536 << 16));
label_24c8a0:
    // 0x24c8a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24c8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_24c8a4:
    // 0x24c8a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c8a8:
    // 0x24c8a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24c8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_24c8ac:
    // 0x24c8ac: 0x3c024086  lui         $v0, 0x4086
    ctx->pc = 0x24c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16518 << 16));
label_24c8b0:
    // 0x24c8b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24c8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24c8b4:
    // 0x24c8b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24c8b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24c8b8:
    // 0x24c8b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24c8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_24c8bc:
    // 0x24c8bc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x24c8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24c8c0:
    // 0x24c8c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x24c8c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24c8c4:
    // 0x24c8c4: 0x34476666  ori         $a3, $v0, 0x6666
    ctx->pc = 0x24c8c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_24c8c8:
    // 0x24c8c8: 0x8cb00070  lw          $s0, 0x70($a1)
    ctx->pc = 0x24c8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_24c8cc:
    // 0x24c8cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_24c8d0:
    // 0x24c8d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24c8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24c8d4:
    // 0x24c8d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24c8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24c8d8:
    // 0x24c8d8: 0xac26de10  sw          $a2, -0x21F0($at)
    ctx->pc = 0x24c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958608), GPR_U32(ctx, 6));
label_24c8dc:
    // 0x24c8dc: 0x3c0540f0  lui         $a1, 0x40F0
    ctx->pc = 0x24c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16624 << 16));
label_24c8e0:
    // 0x24c8e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c8e4:
    // 0x24c8e4: 0xaf8795a4  sw          $a3, -0x6A5C($gp)
    ctx->pc = 0x24c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940068), GPR_U32(ctx, 7));
label_24c8e8:
    // 0x24c8e8: 0xac25de14  sw          $a1, -0x21EC($at)
    ctx->pc = 0x24c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958612), GPR_U32(ctx, 5));
label_24c8ec:
    // 0x24c8ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c8f0:
    // 0x24c8f0: 0xac23de18  sw          $v1, -0x21E8($at)
    ctx->pc = 0x24c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958616), GPR_U32(ctx, 3));
label_24c8f4:
    // 0x24c8f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c8f8:
    // 0x24c8f8: 0xac22de1c  sw          $v0, -0x21E4($at)
    ctx->pc = 0x24c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958620), GPR_U32(ctx, 2));
label_24c8fc:
    // 0x24c8fc: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x24c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
label_24c900:
    // 0x24c900: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_24c904:
    if (ctx->pc == 0x24C904u) {
        ctx->pc = 0x24C904u;
            // 0x24c904: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C908u;
        goto label_24c908;
    }
    ctx->pc = 0x24C900u;
    {
        const bool branch_taken_0x24c900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C900u;
            // 0x24c904: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c900) {
            ctx->pc = 0x24C950u;
            goto label_24c950;
        }
    }
    ctx->pc = 0x24C908u;
label_24c908:
    // 0x24c908: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x24c908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_24c90c:
    // 0x24c90c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24c910:
    // 0x24c910: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_24c914:
    if (ctx->pc == 0x24C914u) {
        ctx->pc = 0x24C914u;
            // 0x24c914: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x24C918u;
        goto label_24c918;
    }
    ctx->pc = 0x24C910u;
    {
        const bool branch_taken_0x24c910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C910u;
            // 0x24c914: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c910) {
            ctx->pc = 0x24C950u;
            goto label_24c950;
        }
    }
    ctx->pc = 0x24C918u;
label_24c918:
    // 0x24c918: 0x3c0240c6  lui         $v0, 0x40C6
    ctx->pc = 0x24c918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16582 << 16));
label_24c91c:
    // 0x24c91c: 0xe420de18  swc1        $f0, -0x21E8($at)
    ctx->pc = 0x24c91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294958616), bits); }
label_24c920:
    // 0x24c920: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x24c920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_24c924:
    // 0x24c924: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c928:
    // 0x24c928: 0xaf8295a4  sw          $v0, -0x6A5C($gp)
    ctx->pc = 0x24c928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940068), GPR_U32(ctx, 2));
label_24c92c:
    // 0x24c92c: 0xe421de1c  swc1        $f1, -0x21E4($at)
    ctx->pc = 0x24c92cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294958620), bits); }
label_24c930:
    // 0x24c930: 0x3c02c185  lui         $v0, 0xC185
    ctx->pc = 0x24c930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49541 << 16));
label_24c934:
    // 0x24c934: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x24c934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_24c938:
    // 0x24c938: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c93c:
    // 0x24c93c: 0x3c0240e3  lui         $v0, 0x40E3
    ctx->pc = 0x24c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16611 << 16));
label_24c940:
    // 0x24c940: 0xac23de10  sw          $v1, -0x21F0($at)
    ctx->pc = 0x24c940u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958608), GPR_U32(ctx, 3));
label_24c944:
    // 0x24c944: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x24c944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_24c948:
    // 0x24c948: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c94c:
    // 0x24c94c: 0xac22de14  sw          $v0, -0x21EC($at)
    ctx->pc = 0x24c94cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958612), GPR_U32(ctx, 2));
label_24c950:
    // 0x24c950: 0xc0664ac  jal         func_1992B0
label_24c954:
    if (ctx->pc == 0x24C954u) {
        ctx->pc = 0x24C954u;
            // 0x24c954: 0x8e64017c  lw          $a0, 0x17C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
        ctx->pc = 0x24C958u;
        goto label_24c958;
    }
    ctx->pc = 0x24C950u;
    SET_GPR_U32(ctx, 31, 0x24C958u);
    ctx->pc = 0x24C954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C950u;
            // 0x24c954: 0x8e64017c  lw          $a0, 0x17C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C958u; }
        if (ctx->pc != 0x24C958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C958u; }
        if (ctx->pc != 0x24C958u) { return; }
    }
    ctx->pc = 0x24C958u;
label_24c958:
    // 0x24c958: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_24c95c:
    if (ctx->pc == 0x24C95Cu) {
        ctx->pc = 0x24C95Cu;
            // 0x24c95c: 0x3c03c180  lui         $v1, 0xC180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
        ctx->pc = 0x24C960u;
        goto label_24c960;
    }
    ctx->pc = 0x24C958u;
    {
        const bool branch_taken_0x24c958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C958u;
            // 0x24c95c: 0x3c03c180  lui         $v1, 0xC180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49536 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c958) {
            ctx->pc = 0x24C98Cu;
            goto label_24c98c;
        }
    }
    ctx->pc = 0x24C960u;
label_24c960:
    // 0x24c960: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c964:
    // 0x24c964: 0xac23de10  sw          $v1, -0x21F0($at)
    ctx->pc = 0x24c964u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958608), GPR_U32(ctx, 3));
label_24c968:
    // 0x24c968: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x24c968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_24c96c:
    // 0x24c96c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c970:
    // 0x24c970: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x24c970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
label_24c974:
    // 0x24c974: 0xac22de14  sw          $v0, -0x21EC($at)
    ctx->pc = 0x24c974u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958612), GPR_U32(ctx, 2));
label_24c978:
    // 0x24c978: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c97c:
    // 0x24c97c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_24c980:
    // 0x24c980: 0xac23de18  sw          $v1, -0x21E8($at)
    ctx->pc = 0x24c980u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958616), GPR_U32(ctx, 3));
label_24c984:
    // 0x24c984: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24c988:
    // 0x24c988: 0xac22de1c  sw          $v0, -0x21E4($at)
    ctx->pc = 0x24c988u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958620), GPR_U32(ctx, 2));
label_24c98c:
    // 0x24c98c: 0xc78c95a4  lwc1        $f12, -0x6A5C($gp)
    ctx->pc = 0x24c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24c990:
    // 0x24c990: 0xc0941f4  jal         func_2507D0
label_24c994:
    if (ctx->pc == 0x24C994u) {
        ctx->pc = 0x24C994u;
            // 0x24c994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C998u;
        goto label_24c998;
    }
    ctx->pc = 0x24C990u;
    SET_GPR_U32(ctx, 31, 0x24C998u);
    ctx->pc = 0x24C994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C990u;
            // 0x24c994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2507D0u;
    if (runtime->hasFunction(0x2507D0u)) {
        auto targetFn = runtime->lookupFunction(0x2507D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C998u; }
        if (ctx->pc != 0x24C998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__FP8mgCFramef_0x2507d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C998u; }
        if (ctx->pc != 0x24C998u) { return; }
    }
    ctx->pc = 0x24C998u;
label_24c998:
    // 0x24c998: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x24c998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24c99c:
    // 0x24c99c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x24c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_24c9a0:
    // 0x24c9a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x24c9a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_24c9a4:
    // 0x24c9a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c9a8:
    // 0x24c9a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x24c9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_24c9ac:
    // 0x24c9ac: 0x320f809  jalr        $t9
label_24c9b0:
    if (ctx->pc == 0x24C9B0u) {
        ctx->pc = 0x24C9B0u;
            // 0x24c9b0: 0x24a5de10  addiu       $a1, $a1, -0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958608));
        ctx->pc = 0x24C9B4u;
        goto label_24c9b4;
    }
    ctx->pc = 0x24C9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24C9B4u);
        ctx->pc = 0x24C9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C9ACu;
            // 0x24c9b0: 0x24a5de10  addiu       $a1, $a1, -0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24C9B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24C9B4u; }
            if (ctx->pc != 0x24C9B4u) { return; }
        }
        }
    }
    ctx->pc = 0x24C9B4u;
label_24c9b4:
    // 0x24c9b4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x24c9b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24c9b8:
    // 0x24c9b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c9bc:
    // 0x24c9bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24c9bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_24c9c0:
    // 0x24c9c0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x24c9c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_24c9c4:
    // 0x24c9c4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x24c9c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_24c9c8:
    // 0x24c9c8: 0x320f809  jalr        $t9
label_24c9cc:
    if (ctx->pc == 0x24C9CCu) {
        ctx->pc = 0x24C9CCu;
            // 0x24c9cc: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x24C9D0u;
        goto label_24c9d0;
    }
    ctx->pc = 0x24C9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24C9D0u);
        ctx->pc = 0x24C9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C9C8u;
            // 0x24c9cc: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24C9D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24C9D0u; }
            if (ctx->pc != 0x24C9D0u) { return; }
        }
        }
    }
    ctx->pc = 0x24C9D0u;
label_24c9d0:
    // 0x24c9d0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x24c9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24c9d4:
    // 0x24c9d4: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x24c9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_24c9d8:
    // 0x24c9d8: 0x8f859624  lw          $a1, -0x69DC($gp)
    ctx->pc = 0x24c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940196)));
label_24c9dc:
    // 0x24c9dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c9e0:
    // 0x24c9e0: 0x8f39011c  lw          $t9, 0x11C($t9)
    ctx->pc = 0x24c9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 284)));
label_24c9e4:
    // 0x24c9e4: 0x320f809  jalr        $t9
label_24c9e8:
    if (ctx->pc == 0x24C9E8u) {
        ctx->pc = 0x24C9E8u;
            // 0x24c9e8: 0x24c6cac0  addiu       $a2, $a2, -0x3540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
        ctx->pc = 0x24C9ECu;
        goto label_24c9ec;
    }
    ctx->pc = 0x24C9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24C9ECu);
        ctx->pc = 0x24C9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C9E4u;
            // 0x24c9e8: 0x24c6cac0  addiu       $a2, $a2, -0x3540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24C9ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24C9ECu; }
            if (ctx->pc != 0x24C9ECu) { return; }
        }
        }
    }
    ctx->pc = 0x24C9ECu;
label_24c9ec:
    // 0x24c9ec: 0x8e6401ac  lw          $a0, 0x1AC($s3)
    ctx->pc = 0x24c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
label_24c9f0:
    // 0x24c9f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24c9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24c9f4:
    // 0x24c9f4: 0x8f859624  lw          $a1, -0x69DC($gp)
    ctx->pc = 0x24c9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940196)));
label_24c9f8:
    // 0x24c9f8: 0xc0896c8  jal         func_225B20
label_24c9fc:
    if (ctx->pc == 0x24C9FCu) {
        ctx->pc = 0x24C9FCu;
            // 0x24c9fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x24CA00u;
        goto label_24ca00;
    }
    ctx->pc = 0x24C9F8u;
    SET_GPR_U32(ctx, 31, 0x24CA00u);
    ctx->pc = 0x24C9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C9F8u;
            // 0x24c9fc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CA00u; }
        if (ctx->pc != 0x24CA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CA00u; }
        if (ctx->pc != 0x24CA00u) { return; }
    }
    ctx->pc = 0x24CA00u;
label_24ca00:
    // 0x24ca00: 0x8f849624  lw          $a0, -0x69DC($gp)
    ctx->pc = 0x24ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940196)));
label_24ca04:
    // 0x24ca04: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x24ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_24ca08:
    // 0x24ca08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24ca08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ca0c:
    // 0x24ca0c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x24ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_24ca10:
    // 0x24ca10: 0x34470004  ori         $a3, $v0, 0x4
    ctx->pc = 0x24ca10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_24ca14:
    // 0x24ca14: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x24ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_24ca18:
    // 0x24ca18: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x24ca18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
label_24ca1c:
    // 0x24ca1c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x24ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_24ca20:
    // 0x24ca20: 0xc04de54  jal         func_137950
label_24ca24:
    if (ctx->pc == 0x24CA24u) {
        ctx->pc = 0x24CA24u;
            // 0x24ca24: 0xaca30044  sw          $v1, 0x44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x24CA28u;
        goto label_24ca28;
    }
    ctx->pc = 0x24CA20u;
    SET_GPR_U32(ctx, 31, 0x24CA28u);
    ctx->pc = 0x24CA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CA20u;
            // 0x24ca24: 0xaca30044  sw          $v1, 0x44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CA28u; }
        if (ctx->pc != 0x24CA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CA28u; }
        if (ctx->pc != 0x24CA28u) { return; }
    }
    ctx->pc = 0x24CA28u;
label_24ca28:
    // 0x24ca28: 0xc78095a4  lwc1        $f0, -0x6A5C($gp)
    ctx->pc = 0x24ca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ca2c:
    // 0x24ca2c: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x24ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_24ca30:
    // 0x24ca30: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x24ca30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_24ca34:
    // 0x24ca34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ca34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ca38:
    // 0x24ca38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ca38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24ca3c:
    // 0x24ca3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24ca3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ca40:
    // 0x24ca40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24ca40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ca44:
    // 0x24ca44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24ca44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_24ca48:
    // 0x24ca48: 0xe78095a4  swc1        $f0, -0x6A5C($gp)
    ctx->pc = 0x24ca48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940068), bits); }
label_24ca4c:
    // 0x24ca4c: 0x8e64017c  lw          $a0, 0x17C($s3)
    ctx->pc = 0x24ca4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
label_24ca50:
    // 0x24ca50: 0xc0663f0  jal         func_198FC0
label_24ca54:
    if (ctx->pc == 0x24CA54u) {
        ctx->pc = 0x24CA54u;
            // 0x24ca54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CA58u;
        goto label_24ca58;
    }
    ctx->pc = 0x24CA50u;
    SET_GPR_U32(ctx, 31, 0x24CA58u);
    ctx->pc = 0x24CA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CA50u;
            // 0x24ca54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198FC0u;
    if (runtime->hasFunction(0x198FC0u)) {
        auto targetFn = runtime->lookupFunction(0x198FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CA58u; }
        if (ctx->pc != 0x24CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsBuildUp__13CGameDataUsedFPiPiPi_0x198fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CA58u; }
        if (ctx->pc != 0x24CA58u) { return; }
    }
    ctx->pc = 0x24CA58u;
label_24ca58:
    // 0x24ca58: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24ca58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24ca5c:
    // 0x24ca5c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_24ca60:
    if (ctx->pc == 0x24CA60u) {
        ctx->pc = 0x24CA64u;
        goto label_24ca64;
    }
    ctx->pc = 0x24CA5Cu;
    {
        const bool branch_taken_0x24ca5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ca5c) {
            ctx->pc = 0x24CA68u;
            goto label_24ca68;
        }
    }
    ctx->pc = 0x24CA64u;
label_24ca64:
    // 0x24ca64: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x24ca64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24ca68:
    // 0x24ca68: 0xc78c95a4  lwc1        $f12, -0x6A5C($gp)
    ctx->pc = 0x24ca68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24ca6c:
    // 0x24ca6c: 0xc08bcf4  jal         func_22F3D0
label_24ca70:
    if (ctx->pc == 0x24CA70u) {
        ctx->pc = 0x24CA70u;
            // 0x24ca70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24CA74u;
        goto label_24ca74;
    }
    ctx->pc = 0x24CA6Cu;
    SET_GPR_U32(ctx, 31, 0x24CA74u);
    ctx->pc = 0x24CA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CA6Cu;
            // 0x24ca70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F3D0u;
    if (runtime->hasFunction(0x22F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x22F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CA74u; }
        if (ctx->pc != 0x24CA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuildUpInfoChara__FP11CCharacter2f_0x22f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CA74u; }
        if (ctx->pc != 0x24CA74u) { return; }
    }
    ctx->pc = 0x24CA74u;
label_24ca74:
    // 0x24ca74: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24ca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24ca78:
    // 0x24ca78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x24ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24ca7c:
    // 0x24ca7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24ca7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24ca80:
    // 0x24ca80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24ca80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24ca84:
    // 0x24ca84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24ca84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24ca88:
    // 0x24ca88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24ca88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24ca8c:
    // 0x24ca8c: 0x3e00008  jr          $ra
label_24ca90:
    if (ctx->pc == 0x24CA90u) {
        ctx->pc = 0x24CA90u;
            // 0x24ca90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x24CA94u;
        goto label_fallthrough_0x24ca8c;
    }
    ctx->pc = 0x24CA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CA8Cu;
            // 0x24ca90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24ca8c:
    ctx->pc = 0x24CA94u;
}
