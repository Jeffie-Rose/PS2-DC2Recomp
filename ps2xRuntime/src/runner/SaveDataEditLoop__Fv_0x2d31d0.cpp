#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveDataEditLoop__Fv
// Address: 0x2d31d0 - 0x2d391c
void SaveDataEditLoop__Fv_0x2d31d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveDataEditLoop__Fv_0x2d31d0");
#endif

    switch (ctx->pc) {
        case 0x2d31f0u: goto label_2d31f0;
        case 0x2d31f8u: goto label_2d31f8;
        case 0x2d3230u: goto label_2d3230;
        case 0x2d3238u: goto label_2d3238;
        case 0x2d3268u: goto label_2d3268;
        case 0x2d32a0u: goto label_2d32a0;
        case 0x2d32acu: goto label_2d32ac;
        case 0x2d32d8u: goto label_2d32d8;
        case 0x2d32ecu: goto label_2d32ec;
        case 0x2d332cu: goto label_2d332c;
        case 0x2d3360u: goto label_2d3360;
        case 0x2d3394u: goto label_2d3394;
        case 0x2d33ccu: goto label_2d33cc;
        case 0x2d33f0u: goto label_2d33f0;
        case 0x2d3418u: goto label_2d3418;
        case 0x2d345cu: goto label_2d345c;
        case 0x2d3470u: goto label_2d3470;
        case 0x2d34a0u: goto label_2d34a0;
        case 0x2d34b4u: goto label_2d34b4;
        case 0x2d34ccu: goto label_2d34cc;
        case 0x2d34f4u: goto label_2d34f4;
        case 0x2d3518u: goto label_2d3518;
        case 0x2d3544u: goto label_2d3544;
        case 0x2d356cu: goto label_2d356c;
        case 0x2d3594u: goto label_2d3594;
        case 0x2d35bcu: goto label_2d35bc;
        case 0x2d35e4u: goto label_2d35e4;
        case 0x2d360cu: goto label_2d360c;
        case 0x2d364cu: goto label_2d364c;
        case 0x2d3660u: goto label_2d3660;
        case 0x2d367cu: goto label_2d367c;
        case 0x2d3698u: goto label_2d3698;
        case 0x2d36c0u: goto label_2d36c0;
        case 0x2d3700u: goto label_2d3700;
        case 0x2d3718u: goto label_2d3718;
        case 0x2d373cu: goto label_2d373c;
        case 0x2d3754u: goto label_2d3754;
        case 0x2d3768u: goto label_2d3768;
        case 0x2d3784u: goto label_2d3784;
        case 0x2d37a4u: goto label_2d37a4;
        case 0x2d37c0u: goto label_2d37c0;
        case 0x2d37e0u: goto label_2d37e0;
        case 0x2d3808u: goto label_2d3808;
        case 0x2d3838u: goto label_2d3838;
        case 0x2d386cu: goto label_2d386c;
        case 0x2d388cu: goto label_2d388c;
        case 0x2d38ccu: goto label_2d38cc;
        case 0x2d38e0u: goto label_2d38e0;
        case 0x2d38f0u: goto label_2d38f0;
        default: break;
    }

    ctx->pc = 0x2d31d0u;

    // 0x2d31d0: 0x27bdf780  addiu       $sp, $sp, -0x880
    ctx->pc = 0x2d31d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965120));
    // 0x2d31d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d31d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d31d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d31d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d31dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d31dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d31e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d31e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d31e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d31e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d31e8: 0xc06421c  jal         func_190870
    ctx->pc = 0x2D31E8u;
    SET_GPR_U32(ctx, 31, 0x2D31F0u);
    ctx->pc = 0x2D31ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D31E8u;
            // 0x2d31ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D31F0u; }
        if (ctx->pc != 0x2D31F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D31F0u; }
        if (ctx->pc != 0x2D31F0u) { return; }
    }
    ctx->pc = 0x2D31F0u;
label_2d31f0:
    // 0x2d31f0: 0xc064220  jal         func_190880
    ctx->pc = 0x2D31F0u;
    SET_GPR_U32(ctx, 31, 0x2D31F8u);
    ctx->pc = 0x2D31F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D31F0u;
            // 0x2d31f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D31F8u; }
        if (ctx->pc != 0x2D31F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D31F8u; }
        if (ctx->pc != 0x2D31F8u) { return; }
    }
    ctx->pc = 0x2D31F8u;
label_2d31f8:
    // 0x2d31f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d31f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d31fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2d31fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2d3200: 0xdf828538  ld          $v0, -0x7AC8($gp)
    ctx->pc = 0x2d3200u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x2d3204: 0x27a40868  addiu       $a0, $sp, 0x868
    ctx->pc = 0x2d3204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2152));
    // 0x2d3208: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x2d3208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x2d320c: 0x27a30870  addiu       $v1, $sp, 0x870
    ctx->pc = 0x2d320cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
    // 0x2d3210: 0x221a021  addu        $s4, $s1, $at
    ctx->pc = 0x2d3210u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x2d3214: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3218: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2d3218u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2d321c: 0xdf828540  ld          $v0, -0x7AC0($gp)
    ctx->pc = 0x2d321cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935872)));
    // 0x2d3220: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d3220u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2d3224: 0x8c2465a0  lw          $a0, 0x65A0($at)
    ctx->pc = 0x2d3224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26016)));
    // 0x2d3228: 0xc0c69c0  jal         func_31A700
    ctx->pc = 0x2D3228u;
    SET_GPR_U32(ctx, 31, 0x2D3230u);
    ctx->pc = 0x2D322Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3228u;
            // 0x2d322c: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A700u;
    if (runtime->hasFunction(0x31A700u)) {
        auto targetFn = runtime->lookupFunction(0x31A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3230u; }
        if (ctx->pc != 0x2D3230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameProgressInfo__Fi_0x31a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3230u; }
        if (ctx->pc != 0x2D3230u) { return; }
    }
    ctx->pc = 0x2D3230u;
label_2d3230:
    // 0x2d3230: 0xc0642fc  jal         func_190BF0
    ctx->pc = 0x2D3230u;
    SET_GPR_U32(ctx, 31, 0x2D3238u);
    ctx->pc = 0x2D3234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3230u;
            // 0x2d3234: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190BF0u;
    if (runtime->hasFunction(0x190BF0u)) {
        auto targetFn = runtime->lookupFunction(0x190BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3238u; }
        if (ctx->pc != 0x2D3238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayTimeCountFlag__Fv_0x190bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3238u; }
        if (ctx->pc != 0x2D3238u) { return; }
    }
    ctx->pc = 0x2D3238u;
