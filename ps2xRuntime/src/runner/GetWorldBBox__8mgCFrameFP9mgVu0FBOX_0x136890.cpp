#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWorldBBox__8mgCFrameFP9mgVu0FBOX
// Address: 0x136890 - 0x136a74
void GetWorldBBox__8mgCFrameFP9mgVu0FBOX_0x136890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWorldBBox__8mgCFrameFP9mgVu0FBOX_0x136890");
#endif

    switch (ctx->pc) {
        case 0x136890u: goto label_136890;
        case 0x136894u: goto label_136894;
        case 0x136898u: goto label_136898;
        case 0x13689cu: goto label_13689c;
        case 0x1368a0u: goto label_1368a0;
        case 0x1368a4u: goto label_1368a4;
        case 0x1368a8u: goto label_1368a8;
        case 0x1368acu: goto label_1368ac;
        case 0x1368b0u: goto label_1368b0;
        case 0x1368b4u: goto label_1368b4;
        case 0x1368b8u: goto label_1368b8;
        case 0x1368bcu: goto label_1368bc;
        case 0x1368c0u: goto label_1368c0;
        case 0x1368c4u: goto label_1368c4;
        case 0x1368c8u: goto label_1368c8;
        case 0x1368ccu: goto label_1368cc;
        case 0x1368d0u: goto label_1368d0;
        case 0x1368d4u: goto label_1368d4;
        case 0x1368d8u: goto label_1368d8;
        case 0x1368dcu: goto label_1368dc;
        case 0x1368e0u: goto label_1368e0;
        case 0x1368e4u: goto label_1368e4;
        case 0x1368e8u: goto label_1368e8;
        case 0x1368ecu: goto label_1368ec;
        case 0x1368f0u: goto label_1368f0;
        case 0x1368f4u: goto label_1368f4;
        case 0x1368f8u: goto label_1368f8;
        case 0x1368fcu: goto label_1368fc;
        case 0x136900u: goto label_136900;
        case 0x136904u: goto label_136904;
        case 0x136908u: goto label_136908;
        case 0x13690cu: goto label_13690c;
        case 0x136910u: goto label_136910;
        case 0x136914u: goto label_136914;
        case 0x136918u: goto label_136918;
        case 0x13691cu: goto label_13691c;
        case 0x136920u: goto label_136920;
        case 0x136924u: goto label_136924;
        case 0x136928u: goto label_136928;
        case 0x13692cu: goto label_13692c;
        case 0x136930u: goto label_136930;
        case 0x136934u: goto label_136934;
        case 0x136938u: goto label_136938;
        case 0x13693cu: goto label_13693c;
        case 0x136940u: goto label_136940;
        case 0x136944u: goto label_136944;
        case 0x136948u: goto label_136948;
        case 0x13694cu: goto label_13694c;
        case 0x136950u: goto label_136950;
        case 0x136954u: goto label_136954;
        case 0x136958u: goto label_136958;
        case 0x13695cu: goto label_13695c;
        case 0x136960u: goto label_136960;
        case 0x136964u: goto label_136964;
        case 0x136968u: goto label_136968;
        case 0x13696cu: goto label_13696c;
        case 0x136970u: goto label_136970;
        case 0x136974u: goto label_136974;
        case 0x136978u: goto label_136978;
        case 0x13697cu: goto label_13697c;
        case 0x136980u: goto label_136980;
        case 0x136984u: goto label_136984;
        case 0x136988u: goto label_136988;
        case 0x13698cu: goto label_13698c;
        case 0x136990u: goto label_136990;
        case 0x136994u: goto label_136994;
        case 0x136998u: goto label_136998;
        case 0x13699cu: goto label_13699c;
        case 0x1369a0u: goto label_1369a0;
        case 0x1369a4u: goto label_1369a4;
        case 0x1369a8u: goto label_1369a8;
        case 0x1369acu: goto label_1369ac;
        case 0x1369b0u: goto label_1369b0;
        case 0x1369b4u: goto label_1369b4;
        case 0x1369b8u: goto label_1369b8;
        case 0x1369bcu: goto label_1369bc;
        case 0x1369c0u: goto label_1369c0;
        case 0x1369c4u: goto label_1369c4;
        case 0x1369c8u: goto label_1369c8;
        case 0x1369ccu: goto label_1369cc;
        case 0x1369d0u: goto label_1369d0;
        case 0x1369d4u: goto label_1369d4;
        case 0x1369d8u: goto label_1369d8;
        case 0x1369dcu: goto label_1369dc;
        case 0x1369e0u: goto label_1369e0;
        case 0x1369e4u: goto label_1369e4;
        case 0x1369e8u: goto label_1369e8;
        case 0x1369ecu: goto label_1369ec;
        case 0x1369f0u: goto label_1369f0;
        case 0x1369f4u: goto label_1369f4;
        case 0x1369f8u: goto label_1369f8;
        case 0x1369fcu: goto label_1369fc;
        case 0x136a00u: goto label_136a00;
        case 0x136a04u: goto label_136a04;
        case 0x136a08u: goto label_136a08;
        case 0x136a0cu: goto label_136a0c;
        case 0x136a10u: goto label_136a10;
        case 0x136a14u: goto label_136a14;
        case 0x136a18u: goto label_136a18;
        case 0x136a1cu: goto label_136a1c;
        case 0x136a20u: goto label_136a20;
        case 0x136a24u: goto label_136a24;
        case 0x136a28u: goto label_136a28;
        case 0x136a2cu: goto label_136a2c;
        case 0x136a30u: goto label_136a30;
        case 0x136a34u: goto label_136a34;
        case 0x136a38u: goto label_136a38;
        case 0x136a3cu: goto label_136a3c;
        case 0x136a40u: goto label_136a40;
        case 0x136a44u: goto label_136a44;
        case 0x136a48u: goto label_136a48;
        case 0x136a4cu: goto label_136a4c;
        case 0x136a50u: goto label_136a50;
        case 0x136a54u: goto label_136a54;
        case 0x136a58u: goto label_136a58;
        case 0x136a5cu: goto label_136a5c;
        case 0x136a60u: goto label_136a60;
        case 0x136a64u: goto label_136a64;
        case 0x136a68u: goto label_136a68;
        case 0x136a6cu: goto label_136a6c;
        case 0x136a70u: goto label_136a70;
        default: break;
    }

    ctx->pc = 0x136890u;

