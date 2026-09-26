#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetScript__12CActionCharaFv
// Address: 0x16a220 - 0x16a4b8
void ResetScript__12CActionCharaFv_0x16a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetScript__12CActionCharaFv_0x16a220");
#endif

    switch (ctx->pc) {
        case 0x16a264u: goto label_16a264;
        case 0x16a2c0u: goto label_16a2c0;
        case 0x16a3a8u: goto label_16a3a8;
        case 0x16a3e8u: goto label_16a3e8;
        case 0x16a434u: goto label_16a434;
        case 0x16a460u: goto label_16a460;
        case 0x16a478u: goto label_16a478;
        default: break;
    }

    ctx->pc = 0x16a220u;

    // 0x16a220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a228: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16a228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16a22c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a23c: 0xac800c00  sw          $zero, 0xC00($a0)
    ctx->pc = 0x16a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3072), GPR_U32(ctx, 0));
    // 0x16a240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a244: 0xac800c20  sw          $zero, 0xC20($a0)
    ctx->pc = 0x16a244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3104), GPR_U32(ctx, 0));
    // 0x16a248: 0xac800c40  sw          $zero, 0xC40($a0)
    ctx->pc = 0x16a248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3136), GPR_U32(ctx, 0));
    // 0x16a24c: 0xac800c60  sw          $zero, 0xC60($a0)
    ctx->pc = 0x16a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3168), GPR_U32(ctx, 0));
    // 0x16a250: 0xac800c80  sw          $zero, 0xC80($a0)
    ctx->pc = 0x16a250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3200), GPR_U32(ctx, 0));
    // 0x16a254: 0xac800ca0  sw          $zero, 0xCA0($a0)
    ctx->pc = 0x16a254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3232), GPR_U32(ctx, 0));
    // 0x16a258: 0xac800cc0  sw          $zero, 0xCC0($a0)
    ctx->pc = 0x16a258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3264), GPR_U32(ctx, 0));
    // 0x16a25c: 0xac800ce0  sw          $zero, 0xCE0($a0)
    ctx->pc = 0x16a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3296), GPR_U32(ctx, 0));
    // 0x16a260: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a264:
    // 0x16a264: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x16a264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x16a268: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x16a268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x16a26c: 0xace00d00  sw          $zero, 0xD00($a3)
    ctx->pc = 0x16a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3328), GPR_U32(ctx, 0));
    // 0x16a270: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x16a270u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16a274: 0xace40d20  sw          $a0, 0xD20($a3)
    ctx->pc = 0x16a274u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3360), GPR_U32(ctx, 4));
    // 0x16a278: 0x24c60120  addiu       $a2, $a2, 0x120
    ctx->pc = 0x16a278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x16a27c: 0xace00d24  sw          $zero, 0xD24($a3)
    ctx->pc = 0x16a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3364), GPR_U32(ctx, 0));
    // 0x16a280: 0xace40d44  sw          $a0, 0xD44($a3)
    ctx->pc = 0x16a280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3396), GPR_U32(ctx, 4));
    // 0x16a284: 0xace00d48  sw          $zero, 0xD48($a3)
    ctx->pc = 0x16a284u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3400), GPR_U32(ctx, 0));
    // 0x16a288: 0xace40d68  sw          $a0, 0xD68($a3)
    ctx->pc = 0x16a288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3432), GPR_U32(ctx, 4));
    // 0x16a28c: 0xace00d6c  sw          $zero, 0xD6C($a3)
    ctx->pc = 0x16a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3436), GPR_U32(ctx, 0));
    // 0x16a290: 0xace40d8c  sw          $a0, 0xD8C($a3)
    ctx->pc = 0x16a290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3468), GPR_U32(ctx, 4));
    // 0x16a294: 0xace00d90  sw          $zero, 0xD90($a3)
    ctx->pc = 0x16a294u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3472), GPR_U32(ctx, 0));
    // 0x16a298: 0xace40db0  sw          $a0, 0xDB0($a3)
    ctx->pc = 0x16a298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3504), GPR_U32(ctx, 4));
    // 0x16a29c: 0xace00db4  sw          $zero, 0xDB4($a3)
    ctx->pc = 0x16a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3508), GPR_U32(ctx, 0));
    // 0x16a2a0: 0xace40dd4  sw          $a0, 0xDD4($a3)
    ctx->pc = 0x16a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3540), GPR_U32(ctx, 4));
    // 0x16a2a4: 0xace00dd8  sw          $zero, 0xDD8($a3)
    ctx->pc = 0x16a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3544), GPR_U32(ctx, 0));
    // 0x16a2a8: 0xace40df8  sw          $a0, 0xDF8($a3)
    ctx->pc = 0x16a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3576), GPR_U32(ctx, 4));
    // 0x16a2ac: 0xace00dfc  sw          $zero, 0xDFC($a3)
    ctx->pc = 0x16a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3580), GPR_U32(ctx, 0));
    // 0x16a2b0: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16A2B0u;
    {
        const bool branch_taken_0x16a2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2B0u;
            // 0x16a2b4: 0xace40e1c  sw          $a0, 0xE1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 3612), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2b0) {
            ctx->pc = 0x16A264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a264;
        }
    }
    ctx->pc = 0x16A2B8u;
    // 0x16a2b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a2c0:
    // 0x16a2c0: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x16a2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x16a2c4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16a2c8: 0xa0c00a20  sb          $zero, 0xA20($a2)
    ctx->pc = 0x16a2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2592), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a2cc: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x16a2ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16a2d0: 0xacc00a24  sw          $zero, 0xA24($a2)
    ctx->pc = 0x16a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2596), GPR_U32(ctx, 0));
    // 0x16a2d4: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x16a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x16a2d8: 0xacc00a28  sw          $zero, 0xA28($a2)
    ctx->pc = 0x16a2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2600), GPR_U32(ctx, 0));
    // 0x16a2dc: 0xacc00a2c  sw          $zero, 0xA2C($a2)
    ctx->pc = 0x16a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2604), GPR_U32(ctx, 0));
    // 0x16a2e0: 0xacc00a40  sw          $zero, 0xA40($a2)
    ctx->pc = 0x16a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2624), GPR_U32(ctx, 0));
    // 0x16a2e4: 0xacc00a44  sw          $zero, 0xA44($a2)
    ctx->pc = 0x16a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2628), GPR_U32(ctx, 0));
    // 0x16a2e8: 0xa0c00a48  sb          $zero, 0xA48($a2)
    ctx->pc = 0x16a2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2632), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a2ec: 0xacc00a4c  sw          $zero, 0xA4C($a2)
    ctx->pc = 0x16a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2636), GPR_U32(ctx, 0));
    // 0x16a2f0: 0xacc00a50  sw          $zero, 0xA50($a2)
    ctx->pc = 0x16a2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2640), GPR_U32(ctx, 0));
    // 0x16a2f4: 0xacc00a54  sw          $zero, 0xA54($a2)
    ctx->pc = 0x16a2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2644), GPR_U32(ctx, 0));
    // 0x16a2f8: 0xacc00a68  sw          $zero, 0xA68($a2)
    ctx->pc = 0x16a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2664), GPR_U32(ctx, 0));
    // 0x16a2fc: 0xacc00a6c  sw          $zero, 0xA6C($a2)
    ctx->pc = 0x16a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2668), GPR_U32(ctx, 0));
    // 0x16a300: 0xa0c00a70  sb          $zero, 0xA70($a2)
    ctx->pc = 0x16a300u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2672), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a304: 0xacc00a74  sw          $zero, 0xA74($a2)
    ctx->pc = 0x16a304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2676), GPR_U32(ctx, 0));
    // 0x16a308: 0xacc00a78  sw          $zero, 0xA78($a2)
    ctx->pc = 0x16a308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2680), GPR_U32(ctx, 0));
    // 0x16a30c: 0xacc00a7c  sw          $zero, 0xA7C($a2)
    ctx->pc = 0x16a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2684), GPR_U32(ctx, 0));
    // 0x16a310: 0xacc00a90  sw          $zero, 0xA90($a2)
    ctx->pc = 0x16a310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2704), GPR_U32(ctx, 0));
    // 0x16a314: 0xacc00a94  sw          $zero, 0xA94($a2)
    ctx->pc = 0x16a314u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2708), GPR_U32(ctx, 0));
    // 0x16a318: 0xa0c00a98  sb          $zero, 0xA98($a2)
    ctx->pc = 0x16a318u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2712), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a31c: 0xacc00a9c  sw          $zero, 0xA9C($a2)
    ctx->pc = 0x16a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2716), GPR_U32(ctx, 0));
    // 0x16a320: 0xacc00aa0  sw          $zero, 0xAA0($a2)
    ctx->pc = 0x16a320u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2720), GPR_U32(ctx, 0));
    // 0x16a324: 0xacc00aa4  sw          $zero, 0xAA4($a2)
    ctx->pc = 0x16a324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2724), GPR_U32(ctx, 0));
    // 0x16a328: 0xacc00ab8  sw          $zero, 0xAB8($a2)
    ctx->pc = 0x16a328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2744), GPR_U32(ctx, 0));
    // 0x16a32c: 0xacc00abc  sw          $zero, 0xABC($a2)
    ctx->pc = 0x16a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2748), GPR_U32(ctx, 0));
    // 0x16a330: 0xa0c00ac0  sb          $zero, 0xAC0($a2)
    ctx->pc = 0x16a330u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2752), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a334: 0xacc00ac4  sw          $zero, 0xAC4($a2)
    ctx->pc = 0x16a334u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2756), GPR_U32(ctx, 0));
    // 0x16a338: 0xacc00ac8  sw          $zero, 0xAC8($a2)
    ctx->pc = 0x16a338u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2760), GPR_U32(ctx, 0));
    // 0x16a33c: 0xacc00acc  sw          $zero, 0xACC($a2)
    ctx->pc = 0x16a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2764), GPR_U32(ctx, 0));
    // 0x16a340: 0xacc00ae0  sw          $zero, 0xAE0($a2)
    ctx->pc = 0x16a340u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2784), GPR_U32(ctx, 0));
    // 0x16a344: 0xacc00ae4  sw          $zero, 0xAE4($a2)
    ctx->pc = 0x16a344u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2788), GPR_U32(ctx, 0));
    // 0x16a348: 0xa0c00ae8  sb          $zero, 0xAE8($a2)
    ctx->pc = 0x16a348u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2792), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a34c: 0xacc00aec  sw          $zero, 0xAEC($a2)
    ctx->pc = 0x16a34cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2796), GPR_U32(ctx, 0));
    // 0x16a350: 0xacc00af0  sw          $zero, 0xAF0($a2)
    ctx->pc = 0x16a350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2800), GPR_U32(ctx, 0));
    // 0x16a354: 0xacc00af4  sw          $zero, 0xAF4($a2)
    ctx->pc = 0x16a354u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2804), GPR_U32(ctx, 0));
    // 0x16a358: 0xacc00b08  sw          $zero, 0xB08($a2)
    ctx->pc = 0x16a358u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2824), GPR_U32(ctx, 0));
    // 0x16a35c: 0xacc00b0c  sw          $zero, 0xB0C($a2)
    ctx->pc = 0x16a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2828), GPR_U32(ctx, 0));
    // 0x16a360: 0xa0c00b10  sb          $zero, 0xB10($a2)
    ctx->pc = 0x16a360u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2832), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a364: 0xacc00b14  sw          $zero, 0xB14($a2)
    ctx->pc = 0x16a364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2836), GPR_U32(ctx, 0));
    // 0x16a368: 0xacc00b18  sw          $zero, 0xB18($a2)
    ctx->pc = 0x16a368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2840), GPR_U32(ctx, 0));
    // 0x16a36c: 0xacc00b1c  sw          $zero, 0xB1C($a2)
    ctx->pc = 0x16a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2844), GPR_U32(ctx, 0));
    // 0x16a370: 0xacc00b30  sw          $zero, 0xB30($a2)
    ctx->pc = 0x16a370u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2864), GPR_U32(ctx, 0));
    // 0x16a374: 0xacc00b34  sw          $zero, 0xB34($a2)
    ctx->pc = 0x16a374u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2868), GPR_U32(ctx, 0));
    // 0x16a378: 0xa0c00b38  sb          $zero, 0xB38($a2)
    ctx->pc = 0x16a378u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2872), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a37c: 0xacc00b3c  sw          $zero, 0xB3C($a2)
    ctx->pc = 0x16a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2876), GPR_U32(ctx, 0));
    // 0x16a380: 0xacc00b40  sw          $zero, 0xB40($a2)
    ctx->pc = 0x16a380u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2880), GPR_U32(ctx, 0));
    // 0x16a384: 0xacc00b44  sw          $zero, 0xB44($a2)
    ctx->pc = 0x16a384u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2884), GPR_U32(ctx, 0));
    // 0x16a388: 0xacc00b58  sw          $zero, 0xB58($a2)
    ctx->pc = 0x16a388u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2904), GPR_U32(ctx, 0));
    // 0x16a38c: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x16A38Cu;
    {
        const bool branch_taken_0x16a38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A38Cu;
            // 0x16a390: 0xacc00b5c  sw          $zero, 0xB5C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a38c) {
            ctx->pc = 0x16A2C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a2c0;
        }
    }
    ctx->pc = 0x16A394u;
    // 0x16a394: 0x2881000b  slti        $at, $a0, 0xB
    ctx->pc = 0x16a394u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x16a398: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x16A398u;
    {
        const bool branch_taken_0x16a398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A398u;
            // 0x16a39c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a398) {
            ctx->pc = 0x16A3D4u;
            goto label_16a3d4;
        }
    }
    ctx->pc = 0x16A3A0u;
    // 0x16a3a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16a3a4: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x16a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_16a3a8:
    // 0x16a3a8: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x16a3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x16a3ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16a3b0: 0xa0c00a20  sb          $zero, 0xA20($a2)
    ctx->pc = 0x16a3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2592), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a3b4: 0x2883000b  slti        $v1, $a0, 0xB
    ctx->pc = 0x16a3b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x16a3b8: 0xacc00a24  sw          $zero, 0xA24($a2)
    ctx->pc = 0x16a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2596), GPR_U32(ctx, 0));
    // 0x16a3bc: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x16a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x16a3c0: 0xacc00a28  sw          $zero, 0xA28($a2)
    ctx->pc = 0x16a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2600), GPR_U32(ctx, 0));
    // 0x16a3c4: 0xacc00a2c  sw          $zero, 0xA2C($a2)
    ctx->pc = 0x16a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2604), GPR_U32(ctx, 0));
    // 0x16a3c8: 0xacc00a40  sw          $zero, 0xA40($a2)
    ctx->pc = 0x16a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2624), GPR_U32(ctx, 0));
    // 0x16a3cc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16A3CCu;
    {
        const bool branch_taken_0x16a3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3CCu;
            // 0x16a3d0: 0xacc00a44  sw          $zero, 0xA44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3cc) {
            ctx->pc = 0x16A3A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a3a8;
        }
    }
    ctx->pc = 0x16A3D4u;