label_2d3238:
    // 0x2d3238: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d323c: 0xac2265b0  sw          $v0, 0x65B0($at)
    ctx->pc = 0x2d323cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26032), GPR_U32(ctx, 2));
    // 0x2d3240: 0x26820034  addiu       $v0, $s4, 0x34
    ctx->pc = 0x2d3240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
    // 0x2d3244: 0x8fb40868  lw          $s4, 0x868($sp)
    ctx->pc = 0x2d3244u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2152)));
    // 0x2d3248: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3248u;
    {
        const bool branch_taken_0x2d3248 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D324Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3248u;
            // 0x2d324c: 0xafa2087c  sw          $v0, 0x87C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3248) {
            ctx->pc = 0x2D3258u;
            goto label_2d3258;
        }
    }
    ctx->pc = 0x2D3250u;
    // 0x2d3250: 0x8e740008  lw          $s4, 0x8($s3)
    ctx->pc = 0x2d3250u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2d3254: 0x0  nop
    ctx->pc = 0x2d3254u;
    // NOP
label_2d3258:
    // 0x2d3258: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d3258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d325c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d325cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3260: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D3260u;
    SET_GPR_U32(ctx, 31, 0x2D3268u);
    ctx->pc = 0x2D3264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3260u;
            // 0x2d3264: 0x24a505b0  addiu       $a1, $a1, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3268u; }
        if (ctx->pc != 0x2D3268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3268u; }
        if (ctx->pc != 0x2D3268u) { return; }
    }
    ctx->pc = 0x2D3268u;
label_2d3268:
    // 0x2d3268: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2d3268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d326c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d326cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3270: 0x8f829df0  lw          $v0, -0x6210($gp)
    ctx->pc = 0x2d3270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d3274: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d3274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d3278: 0x8c2765a0  lw          $a3, 0x65A0($at)
    ctx->pc = 0x2d3278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26016)));
    // 0x2d327c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d327cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3284: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2d3284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x2d3288: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d328c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d328cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3290: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2d3290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d3294: 0x8c460868  lw          $a2, 0x868($v0)
    ctx->pc = 0x2d3294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2152)));
    // 0x2d3298: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D3298u;
    SET_GPR_U32(ctx, 31, 0x2D32A0u);
    ctx->pc = 0x2D329Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3298u;
            // 0x2d329c: 0x24a505d0  addiu       $a1, $a1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D32A0u; }
        if (ctx->pc != 0x2D32A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D32A0u; }
        if (ctx->pc != 0x2D32A0u) { return; }
    }
    ctx->pc = 0x2D32A0u;
label_2d32a0:
    // 0x2d32a0: 0xc62c1a10  lwc1        $f12, 0x1A10($s1)
    ctx->pc = 0x2d32a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d32a4: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2D32A4u;
    SET_GPR_U32(ctx, 31, 0x2D32ACu);
    ctx->pc = 0x2D32A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D32A4u;
            // 0x2d32a8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D32ACu; }
        if (ctx->pc != 0x2D32ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D32ACu; }
        if (ctx->pc != 0x2D32ACu) { return; }
    }
    ctx->pc = 0x2D32ACu;
label_2d32ac:
    // 0x2d32ac: 0x8f839df0  lw          $v1, -0x6210($gp)
    ctx->pc = 0x2d32acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d32b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d32b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d32b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d32b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d32b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d32b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d32bc: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2d32bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2d32c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d32c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d32c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d32c8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2d32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d32cc: 0x8c460868  lw          $a2, 0x868($v0)
    ctx->pc = 0x2d32ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2152)));
    // 0x2d32d0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D32D0u;
    SET_GPR_U32(ctx, 31, 0x2D32D8u);
    ctx->pc = 0x2D32D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D32D0u;
            // 0x2d32d4: 0x24a505f0  addiu       $a1, $a1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D32D8u; }
        if (ctx->pc != 0x2D32D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D32D8u; }
        if (ctx->pc != 0x2D32D8u) { return; }
    }
    ctx->pc = 0x2D32D8u;
label_2d32d8:
    // 0x2d32d8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d32d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d32dc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2d32dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d32e0: 0x8c2565a8  lw          $a1, 0x65A8($at)
    ctx->pc = 0x2d32e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d32e4: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x2D32E4u;
    SET_GPR_U32(ctx, 31, 0x2D32ECu);
    ctx->pc = 0x2D32E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D32E4u;
            // 0x2d32e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D32ECu; }
        if (ctx->pc != 0x2D32ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D32ECu; }
        if (ctx->pc != 0x2D32ECu) { return; }
    }
    ctx->pc = 0x2D32ECu;
label_2d32ec:
    // 0x2d32ec: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2d32ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d32f0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d32f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d32f4: 0x8f829df0  lw          $v0, -0x6210($gp)
    ctx->pc = 0x2d32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d32f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d32fc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2d32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2d3300: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d3300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d3304: 0x8c680870  lw          $t0, 0x870($v1)
    ctx->pc = 0x2d3304u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2160)));
    // 0x2d3308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d330c: 0x8c2765a8  lw          $a3, 0x65A8($at)
    ctx->pc = 0x2d330cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d3310: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2d3310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2d3314: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d3318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d3318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d331c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2d331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d3320: 0x8c460868  lw          $a2, 0x868($v0)
    ctx->pc = 0x2d3320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2152)));
    // 0x2d3324: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D3324u;
    SET_GPR_U32(ctx, 31, 0x2D332Cu);
    ctx->pc = 0x2D3328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3324u;
            // 0x2d3328: 0x24a50610  addiu       $a1, $a1, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D332Cu; }
        if (ctx->pc != 0x2D332Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D332Cu; }
        if (ctx->pc != 0x2D332Cu) { return; }
    }
    ctx->pc = 0x2D332Cu;
label_2d332c:
    // 0x2d332c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2d332cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d3330: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3334: 0x8f829df0  lw          $v0, -0x6210($gp)
    ctx->pc = 0x2d3334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d3338: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d3338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d333c: 0x8c2765ac  lw          $a3, 0x65AC($at)
    ctx->pc = 0x2d333cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26028)));
    // 0x2d3340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3344: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2d3344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2d3348: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d334c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d334cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3350: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2d3350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d3354: 0x8c460868  lw          $a2, 0x868($v0)
    ctx->pc = 0x2d3354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2152)));
    // 0x2d3358: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D3358u;
    SET_GPR_U32(ctx, 31, 0x2D3360u);
    ctx->pc = 0x2D335Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3358u;
            // 0x2d335c: 0x24a50630  addiu       $a1, $a1, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3360u; }
        if (ctx->pc != 0x2D3360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3360u; }
        if (ctx->pc != 0x2D3360u) { return; }
    }
    ctx->pc = 0x2D3360u;
