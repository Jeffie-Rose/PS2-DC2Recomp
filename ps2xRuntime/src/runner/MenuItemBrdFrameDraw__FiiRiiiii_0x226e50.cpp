#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemBrdFrameDraw__FiiRiiiii
// Address: 0x226e50 - 0x2278f4
void MenuItemBrdFrameDraw__FiiRiiiii_0x226e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemBrdFrameDraw__FiiRiiiii_0x226e50");
#endif

    switch (ctx->pc) {
        case 0x226ea4u: goto label_226ea4;
        case 0x226ec0u: goto label_226ec0;
        case 0x226ed8u: goto label_226ed8;
        case 0x226ef0u: goto label_226ef0;
        case 0x226f08u: goto label_226f08;
        case 0x226f20u: goto label_226f20;
        case 0x226f38u: goto label_226f38;
        case 0x226f50u: goto label_226f50;
        case 0x226f68u: goto label_226f68;
        case 0x226f80u: goto label_226f80;
        case 0x226f98u: goto label_226f98;
        case 0x226fb0u: goto label_226fb0;
        case 0x226fc8u: goto label_226fc8;
        case 0x226fe0u: goto label_226fe0;
        case 0x22707cu: goto label_22707c;
        case 0x227094u: goto label_227094;
        case 0x2270c0u: goto label_2270c0;
        case 0x2270e4u: goto label_2270e4;
        case 0x2270f8u: goto label_2270f8;
        case 0x22710cu: goto label_22710c;
        case 0x227120u: goto label_227120;
        case 0x227138u: goto label_227138;
        case 0x227140u: goto label_227140;
        case 0x227148u: goto label_227148;
        case 0x227154u: goto label_227154;
        case 0x227160u: goto label_227160;
        case 0x22716cu: goto label_22716c;
        case 0x227178u: goto label_227178;
        case 0x227190u: goto label_227190;
        case 0x2271ccu: goto label_2271cc;
        case 0x2271e8u: goto label_2271e8;
        case 0x227208u: goto label_227208;
        case 0x227238u: goto label_227238;
        case 0x22724cu: goto label_22724c;
        case 0x227254u: goto label_227254;
        case 0x227260u: goto label_227260;
        case 0x22727cu: goto label_22727c;
        case 0x2272acu: goto label_2272ac;
        case 0x2272ccu: goto label_2272cc;
        case 0x2272e4u: goto label_2272e4;
        case 0x2272f4u: goto label_2272f4;
        case 0x2272fcu: goto label_2272fc;
        case 0x227304u: goto label_227304;
        case 0x227318u: goto label_227318;
        case 0x227324u: goto label_227324;
        case 0x22733cu: goto label_22733c;
        case 0x227344u: goto label_227344;
        case 0x227358u: goto label_227358;
        case 0x227364u: goto label_227364;
        case 0x227380u: goto label_227380;
        case 0x2273b0u: goto label_2273b0;
        case 0x2273c0u: goto label_2273c0;
        case 0x2273d8u: goto label_2273d8;
        case 0x227408u: goto label_227408;
        case 0x22741cu: goto label_22741c;
        case 0x227428u: goto label_227428;
        case 0x227440u: goto label_227440;
        case 0x227470u: goto label_227470;
        case 0x227498u: goto label_227498;
        case 0x2274b0u: goto label_2274b0;
        case 0x2274dcu: goto label_2274dc;
        case 0x2274ecu: goto label_2274ec;
        case 0x227504u: goto label_227504;
        case 0x227534u: goto label_227534;
        case 0x227568u: goto label_227568;
        case 0x22757cu: goto label_22757c;
        case 0x227588u: goto label_227588;
        case 0x227594u: goto label_227594;
        case 0x2275acu: goto label_2275ac;
        case 0x2275e0u: goto label_2275e0;
        case 0x227600u: goto label_227600;
        case 0x227618u: goto label_227618;
        case 0x227640u: goto label_227640;
        case 0x227660u: goto label_227660;
        case 0x227714u: goto label_227714;
        case 0x227720u: goto label_227720;
        case 0x227728u: goto label_227728;
        case 0x22774cu: goto label_22774c;
        case 0x227760u: goto label_227760;
        case 0x227778u: goto label_227778;
        case 0x2277a0u: goto label_2277a0;
        case 0x2277c0u: goto label_2277c0;
        case 0x227800u: goto label_227800;
        case 0x227834u: goto label_227834;
        case 0x22786cu: goto label_22786c;
        case 0x227878u: goto label_227878;
        case 0x2278a0u: goto label_2278a0;
        case 0x2278b4u: goto label_2278b4;
        case 0x2278bcu: goto label_2278bc;
        default: break;
    }

    ctx->pc = 0x226e50u;

    // 0x226e50: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x226e54: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x226e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x226e58: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x226e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x226e5c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x226e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x226e60: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x226e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x226e64: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x226e64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x226e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x226e6c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x226e6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e70: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x226e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x226e74: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x226e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x226e78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x226e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x226e7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x226e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x226e80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226e84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x226e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e88: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x226e88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x226e8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x226e8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x226e90: 0xafa700cc  sw          $a3, 0xCC($sp)
    ctx->pc = 0x226e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 7));
    // 0x226e94: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x226e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
    // 0x226e98: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x226e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
    // 0x226e9c: 0xc08cb14  jal         func_232C50
    ctx->pc = 0x226E9Cu;
    SET_GPR_U32(ctx, 31, 0x226EA4u);
    ctx->pc = 0x226EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226E9Cu;
            // 0x226ea0: 0xafaa00c0  sw          $t2, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226EA4u; }
        if (ctx->pc != 0x226EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226EA4u; }
        if (ctx->pc != 0x226EA4u) { return; }
    }
    ctx->pc = 0x226EA4u;
label_226ea4:
    // 0x226ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x226ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ea8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x226ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x226eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x226eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eb8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226EB8u;
    SET_GPR_U32(ctx, 31, 0x226EC0u);
    ctx->pc = 0x226EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226EB8u;
            // 0x226ebc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226EC0u; }
        if (ctx->pc != 0x226EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226EC0u; }
        if (ctx->pc != 0x226EC0u) { return; }
    }
    ctx->pc = 0x226EC0u;
label_226ec0:
    // 0x226ec0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x226ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226ec4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x226ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x226ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ecc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ed0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226ED0u;
    SET_GPR_U32(ctx, 31, 0x226ED8u);
    ctx->pc = 0x226ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226ED0u;
            // 0x226ed4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226ED8u; }
        if (ctx->pc != 0x226ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226ED8u; }
        if (ctx->pc != 0x226ED8u) { return; }
    }
    ctx->pc = 0x226ED8u;
label_226ed8:
    // 0x226ed8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x226ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226edc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x226edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x226ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ee4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x226ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ee8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226EE8u;
    SET_GPR_U32(ctx, 31, 0x226EF0u);
    ctx->pc = 0x226EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226EE8u;
            // 0x226eec: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226EF0u; }
        if (ctx->pc != 0x226EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226EF0u; }
        if (ctx->pc != 0x226EF0u) { return; }
    }
    ctx->pc = 0x226EF0u;