label_136890:
    // 0x136890: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x136890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_136894:
    // 0x136894: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x136894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_136898:
    // 0x136898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x136898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13689c:
    // 0x13689c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1368a0:
    // 0x1368a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1368a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1368a4:
    // 0x1368a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1368a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1368a8:
    // 0x1368a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1368a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1368ac:
    // 0x1368ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1368acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1368b0:
    // 0x1368b0: 0x8c8200f8  lw          $v0, 0xF8($a0)
    ctx->pc = 0x1368b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
label_1368b4:
    // 0x1368b4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_1368b8:
    if (ctx->pc == 0x1368B8u) {
        ctx->pc = 0x1368B8u;
            // 0x1368b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1368BCu;
        goto label_1368bc;
    }
    ctx->pc = 0x1368B4u;
    {
        const bool branch_taken_0x1368b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1368B4u;
            // 0x1368b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368b4) {
            ctx->pc = 0x1369D0u;
            goto label_1369d0;
        }
    }
    ctx->pc = 0x1368BCu;
label_1368bc:
    // 0x1368bc: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x1368bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_1368c0:
    // 0x1368c0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_1368c4:
    if (ctx->pc == 0x1368C4u) {
        ctx->pc = 0x1368C4u;
            // 0x1368c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1368C8u;
        goto label_1368c8;
    }
    ctx->pc = 0x1368C0u;
    {
        const bool branch_taken_0x1368c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1368C0u;
            // 0x1368c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368c0) {
            ctx->pc = 0x1369D0u;
            goto label_1369d0;
        }
    }
    ctx->pc = 0x1368C8u;
label_1368c8:
    // 0x1368c8: 0xc04dc0c  jal         func_137030