label_2d3360:
    // 0x2d3360: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2d3360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d3364: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3368: 0x8f829df0  lw          $v0, -0x6210($gp)
    ctx->pc = 0x2d3368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d336c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d336cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d3370: 0x8c2765b0  lw          $a3, 0x65B0($at)
    ctx->pc = 0x2d3370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26032)));
    // 0x2d3374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3378: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2d3378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x2d337c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d337cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d3380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d3380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3384: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2d3384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d3388: 0x8c460868  lw          $a2, 0x868($v0)
    ctx->pc = 0x2d3388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2152)));
    // 0x2d338c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D338Cu;
    SET_GPR_U32(ctx, 31, 0x2D3394u);
    ctx->pc = 0x2D3390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D338Cu;
            // 0x2d3390: 0x24a50640  addiu       $a1, $a1, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3394u; }
        if (ctx->pc != 0x2D3394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3394u; }
        if (ctx->pc != 0x2D3394u) { return; }
    }
    ctx->pc = 0x2D3394u;
label_2d3394:
    // 0x2d3394: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2d3394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d3398: 0x8fa3087c  lw          $v1, 0x87C($sp)
    ctx->pc = 0x2d3398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2172)));
    // 0x2d339c: 0x8f829df0  lw          $v0, -0x6210($gp)
    ctx->pc = 0x2d339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d33a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d33a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d33a4: 0x8f878530  lw          $a3, -0x7AD0($gp)
    ctx->pc = 0x2d33a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935856)));
    // 0x2d33a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d33a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d33ac: 0x80680000  lb          $t0, 0x0($v1)
    ctx->pc = 0x2d33acu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d33b0: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2d33b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x2d33b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2d33b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2d33b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d33bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2d33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d33c0: 0x8c460868  lw          $a2, 0x868($v0)
    ctx->pc = 0x2d33c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2152)));
    // 0x2d33c4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2D33C4u;
    SET_GPR_U32(ctx, 31, 0x2D33CCu);
    ctx->pc = 0x2D33C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D33C4u;
            // 0x2d33c8: 0x24a50650  addiu       $a1, $a1, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33CCu; }
        if (ctx->pc != 0x2D33CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33CCu; }
        if (ctx->pc != 0x2D33CCu) { return; }
    }
    ctx->pc = 0x2D33CCu;
label_2d33cc:
    // 0x2d33cc: 0x8e231a08  lw          $v1, 0x1A08($s1)
    ctx->pc = 0x2d33ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6664)));
    // 0x2d33d0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d33d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d33d4: 0x8f829df0  lw          $v0, -0x6210($gp)
    ctx->pc = 0x2d33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d33d8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D33D8u;
    {
        const bool branch_taken_0x2d33d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D33DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D33D8u;
            // 0x2d33dc: 0xac2365a0  sw          $v1, 0x65A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 26016), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33d8) {
            ctx->pc = 0x2D3488u;
            goto label_2d3488;
        }
    }
    ctx->pc = 0x2D33E0u;
    // 0x2d33e0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d33e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d33e4: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x2d33e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2d33e8: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D33E8u;
    SET_GPR_U32(ctx, 31, 0x2D33F0u);
    ctx->pc = 0x2D33ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D33E8u;
            // 0x2d33ec: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33F0u; }
        if (ctx->pc != 0x2D33F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33F0u; }
        if (ctx->pc != 0x2D33F0u) { return; }
    }
    ctx->pc = 0x2D33F0u;
label_2d33f0:
    // 0x2d33f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D33F0u;
    {
        const bool branch_taken_0x2d33f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D33F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D33F0u;
            // 0x2d33f4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33f0) {
            ctx->pc = 0x2D340Cu;
            goto label_2d340c;
        }
    }
    ctx->pc = 0x2D33F8u;
    // 0x2d33f8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d33f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d33fc: 0x8c2265a0  lw          $v0, 0x65A0($at)
    ctx->pc = 0x2d33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26016)));
    // 0x2d3400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3404: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3408: 0xac2265a0  sw          $v0, 0x65A0($at)
    ctx->pc = 0x2d3408u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26016), GPR_U32(ctx, 2));
label_2d340c:
    // 0x2d340c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d340cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d3410: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3410u;
    SET_GPR_U32(ctx, 31, 0x2D3418u);
    ctx->pc = 0x2D3414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3410u;
            // 0x2d3414: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3418u; }
        if (ctx->pc != 0x2D3418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3418u; }
        if (ctx->pc != 0x2D3418u) { return; }
    }
    ctx->pc = 0x2D3418u;
label_2d3418:
    // 0x2d3418: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3418u;
    {
        const bool branch_taken_0x2d3418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3418) {
            ctx->pc = 0x2D3434u;
            goto label_2d3434;
        }
    }
    ctx->pc = 0x2D3420u;
    // 0x2d3420: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3424: 0x8c2265a0  lw          $v0, 0x65A0($at)
    ctx->pc = 0x2d3424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26016)));
    // 0x2d3428: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d3428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d342c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d342cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3430: 0xac2265a0  sw          $v0, 0x65A0($at)
    ctx->pc = 0x2d3430u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26016), GPR_U32(ctx, 2));
label_2d3434:
    // 0x2d3434: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3438: 0x8c2265a0  lw          $v0, 0x65A0($at)
    ctx->pc = 0x2d3438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26016)));
    // 0x2d343c: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D343Cu;
    {
        const bool branch_taken_0x2d343c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2d343c) {
            ctx->pc = 0x2D3450u;
            goto label_2d3450;
        }
    }
    ctx->pc = 0x2D3444u;
    // 0x2d3444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3448: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d344c: 0xac2265a0  sw          $v0, 0x65A0($at)
    ctx->pc = 0x2d344cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26016), GPR_U32(ctx, 2));
label_2d3450:
    // 0x2d3450: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3454: 0xc0c69dc  jal         func_31A770
    ctx->pc = 0x2D3454u;
    SET_GPR_U32(ctx, 31, 0x2D345Cu);
    ctx->pc = 0x2D3458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3454u;
            // 0x2d3458: 0x8c3265a0  lw          $s2, 0x65A0($at) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26016)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A770u;
    if (runtime->hasFunction(0x31A770u)) {
        auto targetFn = runtime->lookupFunction(0x31A770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D345Cu; }
        if (ctx->pc != 0x2D345Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameProgressNum__Fv_0x31a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D345Cu; }
        if (ctx->pc != 0x2D345Cu) { return; }
    }
    ctx->pc = 0x2D345Cu;
label_2d345c:
    // 0x2d345c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2d345cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3460: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3460u;
    {
        const bool branch_taken_0x2d3460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3460) {
            ctx->pc = 0x2D347Cu;
            goto label_2d347c;
        }
    }
    ctx->pc = 0x2D3468u;
    // 0x2d3468: 0xc0c69dc  jal         func_31A770
    ctx->pc = 0x2D3468u;
    SET_GPR_U32(ctx, 31, 0x2D3470u);
    ctx->pc = 0x31A770u;
    if (runtime->hasFunction(0x31A770u)) {
        auto targetFn = runtime->lookupFunction(0x31A770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3470u; }
        if (ctx->pc != 0x2D3470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameProgressNum__Fv_0x31a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3470u; }
        if (ctx->pc != 0x2D3470u) { return; }
    }
    ctx->pc = 0x2D3470u;