label_226ef0:
    // 0x226ef0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x226ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226ef4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x226ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x226ef8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x226ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x226efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f00: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226F00u;
    SET_GPR_U32(ctx, 31, 0x226F08u);
    ctx->pc = 0x226F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226F00u;
            // 0x226f04: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F08u; }
        if (ctx->pc != 0x226F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F08u; }
        if (ctx->pc != 0x226F08u) { return; }
    }
    ctx->pc = 0x226F08u;
label_226f08:
    // 0x226f08: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x226f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226f0c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x226f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x226f10: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x226f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x226f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f18: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226F18u;
    SET_GPR_U32(ctx, 31, 0x226F20u);
    ctx->pc = 0x226F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226F18u;
            // 0x226f1c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F20u; }
        if (ctx->pc != 0x226F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F20u; }
        if (ctx->pc != 0x226F20u) { return; }
    }
    ctx->pc = 0x226F20u;
label_226f20:
    // 0x226f20: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x226f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226f24: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x226f28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x226f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f30: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226F30u;
    SET_GPR_U32(ctx, 31, 0x226F38u);
    ctx->pc = 0x226F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226F30u;
            // 0x226f34: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F38u; }
        if (ctx->pc != 0x226F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F38u; }
        if (ctx->pc != 0x226F38u) { return; }
    }
    ctx->pc = 0x226F38u;
label_226f38:
    // 0x226f38: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x226f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226f3c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x226f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x226f40: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x226f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x226f44: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x226f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f48: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226F48u;
    SET_GPR_U32(ctx, 31, 0x226F50u);
    ctx->pc = 0x226F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226F48u;
            // 0x226f4c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F50u; }
        if (ctx->pc != 0x226F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F50u; }
        if (ctx->pc != 0x226F50u) { return; }
    }
    ctx->pc = 0x226F50u;
label_226f50:
    // 0x226f50: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x226f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226f54: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x226f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x226f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f5c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x226f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x226f60: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226F60u;
    SET_GPR_U32(ctx, 31, 0x226F68u);
    ctx->pc = 0x226F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226F60u;
            // 0x226f64: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F68u; }
        if (ctx->pc != 0x226F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F68u; }
        if (ctx->pc != 0x226F68u) { return; }
    }
    ctx->pc = 0x226F68u;
label_226f68:
    // 0x226f68: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x226f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226f6c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x226f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x226f70: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x226f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x226f74: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x226f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x226f78: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226F78u;
    SET_GPR_U32(ctx, 31, 0x226F80u);
    ctx->pc = 0x226F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226F78u;
            // 0x226f7c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F80u; }
        if (ctx->pc != 0x226F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F80u; }
        if (ctx->pc != 0x226F80u) { return; }
    }
    ctx->pc = 0x226F80u;
label_226f80:
    // 0x226f80: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x226f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226f84: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x226f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x226f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f8c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x226f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x226f90: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226F90u;
    SET_GPR_U32(ctx, 31, 0x226F98u);
    ctx->pc = 0x226F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226F90u;
            // 0x226f94: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F98u; }
        if (ctx->pc != 0x226F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226F98u; }
        if (ctx->pc != 0x226F98u) { return; }
    }
    ctx->pc = 0x226F98u;
label_226f98:
    // 0x226f98: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x226f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226f9c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x226f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x226fa0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x226fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x226fa4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x226fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fa8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226FA8u;
    SET_GPR_U32(ctx, 31, 0x226FB0u);
    ctx->pc = 0x226FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226FA8u;
            // 0x226fac: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FB0u; }
        if (ctx->pc != 0x226FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FB0u; }
        if (ctx->pc != 0x226FB0u) { return; }
    }
    ctx->pc = 0x226FB0u;
label_226fb0:
    // 0x226fb0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x226fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226fb4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x226fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x226fb8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x226fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x226fbc: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x226fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x226fc0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226FC0u;
    SET_GPR_U32(ctx, 31, 0x226FC8u);
    ctx->pc = 0x226FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226FC0u;
            // 0x226fc4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FC8u; }
        if (ctx->pc != 0x226FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FC8u; }
        if (ctx->pc != 0x226FC8u) { return; }
    }
    ctx->pc = 0x226FC8u;
label_226fc8:
    // 0x226fc8: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x226fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x226fcc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x226fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x226fd0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x226fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x226fd4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x226fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fd8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x226FD8u;
    SET_GPR_U32(ctx, 31, 0x226FE0u);
    ctx->pc = 0x226FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226FD8u;
            // 0x226fdc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FE0u; }
        if (ctx->pc != 0x226FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226FE0u; }
        if (ctx->pc != 0x226FE0u) { return; }
    }
    ctx->pc = 0x226FE0u;
label_226fe0:
    // 0x226fe0: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x226fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x226fe4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x226fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x226fe8: 0x2463cf20  addiu       $v1, $v1, -0x30E0
    ctx->pc = 0x226fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954784));
    // 0x226fec: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x226fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x226ff0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x226ff0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226ff4: 0x27af0100  addiu       $t7, $sp, 0x100
    ctx->pc = 0x226ff4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x226ff8: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x226ff8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x226ffc: 0x27ae0110  addiu       $t6, $sp, 0x110
    ctx->pc = 0x226ffcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x227000: 0x78740020  lq          $s4, 0x20($v1)
    ctx->pc = 0x227000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x227004: 0x27ad0120  addiu       $t5, $sp, 0x120
    ctx->pc = 0x227004u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x227008: 0x27ac0130  addiu       $t4, $sp, 0x130
    ctx->pc = 0x227008u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x22700c: 0x27ab0140  addiu       $t3, $sp, 0x140
    ctx->pc = 0x22700cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x227010: 0x27aa0150  addiu       $t2, $sp, 0x150
    ctx->pc = 0x227010u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x227014: 0x27a90160  addiu       $t1, $sp, 0x160
    ctx->pc = 0x227014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x227018: 0x27a80170  addiu       $t0, $sp, 0x170
    ctx->pc = 0x227018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x22701c: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x22701cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x227020: 0x27b300e0  addiu       $s3, $sp, 0xE0
    ctx->pc = 0x227020u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x227024: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x227024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x227028: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x227028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22702c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x22702cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x227030: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x227030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x227034: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x227034u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x227038: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22703c: 0x7c540020  sq          $s4, 0x20($v0)
    ctx->pc = 0x22703cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 20));
    // 0x227040: 0x24a5a678  addiu       $a1, $a1, -0x5988
    ctx->pc = 0x227040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944376));
    // 0x227044: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x227044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227048: 0xafaf01a8  sw          $t7, 0x1A8($sp)
    ctx->pc = 0x227048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 15));
    // 0x22704c: 0xafae01ac  sw          $t6, 0x1AC($sp)
    ctx->pc = 0x22704cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 14));
    // 0x227050: 0xafad01b0  sw          $t5, 0x1B0($sp)
    ctx->pc = 0x227050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 13));
    // 0x227054: 0xafac01b4  sw          $t4, 0x1B4($sp)
    ctx->pc = 0x227054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 12));
    // 0x227058: 0xafab01b8  sw          $t3, 0x1B8($sp)
    ctx->pc = 0x227058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 11));
    // 0x22705c: 0xafaa01bc  sw          $t2, 0x1BC($sp)
    ctx->pc = 0x22705cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 10));
    // 0x227060: 0xafa901c0  sw          $t1, 0x1C0($sp)
    ctx->pc = 0x227060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 9));
    // 0x227064: 0xafa801c4  sw          $t0, 0x1C4($sp)
    ctx->pc = 0x227064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 8));
    // 0x227068: 0xafa701c8  sw          $a3, 0x1C8($sp)
    ctx->pc = 0x227068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 7));
    // 0x22706c: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x22706cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
    // 0x227070: 0xafb301a0  sw          $s3, 0x1A0($sp)
    ctx->pc = 0x227070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 19));
    // 0x227074: 0xc04b414  jal         func_12D050
    ctx->pc = 0x227074u;
    SET_GPR_U32(ctx, 31, 0x22707Cu);
    ctx->pc = 0x227078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227074u;
            // 0x227078: 0xafb201a4  sw          $s2, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22707Cu; }
        if (ctx->pc != 0x22707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22707Cu; }
        if (ctx->pc != 0x22707Cu) { return; }
    }
    ctx->pc = 0x22707Cu;