label_1368cc:
    if (ctx->pc == 0x1368CCu) {
        ctx->pc = 0x1368CCu;
            // 0x1368cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1368D0u;
        goto label_1368d0;
    }
    ctx->pc = 0x1368C8u;
    SET_GPR_U32(ctx, 31, 0x1368D0u);
    ctx->pc = 0x1368CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1368C8u;
            // 0x1368cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1368D0u; }
        if (ctx->pc != 0x1368D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1368D0u; }
        if (ctx->pc != 0x1368D0u) { return; }
    }
    ctx->pc = 0x1368D0u;
label_1368d0:
    // 0x1368d0: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x1368d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_1368d4:
    // 0x1368d4: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x1368d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1368d8:
    // 0x1368d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1368d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1368dc:
    // 0x1368dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1368dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1368e0:
    // 0x1368e0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1368e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1368e4:
    // 0x1368e4: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x1368e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1368e8:
    // 0x1368e8: 0xc04c278  jal         func_1309E0
label_1368ec:
    if (ctx->pc == 0x1368ECu) {
        ctx->pc = 0x1368ECu;
            // 0x1368ec: 0x24480090  addiu       $t0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x1368F0u;
        goto label_1368f0;
    }
    ctx->pc = 0x1368E8u;
    SET_GPR_U32(ctx, 31, 0x1368F0u);
    ctx->pc = 0x1368ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1368E8u;
            // 0x1368ec: 0x24480090  addiu       $t0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309E0u;
    if (runtime->hasFunction(0x1309E0u)) {
        auto targetFn = runtime->lookupFunction(0x1309E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1368F0u; }
        if (ctx->pc != 0x1368F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1368F0u; }
        if (ctx->pc != 0x1368F0u) { return; }
    }
    ctx->pc = 0x1368F0u;
label_1368f0:
    // 0x1368f0: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x1368f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_1368f4:
    // 0x1368f4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_1368f8:
    if (ctx->pc == 0x1368F8u) {
        ctx->pc = 0x1368FCu;
        goto label_1368fc;
    }
    ctx->pc = 0x1368F4u;
    {
        const bool branch_taken_0x1368f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1368f4) {
            ctx->pc = 0x1369D0u;
            goto label_1369d0;
        }
    }
    ctx->pc = 0x1368FCu;
label_1368fc:
    // 0x1368fc: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1368fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_136900:
    // 0x136900: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_136904:
    if (ctx->pc == 0x136904u) {
        ctx->pc = 0x136904u;
            // 0x136904: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x136908u;
        goto label_136908;
    }
    ctx->pc = 0x136900u;
    {
        const bool branch_taken_0x136900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136900u;
            // 0x136904: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136900) {
            ctx->pc = 0x1369D0u;
            goto label_1369d0;
        }
    }
    ctx->pc = 0x136908u;
label_136908:
    // 0x136908: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x136908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13690c:
    // 0x13690c: 0xc041c38  jal         func_1070E0
label_136910:
    if (ctx->pc == 0x136910u) {
        ctx->pc = 0x136910u;
            // 0x136910: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x136914u;
        goto label_136914;
    }
    ctx->pc = 0x13690Cu;
    SET_GPR_U32(ctx, 31, 0x136914u);
    ctx->pc = 0x136910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13690Cu;
            // 0x136910: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136914u; }
        if (ctx->pc != 0x136914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136914u; }
        if (ctx->pc != 0x136914u) { return; }
    }
    ctx->pc = 0x136914u;
label_136914:
    // 0x136914: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x136914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_136918:
    // 0x136918: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x136918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_13691c:
    // 0x13691c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13691cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_136920:
    // 0x136920: 0xc041c4a  jal         func_107128
label_136924:
    if (ctx->pc == 0x136924u) {
        ctx->pc = 0x136924u;
            // 0x136924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x136928u;
        goto label_136928;
    }
    ctx->pc = 0x136920u;
    SET_GPR_U32(ctx, 31, 0x136928u);
    ctx->pc = 0x136924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136920u;
            // 0x136924: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136928u; }
        if (ctx->pc != 0x136928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136928u; }
        if (ctx->pc != 0x136928u) { return; }
    }
    ctx->pc = 0x136928u;
label_136928:
    // 0x136928: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x136928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_13692c:
    // 0x13692c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x13692cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_136930:
    // 0x136930: 0xc041c3e  jal         func_1070F8