label_2d3470:
    // 0x2d3470: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d3470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d3474: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3478: 0xac2265a0  sw          $v0, 0x65A0($at)
    ctx->pc = 0x2d3478u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26016), GPR_U32(ctx, 2));
label_2d347c:
    // 0x2d347c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d347cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3480: 0x8c2265a0  lw          $v0, 0x65A0($at)
    ctx->pc = 0x2d3480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26016)));
    // 0x2d3484: 0xae221a08  sw          $v0, 0x1A08($s1)
    ctx->pc = 0x2d3484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6664), GPR_U32(ctx, 2));
label_2d3488:
    // 0x2d3488: 0x8f839df0  lw          $v1, -0x6210($gp)
    ctx->pc = 0x2d3488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d348c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3490: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D3490u;
    {
        const bool branch_taken_0x2d3490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d3490) {
            ctx->pc = 0x2D3528u;
            goto label_2d3528;
        }
    }
    ctx->pc = 0x2D3498u;
    // 0x2d3498: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2D3498u;
    SET_GPR_U32(ctx, 31, 0x2D34A0u);
    ctx->pc = 0x2D349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3498u;
            // 0x2d349c: 0xc62c1a10  lwc1        $f12, 0x1A10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34A0u; }
        if (ctx->pc != 0x2D34A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34A0u; }
        if (ctx->pc != 0x2D34A0u) { return; }
    }
    ctx->pc = 0x2D34A0u;
label_2d34a0:
    // 0x2d34a0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d34a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d34a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d34a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d34a8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2d34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x2d34ac: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D34ACu;
    SET_GPR_U32(ctx, 31, 0x2D34B4u);
    ctx->pc = 0x2D34B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34ACu;
            // 0x2d34b0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34B4u; }
        if (ctx->pc != 0x2D34B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34B4u; }
        if (ctx->pc != 0x2D34B4u) { return; }
    }
    ctx->pc = 0x2D34B4u;
label_2d34b4:
    // 0x2d34b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D34B4u;
    {
        const bool branch_taken_0x2d34b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D34B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34B4u;
            // 0x2d34b8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34b4) {
            ctx->pc = 0x2D34C0u;
            goto label_2d34c0;
        }
    }
    ctx->pc = 0x2D34BCu;
    // 0x2d34bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d34bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d34c0:
    // 0x2d34c0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d34c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d34c4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D34C4u;
    SET_GPR_U32(ctx, 31, 0x2D34CCu);
    ctx->pc = 0x2D34C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34C4u;
            // 0x2d34c8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34CCu; }
        if (ctx->pc != 0x2D34CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34CCu; }
        if (ctx->pc != 0x2D34CCu) { return; }
    }
    ctx->pc = 0x2D34CCu;
label_2d34cc:
    // 0x2d34cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D34CCu;
    {
        const bool branch_taken_0x2d34cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34CCu;
            // 0x2d34d0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34cc) {
            ctx->pc = 0x2D34D8u;
            goto label_2d34d8;
        }
    }
    ctx->pc = 0x2D34D4u;
    // 0x2d34d4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2d34d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d34d8:
    // 0x2d34d8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d34dc: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x2d34dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d34e0: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2d34e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x2d34e4: 0x0  nop
    ctx->pc = 0x2d34e4u;
    // NOP
    // 0x2d34e8: 0x9010  mfhi        $s2
    ctx->pc = 0x2d34e8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x2d34ec: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D34ECu;
    SET_GPR_U32(ctx, 31, 0x2D34F4u);
    ctx->pc = 0x2D34F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34ECu;
            // 0x2d34f0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34F4u; }
        if (ctx->pc != 0x2D34F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34F4u; }
        if (ctx->pc != 0x2D34F4u) { return; }
    }
    ctx->pc = 0x2D34F4u;
label_2d34f4:
    // 0x2d34f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D34F4u;
    {
        const bool branch_taken_0x2d34f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D34F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34F4u;
            // 0x2d34f8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34f4) {
            ctx->pc = 0x2D3508u;
            goto label_2d3508;
        }
    }
    ctx->pc = 0x2D34FCu;
    // 0x2d34fc: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D34FCu;
    {
        const bool branch_taken_0x2d34fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D3500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34FCu;
            // 0x2d3500: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34fc) {
            ctx->pc = 0x2D3508u;
            goto label_2d3508;
        }
    }
    ctx->pc = 0x2D3504u;
    // 0x2d3504: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d3504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3508:
    // 0x2d3508: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2d3508u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d350c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3510: 0xc0a1270  jal         func_2849C0
    ctx->pc = 0x2D3510u;
    SET_GPR_U32(ctx, 31, 0x2D3518u);
    ctx->pc = 0x2D3514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3510u;
            // 0x2d3514: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849C0u;
    if (runtime->hasFunction(0x2849C0u)) {
        auto targetFn = runtime->lookupFunction(0x2849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3518u; }
        if (ctx->pc != 0x2D3518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTime__6CSceneFf_0x2849c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3518u; }
        if (ctx->pc != 0x2D3518u) { return; }
    }
    ctx->pc = 0x2D3518u;
label_2d3518:
    // 0x2d3518: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2d3518u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d351c: 0x0  nop
    ctx->pc = 0x2d351cu;
    // NOP
    // 0x2d3520: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d3520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d3524: 0xe6201a10  swc1        $f0, 0x1A10($s1)
    ctx->pc = 0x2d3524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6672), bits); }
label_2d3528:
    // 0x2d3528: 0x8f839df0  lw          $v1, -0x6210($gp)
    ctx->pc = 0x2d3528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d352c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d352cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3530: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2D3530u;
    {
        const bool branch_taken_0x2d3530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D3534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3530u;
            // 0x2d3534: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3530) {
            ctx->pc = 0x2D367Cu;
            goto label_2d367c;
        }
    }
    ctx->pc = 0x2D3538u;
    // 0x2d3538: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x2d3538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2d353c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D353Cu;
    SET_GPR_U32(ctx, 31, 0x2D3544u);
    ctx->pc = 0x2D3540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D353Cu;
            // 0x2d3540: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3544u; }
        if (ctx->pc != 0x2D3544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3544u; }
        if (ctx->pc != 0x2D3544u) { return; }
    }
    ctx->pc = 0x2D3544u;
label_2d3544:
    // 0x2d3544: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3544u;
    {
        const bool branch_taken_0x2d3544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3544u;
            // 0x2d3548: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3544) {
            ctx->pc = 0x2D3560u;
            goto label_2d3560;
        }
    }
    ctx->pc = 0x2D354Cu;
    // 0x2d354c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d354cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3550: 0x8c2265a8  lw          $v0, 0x65A8($at)
    ctx->pc = 0x2d3550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d3554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d3558: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d355c: 0xac2265a8  sw          $v0, 0x65A8($at)
    ctx->pc = 0x2d355cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26024), GPR_U32(ctx, 2));