label_22707c:
    // 0x22707c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x22707cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227080: 0x13c0020e  beqz        $fp, . + 4 + (0x20E << 2)
    ctx->pc = 0x227080u;
    {
        const bool branch_taken_0x227080 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x227080) {
            ctx->pc = 0x2278BCu;
            goto label_2278bc;
        }
    }
    ctx->pc = 0x227088u;
    // 0x227088: 0x87c50000  lh          $a1, 0x0($fp)
    ctx->pc = 0x227088u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x22708c: 0xc08878c  jal         func_221E30
    ctx->pc = 0x22708Cu;
    SET_GPR_U32(ctx, 31, 0x227094u);
    ctx->pc = 0x227090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22708Cu;
            // 0x227090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227094u; }
        if (ctx->pc != 0x227094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227094u; }
        if (ctx->pc != 0x227094u) { return; }
    }
    ctx->pc = 0x227094u;
label_227094:
    // 0x227094: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x227094u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x227098: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x227098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22709c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x22709cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2270a0: 0x27b500d8  addiu       $s5, $sp, 0xD8
    ctx->pc = 0x2270a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x2270a4: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x2270a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2270a8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2270a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2270ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2270acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2270b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2270b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270b8: 0xc04d104  jal         func_134410
    ctx->pc = 0x2270B8u;
    SET_GPR_U32(ctx, 31, 0x2270C0u);
    ctx->pc = 0x2270BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2270B8u;
            // 0x2270bc: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270C0u; }
        if (ctx->pc != 0x2270C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270C0u; }
        if (ctx->pc != 0x2270C0u) { return; }
    }
    ctx->pc = 0x2270C0u;
label_2270c0:
    // 0x2270c0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2270c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2270c4: 0x3c024383  lui         $v0, 0x4383
    ctx->pc = 0x2270c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17283 << 16));
    // 0x2270c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2270c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2270cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2270ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2270d0: 0x0  nop
    ctx->pc = 0x2270d0u;
    // NOP
    // 0x2270d4: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2270d4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2270d8: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2270d8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2270dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2270DCu;
    SET_GPR_U32(ctx, 31, 0x2270E4u);
    ctx->pc = 0x2270E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2270DCu;
            // 0x2270e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270E4u; }
        if (ctx->pc != 0x2270E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270E4u; }
        if (ctx->pc != 0x2270E4u) { return; }
    }
    ctx->pc = 0x2270E4u;
label_2270e4:
    // 0x2270e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2270e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270e8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2270e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2270ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2270ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2270f0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2270F0u;
    SET_GPR_U32(ctx, 31, 0x2270F8u);
    ctx->pc = 0x2270F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2270F0u;
            // 0x2270f4: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270F8u; }
        if (ctx->pc != 0x2270F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270F8u; }
        if (ctx->pc != 0x2270F8u) { return; }
    }
    ctx->pc = 0x2270F8u;
label_2270f8:
    // 0x2270f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2270f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2270fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x227100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227104: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227104u;
    SET_GPR_U32(ctx, 31, 0x22710Cu);
    ctx->pc = 0x227108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227104u;
            // 0x227108: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22710Cu; }
        if (ctx->pc != 0x22710Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22710Cu; }
        if (ctx->pc != 0x22710Cu) { return; }
    }
    ctx->pc = 0x22710Cu;
label_22710c:
    // 0x22710c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22710cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227110: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x227110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x227114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227118: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227118u;
    SET_GPR_U32(ctx, 31, 0x227120u);
    ctx->pc = 0x22711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227118u;
            // 0x22711c: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227120u; }
        if (ctx->pc != 0x227120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227120u; }
        if (ctx->pc != 0x227120u) { return; }
    }
    ctx->pc = 0x227120u;
label_227120:
    // 0x227120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x227120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227124: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x227124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227128: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x227128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22712c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22712cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227130: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x227130u;
    SET_GPR_U32(ctx, 31, 0x227138u);
    ctx->pc = 0x227134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227130u;
            // 0x227134: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227138u; }
        if (ctx->pc != 0x227138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227138u; }
        if (ctx->pc != 0x227138u) { return; }
    }
    ctx->pc = 0x227138u;
label_227138:
    // 0x227138: 0xc088038  jal         func_2200E0
    ctx->pc = 0x227138u;
    SET_GPR_U32(ctx, 31, 0x227140u);
    ctx->pc = 0x22713Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227138u;
            // 0x22713c: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227140u; }
        if (ctx->pc != 0x227140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227140u; }
        if (ctx->pc != 0x227140u) { return; }
    }
    ctx->pc = 0x227140u;
label_227140:
    // 0x227140: 0xc088050  jal         func_220140
    ctx->pc = 0x227140u;
    SET_GPR_U32(ctx, 31, 0x227148u);
    ctx->pc = 0x227144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227140u;
            // 0x227144: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227148u; }
        if (ctx->pc != 0x227148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227148u; }
        if (ctx->pc != 0x227148u) { return; }
    }
    ctx->pc = 0x227148u;
label_227148:
    // 0x227148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22714c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x22714Cu;
    SET_GPR_U32(ctx, 31, 0x227154u);
    ctx->pc = 0x227150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22714Cu;
            // 0x227150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227154u; }
        if (ctx->pc != 0x227154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227154u; }
        if (ctx->pc != 0x227154u) { return; }
    }
    ctx->pc = 0x227154u;
label_227154:
    // 0x227154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227158: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x227158u;
    SET_GPR_U32(ctx, 31, 0x227160u);
    ctx->pc = 0x22715Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227158u;
            // 0x22715c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227160u; }
        if (ctx->pc != 0x227160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227160u; }
        if (ctx->pc != 0x227160u) { return; }
    }
    ctx->pc = 0x227160u;
label_227160:
    // 0x227160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227164: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x227164u;
    SET_GPR_U32(ctx, 31, 0x22716Cu);
    ctx->pc = 0x227168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227164u;
            // 0x227168: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22716Cu; }
        if (ctx->pc != 0x22716Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22716Cu; }
        if (ctx->pc != 0x22716Cu) { return; }
    }
    ctx->pc = 0x22716Cu;
label_22716c:
    // 0x22716c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227170: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x227170u;
    SET_GPR_U32(ctx, 31, 0x227178u);
    ctx->pc = 0x227174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227170u;
            // 0x227174: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227178u; }
        if (ctx->pc != 0x227178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227178u; }
        if (ctx->pc != 0x227178u) { return; }
    }
    ctx->pc = 0x227178u;