label_136934:
    if (ctx->pc == 0x136934u) {
        ctx->pc = 0x136934u;
            // 0x136934: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x136938u;
        goto label_136938;
    }
    ctx->pc = 0x136930u;
    SET_GPR_U32(ctx, 31, 0x136938u);
    ctx->pc = 0x136934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136930u;
            // 0x136934: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136938u; }
        if (ctx->pc != 0x136938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136938u; }
        if (ctx->pc != 0x136938u) { return; }
    }
    ctx->pc = 0x136938u;
label_136938:
    // 0x136938: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x136938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_13693c:
    // 0x13693c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x13693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136940:
    // 0x136940: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x136940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136944:
    // 0x136944: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x136944u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_136948:
    // 0x136948: 0x0  nop
    ctx->pc = 0x136948u;
    // NOP
label_13694c:
    // 0x13694c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_136950:
    if (ctx->pc == 0x136950u) {
        ctx->pc = 0x136954u;
        goto label_136954;
    }
    ctx->pc = 0x13694Cu;
    {
        const bool branch_taken_0x13694c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13694c) {
            ctx->pc = 0x13697Cu;
            goto label_13697c;
        }
    }
    ctx->pc = 0x136954u;
label_136954:
    // 0x136954: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x136954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136958:
    // 0x136958: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x136958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_13695c:
    // 0x13695c: 0x0  nop
    ctx->pc = 0x13695cu;
    // NOP
label_136960:
    // 0x136960: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_136964:
    if (ctx->pc == 0x136964u) {
        ctx->pc = 0x136968u;
        goto label_136968;
    }
    ctx->pc = 0x136960u;
    {
        const bool branch_taken_0x136960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136960) {
            ctx->pc = 0x136970u;
            goto label_136970;
        }
    }
    ctx->pc = 0x136968u;
label_136968:
    // 0x136968: 0x10000002  b           . + 4 + (0x2 << 2)
label_13696c:
    if (ctx->pc == 0x13696Cu) {
        ctx->pc = 0x136970u;
        goto label_136970;
    }
    ctx->pc = 0x136968u;
    {
        const bool branch_taken_0x136968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136968) {
            ctx->pc = 0x136974u;
            goto label_136974;
        }
    }
    ctx->pc = 0x136970u;
label_136970:
    // 0x136970: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x136970u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_136974:
    // 0x136974: 0x1000000b  b           . + 4 + (0xB << 2)
label_136978:
    if (ctx->pc == 0x136978u) {
        ctx->pc = 0x136978u;
            // 0x136978: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x13697Cu;
        goto label_13697c;
    }
    ctx->pc = 0x136974u;
    {
        const bool branch_taken_0x136974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136974u;
            // 0x136978: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136974) {
            ctx->pc = 0x1369A4u;
            goto label_1369a4;
        }
    }
    ctx->pc = 0x13697Cu;
label_13697c:
    // 0x13697c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x13697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136980:
    // 0x136980: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x136980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_136984:
    // 0x136984: 0x0  nop
    ctx->pc = 0x136984u;
    // NOP
label_136988:
    // 0x136988: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_13698c:
    if (ctx->pc == 0x13698Cu) {
        ctx->pc = 0x136990u;
        goto label_136990;
    }
    ctx->pc = 0x136988u;
    {
        const bool branch_taken_0x136988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136988) {
            ctx->pc = 0x136998u;
            goto label_136998;
        }
    }
    ctx->pc = 0x136990u;
label_136990:
    // 0x136990: 0x10000003  b           . + 4 + (0x3 << 2)
label_136994:
    if (ctx->pc == 0x136994u) {
        ctx->pc = 0x136994u;
            // 0x136994: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x136998u;
        goto label_136998;
    }
    ctx->pc = 0x136990u;
    {
        const bool branch_taken_0x136990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136990u;
            // 0x136994: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136990) {
            ctx->pc = 0x1369A0u;
            goto label_1369a0;
        }
    }
    ctx->pc = 0x136998u;
label_136998:
    // 0x136998: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x136998u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_13699c:
    // 0x13699c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x13699cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1369a0:
    // 0x1369a0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1369a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1369a4:
    // 0x1369a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1369a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1369a8:
    // 0x1369a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1369a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1369ac:
    // 0x1369ac: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1369acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1369b0:
    // 0x1369b0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1369b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1369b4:
    // 0x1369b4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1369b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1369b8:
    // 0x1369b8: 0xc041c38  jal         func_1070E0