label_2d3560:
    // 0x2d3560: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d3560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d3564: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3564u;
    SET_GPR_U32(ctx, 31, 0x2D356Cu);
    ctx->pc = 0x2D3568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3564u;
            // 0x2d3568: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D356Cu; }
        if (ctx->pc != 0x2D356Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D356Cu; }
        if (ctx->pc != 0x2D356Cu) { return; }
    }
    ctx->pc = 0x2D356Cu;
label_2d356c:
    // 0x2d356c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D356Cu;
    {
        const bool branch_taken_0x2d356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D356Cu;
            // 0x2d3570: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d356c) {
            ctx->pc = 0x2D3588u;
            goto label_2d3588;
        }
    }
    ctx->pc = 0x2D3574u;
    // 0x2d3574: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3578: 0x8c2265a8  lw          $v0, 0x65A8($at)
    ctx->pc = 0x2d3578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d357c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d3580: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3584: 0xac2265a8  sw          $v0, 0x65A8($at)
    ctx->pc = 0x2d3584u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26024), GPR_U32(ctx, 2));
label_2d3588:
    // 0x2d3588: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2d3588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d358c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D358Cu;
    SET_GPR_U32(ctx, 31, 0x2D3594u);
    ctx->pc = 0x2D3590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D358Cu;
            // 0x2d3590: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3594u; }
        if (ctx->pc != 0x2D3594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3594u; }
        if (ctx->pc != 0x2D3594u) { return; }
    }
    ctx->pc = 0x2D3594u;
label_2d3594:
    // 0x2d3594: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3594u;
    {
        const bool branch_taken_0x2d3594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3594u;
            // 0x2d3598: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3594) {
            ctx->pc = 0x2D35B0u;
            goto label_2d35b0;
        }
    }
    ctx->pc = 0x2D359Cu;
    // 0x2d359c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d359cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d35a0: 0x8c2265a8  lw          $v0, 0x65A8($at)
    ctx->pc = 0x2d35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d35a4: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2d35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2d35a8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d35a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d35ac: 0xac2265a8  sw          $v0, 0x65A8($at)
    ctx->pc = 0x2d35acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26024), GPR_U32(ctx, 2));
label_2d35b0:
    // 0x2d35b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d35b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d35b4: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D35B4u;
    SET_GPR_U32(ctx, 31, 0x2D35BCu);
    ctx->pc = 0x2D35B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D35B4u;
            // 0x2d35b8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D35BCu; }
        if (ctx->pc != 0x2D35BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D35BCu; }
        if (ctx->pc != 0x2D35BCu) { return; }
    }
    ctx->pc = 0x2D35BCu;
label_2d35bc:
    // 0x2d35bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D35BCu;
    {
        const bool branch_taken_0x2d35bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D35C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D35BCu;
            // 0x2d35c0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35bc) {
            ctx->pc = 0x2D35D8u;
            goto label_2d35d8;
        }
    }
    ctx->pc = 0x2D35C4u;
    // 0x2d35c4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d35c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d35c8: 0x8c2265a8  lw          $v0, 0x65A8($at)
    ctx->pc = 0x2d35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d35cc: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x2d35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x2d35d0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d35d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d35d4: 0xac2265a8  sw          $v0, 0x65A8($at)
    ctx->pc = 0x2d35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26024), GPR_U32(ctx, 2));
label_2d35d8:
    // 0x2d35d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d35d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d35dc: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D35DCu;
    SET_GPR_U32(ctx, 31, 0x2D35E4u);
    ctx->pc = 0x2D35E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D35DCu;
            // 0x2d35e0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D35E4u; }
        if (ctx->pc != 0x2D35E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D35E4u; }
        if (ctx->pc != 0x2D35E4u) { return; }
    }
    ctx->pc = 0x2D35E4u;
label_2d35e4:
    // 0x2d35e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D35E4u;
    {
        const bool branch_taken_0x2d35e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D35E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D35E4u;
            // 0x2d35e8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35e4) {
            ctx->pc = 0x2D3600u;
            goto label_2d3600;
        }
    }
    ctx->pc = 0x2D35ECu;
    // 0x2d35ec: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d35ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d35f0: 0x8c2265a8  lw          $v0, 0x65A8($at)
    ctx->pc = 0x2d35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d35f4: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x2d35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x2d35f8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d35f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d35fc: 0xac2265a8  sw          $v0, 0x65A8($at)
    ctx->pc = 0x2d35fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26024), GPR_U32(ctx, 2));
label_2d3600:
    // 0x2d3600: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d3600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3604: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3604u;
    SET_GPR_U32(ctx, 31, 0x2D360Cu);
    ctx->pc = 0x2D3608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3604u;
            // 0x2d3608: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D360Cu; }
        if (ctx->pc != 0x2D360Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D360Cu; }
        if (ctx->pc != 0x2D360Cu) { return; }
    }
    ctx->pc = 0x2D360Cu;
label_2d360c:
    // 0x2d360c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D360Cu;
    {
        const bool branch_taken_0x2d360c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d360c) {
            ctx->pc = 0x2D3628u;
            goto label_2d3628;
        }
    }
    ctx->pc = 0x2D3614u;
    // 0x2d3614: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3618: 0x8c2265a8  lw          $v0, 0x65A8($at)
    ctx->pc = 0x2d3618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d361c: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x2d361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2d3620: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3624: 0xac2265a8  sw          $v0, 0x65A8($at)
    ctx->pc = 0x2d3624u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26024), GPR_U32(ctx, 2));
label_2d3628:
    // 0x2d3628: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d362c: 0x8c2265a8  lw          $v0, 0x65A8($at)
    ctx->pc = 0x2d362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d3630: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3630u;
    {
        const bool branch_taken_0x2d3630 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D3634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3630u;
            // 0x2d3634: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3630) {
            ctx->pc = 0x2D3640u;
            goto label_2d3640;
        }
    }
    ctx->pc = 0x2D3638u;
    // 0x2d3638: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d363c: 0xac2065a8  sw          $zero, 0x65A8($at)
    ctx->pc = 0x2d363cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26024), GPR_U32(ctx, 0));
label_2d3640:
    // 0x2d3640: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d3640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d3644: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3644u;
    SET_GPR_U32(ctx, 31, 0x2D364Cu);
    ctx->pc = 0x2D3648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3644u;
            // 0x2d3648: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D364Cu; }
        if (ctx->pc != 0x2D364Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D364Cu; }
        if (ctx->pc != 0x2D364Cu) { return; }
    }
    ctx->pc = 0x2D364Cu;