label_16a3d4:
    // 0x16a3d4: 0x0  nop
    ctx->pc = 0x16a3d4u;
    // NOP
    // 0x16a3d8: 0xa2000bd8  sb          $zero, 0xBD8($s0)
    ctx->pc = 0x16a3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3032), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a3dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3e4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a3e8:
    // 0x16a3e8: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x16a3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x16a3ec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x16a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x16a3f0: 0xace40f60  sw          $a0, 0xF60($a3)
    ctx->pc = 0x16a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3936), GPR_U32(ctx, 4));
    // 0x16a3f4: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x16a3f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16a3f8: 0xace40f74  sw          $a0, 0xF74($a3)
    ctx->pc = 0x16a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3956), GPR_U32(ctx, 4));
    // 0x16a3fc: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x16a3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x16a400: 0xace40f88  sw          $a0, 0xF88($a3)
    ctx->pc = 0x16a400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3976), GPR_U32(ctx, 4));
    // 0x16a404: 0xace40f9c  sw          $a0, 0xF9C($a3)
    ctx->pc = 0x16a404u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3996), GPR_U32(ctx, 4));
    // 0x16a408: 0xace40fb0  sw          $a0, 0xFB0($a3)
    ctx->pc = 0x16a408u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4016), GPR_U32(ctx, 4));
    // 0x16a40c: 0xace40fc4  sw          $a0, 0xFC4($a3)
    ctx->pc = 0x16a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4036), GPR_U32(ctx, 4));
    // 0x16a410: 0xace40fd8  sw          $a0, 0xFD8($a3)
    ctx->pc = 0x16a410u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4056), GPR_U32(ctx, 4));
    // 0x16a414: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x16A414u;
    {
        const bool branch_taken_0x16a414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A414u;
            // 0x16a418: 0xace40fec  sw          $a0, 0xFEC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4076), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a414) {
            ctx->pc = 0x16A3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a3e8;
        }
    }
    ctx->pc = 0x16A41Cu;
    // 0x16a41c: 0x28a1000a  slti        $at, $a1, 0xA
    ctx->pc = 0x16a41cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x16a420: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x16A420u;
    {
        const bool branch_taken_0x16a420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A420u;
            // 0x16a424: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a420) {
            ctx->pc = 0x16A454u;
            goto label_16a454;
        }
    }
    ctx->pc = 0x16A428u;
    // 0x16a428: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16a428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16a42c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x16a42cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a430: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16a430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a434:
    // 0x16a434: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x16a434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x16a438: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16a438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16a43c: 0xac640f60  sw          $a0, 0xF60($v1)
    ctx->pc = 0x16a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3936), GPR_U32(ctx, 4));
    // 0x16a440: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x16a440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x16a444: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x16a444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x16a448: 0x0  nop
    ctx->pc = 0x16a448u;
    // NOP
    // 0x16a44c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16A44Cu;
    {
        const bool branch_taken_0x16a44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a44c) {
            ctx->pc = 0x16A434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a434;
        }
    }
    ctx->pc = 0x16A454u;