label_227178:
    // 0x227178: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x227178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x22717c: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x22717cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x227180: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x227180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227184: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x227184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x227188: 0xc04d320  jal         func_134C80
    ctx->pc = 0x227188u;
    SET_GPR_U32(ctx, 31, 0x227190u);
    ctx->pc = 0x22718Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227188u;
            // 0x22718c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227190u; }
        if (ctx->pc != 0x227190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227190u; }
        if (ctx->pc != 0x227190u) { return; }
    }
    ctx->pc = 0x227190u;
label_227190:
    // 0x227190: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x227190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x227194: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x227194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227198: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x227198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22719c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x22719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2271a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2271a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2271a4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2271a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2271a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2271a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2271ac: 0x0  nop
    ctx->pc = 0x2271acu;
    // NOP
    // 0x2271b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2271b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2271b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2271b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2271b8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2271b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2271bc: 0x0  nop
    ctx->pc = 0x2271bcu;
    // NOP
    // 0x2271c0: 0x0  nop
    ctx->pc = 0x2271c0u;
    // NOP
    // 0x2271c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2271C4u;
    SET_GPR_U32(ctx, 31, 0x2271CCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2271CCu; }
        if (ctx->pc != 0x2271CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2271CCu; }
        if (ctx->pc != 0x2271CCu) { return; }
    }
    ctx->pc = 0x2271CCu;
label_2271cc:
    // 0x2271cc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2271ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2271d0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2271d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2271d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2271d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2271dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271e0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2271E0u;
    SET_GPR_U32(ctx, 31, 0x2271E8u);
    ctx->pc = 0x2271E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2271E0u;
            // 0x2271e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2271E8u; }
        if (ctx->pc != 0x2271E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2271E8u; }
        if (ctx->pc != 0x2271E8u) { return; }
    }
    ctx->pc = 0x2271E8u;
label_2271e8:
    // 0x2271e8: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2271e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2271ec: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2271ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2271f0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2271f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2271f4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2271f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2271f8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2271f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2271fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2271fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x227200: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x227200u;
    SET_GPR_U32(ctx, 31, 0x227208u);
    ctx->pc = 0x227204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227200u;
            // 0x227204: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227208u; }
        if (ctx->pc != 0x227208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227208u; }
        if (ctx->pc != 0x227208u) { return; }
    }
    ctx->pc = 0x227208u;
label_227208:
    // 0x227208: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22720c: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x22720cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x227210: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x227210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x227214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22721c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x22721cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x227220: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x227220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227224: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x227224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227228: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x227228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x22722c: 0x8c4601a0  lw          $a2, 0x1A0($v0)
    ctx->pc = 0x22722cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x227230: 0xc08ca30  jal         func_2328C0
    ctx->pc = 0x227230u;
    SET_GPR_U32(ctx, 31, 0x227238u);
    ctx->pc = 0x227234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227230u;
            // 0x227234: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2328C0u;
    if (runtime->hasFunction(0x2328C0u)) {
        auto targetFn = runtime->lookupFunction(0x2328C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227238u; }
        if (ctx->pc != 0x227238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_f___FP11mgCDrawPrim9mgRect_f_9mgRect_i__0x2328c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227238u; }
        if (ctx->pc != 0x227238u) { return; }
    }
    ctx->pc = 0x227238u;
label_227238:
    // 0x227238: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x227238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x22723c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22723cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227244: 0x0  nop
    ctx->pc = 0x227244u;
    // NOP
    // 0x227248: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x227248u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_22724c:
    // 0x22724c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22724Cu;
    SET_GPR_U32(ctx, 31, 0x227254u);
    ctx->pc = 0x227250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22724Cu;
            // 0x227250: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227254u; }
        if (ctx->pc != 0x227254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227254u; }
        if (ctx->pc != 0x227254u) { return; }
    }
    ctx->pc = 0x227254u;
label_227254:
    // 0x227254: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x227254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227258: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227258u;
    SET_GPR_U32(ctx, 31, 0x227260u);
    ctx->pc = 0x22725Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227258u;
            // 0x22725c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227260u; }
        if (ctx->pc != 0x227260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227260u; }
        if (ctx->pc != 0x227260u) { return; }
    }
    ctx->pc = 0x227260u;
label_227260:
    // 0x227260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x227260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227264: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x227264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227268: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x227268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22726c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x22726cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x227270: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x227270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x227274: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x227274u;
    SET_GPR_U32(ctx, 31, 0x22727Cu);
    ctx->pc = 0x227278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227274u;
            // 0x227278: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22727Cu; }
        if (ctx->pc != 0x22727Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22727Cu; }
        if (ctx->pc != 0x22727Cu) { return; }
    }
    ctx->pc = 0x22727Cu;
label_22727c:
    // 0x22727c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22727cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227280: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x227280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x227284: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x227284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x227288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22728c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227290: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x227290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x227294: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x227294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x227298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22729c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x22729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2272a0: 0x8c4601a0  lw          $a2, 0x1A0($v0)
    ctx->pc = 0x2272a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x2272a4: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2272A4u;
    SET_GPR_U32(ctx, 31, 0x2272ACu);
    ctx->pc = 0x2272A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2272A4u;
            // 0x2272a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272ACu; }
        if (ctx->pc != 0x2272ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272ACu; }
        if (ctx->pc != 0x2272ACu) { return; }
    }
    ctx->pc = 0x2272ACu;
label_2272ac:
    // 0x2272ac: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2272acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2272b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2272b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2272b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2272b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2272b8: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2272b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2272bc: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2272BCu;
    {
        const bool branch_taken_0x2272bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2272C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2272BCu;
            // 0x2272c0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272bc) {
            ctx->pc = 0x22724Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22724c;
        }
    }
    ctx->pc = 0x2272C4u;
    // 0x2272c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2272C4u;
    SET_GPR_U32(ctx, 31, 0x2272CCu);
    ctx->pc = 0x2272C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2272C4u;
            // 0x2272c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272CCu; }
        if (ctx->pc != 0x2272CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272CCu; }
        if (ctx->pc != 0x2272CCu) { return; }
    }
    ctx->pc = 0x2272CCu;
label_2272cc:
    // 0x2272cc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2272ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2272d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2272d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2272d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272d8: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2272d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2272dc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2272DCu;
    SET_GPR_U32(ctx, 31, 0x2272E4u);
    ctx->pc = 0x2272E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2272DCu;
            // 0x2272e0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272E4u; }
        if (ctx->pc != 0x2272E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272E4u; }
        if (ctx->pc != 0x2272E4u) { return; }
    }
    ctx->pc = 0x2272E4u;
label_2272e4:
    // 0x2272e4: 0x8fa601cc  lw          $a2, 0x1CC($sp)
    ctx->pc = 0x2272e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x2272e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2272e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272ec: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2272ECu;
    SET_GPR_U32(ctx, 31, 0x2272F4u);
    ctx->pc = 0x2272F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2272ECu;
            // 0x2272f0: 0x27a50230  addiu       $a1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272F4u; }
        if (ctx->pc != 0x2272F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272F4u; }
        if (ctx->pc != 0x2272F4u) { return; }
    }
    ctx->pc = 0x2272F4u;