label_2d364c:
    // 0x2d364c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D364Cu;
    {
        const bool branch_taken_0x2d364c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D364Cu;
            // 0x2d3650: 0x3c010035  lui         $at, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d364c) {
            ctx->pc = 0x2D367Cu;
            goto label_2d367c;
        }
    }
    ctx->pc = 0x2D3654u;
    // 0x2d3654: 0x8c2565a8  lw          $a1, 0x65A8($at)
    ctx->pc = 0x2d3654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d3658: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x2D3658u;
    SET_GPR_U32(ctx, 31, 0x2D3660u);
    ctx->pc = 0x2D365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3658u;
            // 0x2d365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3660u; }
        if (ctx->pc != 0x2D3660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3660u; }
        if (ctx->pc != 0x2D3660u) { return; }
    }
    ctx->pc = 0x2D3660u;
label_2d3660:
    // 0x2d3660: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3664: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d3664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d3668: 0x8c2565a8  lw          $a1, 0x65A8($at)
    ctx->pc = 0x2d3668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26024)));
    // 0x2d366c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d3670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3674: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x2D3674u;
    SET_GPR_U32(ctx, 31, 0x2D367Cu);
    ctx->pc = 0x2D3678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3674u;
            // 0x2d3678: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D367Cu; }
        if (ctx->pc != 0x2D367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D367Cu; }
        if (ctx->pc != 0x2D367Cu) { return; }
    }
    ctx->pc = 0x2D367Cu;
label_2d367c:
    // 0x2d367c: 0x8f839df0  lw          $v1, -0x6210($gp)
    ctx->pc = 0x2d367cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d3680: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d3680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3684: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D3684u;
    {
        const bool branch_taken_0x2d3684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D3688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3684u;
            // 0x2d3688: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3684) {
            ctx->pc = 0x2D3768u;
            goto label_2d3768;
        }
    }
    ctx->pc = 0x2D368Cu;
    // 0x2d368c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x2d368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2d3690: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3690u;
    SET_GPR_U32(ctx, 31, 0x2D3698u);
    ctx->pc = 0x2D3694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3690u;
            // 0x2d3694: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3698u; }
        if (ctx->pc != 0x2D3698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3698u; }
        if (ctx->pc != 0x2D3698u) { return; }
    }
    ctx->pc = 0x2D3698u;
label_2d3698:
    // 0x2d3698: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3698u;
    {
        const bool branch_taken_0x2d3698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D369Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3698u;
            // 0x2d369c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3698) {
            ctx->pc = 0x2D36B4u;
            goto label_2d36b4;
        }
    }
    ctx->pc = 0x2D36A0u;
    // 0x2d36a0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d36a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d36a4: 0x8c2265ac  lw          $v0, 0x65AC($at)
    ctx->pc = 0x2d36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26028)));
    // 0x2d36a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d36ac: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d36acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d36b0: 0xac2265ac  sw          $v0, 0x65AC($at)
    ctx->pc = 0x2d36b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26028), GPR_U32(ctx, 2));
label_2d36b4:
    // 0x2d36b4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d36b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d36b8: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D36B8u;
    SET_GPR_U32(ctx, 31, 0x2D36C0u);
    ctx->pc = 0x2D36BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D36B8u;
            // 0x2d36bc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D36C0u; }
        if (ctx->pc != 0x2D36C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D36C0u; }
        if (ctx->pc != 0x2D36C0u) { return; }
    }
    ctx->pc = 0x2D36C0u;
label_2d36c0:
    // 0x2d36c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D36C0u;
    {
        const bool branch_taken_0x2d36c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d36c0) {
            ctx->pc = 0x2D36DCu;
            goto label_2d36dc;
        }
    }
    ctx->pc = 0x2D36C8u;
    // 0x2d36c8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d36c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d36cc: 0x8c2265ac  lw          $v0, 0x65AC($at)
    ctx->pc = 0x2d36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26028)));
    // 0x2d36d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d36d4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d36d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d36d8: 0xac2265ac  sw          $v0, 0x65AC($at)
    ctx->pc = 0x2d36d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26028), GPR_U32(ctx, 2));
label_2d36dc:
    // 0x2d36dc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d36dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d36e0: 0x8c2265ac  lw          $v0, 0x65AC($at)
    ctx->pc = 0x2d36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26028)));
    // 0x2d36e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D36E4u;
    {
        const bool branch_taken_0x2d36e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D36E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D36E4u;
            // 0x2d36e8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36e4) {
            ctx->pc = 0x2D36F4u;
            goto label_2d36f4;
        }
    }
    ctx->pc = 0x2D36ECu;
    // 0x2d36ec: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d36ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d36f0: 0xac2065ac  sw          $zero, 0x65AC($at)
    ctx->pc = 0x2d36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26028), GPR_U32(ctx, 0));
label_2d36f4:
    // 0x2d36f4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d36f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d36f8: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D36F8u;
    SET_GPR_U32(ctx, 31, 0x2D3700u);
    ctx->pc = 0x2D36FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D36F8u;
            // 0x2d36fc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3700u; }
        if (ctx->pc != 0x2D3700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3700u; }
        if (ctx->pc != 0x2D3700u) { return; }
    }
    ctx->pc = 0x2D3700u;
label_2d3700:
    // 0x2d3700: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3700u;
    {
        const bool branch_taken_0x2d3700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3700u;
            // 0x2d3704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3700) {
            ctx->pc = 0x2D3724u;
            goto label_2d3724;
        }
    }
    ctx->pc = 0x2D3708u;
    // 0x2d3708: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d3708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d370c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d370cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d3710: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3710u;
    SET_GPR_U32(ctx, 31, 0x2D3718u);
    ctx->pc = 0x2D3714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3710u;
            // 0x2d3714: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3718u; }
        if (ctx->pc != 0x2D3718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3718u; }
        if (ctx->pc != 0x2D3718u) { return; }
    }
    ctx->pc = 0x2D3718u;
label_2d3718:
    // 0x2d3718: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D3718u;
    {
        const bool branch_taken_0x2d3718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3718) {
            ctx->pc = 0x2D3768u;
            goto label_2d3768;
        }
    }
    ctx->pc = 0x2D3720u;
    // 0x2d3720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3724:
    // 0x2d3724: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x2d3724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x2d3728: 0xac228078  sw          $v0, -0x7F88($at)
    ctx->pc = 0x2d3728u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934648), GPR_U32(ctx, 2));
    // 0x2d372c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d372cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3730: 0x8c2565ac  lw          $a1, 0x65AC($at)
    ctx->pc = 0x2d3730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26028)));
    // 0x2d3734: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x2D3734u;
    SET_GPR_U32(ctx, 31, 0x2D373Cu);
    ctx->pc = 0x2D3738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3734u;
            // 0x2d3738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D373Cu; }
        if (ctx->pc != 0x2D373Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D373Cu; }
        if (ctx->pc != 0x2D373Cu) { return; }
    }
    ctx->pc = 0x2D373Cu;