label_16a454:
    // 0x16a454: 0x0  nop
    ctx->pc = 0x16a454u;
    // NOP
    // 0x16a458: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16a458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a45c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16a45cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a460:
    // 0x16a460: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x16a460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x16a464: 0x8c640570  lw          $a0, 0x570($v1)
    ctx->pc = 0x16a464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1392)));
    // 0x16a468: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A468u;
    {
        const bool branch_taken_0x16a468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a468) {
            ctx->pc = 0x16A478u;
            goto label_16a478;
        }
    }
    ctx->pc = 0x16A470u;
    // 0x16a470: 0xc0bd7a8  jal         func_2F5EA0
    ctx->pc = 0x16A470u;
    SET_GPR_U32(ctx, 31, 0x16A478u);
    ctx->pc = 0x2F5EA0u;
    if (runtime->hasFunction(0x2F5EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A478u; }
        if (ctx->pc != 0x16A478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__17CSWordAfterEffectFv_0x2f5ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A478u; }
        if (ctx->pc != 0x16A478u) { return; }
    }
    ctx->pc = 0x16A478u;
label_16a478:
    // 0x16a478: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16a478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a47c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x16a47cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16a480: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16A480u;
    {
        const bool branch_taken_0x16a480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A480u;
            // 0x16a484: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a480) {
            ctx->pc = 0x16A460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a460;
        }
    }
    ctx->pc = 0x16A488u;
    // 0x16a488: 0xa600071c  sh          $zero, 0x71C($s0)
    ctx->pc = 0x16a488u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1820), (uint16_t)GPR_U32(ctx, 0));
    // 0x16a48c: 0xae0007b0  sw          $zero, 0x7B0($s0)
    ctx->pc = 0x16a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1968), GPR_U32(ctx, 0));
    // 0x16a490: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x16a490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
    // 0x16a494: 0xae000f54  sw          $zero, 0xF54($s0)
    ctx->pc = 0x16a494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3924), GPR_U32(ctx, 0));
    // 0x16a498: 0xae000f5c  sw          $zero, 0xF5C($s0)
    ctx->pc = 0x16a498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3932), GPR_U32(ctx, 0));
    // 0x16a49c: 0xae0007d0  sw          $zero, 0x7D0($s0)
    ctx->pc = 0x16a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2000), GPR_U32(ctx, 0));
    // 0x16a4a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16a4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a4a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a4a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a4a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a4ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A4B0u;
            // 0x16a4b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A4B8u;
}