label_2272f4:
    // 0x2272f4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2272F4u;
    SET_GPR_U32(ctx, 31, 0x2272FCu);
    ctx->pc = 0x2272F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2272F4u;
            // 0x2272f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272FCu; }
        if (ctx->pc != 0x2272FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2272FCu; }
        if (ctx->pc != 0x2272FCu) { return; }
    }
    ctx->pc = 0x2272FCu;
label_2272fc:
    // 0x2272fc: 0xc088070  jal         func_2201C0
    ctx->pc = 0x2272FCu;
    SET_GPR_U32(ctx, 31, 0x227304u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227304u; }
        if (ctx->pc != 0x227304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227304u; }
        if (ctx->pc != 0x227304u) { return; }
    }
    ctx->pc = 0x227304u;
label_227304:
    // 0x227304: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x227304u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22730c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x227310: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x227310u;
    SET_GPR_U32(ctx, 31, 0x227318u);
    ctx->pc = 0x227314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227310u;
            // 0x227314: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227318u; }
        if (ctx->pc != 0x227318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227318u; }
        if (ctx->pc != 0x227318u) { return; }
    }
    ctx->pc = 0x227318u;
label_227318:
    // 0x227318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22731c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x22731Cu;
    SET_GPR_U32(ctx, 31, 0x227324u);
    ctx->pc = 0x227320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22731Cu;
            // 0x227320: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227324u; }
        if (ctx->pc != 0x227324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227324u; }
        if (ctx->pc != 0x227324u) { return; }
    }
    ctx->pc = 0x227324u;
label_227324:
    // 0x227324: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x227324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x227328: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x227328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x22732c: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x22732cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227330: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x227330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x227334: 0xc04d320  jal         func_134C80
    ctx->pc = 0x227334u;
    SET_GPR_U32(ctx, 31, 0x22733Cu);
    ctx->pc = 0x227338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227334u;
            // 0x227338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22733Cu; }
        if (ctx->pc != 0x22733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22733Cu; }
        if (ctx->pc != 0x22733Cu) { return; }
    }
    ctx->pc = 0x22733Cu;
label_22733c:
    // 0x22733c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22733cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227340: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x227340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227344:
    // 0x227344: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x227344u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227348: 0x0  nop
    ctx->pc = 0x227348u;
    // NOP
    // 0x22734c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x22734cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x227350: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227350u;
    SET_GPR_U32(ctx, 31, 0x227358u);
    ctx->pc = 0x227354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227350u;
            // 0x227354: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227358u; }
        if (ctx->pc != 0x227358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227358u; }
        if (ctx->pc != 0x227358u) { return; }
    }
    ctx->pc = 0x227358u;
label_227358:
    // 0x227358: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x227358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22735c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22735Cu;
    SET_GPR_U32(ctx, 31, 0x227364u);
    ctx->pc = 0x227360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22735Cu;
            // 0x227360: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227364u; }
        if (ctx->pc != 0x227364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227364u; }
        if (ctx->pc != 0x227364u) { return; }
    }
    ctx->pc = 0x227364u;
label_227364:
    // 0x227364: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x227364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227368: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x227368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22736c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22736cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227370: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x227370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x227374: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x227374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227378: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x227378u;
    SET_GPR_U32(ctx, 31, 0x227380u);
    ctx->pc = 0x22737Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227378u;
            // 0x22737c: 0x24080028  addiu       $t0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227380u; }
        if (ctx->pc != 0x227380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227380u; }
        if (ctx->pc != 0x227380u) { return; }
    }
    ctx->pc = 0x227380u;
label_227380:
    // 0x227380: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227384: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x227384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x227388: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x227388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x22738c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22738cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227394: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x227394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x227398: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x227398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22739c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22739cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2273a0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2273a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2273a4: 0x8c4601a0  lw          $a2, 0x1A0($v0)
    ctx->pc = 0x2273a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x2273a8: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2273A8u;
    SET_GPR_U32(ctx, 31, 0x2273B0u);
    ctx->pc = 0x2273ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2273A8u;
            // 0x2273ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273B0u; }
        if (ctx->pc != 0x2273B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273B0u; }
        if (ctx->pc != 0x2273B0u) { return; }
    }
    ctx->pc = 0x2273B0u;
label_2273b0:
    // 0x2273b0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2273b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2273b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2273b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2273b8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2273B8u;
    SET_GPR_U32(ctx, 31, 0x2273C0u);
    ctx->pc = 0x2273BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2273B8u;
            // 0x2273bc: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273C0u; }
        if (ctx->pc != 0x2273C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273C0u; }
        if (ctx->pc != 0x2273C0u) { return; }
    }
    ctx->pc = 0x2273C0u;
label_2273c0:
    // 0x2273c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2273c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273c4: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x2273c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2273c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2273c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273cc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2273ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2273d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2273D0u;
    SET_GPR_U32(ctx, 31, 0x2273D8u);
    ctx->pc = 0x2273D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2273D0u;
            // 0x2273d4: 0x24080028  addiu       $t0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273D8u; }
        if (ctx->pc != 0x2273D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2273D8u; }
        if (ctx->pc != 0x2273D8u) { return; }
    }
    ctx->pc = 0x2273D8u;
label_2273d8:
    // 0x2273d8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2273d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2273dc: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x2273dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2273e0: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x2273e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x2273e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2273e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2273e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2273ec: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x2273ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x2273f0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2273f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2273f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2273f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2273f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2273f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2273fc: 0x8c4601a0  lw          $a2, 0x1A0($v0)
    ctx->pc = 0x2273fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x227400: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x227400u;
    SET_GPR_U32(ctx, 31, 0x227408u);
    ctx->pc = 0x227404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227400u;
            // 0x227404: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227408u; }
        if (ctx->pc != 0x227408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227408u; }
        if (ctx->pc != 0x227408u) { return; }
    }
    ctx->pc = 0x227408u;
label_227408:
    // 0x227408: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x227408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x22740c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22740cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227414: 0x0  nop
    ctx->pc = 0x227414u;
    // NOP
    // 0x227418: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x227418u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_22741c:
    // 0x22741c: 0x0  nop
    ctx->pc = 0x22741cu;
    // NOP
    // 0x227420: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227420u;
    SET_GPR_U32(ctx, 31, 0x227428u);
    ctx->pc = 0x227424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227420u;
            // 0x227424: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227428u; }
        if (ctx->pc != 0x227428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227428u; }
        if (ctx->pc != 0x227428u) { return; }
    }
    ctx->pc = 0x227428u;
label_227428:
    // 0x227428: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x227428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22742c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22742cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227430: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x227430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x227434: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x227434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227438: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x227438u;
    SET_GPR_U32(ctx, 31, 0x227440u);
    ctx->pc = 0x22743Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227438u;
            // 0x22743c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227440u; }
        if (ctx->pc != 0x227440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227440u; }
        if (ctx->pc != 0x227440u) { return; }
    }
    ctx->pc = 0x227440u;
label_227440:
    // 0x227440: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227444: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x227444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x227448: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x227448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x22744c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22744cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227454: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x227454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x227458: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x227458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22745c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227460: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x227460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x227464: 0x8c4601a0  lw          $a2, 0x1A0($v0)
    ctx->pc = 0x227464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x227468: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x227468u;
    SET_GPR_U32(ctx, 31, 0x227470u);
    ctx->pc = 0x22746Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227468u;
            // 0x22746c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227470u; }
        if (ctx->pc != 0x227470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227470u; }
        if (ctx->pc != 0x227470u) { return; }
    }
    ctx->pc = 0x227470u;