label_2d373c:
    // 0x2d373c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d373cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3740: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3740u;
    {
        const bool branch_taken_0x2d3740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3740u;
            // 0x2d3744: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3740) {
            ctx->pc = 0x2D3768u;
            goto label_2d3768;
        }
    }
    ctx->pc = 0x2D3748u;
    // 0x2d3748: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d3748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d374c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D374Cu;
    SET_GPR_U32(ctx, 31, 0x2D3754u);
    ctx->pc = 0x2D3750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D374Cu;
            // 0x2d3750: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3754u; }
        if (ctx->pc != 0x2D3754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3754u; }
        if (ctx->pc != 0x2D3754u) { return; }
    }
    ctx->pc = 0x2D3754u;
label_2d3754:
    // 0x2d3754: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d375c: 0x8c2565ac  lw          $a1, 0x65AC($at)
    ctx->pc = 0x2d375cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26028)));
    // 0x2d3760: 0xc0aa8cc  jal         func_2AA330
    ctx->pc = 0x2D3760u;
    SET_GPR_U32(ctx, 31, 0x2D3768u);
    ctx->pc = 0x2D3764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3760u;
            // 0x2d3764: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA330u;
    if (runtime->hasFunction(0x2AA330u)) {
        auto targetFn = runtime->lookupFunction(0x2AA330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3768u; }
        if (ctx->pc != 0x2D3768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dbgSetAllContintionFlag__9CEditDataFii_0x2aa330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3768u; }
        if (ctx->pc != 0x2D3768u) { return; }
    }
    ctx->pc = 0x2D3768u;
label_2d3768:
    // 0x2d3768: 0x8f839df0  lw          $v1, -0x6210($gp)
    ctx->pc = 0x2d3768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d376c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d3770: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D3770u;
    {
        const bool branch_taken_0x2d3770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D3774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3770u;
            // 0x2d3774: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3770) {
            ctx->pc = 0x2D37C0u;
            goto label_2d37c0;
        }
    }
    ctx->pc = 0x2D3778u;
    // 0x2d3778: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x2d3778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2d377c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D377Cu;
    SET_GPR_U32(ctx, 31, 0x2D3784u);
    ctx->pc = 0x2D3780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D377Cu;
            // 0x2d3780: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3784u; }
        if (ctx->pc != 0x2D3784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3784u; }
        if (ctx->pc != 0x2D3784u) { return; }
    }
    ctx->pc = 0x2D3784u;
label_2d3784:
    // 0x2d3784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3784u;
    {
        const bool branch_taken_0x2d3784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3784u;
            // 0x2d3788: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3784) {
            ctx->pc = 0x2D3798u;
            goto label_2d3798;
        }
    }
    ctx->pc = 0x2D378Cu;
    // 0x2d378c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3790: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3794: 0xac2265b0  sw          $v0, 0x65B0($at)
    ctx->pc = 0x2d3794u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26032), GPR_U32(ctx, 2));
label_2d3798:
    // 0x2d3798: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d3798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d379c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D379Cu;
    SET_GPR_U32(ctx, 31, 0x2D37A4u);
    ctx->pc = 0x2D37A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D379Cu;
            // 0x2d37a0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D37A4u; }
        if (ctx->pc != 0x2D37A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D37A4u; }
        if (ctx->pc != 0x2D37A4u) { return; }
    }
    ctx->pc = 0x2D37A4u;
label_2d37a4:
    // 0x2d37a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D37A4u;
    {
        const bool branch_taken_0x2d37a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d37a4) {
            ctx->pc = 0x2D37B4u;
            goto label_2d37b4;
        }
    }
    ctx->pc = 0x2D37ACu;
    // 0x2d37ac: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d37acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d37b0: 0xac2065b0  sw          $zero, 0x65B0($at)
    ctx->pc = 0x2d37b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26032), GPR_U32(ctx, 0));
label_2d37b4:
    // 0x2d37b4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d37b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d37b8: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x2D37B8u;
    SET_GPR_U32(ctx, 31, 0x2D37C0u);
    ctx->pc = 0x2D37BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D37B8u;
            // 0x2d37bc: 0x8c2465b0  lw          $a0, 0x65B0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26032)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (runtime->hasFunction(0x190BE0u)) {
        auto targetFn = runtime->lookupFunction(0x190BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D37C0u; }
        if (ctx->pc != 0x2D37C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayTimeCount__Fi_0x190be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D37C0u; }
        if (ctx->pc != 0x2D37C0u) { return; }
    }
    ctx->pc = 0x2D37C0u;
label_2d37c0:
    // 0x2d37c0: 0x8f839df0  lw          $v1, -0x6210($gp)
    ctx->pc = 0x2d37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d37c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d37c8: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D37C8u;
    {
        const bool branch_taken_0x2d37c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d37c8) {
            ctx->pc = 0x2D385Cu;
            goto label_2d385c;
        }
    }
    ctx->pc = 0x2D37D0u;
    // 0x2d37d0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d37d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d37d4: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x2d37d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2d37d8: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D37D8u;
    SET_GPR_U32(ctx, 31, 0x2D37E0u);
    ctx->pc = 0x2D37DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D37D8u;
            // 0x2d37dc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D37E0u; }
        if (ctx->pc != 0x2D37E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D37E0u; }
        if (ctx->pc != 0x2D37E0u) { return; }
    }
    ctx->pc = 0x2D37E0u;
label_2d37e0:
    // 0x2d37e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D37E0u;
    {
        const bool branch_taken_0x2d37e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D37E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D37E0u;
            // 0x2d37e4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d37e0) {
            ctx->pc = 0x2D37FCu;
            goto label_2d37fc;
        }
    }
    ctx->pc = 0x2D37E8u;
    // 0x2d37e8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d37e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d37ec: 0x8c2265b4  lw          $v0, 0x65B4($at)
    ctx->pc = 0x2d37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26036)));
    // 0x2d37f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d37f4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d37f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d37f8: 0xac2265b4  sw          $v0, 0x65B4($at)
    ctx->pc = 0x2d37f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26036), GPR_U32(ctx, 2));
label_2d37fc:
    // 0x2d37fc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2d37fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d3800: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3800u;
    SET_GPR_U32(ctx, 31, 0x2D3808u);
    ctx->pc = 0x2D3804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3800u;
            // 0x2d3804: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3808u; }
        if (ctx->pc != 0x2D3808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3808u; }
        if (ctx->pc != 0x2D3808u) { return; }
    }
    ctx->pc = 0x2D3808u;
label_2d3808:
    // 0x2d3808: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3808u;
    {
        const bool branch_taken_0x2d3808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D380Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3808u;
            // 0x2d380c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3808) {
            ctx->pc = 0x2D3824u;
            goto label_2d3824;
        }
    }
    ctx->pc = 0x2D3810u;
    // 0x2d3810: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3814: 0x8c2265b4  lw          $v0, 0x65B4($at)
    ctx->pc = 0x2d3814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26036)));
    // 0x2d3818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d3818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d381c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d381cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3820: 0xac2265b4  sw          $v0, 0x65B4($at)
    ctx->pc = 0x2d3820u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26036), GPR_U32(ctx, 2));