label_1369bc:
    if (ctx->pc == 0x1369BCu) {
        ctx->pc = 0x1369BCu;
            // 0x1369bc: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x1369C0u;
        goto label_1369c0;
    }
    ctx->pc = 0x1369B8u;
    SET_GPR_U32(ctx, 31, 0x1369C0u);
    ctx->pc = 0x1369BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1369B8u;
            // 0x1369bc: 0xafa000cc  sw          $zero, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1369C0u; }
        if (ctx->pc != 0x1369C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1369C0u; }
        if (ctx->pc != 0x1369C0u) { return; }
    }
    ctx->pc = 0x1369C0u;
label_1369c0:
    // 0x1369c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1369c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1369c4:
    // 0x1369c4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1369c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1369c8:
    // 0x1369c8: 0xc041c3e  jal         func_1070F8
label_1369cc:
    if (ctx->pc == 0x1369CCu) {
        ctx->pc = 0x1369CCu;
            // 0x1369cc: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1369D0u;
        goto label_1369d0;
    }
    ctx->pc = 0x1369C8u;
    SET_GPR_U32(ctx, 31, 0x1369D0u);
    ctx->pc = 0x1369CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1369C8u;
            // 0x1369cc: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1369D0u; }
        if (ctx->pc != 0x1369D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1369D0u; }
        if (ctx->pc != 0x1369D0u) { return; }
    }
    ctx->pc = 0x1369D0u;
label_1369d0:
    // 0x1369d0: 0x8e710058  lw          $s1, 0x58($s3)
    ctx->pc = 0x1369d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_1369d4:
    // 0x1369d4: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_1369d8:
    if (ctx->pc == 0x1369D8u) {
        ctx->pc = 0x1369DCu;
        goto label_1369dc;
    }
    ctx->pc = 0x1369D4u;
    {
        const bool branch_taken_0x1369d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1369d4) {
            ctx->pc = 0x136A44u;
            goto label_136a44;
        }
    }
    ctx->pc = 0x1369DCu;
label_1369dc:
    // 0x1369dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1369dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1369e0:
    // 0x1369e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1369e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1369e4:
    // 0x1369e4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1369e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1369e8:
    // 0x1369e8: 0x320f809  jalr        $t9
label_1369ec:
    if (ctx->pc == 0x1369ECu) {
        ctx->pc = 0x1369ECu;
            // 0x1369ec: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1369F0u;
        goto label_1369f0;
    }
    ctx->pc = 0x1369E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1369F0u);
        ctx->pc = 0x1369ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1369E8u;
            // 0x1369ec: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1369F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1369F0u; }
            if (ctx->pc != 0x1369F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1369F0u;
label_1369f0:
    // 0x1369f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1369f4:
    if (ctx->pc == 0x1369F4u) {
        ctx->pc = 0x1369F8u;
        goto label_1369f8;
    }
    ctx->pc = 0x1369F0u;
    {
        const bool branch_taken_0x1369f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1369f0) {
            ctx->pc = 0x136A34u;
            goto label_136a34;
        }
    }
    ctx->pc = 0x1369F8u;
label_1369f8:
    // 0x1369f8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1369fc:
    if (ctx->pc == 0x1369FCu) {
        ctx->pc = 0x1369FCu;
            // 0x1369fc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x136A00u;
        goto label_136a00;
    }
    ctx->pc = 0x1369F8u;
    {
        const bool branch_taken_0x1369f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1369FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1369F8u;
            // 0x1369fc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369f8) {
            ctx->pc = 0x136A10u;
            goto label_136a10;
        }
    }
    ctx->pc = 0x136A00u;
label_136a00:
    // 0x136a00: 0xc04e624  jal         func_139890
label_136a04:
    if (ctx->pc == 0x136A04u) {
        ctx->pc = 0x136A04u;
            // 0x136a04: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x136A08u;
        goto label_136a08;
    }
    ctx->pc = 0x136A00u;
    SET_GPR_U32(ctx, 31, 0x136A08u);
    ctx->pc = 0x136A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136A00u;
            // 0x136a04: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A08u; }
        if (ctx->pc != 0x136A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A08u; }
        if (ctx->pc != 0x136A08u) { return; }
    }
    ctx->pc = 0x136A08u;