label_227470:
    // 0x227470: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x227470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x227474: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x227474u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x227478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22747c: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x22747cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x227480: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x227480u;
    {
        const bool branch_taken_0x227480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227480u;
            // 0x227484: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227480) {
            ctx->pc = 0x22741Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22741c;
        }
    }
    ctx->pc = 0x227488u;
    // 0x227488: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x227488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x22748c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22748cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227490: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227490u;
    SET_GPR_U32(ctx, 31, 0x227498u);
    ctx->pc = 0x227494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227490u;
            // 0x227494: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227498u; }
        if (ctx->pc != 0x227498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227498u; }
        if (ctx->pc != 0x227498u) { return; }
    }
    ctx->pc = 0x227498u;
label_227498:
    // 0x227498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x227498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22749c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x22749cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2274a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2274a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274a4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2274a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2274a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2274A8u;
    SET_GPR_U32(ctx, 31, 0x2274B0u);
    ctx->pc = 0x2274ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2274A8u;
            // 0x2274ac: 0x24080028  addiu       $t0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2274B0u; }
        if (ctx->pc != 0x2274B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2274B0u; }
        if (ctx->pc != 0x2274B0u) { return; }
    }
    ctx->pc = 0x2274B0u;
label_2274b0:
    // 0x2274b0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2274b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2274b4: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x2274b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2274b8: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x2274b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x2274bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2274bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2274c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2274c4: 0x8442fffe  lh          $v0, -0x2($v0)
    ctx->pc = 0x2274c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x2274c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2274c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2274cc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2274ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2274d0: 0x8c4601a0  lw          $a2, 0x1A0($v0)
    ctx->pc = 0x2274d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x2274d4: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2274D4u;
    SET_GPR_U32(ctx, 31, 0x2274DCu);
    ctx->pc = 0x2274D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2274D4u;
            // 0x2274d8: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2274DCu; }
        if (ctx->pc != 0x2274DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2274DCu; }
        if (ctx->pc != 0x2274DCu) { return; }
    }
    ctx->pc = 0x2274DCu;
label_2274dc:
    // 0x2274dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2274dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2274e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2274e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2274e4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2274E4u;
    SET_GPR_U32(ctx, 31, 0x2274ECu);
    ctx->pc = 0x2274E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2274E4u;
            // 0x2274e8: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2274ECu; }
        if (ctx->pc != 0x2274ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2274ECu; }
        if (ctx->pc != 0x2274ECu) { return; }
    }
    ctx->pc = 0x2274ECu;
label_2274ec:
    // 0x2274ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2274ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2274f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274f4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2274f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2274f8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2274f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2274fc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2274FCu;
    SET_GPR_U32(ctx, 31, 0x227504u);
    ctx->pc = 0x227500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2274FCu;
            // 0x227500: 0x24080028  addiu       $t0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227504u; }
        if (ctx->pc != 0x227504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227504u; }
        if (ctx->pc != 0x227504u) { return; }
    }
    ctx->pc = 0x227504u;
label_227504:
    // 0x227504: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227508: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x227508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x22750c: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x22750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x227510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227518: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x227518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x22751c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x22751cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x227520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227524: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x227524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x227528: 0x8c4601a0  lw          $a2, 0x1A0($v0)
    ctx->pc = 0x227528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x22752c: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x22752Cu;
    SET_GPR_U32(ctx, 31, 0x227534u);
    ctx->pc = 0x227530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22752Cu;
            // 0x227530: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227534u; }
        if (ctx->pc != 0x227534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227534u; }
        if (ctx->pc != 0x227534u) { return; }
    }
    ctx->pc = 0x227534u;
label_227534:
    // 0x227534: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x227534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x227538: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x227538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22753c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22753cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227540: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x227540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x227544: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x227544u;
    {
        const bool branch_taken_0x227544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227544u;
            // 0x227548: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227544) {
            ctx->pc = 0x227344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227344;
        }
    }
    ctx->pc = 0x22754Cu;
    // 0x22754c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x22754cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227550: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x227550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227554: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x227554u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x227558: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x227558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22755c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x22755cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x227560: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x227560u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227564: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x227564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227568:
    // 0x227568: 0x26e20028  addiu       $v0, $s7, 0x28
    ctx->pc = 0x227568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
    // 0x22756c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22756cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227574: 0x0  nop
    ctx->pc = 0x227574u;
    // NOP
    // 0x227578: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x227578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_22757c:
    // 0x22757c: 0x0  nop
    ctx->pc = 0x22757cu;
    // NOP
    // 0x227580: 0xc0a248c  jal         func_289230
    ctx->pc = 0x227580u;
    SET_GPR_U32(ctx, 31, 0x227588u);
    ctx->pc = 0x227584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227580u;
            // 0x227584: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227588u; }
        if (ctx->pc != 0x227588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227588u; }
        if (ctx->pc != 0x227588u) { return; }
    }
    ctx->pc = 0x227588u;
label_227588:
    // 0x227588: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x227588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22758c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22758Cu;
    SET_GPR_U32(ctx, 31, 0x227594u);
    ctx->pc = 0x227590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22758Cu;
            // 0x227590: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227594u; }
        if (ctx->pc != 0x227594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227594u; }
        if (ctx->pc != 0x227594u) { return; }
    }
    ctx->pc = 0x227594u;
label_227594:
    // 0x227594: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x227594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227598: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x227598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x22759c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22759cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275a0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2275a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2275a4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2275A4u;
    SET_GPR_U32(ctx, 31, 0x2275ACu);
    ctx->pc = 0x2275A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2275A4u;
            // 0x2275a8: 0x24080028  addiu       $t0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2275ACu; }
        if (ctx->pc != 0x2275ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2275ACu; }
        if (ctx->pc != 0x2275ACu) { return; }
    }
    ctx->pc = 0x2275ACu;
label_2275ac:
    // 0x2275ac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2275acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2275b0: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x2275b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2275b4: 0x24420630  addiu       $v0, $v0, 0x630
    ctx->pc = 0x2275b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x2275b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2275b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2275bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2275c0: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x2275c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2275c4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2275c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2275c8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x2275c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2275cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2275ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2275d0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2275d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2275d4: 0x8c4601a0  lw          $a2, 0x1A0($v0)
    ctx->pc = 0x2275d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x2275d8: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x2275D8u;
    SET_GPR_U32(ctx, 31, 0x2275E0u);
    ctx->pc = 0x2275DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2275D8u;
            // 0x2275dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2275E0u; }
        if (ctx->pc != 0x2275E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2275E0u; }
        if (ctx->pc != 0x2275E0u) { return; }
    }
    ctx->pc = 0x2275E0u;
label_2275e0:
    // 0x2275e0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2275e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2275e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2275e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2275e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2275e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2275ec: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x2275ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2275f0: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2275F0u;
    {
        const bool branch_taken_0x2275f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2275F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2275F0u;
            // 0x2275f4: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275f0) {
            ctx->pc = 0x22757Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22757c;
        }
    }
    ctx->pc = 0x2275F8u;
    // 0x2275f8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2275F8u;
    SET_GPR_U32(ctx, 31, 0x227600u);
    ctx->pc = 0x2275FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2275F8u;
            // 0x2275fc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227600u; }
        if (ctx->pc != 0x227600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227600u; }
        if (ctx->pc != 0x227600u) { return; }
    }
    ctx->pc = 0x227600u;