label_2d3824:
    // 0x2d3824: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d3824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d3828: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x2d3828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x2d382c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2d382cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d3830: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3830u;
    SET_GPR_U32(ctx, 31, 0x2D3838u);
    ctx->pc = 0x2D3834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3830u;
            // 0x2d3834: 0xac2065b4  sw          $zero, 0x65B4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 26036), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3838u; }
        if (ctx->pc != 0x2D3838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3838u; }
        if (ctx->pc != 0x2D3838u) { return; }
    }
    ctx->pc = 0x2D3838u;
label_2d3838:
    // 0x2d3838: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3838u;
    {
        const bool branch_taken_0x2d3838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3838) {
            ctx->pc = 0x2D385Cu;
            goto label_2d385c;
        }
    }
    ctx->pc = 0x2D3840u;
    // 0x2d3840: 0x8fa3087c  lw          $v1, 0x87C($sp)
    ctx->pc = 0x2d3840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2172)));
    // 0x2d3844: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2d3844u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3848: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3848u;
    {
        const bool branch_taken_0x2d3848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3848u;
            // 0x2d384c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3848) {
            ctx->pc = 0x2D3858u;
            goto label_2d3858;
        }
    }
    ctx->pc = 0x2D3850u;
    // 0x2d3850: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3850u;
    {
        const bool branch_taken_0x2d3850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3850u;
            // 0x2d3854: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3850) {
            ctx->pc = 0x2D385Cu;
            goto label_2d385c;
        }
    }
    ctx->pc = 0x2D3858u;
label_2d3858:
    // 0x2d3858: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2d3858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d385c:
    // 0x2d385c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d385cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d3860: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2d3860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2d3864: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3864u;
    SET_GPR_U32(ctx, 31, 0x2D386Cu);
    ctx->pc = 0x2D3868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3864u;
            // 0x2d3868: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D386Cu; }
        if (ctx->pc != 0x2D386Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D386Cu; }
        if (ctx->pc != 0x2D386Cu) { return; }
    }
    ctx->pc = 0x2D386Cu;
label_2d386c:
    // 0x2d386c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D386Cu;
    {
        const bool branch_taken_0x2d386c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D386Cu;
            // 0x2d3870: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d386c) {
            ctx->pc = 0x2D3880u;
            goto label_2d3880;
        }
    }
    ctx->pc = 0x2D3874u;
    // 0x2d3874: 0x8f829df0  lw          $v0, -0x6210($gp)
    ctx->pc = 0x2d3874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d3878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d3878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d387c: 0xaf829df0  sw          $v0, -0x6210($gp)
    ctx->pc = 0x2d387cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942192), GPR_U32(ctx, 2));
label_2d3880:
    // 0x2d3880: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2d3880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2d3884: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D3884u;
    SET_GPR_U32(ctx, 31, 0x2D388Cu);
    ctx->pc = 0x2D3888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3884u;
            // 0x2d3888: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D388Cu; }
        if (ctx->pc != 0x2D388Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D388Cu; }
        if (ctx->pc != 0x2D388Cu) { return; }
    }
    ctx->pc = 0x2D388Cu;
label_2d388c:
    // 0x2d388c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D388Cu;
    {
        const bool branch_taken_0x2d388c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d388c) {
            ctx->pc = 0x2D38A0u;
            goto label_2d38a0;
        }
    }
    ctx->pc = 0x2D3894u;
    // 0x2d3894: 0x8f829df0  lw          $v0, -0x6210($gp)
    ctx->pc = 0x2d3894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d3898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d3898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d389c: 0xaf829df0  sw          $v0, -0x6210($gp)
    ctx->pc = 0x2d389cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942192), GPR_U32(ctx, 2));
label_2d38a0:
    // 0x2d38a0: 0x8f829df0  lw          $v0, -0x6210($gp)
    ctx->pc = 0x2d38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d38a4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D38A4u;
    {
        const bool branch_taken_0x2d38a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D38A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D38A4u;
            // 0x2d38a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38a4) {
            ctx->pc = 0x2D38B0u;
            goto label_2d38b0;
        }
    }
    ctx->pc = 0x2D38ACu;
    // 0x2d38ac: 0xaf829df0  sw          $v0, -0x6210($gp)
    ctx->pc = 0x2d38acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942192), GPR_U32(ctx, 2));
label_2d38b0:
    // 0x2d38b0: 0x8f829df0  lw          $v0, -0x6210($gp)
    ctx->pc = 0x2d38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942192)));
    // 0x2d38b4: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2d38b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2d38b8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D38B8u;
    {
        const bool branch_taken_0x2d38b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d38b8) {
            ctx->pc = 0x2D38C4u;
            goto label_2d38c4;
        }
    }
    ctx->pc = 0x2D38C0u;
    // 0x2d38c0: 0xaf809df0  sw          $zero, -0x6210($gp)
    ctx->pc = 0x2d38c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942192), GPR_U32(ctx, 0));
label_2d38c4:
    // 0x2d38c4: 0xc064210  jal         func_190840
    ctx->pc = 0x2D38C4u;
    SET_GPR_U32(ctx, 31, 0x2D38CCu);
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D38CCu; }
        if (ctx->pc != 0x2D38CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugFont__Fv_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D38CCu; }
        if (ctx->pc != 0x2D38CCu) { return; }
    }
    ctx->pc = 0x2D38CCu;
label_2d38cc:
    // 0x2d38cc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2d38ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d38d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d38d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d38d4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2d38d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d38d8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2D38D8u;
    SET_GPR_U32(ctx, 31, 0x2D38E0u);
    ctx->pc = 0x2D38DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D38D8u;
            // 0x2d38dc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D38E0u; }
        if (ctx->pc != 0x2D38E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D38E0u; }
        if (ctx->pc != 0x2D38E0u) { return; }
    }
    ctx->pc = 0x2D38E0u;
label_2d38e0:
    // 0x2d38e0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2d38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2d38e4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2d38e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d38e8: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x2D38E8u;
    SET_GPR_U32(ctx, 31, 0x2D38F0u);
    ctx->pc = 0x2D38ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D38E8u;
            // 0x2d38ec: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D38F0u; }
        if (ctx->pc != 0x2D38F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D38F0u; }
        if (ctx->pc != 0x2D38F0u) { return; }
    }
    ctx->pc = 0x2D38F0u;
label_2d38f0:
    // 0x2d38f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D38F0u;
    {
        const bool branch_taken_0x2d38f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D38F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D38F0u;
            // 0x2d38f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d38f0) {
            ctx->pc = 0x2D38FCu;
            goto label_2d38fc;
        }
    }
    ctx->pc = 0x2D38F8u;
    // 0x2d38f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d38fc:
    // 0x2d38fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d38fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3900: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d3900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d3904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d3908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d390c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d390cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d3910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3914: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3914u;
            // 0x2d3918: 0x27bd0880  addiu       $sp, $sp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D391Cu;
}