label_136a08:
    // 0x136a08: 0x10000008  b           . + 4 + (0x8 << 2)
label_136a0c:
    if (ctx->pc == 0x136A0Cu) {
        ctx->pc = 0x136A10u;
        goto label_136a10;
    }
    ctx->pc = 0x136A08u;
    {
        const bool branch_taken_0x136a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a08) {
            ctx->pc = 0x136A2Cu;
            goto label_136a2c;
        }
    }
    ctx->pc = 0x136A10u;
label_136a10:
    // 0x136a10: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x136a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_136a14:
    // 0x136a14: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x136a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_136a18:
    // 0x136a18: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x136a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_136a1c:
    // 0x136a1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x136a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136a20:
    // 0x136a20: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x136a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_136a24:
    // 0x136a24: 0xc04bd40  jal         func_12F500
label_136a28:
    if (ctx->pc == 0x136A28u) {
        ctx->pc = 0x136A28u;
            // 0x136a28: 0x27a900e0  addiu       $t1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x136A2Cu;
        goto label_136a2c;
    }
    ctx->pc = 0x136A24u;
    SET_GPR_U32(ctx, 31, 0x136A2Cu);
    ctx->pc = 0x136A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136A24u;
            // 0x136a28: 0x27a900e0  addiu       $t1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A2Cu; }
        if (ctx->pc != 0x136A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A2Cu; }
        if (ctx->pc != 0x136A2Cu) { return; }
    }
    ctx->pc = 0x136A2Cu;
label_136a2c:
    // 0x136a2c: 0x0  nop
    ctx->pc = 0x136a2cu;
    // NOP
label_136a30:
    // 0x136a30: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x136a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136a34:
    // 0x136a34: 0x0  nop
    ctx->pc = 0x136a34u;
    // NOP
label_136a38:
    // 0x136a38: 0x8e31005c  lw          $s1, 0x5C($s1)
    ctx->pc = 0x136a38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_136a3c:
    // 0x136a3c: 0x1620ffe7  bnez        $s1, . + 4 + (-0x19 << 2)
label_136a40:
    if (ctx->pc == 0x136A40u) {
        ctx->pc = 0x136A44u;
        goto label_136a44;
    }
    ctx->pc = 0x136A3Cu;
    {
        const bool branch_taken_0x136a3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x136a3c) {
            ctx->pc = 0x1369DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1369dc;
        }
    }
    ctx->pc = 0x136A44u;
label_136a44:
    // 0x136a44: 0x0  nop
    ctx->pc = 0x136a44u;
    // NOP
label_136a48:
    // 0x136a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_136a4c:
    // 0x136a4c: 0xc04e624  jal         func_139890
label_136a50:
    if (ctx->pc == 0x136A50u) {
        ctx->pc = 0x136A50u;
            // 0x136a50: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x136A54u;
        goto label_136a54;
    }
    ctx->pc = 0x136A4Cu;
    SET_GPR_U32(ctx, 31, 0x136A54u);
    ctx->pc = 0x136A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136A4Cu;
            // 0x136a50: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A54u; }
        if (ctx->pc != 0x136A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136A54u; }
        if (ctx->pc != 0x136A54u) { return; }
    }
    ctx->pc = 0x136A54u;
label_136a54:
    // 0x136a54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x136a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136a58:
    // 0x136a58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x136a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_136a5c:
    // 0x136a5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x136a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_136a60:
    // 0x136a60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_136a64:
    // 0x136a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_136a68:
    // 0x136a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_136a6c:
    // 0x136a6c: 0x3e00008  jr          $ra
label_136a70:
    if (ctx->pc == 0x136A70u) {
        ctx->pc = 0x136A70u;
            // 0x136a70: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x136A74u;
        goto label_fallthrough_0x136a6c;
    }
    ctx->pc = 0x136A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A6Cu;
            // 0x136a70: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x136a6c:
    ctx->pc = 0x136A74u;
}