label_227600:
    // 0x227600: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x227600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227604: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x227604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227608: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x227608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x22760c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x22760cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227610: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x227610u;
    SET_GPR_U32(ctx, 31, 0x227618u);
    ctx->pc = 0x227614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227610u;
            // 0x227614: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227618u; }
        if (ctx->pc != 0x227618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227618u; }
        if (ctx->pc != 0x227618u) { return; }
    }
    ctx->pc = 0x227618u;
label_227618:
    // 0x227618: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x227618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22761c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227620: 0x24420630  addiu       $v0, $v0, 0x630
    ctx->pc = 0x227620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x227624: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x227624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x227628: 0x8442fffe  lh          $v0, -0x2($v0)
    ctx->pc = 0x227628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x22762c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22762cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227630: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x227630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x227634: 0x8c4601a0  lw          $a2, 0x1A0($v0)
    ctx->pc = 0x227634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x227638: 0xc08ca5c  jal         func_232970
    ctx->pc = 0x227638u;
    SET_GPR_U32(ctx, 31, 0x227640u);
    ctx->pc = 0x22763Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227638u;
            // 0x22763c: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232970u;
    if (runtime->hasFunction(0x232970u)) {
        auto targetFn = runtime->lookupFunction(0x232970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227640u; }
        if (ctx->pc != 0x227640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_i___FP11mgCDrawPrim9mgRect_i_9mgRect_i__0x232970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227640u; }
        if (ctx->pc != 0x227640u) { return; }
    }
    ctx->pc = 0x227640u;
label_227640:
    // 0x227640: 0x3c02436e  lui         $v0, 0x436E
    ctx->pc = 0x227640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17262 << 16));
    // 0x227644: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x227644u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x227648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22764c: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x22764cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x227650: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x227650u;
    {
        const bool branch_taken_0x227650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227650u;
            // 0x227654: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227650) {
            ctx->pc = 0x227568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227568;
        }
    }
    ctx->pc = 0x227658u;
    // 0x227658: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x227658u;
    SET_GPR_U32(ctx, 31, 0x227660u);
    ctx->pc = 0x22765Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227658u;
            // 0x22765c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227660u; }
        if (ctx->pc != 0x227660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227660u; }
        if (ctx->pc != 0x227660u) { return; }
    }
    ctx->pc = 0x227660u;
label_227660:
    // 0x227660: 0x26c20104  addiu       $v0, $s6, 0x104
    ctx->pc = 0x227660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 260));
    // 0x227664: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x227664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x227668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22766c: 0x24630648  addiu       $v1, $v1, 0x648
    ctx->pc = 0x22766cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1608));
    // 0x227670: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x227670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x227674: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x227674u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227678: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x227678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x22767c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22767cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x227680: 0x27a802c0  addiu       $t0, $sp, 0x2C0
    ctx->pc = 0x227680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x227684: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x227684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x227688: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x227688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
    // 0x22768c: 0x27a901e0  addiu       $t1, $sp, 0x1E0
    ctx->pc = 0x22768cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x227690: 0x24c60688  addiu       $a2, $a2, 0x688
    ctx->pc = 0x227690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1672));
    // 0x227694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227698: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x227698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22769c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x22769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2276a0: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x2276a0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x2276a4: 0x27a302d0  addiu       $v1, $sp, 0x2D0
    ctx->pc = 0x2276a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x2276a8: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x2276a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2276ac: 0x8c28ceec  lw          $t0, -0x3114($at)
    ctx->pc = 0x2276acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954732)));
    // 0x2276b0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2276b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2276b4: 0xafa802c0  sw          $t0, 0x2C0($sp)
    ctx->pc = 0x2276b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 8));
    // 0x2276b8: 0x8c27cf0c  lw          $a3, -0x30F4($at)
    ctx->pc = 0x2276b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954764)));
    // 0x2276bc: 0xafa702c8  sw          $a3, 0x2C8($sp)
    ctx->pc = 0x2276bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 7));
    // 0x2276c0: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2276c0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2276c4: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x2276c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2276c8: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x2276c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2276cc: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x2276ccu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x2276d0: 0x7d270010  sq          $a3, 0x10($t1)
    ctx->pc = 0x2276d0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 7));
    // 0x2276d4: 0xfd220020  sd          $v0, 0x20($t1)
    ctx->pc = 0x2276d4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 32), GPR_U64(ctx, 2));
    // 0x2276d8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2276d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2276dc: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x2276dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
    // 0x2276e0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2276e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2276e4: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x2276e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x2276e8: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x2276e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2276ec: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x2276ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
    // 0x2276f0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2276f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2276f4: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x2276f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x2276f8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2276f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2276fc: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x2276fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x227700: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x227700u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x227704: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x227704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227708: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x227708u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x22770c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22770Cu;
    SET_GPR_U32(ctx, 31, 0x227714u);
    ctx->pc = 0x227710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22770Cu;
            // 0x227710: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227714u; }
        if (ctx->pc != 0x227714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227714u; }
        if (ctx->pc != 0x227714u) { return; }
    }
    ctx->pc = 0x227714u;
label_227714:
    // 0x227714: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x227714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227718: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x227718u;
    SET_GPR_U32(ctx, 31, 0x227720u);
    ctx->pc = 0x22771Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227718u;
            // 0x22771c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227720u; }
        if (ctx->pc != 0x227720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227720u; }
        if (ctx->pc != 0x227720u) { return; }
    }
    ctx->pc = 0x227720u;
label_227720:
    // 0x227720: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x227720u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227724: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x227724u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227728:
    // 0x227728: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x227728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x22772c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x22772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x227730: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x227730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x227734: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x227734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x227738: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x227738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22773c: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x22773cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x227740: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x227740u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x227744: 0xc04d320  jal         func_134C80
    ctx->pc = 0x227744u;
    SET_GPR_U32(ctx, 31, 0x22774Cu);
    ctx->pc = 0x227748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227744u;
            // 0x227748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22774Cu; }
        if (ctx->pc != 0x22774Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22774Cu; }
        if (ctx->pc != 0x22774Cu) { return; }
    }
    ctx->pc = 0x22774Cu;
label_22774c:
    // 0x22774c: 0x26e20009  addiu       $v0, $s7, 0x9
    ctx->pc = 0x22774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 9));
    // 0x227750: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x227750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x227754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227758: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x227758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22775c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x22775cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_227760:
    // 0x227760: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x227760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x227764: 0x8c5102d0  lw          $s1, 0x2D0($v0)
    ctx->pc = 0x227764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x227768: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x227768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22776c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x22776cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x227770: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x227770u;
    SET_GPR_U32(ctx, 31, 0x227778u);
    ctx->pc = 0x227774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227770u;
            // 0x227774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227778u; }
        if (ctx->pc != 0x227778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227778u; }
        if (ctx->pc != 0x227778u) { return; }
    }
    ctx->pc = 0x227778u;
label_227778:
    // 0x227778: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x227778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x22777c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22777cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227780: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x227780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x227784: 0x245301e0  addiu       $s3, $v0, 0x1E0
    ctx->pc = 0x227784u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x227788: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x227788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22778c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x22778cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x227790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x227790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x227794: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x227794u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x227798: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x227798u;
    SET_GPR_U32(ctx, 31, 0x2277A0u);
    ctx->pc = 0x22779Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227798u;
            // 0x22779c: 0x4600ab40  add.s       $f13, $f21, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2277A0u; }
        if (ctx->pc != 0x2277A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2277A0u; }
        if (ctx->pc != 0x2277A0u) { return; }
    }
    ctx->pc = 0x2277A0u;
label_2277a0:
    // 0x2277a0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2277a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2277a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2277a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277a8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2277a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2277ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2277acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2277b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2277b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2277b4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2277b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2277b8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2277B8u;
    SET_GPR_U32(ctx, 31, 0x2277C0u);
    ctx->pc = 0x2277BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2277B8u;
            // 0x2277bc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2277C0u; }
        if (ctx->pc != 0x2277C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2277C0u; }
        if (ctx->pc != 0x2277C0u) { return; }
    }
    ctx->pc = 0x2277C0u;
label_2277c0:
    // 0x2277c0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2277c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2277c4: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2277c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2277c8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2277c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2277cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2277ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277d0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2277d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2277d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2277d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2277d8: 0x8c5102c0  lw          $s1, 0x2C0($v0)
    ctx->pc = 0x2277d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x2277dc: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x2277dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2277e0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2277e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2277e4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2277e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2277e8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2277e8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2277ec: 0x0  nop
    ctx->pc = 0x2277ecu;
    // NOP
    // 0x2277f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2277f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2277f4: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2277f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2277f8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2277F8u;
    SET_GPR_U32(ctx, 31, 0x227800u);
    ctx->pc = 0x2277FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2277F8u;
            // 0x2277fc: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227800u; }
        if (ctx->pc != 0x227800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227800u; }
        if (ctx->pc != 0x227800u) { return; }
    }
    ctx->pc = 0x227800u;
label_227800:
    // 0x227800: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x227800u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227804: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x227804u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x227808: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x227808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22780c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x22780cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x227810: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x227810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x227814: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x227814u;
    {
        const bool branch_taken_0x227814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227814u;
            // 0x227818: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227814) {
            ctx->pc = 0x227760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227760;
        }
    }
    ctx->pc = 0x22781Cu;
    // 0x22781c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x22781cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x227820: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x227820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x227824: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x227824u;
    {
        const bool branch_taken_0x227824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227824u;
            // 0x227828: 0x26b50005  addiu       $s5, $s5, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227824) {
            ctx->pc = 0x227728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227728;
        }
    }
    ctx->pc = 0x22782Cu;
    // 0x22782c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22782Cu;
    SET_GPR_U32(ctx, 31, 0x227834u);
    ctx->pc = 0x227830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22782Cu;
            // 0x227830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227834u; }
        if (ctx->pc != 0x227834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227834u; }
        if (ctx->pc != 0x227834u) { return; }
    }
    ctx->pc = 0x227834u;
label_227834:
    // 0x227834: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x227834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x227838: 0x26e30009  addiu       $v1, $s7, 0x9
    ctx->pc = 0x227838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 9));
    // 0x22783c: 0xc7809418  lwc1        $f0, -0x6BE8($gp)
    ctx->pc = 0x22783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227840: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227844: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x227844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x227848: 0x0  nop
    ctx->pc = 0x227848u;
    // NOP
    // 0x22784c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22784cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x227850: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x227850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227854: 0x0  nop
    ctx->pc = 0x227854u;
    // NOP
    // 0x227858: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x227858u;
    {
        const bool branch_taken_0x227858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22785Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227858u;
            // 0x22785c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227858) {
            ctx->pc = 0x227864u;
            goto label_227864;
        }
    }
    ctx->pc = 0x227860u;
    // 0x227860: 0xe7819418  swc1        $f1, -0x6BE8($gp)
    ctx->pc = 0x227860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939672), bits); }
label_227864:
    // 0x227864: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x227864u;
    SET_GPR_U32(ctx, 31, 0x22786Cu);
    ctx->pc = 0x227868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227864u;
            // 0x227868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22786Cu; }
        if (ctx->pc != 0x22786Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22786Cu; }
        if (ctx->pc != 0x22786Cu) { return; }
    }
    ctx->pc = 0x22786Cu;
label_22786c:
    // 0x22786c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227870: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x227870u;
    SET_GPR_U32(ctx, 31, 0x227878u);
    ctx->pc = 0x227874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227870u;
            // 0x227874: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227878u; }
        if (ctx->pc != 0x227878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227878u; }
        if (ctx->pc != 0x227878u) { return; }
    }
    ctx->pc = 0x227878u;
label_227878:
    // 0x227878: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x227878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22787c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x22787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x227880: 0xc420cf18  lwc1        $f0, -0x30E8($at)
    ctx->pc = 0x227880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227884: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x227884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x227888: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x227888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22788c: 0xc78d9418  lwc1        $f13, -0x6BE8($gp)
    ctx->pc = 0x22788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x227890: 0xc78f9404  lwc1        $f15, -0x6BFC($gp)
    ctx->pc = 0x227890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x227894: 0x46140b00  add.s       $f12, $f1, $f20
    ctx->pc = 0x227894u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x227898: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x227898u;
    SET_GPR_U32(ctx, 31, 0x2278A0u);
    ctx->pc = 0x22789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227898u;
            // 0x22789c: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278A0u; }
        if (ctx->pc != 0x2278A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278A0u; }
        if (ctx->pc != 0x2278A0u) { return; }
    }
    ctx->pc = 0x2278A0u;
label_2278a0:
    // 0x2278a0: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x2278a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x2278a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2278a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2278a8: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x2278a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2278ac: 0xc08ca30  jal         func_2328C0
    ctx->pc = 0x2278ACu;
    SET_GPR_U32(ctx, 31, 0x2278B4u);
    ctx->pc = 0x2278B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2278ACu;
            // 0x2278b0: 0x24c6cf10  addiu       $a2, $a2, -0x30F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2328C0u;
    if (runtime->hasFunction(0x2328C0u)) {
        auto targetFn = runtime->lookupFunction(0x2328C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278B4u; }
        if (ctx->pc != 0x2278B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_f___FP11mgCDrawPrim9mgRect_f_9mgRect_i__0x2328c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278B4u; }
        if (ctx->pc != 0x2278B4u) { return; }
    }
    ctx->pc = 0x2278B4u;
label_2278b4:
    // 0x2278b4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2278B4u;
    SET_GPR_U32(ctx, 31, 0x2278BCu);
    ctx->pc = 0x2278B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2278B4u;
            // 0x2278b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278BCu; }
        if (ctx->pc != 0x2278BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2278BCu; }
        if (ctx->pc != 0x2278BCu) { return; }
    }
    ctx->pc = 0x2278BCu;
label_2278bc:
    // 0x2278bc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2278bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2278c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2278c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2278c4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2278c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2278c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2278c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2278cc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2278ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2278d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2278d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2278d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2278d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2278d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2278d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2278dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2278dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2278e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2278e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2278e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2278e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2278e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2278e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2278ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2278ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2278ECu;
            // 0x2278f0: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2278F4u;
}
